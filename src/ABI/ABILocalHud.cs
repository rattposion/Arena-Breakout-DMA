using System;
using System.Numerics;
using ImGuiNET;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI LOCAL HUD  --  Tactical status for the local player (Bottom-Middle)
    // /////////////////////////////////////////////////////////////////////////////////////

    internal static class ABILocalHud
    {
        private static readonly (string Name, int Idx, float BaseMax)[] Limbs = new[]
        {
            ("HEAD", 0, 40f),
            ("R-ARM", 4, 60f),
            ("L-ARM", 3, 60f),
            ("CHEST", 1, 85f),
            ("ABDO", 2, 70f),
            ("L-LEG", 5, 65f),
            ("R-LEG", 6, 65f)
        };

        private static uint GetColor(float hp, float max)
        {
            float pct = Math.Clamp(hp / max, 0f, 1f);
            byte r, g;
            if (pct > 0.5f)
            {
                float f = (pct - 0.5f) * 2f;
                r = (byte)((1f - f) * 255f);
                g = 255;
            }
            else
            {
                float f = pct * 2f;
                r = 255;
                g = (byte)(f * 255f);
            }
            return (uint)(0xFF000000 | (uint)(g << 8) | (uint)(r << 0));
        }

        public static void Render(ABIGameConfig cfg)
        {
            if (ABIPlayers.LocalPawn < 0x1000000) return;
            
            // Allow drawing in matches (2) or shooting range/tutorial (often 3 or something else)
            // If we have a valid pawn and valid health, we should show the HUD.
            if (ABIPlayers.MapSceneType == 1) return; // Only hide in MAIN LOBBY

            var io = ImGui.GetIO();
            var dl = ImGui.GetForegroundDrawList();

            // --- 1. NEW PROPORTIONAL HP BAR (Bottom-Middle) ---
            float totalWidth = 700f;
            float barHeight = 14f;
            float totalMaxHP = 445f;
            float gap = 2f; 
            float usableWidth = totalWidth - (gap * (Limbs.Length - 1));
            
            float startX = (io.DisplaySize.X - totalWidth) / 2f;
            float startY = io.DisplaySize.Y - 100f;

            if (ABIPlayers.LocalHealthMax > 1f)
            {
                string totalHpText = $"{ABIPlayers.LocalHealth:F0}/{ABIPlayers.LocalHealthMax:F0}";
                var textSize = ImGui.CalcTextSize(totalHpText);
                dl.AddText(new Vector2(startX - textSize.X - 12f, startY + (barHeight - textSize.Y) / 2f), 0xFFFFFF00, totalHpText);

                float currentX = startX;
                for (int i = 0; i < Limbs.Length; i++)
                {
                    var limb = Limbs[i];
                    float hp = ABIPlayers.LocalLimbHealth[limb.Idx];
                    float max = ABIPlayers.LocalLimbMax[limb.Idx];
                    if (max <= 0) max = limb.BaseMax;

                    float segmentWidth = (limb.BaseMax / totalMaxHP) * usableWidth;
                    Vector2 min = new Vector2(currentX, startY);
                    Vector2 maxVec = new Vector2(currentX + segmentWidth, startY + barHeight);

                    dl.AddRectFilled(min, maxVec, 0xAA000000, 2f);
                    if (hp > 0)
                    {
                        float fillWidth = (hp / max) * segmentWidth;
                        dl.AddRectFilled(min, new Vector2(currentX + fillWidth, maxVec.Y), GetColor(hp, max), 2f);
                    }
                    dl.AddRect(min, maxVec, 0xFF222222, 2f, ImDrawFlags.None, 1.0f);

                    var nameSize = ImGui.CalcTextSize(limb.Name);
                    dl.AddText(new Vector2(currentX + (segmentWidth - nameSize.X) / 2f, startY - nameSize.Y - 3f), 0xFFDDDDDD, limb.Name);
// HP inside chunk with Blue Outline
string hpText = $"{hp:F0}";
var hpSize = ImGui.CalcTextSize(hpText);
if (segmentWidth > hpSize.X + 4f)
{
    Vector2 hpPos = new Vector2(currentX + (segmentWidth - hpSize.X) / 2f, startY + (barHeight - hpSize.Y) / 2f);
    uint outlineCol = 0xFF0000FF; // ABGR: Bright Blue (0xFF Blue, 00 Green, 00 Red)

    // Text Stroke (Outline)
    dl.AddText(hpPos + new Vector2(1, 0), outlineCol, hpText);
    dl.AddText(hpPos + new Vector2(-1, 0), outlineCol, hpText);
    dl.AddText(hpPos + new Vector2(0, 1), outlineCol, hpText);
    dl.AddText(hpPos + new Vector2(0, -1), outlineCol, hpText);

    // Main Text
    dl.AddText(hpPos, 0xFFFFFFFF, hpText);
}

currentX += segmentWidth + gap;
                }
            }
            else if (ABIPlayers.MapSceneType == 2)
            {
                // Only show "Initializing" if we are actually in a match but waiting for pointers
                string status = "INITIALIZING TACTICAL DATA...";
                var sSize = ImGui.CalcTextSize(status);
                dl.AddText(new Vector2((io.DisplaySize.X - sSize.X) / 2f, startY), 0x9900FFFF, status);
            }

            // --- 2. STABLE AMMO & ARMOR (Fixed Positions Bottom-Right) ---
            float padX = 40f;
            float padY = 40f;
            
            // Define fixed slots to prevent shifting
            float ammoSlotY   = io.DisplaySize.Y - padY - 20f;
            float vestSlotY   = io.DisplaySize.Y - padY - 75f;
            float helmetSlotY = io.DisplaySize.Y - padY - 125f;

            // Ammo Slot
            if (ABIPlayers.LocalMaxAmmo > 0)
            {
                string ammoText = $"{ABIPlayers.LocalCurAmmo}";
                string maxText  = $" / {ABIPlayers.LocalMaxAmmo}";
                var ammoSize = ImGui.CalcTextSize(ammoText);
                var maxSize  = ImGui.CalcTextSize(maxText);
                float totalW = ammoSize.X + maxSize.X;
                float totalH = MathF.Max(ammoSize.Y, maxSize.Y);
                
                Vector2 basePos = new Vector2(io.DisplaySize.X - totalW - padX, ammoSlotY);
                dl.AddRectFilled(basePos - new Vector2(10, 5), basePos + new Vector2(totalW + 10, totalH + 5), 0x99000000, 4f);
                uint ammoCol = ((float)ABIPlayers.LocalCurAmmo / ABIPlayers.LocalMaxAmmo) > 0.25f ? 0xFFFFFFFF : 0xFF3333FF;
                dl.AddText(basePos, ammoCol, ammoText);
                dl.AddText(new Vector2(basePos.X + ammoSize.X, basePos.Y), 0xFFAAAAAA, maxText);
                dl.AddText(new Vector2(basePos.X + totalW - ImGui.CalcTextSize("AMMO").X, basePos.Y - 15f), 0xFF00FF00, "AMMO");
            }

            // Vest Slot
            if (ABIPlayers.LocalVestLevel > 0)
            {
                string durText = $"{ABIPlayers.LocalVestDurability:F0} / {ABIPlayers.LocalVestMaxDurability:F0}";
                string tierText = $"T{ABIPlayers.LocalVestLevel}";
                var durSize = ImGui.CalcTextSize(durText);
                var tierSize = ImGui.CalcTextSize(tierText);
                float iconSize = 32f;
                float padding = 8f;
                float totalW = iconSize + padding + MathF.Max(durSize.X, tierSize.X);
                float rowH = MathF.Max(iconSize, durSize.Y + tierSize.Y + 2f);

                Vector2 basePos = new Vector2(io.DisplaySize.X - totalW - padX, vestSlotY);
                dl.AddRectFilled(basePos - new Vector2(10, 5), basePos + new Vector2(totalW + 10, rowH + 5), 0x99000000, 4f);
                nint icon = ABIESP._vestIcons[Math.Clamp(ABIPlayers.LocalVestLevel, 1, 6)];
                if (icon != 0) dl.AddImage(icon, basePos, basePos + new Vector2(iconSize, iconSize));
                dl.AddText(new Vector2(basePos.X + iconSize + padding, basePos.Y), 0xFF00FF00, tierText);
                dl.AddText(new Vector2(basePos.X + iconSize + padding, basePos.Y + rowH/2), 0xFFFFFFFF, durText);
            }

            // Helmet Slot
            if (ABIPlayers.LocalHelmetLevel > 0)
            {
                string durText = $"{ABIPlayers.LocalHelmetDurability:F0} / {ABIPlayers.LocalHelmetMaxDurability:F0}";
                string tierText = $"T{ABIPlayers.LocalHelmetLevel}";
                var durSize = ImGui.CalcTextSize(durText);
                var tierSize = ImGui.CalcTextSize(tierText);
                float iconSize = 32f;
                float padding = 8f;
                float totalW = iconSize + padding + MathF.Max(durSize.X, tierSize.X);
                float rowH = MathF.Max(iconSize, durSize.Y + tierSize.Y + 2f);

                Vector2 basePos = new Vector2(io.DisplaySize.X - totalW - padX, helmetSlotY);
                dl.AddRectFilled(basePos - new Vector2(10, 5), basePos + new Vector2(totalW + 10, rowH + 5), 0x99000000, 4f);
                nint icon = ABIESP._helmetIcons[Math.Clamp(ABIPlayers.LocalHelmetLevel, 1, 6)];
                if (icon != 0) dl.AddImage(icon, basePos, basePos + new Vector2(iconSize, iconSize));
                dl.AddText(new Vector2(basePos.X + iconSize + padding, basePos.Y), 0xFF00FF00, tierText);
                dl.AddText(new Vector2(basePos.X + iconSize + padding, basePos.Y + rowH/2), 0xFFFFFFFF, durText);
            }
        }
    }
}
