using System;
using System.Numerics;
using ImGuiNET;
using ImGuiOverlay.ABI;
using ImGuiOverlay.Config;
using ImGuiOverlay.Theme;
using ImGuiOverlay.Input;

namespace ImGuiOverlay.UI.Menus
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI ESP MENU
    // /////////////////////////////////////////////////////////////////////////////////////

    public class ABIEspMenu : MenuBase
    {
        private ABIGameConfig _abi;

        private static readonly int[] VkKeys   = { 0x02, 0x01, 0x12, 0x10, 0x11, 0x05, 0x06 };
        private static readonly string[] VkNames = { "RButton", "LButton", "Alt", "Shift", "Ctrl", "Mouse4", "Mouse5" };

        public ABIEspMenu(OverlaySettings s, OverlayTheme t, ABIGameConfig abi) : base(s, t) => _abi = abi;

        public override void Render()
        {
            SectionHeader("PLAYER ESP");

            ImGui.Checkbox("Enable Boxes",    ref _abi.DrawBoxes);
            ImGui.SameLine(180);
            ImGui.Checkbox("Names",           ref _abi.DrawNames);

            ImGui.Checkbox("Distance",        ref _abi.DrawDistance);
            ImGui.SameLine(180);
            ImGui.Checkbox("Skeletons",       ref _abi.DrawSkeletons);

            ImGui.Checkbox("Team",            ref _abi.DrawTeam);
            ImGui.SameLine(180);
            ImGui.Checkbox("Weapon",          ref _abi.DrawWeapon);
            
            ImGui.Checkbox("Armor",           ref _abi.DrawArmor);
            ImGui.SameLine(180);
            ImGui.Checkbox("Inventory Value", ref _abi.DrawInventoryValue);

            ImGui.Checkbox("Gear List", ref _abi.DrawGearList);
            Tooltip("Show a list of items for each player when the trigger key is held");
            ImGui.SameLine(180);
            ImGui.Checkbox("Target Dummies", ref _abi.DrawTargetDummies);

            SectionHeader("S7 TACTICAL ALERTS");

            ImGui.Checkbox("Ammo Penetration Tier (T1-T6)", ref _abi.DrawAmmoTier);
            Tooltip("Displays bullet item name and penetration tier (T1 to T6) with color-coding");
            ImGui.SameLine(220);
            ImGui.Checkbox("Reload Alert",                  ref _abi.DrawReloadAlert);
            Tooltip("Displays [RELOADING] warning on enemies when magazine is detached");

            ImGui.Checkbox("Downed & Reviving Detection", ref _abi.DrawDownedAlert);
            Tooltip("Displays [DOWNED], [SELF-REVIVING!], and [BEING REVIVED] for Players, Bosses, and Guards");
            ImGui.SameLine(220);
            ImGui.Checkbox("Grenade Cooking Alert",          ref _abi.DrawGrenadeAlert);
            Tooltip("Displays [HOLDING GRENADE] warning when an enemy pulls a pin");

            ImGui.Checkbox("Zombie AI & Bosses",             ref _abi.DrawZombies);
            Tooltip("Renders Infected Zone / Endless Mode Zombie AI and Boss archetypes");
            ImGui.SameLine(220);
            ImGui.Checkbox("Position Smoothing",            ref _abi.EnablePositionSmoothing);
            Tooltip("Predictive sub-frame interpolation for butter-smooth 144Hz+ rendering");

            ImGui.Checkbox("Offscreen Arrows", ref _abi.DrawOffscreenArrows);
            if (_abi.DrawOffscreenArrows)
            {
                ImGui.Indent(20f);
                ImGui.SliderFloat("Arrow Radius (px)", ref _abi.OffscreenArrowRadius, 50f, 600f, "%.0f");
                Tooltip("Radius of the circle where indicators are drawn");
                ImGui.SliderFloat("Arrow Size (px)", ref _abi.OffscreenArrowSize, 4f, 25f, "%.0f");
                Tooltip("Base and height size of the warning triangles");
                ImGui.Checkbox("Show Distance", ref _abi.DrawOffscreenDistance);
                if (_abi.DrawOffscreenDistance)
                {
                    ImGui.Indent(20f);
                    ImGui.SliderFloat("Distance Font Scale", ref _abi.OffscreenArrowFontSize, 0.4f, 1.5f, "%.2f");
                    ImGui.Unindent(20f);
                }
                ImGui.Unindent(20f);
            }

            if (_abi.DrawGearList)
            {
                ImGui.Indent(20f);
                
                int gearKeyIdx = Array.IndexOf(VkKeys, _abi.GearListKey);
                if (gearKeyIdx < 0) gearKeyIdx = 5; // Default to Mouse4
                ImGui.SetNextItemWidth(120);
                if (ImGui.BeginCombo("Hold Key", VkNames[gearKeyIdx]))
                {
                    for (int i = 0; i < VkKeys.Length; i++)
                    {
                        bool sel = (i == gearKeyIdx);
                        if (ImGui.Selectable(VkNames[i], sel)) _abi.GearListKey = VkKeys[i];
                        if (sel) ImGui.SetItemDefaultFocus();
                    }
                    ImGui.EndCombo();
                }

                ImGui.SetNextItemWidth(180);
                if (ImGui.InputInt("Min Item Value", ref _abi.GearListMinItemValue, 1000, 5000))
                    ABIGameConfig.GlobalGearMin = _abi.GearListMinItemValue;
                Tooltip("Only items worth more than this will appear in the gear list");

                ImGui.SetNextItemWidth(180);
                ImGui.SliderFloat("Text Size", ref _abi.GearListFontSize, 0.5f, 1.5f, "%.2f");
                
                ImGui.Unindent(20f);
                ImGui.Spacing();
            }

            ImGui.Separator();

            ImGui.SetNextItemWidth(200);
            ImGui.InputInt("Min Inv Total",  ref _abi.MinInventoryValue, 5000, 50000);
            Tooltip("Players with total inventory value below this won't show the summary label");

            ImGui.SliderFloat("Player Max Dist (m)",   ref _abi.PlayerMaxDistance,     25f, 3000f, "%.0f");
            ImGui.SliderFloat("AI / Bot Max Dist (m)", ref _abi.AiMaxDistance,         25f, 1500f, "%.0f");
            ImGui.SliderFloat("Zombie Max Dist (m)",   ref _abi.ZombieMaxDistance,     25f, 1000f, "%.0f");
            ImGui.SliderFloat("Max Skeleton Dist (m)", ref _abi.MaxSkeletonDistance,   25f, 2000f, "%.0f");

            if (ImGui.Button("Rescan Actors", new Vector2(120, 25)))
            {
                ABIPlayers.RescanActors();
            }
            Tooltip("Forces the background thread to immediately refresh the ActorArray list.");
            ImGui.SameLine();
            if (ImGui.Button("Reset Session / Purge Caches", new Vector2(210, 25)))
            {
                ABIPlayers.ResetSessionState();
            }
            Tooltip("Forces complete cache purge, origin bias reset, and visual recalibration (fixes stale visuals between matches).");

            SectionHeader("DEBUG WIDGETS");

            ImGui.Checkbox("Player Debug Widget", ref _abi.DrawPlayerWidget);
            ImGui.SameLine();
            ImGui.TextColored(new Vector4(0.55f, 0.55f, 0.55f, 1f), "(shows all actors + reads)");

            SectionHeader("DEATH MARKERS");

            ImGui.Checkbox("Draw Death Markers",        ref _abi.DrawDeathMarkers);
            ImGui.SliderFloat("Marker Max Distance (m)", ref _abi.DeathMarkerMaxDist,  50f, 5000f, "%.0f");
            ImGui.SliderFloat("Marker Base Size (px)",   ref _abi.DeathMarkerBaseSize,  4f,   24f, "%.0f");

            SectionHeader("COLORS");

            ColorEdit("Player Label",    ref _abi.ColorPlayer);         ImGui.SameLine();
            ColorEdit("Bot Label",       ref _abi.ColorBot);
            ColorEdit("Box Visible",     ref _abi.ColorBoxVisible);     ImGui.SameLine();
            ColorEdit("Box Invisible",   ref _abi.ColorBoxInvisible);
            ColorEdit("Skel Visible",    ref _abi.ColorSkelVisible);    ImGui.SameLine();
            ColorEdit("Skel Invisible",  ref _abi.ColorSkelInvisible);
            ColorEdit("Gear List Text",  ref _abi.ColorGearList);       ImGui.SameLine();
            ColorEdit("Dead Fill",       ref _abi.DeadFill);            ImGui.SameLine();
            ColorEdit("Dead Outline",    ref _abi.DeadOutline);
        }
    }

    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI LOOT MENU
    // /////////////////////////////////////////////////////////////////////////////////////

    public class ABILootMenu : MenuBase
    {
        private ABIGameConfig _abi;

        public ABILootMenu(OverlaySettings s, OverlayTheme t, ABIGameConfig abi) : base(s, t) => _abi = abi;

        public override void Render()
        {
            SectionHeader("GROUND LOOT");

            ImGui.Checkbox("Draw Ground Loot",         ref _abi.DrawGroundLoot);
            ImGui.Checkbox("Show Names##glnames",      ref _abi.DrawGroundLootNames);
            ImGui.SameLine(180);
            ImGui.Checkbox("Show Distance##gldist",    ref _abi.DrawGroundLootDistance);
            ImGui.SliderFloat("Item Max Distance (m)", ref _abi.GroundLootMaxDistance, 10f, 500f, "%.0f");
            ImGui.SliderFloat("Marker Size (px)",       ref _abi.GroundLootMarkerSize,  2f,  16f, "%.0f");

            SectionHeader("CONTAINERS");

            ImGui.Checkbox("Draw Containers",          ref _abi.DrawContainers);
            ImGui.Checkbox("Color by Tier (Rarity)",   ref _abi.ContainerColorByTier);
            Tooltip("Colors container marker icons by their loot tier/rarity (like backup source)");
            ImGui.Checkbox("Show Names##cnames",       ref _abi.DrawContainerNames);
            ImGui.SameLine(180);
            ImGui.Checkbox("Show Distance##cdist",     ref _abi.DrawContainerDistance);
            ImGui.SliderFloat("Container Max Distance (m)", ref _abi.ContainerMaxDistance, 10f, 500f, "%.0f");
            ImGui.SliderFloat("Container Marker (px)",       ref _abi.ContainerMarkerSize,  2f,  16f, "%.0f");
            ColorEdit("Container Color", ref _abi.ContainerColor); ImGui.SameLine();
            ColorEdit("Corpse Color",    ref _abi.ContainerCorpseColor); ImGui.SameLine();
            ColorEdit("Safe Color",      ref _abi.ContainerSafeColor);
            ImGui.Checkbox("Show Corpse Value", ref _abi.DrawCorpseValue);
            ImGui.InputInt("Min Corpse Value", ref _abi.CorpseMinValue, 1000, 10000);

            SectionHeader("S7 CONTAINER & SAFE FEATURES");

            ImGui.Checkbox("Lid State (Open / Closed)", ref _abi.DrawContainerLidState);
            Tooltip("Displays [OPEN] or [CLOSED] based on physical lid animation state");
            ImGui.SameLine(220);
            ImGui.Checkbox("Safe Timers & Progress Bar", ref _abi.DrawSafeTimers);
            Tooltip("Displays electronic safe countdown seconds [SAFE UNLOCKING: 42s] and animated progress bar");

            ImGui.Checkbox("Loot Status ([LOOTED])", ref _abi.DrawContainerLootedState);
            Tooltip("Shows [LOOTED] tag on already looted containers");

            SectionHeader("MISSIONS & TERMINALS");
            ImGui.Checkbox("Show Mission Terminals & Radios", ref _abi.DrawMissionTerminals);
            Tooltip("Displays Classified Terminals, General Terminals, Radios, and Mission Objectives");
            ImGui.SameLine(240);
            ImGui.Checkbox("Show Terminal Distance",         ref _abi.DrawTerminalDistance);
            ImGui.SliderFloat("Terminal Max Distance (m)",   ref _abi.TerminalMaxDistance, 50f, 1500f, "%.0f");
            ColorEdit("Mission Radio Color",                 ref _abi.RadioColor);

            SectionHeader("PRICE FILTERS");

            ImGui.InputInt("Min Price (Regular)",   ref _abi.LootMinPriceRegular, 1000, 10000);
            Tooltip("Items below this price won't be shown");
            ImGui.InputInt("Min Price (Important)", ref _abi.LootMinPriceImportant, 1000, 10000);
            Tooltip("Items above this price get a star marker and special color");
            ImGui.Checkbox("Show Prices on Labels", ref _abi.LootShowPrice);

            ImGui.Spacing();
            ColorEdit("Regular Color",   ref _abi.LootRegularColor);   ImGui.SameLine();
            ColorEdit("Important Color", ref _abi.LootImportantColor);

            SectionHeader("TEXT FILTERS");

            var inc = _abi.LootFilterInclude;
            var exc = _abi.LootFilterExclude;
            ImGui.SetNextItemWidth(200);
            if (ImGui.InputText("Include (comma-sep)##linc", ref inc, 256)) _abi.LootFilterInclude = inc;
            Tooltip("Only show items matching these terms");
            ImGui.SetNextItemWidth(200);
            if (ImGui.InputText("Exclude (comma-sep)##lexc", ref exc, 256)) _abi.LootFilterExclude = exc;
            Tooltip("Hide items matching these terms");

            SectionHeader("LOOT WIDGET");

            ImGui.Checkbox("Enable Widget", ref _abi.DrawLootWidget);
            Tooltip("Floating window listing the most valuable nearby loot");
            ImGui.InputInt("Max Items##wmax", ref _abi.LootWidgetMaxItems);
            _abi.LootWidgetMaxItems = Math.Clamp(_abi.LootWidgetMaxItems, 5, 50);
            ImGui.InputInt("Widget Min Price##wmin", ref _abi.LootWidgetMinPrice, 1000, 10000);
            ImGui.Checkbox("Show Distance in Widget", ref _abi.LootWidgetShowDistance);
            ColorEdit("Important Item Color##wic", ref _abi.LootWidgetImportantColor);

            SectionHeader("UTILITIES");

            ImGui.Checkbox("Entity Debug Logging", ref _abi.ShowDebug);
            Tooltip("Logs entity validation, distance culling, pointer invalidation, vitals, and FOV changes to console.");

            ImGui.Checkbox("Universal Debug ESP", ref _abi.DrawDebugEsp);
            Tooltip("Shows EVERY nearby actor in the game world (Bullets, Triggers, Containers, etc). Use this to identify missing objects.");
            
            if (_abi.DrawDebugEsp)
            {
                ImGui.Indent();
                ImGui.SliderFloat("Debug Range (m)##drange", ref _abi.DebugEspMaxDistance, 5f, 200f, "%.0f");
                ImGui.Unindent();
            }

            ImGui.SetNextItemWidth(120);
            ImGui.SliderFloat("Dump Range (m)", ref _abi.LootDumpDistance, 1f, 100f, "%.0fm");
            if (ImGui.Button("Nearby Loot Dump"))
            {
                ABILoot.DumpLoot(_abi.LootDumpDistance);
            }
            ImGui.SameLine();
            if (ImGui.Button("Rescan Ground Loot"))
            {
                ABILoot.RescanGround();
            }
            Tooltip("Forces the background thread to immediate rebuild the ground loot list.");

            if (ImGui.Button("Full World Inventory Dump"))
            {
                ABILoot.DumpAllInventories();
            }
            ImGui.SameLine();
            if (ImGui.Button("Rescan Containers"))
            {
                ABILoot.RescanContainers();
            }
            Tooltip("Forces the background thread to immediate rebuild the container list.");
        }
    }

    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI AIMBOT MENU
    // /////////////////////////////////////////////////////////////////////////////////////

    public class ABIAimbotMenu : MenuBase
    {
        private ABIGameConfig  _abi;
        private ABIController  _ctrl;

        private static readonly string[] BoneNames = {
            "Pelvis","Spine_01","Spine_02","Spine_03","Neck","Head",
            "Clavicle_L","UpperArm_L","LowerArm_L","Hand_L",
            "Clavicle_R","UpperArm_R","LowerArm_R","Hand_R",
            "Thigh_L","Calf_L","Foot_L","Thigh_R","Calf_R","Foot_R"
        };

        private static readonly int[] BoneIndices = {
            ABISkeleton.IDX_Pelvis, ABISkeleton.IDX_Spine_01, ABISkeleton.IDX_Spine_02,
            ABISkeleton.IDX_Spine_03, ABISkeleton.IDX_Neck, ABISkeleton.IDX_Head,
            ABISkeleton.IDX_Clavicle_L, ABISkeleton.IDX_UpperArm_L, ABISkeleton.IDX_LowerArm_L,
            ABISkeleton.IDX_Hand_L, ABISkeleton.IDX_Clavicle_R, ABISkeleton.IDX_UpperArm_R,
            ABISkeleton.IDX_LowerArm_R, ABISkeleton.IDX_Hand_R, ABISkeleton.IDX_Thigh_L,
            ABISkeleton.IDX_Calf_L, ABISkeleton.IDX_Foot_L, ABISkeleton.IDX_Thigh_R,
            ABISkeleton.IDX_Calf_R, ABISkeleton.IDX_Foot_R
        };

        private static readonly int[] VkKeys   = { 0x02, 0x01, 0x12, 0x10, 0x11, 0x05, 0x06 };
        private static readonly string[] VkNames = { "RButton", "LButton", "Alt", "Shift", "Ctrl", "Mouse4", "Mouse5" };

        public ABIAimbotMenu(OverlaySettings s, OverlayTheme t, ABIGameConfig abi, ABIController ctrl) : base(s, t)
        { _abi = abi; _ctrl = ctrl; }

        public override void Render()
        {
            var io = ImGui.GetIO();
            int cx = (int)(io.DisplaySize.X * 0.5f);
            int cy = (int)(io.DisplaySize.Y * 0.5f);

            // //// DEVICE STATUS //////////////////////////////////////////////////////////////
            SectionHeader("DEVICE STATUS");

            var dl = ImGui.GetWindowDrawList();

            // -- KmboxNet status --
            bool kmConnected = KmboxNet.IsConnected;
            var kmColor = kmConnected ? new Vector4(0.15f, 0.85f, 0.25f, 1f) : new Vector4(0.90f, 0.15f, 0.15f, 1f);
            
            var kmCursorPos = ImGui.GetCursorScreenPos();
            float kmCircleR = 6f;
            var kmCircleCenter = new Vector2(kmCursorPos.X + kmCircleR, kmCursorPos.Y + ImGui.GetTextLineHeight() * 0.5f);
            dl.AddCircleFilled(kmCircleCenter, kmCircleR, OverlayTheme.ToU32(kmColor));
            ImGui.SetCursorScreenPos(new Vector2(kmCursorPos.X + kmCircleR * 2 + 8f, kmCursorPos.Y));
            ImGui.TextColored(kmColor, $"KmboxNet ?? {(kmConnected ? "Connected" : "Disconnected")}");

            if (!kmConnected)
            {
                ImGui.Indent();
                ImGui.SetNextItemWidth(140); 
                if (ImGui.InputText("IP", ref _abi.KmboxIP, 64)) { /* handled by ref */ }
                
                ImGui.SameLine();
                ImGui.SetNextItemWidth(80);  
                ImGui.InputInt("Port", ref _abi.KmboxPort, 0);
                
                ImGui.SetNextItemWidth(140); 
                if (ImGui.InputText("UUID", ref _abi.KmboxMAC, 64)) { /* handled by ref */ }
                
                if (ImGui.Button("Connect KmboxNet"))
                {
                    KmboxNet.Init(_abi.KmboxIP, _abi.KmboxPort, _abi.KmboxMAC);
                }
                ImGui.Unindent();
            }

            // -- Makcu status --
            bool makcuConnected   = ImGuiOverlay.Input.Device.connected;
            bool makcuConnecting  = !makcuConnected && ImGuiOverlay.Input.Device.version == "";
            // Red = disconnected, Orange = connecting (version string empty, not yet confirmed), Green = connected
            var makcuColor = makcuConnected
                ? new Vector4(0.15f, 0.85f, 0.25f, 1f)   // green
                : makcuConnecting
                    ? new Vector4(1f,   0.55f, 0.05f, 1f) // orange
                    : new Vector4(0.90f, 0.15f, 0.15f, 1f); // red

            var cursorPos = ImGui.GetCursorScreenPos();
            float circleR = 6f;
            var circleCenter = new Vector2(cursorPos.X + circleR, cursorPos.Y + ImGui.GetTextLineHeight() * 0.5f);
            dl.AddCircleFilled(circleCenter, circleR, OverlayTheme.ToU32(makcuColor));
            dl.AddCircle(circleCenter, circleR, OverlayTheme.ToU32(new Vector4(0f, 0f, 0f, 0.4f)), 0, 1.5f);
            ImGui.SetCursorScreenPos(new Vector2(cursorPos.X + circleR * 2 + 8f, cursorPos.Y));

            string makcuStatusLabel = makcuConnected ? "Connected" : makcuConnecting ? "Connecting..." : "Disconnected";
            ImGui.TextColored(makcuColor, $"Makcu  ��  {makcuStatusLabel}");

            // -- InputManager status --
            bool imReady       = ImGuiOverlay.Input.InputManager.IsReady;
            bool imInitializing = ImGuiOverlay.Input.InputManager.IsInitializing;
            var imColor = imReady
                ? new Vector4(0.15f, 0.85f, 0.25f, 1f)
                : imInitializing
                    ? new Vector4(1f,   0.55f, 0.05f, 1f)
                    : new Vector4(0.90f, 0.15f, 0.15f, 1f);

            cursorPos = ImGui.GetCursorScreenPos();
            circleCenter = new Vector2(cursorPos.X + circleR, cursorPos.Y + ImGui.GetTextLineHeight() * 0.5f);
            dl.AddCircleFilled(circleCenter, circleR, OverlayTheme.ToU32(imColor));
            dl.AddCircle(circleCenter, circleR, OverlayTheme.ToU32(new Vector4(0f, 0f, 0f, 0.4f)), 0, 1.5f);
            ImGui.SetCursorScreenPos(new Vector2(cursorPos.X + circleR * 2 + 8f, cursorPos.Y));

            string imStatusLabel = imReady ? "Ready" : imInitializing ? "Initializing..." : "Not Ready";
            ImGui.TextColored(imColor, $"InputManager  ��  {imStatusLabel}");

            ImGui.Spacing();

            SectionHeader("MOUSE DEBUG");
            ImGui.Text($"Screen center:   {cx}, {cy}");

            ImGui.Spacing();
            SectionHeader("CALIBRATION");
            ImGui.TextDisabled("Aim at an enemy, then click Calibrate.");
            ImGui.TextDisabled("Sends 1 mouse count, measures camera shift in pixels.");

            if (ImGui.Button("Calibrate px/count"))
                _ctrl.TriggerCalibration();

            ImGui.SameLine();
            var statusCol = ABIController.CalibStatus switch
            {
                ABIController.CalibState.WaitingDelay  => new System.Numerics.Vector4(1f, 0.5f, 0f, 1f),
                ABIController.CalibState.WaitingResult => new System.Numerics.Vector4(1f, 0.8f, 0f, 1f),
                ABIController.CalibState.Done          => new System.Numerics.Vector4(0f, 0.9f, 0f, 1f),
                _                                      => new System.Numerics.Vector4(0.6f, 0.6f, 0.6f, 1f),
            };
            ImGui.TextColored(statusCol, ABIController.CalibStatus.ToString());

            ImGui.TextWrapped(ABIController.CalibLog);

            if (ABIController.CalibStatus == ABIController.CalibState.Done && ABIController.CalibPxPerCountY > 0.5f)
            {
                float ideal = 1f / ABIController.CalibPxPerCountY;
                ImGui.Spacing();
                ImGui.TextColored(new System.Numerics.Vector4(0.4f, 0.9f, 1f, 1f),
                    $"Suggested Speed value: {ideal:F3}");
                if (ImGui.Button("Apply suggested Speed"))
                    _abi.AimbotPixelPower = Math.Clamp(ideal, 0.001f, 0.02f);
            }

            ImGui.Spacing();

            ImGui.Checkbox("Enable Aimbot",    ref _abi.AimbotEnabled);
            ImGui.SameLine(180);
            ImGui.Checkbox("Require Visible",  ref _abi.AimbotRequireVisible);

            ImGui.Checkbox("Predict Velocity", ref _abi.AimbotPredictVelocity);
            ImGui.SameLine(180);
            ImGui.Checkbox("Predict Drop",     ref _abi.AimbotPredictDrop);
            Tooltip("Velocity: Predicts target position based on movement.\nDrop: Compensates for bullet gravity.");
            
            if (_abi.AimbotPredictVelocity || _abi.AimbotPredictDrop)
            {
                ImGui.SliderFloat("Latency Comp (s)", ref _abi.AimbotPredictionLatency, 0.0f, 0.5f, "%.3f");
                Tooltip("Adds extra time to prediction to account for DMA latency.");
            }

            ImGui.Combo("Target Priority", ref _abi.AimbotPriority, new string[] { "Crosshair (FOV)", "Distance", "Hybrid" }, 3);

            ImGui.Checkbox("Headshot AI",      ref _abi.AimbotHeadshotAI);
            ImGui.SameLine(180);
            ImGui.Checkbox("Only AI",          ref _abi.AimbotTargetAIOnly);

            ImGui.Checkbox("Only PMC",         ref _abi.AimbotTargetPMCOnly);
            ImGui.SameLine(180);
            ImGui.Checkbox("Random Bone",      ref _abi.AimbotRandomBone);

            ImGui.Spacing();

            // Bone picker
            int boneIdx = Array.IndexOf(BoneIndices, _abi.AimbotTargetBone);
            if (boneIdx < 0) boneIdx = ABISkeleton.IDX_Head;
            if (ImGui.BeginCombo("Target Bone", BoneNames[Math.Clamp(boneIdx, 0, BoneNames.Length - 1)]))
            {
                for (int i = 0; i < BoneNames.Length; i++)
                {
                    bool sel = (i == boneIdx);
                    if (ImGui.Selectable(BoneNames[i], sel)) _abi.AimbotTargetBone = BoneIndices[i];
                    if (sel) ImGui.SetItemDefaultFocus();
                }
                ImGui.EndCombo();
            }

            SectionHeader("PARAMETERS");

            ImGui.SliderFloat("Max Distance (m)",  ref _abi.AimbotMaxMeters,  10f,   2000f, "%.0f");
            ImGui.SliderFloat("FOV (px)",           ref _abi.AimbotFovPx,      50f,   1200f, "%.0f");
            Tooltip("Pixel radius around crosshair where aimbot activates");
            ImGui.SliderFloat("Speed",              ref _abi.AimbotPixelPower, 0.001f, 0.04f,  "%.4f");
            Tooltip("Mouse counts per screen pixel ?? 1.0 to start, lower if overshooting");
            ImGui.SliderFloat("Deadzone (px)",      ref _abi.AimbotDeadzonePx, 0f,    8f,    "%.1f");
            ImGui.Checkbox("Invert Y",              ref _abi.AimbotInvertY);
            Tooltip("Flip vertical ?? only needed if aimbot moves up when it should move down");

            ImGui.Spacing();
            ImGui.Separator();
            ImGui.Spacing();

            ImGui.Combo("Aim Type", ref _abi.AimbotType, new string[] { "Default", "Humanized" }, 2);
            if (_abi.AimbotType == 1)
            {
                ImGui.SliderFloat("Smooth Factor", ref _abi.AimbotSmooth, 1f, 20f, "%.1f");
                Tooltip("Higher value = smoother/slower aim");
            }
            ImGui.SliderInt("Switch Delay (ms)", ref _abi.AimbotSwitchDelayMs, 0, 1000);
            Tooltip("Delay before aiming at a new target");

            SectionHeader("MOUSE TEST");
            ImGui.TextDisabled("Raw relative moves:");
            if (ImGui.Button("Right +50")) {
                if (ImGuiOverlay.Input.Device.connected) ImGuiOverlay.Input.Device.move(50, 0);
                else if (KmboxNet.IsConnected) KmboxNet.MouseMove(50, 0);
            }
            ImGui.SameLine();
            if (ImGui.Button("Left  -50")) {
                if (ImGuiOverlay.Input.Device.connected) ImGuiOverlay.Input.Device.move(-50, 0);
                else if (KmboxNet.IsConnected) KmboxNet.MouseMove(-50, 0);
            }
            ImGui.SameLine();
            if (ImGui.Button("Down  +50")) {
                if (ImGuiOverlay.Input.Device.connected) ImGuiOverlay.Input.Device.move(0, 50);
                else if (KmboxNet.IsConnected) KmboxNet.MouseMove(0, 50);
            }
            ImGui.SameLine();
            if (ImGui.Button("Up    -50")) {
                if (ImGuiOverlay.Input.Device.connected) ImGuiOverlay.Input.Device.move(0, -50);
                else if (KmboxNet.IsConnected) KmboxNet.MouseMove(0, -50);
            }

            ImGui.Spacing();
            if (ImGui.Button("Right +100")) {
                if (ImGuiOverlay.Input.Device.connected) ImGuiOverlay.Input.Device.move(100, 0);
                else if (KmboxNet.IsConnected) KmboxNet.MouseMove(100, 0);
            }
            ImGui.SameLine();
            if (ImGui.Button("Down  +100")) {
                if (ImGuiOverlay.Input.Device.connected) ImGuiOverlay.Input.Device.move(0, 100);
                else if (KmboxNet.IsConnected) KmboxNet.MouseMove(0, 100);
            }

            SectionHeader("TRIGGER KEY");

            int keyIdx = Array.IndexOf(VkKeys, _abi.AimbotKey);
            if (keyIdx < 0) keyIdx = 0;
            if (ImGui.BeginCombo("Hold Key", VkNames[keyIdx]))
            {
                for (int i = 0; i < VkKeys.Length; i++)
                {
                    bool sel = (i == keyIdx);
                    if (ImGui.Selectable(VkNames[i], sel)) _abi.AimbotKey = VkKeys[i];
                    if (sel) ImGui.SetItemDefaultFocus();
                }
                ImGui.EndCombo();
            }

            SectionHeader("TRIGGERBOT");

            ImGui.Checkbox("Enable Triggerbot",       ref _abi.TriggerbotEnabled);
            ImGui.SameLine(180);
            ImGui.Checkbox("Require Visible##tb",     ref _abi.TriggerbotRequireVisible);

            int tbKeyIdx = Array.IndexOf(VkKeys, _abi.TriggerbotKey);
            if (tbKeyIdx < 0) tbKeyIdx = 0;
            if (ImGui.BeginCombo("Trigger Key", VkNames[tbKeyIdx]))
            {
                for (int i = 0; i < VkKeys.Length; i++)
                {
                    bool sel = (i == tbKeyIdx);
                    if (ImGui.Selectable(VkNames[i], sel)) _abi.TriggerbotKey = VkKeys[i];
                    if (sel) ImGui.SetItemDefaultFocus();
                }
                ImGui.EndCombo();
            }
            Tooltip("Hold this key to enable triggerbot scanning");

            ImGui.SliderInt("Delay (ms)",    ref _abi.TriggerbotDelayMs,    0, 300);
            Tooltip("Delay before firing after crosshair lands on target");
            ImGui.SliderInt("Duration (ms)", ref _abi.TriggerbotDurationMs, 10, 300);
            Tooltip("How long to hold the fire button");
        }
    }
}