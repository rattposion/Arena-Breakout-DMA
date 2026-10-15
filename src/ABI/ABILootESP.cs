using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using ImGuiNET;
using ImGuiOverlay.DMA;
using ImGuiOverlay.Theme;
using ImGuiOverlay.Config;
using ImGuiOverlay.Input;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI LOOT ESP
    //  Draws ground items and containers. Optimized for performance and junk filtering.
    // /////////////////////////////////////////////////////////////////////////////////////

    internal static class ABILootESP
    {
        private const int MAX_ITEMS      = 300;
        private const int MAX_CONTAINERS = 500;

        public static int LastDrawnCount       { get; private set; }
        public static int LastContainersDrawn   { get; private set; }

        public static void Render(ABIGameConfig cfg)
        {
            if (!cfg.DrawGroundLoot && !cfg.DrawContainers)
            {
                LastDrawnCount = 0;
                LastContainersDrawn = 0;
                return;
            }
            if (!ABILoot.TryGetLoot(out var frame))
            {
                LastDrawnCount = 0;
                LastContainersDrawn = 0;
                return;
            }

            int drawnItems = 0;
            int drawnContainers = 0;

            var cam   = ABIPlayers.Camera;
            var local = ABIPlayers.LocalPosition;
            var list  = ImGui.GetForegroundDrawList();
            var io    = ImGui.GetIO();
            float scrW = io.DisplaySize.X, scrH = io.DisplaySize.Y;

            // 1. INPUT CHECK
            bool showContents = InputManager.IsKeyDown(0xA4); // LAlt

            // 2. RENDER GROUND LOOT
            if (cfg.DrawGroundLoot && frame.Items != null)
            {
                foreach (var item in frame.Items.Take(MAX_ITEMS))
                {
                    if (item.StandardPrice < cfg.LootMinPriceRegular) continue;
                    if (item.Position == default) continue;

                    float distM = Vector3.Distance(local, item.Position) / 100f;
                    if (distM > cfg.GroundLootMaxDistance) continue;

                    if (!ABIMath.WorldToScreen(item.Position, cam, scrW, scrH, 1.0f, out var s)) continue;

                    uint rarityColor = GetRarityColor(item.Rarity);
                    // PRIORITIZE RARITY COLOR: If rarity is known (>0), use it. Otherwise fallback to price/regular.
                    uint color = (item.Rarity > 0) ? rarityColor : (item.StandardPrice >= cfg.LootMinPriceImportant ? OverlayTheme.ToU32(cfg.LootImportantColor) : OverlayTheme.ToU32(cfg.LootRegularColor));
                    float sz = cfg.GroundLootMarkerSize;

                    list.AddCircleFilled(s, sz, color | 0xCC000000, 8);
                    list.AddCircle(s, sz, 0xFF000000, 8, 1f);
                    drawnItems++;

                    if (cfg.DrawGroundLootNames)
                    {
                        string lbl = item.Label;
                        if (item.IsArmor && item.MaxDurability > 0f)
                        {
                            lbl += $" [{item.Durability:F0}/{item.MaxDurability:F0}]";
                        }
                        if (cfg.LootShowPrice && item.StandardPrice > 0) lbl += $" [{item.StandardPrice/1000}k]";
                        if (cfg.DrawGroundLootDistance) lbl += $" {distM:F0}m";

                        var ts = ImGui.CalcTextSize(lbl);
                        list.AddText(new Vector2(s.X - ts.X / 2, s.Y + sz + 2), color, lbl);
                    }
                }
            }

            // 3. RENDER CONTAINERS
            if (cfg.DrawContainers && frame.Containers != null)
            {
                foreach (var c in frame.Containers.Take(MAX_CONTAINERS))
                {
                    if (c.Position == default) continue;

                    float distM = Vector3.Distance(local, c.Position) / 100f;
                    if (distM > cfg.ContainerMaxDistance) continue;

                    int totalVal = c.Contents?.Sum(x => x.StandardPrice) ?? 0;

                    if (!ABIMath.WorldToScreen(c.Position, cam, scrW, scrH, 1.0f, out var s)) continue;

                    bool isSafeContainer = c.IsSafe || 
                                           (c.ClassName != null && (c.ClassName.Contains("Safe", StringComparison.OrdinalIgnoreCase) || c.ClassName.Contains("SecureContainer", StringComparison.OrdinalIgnoreCase))) || 
                                           (c.Label != null && c.Label.Contains("Safe", StringComparison.OrdinalIgnoreCase));

                    int effectiveRarity = isSafeContainer ? 6 : c.Rarity;
                    if (effectiveRarity <= 0)
                    {
                        effectiveRarity = GetContainerDefaultRarity(c.ClassName, c.Label);
                    }

                    uint color;
                    if (c.IsCorpse)
                    {
                        color = c.IsPlayerCorpse ? OverlayTheme.ToU32(cfg.ContainerCorpseColor) : (effectiveRarity > 0 ? GetRarityColor(effectiveRarity) : OverlayTheme.ToU32(cfg.ContainerCorpseColor));
                    }
                    else if (isSafeContainer || effectiveRarity == 6)
                    {
                        color = GetRarityColor(6); // Mythic (Red - Tier 6)
                    }
                    else
                    {
                        color = cfg.ContainerColorByTier ? GetRarityColor(effectiveRarity) : (effectiveRarity > 0 ? GetRarityColor(effectiveRarity) : OverlayTheme.ToU32(cfg.ContainerColor));
                    }

                    float sz = cfg.ContainerMarkerSize;

                    var p0 = new Vector2(s.X, s.Y - sz); var p1 = new Vector2(s.X + sz, s.Y);
                    var p2 = new Vector2(s.X, s.Y + sz); var p3 = new Vector2(s.X - sz, s.Y);
                    list.AddQuadFilled(p0, p1, p2, p3, color | 0xCC000000);
                    list.AddQuad(p0, p1, p2, p3, 0xFF000000, 1.2f);
                    drawnContainers++;

                    if (cfg.DrawContainerNames)
                    {
                        string prefix = "";
                        if (c.IsSafe && cfg.DrawSafeTimers)
                        {
                            if (c.IsSafeUnlocking) prefix = $"[SAFE UNLOCKING: {c.SafeLeftSeconds:F0}s] ";
                            else if (c.IsSafeUnlocked) prefix = "[SAFE UNLOCKED] ";
                            else if (c.IsFreeSafe) prefix = "[FREE SAFE] ";
                            else prefix = "[LOCKED SAFE] ";
                        }
                        else if (!c.IsCorpse)
                        {
                            string stateTag = cfg.DrawContainerLidState ? (c.IsOpen ? "[OPEN] " : "[CLOSED] ") : "";
                            string lootTag = (cfg.DrawContainerLootedState && c.IsLooted) ? "[LOOTED] " : "";
                            prefix = stateTag + lootTag;
                        }

                        string lbl = prefix + c.Label;
                        bool showPrice = cfg.LootShowPrice;
                        if (c.IsCorpse) showPrice = cfg.DrawCorpseValue;

                        if (totalVal > 0 && showPrice) lbl += $" [{totalVal / 1000}k]";
                        if (cfg.DrawContainerDistance) lbl += $" {distM:F0}m";

                        var ts = ImGui.CalcTextSize(lbl);
                        float textY = s.Y + sz + 2;
                        list.AddText(new Vector2(s.X - ts.X / 2, textY), color, lbl);

                        // Safe countdown progress bar
                        if (cfg.DrawSafeTimers && c.IsSafe && c.IsSafeUnlocking && c.SafeTotalSeconds > 0)
                        {
                            float barW = 80.0f;
                            float barH = 4.0f;
                            float barX = s.X - barW / 2;
                            float barY = textY + ts.Y + 2;
                            float pct = Math.Clamp(1.0f - (c.SafeLeftSeconds / c.SafeTotalSeconds), 0.0f, 1.0f);

                            list.AddRectFilled(new Vector2(barX, barY), new Vector2(barX + barW, barY + barH), 0xAA000000, 2f);
                            list.AddRectFilled(new Vector2(barX, barY), new Vector2(barX + (barW * pct), barY + barH), color, 2f);
                            list.AddRect(new Vector2(barX, barY), new Vector2(barX + barW, barY + barH), 0xFFFFFFFF, 2f, ImDrawFlags.None, 1.0f);
                        }
                    }

                    // Container Content List (Hold Left Alt)
                    if (showContents && c.Contents != null && c.Contents.Count > 0)
                    {
                        float padding = 4f;
                        float lineHeight = ImGui.GetTextLineHeightWithSpacing();
                        float maxWidth = 0f;
                        var sortedItems = c.Contents.OrderByDescending(x => x.StandardPrice).ToList();
                        
                        foreach(var item in sortedItems) {
                            string text = $"{item.Label} ({(item.StandardPrice / 1000f):F1}k)";
                            maxWidth = Math.Max(maxWidth, ImGui.CalcTextSize(text).X);
                        }

                        Vector2 boxStart = new Vector2(s.X + sz + 10, s.Y - sz);
                        Vector2 boxEnd = new Vector2(boxStart.X + maxWidth + padding * 2, boxStart.Y + (sortedItems.Count * lineHeight) + padding);
                        
                        list.AddRectFilled(boxStart, boxEnd, 0xAA000000, 4f);
                        list.AddRect(boxStart, boxEnd, 0x99FFFFFF, 4f, ImDrawFlags.None, 1f);

                        Vector2 textPos = new Vector2(boxStart.X + padding, boxStart.Y + padding);
                        foreach (var item in sortedItems)
                        {
                            string itemInfo = $"{item.Label} ({(item.StandardPrice / 1000f):F1}k)";
                            uint rColor = GetRarityColor(item.Rarity);
                            list.AddText(textPos, rColor, itemInfo);
                            textPos.Y += lineHeight;
                        }
                    }
                }
            }

            // 4. RENDER MISSIONS & TERMINALS
            if (cfg.DrawMissionTerminals && frame.Terminals != null && frame.Terminals.Count > 0)
            {
                foreach (var t in frame.Terminals)
                {
                    if (t.Position == default) continue;
                    float distM = Vector3.Distance(local, t.Position) / 100f;
                    if (distM > cfg.TerminalMaxDistance) continue;
                    if (!ABIMath.WorldToScreen(t.Position, cam, scrW, scrH, 1.0f, out var s)) continue;

                    uint termCol = t.IsRadio
                        ? OverlayTheme.ToU32(cfg.RadioColor)
                        : t.State switch
                        {
                            1 => 0xFF33FF33, // Ready - Green
                            2 => 0xFF00D7FF, // Decoding - Gold
                            3 => 0xFFFF9933, // Occupying - Orange
                            4 => 0xFF888888, // Occupied - Grey
                            _ => t.IsClassified ? 0xFFFF55AA : 0xFF00E5FF
                        };

                    float sz = 5.0f;
                    var p0 = new Vector2(s.X, s.Y - sz);
                    var p1 = new Vector2(s.X + sz, s.Y);
                    var p2 = new Vector2(s.X, s.Y + sz);
                    var p3 = new Vector2(s.X - sz, s.Y);
                    list.AddQuadFilled(p0, p1, p2, p3, termCol | 0xCC000000);
                    list.AddQuad(p0, p1, p2, p3, 0xFF000000, 1.2f);

                    string stateStr = t.State switch
                    {
                        1 => "[READY]",
                        2 => "[DECODING]",
                        3 => "[OCCUPYING]",
                        4 => "[OCCUPIED]",
                        _ => ""
                    };

                    string lbl = $"{stateStr} {t.Label}".Trim();
                    if (cfg.DrawTerminalDistance) lbl += $" {distM:F0}m";

                    var ts = ImGui.CalcTextSize(lbl);
                    list.AddText(new Vector2(s.X - ts.X / 2, s.Y + sz + 2), termCol, lbl);
                }
            }

            LastDrawnCount     = drawnItems;
            LastContainersDrawn = drawnContainers;
        }

        private static uint GetRarityColor(int rarity, float alpha = 1.0f)
        {
            Vector4 col = rarity switch
            {
                1 => new Vector4(0.9f, 0.9f, 0.9f, alpha),  // Common (White)
                2 => new Vector4(0.2f, 0.9f, 0.2f, alpha),  // Uncommon (Green)
                3 => new Vector4(0.2f, 0.6f, 1.0f, alpha),  // Rare (Blue)
                4 => new Vector4(0.6f, 0.2f, 0.9f, alpha),  // Epic (Purple)
                5 => new Vector4(1.0f, 0.84f, 0.0f, alpha), // Legendary (Gold)
                6 => new Vector4(1.0f, 0.1f, 0.1f, alpha),  // Mythic (Red)
                0 => new Vector4(0.7f, 0.7f, 0.7f, alpha),  // Empty/Undefined (Grey)
                _ => new Vector4(0.7f, 0.7f, 0.7f, alpha),
            };
            return ImGui.ColorConvertFloat4ToU32(col);
        }

        private static int GetContainerDefaultRarity(string cls, string label)
        {
            if (string.IsNullOrEmpty(cls)) cls = "";
            if (string.IsNullOrEmpty(label)) label = "";

            // 1. Mythic (Red - Tier 6): Electronic Safes, Main Safes, Secure Containers
            if (cls.Contains("Safe", StringComparison.OrdinalIgnoreCase) || 
                label.Contains("Safe", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("SecureContainer", StringComparison.OrdinalIgnoreCase))
                return 6;

            // 2. Legendary (Gold - Tier 5): Air Drop Boxes, Big Weapon Cases
            if (cls.Contains("AirDrop", StringComparison.OrdinalIgnoreCase) ||
                label.Contains("AirDrop", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("BigWeaponCase", StringComparison.OrdinalIgnoreCase))
                return 5;

            // 2. Epic (Purple - Tier 4): High Electronic, Adv Weapon Cases, Special Mission Reward Boxes, Adv Medkit
            if (cls.Contains("HighElectronic", StringComparison.OrdinalIgnoreCase) || 
                cls.Contains("AdvanceWeaponCase", StringComparison.OrdinalIgnoreCase) || 
                cls.Contains("AdToolBox", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("AdTrunk", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("RewardBox", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("AdMediKit", StringComparison.OrdinalIgnoreCase))
                return 4;

            // 3. Rare (Blue - Tier 3): Weapon Cases, Munition, Grenade Boxes, PCs, Briefcases
            if (cls.Contains("WeaponCase", StringComparison.OrdinalIgnoreCase) || 
                cls.Contains("WeaponBox", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("MunitionBox", StringComparison.OrdinalIgnoreCase) || 
                cls.Contains("GrenadeBox", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("AmmoBox", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("OldPC", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("AccessoriesBox", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("BriefCase", StringComparison.OrdinalIgnoreCase))
                return 3;

            // 4. Uncommon (Green - Tier 2): Normal Medkits, Standard Toolboxes, Supply Stations, Car Trunks, Cash Registers
            if (cls.Contains("NormalMediKit", StringComparison.OrdinalIgnoreCase) || 
                cls.Contains("ToolBox", StringComparison.OrdinalIgnoreCase) || 
                cls.Contains("SupplyStation", StringComparison.OrdinalIgnoreCase) || 
                cls.Contains("Trunk", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("CashRegister", StringComparison.OrdinalIgnoreCase) ||
                cls.Contains("StorageBox", StringComparison.OrdinalIgnoreCase))
                return 2;

            // 5. Common (White - Tier 1): Clothes, Drawers, Sport Bags, Packages
            return 1;
        }
    }
}