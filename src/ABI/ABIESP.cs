using System;
using System.Collections.Generic;
using System.Numerics;
using ImGuiNET;
using ImGuiOverlay.Theme;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI ESP    Draws player boxes, skeletons, health bars, name labels and death markers.
    //  Consumes the ABIPlayers frame snapshot; call Render() each frame.
    // /////////////////////////////////////////////////////////////////////////////////////

    public static class ABIESP
    {
        internal static nint[] _helmetIcons = new nint[7];
        internal static nint[] _vestIcons   = new nint[7];
        private static bool   _iconsLoaded = false;

        private static void LoadIcons()
        {
            if (_iconsLoaded) return;
            string[] colors = { "White", "Green", "Blue", "Purple", "Gold", "Red" };
            
            for (int i = 1; i <= 6; i++)
            {
                string color = colors[i - 1];
                _helmetIcons[i] = TextureLoader.LoadTexture($"Helmet{color}.png");
                _vestIcons[i]   = TextureLoader.LoadTexture($"Vest{color}.png");
            }
            _iconsLoaded = true;
        }

        public static int LastDrawnCount     { get; private set; }
        public static int LastTotalCount     { get; private set; }
        public static int LastSkeletonsDrawn { get; private set; }

        public static void Render(ABIGameConfig cfg, OverlayTheme theme, float zoomEff)
        {
            LoadIcons();

            if (!ABIPlayers.TryGetFrame(out var fr))
            {
                LastDrawnCount = 0;
                LastTotalCount = 0;
                LastSkeletonsDrawn = 0;
                return;
            }
            var positions = fr.Positions;
            if (positions == null || positions.Count == 0)
            {
                LastDrawnCount = 0;
                LastTotalCount = 0;
                LastSkeletonsDrawn = 0;
                return;
            }

            int drawnCount = 0;
            int skelCount  = 0;

            var list = ImGui.GetForegroundDrawList();
            var io   = ImGui.GetIO();
            float scrW = io.DisplaySize.X, scrH = io.DisplaySize.Y;
            float zoom = MathF.Max(1f, zoomEff);

            var cam   = ABIPlayers.Camera;
            var local = ABIPlayers.LocalPosition;

            bool W2S(in Vector3 ws, out Vector2 sp)
                => ABIMath.WorldToScreen(ws, cam, scrW, scrH, zoom, out sp);

            for (int i = 0; i < positions.Count; i++)
            {
                var ap = positions[i];
                if (ap.Faction == ABIPlayers.FactionType.Dummy && !cfg.DrawTargetDummies) continue;
                if (IsBogusPos(ap.Position) || ap.Position.Z < -5000f || ap.Position.Z > 100000f)
                {
                    if (cfg.ShowDebug)
                        ABIPlayers.DebugLog("Flicker", $"ESP skip 0x{ap.Pawn:X} ({ap.Name}): bogus position {ap.Position}");
                    continue;
                }

                Vector3 velOffset = Vector3.Zero;
                if (cfg.EnablePositionSmoothing && !ap.IsDead && ap.Velocity.LengthSquared() > 100f)
                {
                    long stamp = ap.DmaStamp > 0 ? ap.DmaStamp : fr.Stamp;
                    float dt = (float)(System.Diagnostics.Stopwatch.GetTimestamp() - stamp) / System.Diagnostics.Stopwatch.Frequency;
                    if (dt > 0.0001f && dt < 0.035f)
                    {
                        velOffset = ap.Velocity * dt;
                        ap.Position += velOffset;
                    }
                }

                float distM = Vector3.Distance(local, ap.Position) / 100f;
                bool isZombieActor = (ap.CharTypeName != null && ap.CharTypeName.Contains("Zombie", StringComparison.OrdinalIgnoreCase)) || ap.IsZombie;
                bool isBotActor = !isZombieActor && (ap.Faction == ABIPlayers.FactionType.Bot || ap.Faction == ABIPlayers.FactionType.Boss || ap.IsBot);

                float allowedMaxDist = isZombieActor ? cfg.ZombieMaxDistance : (isBotActor ? cfg.AiMaxDistance : cfg.PlayerMaxDistance);
                if (distM > allowedMaxDist)
                {
                    if (cfg.ShowDebug)
                        ABIPlayers.DebugLog("Flicker", $"ESP skip 0x{ap.Pawn:X} ({ap.Name}): distance {distM:F0}m > {allowedMaxDist:F0}m");
                    continue;
                }

                // ---- OFF-SCREEN ARROW WARNING ----
                if (cfg.DrawOffscreenArrows && !ap.IsDead)
                {
                    bool isTargetForArrow = (ap.Faction == ABIPlayers.FactionType.Enemy || 
                                             ap.Faction == ABIPlayers.FactionType.Team || 
                                             ap.Faction == ABIPlayers.FactionType.Boss || 
                                             ap.CharTypeName == "Guard" ||
                                             (ap.CharTypeName != null && ap.CharTypeName.Contains("Zombie", StringComparison.OrdinalIgnoreCase)));

                    if (isTargetForArrow)
                    {
                        Vector2 screenPos;
                        bool inScreen = W2S(ap.Position, out screenPos);
                        bool offScreen = !inScreen || screenPos.X < 0 || screenPos.X > scrW || screenPos.Y < 0 || screenPos.Y > scrH;
                        
                        if (offScreen)
                        {
                            // Calculate angle in radians
                            Vector2 diff = new Vector2(ap.Position.X - cam.Location.X, ap.Position.Y - cam.Location.Y);
                            float targetAngle = MathF.Atan2(diff.Y, diff.X) * (180f / MathF.PI);
                            float relativeAngle = targetAngle - cam.Rotation.Yaw;
                            float relRad = relativeAngle * (MathF.PI / 180f);
                            float screenAngle = relRad - MathF.PI / 2f;

                            // Radius of the circle to place arrow
                            float R = cfg.OffscreenArrowRadius;
                            Vector2 screenCenter = new Vector2(scrW * 0.5f, scrH * 0.5f);
                            
                            // Calculate small triangle points pointing outwards
                            Vector2 dir = new Vector2(MathF.Cos(screenAngle), MathF.Sin(screenAngle));
                            Vector2 right = new Vector2(-dir.Y, dir.X);
                            
                            float arrowHeight = cfg.OffscreenArrowSize;
                            float baseWidth = cfg.OffscreenArrowSize;
                            
                            Vector2 peak = screenCenter + dir * (R + arrowHeight);
                            Vector2 leftBase = screenCenter + dir * R - right * (baseWidth * 0.5f);
                            Vector2 rightBase = screenCenter + dir * R + right * (baseWidth * 0.5f);

                            // Select color based on faction/type
                            uint arrowColor = 0xFFFFFFFF; // White
                            if (ap.CharTypeName != null && ap.CharTypeName.Contains("Zombie", StringComparison.OrdinalIgnoreCase))
                            {
                                arrowColor = (ap.Faction == ABIPlayers.FactionType.Boss || ap.CharTypeName.Contains("Boss", StringComparison.OrdinalIgnoreCase))
                                    ? 0xFFFF00FF   // Magenta/Purple (Zombie Boss)
                                    : 0xFF32CD32;  // Lime Green (Zombie)
                            }
                            else
                            {
                                switch (ap.Faction)
                                {
                                    case ABIPlayers.FactionType.Team:
                                        arrowColor = 0xFFFFFF00; // Cyan (ABGR)
                                        break;
                                    case ABIPlayers.FactionType.Enemy:
                                        arrowColor = 0xFF0000FF; // Red
                                        break;
                                    case ABIPlayers.FactionType.Boss:
                                        arrowColor = 0xFF006400; // Stim/Green (Boss)
                                        break;
                                    case ABIPlayers.FactionType.Bot:
                                        if (ap.CharTypeName == "Guard")
                                            arrowColor = 0xFF008CFF; // Orange (Guard)
                                        break;
                                }
                            }

                            // Draw triangle
                            list.AddTriangleFilled(peak, leftBase, rightBase, arrowColor);

                            // Draw distance if enabled
                            if (cfg.DrawOffscreenDistance)
                            {
                                string distText = $"{distM:F0}m";
                                float fontScale = cfg.OffscreenArrowFontSize;
                                ImGui.SetWindowFontScale(fontScale);
                                var distSize = ImGui.CalcTextSize(distText);
                                ImGui.SetWindowFontScale(1.0f);

                                // Position the text slightly inwards towards the center of the screen
                                float textDistance = R - 10f - (arrowHeight * 0.5f);
                                Vector2 textPos = new Vector2(
                                    screenCenter.X + dir.X * textDistance - (distSize.X * fontScale) * 0.5f,
                                    screenCenter.Y + dir.Y * textDistance - (distSize.Y * fontScale) * 0.5f
                                );

                                ImGui.SetWindowFontScale(fontScale);
                                // Draw outline for readability
                                list.AddText(new Vector2(textPos.X - 1, textPos.Y), 0xFF000000, distText);
                                list.AddText(new Vector2(textPos.X + 1, textPos.Y), 0xFF000000, distText);
                                list.AddText(new Vector2(textPos.X, textPos.Y - 1), 0xFF000000, distText);
                                list.AddText(new Vector2(textPos.X, textPos.Y + 1), 0xFF000000, distText);
                                list.AddText(textPos, 0xFFFFFFFF, distText);
                                ImGui.SetWindowFontScale(1.0f);
                            }
                        }
                    }
                }

                bool hasBones = ABIPlayers.TryGetSkeleton(ap.Pawn, out var bones) && bones != null && bones.Length >= 20;

                Vector2 headSc = default, footSc = default;
                bool hasHeadFoot = false;
                if (hasBones)
                {
                    Vector3 feetWorld = (bones![ABISkeleton.IDX_Foot_L] + bones[ABISkeleton.IDX_Foot_R]) * 0.5f;
                    hasHeadFoot = W2S(bones[ABISkeleton.IDX_Head], out headSc)
                               && W2S(feetWorld,                    out footSc);
                }

                Vector2 fallbackSc = default;
                if (!hasHeadFoot && !W2S(ap.Position, out fallbackSc)) continue;
                Vector2 markerSc = hasHeadFoot ? footSc : fallbackSc;

                if (ap.IsDead)
                {
                    if (isZombieActor) continue;

                    if (cfg.DrawDeathMarkers && distM <= cfg.DeathMarkerMaxDist)
                    {
                        bool isBotCorpse = ap.Faction == ABIPlayers.FactionType.Bot || ap.Faction == ABIPlayers.FactionType.Boss;

                        // Force Red for Players, Yellow for Bots
                        uint outlineColor = isBotCorpse ? 0xFF00D7FF : 0xFF0000FF; // ABGR: Yellow (Gold), Red

                        DrawDiamond(list, markerSc, distM, cfg.DeathMarkerBaseSize,
                            OverlayTheme.ToU32(cfg.DeadFill),
                            outlineColor);

                        string lbl = $"{distM:F0}m";
                        if (ap.InventoryValue > 0)
                        {
                            lbl += $" [{ap.InventoryValue / 1000}k]";
                        }

                        var ts = ImGui.CalcTextSize(lbl);
                        list.AddText(new Vector2(markerSc.X - ts.X / 2, markerSc.Y + cfg.DeathMarkerBaseSize + 4),
                                0xFFFFFFFF, lbl);
                    }
                    continue;
                }

                if (!cfg.DrawZombies && ap.CharTypeName != null && ap.CharTypeName.Contains("Zombie", StringComparison.OrdinalIgnoreCase)) continue;

                bool isVis = ap.IsVisible;
                uint clrName; string prefix;
                bool isZombie = ap.CharTypeName != null && ap.CharTypeName.Contains("Zombie", StringComparison.OrdinalIgnoreCase);
                if (isZombie)
                {
                    bool isZombieBoss = ap.Faction == ABIPlayers.FactionType.Boss || (ap.CharTypeName != null && ap.CharTypeName.Contains("Boss", StringComparison.OrdinalIgnoreCase));
                    clrName = isZombieBoss ? 0xFFFF00FF : 0xFF32CD32; // Magenta (Zombie Boss) or Lime Green (Normal Zombie) in ABGR
                    prefix = isZombieBoss ? "[ZOMBIE BOSS]" : "[ZOMBIE]";
                }
                else
                {
                    switch (ap.Faction)
                    {
                        case ABIPlayers.FactionType.Team: 
                            clrName = 0xFFFFFF00; // Cyan (ABGR)
                            prefix = "[TEAM]"; 
                            break;
                        case ABIPlayers.FactionType.Enemy:
                            int teamId = ap.TeamId;
                            int safeTeam = teamId < 0 ? -teamId : teamId;
                            uint sqH = (uint)((safeTeam % 8) * 15);
                            clrName = ImGui.ColorConvertFloat4ToU32(new Vector4(1.0f, 0.3f + (sqH / 255f), 0.1f, 1.0f));
                            prefix = teamId > 0 ? $"[T{teamId}]" : ""; 
                            break;
                        case ABIPlayers.FactionType.Boss: clrName = 0xFF006400; prefix = "[BOT+STIM]"; break;
                        case ABIPlayers.FactionType.Bot: clrName = 0xFF00FF00; prefix = "[BOT]"; break;
                        case ABIPlayers.FactionType.Dummy: clrName = 0xFF888888; prefix = "[DUMMY]"; break;
                        default: clrName = 0xFFFFFFFF; prefix = "[UNK]"; break;
                    }
                }

                uint clrBox  = OverlayTheme.ToU32(isVis ? cfg.ColorBoxVisible  : cfg.ColorBoxInvisible);
                uint clrSkel = OverlayTheme.ToU32(isVis ? cfg.ColorSkelVisible : cfg.ColorSkelInvisible);

                Vector2 min2, max2;
                if (hasHeadFoot)
                {
                    int[] bb = { ABISkeleton.IDX_Head, ABISkeleton.IDX_Pelvis, ABISkeleton.IDX_Hand_L, ABISkeleton.IDX_Hand_R, ABISkeleton.IDX_Foot_L, ABISkeleton.IDX_Foot_R };
                    Vector2 bbMin = headSc, bbMax = headSc;
                    foreach (int bi in bb) { if (!W2S(bones![bi], out var sp)) continue; bbMin.X = MathF.Min(bbMin.X, sp.X); bbMin.Y = MathF.Min(bbMin.Y, sp.Y); bbMax.X = MathF.Max(bbMax.X, sp.X); bbMax.Y = MathF.Max(bbMax.Y, sp.Y); }
                    float wB = MathF.Max(18f, bbMax.X - bbMin.X), hB = MathF.Max(42f, bbMax.Y - bbMin.Y);
                    float pX = MathF.Min(12f, wB * 0.12f), pY = MathF.Min(14f, hB * 0.10f);
                    min2 = new Vector2(bbMin.X - pX, bbMin.Y - pY); max2 = new Vector2(bbMax.X + pX, bbMax.Y + pY);
                }
                else
                {
                    Vector3 headWorld = ap.Position + new Vector3(0, 0, 85f);
                    Vector3 feetWorld = ap.Position - new Vector3(0, 0, 85f);
                    if (W2S(headWorld, out var hSc) && W2S(feetWorld, out var fSc))
                    {
                        float bh = MathF.Abs(fSc.Y - hSc.Y);
                        float bw = MathF.Max(16f, bh * 0.45f);
                        float midScX = (hSc.X + fSc.X) * 0.5f;
                        min2 = new Vector2(midScX - bw / 2, MathF.Min(hSc.Y, fSc.Y));
                        max2 = new Vector2(midScX + bw / 2, MathF.Max(hSc.Y, fSc.Y));
                    }
                    else
                    {
                        float bh = Math.Clamp(150f / MathF.Max(distM, 3f), 30f, 250f);
                        float bw = bh * 0.40f;
                        min2 = new Vector2(fallbackSc.X - bw / 2, fallbackSc.Y - bh * 0.5f);
                        max2 = new Vector2(fallbackSc.X + bw / 2, fallbackSc.Y + bh * 0.5f);
                    }
                }

                if (cfg.DrawBoxes) DrawCornerBox(list, min2, max2, clrBox, 1.5f);
                
                // Labels Layout
                float midX = (min2.X + max2.X) * 0.5f;
                float topY = min2.Y - 20f;

                // 1. Armor (Top)
                if (cfg.DrawArmor) {
                    if (ap.HelmetLevel > 0 || ap.VestLevel > 0) {
                        float iconSize = 16f;
                        float padding = 4f;
                        float totalW = 0;
                        if (ap.HelmetLevel > 0) totalW += iconSize + padding + ImGui.CalcTextSize($"{ap.HelmetDurability:F0}/{ap.HelmetMaxDurability:F0}").X;
                        if (ap.VestLevel > 0) {
                            if (totalW > 0) totalW += padding;
                            totalW += iconSize + padding + ImGui.CalcTextSize($"{ap.VestDurability:F0}/{ap.VestMaxDurability:F0}").X;
                        }
                        
                        float startX = midX - totalW / 2;
                        topY -= (iconSize + 2f);
                        
                        if (ap.HelmetLevel > 0) {
                            nint icon = _helmetIcons[Math.Clamp(ap.HelmetLevel, 1, 6)];
                            if (icon != 0) list.AddImage(icon, new Vector2(startX, topY), new Vector2(startX + iconSize, topY + iconSize));
                            startX += iconSize + padding;
                            string hpText = $"{ap.HelmetDurability:F0}/{ap.HelmetMaxDurability:F0}";
                            list.AddText(new Vector2(startX, topY + 1f), 0xFFAAAAAA, hpText);
                            startX += ImGui.CalcTextSize(hpText).X + padding;
                        }

                        if (ap.VestLevel > 0) {
                            nint icon = _vestIcons[Math.Clamp(ap.VestLevel, 1, 6)];
                            if (icon != 0) list.AddImage(icon, new Vector2(startX, topY), new Vector2(startX + iconSize, topY + iconSize));
                            startX += iconSize + padding;
                            string hpText = $"{ap.VestDurability:F0}/{ap.VestMaxDurability:F0}";
                            list.AddText(new Vector2(startX, topY + 1f), 0xFFAAAAAA, hpText);
                        }
                    }
                }

                // 2. Name
                // 2. Name & Status Alerts (Top)
                if (cfg.DrawNames) {
                    string dispName = (ap.Faction == ABIPlayers.FactionType.Bot || ap.Faction == ABIPlayers.FactionType.Boss) 
                        ? ap.CharTypeName 
                        : ap.Name;
                    string fullPrefix = cfg.DrawTeam ? prefix : "";
                    string fullName = $"{fullPrefix} {dispName}".Trim();
                    var ts = ImGui.CalcTextSize(fullName);
                    list.AddText(new Vector2(midX - ts.X/2, min2.Y - 18), clrName, fullName);

                    // S7 Tactical Alerts above name
                    float alertY = min2.Y - 32f;
                    if (cfg.DrawDownedAlert && ap.IsDowned)
                    {
                        string dText;
                        uint dColor;
                        if (ap.IsBeingRevived)
                        {
                            dText = "[BEING REVIVED]";
                            dColor = 0xFF00A5FF; // Orange
                        }
                        else if (ap.CanSelfRevive)
                        {
                            dText = "[SELF-REVIVING!]";
                            dColor = 0xFF0055FF; // Red-Orange
                        }
                        else
                        {
                            dText = "[DOWNED]";
                            dColor = 0xFF00D7FF; // Yellow/Gold
                        }
                        var dTs = ImGui.CalcTextSize(dText);
                        list.AddText(new Vector2(midX - dTs.X/2, alertY), dColor, dText);
                        alertY -= 14f;
                    }
                    if (cfg.DrawReloadAlert && ap.IsReloading)
                    {
                        string rText = "[RELOADING]";
                        var rTs = ImGui.CalcTextSize(rText);
                        list.AddText(new Vector2(midX - rTs.X/2, alertY), 0xFF00A5FF, rText); // Orange
                        alertY -= 14f;
                    }
                    if (cfg.DrawGrenadeAlert && ap.IsCookingGrenade)
                    {
                        string gText = "[HOLDING GRENADE]";
                        var gTs = ImGui.CalcTextSize(gText);
                        list.AddText(new Vector2(midX - gTs.X/2, alertY), 0xFF0000FF, gText); // Red
                        alertY -= 14f;
                    }
                }

                float curY = max2.Y + 2f;
                if (cfg.DrawDistance) {
                    list.AddText(new Vector2(midX - 14, curY), 0xFFFFFFFF, $"{distM:F0}m");
                    curY += 14f;
                }

                // Advanced Info (Bottom) - Weapon & Ammo Tier
                if (cfg.DrawWeapon && !string.IsNullOrEmpty(ap.WeaponName) && ap.WeaponName != "Unarmed") {
                    string wText = ap.WeaponName;
                    if (ap.MaxAmmo > 0) wText += $" [{ap.CurAmmo}/{ap.MaxAmmo}]";
                    if (cfg.DrawAmmoTier && !string.IsNullOrEmpty(ap.AmmoName))
                    {
                        wText += $" {ap.AmmoName}";
                        if (ap.AmmoTier > 0) wText += $" [T{ap.AmmoTier}]";
                    }
                    var wTs = ImGui.CalcTextSize(wText);
                    uint wepColor = (cfg.DrawAmmoTier && ap.AmmoTier > 0) ? ap.AmmoTier switch
                    {
                        6 => 0xFF0000FF, // Tier 6 Red
                        5 => 0xFF00D7FF, // Tier 5 Gold
                        4 => 0xFFD02090, // Tier 4 Purple
                        3 => 0xFFFF8000, // Tier 3 Blue
                        1 or 2 => 0xFF00FF7F, // Tier 1-2 Green
                        _ => 0xFFEEEEEE
                    } : 0xFFEEEEEE;
                    list.AddText(new Vector2(midX - wTs.X/2, curY), wepColor, wText);
                    curY += 13f;
                }
                if (cfg.DrawInventoryValue && ap.InventoryValue >= cfg.MinInventoryValue && ap.InventoryValue > 0) {
                    string iText = $"Value: {ap.InventoryValue:N0}";
                    var iTs = ImGui.CalcTextSize(iText);
                    list.AddText(new Vector2(midX - iTs.X/2, curY), 0xFFD7FF00, iText);
                    curY += 13f;
                }

                if (cfg.DrawGearList && ImGuiOverlay.Input.InputManager.IsKeyDown(cfg.GearListKey))
                {
                    if (ap.GearList != null && ap.GearList.Count > 0)
                    {
                        float gearY = min2.Y;
                        float gearX = max2.X + 6f;
                        float textHeight = 11f;
                        float maxTextWidth = 0f;

                        // Calculate box size
                        foreach (var gear in ap.GearList)
                        {
                            string gText = $"{gear.name} ({gear.value / 1000}k)";
                            maxTextWidth = MathF.Max(maxTextWidth, ImGui.CalcTextSize(gText).X * cfg.GearListFontSize);
                        }

                        // Draw box
                        float boxH = (ap.GearList.Count * textHeight * (cfg.GearListFontSize/0.85f)) + 4f;
                        list.AddRectFilled(new Vector2(gearX - 2, gearY - 2), 
                                           new Vector2(gearX + maxTextWidth + 6, gearY + boxH), 
                                           0xFF000000, 2f); // Pitch Black

                        ImGui.SetWindowFontScale(cfg.GearListFontSize);
                        uint gearCol = OverlayTheme.ToU32(cfg.ColorGearList);
                        foreach (var gear in ap.GearList)
                        {
                            string gText = $"{gear.name} ({gear.value / 1000}k)";
                            list.AddText(new Vector2(gearX, gearY), gearCol, gText); 
                            gearY += textHeight * (cfg.GearListFontSize/0.85f);
                        }
                        ImGui.SetWindowFontScale(1.0f);
                    }
                }

                if (ap.HealthMax > 1f)
                    DrawVerticalHealthBar(list, min2, max2, ap.Health, ap.HealthMax);

                if (cfg.DrawSkeletons && hasBones && !isZombieActor && distM <= cfg.MaxSkeletonDistance)
                {
                    ABISkeleton.Draw(list, bones!, cam, scrW, scrH, clrSkel, zoom);
                    skelCount++;
                }

                drawnCount++;
            }

            LastDrawnCount     = drawnCount;
            LastTotalCount     = positions.Count;
            LastSkeletonsDrawn = skelCount;
        }

        public static void RenderUniversalDebug(ABIGameConfig cfg, FMinimalViewInfo cam, float scrW, float scrH, float zoom)
        {
            if (!cfg.DrawDebugEsp) return;
            List<ABIPlayers.DebugActorInfo> actors;
            lock (ABIPlayers.Sync) actors = new List<ABIPlayers.DebugActorInfo>(ABIPlayers.DebugActors);
            if (actors.Count == 0) return;
            var list = ImGui.GetBackgroundDrawList(); uint col = 0xFF00FFFF;
            foreach (var a in actors) {
                if (!ABIMath.WorldToScreen(a.Pos, cam, scrW, scrH, zoom, out var s)) continue;
                float d = Vector3.Distance(ABIPlayers.LocalPosition, a.Pos) / 100f;
                if (d > cfg.DebugEspMaxDistance) continue;
                list.AddCircle(s, 3f, col, 8, 1f); string lbl = $"<{a.Name}> [{d:F0}m]";
                var ts = ImGui.CalcTextSize(lbl); list.AddText(new Vector2(s.X - ts.X / 2, s.Y + 5), col, lbl);
            }
        }

        public static bool IsBogusPos(in Vector3 p)
            => MathF.Abs(p.X) <= 0.5f && MathF.Abs(p.Y) <= 0.5f && MathF.Abs(p.Z + 90f) <= 1.0f;

        private static void DrawCornerBox(ImDrawListPtr list, Vector2 min, Vector2 max, uint color, float t)
        {
            float w = max.X - min.X, h = max.Y - min.Y;
            float c = MathF.Min(20, MathF.Min(w * 0.25f, h * 0.25f));
            list.AddLine(min, new(min.X + c, min.Y), color, t); list.AddLine(min, new(min.X, min.Y + c), color, t);
            list.AddLine(new(max.X - c, min.Y), new(max.X, min.Y), color, t); list.AddLine(new(max.X, min.Y), new(max.X, min.Y + c), color, t);
            list.AddLine(new(min.X, max.Y - c), new(min.X, max.Y), color, t); list.AddLine(new(min.X, max.Y), new(min.X + c, max.Y), color, t);
            list.AddLine(new(max.X - c, max.Y), max, color, t); list.AddLine(max, new(max.X, max.Y - c), color, t);
        }

        private static void DrawDiamond(ImDrawListPtr list, Vector2 center, float distM, float baseSizePx, uint fill, uint outline)
        {
            float sz = Math.Clamp(baseSizePx * (120f / MathF.Max(distM, 8f)), baseSizePx * 0.4f, baseSizePx * 1.2f);
            var p0 = new Vector2(center.X, center.Y - sz); var p1 = new Vector2(center.X + sz, center.Y);
            var p2 = new Vector2(center.X, center.Y + sz); var p3 = new Vector2(center.X - sz, center.Y);
            list.AddQuadFilled(p0, p1, p2, p3, fill); float th = MathF.Max(1.2f, baseSizePx * 0.16f);
            list.AddLine(p0, p1, outline, th); list.AddLine(p1, p2, outline, th); list.AddLine(p2, p3, outline, th); list.AddLine(p3, p0, outline, th);
        }

        private static void DrawVerticalHealthBar(ImDrawListPtr list, Vector2 min, Vector2 max, float health, float maxHealth)
        {
            float h = max.Y - min.Y, pct = Math.Clamp(maxHealth > 0f ? health / maxHealth : 0f, 0f, 1f);
            float width = 3f, pad = 4f;
            var bgMin = new Vector2(min.X - pad - width, min.Y); var bgMax = new Vector2(min.X - pad, max.Y);
            Vector4 col4 = new Vector4(pct > 0.5f ? (1.0f - pct) * 2.0f : 1.0f, pct > 0.5f ? 1.0f : pct * 2.0f, 0f, 1.0f);
            uint col = ImGui.ColorConvertFloat4ToU32(col4);
            list.AddRectFilled(bgMin, bgMax, 0xD9000000);
            float barH = h * pct; var barMin = new Vector2(bgMin.X, bgMax.Y - barH);
            list.AddRectFilled(barMin, bgMax, col);
            list.AddRect(bgMin, bgMax, 0xFF000000, 0, ImDrawFlags.None, 1f);
        }
    }
}
