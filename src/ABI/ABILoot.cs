using System.Linq;
using System;
using System.Collections.Generic;
using System.Numerics;
using System.Threading;
using System.Text;
using System.IO;
using System.Diagnostics;
using ImGuiOverlay.DMA;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI LOOT  --  Restored Robust Performance (Based on Backup7)
    //  Includes full dictionaries and map-origin pile fix.
    // /////////////////////////////////////////////////////////////////////////////////////

    public static class ABILoot
    {
        public struct Item
        {
            public ulong   Actor;
            public ulong   Root;      
            public string  ClassName;
            public string  Label;
            public int     Stack;
            public Vector3 Position;   
            public int     StandardPrice;
            public uint    SellPrice;
            public int     Rarity;
            public float   Durability;      // Added
            public float   MaxDurability;   // Added
            public bool    IsArmor;         // Added
            public int     ArmorTier;       // Added
        }

        public struct Container
        {
            public ulong      Actor;
            public ulong      Root;      
            public string     ClassName;
            public string     Label;
            public Vector3    Position;   
            public int        StandardPrice;
            public uint       SellPrice;
            public int        Rarity;
            public bool       IsRolledUp;
            public bool       IsCorpse;   
            public bool       IsPlayerCorpse;
            public List<Item> Contents;

            // S7 Container States & Safe Timers
            public bool       IsOpen;
            public bool       IsLooted;
            public bool       IsBeingLooted;
            public bool       IsSafe;
            public bool       IsFreeSafe;
            public bool       IsSafeUnlocking;
            public bool       IsSafeUnlocked;
            public float      SafeLeftSeconds;
            public int        SafeTotalSeconds;
        }

        public struct SafeTimerInfo
        {
            public bool  IsLockedSafe;
            public bool  IsFreeSafe;
            public bool  IsUnlocking;
            public bool  IsUnlocked;
            public float RemainingSeconds;
            public int   TotalSeconds;
        }

        public struct MissionTerminal
        {
            public ulong   Actor;
            public ulong   Root;
            public string  ClassName;
            public string  Label;
            public Vector3 Position;
            public byte    State;
            public float   RemainingSec;
            public bool    IsClassified;
            public bool    IsRadio;
        }

        public struct Frame
        {
            public long                  StampTicks;
            public List<Item>            Items;
            public List<Container>       Containers;
            public List<MissionTerminal> Terminals;
            public int                   TotalActorsSeen;
        }

        private static readonly Dictionary<string, string> CleanNames = new()
        {
            { "Inventory_014NormalMediKit_C",   "Medkit Box" },
            { "Inventory_016Trunk_C",           "Car Trunk" },
            { "BP_SupplyStation_C",             "Supply Station" },
            { "Inventory_015SportBag_C",        "Sport Bag" },
            { "Inventory_021LowCloth_C",        "Clothes" },
            { "Inventory_021LowCloth_02_C",     "Clothes" },
            { "BP_SecureContainer_EContainer_C","Secure Case" },
            { "Inventory_004WoodenWeaponCase_C","Weapon Case" },
            { "Inventory_006GrenadeBox_C",      "Grenade Box" },
            { "Inventory_028AccessoriesBox_C",  "Accessories Box" },
            { "Inventory_008ToolBox_C",         "Tool Box" },
            { "Inventory_009AdToolBox_C",       "Adv Tool Box" },
            { "Inventory_020NormalCloth_C",     "Clothes" },
            { "Inventory_013CabinetDrawer01_C", "Drawer" },
            { "Inventory_013CabinetDrawer02_C", "Drawer" },
            { "Inventory_013CabinetDrawer03_C", "Drawer" },
            { "Inventory_013CabinetDrawer04_C", "Drawer" },
            { "Inventory_023OldPC_C",           "PC Tower" },
            { "Inventory_003LongWeaponCase_C",  "Weapon Case" },
            { "Inventory_005SquareWeaponBox_C", "Weapon Box" },
            { "Inventory_012SafeBox_C",         "Safe" },
            { "Inventory_007AmmoBox_C",         "Ammo Box" },
            { "Inventory_017AdMediKit_C",       "Adv Medkit" },
            { "Inventory_001_BigWeaponCase_C",  "Weapon Case" },
            { "Inventory_018LowMediKit_C",      "Low Medkit" },
            { "Inventory_010CashRegister_C",    "Cash Register" },
            { "Inventory_019AdCloth_02_C",      "Adv Clothes" },
            { "Inventory_002AdvanceWeaponCase_C","Adv Weapon Case" },
            { "Inventory_011ElectronicSafe_C",  "Electronic Safe" },
            { "Inventory_029StorageBox_C",      "Storage Box" },
            { "BP_RewardBox_C",                 "Reward Box" },
            { "BP_Package_11_C",                "Package" },
            { "BP_DeathBoxWAND2_C",             "Death Box" },
            { "Inventory_Radio_C",              "Radio" },
            { "Inventory_031AdTrunk_C",         "Adv Trunk" },
            { "Inventory_043LockedSafe_C",      "Locked Safe" },
            { "Inventory_055SmallSafe_C",       "Small Safe" },
            { "Inventory_CabinetDrawer_C",      "Drawer" },
            { "Inventory_CabinetDrawer_2_C",    "Drawer" },
            { "BP_SupplyStation_Normal_C",      "Supply Station" },
            { "Inventory_917ZombieMissionRewardBox_C",  "Zombie Mission Box" },
            { "Inventory_917ZombieMissionRewardBox1_C", "Zombie Mission Box" },
            { "Inventory_917OilZombie_V2_C",            "Zombie Corpse" },
            { "Inventory_076BioLockedSafe_C",           "Bio Locked Safe" },
            { "Inventory_077BioSmallSafe_C",            "Bio Small Safe" },
            { "Inventory_026MunitionBox_C",             "Munition Box" },
            { "Inventory_027BriefCase_C",               "Briefcase" },
        };

        private static readonly Dictionary<string, string> ValuableMappings = new()
        {
            { "408140024", "Laptop" }, { "408080030", "GoldCup" }, { "498090003", "CodeBook" }, { "498090004", "CodeBook" },
            { "498090005", "CodeBook" }, { "498090006", "CodeBook" }, { "408080025", "GRing" }, { "408100011", "Antenna" },
            { "408080033", "Typewriter" }, { "408030025", "UPS" }, { "408010016", "Artillery" }, { "408010014", "HEFuel" },
            { "408080034", "Cane" }, { "408080050", "Jade Bracelet" }, { "498060001", "SpaceLab" }, { "498080010", "Heavenly Sphere" },
            { "498140001", "Prototype" }, { "408030026", "Studio Monitor" }, { "408060043", "FilmStock" }, { "408020025", "Cotton" },
            { "498050001", "Coil" }, { "498090001", "Voss Journal" }, { "408080048", "Satellite" }, { "408140022", "Video Camera" },
            { "408080026", "Brooch" }, { "408020026", "PDWire" }, { "408070016", "Metal Heart" }, { "498080003", "RED Dawn" },
            { "408090019", "Gungnir" }, { "498080007", "Plane" }, { "498100003", "RED Gyro" }, { "408050033", "Expander" },
            { "498080009", "RED Lyra" }, { "498060002", "Skateboard" }, { "408070113", "Insulin" }, { "408120017", "Leveler" },
            { "408130012", "Carabiner BOSS" }, { "498060003", "Quantum 2000" }, { "498100002", "Cipher" }, { "498080041", "Caliburn Model" },
            { "408060052", "Deluxe Tea" }, { "408080049", "Raw Diamond" }, { "408080029", "RED Necklace" }, { "409880087", "Encrypted File" },
            { "498080006", "Mask Replica" }, { "408120019", "Target Module" }, { "408050026", "Wrench" }, { "408080024", "Gold Bar" },
            { "498140003", "Capsule TV" }, { "408120020", "Laser Mod" }, { "405010903", "KeyCard" }, { "405020980", "Cashier Key" },
        };

        private static class Off
        {
            public const ulong CDC       = 0x0780;
            public const ulong InvType   = 0x0788;
            public const ulong GridComp  = 0x0898;
            public const ulong CDC_Price    = 0x010C;
            public const ulong CDC_Rarity   = 0x0110;
            public const ulong CDC_Sell     = 0x0134;
            public const ulong CDC_Name     = 0x0140;
            public const ulong CDC_Simple   = 0x0170;
            public const ulong Ctr_Mgr  = 0x0928;
        }

        private enum InvType : byte
        {
            None = 0, Weapon = 1, WeaponAdapter = 2, Ammo = 3, Armor = 4,
            Recovery = 5, Mybag = 6, Vestbag = 7, CorpseContainer = 8,
            LootContainer = 9, Avatar = 10, Safe = 11, Pocket = 12,
            Badge = 13, Item = 14, Monitor = 15, SupplyStation = 16, NormalContainer = 17,
        }

        private static volatile bool   _running;
        private static Thread?         _thread;
        private static readonly object _sync       = new();
        private static Frame           _latest;
        private static int             _intervalMs = 3500; 
        private static readonly ManualResetEventSlim _rescanEvent = new(false);

        public static void RescanGround() => _rescanEvent.Set();
        public static void RescanContainers() => _rescanEvent.Set();
        public static void ResetOnMatchChange()
        {
            lock (_sync)
            {
                PublishEmpty();
                _containerCache.Clear();
                lock (_weaponPriceCache)
                {
                    _weaponPriceCache.Clear();
                    _weaponPriceAttempts.Clear();
                }
            }
        }
        public static bool IsRunning => _running;
        public static void Start() { if (_running) return; _running = true; _thread = new Thread(Loop) { IsBackground = true, Priority = ThreadPriority.Lowest, Name = "ABI.Loot" }; _thread.Start(); }
        public static void Stop() { _running = false; _rescanEvent.Set(); try { _thread?.Join(300); } catch { } _thread = null; }
        public static bool TryGetLoot(out Frame frame) { lock (_sync) { frame = _latest; } return frame.Items != null; }

        public static void DumpLoot(float maxDistM = 10f)
        {
            try
            {
                if (!TryGetLoot(out var frame) || frame.Items == null)
                {
                    Build();
                    TryGetLoot(out frame);
                }

                Vector3 localPos = ABIPlayers.LocalPosition;
                var sb = new StringBuilder();
                sb.AppendLine($"--- ABI LOOT DUMP --- {DateTime.Now} ---");
                sb.AppendLine($"Local Position: <{localPos.X:F1}, {localPos.Y:F1}, {localPos.Z:F1}> | Max Range: {(maxDistM <= 0f ? "Unlimited" : $"{maxDistM:F1}m")}");

                var nearbyItems = new List<(Item item, float distM)>();
                if (frame.Items != null)
                {
                    foreach (var it in frame.Items)
                    {
                        if (it.Position == default) continue;
                        float distM = Vector3.Distance(localPos, it.Position) / 100f;
                        if (maxDistM <= 0f || distM <= maxDistM)
                        {
                            nearbyItems.Add((it, distM));
                        }
                    }
                }
                nearbyItems.Sort((a, b) => a.distM.CompareTo(b.distM));

                var nearbyContainers = new List<(Container ctr, float distM)>();
                if (frame.Containers != null)
                {
                    foreach (var c in frame.Containers)
                    {
                        if (c.Position == default) continue;
                        float distM = Vector3.Distance(localPos, c.Position) / 100f;
                        if (maxDistM <= 0f || distM <= maxDistM)
                        {
                            nearbyContainers.Add((c, distM));
                        }
                    }
                }
                nearbyContainers.Sort((a, b) => a.distM.CompareTo(b.distM));

                int totalItemValue = nearbyItems.Sum(x => x.item.StandardPrice);
                int totalContainerValue = nearbyContainers.Sum(c => c.ctr.Contents?.Sum(it => it.StandardPrice) ?? 0);
                int grandTotal = totalItemValue + totalContainerValue;

                sb.AppendLine($"Ground Items: {nearbyItems.Count} (Value: {totalItemValue:N0}) | Containers: {nearbyContainers.Count} (Value: {totalContainerValue:N0}) | Grand Total: {grandTotal:N0}");
                sb.AppendLine("==================================================================");
                sb.AppendLine();

                sb.AppendLine($"=== GROUND ITEMS ({nearbyItems.Count}) ===");
                for (int i = 0; i < nearbyItems.Count; i++)
                {
                    var (it, distM) = nearbyItems[i];
                    string durStr = it.IsArmor && it.MaxDurability > 0f ? $" | Dur: {it.Durability:F0}/{it.MaxDurability:F0} (T{it.ArmorTier})" : "";
                    sb.AppendLine($"[{i + 1:D3}] {it.Label,-28} | Price: {it.StandardPrice,9:N0} | Rarity: {it.Rarity} | Dist: {distM,5:F1}m | Pos: <{it.Position.X:F1}, {it.Position.Y:F1}, {it.Position.Z:F1}>{durStr} | Class: {it.ClassName} | Actor: 0x{it.Actor:X}");
                }
                sb.AppendLine();

                sb.AppendLine($"=== CONTAINERS ({nearbyContainers.Count}) ===");
                for (int i = 0; i < nearbyContainers.Count; i++)
                {
                    var (c, distM) = nearbyContainers[i];
                    int ctrVal = c.Contents?.Sum(x => x.StandardPrice) ?? 0;
                    string status = c.IsLooted ? "LOOTED" : c.IsOpen ? "OPEN" : "CLOSED";
                    if (c.IsSafe) status += c.IsSafeUnlocking ? " [UNLOCKING]" : c.IsSafeUnlocked ? " [UNLOCKED]" : " [LOCKED]";
                    sb.AppendLine($"[{i + 1:D3}] [CTR] {c.Label,-24} | Total Value: {ctrVal,9:N0} | Status: {status,-16} | Dist: {distM,5:F1}m | Pos: <{c.Position.X:F1}, {c.Position.Y:F1}, {c.Position.Z:F1}> | Items: {c.Contents?.Count ?? 0} | Class: {c.ClassName} | Actor: 0x{c.Actor:X}");
                    if (c.Contents != null && c.Contents.Count > 0)
                    {
                        for (int k = 0; k < c.Contents.Count; k++)
                        {
                            var sub = c.Contents[k];
                            string subDur = sub.IsArmor && sub.MaxDurability > 0f ? $" | Dur: {sub.Durability:F0}/{sub.MaxDurability:F0} (T{sub.ArmorTier})" : "";
                            sb.AppendLine($"      > [{k + 1:D2}] {sub.Label,-24} | Price: {sub.StandardPrice,9:N0} | Rarity: {sub.Rarity}{subDur} | Class: {sub.ClassName} | Actor: 0x{sub.Actor:X}");
                        }
                    }
                }

                File.WriteAllText("loot_dump.txt", sb.ToString());
                Console.WriteLine($"[Loot] Dumped {nearbyItems.Count} ground items and {nearbyContainers.Count} containers to loot_dump.txt");
            }
            catch (Exception ex)
            {
                Console.WriteLine($"[Loot] DumpLoot failed: {ex.Message}");
            }
        }
        
        public static void DumpAllContainers() {
            if (!TryGetLoot(out var frame)) return;
            try {
                var sb = new StringBuilder();
                sb.AppendLine($"--- CONTAINER DUMP {DateTime.Now} ---");
                sb.AppendLine($"Total Containers: {frame.Containers?.Count ?? 0}");
                sb.AppendLine("------------------------------------------------------------------");
                if (frame.Containers != null) {
                    foreach (var c in frame.Containers) {
                        sb.AppendLine($"[CTR] Name: {c.Label} | Rarity: {c.Rarity} | Value: {c.StandardPrice:N0} | Pos: {c.Position} | Class: {c.ClassName}");
                        if (c.Contents != null && c.Contents.Count > 0) {
                            foreach (var it in c.Contents) {
                                sb.AppendLine($"   > [ITEM] {it.Label} | Rarity: {it.Rarity} | Value: {it.StandardPrice:N0} | Class: {it.ClassName}");
                            }
                        }
                    }
                }
                File.WriteAllText("container_dump.txt", sb.ToString());
                Console.WriteLine("[Loot] Dumped containers to container_dump.txt");
            } catch (Exception ex) {
                Console.WriteLine($"[Loot] Dump failed: {ex.Message}");
            }
        }

        public static void DumpAllInventories()
        {
            try
            {
                DumpLoot(0f);
                if (File.Exists("loot_dump.txt"))
                {
                    File.Copy("loot_dump.txt", "world_inventory_dump.txt", true);
                    Console.WriteLine("[Loot] Dumped full world inventory to world_inventory_dump.txt");
                }
            }
            catch (Exception ex)
            {
                Console.WriteLine($"[Loot] DumpAllInventories failed: {ex.Message}");
            }
        }

        private static void Loop() { while (_running) { try { _rescanEvent.Wait(_intervalMs); _rescanEvent.Reset(); Build(); } catch { } } }

        private static readonly Dictionary<ulong, List<Item>> _containerCache = new();
        private const float CACHE_UPDATE_DIST_SQ = 2000f * 2000f; // 20 meters (Unreal units)

        private static readonly Dictionary<ulong, int> _weaponPriceCache = new();
        private static readonly Dictionary<ulong, int> _weaponPriceAttempts = new();
        private static ulong _lastLootGameState = 0;

        private static void Build()
        {
            ulong actorArray = ABIPlayers.ActorArray;
            int   actorCount = ABIPlayers.ActorCount;
            if (actorArray == 0 || actorCount <= 0) { PublishEmpty(); return; }

            ulong gameState = ABIPlayers.GameState;
            if (gameState != _lastLootGameState)
            {
                lock (_weaponPriceCache)
                {
                    _weaponPriceCache.Clear();
                    _weaponPriceAttempts.Clear();
                }
                _lastLootGameState = gameState;
            }

            int take = Math.Min(actorCount, 32768);
            ulong[]? ptrs = DmaMemory.ReadArray<ulong>(actorArray, take);
            if (ptrs == null) { PublishEmpty(); return; }

            ulong lp = ABIPlayers.LocalPawn;
            ulong li = ABIPlayers.LocalInvMgr;
            Vector3 localPos = ABIPlayers.LocalPosition;

            var validPtrs = ptrs.Where(p => p > 0x1000000).Distinct().ToList();
            var infoMap = new Dictionary<ulong, (byte type, ulong cdc, uint oid, ulong root, ulong owner, ulong grid, byte ct, ulong repAttach)>(validPtrs.Count);

            // STAGE 1: Basic Actor Properties (Chunked)
            const int CHUNK_SIZE = 512;
            for (int i = 0; i < validPtrs.Count; i += CHUNK_SIZE)
            {
                int end = Math.Min(i + CHUNK_SIZE, validPtrs.Count);
                using (var sc = DmaMemory.CreateScatter())
                {
                    for (int j = i; j < end; j++)
                    {
                        ulong p = validPtrs[j];
                        sc.PrepareReadValue<byte>(p + Off.InvType);
                        sc.PrepareReadValue<ulong>(p + Off.CDC);
                        sc.PrepareReadValue<uint>(p + ABIOffsets.UObject_ObjectId);
                        sc.PrepareReadValue<ulong>(p + ABIOffsets.AActor_RootComponent);
                        sc.PrepareReadValue<ulong>(p + ABIOffsets.AActor_Owner);
                        sc.PrepareReadValue<ulong>(p + Off.GridComp);
                        sc.PrepareReadValue<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType);
                        sc.PrepareReadValue<ulong>(p + 0x00D8); // AActor::AttachmentReplication.AttachParent
                    }
                    sc.Execute();
                    for (int j = i; j < end; j++)
                    {
                        ulong p = validPtrs[j];
                        sc.ReadValue<byte>(p + Off.InvType, out byte t);
                        sc.ReadValue<ulong>(p + Off.CDC, out ulong cdc);
                        sc.ReadValue<uint>(p + ABIOffsets.UObject_ObjectId, out uint oid);
                        sc.ReadValue<ulong>(p + ABIOffsets.AActor_RootComponent, out ulong root);
                        sc.ReadValue<ulong>(p + ABIOffsets.AActor_Owner, out ulong owner);
                        sc.ReadValue<ulong>(p + Off.GridComp, out ulong grid);
                        sc.ReadValue<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType, out byte ct);
                        sc.ReadValue<ulong>(p + 0x00D8, out ulong repAttach);
                        
                        if (root < 0x100000) root = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_RootComponent + 0x1008);
                        infoMap[p] = (t, cdc, oid, root, owner, grid, ct, repAttach);
                    }
                }
            }

            // Filter potential loot first
            var filteredPtrs = new List<ulong>();
            foreach (var p in validPtrs)
            {
                var info = infoMap[p];
                if (info.type == 0 || info.type > 25 || info.cdc < 0x1000000) continue;
                var invT = (InvType)info.type;
                
                // Exclude worn backpacks and rigs immediately (owner is non-zero)
                if ((invT == InvType.Mybag || invT == InvType.Vestbag) && info.owner != 0) continue;
                
                if (invT == InvType.Avatar || invT == InvType.Monitor || invT == InvType.Pocket || invT == InvType.None) continue;
                
                string cls = ABINamePool.GetName(info.oid) ?? "";
                if (IsNonLoot(cls)) continue;
                bool isRadioItem = cls.Contains("Mission_TwoWayRadio", StringComparison.OrdinalIgnoreCase) ||
                                   cls.Contains("TwoWayRadio", StringComparison.OrdinalIgnoreCase) ||
                                   cls.Contains("Inventory_Radio", StringComparison.OrdinalIgnoreCase) ||
                                   cls.Equals("Radio", StringComparison.OrdinalIgnoreCase);
                if (isRadioItem) continue; // Radios are mission starters, rendered via Mission Terminals & Radios
                filteredPtrs.Add(p);
            }

            // STAGE 1.5: Scan for Mission Terminals & Radios
            var terminalList = new List<MissionTerminal>();
            var terminalCandidates = new List<(ulong actor, ulong root, string cls, string label, bool isClassified, bool isRadio)>();
            foreach (var p in validPtrs)
            {
                var info = infoMap[p];
                if (info.root <= 0x100000) continue;
                string cls = ABINamePool.GetName(info.oid) ?? "";
                if (string.IsNullOrEmpty(cls)) continue;

                bool isClassified = cls.Contains("ClassifiedTerminal", StringComparison.OrdinalIgnoreCase);
                bool isGeneral = cls.Contains("GeneralTerminal", StringComparison.OrdinalIgnoreCase);
                bool isSGTerminal = cls.Contains("SGTerminal", StringComparison.OrdinalIgnoreCase);
                bool isRadio = cls.Contains("Mission_TwoWayRadio", StringComparison.OrdinalIgnoreCase) ||
                               cls.Contains("TwoWayRadio", StringComparison.OrdinalIgnoreCase) ||
                               cls.Contains("Inventory_Radio", StringComparison.OrdinalIgnoreCase) ||
                               cls.Equals("Radio", StringComparison.OrdinalIgnoreCase);

                if (isClassified || isGeneral || isSGTerminal || isRadio)
                {
                    string label = isClassified ? "Classified Terminal" : (isGeneral ? "General Terminal" : (isRadio ? "Mission Radio" : "Terminal"));
                    terminalCandidates.Add((p, info.root, cls, label, isClassified, isRadio));
                }
            }

            if (terminalCandidates.Count > 0)
            {
                using (var scT = DmaMemory.CreateScatter())
                {
                    foreach (var tc in terminalCandidates)
                    {
                        scT.PrepareReadValue<byte>(tc.actor + 0x0338); // ESGTerminalState::CurrentState
                    }
                    scT.Execute();

                    var biasT = ABIPlayers.GetOriginBias();
                    foreach (var tc in terminalCandidates)
                    {
                        scT.ReadValue<byte>(tc.actor + 0x0338, out byte state);
                        Vector3 pos = DmaMemory.DecryptActorPosition(tc.root);
                        if (pos != default && float.IsFinite(pos.X) && float.IsFinite(pos.Y) && float.IsFinite(pos.Z) &&
                            pos.LengthSquared() >= 100f && pos.Z >= -2500f)
                        {
                            terminalList.Add(new MissionTerminal
                            {
                                Actor = tc.actor,
                                Root = tc.root,
                                ClassName = tc.cls,
                                Label = tc.label,
                                Position = pos + biasT,
                                State = state,
                                IsClassified = tc.isClassified,
                                IsRadio = tc.isRadio
                            });
                        }
                    }
                }
            }

            // STAGE 2: Batch Relationships and Locations
            var extraInfo = new Dictionary<ulong, (ulong attach, ulong parent, Vector3 pos)>();
            for (int i = 0; i < filteredPtrs.Count; i += CHUNK_SIZE)
            {
                int end = Math.Min(i + CHUNK_SIZE, filteredPtrs.Count);
                using (var sc = DmaMemory.CreateScatter())
                {
                    for (int j = i; j < end; j++)
                    {
                        ulong p = filteredPtrs[j];
                        var info = infoMap[p];
                        if (info.root > 0x1000000)
                        {
                            sc.PrepareReadValue<ulong>(info.root + ABIOffsets.USceneComponent_AttachParent);
                        }
                        if (info.grid > 0x1000000) sc.PrepareReadValue<ulong>(info.grid + 0x0118);
                    }
                    sc.Execute();
                    for (int j = i; j < end; j++)
                    {
                        ulong p = filteredPtrs[j];
                        var info = infoMap[p];
                        ulong attach = 0, parent = 0; Vector3 pos = default;
                        if (info.root > 0x1000000)
                        {
                            sc.ReadValue<ulong>(info.root + ABIOffsets.USceneComponent_AttachParent, out attach);
                            pos = DmaMemory.DecryptActorPosition(info.root);
                        }
                        if (info.grid > 0x1000000) sc.ReadValue<ulong>(info.grid + 0x0118, out parent);
                        extraInfo[p] = (attach, parent, pos);
                    }
                }
            }

            var allInv = new List<(ulong actor, ulong cdc, string cls, ulong parent, bool isCtr, InvType type, ulong root, byte ct, Vector3 pos)>();
            var ctrMap = new Dictionary<ulong, Container>();
            var bias = ABIPlayers.GetOriginBias();
            var refreshedThisFrame = new HashSet<ulong>(); // Track which containers we've cleared for a fresh update

            foreach (var p in filteredPtrs) {
                var info = infoMap[p];
                var extra = extraInfo[p];
                var invT = (InvType)info.type;
                bool isCtr = invT == InvType.LootContainer || invT == InvType.NormalContainer || invT == InvType.CorpseContainer || invT == InvType.Safe || invT == InvType.SupplyStation;

                if (!isCtr && lp != 0) {
                    if (info.owner == lp || info.owner == li) continue;
                    if (extra.parent == lp || extra.parent == li) continue;
                }

                if (!isCtr) {
                    bool hasOwnerOrAttach = (info.owner > 0x1000000) || (extra.attach > 0x1000000) || (info.repAttach > 0x1000000);
                    bool hasParentContainer = extra.parent > 0x1000000;
                    if (hasOwnerOrAttach && !hasParentContainer) continue;
                }

                string cls = ABINamePool.GetName(info.oid) ?? "";
                Vector3 pos = extra.pos != default ? extra.pos + bias : default;

                // Under-map & Staging Pool filter
                if (pos != default)
                {
                    if (!float.IsFinite(pos.X) || !float.IsFinite(pos.Y) || !float.IsFinite(pos.Z) ||
                        pos.Z < -2500f || pos.LengthSquared() < 100f ||
                        (MathF.Abs(pos.X - 10198f) < 100f && MathF.Abs(pos.Y - (-453f)) < 100f) ||
                        (MathF.Abs(pos.X - (-5346f)) < 300f && MathF.Abs(pos.Y - (-7478f)) < 300f) ||
                        MathF.Abs(pos.Z - (-11061.3f)) < 150f ||
                        MathF.Abs(pos.Z - (-5774.0f)) < 150f)
                    {
                        continue;
                    }
                }

                if (isCtr) {
                    bool isPlayer = info.ct == 1 || info.ct == 2;
                    bool isZombieCorpse = cls.Contains("OilZombie", StringComparison.OrdinalIgnoreCase) ||
                                          cls.Contains("ZombieCorpse", StringComparison.OrdinalIgnoreCase) ||
                                          cls.Contains("DeathBox", StringComparison.OrdinalIgnoreCase);
                    bool isCorpse = (invT == InvType.CorpseContainer) || isZombieCorpse;
                    var c = new Container { Actor = p, Root = info.root, ClassName = cls, Position = pos, IsCorpse = isCorpse, IsPlayerCorpse = isPlayer, Contents = new List<Item>() };
                    ctrMap[p] = c;
                    allInv.Add((p, info.cdc, cls, extra.parent, true, invT, info.root, info.ct, pos));
                } else {
                    allInv.Add((p, info.cdc, cls, extra.parent, false, invT, info.root, info.ct, pos));
                }
            }

            // Cleanup stale cache (actors no longer in range/level)
            var currentActors = new HashSet<ulong>(validPtrs);
            var staleActors = _containerCache.Keys.Where(k => !currentActors.Contains(k)).ToList();
            foreach (var stale in staleActors) _containerCache.Remove(stale);

            // STAGE 3: Metadata (Names/Prices)
            var groundItems = new List<Item>();
            for (int i = 0; i < allInv.Count; i += CHUNK_SIZE)
            {
                int end = Math.Min(i + CHUNK_SIZE, allInv.Count);
                var stage3Data = new (ulong simple, ulong name, int price, int rar, uint sell, float dur, float maxDur, int tier)[end - i];

                using (var sc = DmaMemory.CreateScatter())
                {
                    for (int j = i; j < end; j++)
                    {
                        ulong cdc = allInv[j].cdc;
                        ulong p = allInv[j].actor;
                        var invT = allInv[j].type;
                        sc.PrepareReadValue<ulong>(cdc + Off.CDC_Simple);
                        sc.PrepareReadValue<ulong>(cdc + Off.CDC_Name);
                        sc.PrepareReadValue<int>(cdc + Off.CDC_Price);
                        sc.PrepareReadValue<int>(cdc + Off.CDC_Rarity);
                        sc.PrepareReadValue<uint>(cdc + Off.CDC_Sell);

                        if (invT == InvType.Armor || invT == InvType.Vestbag || invT == InvType.Mybag)
                        {
                            sc.PrepareReadValue<float>(cdc + 0x118); // Durability
                            sc.PrepareReadValue<float>(cdc + 0x11C); // Max Durability
                            sc.PrepareReadValue<int>(p + 0x6E8);     // Armor Tier
                        }
                    }
                    sc.Execute();
                    for (int j = i; j < end; j++)
                    {
                        int idx = j - i;
                        ulong cdc = allInv[j].cdc;
                        ulong p = allInv[j].actor;
                        var invT = allInv[j].type;
                        sc.ReadValue<ulong>(cdc + Off.CDC_Simple, out stage3Data[idx].simple);
                        sc.ReadValue<ulong>(cdc + Off.CDC_Name, out stage3Data[idx].name);
                        sc.ReadValue<int>(cdc + Off.CDC_Price, out stage3Data[idx].price);
                        sc.ReadValue<int>(cdc + Off.CDC_Rarity, out stage3Data[idx].rar);
                        sc.ReadValue<uint>(cdc + Off.CDC_Sell, out stage3Data[idx].sell);

                        if (invT == InvType.Armor || invT == InvType.Vestbag || invT == InvType.Mybag)
                        {
                            sc.ReadValue<float>(cdc + 0x118, out stage3Data[idx].dur);
                            sc.ReadValue<float>(cdc + 0x11C, out stage3Data[idx].maxDur);
                            sc.ReadValue<int>(p + 0x6E8, out stage3Data[idx].tier);
                        }
                    }
                }

                // Batch string pointer/count reads
                var strPtrs = new List<ulong>();
                for (int idx = 0; idx < stage3Data.Length; idx++)
                {
                    if (stage3Data[idx].simple > 0x1000000) strPtrs.Add(stage3Data[idx].simple);
                    if (stage3Data[idx].name > 0x1000000) strPtrs.Add(stage3Data[idx].name);
                }

                var strMetadata = new Dictionary<ulong, (ulong data, int count)>();
                if (strPtrs.Count > 0)
                {
                    using var scStr = DmaMemory.CreateScatter();
                    foreach (var p in strPtrs)
                    {
                        scStr.PrepareReadValue<ulong>(p + 0x08);
                        scStr.PrepareReadValue<int>(p + 0x10);
                    }
                    scStr.Execute();
                    foreach (var p in strPtrs)
                    {
                        scStr.ReadValue<ulong>(p + 0x08, out ulong d);
                        scStr.ReadValue<int>(p + 0x10, out int c);
                        strMetadata[p] = (d, c);
                    }
                }
                
                for (int j = i; j < end; j++)
                {
                    var x = allInv[j];
                    var s3 = stage3Data[j - i];

                    string label = "";
                    if (strMetadata.TryGetValue(s3.simple, out var metaS) && metaS.data > 0x1000000 && metaS.count > 0 && metaS.count < 256)
                    {
                        byte[]? b = DmaMemory.ReadBytes(metaS.data, (uint)(metaS.count * 2));
                        if (b != null) { label = Encoding.Unicode.GetString(b).Split('\0')[0]; if (IsGarbage(label)) label = ""; }
                    }
                    
                    if (string.IsNullOrWhiteSpace(label) && strMetadata.TryGetValue(s3.name, out var metaN) && metaN.data > 0x1000000 && metaN.count > 0 && metaN.count < 256)
                    {
                        byte[]? b = DmaMemory.ReadBytes(metaN.data, (uint)(metaN.count * 2));
                        if (b != null) { label = Encoding.Unicode.GetString(b).Split('\0')[0]; if (IsGarbage(label)) label = ""; }
                    }

                    if (string.IsNullOrWhiteSpace(label) || label == "???") label = PrettifyClassName(x.cls);
                    
                    int pVal = (s3.price > 0 && s3.price < 100_000_000) ? s3.price : 0;
                    if (x.type == InvType.Weapon && pVal > 0 && x.parent == 0)
                    {
                        pVal = ResolveWeaponPrice(x.actor, x.cdc, pVal);
                    }

                    bool isArmor = (x.type == InvType.Armor || x.type == InvType.Vestbag) && (s3.tier > 0 || s3.maxDur > 0f);
                    int itemRarity = isArmor ? s3.tier : s3.rar;

                    if (x.isCtr) {
                        var c = ctrMap[x.actor]; c.Label = label; c.StandardPrice = pVal; c.Rarity = itemRarity;
                        if (c.ClassName.Contains("Safe", StringComparison.OrdinalIgnoreCase) || 
                            c.ClassName.Contains("SecureContainer", StringComparison.OrdinalIgnoreCase) ||
                            (!string.IsNullOrEmpty(label) && label.Contains("Safe", StringComparison.OrdinalIgnoreCase)))
                        {
                            c.Rarity = 6;
                            c.IsSafe = true;
                        }
                        ctrMap[x.actor] = c;
                    } else {
                        var it = new Item 
                        { 
                            Actor = x.actor, 
                            Root = x.root, 
                            ClassName = x.cls, 
                            Label = label, 
                            StandardPrice = pVal, 
                            Rarity = itemRarity, 
                            SellPrice = s3.sell, 
                            Position = x.pos, 
                            Stack = 1,
                            Durability = s3.dur,
                            MaxDurability = s3.maxDur,
                            IsArmor = isArmor,
                            ArmorTier = s3.tier
                        };
                        
                        if (x.parent != 0 && ctrMap.TryGetValue(x.parent, out var pctr)) {
                            pctr.Contents.Add(it);
                        } else if (x.parent == 0) {
                            if (it.Position != default) groundItems.Add(it);
                        }
                    }
                }
            }

            // Ground loot cluster filter & false positive purging:
            // 1. Purge items at or near alive characters/pawns (bots/players carrying gear)
            // 2. Purge clusters where 2 or more ground items occupy the exact same spatial spot (unspawned shelves, un-detached containers)
            if (groundItems.Count > 0)
            {
                var actors = ABIPlayers.ActorList;
                var positions = ABIPlayers.ActorPositions;
                if (actors != null && actors.Count > 0 && positions != null && positions.Count > 0)
                {
                    var deadPawns = new HashSet<ulong>(actors.Where(a => a.Faction == ABIPlayers.FactionType.Dead).Select(a => a.Pawn));
                    var alivePositions = positions.Where(p => !deadPawns.Contains(p.Pawn) && p.Position != default).Select(p => p.Position).ToList();
                    if (alivePositions.Count > 0)
                    {
                        groundItems.RemoveAll(it => alivePositions.Any(p => Vector3.DistanceSquared(p, it.Position) < 14400f)); // 1.2m
                    }
                }

                if (groundItems.Count > 1)
                {
                    var clusterMap = new Dictionary<long, int>(groundItems.Count);
                    foreach (var it in groundItems)
                    {
                        long cx = (long)MathF.Round(it.Position.X / 15f);
                        long cy = (long)MathF.Round(it.Position.Y / 15f);
                        long cz = (long)MathF.Round(it.Position.Z / 15f);
                        long cellKey = (cx * 73856093L) ^ (cy * 19349663L) ^ (cz * 83492791L);
                        clusterMap[cellKey] = clusterMap.GetValueOrDefault(cellKey) + 1;
                    }

                    var cleanGround = new List<Item>(groundItems.Count);
                    foreach (var it in groundItems)
                    {
                        long cx = (long)MathF.Round(it.Position.X / 15f);
                        long cy = (long)MathF.Round(it.Position.Y / 15f);
                        long cz = (long)MathF.Round(it.Position.Z / 15f);
                        long cellKey = (cx * 73856093L) ^ (cy * 19349663L) ^ (cz * 83492791L);
                        if (clusterMap[cellKey] > 1)
                        {
                            continue;
                        }
                        cleanGround.Add(it);
                    }
                    groundItems = cleanGround;
                }
            }

            // Update container total values and sync persistent container cache
            foreach (var kvp in ctrMap.ToList())
            {
                var c = kvp.Value;
                if (c.Contents != null && c.Contents.Count > 0)
                {
                    _containerCache[kvp.Key] = new List<Item>(c.Contents);
                    c.StandardPrice = c.Contents.Sum(it => it.StandardPrice);
                }
                else if (_containerCache.TryGetValue(kvp.Key, out var cachedItems) && cachedItems.Count > 0)
                {
                    c.Contents = new List<Item>(cachedItems);
                    c.StandardPrice = c.Contents.Sum(it => it.StandardPrice);
                }
                else
                {
                    c.StandardPrice = 0;
                }
                ctrMap[kvp.Key] = c;
            }

            // S7 Container States & Safe Timers Resolution (2-Phase Fast Scatter for nearby containers)
            float maxCheckDistSq = 75f * 75f * 10000f;
            var ctrList = ctrMap.Values.Where(c => c.Position != default && Vector3.DistanceSquared(localPos, c.Position) <= maxCheckDistSq).ToList();
            if (ctrList.Count > 0)
            {
                var p1 = new (ulong perfComp, ulong beUsedComp, ulong searchingComp, byte condition, int unlockTotal, float unlockLeft, ulong fsmStr, int fsmLen)[ctrList.Count];

                using (var sc1 = DmaMemory.CreateScatter())
                {
                    for (int k = 0; k < ctrList.Count; k++)
                    {
                        var c = ctrList[k];
                        bool isSafe = c.ClassName.Contains("Safe", StringComparison.OrdinalIgnoreCase) ||
                                      c.ClassName.Contains("LockLoot", StringComparison.OrdinalIgnoreCase);

                        ulong perfOff = isSafe ? ABIOffsets.Container_PerfBase_LockLootBox : ABIOffsets.Container_PerfBase_LootBox;
                        ulong usedOff = isSafe ? ABIOffsets.Container_BeUsed_LockLootBox : ABIOffsets.Container_BeUsed_LootBox;
                        ulong searchOff = isSafe ? ABIOffsets.Container_Searching_LockLootBox : ABIOffsets.Container_Searching_LootBox;

                        sc1.PrepareReadValue<ulong>(c.Actor + perfOff);
                        sc1.PrepareReadValue<ulong>(c.Actor + usedOff);
                        sc1.PrepareReadValue<ulong>(c.Actor + searchOff);

                        if (isSafe)
                        {
                            sc1.PrepareReadValue<byte>(c.Actor + ABIOffsets.Safe_ConditionType);
                            sc1.PrepareReadValue<int>(c.Actor + ABIOffsets.Safe_UnlockTime);
                            sc1.PrepareReadValue<float>(c.Actor + ABIOffsets.Safe_LeftUnLockTime);
                            sc1.PrepareReadValue<ulong>(c.Actor + ABIOffsets.Safe_CurFSMState);
                            sc1.PrepareReadValue<int>(c.Actor + ABIOffsets.Safe_CurFSMState + 0x8);
                        }
                    }
                    sc1.Execute();

                    for (int k = 0; k < ctrList.Count; k++)
                    {
                        var c = ctrList[k];
                        bool isSafe = c.ClassName.Contains("Safe", StringComparison.OrdinalIgnoreCase) ||
                                      c.ClassName.Contains("LockLoot", StringComparison.OrdinalIgnoreCase);

                        ulong perfOff = isSafe ? ABIOffsets.Container_PerfBase_LockLootBox : ABIOffsets.Container_PerfBase_LootBox;
                        ulong usedOff = isSafe ? ABIOffsets.Container_BeUsed_LockLootBox : ABIOffsets.Container_BeUsed_LootBox;
                        ulong searchOff = isSafe ? ABIOffsets.Container_Searching_LockLootBox : ABIOffsets.Container_Searching_LootBox;

                        sc1.ReadValue<ulong>(c.Actor + perfOff, out p1[k].perfComp);
                        sc1.ReadValue<ulong>(c.Actor + usedOff, out p1[k].beUsedComp);
                        sc1.ReadValue<ulong>(c.Actor + searchOff, out p1[k].searchingComp);

                        if (isSafe)
                        {
                            sc1.ReadValue<byte>(c.Actor + ABIOffsets.Safe_ConditionType, out p1[k].condition);
                            sc1.ReadValue<int>(c.Actor + ABIOffsets.Safe_UnlockTime, out p1[k].unlockTotal);
                            sc1.ReadValue<float>(c.Actor + ABIOffsets.Safe_LeftUnLockTime, out p1[k].unlockLeft);
                            sc1.ReadValue<ulong>(c.Actor + ABIOffsets.Safe_CurFSMState, out p1[k].fsmStr);
                            sc1.ReadValue<int>(c.Actor + ABIOffsets.Safe_CurFSMState + 0x8, out p1[k].fsmLen);
                        }
                    }
                }

                // Phase 2: Read physical lid animation states, bUsed, and active searching count
                var p2 = new (byte rotState, byte transState, bool isUsed, int searchingCount)[ctrList.Count];
                using (var sc2 = DmaMemory.CreateScatter())
                {
                    for (int k = 0; k < ctrList.Count; k++)
                    {
                        if (p1[k].perfComp > 0x1000000)
                        {
                            sc2.PrepareReadValue<byte>(p1[k].perfComp + 0x0170); // RotateAnimState
                            sc2.PrepareReadValue<byte>(p1[k].perfComp + 0x01A4); // TranslateAnimState
                        }
                        if (p1[k].beUsedComp > 0x1000000)
                        {
                            sc2.PrepareReadValue<bool>(p1[k].beUsedComp + 0x01B8); // bUsed
                        }
                        if (p1[k].searchingComp > 0x1000000)
                        {
                            sc2.PrepareReadValue<int>(p1[k].searchingComp + 0x0108); // SearchingCharacterList.Count
                        }
                    }
                    sc2.Execute();

                    for (int k = 0; k < ctrList.Count; k++)
                    {
                        if (p1[k].perfComp > 0x1000000)
                        {
                            sc2.ReadValue<byte>(p1[k].perfComp + 0x0170, out p2[k].rotState);
                            sc2.ReadValue<byte>(p1[k].perfComp + 0x01A4, out p2[k].transState);
                        }
                        if (p1[k].beUsedComp > 0x1000000)
                        {
                            sc2.ReadValue<bool>(p1[k].beUsedComp + 0x01B8, out p2[k].isUsed);
                        }
                        if (p1[k].searchingComp > 0x1000000)
                        {
                            sc2.ReadValue<int>(p1[k].searchingComp + 0x0108, out p2[k].searchingCount);
                        }
                    }
                }

                // Apply states back to containers in ctrMap
                for (int k = 0; k < ctrList.Count; k++)
                {
                    var c = ctrList[k];
                    bool isSafe = c.ClassName.Contains("Safe", StringComparison.OrdinalIgnoreCase) ||
                                  c.ClassName.Contains("LockLoot", StringComparison.OrdinalIgnoreCase);

                    c.IsOpen = (p2[k].rotState == 1 || p2[k].rotState == 2 || p2[k].transState == 1 || p2[k].transState == 2);
                    c.IsLooted = p2[k].isUsed;
                    if (c.IsLooted)
                    {
                        _containerCache.Remove(c.Actor);
                        c.Contents?.Clear();
                        c.StandardPrice = 0;
                    }
                    c.IsBeingLooted = (p2[k].searchingCount > 0);

                    if (isSafe)
                    {
                        c.IsSafe = true;
                        c.Rarity = 6; // Mythic (Tier 6 - Red) for Safes
                        c.IsFreeSafe = (p1[k].condition == 0);
                        c.SafeTotalSeconds = p1[k].unlockTotal;
                        c.SafeLeftSeconds = p1[k].unlockLeft;

                        if (p1[k].unlockLeft > 0.05f && p1[k].unlockLeft <= p1[k].unlockTotal)
                        {
                            c.IsSafeUnlocking = true;
                        }
                        else if (p1[k].unlockLeft <= 0.05f && p1[k].unlockTotal > 0 && p2[k].isUsed)
                        {
                            c.IsSafeUnlocked = true;
                        }
                    }

                    ctrMap[c.Actor] = c;
                }
            }

            var finalContainers = ctrMap.Values.OrderBy(c => Vector3.DistanceSquared(localPos, c.Position)).ToList();
            lock (_sync) _latest = new Frame { StampTicks = Stopwatch.GetTimestamp(), Items = groundItems, Containers = finalContainers, Terminals = terminalList, TotalActorsSeen = take };
        }

        public static SafeTimerInfo ReadSafeTimer(ulong containerActor)
        {
            var info = new SafeTimerInfo();
            if (containerActor < 0x1000000) return info;

            try
            {
                byte condition = DmaMemory.Read<byte>(containerActor + ABIOffsets.Safe_ConditionType);
                info.IsFreeSafe = (condition == 0);

                info.TotalSeconds     = DmaMemory.Read<int>(containerActor + ABIOffsets.Safe_UnlockTime);
                info.RemainingSeconds = DmaMemory.Read<float>(containerActor + ABIOffsets.Safe_LeftUnLockTime);

                ulong pStr = DmaMemory.Read<ulong>(containerActor + ABIOffsets.Safe_CurFSMState);
                int len    = DmaMemory.Read<int>(containerActor + ABIOffsets.Safe_CurFSMState + 0x8);
                if (pStr > 0x1000000 && len > 0 && len < 32)
                {
                    byte[]? bytes = DmaMemory.ReadBytes(pStr, (uint)(len * 2));
                    if (bytes != null)
                    {
                        string state = Encoding.Unicode.GetString(bytes).TrimEnd('\0');
                        if (state.Contains("UnLocking", StringComparison.OrdinalIgnoreCase)) info.IsUnlocking = true;
                        else if (state.Contains("UnLock", StringComparison.OrdinalIgnoreCase)) info.IsUnlocked = true;
                    }
                }
                info.IsLockedSafe = true;
            }
            catch { }

            return info;
        }

        public static (bool isOpen, bool isLooted) ReadContainerLootState(ulong containerActor, bool isSafe = false)
        {
            bool isOpen = false, isLooted = false;
            if (containerActor < 0x1000000) return (isOpen, isLooted);

            try
            {
                ulong perfComp = DmaMemory.Read<ulong>(containerActor + (isSafe ? ABIOffsets.Container_PerfBase_LockLootBox : ABIOffsets.Container_PerfBase_LootBox));
                if (perfComp < 0x1000000)
                    perfComp = DmaMemory.Read<ulong>(containerActor + ABIOffsets.Container_PerfBase_Container);

                if (perfComp > 0x1000000)
                {
                    byte rotState   = DmaMemory.Read<byte>(perfComp + 0x0170);
                    byte transState = DmaMemory.Read<byte>(perfComp + 0x01A4);
                    isOpen = (rotState == 2 || transState == 2 || rotState == 1 || transState == 1);
                }

                ulong beUsedComp = DmaMemory.Read<ulong>(containerActor + (isSafe ? ABIOffsets.Container_BeUsed_LockLootBox : ABIOffsets.Container_BeUsed_LootBox));
                if (beUsedComp < 0x1000000)
                    beUsedComp = DmaMemory.Read<ulong>(containerActor + ABIOffsets.Container_BeUsed_Container);

                if (beUsedComp > 0x1000000)
                {
                    isLooted = DmaMemory.Read<bool>(beUsedComp + 0x01B8);
                }
            }
            catch { }

            return (isOpen, isLooted);
        }

        private static string ReadFStringFromHistory(ulong historyPtr) {
            if (historyPtr < 0x1000000) return string.Empty;
            ulong data = DmaMemory.Read<ulong>(historyPtr + 0x08);
            int count = DmaMemory.Read<int>(historyPtr + 0x10);
            if (data < 0x1000000 || count <= 0 || count > 256) return string.Empty;
            byte[]? b = DmaMemory.ReadBytes(data, (uint)(count * 2));
            if (b == null) return string.Empty;
            string s = Encoding.Unicode.GetString(b).Split('\0')[0];
            return IsGarbage(s) ? string.Empty : s;
        }

        private static bool IsSpawnPackage(string cls)
        {
            if (string.IsNullOrEmpty(cls)) return false;
            if (cls.Length > 11 && cls.StartsWith("BP_Package_", StringComparison.OrdinalIgnoreCase))
            {
                int cIdx = cls.IndexOf('_', 11);
                if (cIdx > 11)
                {
                    for (int i = 11; i < cIdx; i++)
                    {
                        if (!char.IsDigit(cls[i])) return false;
                    }
                    return true;
                }
            }
            return false;
        }

        private static bool IsNonLoot(string cls) {
            if (string.IsNullOrEmpty(cls)) return true;
            if (IsSpawnPackage(cls)) return true;
            return cls.Contains("ImpactEffect", StringComparison.OrdinalIgnoreCase) || cls.Contains("Projectile", StringComparison.OrdinalIgnoreCase) || 
                   cls.Contains("SecureContainer", StringComparison.OrdinalIgnoreCase) || cls.Contains("QuestManager", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("UamAICharacter", StringComparison.OrdinalIgnoreCase) || cls.Contains("UamCharacter", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("Bullet_HD", StringComparison.OrdinalIgnoreCase) || cls.Contains("BulletShell", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("FireEffect", StringComparison.OrdinalIgnoreCase) || cls.Contains("SmokeActor", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("CameraActor", StringComparison.OrdinalIgnoreCase) || cls.Contains("CineCameraActor", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("dummycamera", StringComparison.OrdinalIgnoreCase) || cls.Contains("teamupcamera", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("cinecamera", StringComparison.OrdinalIgnoreCase) || cls.Contains("cameraparent", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("renderviewcamera", StringComparison.OrdinalIgnoreCase) || cls.Contains("camerarig", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("camera2", StringComparison.OrdinalIgnoreCase) || cls.Contains("observerpawn", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("previewscene", StringComparison.OrdinalIgnoreCase) || cls.Contains("playerstate", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("gamestate", StringComparison.OrdinalIgnoreCase) || cls.Contains("playercontroller", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("captureactor", StringComparison.OrdinalIgnoreCase) || cls.Contains("scenerenderingsettings", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("lighting_", StringComparison.OrdinalIgnoreCase) || cls.Contains("appearance", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("adapter", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("TruckShop", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("ShopShelf", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("ShopSell", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("AssembleEnvironment", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("InventoryCue", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("VirtualTexture", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("LevelBounds", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("SceneryRuntime", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("AutoColorGrading", StringComparison.OrdinalIgnoreCase) ||
                   cls.Contains("WorldSettings", StringComparison.OrdinalIgnoreCase);
        }

        private static void PublishEmpty() { lock (_sync) _latest = new Frame { StampTicks = Stopwatch.GetTimestamp(), Items = new(), Containers = new(), Terminals = new() }; }

        private static Vector3 ReadActorPos(ulong actor, ulong root = 0) {
            try {
                if (root == 0) {
                    root = DmaMemory.Read<ulong>(actor + ABIOffsets.AActor_RootComponent);
                    if (root <= 0x100000) root = DmaMemory.Read<ulong>(actor + ABIOffsets.AActor_RootComponent + 0x1008);
                }
                if (root == 0) return default;
                var rel = DmaMemory.DecryptActorPosition(root);
                if (rel.LengthSquared() < 100f || rel.Z < -2500f ||
                    (MathF.Abs(rel.X - 10198f) < 100f && MathF.Abs(rel.Y - (-453f)) < 100f)) return default;
                return rel + ABIPlayers.GetOriginBias();
            } catch { return default; }
        }

        private static bool IsGarbage(string s) { if (string.IsNullOrEmpty(s)) return false; int susp = 0; foreach (char c in s) { if (char.IsControl(c)) return true; if (c > 0x1000) susp++; } return susp > (s.Length / 2); }
        private static string PrettifyClassName(string cls) {
            if (string.IsNullOrEmpty(cls)) return "Item"; if (CleanNames.TryGetValue(cls, out var clean)) return clean;
            string s = cls; int last = s.LastIndexOf('_'); if (last > 0) { string suf = s[(last + 1)..]; if (suf.Length > 0 && suf.All(char.IsDigit)) s = s[..last]; }
            if (s.EndsWith("_C", StringComparison.Ordinal)) s = s[..^2]; if (s.StartsWith("BP_", StringComparison.Ordinal)) s = s[3..];
            if (ValuableMappings.TryGetValue(s, out var v)) return v; return s.Replace('_', ' ').Trim();
        }

        private static int ResolveWeaponPrice(ulong actor, ulong cdc, int basePrice)
        {
            if (actor == 0) return basePrice;
            lock (_weaponPriceCache)
            {
                if (_weaponPriceCache.TryGetValue(actor, out int cachedPrice))
                {
                    return cachedPrice;
                }
            }

            int totalPrice = basePrice;
            ulong assembleComp = 0;
            try
            {
                totalPrice += GetActorChildrenPrice(actor, 0);
                assembleComp = DmaMemory.Read<ulong>(actor + ABIOffsets.ASGWeapon_WeaponAssembleComp); // ASGWeapon component
                if (assembleComp < 0x1000000)
                {
                    assembleComp = DmaMemory.Read<ulong>(actor + ABIOffsets.ASGInventory_AssembleComp); // ASGInventory component
                }
                if (assembleComp > 0x1000000)
                {
                    totalPrice += SumAssembleArrayRecursive(assembleComp, 0);
                }
            }
            catch { }

            int attempts = 0;
            lock (_weaponPriceCache)
            {
                _weaponPriceAttempts.TryGetValue(actor, out attempts);
                attempts++;
                _weaponPriceAttempts[actor] = attempts;
            }

            // Cache immediately to prevent duplicate heavy scans on subsequent frames
            lock (_weaponPriceCache)
            {
                _weaponPriceCache[actor] = totalPrice;
            }
            return totalPrice;
        }

        private static int GetActorChildrenPrice(ulong actor, int depth)
        {
            if (actor == 0 || depth > 5) return 0;
            int sum = 0;
            try
            {
                ulong arrayPtr = DmaMemory.Read<ulong>(actor + 0x160); // AActor_Children array
                int count = DmaMemory.Read<int>(actor + 0x168);
                if (arrayPtr != 0 && count > 0 && count < 100)
                {
                    ulong[] children = DmaMemory.ReadArray<ulong>(arrayPtr, count);
                    if (children != null)
                    {
                        var validChildren = new List<ulong>(children.Length);
                        for (int k = 0; k < children.Length; k++)
                        {
                            if (children[k] > 0x1000000) validChildren.Add(children[k]);
                        }
                        if (validChildren.Count > 0)
                        {
                            ulong[] cdcs = new ulong[validChildren.Count];
                            using (var sc = DmaMemory.CreateScatter())
                            {
                                for (int i = 0; i < validChildren.Count; i++) sc.PrepareReadValue<ulong>(validChildren[i] + Off.CDC);
                                sc.Execute();
                                for (int i = 0; i < validChildren.Count; i++) sc.ReadValue<ulong>(validChildren[i] + Off.CDC, out cdcs[i]);
                            }

                            var validCdcs = new List<(ulong child, ulong cdc)>(validChildren.Count);
                            for (int i = 0; i < validChildren.Count; i++) if (cdcs[i] > 0x1000000) validCdcs.Add((validChildren[i], cdcs[i]));

                            if (validCdcs.Count > 0)
                            {
                                int[] prices = new int[validCdcs.Count];
                                using (var sc = DmaMemory.CreateScatter())
                                {
                                    for (int i = 0; i < validCdcs.Count; i++) sc.PrepareReadValue<int>(validCdcs[i].cdc + Off.CDC_Price);
                                    sc.Execute();
                                    for (int i = 0; i < validCdcs.Count; i++) sc.ReadValue<int>(validCdcs[i].cdc + Off.CDC_Price, out prices[i]);
                                }

                                for (int i = 0; i < validCdcs.Count; i++)
                                {
                                    if (prices[i] > 0 && prices[i] < 10_000_000) sum += prices[i];
                                    sum += GetActorChildrenPrice(validCdcs[i].child, depth + 1);
                                }
                            }
                        }
                    }
                }
            }
            catch { }
            return sum;
        }

        private static int SumAssembleArrayRecursive(ulong comp, int depth)
        {
            if (comp == 0 || depth > 5) return 0;
            int sum = 0;
            try
            {
                ulong arrayPtr = DmaMemory.Read<ulong>(comp + 0x1F8); // AssembledInventoryList array
                int count = DmaMemory.Read<int>(comp + 0x200);
                if (arrayPtr != 0 && count > 0 && count < 100)
                {
                    ulong[] items = DmaMemory.ReadArray<ulong>(arrayPtr, count);
                    if (items != null)
                    {
                        var validItems = new List<ulong>(items.Length);
                        for (int k = 0; k < items.Length; k++)
                        {
                            if (items[k] > 0x1000000) validItems.Add(items[k]);
                        }
                        if (validItems.Count > 0)
                        {
                            ulong[] cdcs = new ulong[validItems.Count];
                            ulong[] subComps = new ulong[validItems.Count];
                            using (var sc = DmaMemory.CreateScatter())
                            {
                                for (int i = 0; i < validItems.Count; i++)
                                {
                                    sc.PrepareReadValue<ulong>(validItems[i] + Off.CDC);
                                    sc.PrepareReadValue<ulong>(validItems[i] + ABIOffsets.ASGInventory_AssembleComp); // ASGAssembleComponent
                                }
                                sc.Execute();
                                for (int i = 0; i < validItems.Count; i++)
                                {
                                    sc.ReadValue<ulong>(validItems[i] + Off.CDC, out cdcs[i]);
                                    sc.ReadValue<ulong>(validItems[i] + ABIOffsets.ASGInventory_AssembleComp, out subComps[i]);
                                }
                            }

                            var validCdcs = new List<(ulong item, ulong cdc, ulong subComp)>(validItems.Count);
                            for (int i = 0; i < validItems.Count; i++)
                                if (cdcs[i] > 0x1000000 || subComps[i] > 0x1000000) validCdcs.Add((validItems[i], cdcs[i], subComps[i]));

                            if (validCdcs.Count > 0)
                            {
                                int[] prices = new int[validCdcs.Count];
                                using (var sc = DmaMemory.CreateScatter())
                                {
                                    for (int i = 0; i < validCdcs.Count; i++)
                                        if (validCdcs[i].cdc > 0x1000000) sc.PrepareReadValue<int>(validCdcs[i].cdc + Off.CDC_Price);
                                    sc.Execute();
                                    for (int i = 0; i < validCdcs.Count; i++)
                                        if (validCdcs[i].cdc > 0x1000000) sc.ReadValue<int>(validCdcs[i].cdc + Off.CDC_Price, out prices[i]);
                                }

                                for (int i = 0; i < validCdcs.Count; i++)
                                {
                                    if (prices[i] > 0 && prices[i] < 10_000_000) sum += prices[i];
                                    if (validCdcs[i].subComp > 0x1000000) sum += SumAssembleArrayRecursive(validCdcs[i].subComp, depth + 1);
                                }
                            }
                        }
                    }
                }
            }
            catch { }
            return sum;
        }
    }
}
