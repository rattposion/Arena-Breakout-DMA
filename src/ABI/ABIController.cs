using System;
using System.Diagnostics;
using System.Numerics;
using ImGuiNET;
using ImGuiOverlay.Config;
using ImGuiOverlay.DMA;
using ImGuiOverlay.Theme;
using ImGuiOverlay.Input;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI CONTROLLER
    //  Orchestrates the entire game logic: lifecycle, data fetching, ESP rendering, and weapon automation.
    // /////////////////////////////////////////////////////////////////////////////////////

    public sealed class ABIController : IDisposable
    {
        private readonly OverlayTheme _theme;
        private readonly ABIGameConfig _cfg;

        private bool _running;

        // Aimbot state
        private Vector2? _lastAimScreen;
        private long     _lastAimTicks;
        private Vector2  _moveAccum;
        private Vector3  _lastAimWorld;
        private ulong    _lastTargetPawn;
        private long     _targetSwitchTime;
        private Random   _rnd = new Random();

        // Triggerbot state
        private bool _triggerbotFiring;
        private long _triggerbotFireAt;   // Stopwatch ticks when we should click
        private long _triggerbotReleaseAt;

        // Calibration state
        public enum CalibState { Idle, WaitingDelay, WaitingResult, Done }
        public static CalibState  CalibStatus      = CalibState.Idle;
        public static float       CalibPxPerCountX = 0f;
        public static float       CalibPxPerCountY = 0f;
        public static string      CalibLog         = "Not run yet.";

        public ABIGameConfig Config => _cfg;
        public bool IsRunning       => _running;

        public ABIController(OverlayTheme theme)
        {
            _theme = theme;
            _cfg   = ConfigManager.Load<ABIGameConfig>("abi_config.json");
            ABIPlayers.Config = _cfg;

            // Migration: Upgrade defaults and force new values ONCE
            bool needsSave = false;
            if (_cfg.LootMinPriceRegular == 5000)
            {
                _cfg.LootMinPriceRegular = 20000;
                DMA.Logger.Info("[Config] Upgraded Min Price (Regular) to 20,000.");
                needsSave = true;
            }

            // Perform version/integrity checks but don't FORCE every launch to allow user saving.
            if (_cfg.AimbotFovPx < 1f) { _cfg.AimbotFovPx = 140f; needsSave = true; }

            if (needsSave) ConfigManager.Save(_cfg, "abi_config.json");
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  Lifecycle
        // /////////////////////////////////////////////////////////////////////////////////////

        public void Start()
        {
            if (_running || !DmaMemory.IsAttached) return;
            _running = true;

            // Auto-connect KmboxNet on startup
            if (!KmboxNet.IsConnected)
            {
                DMA.Logger.Info($"[Kmbox] Auto-connecting to {_cfg.KmboxIP}...");
                KmboxNet.Init(_cfg.KmboxIP, _cfg.KmboxPort, _cfg.KmboxMAC);
            }

            TimerResolution.Enable1ms();
            ABIPlayers.StartCache();
            ABILoot.Start();
        }

        public void Stop()
        {
            if (!_running) return;
            _running = false;
            ABIPlayers.Stop();
            ABILoot.Stop();
            TimerResolution.Disable1ms();
        }

        public void Dispose()
        {
            Stop();
            ConfigManager.Save(_cfg, "abi_config.json");
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  Per-frame tick (call from OverlayApp.OnUpdate or OnRender)
        // /////////////////////////////////////////////////////////////////////////////////////

        public void Tick()
        {
            if (!_running) return;
            RunAimbot();
            RunTriggerbot();
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  Render  --  call every frame AFTER ImGui.NewFrame
        // /////////////////////////////////////////////////////////////////////////////////////

        public void Render()
        {
            if (!_running) return;

            float zoom = 1f;
            if (ABIPlayers.TryGetZoom(out var zi) && zi.Valid)
                zoom = MathF.Max(1f, zi.Zoom);

            // World ESP - Pass 1.0f zoom because ABIPlayers.Camera.Fov is already updated with dynamic ADS FOV
            ABIESP.Render(_cfg, _theme, 1.0f);
            
            var io = ImGuiNET.ImGui.GetIO();
            ABIESP.RenderUniversalDebug(_cfg, ABIPlayers.Camera, io.DisplaySize.X, io.DisplaySize.Y, 1.0f);

            // Loot ESP + widget run independently
            ABILootESP.Render(_cfg);
            ABILootWidget.Render(_cfg, ABIPlayers.LocalPosition);

            // Local Player HUD (Ammo, etc)
            ABILocalHud.Render(_cfg);

            // Debug widgets
            ABIPlayerWidget.Enabled = _cfg.DrawPlayerWidget;
            ABIPlayerWidget.Render(_cfg);

            // Aimbot FOV circle overlay
            DrawAimbotOverlay(zoom);
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  Aimbot
        // /////////////////////////////////////////////////////////////////////////////////////

        private void RunAimbot()
        {
            if (!_cfg.AimbotEnabled) return;
            if (CalibStatus == CalibState.WaitingDelay || CalibStatus == CalibState.WaitingResult) return;
            if (!IsKeyHeld(_cfg.AimbotKey)) { _moveAccum = Vector2.Zero; _lastAimScreen = null; _lastAimWorld = Vector3.Zero; _lastTargetPawn = 0; return; }

            var frame = ABIPlayers.ActorPositions;
            if (frame == null || frame.Count == 0) return;

            var localPos = ABIPlayers.LocalPosition;
            var cam      = ABIPlayers.Camera;
            var io       = ImGui.GetIO();
            float W      = io.DisplaySize.X;
            float H      = io.DisplaySize.Y;
            var center   = new Vector2(W * 0.5f, H * 0.5f);

            float zoom = 1f;
            ABIPlayers.ZoomInfo zi = default;
            if (ABIPlayers.TryGetZoom(out zi) && zi.Valid) zoom = MathF.Max(1f, zi.Zoom);

            ABIPlayers.ActorPos? target = null;
            float bestMetric = _cfg.AimbotPriority == 0 ? _cfg.AimbotFovPx : float.MaxValue; // Crosshair or Distance
            Vector3 bestAimWorld = default;
            Vector2 bestAimScreen = default;

            float bulletSpeed = 90000f;
            float gravityScale = 1f;
            bool anyPrediction = _cfg.AimbotPredictVelocity || _cfg.AimbotPredictDrop;
            if (anyPrediction && zi.Valid)
            {
                bulletSpeed = zi.ProjectileSpeed;
                gravityScale = zi.GravityScale;
            }

            foreach (var ap in frame)
            {
                if (ap.IsDead) continue;
                if (_cfg.AimbotRequireVisible && !ap.IsVisible) continue;
                if (ap.IsTeam) continue;
                
                // Bot / PMC Filtering
                if (ap.Faction == ABIPlayers.FactionType.Dummy)
                {
                    if (!_cfg.DrawTargetDummies || _cfg.AimbotTargetPMCOnly) continue;
                }
                else
                {
                    if (_cfg.AimbotTargetAIOnly && ap.Faction != ABIPlayers.FactionType.Bot && ap.Faction != ABIPlayers.FactionType.Boss) continue;
                    if (_cfg.AimbotTargetPMCOnly && ap.Faction != ABIPlayers.FactionType.Enemy) continue;
                }

                float distM = Vector3.Distance(localPos, ap.Position) / 100f;
                if (distM > _cfg.AimbotMaxMeters) continue;

                Vector3 aimWorld = ap.Position; 
                if (ABIPlayers.TryGetSkeleton(ap.Pawn, out var bones) && bones != null)
                {
                    int boneIdx = _cfg.AimbotTargetBone;
                    if (_cfg.AimbotHeadshotAI && (ap.Faction == ABIPlayers.FactionType.Bot || ap.Faction == ABIPlayers.FactionType.Boss))
                        boneIdx = ABISkeleton.IDX_Head;

                    if (boneIdx < bones.Length) aimWorld = bones[boneIdx];
                }

                if (anyPrediction)
                {
                    aimWorld = ABIMath.GetPredictedTargetPos(aimWorld, ap.Velocity, cam.Location, bulletSpeed, gravityScale, _cfg.AimbotPredictionLatency, _cfg.AimbotPredictVelocity, _cfg.AimbotPredictDrop);
                }

                // Pass 1.0f zoom to WorldToScreen because cam.Fov is already updated with dynamic ADS FOV
                if (ABIMath.WorldToScreen(aimWorld, cam, W, H, 1.0f, out var pt))
                {
                    float fovDist = Vector2.Distance(center, pt);
                    if (fovDist <= _cfg.AimbotFovPx) // Must always be within FOV
                    {
                        float metric;
                        if (_cfg.AimbotPriority == 0) metric = fovDist;
                        else if (_cfg.AimbotPriority == 1) metric = distM;
                        else metric = fovDist + (distM * 0.5f); // Hybrid: Combines FOV proximity and physical distance

                        if (metric < bestMetric) { bestMetric = metric; target = ap; bestAimWorld = aimWorld; bestAimScreen = pt; }
                    }
                }
            }

            if (target.HasValue)
            {
                if (target.Value.Pawn != _lastTargetPawn)
                {
                    _lastTargetPawn = target.Value.Pawn;
                    _targetSwitchTime = Stopwatch.GetTimestamp();
                }

                long elapsedMs = (Stopwatch.GetTimestamp() - _targetSwitchTime) * 1000 / Stopwatch.Frequency;
                if (elapsedMs < _cfg.AimbotSwitchDelayMs)
                {
                    return; // Wait before switching
                }

                PerformMove(center, bestAimScreen, bestAimWorld);
            }
            else
            {
                _lastTargetPawn = 0;
            }
        }

        private void PerformMove(Vector2 center, Vector2 screenPos, Vector3 worldPos)
        {
            var screenDelta = screenPos - center;
            if (screenDelta.Length() < _cfg.AimbotDeadzonePx) return;

            // Bone glitch guard
            if (_lastAimWorld != Vector3.Zero && Vector3.Distance(worldPos, _lastAimWorld) > 100f)
            {
                _lastAimWorld = worldPos;
                return;
            }
            _lastAimWorld = worldPos;

            _lastAimScreen = screenPos;
            _lastAimTicks  = Stopwatch.GetTimestamp();

            if (_cfg.AimbotType == 1) // Humanized
            {
                float smoothX = MathF.Max(1f, _cfg.AimbotSmooth + ((float)_rnd.NextDouble() * 2f - 1f));
                float smoothY = MathF.Max(1f, _cfg.AimbotSmooth + ((float)_rnd.NextDouble() * 2f - 1f));
                screenDelta.X /= smoothX;
                screenDelta.Y /= smoothY;

                screenDelta.X += ((float)_rnd.NextDouble() - 0.5f) * 2f;
                screenDelta.Y += ((float)_rnd.NextDouble() - 0.5f) * 2f;
            }

            _moveAccum += screenDelta * _cfg.AimbotPixelPower;

            int mx = (int)MathF.Truncate(_moveAccum.X);
            int my = (int)MathF.Truncate(_moveAccum.Y);
            _moveAccum -= new Vector2(mx, my);

            if (_cfg.AimbotInvertY) my = -my;

            if (mx == 0 && my == 0) return;

            if (Device.connected)
                Device.move(mx, my);
            else if (KmboxNet.IsConnected)
                KmboxNet.MouseMove((short)mx, (short)my);
        }

        private static bool IsKeyHeld(int vk) => InputManager.IsKeyDown(vk);

        private void RunTriggerbot()
        {
            if (!_cfg.TriggerbotEnabled) return;

            long now = Stopwatch.GetTimestamp();
            long ticksPerMs = Stopwatch.Frequency / 1000;

            if (_triggerbotFiring)
            {
                if (now >= _triggerbotReleaseAt)
                {
                    Device.press(MakcuMouseButton.Left, 0);
                    _triggerbotFiring = false;
                }
                return;
            }

            if (_triggerbotFireAt != 0 && now >= _triggerbotFireAt)
            {
                _triggerbotFireAt    = 0;
                _triggerbotFiring    = true;
                _triggerbotReleaseAt = now + ticksPerMs * _cfg.TriggerbotDurationMs;
                Device.press(MakcuMouseButton.Left, 1);
                return;
            }

            if (!IsKeyHeld(_cfg.TriggerbotKey)) { _triggerbotFireAt = 0; return; }

            if (!ABIPlayers.TryGetFrame(out var fr) || fr.Positions == null) return;

            var io     = ImGui.GetIO();
            float W    = io.DisplaySize.X, H = io.DisplaySize.Y;
            var center = new Vector2(W * 0.5f, H * 0.5f);
            float zoom = 1f;
            if (ABIPlayers.TryGetZoom(out var zi) && zi.Valid) zoom = MathF.Max(1f, zi.Zoom);

            const float CrosshairPx = 12f;
            bool onTarget = false;

            foreach (var ap in fr.Positions)
            {
                if (ap.IsDead || ap.IsTeam) continue;
                if (_cfg.TriggerbotRequireVisible && !ap.IsVisible) continue;

                if (ABIPlayers.TryGetSkeleton(ap.Pawn, out var bn) && bn != null)
                {
                    foreach (var b in bn)
                    {
                        if (!float.IsFinite(b.X) || b == Vector3.Zero) continue;
                        if (!ABIMath.WorldToScreen(b, ABIPlayers.Camera, W, H, zoom, out var bpt)) continue;
                        if (Vector2.Distance(center, bpt) <= CrosshairPx) { onTarget = true; break; }
                    }
                }
                if (onTarget) break;

                if (!ABIMath.WorldToScreen(ap.Position, ABIPlayers.Camera, W, H, zoom, out var pt)) continue;
                if (Vector2.Distance(center, pt) <= CrosshairPx) { onTarget = true; break; }
            }

            if (onTarget && _triggerbotFireAt == 0)
            {
                _triggerbotFireAt = now + ticksPerMs * _cfg.TriggerbotDelayMs;
            }
            else if (!onTarget)
            {
                _triggerbotFireAt = 0;
            }
        }

        public void TriggerCalibration()
        {
            if (CalibStatus == CalibState.WaitingDelay || CalibStatus == CalibState.WaitingResult) return;
            CalibStatus = CalibState.WaitingDelay;

            Task.Run(async () =>
            {
                var sw = Stopwatch.StartNew();
                while (sw.Elapsed.TotalSeconds < 10.0)
                {
                    int left = 10 - (int)sw.Elapsed.TotalSeconds;
                    CalibLog = $"Firing in {left}s ?? keep aim on target...";
                    await Task.Delay(200);
                }

                CalibLog = "Reading pre-move target position...";
                Vector2 preScreen = default;
                int sentX = 0, sentY = 0;
                bool found = false;

                if (ABIPlayers.TryGetFrame(out var fr) && fr.Positions != null)
                {
                    var io = ImGui.GetIO();
                    float W = io.DisplaySize.X, H = io.DisplaySize.Y;
                    var center = new Vector2(W * 0.5f, H * 0.5f);
                    float zoom = 1f;
                    if (ABIPlayers.TryGetZoom(out var zi) && zi.Valid) zoom = MathF.Max(1f, zi.Zoom);

                    float bestDist = float.MaxValue;
                    foreach (var ap in fr.Positions)
                    {
                        if (ap.IsDead) continue;
                        Vector3 aw = ap.Position;
                        if (ABIPlayers.TryGetSkeleton(ap.Pawn, out var bn) && bn != null && _cfg.AimbotTargetBone < bn.Length)
                        { var b = bn[_cfg.AimbotTargetBone]; if (float.IsFinite(b.X) && b != Vector3.Zero) aw = b; }
                        if (!ABIMath.WorldToScreen(aw, ABIPlayers.Camera, W, H, zoom, out var pt)) continue;
                        float d = Vector2.Distance(center, pt);
                        if (d < bestDist) { bestDist = d; preScreen = pt; found = true; }
                    }

                    if (found)
                    {
                        var delta = preScreen - center;
                        sentX = delta.X >= 0 ? 1 : -1;
                        sentY = delta.Y >= 0 ? 1 : -1;
                    }
                }

                if (!found) { CalibLog = "No target found."; CalibStatus = CalibState.Done; return; }

                CalibStatus = CalibState.WaitingResult;
                if (Device.connected) Device.move(sentX, sentY);
                await Task.Delay(500);

                Vector2 postScreen = default;
                bool foundPost = false;

                if (ABIPlayers.TryGetFrame(out var fr2) && fr2.Positions != null)
                {
                    var io2 = ImGui.GetIO();
                    float W2 = io2.DisplaySize.X, H2 = io2.DisplaySize.Y;
                    var center2 = new Vector2(W2 * 0.5f, H2 * 0.5f);
                    float zoom2 = 1f;
                    if (ABIPlayers.TryGetZoom(out var zi2) && zi2.Valid) zoom2 = MathF.Max(1f, zi2.Zoom);

                    float bestDist2 = float.MaxValue;
                    foreach (var ap in fr2.Positions)
                    {
                        if (ap.IsDead) continue;
                        Vector3 aw = ap.Position;
                        if (ABIPlayers.TryGetSkeleton(ap.Pawn, out var bn) && bn != null && _cfg.AimbotTargetBone < bn.Length)
                        { var b = bn[_cfg.AimbotTargetBone]; if (float.IsFinite(b.X) && b != Vector3.Zero) aw = b; }
                        if (!ABIMath.WorldToScreen(aw, ABIPlayers.Camera, W2, H2, zoom2, out var pt)) continue;
                        float d = Vector2.Distance(center2, pt);
                        if (d < bestDist2) { bestDist2 = d; postScreen = pt; foundPost = true; }
                    }
                }

                if (!foundPost) { CalibLog = "Could not read target after move."; CalibStatus = CalibState.Done; return; }

                float dxPx = (preScreen.X - postScreen.X) * sentX;
                float dyPx = (preScreen.Y - postScreen.Y) * sentY;
                CalibPxPerCountX = dxPx;
                CalibPxPerCountY = dyPx;
                float idealX = dxPx > 0.5f ? 1f / dxPx : 0f;
                float idealY = dyPx > 0.5f ? 1f / dyPx : 0f;

                CalibLog = $"X={dxPx:F1} Y={dyPx:F1} | Ideal Power: X={idealX:F4} Y={idealY:F4}";
                CalibStatus = CalibState.Done;
            });
        }

        private void DrawAimbotOverlay(float zoom)
        {
            if (!_cfg.AimbotEnabled) return;

            var io    = ImGui.GetIO();
            var center = io.DisplaySize * 0.5f;
            var dl    = ImGui.GetBackgroundDrawList();

            float r = MathF.Max(4f, _cfg.AimbotFovPx);
            dl.AddCircle(center, r, 0x54FFFFFF, 64, 1.6f);

            if (_lastAimScreen.HasValue)
            {
                double ageMs = (Stopwatch.GetTimestamp() - _lastAimTicks) * 1000.0 / Stopwatch.Frequency;
                if (ageMs <= 350.0)
                {
                    var tgt = _lastAimScreen.Value;
                    dl.AddLine(center, tgt, 0xE617E617, 2f);
                    dl.AddCircleFilled(tgt, 4f, 0xE617E617, 24);
                    dl.AddCircle(tgt, 4f, 0xE6000000, 24, 1.6f);
                }
            }
        }
    }
}
