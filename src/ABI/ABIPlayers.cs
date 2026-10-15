using System;
using System.Collections.Generic;
using System.Numerics;
using System.Threading;
using System.Linq;
using System.Threading.Tasks;
using ImGuiOverlay.DMA;
using VmmSharpEx.Scatter;
using System.Diagnostics;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI PLAYERS  --  Background cache threads -- all hot paths use scatter reads.
    // /////////////////////////////////////////////////////////////////////////////////////

    public static class ABIPlayers
    {
        // //// World / camera pointers ////////////////////////////////////////////////////
        public static ulong UWorld, UGameInstance, GameState, PersistentLevel;
        public static ulong ActorArray; public static int ActorCount;
        public static ulong LocalPlayers, PlayerController, PlayerArray; public static int PlayerCount;
        public static ulong LocalPawn, LocalRoot, LocalState, LocalCameraMgr, LocalInvMgr;
        public static int   LocalTeam;

        // //// Map details ////////////////////////////////////////////////////////////////
        public static int   MapID;
        public static ulong RoomID;
        public static byte  MapSceneType;
        public static string MapName = "";
        
        private static ulong _lastGameState;
        private static ulong _lastRoomId;
        private static byte  _lastSceneType;
        private static long  _matchStartTime;

        // //// Published snapshots ////////////////////////////////////////////////////////
        public static Vector3          LocalPosition;
        public static FMinimalViewInfo Camera;
        public static float            CtrlYaw;
        public static int              LocalCurAmmo, LocalMaxAmmo;
        public static int              LocalVestLevel, LocalHelmetLevel;
        public static float            LocalVestDurability, LocalVestMaxDurability;
        public static float            LocalHelmetDurability, LocalHelmetMaxDurability;
        public static float            LocalHealth, LocalHealthMax;
        public static float[]          LocalLimbHealth = new float[7];
        public static float[]          LocalLimbMax    = new float[7];

        // //// Origin bias ///////////////////////////////////////////////////////////////
        private static Vector3 _originBias;
        private static Vector3 _prevLocalWorld;
        private static bool    _havePrevLocal;
        public static Vector3  GetOriginBias() => _originBias;

        // //// Public actor lists /////////////////////////////////////////////////////////
        public static List<ABIPlayer> ActorList      = new();
        public static List<ActorPos>  ActorPositions = new();
        public static List<DebugActorInfo> DebugActors = new();
        public static readonly object Sync           = new();
        public static bool EnableUniversalDebug = false;
        public static float UniversalDebugDist  = 30f;

        // //// Skeleton cache /////////////////////////////////////////////////////////////
        private static readonly System.Collections.Concurrent.ConcurrentDictionary<ulong, Vector3[]>
            _skelCache = new();

        // //// Coherent frame ////////////////////////////////////////////////////////////
        public struct Frame
        {
            public FMinimalViewInfo              Cam;
            public Vector3                       Local;
            public List<ActorPos>                Positions;
            public Dictionary<ulong, Vector3[]>  Skeletons;
            public long                          Stamp;
            public long                          DmaStamp;
        }

        private static int   _frameSeq;
        private static Frame _frameBuf;
        public static long   LastPositionsStamp;

        // //// Camera seqlock buf ////////////////////////////////////////////////////////
        private static int             _camSeq;
        private static FMinimalViewInfo _camBuf;
        private static Vector3          _camLocalBuf;
        private static float            _ctrlYawBuf;

        // //// Zoom //////////////////////////////////////////////////////////////////////
        public struct ZoomInfo { public bool Valid; public float Zoom, ScopeMag, Progress, ScopeAdsScale; public bool IsZooming; public ulong WeaponMan, CurrentWeapon, ZoomComp; public float ProjectileSpeed, GravityScale; public long Stamp; }
        private static readonly object _zoomSync = new();
        private static ZoomInfo _zoom;
        public static bool TryGetZoom(out ZoomInfo zi) { lock (_zoomSync) { zi = _zoom; return zi.Valid; } }

        public static ABIGameConfig Config = new();

        // //// Actor data ////////////////////////////////////////////////////////////////
        public enum FactionType { Team, Enemy, Bot, Boss, Dead, Dummy }

        public struct ABIPlayer
        {
            public readonly ulong  Pawn, Mesh, Root, ASC, HealthSet, DeathComp, InvMgr, ArmorMgr, MovementComp;
            public readonly string Name;
            public readonly bool   IsBot;
            public readonly bool   IsZombie;
            public readonly int    Team;
            public readonly FactionType Faction;
            public readonly bool   IsEnhanced;
            public readonly int    InventoryValue;

            public ABIPlayer(ulong pawn, ulong mesh, ulong root, string name, bool isBot,
                             ulong asc, ulong healthSet, ulong deathComp, int team,
                             FactionType faction, bool isEnhanced, ulong invMgr, ulong armorMgr, ulong movementComp, int invValue = 0, bool isZombie = false)
            { Pawn=pawn; Mesh=mesh; Root=root; Name=name; IsBot=isBot; IsZombie=isZombie; ASC=asc; HealthSet=healthSet; 
              DeathComp=deathComp; Team=team; Faction=faction; IsEnhanced=isEnhanced; InvMgr=invMgr; ArmorMgr=armorMgr; MovementComp=movementComp; InventoryValue = invValue; }
        }

        [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential, Pack = 1)]
        public unsafe struct HealthLimbPacket
        {
            public fixed float Values[14];
        }

        [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential, Pack = 1)]
        public struct ZombieHealthPacket
        {
            public float CurBase;
            public float CurValue;
            public ulong Pad;
            public float MaxBase;
            public float MaxValue;
        }

        [System.Runtime.InteropServices.StructLayout(System.Runtime.InteropServices.LayoutKind.Sequential, Pack = 1)]
        public struct MeshTimersPacket
        {
            public float LastSubmit;
            public float LastOnScreen;
        }

        public struct PlayerAmmoInfo
        {
            public int    CurAmmo;
            public int    MaxAmmo;
            public string Caliber;
            public string AmmoName;
            public int    AmmoTier;
            public bool   IsReloading;
        }

        public struct ActorPos
        {
            public ulong   Pawn;
            public Vector3 Position;
            public Vector3 Velocity;
            public float   Health, HealthMax;
            public bool    IsDead, IsVisible, HasFreshSkeleton, DeadByDeathComp, IsTeam, IsZombie;
            public FactionType Faction;
            public int     TeamId;
            public long    DmaStamp;

            // Advanced Status
            public string  Name;
            public bool    IsBot;
            public string  CharTypeName;
            public string  WeaponName;
            public int     CurAmmo, MaxAmmo;

            // S7 Ammo & Reloading & DBNO & Grenade
            public string  Caliber;
            public string  AmmoName;
            public int     AmmoTier;
            public bool    IsReloading;
            public bool    IsDowned;
            public bool    CanSelfRevive;
            public bool    IsBeingRevived;
            public bool    IsCookingGrenade;

            public int     VestLevel;
            public float   VestDurability;
            public float   VestMaxDurability;
            public bool    IsArmoredRig;

            public int     HelmetLevel;
            public float   HelmetDurability;
            public float   HelmetMaxDurability;

            public int     InventoryValue;
            public List<(string name, int value)> GearList;
        }

        public struct DebugActorInfo
        {
            public ulong   Ptr;
            public string  Name;
            public Vector3 Pos;
        }

        private sealed class ActorCacheEntry
        {
            public ulong Pawn, Mesh, Root, ASC, DeathComp, HealthSet, PlayerState, InvMgr, ArmorMgr, MovementComp, DBNOComp;
            public ulong CtwPtr, MeshCtwPtr, BoneArrayPtr; public int BoneCount;
            public bool IsBot; public int Team; public string Name; public FactionType Faction;
            public bool IsEnhanced; public byte CharType; public uint NameId;
            public string CharTypeName;
            public string LastWeaponName; public int LastCurAmmo, LastMaxAmmo;
            public string LastCaliber; public string LastAmmoName; public int LastAmmoTier;
            public bool LastIsReloading;
            public bool LastIsCookingGrenade;
            public int LastVestLevel, LastHelmetLevel; 
            public float LastVestDurability, LastVestMaxDurability;
            public float LastHelmetDurability, LastHelmetMaxDurability;
            public int LastInventoryValue;
            public List<(string name, int value)> LastGearList;
            public bool IsDummy;
            public bool IsZombie;
            public bool HasValidBones;

            // Pre-cached ACE Position Pointers for pure batch DMA
            public bool  RelResolved;
            public bool  IsEncrypted;
            public uint  AceKey;
            public ulong AceNodePtr;
            public ulong AceDataPtr;
            public ulong RawPosPtr;

            // Pre-cached ACE Mesh Pointers for pure batch Skeleton DMA
            public bool  MeshIsEncrypted;
            public uint  MeshAceKey;
            public ulong MeshAceNodePtr;
            public ulong MeshAceDataPtr;
            public ulong MeshRawCtwPtr;

            public string PrivateName;
            public Vector3 LastValidPosition;
            public Vector3 LastVelocity;
            public long LastValidStamp;
            public int BoneResolveAttempts;
            public long LastBoneAttemptStamp;
        }

        private static readonly System.Collections.Concurrent.ConcurrentDictionary<ulong, ActorCacheEntry> _actorCache = new();

        private static bool _running;
        private static long _lastEnumTicks;
        private const  int  ENUM_PERIOD_MS = 50;
        private static int  _localTick;
        private static long _lastHealthReset;
        private static ulong _localHealthSet;

        // LocalPlayer pre-cached ACE pointers for pure batch Camera DMA
        private static ulong _cachedLocalRoot;
        private static bool  _localRootIsEncrypted;
        private static uint  _localAceKey;
        private static ulong _localAceNodePtr;
        private static ulong _localAceDataPtr;
        
        // Manual Rescan Event
        private static readonly ManualResetEventSlim _rescanEvent = new(false);
        public static void RescanActors() => _rescanEvent.Set();

        public static void DebugLog(string category, string msg)
        {
            if (Config.ShowDebug) DMA.Logger.Info($"[Debug-{category}] {msg}");
        }

        private static void DebugFlicker(string msg) => DebugLog("Flicker", msg);
        private static void DebugVitals(string msg) => DebugLog("Vitals", msg);
        private static void DebugFov(string msg) => DebugLog("FOV", msg);

        private static long _lastLevelScanTicks = 0;
        private static readonly HashSet<ulong> _cachedDummyPtrs = new();
        private static readonly HashSet<ulong> _activePawnsLogged = new();
        private static long _lastPlayerPosLogStamp = 0;

        public static void LogPlayerLocationsIfNeeded(double intervalSeconds = 4.0)
        {
            if (!DmaMemory.IsAttached) return;
            long now = Stopwatch.GetTimestamp();
            double elapsedSec = (double)(now - _lastPlayerPosLogStamp) / Stopwatch.Frequency;
            if (elapsedSec < intervalSeconds) return;
            _lastPlayerPosLogStamp = now;

            var local = LocalPosition;
            bool localValid = DmaMemory.IsValidCoordinate(local);
            if (local != default)
            {
                DMA.Logger.Info($"[Decryption] Local Player: <X: {local.X:F1}, Y: {local.Y:F1}, Z: {local.Z:F1}> [{(localValid ? "VALID" : "INVALID")}]");
            }
            else
            {
                DMA.Logger.Warn("[Decryption] Local Player: <0, 0, 0> (Awaiting spawn or root resolution)");
            }

            var posList = ActorPositions;
            if (posList == null || posList.Count == 0)
            {
                DMA.Logger.Info("[Decryption] 0 other players/bots tracked in current level.");
                return;
            }

            int count = Math.Min(posList.Count, 6);
            DMA.Logger.Info($"[Decryption] Active Players/Bots ({posList.Count} total, showing {count}):");
            for (int i = 0; i < count; i++)
            {
                var p = posList[i];
                bool valid = DmaMemory.IsValidCoordinate(p.Position);
                float distM = local != default ? Vector3.Distance(local, p.Position) / 100f : 0f;
                string type = p.IsBot ? "Bot" : "Player";
                string status = valid ? "VALID" : "INVALID";
                DMA.Logger.Info($"  ├─ [{type}/{p.Faction}] '{p.Name}' (Pawn: 0x{p.Pawn:X}) -> Pos: <{p.Position.X:F1}, {p.Position.Y:F1}, {p.Position.Z:F1}> | Dist: {distM:F1}m [{status}]");
            }
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  Public API
        // /////////////////////////////////////////////////////////////////////////////////////

        public static void StartCache()
        {
            if (_running || !DmaMemory.IsAttached) return;
            _running = true;

            void Spawn(ThreadStart fn, string name, ThreadPriority pri) =>
                new Thread(fn) { IsBackground = true, Priority = pri, Name = name }.Start();

            Spawn(CacheWorldLoop,      "ABI.World",      ThreadPriority.Normal);
            Spawn(CacheCameraLoop,     "ABI.Camera",     ThreadPriority.Highest);
            Spawn(CachePlayersLoop,    "ABI.Players",    ThreadPriority.Normal);
            Spawn(CacheVitalsLoop,     "ABI.Vitals",     ThreadPriority.BelowNormal);
            Spawn(CachePositionsLoop,  "ABI.Positions",  ThreadPriority.Highest);
            Spawn(CacheSkeletonsLoop,  "ABI.Skeletons",  ThreadPriority.AboveNormal);
            Spawn(FramePulseLoop,      "ABI.FramePulse", ThreadPriority.Highest);
            Spawn(CacheWeaponZoomLoop, "ABI.Weapon",     ThreadPriority.BelowNormal);
            Spawn(CacheHeavyStatsLoop, "ABI.Heavy",      ThreadPriority.Lowest);
        }

        public static void Stop() => _running = false;

        public static void DumpGear()
        {
            try
            {
                if (!DmaMemory.IsAttached) return;
                var actors = ActorList;
                if (actors == null || actors.Count == 0) return;

                var sb = new System.Text.StringBuilder();
                ulong lp = LocalPawn;
                if (lp > 0x1000000)
                {
                    sb.AppendLine($"--- LOCAL PLAYER GEAR ---");
                    sb.AppendLine($"Pawn: 0x{lp:X} | Ammo: {LocalCurAmmo}/{LocalMaxAmmo}");
                    sb.AppendLine($"Vest: Tier {LocalVestLevel} ({LocalVestDurability:F1}/{LocalVestMaxDurability:F1})");
                    sb.AppendLine($"Helmet: Tier {LocalHelmetLevel} ({LocalHelmetDurability:F1}/{LocalHelmetMaxDurability:F1})");
                    if (_actorCache.TryGetValue(lp, out var localAc) && localAc != null && localAc.LastGearList != null && localAc.LastGearList.Count > 0)
                    {
                        sb.AppendLine($"Total Value: {localAc.LastInventoryValue:N0}");
                        sb.AppendLine("Equipped/High-Value Gear:");
                        foreach (var gear in localAc.LastGearList)
                        {
                            sb.AppendLine($"  - {gear.name}: {gear.value:N0}");
                        }
                    }
                    sb.AppendLine("===========================================");
                }

                foreach (var a in actors)
                {
                    if (a.IsBot && !a.IsEnhanced) continue; // Skip regular bots

                    sb.AppendLine($"Player: {a.Name} ({(a.IsBot ? "BOSS/Elite" : "PMC")})");
                    sb.AppendLine($"Total Value: {a.InventoryValue:N0}");
                    
                    if (_actorCache.TryGetValue(a.Pawn, out var ac) && ac != null && ac.LastGearList != null && ac.LastGearList.Count > 0)
                    {
                        sb.AppendLine("Equipped/High-Value Gear:");
                        foreach (var gear in ac.LastGearList)
                        {
                            sb.AppendLine($"  - {gear.name}: {gear.value:N0}");
                        }
                    }
                    else
                    {
                        sb.AppendLine("No high-value gear detected.");
                    }
                    sb.AppendLine("-------------------------------------------");
                }

                System.IO.File.WriteAllText("gear_dump.txt", sb.ToString());
                DMA.Logger.Info("[Dump] Exported gear to gear_dump.txt");
            }
            catch (Exception ex) { DMA.Logger.Error($"[Dump] Gear dump failed: {ex.Message}"); }
        }

        public static void DumpHealthDetails()
        {
            try
            {
                if (!DmaMemory.IsAttached) return;
                var actors = ActorList;
                if (actors == null || actors.Count == 0) return;

                var posMap = new Dictionary<ulong, ActorPos>();
                foreach (var ap in ActorPositions) posMap[ap.Pawn] = ap;

                var sb = new System.Text.StringBuilder();
                sb.AppendLine($"--- ABI COMPREHENSIVE HP DUMP --- {DateTime.Now} ---");
                sb.AppendLine($"DMA Base: 0x{DmaMemory.Base:X} | LocalPawn: 0x{LocalPawn:X} | LocalTeam: {LocalTeam}");
                sb.AppendLine($"Local HealthSet: 0x{GetLocalHealthSetAddress():X} | LocalHP: {LocalHealth:F1}/{LocalHealthMax:F1}");
                sb.AppendLine($"ActorList Count: {actors.Count} | ActorPositions Count: {posMap.Count}");
                sb.AppendLine("================================================================");

                foreach (var a in actors)
                {
                    _actorCache.TryGetValue(a.Pawn, out var ac);
                    posMap.TryGetValue(a.Pawn, out var ap);

                    byte cType = ac?.CharType ?? 0;
                    string cTypeName = ac?.CharTypeName ?? "Unknown";
                    bool hasBones = ac?.HasValidBones ?? false;
                    ulong bArrayPtr = ac?.BoneArrayPtr ?? 0;
                    int bCount = ac?.BoneCount ?? 0;

                    sb.AppendLine($"Entity: {a.Name} ({(a.IsBot ? (a.IsEnhanced ? "BOSS/Elite" : "Bot") : "PMC")})");
                    sb.AppendLine($"  Pawn: 0x{a.Pawn:X} | Mesh: 0x{a.Mesh:X} | Root: 0x{a.Root:X}");
                    sb.AppendLine($"  CharType: {cType} ({cTypeName}) | Faction: {a.Faction} | Team: {a.Team} | IsBot: {a.IsBot} | IsEnhanced: {a.IsEnhanced}");
                    sb.AppendLine($"  ASC: 0x{a.ASC:X} | HealthSet (cached): 0x{a.HealthSet:X} | DeathComp: 0x{a.DeathComp:X}");
                    sb.AppendLine($"  HasValidBones: {hasBones} | BoneArrayPtr: 0x{bArrayPtr:X} | BoneCount: {bCount}");
                    sb.AppendLine($"  Cached Position HP: {(posMap.ContainsKey(a.Pawn) ? $"{ap.Health:F1}/{ap.HealthMax:F1}" : "NOT IN POSITION SNAPSHOT")}");

                    if (a.DeathComp != 0)
                    {
                        byte bDead = DmaMemory.Read<byte>(a.DeathComp + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD);
                        sb.AppendLine($"  DeathComp+0x240 bIsDead: {bDead}");
                    }

                    if (a.ASC != 0)
                    {
                        ulong basePtr = a.ASC + (ulong)ABIOffsetsExt.OFF_ASC_ATTRSETS;
                        ulong data = DmaMemory.Read<ulong>(basePtr);
                        int num = DmaMemory.Read<int>(basePtr + 0x8);
                        sb.AppendLine($"  ASC+0x188 SpawnedAttributes: Count={num} | Data=0x{data:X}");

                        if (data > 0x1000000 && num > 0 && num < 64)
                        {
                            ulong[] sets = DmaMemory.ReadArray<ulong>(data, num);
                            if (sets != null)
                            {
                                ulong bestSet = 0; int bestPrio = -1;
                                for (int i = 0; i < sets.Length; i++)
                                {
                                    if (sets[i] < 0x1000000) continue;
                                    uint sid = DmaMemory.Read<uint>(sets[i] + ABIOffsets.UObject_ObjectId);
                                    string setName = ABINamePool.GetName(sid);
                                    int prio = setName != null && setName.Contains("Endurance", StringComparison.OrdinalIgnoreCase) ? 2
                                        : setName != null && setName.Contains("Health", StringComparison.OrdinalIgnoreCase) ? 1 : 0;
                                    if (prio > bestPrio) { bestPrio = prio; bestSet = sets[i]; }
                                    sb.AppendLine($"    [{i}] AttrSetPtr: 0x{sets[i]:X} | ObjectId: {sid} | Name: {setName} | Priority: {prio}");
                                }
                                sb.AppendLine($"  Resolved Best HealthSet: 0x{bestSet:X} (Priority: {bestPrio})");

                                ulong dumpSet = a.HealthSet != 0 ? a.HealthSet : bestSet;
                                if (dumpSet != 0)
                                {
                                    sb.AppendLine($"  --- Limb Health @ HealthSet+0x48 (7 limbs, stride 8) ---");
                                    float totalH = 0, totalMax = 0;
                                    for (int j = 0; j < 7; j++)
                                    {
                                        ulong off = dumpSet + 0x48UL + (ulong)(j * 8);
                                        float cur = DmaMemory.Read<float>(off);
                                        float max = DmaMemory.Read<float>(off + 4);
                                        sb.AppendLine($"    Limb[{j}] @0x{off:X}: Cur={cur:F2} Max={max:F2}");
                                        if (max > 1f) { totalH += cur; totalMax += max; }
                                    }
                                    sb.AppendLine($"  Summed Limb HP: {totalH:F1}/{totalMax:F1}");

                                    var floats = DmaMemory.ReadArray<float>(dumpSet + 0x40, 32);
                                    if (floats != null)
                                    {
                                        sb.Append("  Raw floats @0x40-0xBF: ");
                                        for (int f = 0; f < floats.Length; f++) sb.Append($"[0x{f * 4 + 0x40:X2}]={floats[f]:F2} ");
                                        sb.AppendLine();
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        sb.AppendLine("  No ASC component found.");
                    }
                    sb.AppendLine("-------------------------------------------");
                }

                System.IO.File.WriteAllText("hp_dump_verbose.txt", sb.ToString());
                DMA.Logger.Info("[Dump] Exported verbose health details to hp_dump_verbose.txt");
            }
            catch (Exception ex) { DMA.Logger.Error($"[Dump] HP dump failed: {ex.Message}"); }
        }

        public static void DumpActors()
        {
            try
            {
                if (!DmaMemory.IsAttached || ActorArray == 0 || ActorCount <= 0)
                {
                    DMA.Logger.Info("[Dump] Cannot dump: DMA not attached or ActorArray is null.");
                    return;
                }

                int take = Math.Min(ActorCount, 32768); // reasonable limit for a dump
                var ptrs = DmaMemory.ReadArray<ulong>(ActorArray, take);
                if (ptrs == null) return;

                var sb = new System.Text.StringBuilder();
                byte xorKey = DmaMemory.Read<byte>(DmaMemory.Base + ABIOffsets.FNameDecrypt);
                byte d = (byte)(((xorKey >> 5) & 2) ^ xorKey);
                byte c = (byte)(((d & 2) << 5) ^ d);
                byte xorMask = (byte)(((c >> 5) & 2) ^ c ^ 0x65);

                ulong tableBase = DmaMemory.Base + ABIOffsets.AceCacheTableRva;
                byte[] tableBytes = DmaMemory.ReadBytes(tableBase, 64) ?? Array.Empty<byte>();

                sb.AppendLine($"--- ABI ACTOR DUMP ---");
                sb.AppendLine($"Timestamp: {DateTime.Now}");
                sb.AppendLine($"ActorArray: 0x{ActorArray:X}");
                sb.AppendLine($"ActorCount: {ActorCount}");
                sb.AppendLine($"Base: 0x{DmaMemory.Base:X}");
                sb.AppendLine($"GNames: 0x{DmaMemory.Base + ABIOffsets.GNames:X}");
                sb.AppendLine($"XOR Key (at 0x{ABIOffsets.FNameDecrypt:X}): 0x{xorKey:X2}");
                byte[] nearBytes = DmaMemory.ReadBytes(DmaMemory.Base + ABIOffsets.FNameDecrypt - 8, 24) ?? Array.Empty<byte>();
                sb.AppendLine($"Bytes around FNameDecrypt (-8 to +15): {BitConverter.ToString(nearBytes)}");
                sb.AppendLine($"Decryption (sub_143D84110): d=0x{d:X2}, c=0x{c:X2}, xorMask=0x{xorMask:X2}");
                sb.AppendLine($"----------------------");
                sb.AppendLine($"--- DECRYPTION TABLE STATE ---");
                sb.AppendLine($"Table Base RVA: 0x{ABIOffsets.AceCacheTableRva:X} (VA: 0x{tableBase:X})");
                sb.AppendLine($"IsTableOffsetResolved: {DmaMemory.IsTableOffsetResolved}");
                sb.AppendLine($"First 64 bytes of Table Base: {BitConverter.ToString(tableBytes)}");
                sb.AppendLine($"----------------------");

                int validCount = 0;
                var trackedPawns = new HashSet<ulong>(ActorList.Select(a => a.Pawn));
                for (int i = 0; i < ptrs.Length; i++)
                {
                    ulong p = ptrs[i];
                    if (p == 0) continue;

                    uint nameId = DmaMemory.Read<uint>(p + ABIOffsets.UObject_ObjectId); // UObject::NamePrivate
                    string name = ABINamePool.GetName(nameId);

                    byte charType = DmaMemory.Read<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType);
                    byte factionType = DmaMemory.Read<byte>(p + ABIOffsets.ASGCharacter_FactionType);
                    
                    ulong ps = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_PlayerState);
                    bool hasPs = ps > 0x1000000;
                    int teamId = hasPs ? DmaMemory.Read<int>(ps + ABIOffsets.ASGPlayerState_TeamIndex) : 0;
                    if (teamId <= 0 && hasPs) teamId = DmaMemory.Read<int>(ps + 0x5B0);
                    
                    // Char ticking on death flag
                    byte tickingOnDeath = DmaMemory.Read<byte>(p + (ulong)ABIOffsetsExt.OFF_CHAR_TICKING_ON_DEATH);

                    bool isContainer = name.StartsWith("Inventory_", StringComparison.OrdinalIgnoreCase) ||
                                       name.StartsWith("BP_Inventory", StringComparison.OrdinalIgnoreCase) ||
                                       name.StartsWith("BP_SupplyStation", StringComparison.OrdinalIgnoreCase) ||
                                       name.StartsWith("BP_RewardBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.StartsWith("BP_DeathBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.StartsWith("BP_Package", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("RewardBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("DeathBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("SafeBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("DropBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("WeaponCase", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("ToolBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("MediKit", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("StorageBox", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("CabinetDrawer", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("OilZombie", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("ZombieCorpse", StringComparison.OrdinalIgnoreCase) ||
                                       name.Contains("Corpse", StringComparison.OrdinalIgnoreCase);

                    bool isDummy = !isContainer && name.StartsWith("BP_UamCharacterRange", StringComparison.OrdinalIgnoreCase);
                    bool isBiohazardPlayer = !isContainer && name.StartsWith("BP_BiohazardCharacter", StringComparison.OrdinalIgnoreCase);
                    bool isZombie = !isContainer && (
                        name.StartsWith("BP_UamZombie", StringComparison.OrdinalIgnoreCase) ||
                        name.StartsWith("BP_Zombie", StringComparison.OrdinalIgnoreCase) ||
                        name.Contains("ZombieCharacter", StringComparison.OrdinalIgnoreCase) ||
                        ((name.Contains("Zombie", StringComparison.OrdinalIgnoreCase) ||
                          name.Contains("Leaper", StringComparison.OrdinalIgnoreCase) ||
                          name.Contains("Breacher", StringComparison.OrdinalIgnoreCase) ||
                          name.Contains("Infiltrator", StringComparison.OrdinalIgnoreCase) ||
                          name.Contains("Purifier", StringComparison.OrdinalIgnoreCase) ||
                          name.Contains("Reaper", StringComparison.OrdinalIgnoreCase)) &&
                         (name.StartsWith("BP_Uam", StringComparison.OrdinalIgnoreCase) || name.Contains("Character", StringComparison.OrdinalIgnoreCase)))
                    );
                    bool isAi = !isContainer && (name.StartsWith("BP_UamAICharacter", StringComparison.OrdinalIgnoreCase) ||
                                name.Contains("AICharacter", StringComparison.OrdinalIgnoreCase) ||
                                isZombie);
                    bool isNonCharacter = name.Contains("PlayerState", StringComparison.OrdinalIgnoreCase) ||
                                          name.Contains("PlayerController", StringComparison.OrdinalIgnoreCase) ||
                                          name.Contains("CameraManager", StringComparison.OrdinalIgnoreCase) ||
                                          name.Contains("Controller", StringComparison.OrdinalIgnoreCase) ||
                                          name.Contains("TeamInfo", StringComparison.OrdinalIgnoreCase) ||
                                          name.Contains("Faction", StringComparison.OrdinalIgnoreCase);

                    bool isCharacterName = !isContainer && !isNonCharacter && (isDummy || isZombie || isBiohazardPlayer ||
                                           name.Contains("Character", StringComparison.OrdinalIgnoreCase) || 
                                           name.Contains("Pawn", StringComparison.OrdinalIgnoreCase));

                    byte effectiveCt = 0;
                    bool isPlayer = false;
                    bool isBot = false;

                    if (isCharacterName)
                    {
                        effectiveCt = charType;
                        if (isZombie)
                        {
                            effectiveCt = 10;
                            isBot = true;
                        }
                        else if (isBiohazardPlayer)
                        {
                            effectiveCt = 1;
                            isPlayer = true;
                        }
                        else if (isAi)
                        {
                            if (effectiveCt < 3 || effectiveCt > 12) effectiveCt = 3;
                            isBot = true;
                        }
                        else if (hasPs)
                        {
                            if (effectiveCt <= 1) effectiveCt = 1;
                            else effectiveCt = 2;
                            isPlayer = true;
                        }
                        else if (effectiveCt == 0 && name.StartsWith("BP_UamCharacter", StringComparison.OrdinalIgnoreCase))
                        {
                            if (hasPs)
                            {
                                effectiveCt = 1;
                                isPlayer = true;
                            }
                        }

                        if (!isPlayer && !isBot)
                        {
                            isPlayer = (effectiveCt == 1 || effectiveCt == 2);
                            isBot = (effectiveCt >= 3 && effectiveCt <= 12);
                        }
                    }

                    bool isLocal = (p == LocalPawn);
                    bool inActorList = trackedPawns.Contains(p);
                    _actorCache.TryGetValue(p, out var cached);

                    sb.AppendLine($"[{i:D4}] Pawn: 0x{p:X12} | ID: {nameId:D8} | Name: {name}");
                    sb.AppendLine($"   > Info -> CharType: {charType} | Faction: {factionType} | TeamId: {teamId} | TickingOnDeath: {tickingOnDeath}");
                    sb.AppendLine($"   > Classification -> IsPlayer: {isPlayer} | IsLocal: {isLocal} | IsBot: {isBot} | IsDummy: {isDummy} | InActorList: {inActorList}");
                    if (cached != null && (inActorList || cached.Pawn != 0))
                    {
                        sb.AppendLine($"   > Cache -> Faction: {cached.Faction} | ASC: 0x{cached.ASC:X} | HealthSet: 0x{cached.HealthSet:X} | HasValidBones: {cached.HasValidBones}");
                        sb.AppendLine($"   > Cache -> Root: 0x{cached.Root:X} | Mesh: 0x{cached.Mesh:X} | BonePtr: 0x{cached.BoneArrayPtr:X} | BoneCount: {cached.BoneCount}");
                    }

                    // Component Details
                    ulong root = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_RootComponent);
                    if (root < 0x100000) root = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_RootComponent + 0x1008);

                    ulong mesh = DmaMemory.Read<ulong>(p + ABIOffsets.ACharacter_Mesh);
                    if (isZombie)
                    {
                        ulong arr = (mesh > 0x1000000) ? mesh + ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms : 0;
                        int bCount = (arr > 0x1000000) ? DmaMemory.Read<int>(arr + 0x8) : 0;
                        if (bCount < 20)
                        {
                            ulong zMeshComp = DmaMemory.Read<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieMeshComponent);
                            if (zMeshComp > 0x1000000)
                            {
                                ulong zSkelComp = DmaMemory.Read<ulong>(zMeshComp + ABIOffsets.USGZombieMeshComponent_ZombieSkeletalMeshComponent);
                                if (zSkelComp > 0x1000000) mesh = zSkelComp;
                            }
                        }
                    }

                    ulong asc = isZombie ? DmaMemory.Read<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieAbilityComponent) : DmaMemory.Read<ulong>(p + ABIOffsets.ASGCharacter_AbilitySystemComponent);

                    ulong playerState = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_PlayerState);
                    if (playerState < 0x100000) playerState = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_PlayerState + 0x1008);

                    ulong moveComp = isZombie ? DmaMemory.Read<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieMovementComponent) : DmaMemory.Read<ulong>(p + ABIOffsets.ASGCharacter_MovementComponent);
                    ulong deathComp = isZombie ? 0 : DmaMemory.Read<ulong>(p + ABIOffsets.ASGCharacter_DeathComponent);
                    ulong invMgr = isZombie ? 0 : DmaMemory.Read<ulong>(p + ABIOffsets.ASGCharacter_InventoryManager);
                    ulong armorMgr = isZombie ? 0 : DmaMemory.Read<ulong>(p + ABIOffsets.ASGCharacter_ArmorManager);

                    sb.AppendLine($"   > Components -> Root: 0x{root:X}, Mesh: 0x{mesh:X}, ASC: 0x{asc:X}, PlayerState: 0x{playerState:X}, MoveComp: 0x{moveComp:X}, DeathComp: 0x{deathComp:X}, InvMgr: 0x{invMgr:X}, ArmorMgr: 0x{armorMgr:X}");

                    if (isZombie)
                    {
                        byte bDead = DmaMemory.Read<byte>(p + ABIOffsets.ASGZombieCharacter_bIsDead);
                        byte bOnDie = DmaMemory.Read<byte>(p + ABIOffsets.ASGZombieCharacter_bOnDieActivated);
                        ulong deathBox = DmaMemory.Read<ulong>(p + ABIOffsets.ASGZombieCharacter_CacheDeathBox);
                        sb.AppendLine($"   > Zombie bIsDead (+0x0A80): {bDead} | bOnDie (+0x0A81): {bOnDie} | CacheDeathBox: 0x{deathBox:X}");

                        ulong zAttr = DmaMemory.Read<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieAttributeComponent);
                        ulong zHs = (zAttr > 0x1000000) ? DmaMemory.Read<ulong>(zAttr + ABIOffsets.USGZombieAttributeComponent_ZombieHealthAttributeSet) : 0;
                        if (zHs > 0x1000000)
                        {
                            float curHp = DmaMemory.Read<float>(zHs + 0x5C);
                            float maxHp = DmaMemory.Read<float>(zHs + 0x6C);
                            if (maxHp <= 1f) maxHp = DmaMemory.Read<float>(zHs + 0x68);
                            sb.AppendLine($"   > Zombie AttributeSet @ 0x{zHs:X}: HP={curHp:F1}/{maxHp:F1}");
                        }
                    }
                    else if (deathComp > 0x1000000)
                    {
                        byte bDead = DmaMemory.Read<byte>(deathComp + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD);
                        sb.AppendLine($"   > DeathComp bIsDead (+0x240): {bDead}");
                    }

                    if (asc > 0x1000000)
                    {
                        ulong attrData = DmaMemory.Read<ulong>(asc + (ulong)ABIOffsetsExt.OFF_ASC_ATTRSETS);
                        int attrNum = DmaMemory.Read<int>(asc + (ulong)ABIOffsetsExt.OFF_ASC_ATTRSETS + 0x8);
                        sb.AppendLine($"   > ASC SpawnedAttributes: Data=0x{attrData:X} Count={attrNum}");
                    }

                    bool boneValid = false;
                    if (mesh > 0x1000000)
                    {
                        ulong arr = mesh + ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms;
                        ulong boneArrayPtr = DmaMemory.Read<ulong>(arr);
                        int boneCount = DmaMemory.Read<int>(arr + 0x8);
                        sb.AppendLine($"   > Bones -> Offset: 0x{ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms:X}, ArrayPtr: 0x{boneArrayPtr:X}, Count: {boneCount}");
                        boneValid = boneArrayPtr > 0x1000000 && boneCount >= 20;
                        sb.AppendLine($"   > Bone Validation -> ValidForESP: {boneValid} (requires ptr>0x1000000 && count>=20)");
                        if (boneArrayPtr > 0x1000000 && boneCount > 0)
                        {
                            int printLimit = Math.Min(boneCount, 5);
                            for (int b = 0; b < printLimit; b++)
                            {
                                ulong boneAddr = boneArrayPtr + (ulong)(b * 0x30);
                                FTransform boneCS = DmaMemory.Read<FTransform>(boneAddr);
                                sb.AppendLine($"     Bone [{b}]: Translation: <{boneCS.Translation.X:F3}, {boneCS.Translation.Y:F3}, {boneCS.Translation.Z:F3}>, Rotation: <{boneCS.Rotation.X:F3}, {boneCS.Rotation.Y:F3}, {boneCS.Rotation.Z:F3}, {boneCS.Rotation.W:F3}>");
                            }
                        }
                    }

                    if (root > 0x100000)
                    {
                        // 1. RelativeLocation Diagnostics
                        uint relCtl = DmaMemory.Read<uint>(root + 0x17C);
                        uint relAlgo = relCtl >> 29;
                        uint relKey = relCtl & 0x1FFFFFF;
                        uint relSentinel = DmaMemory.Read<uint>(root + 0x170);
                        byte[] relRawBytes = DmaMemory.ReadBytes(root + 0x170, 16) ?? Array.Empty<byte>();

                        sb.AppendLine($"   > [RelativeLocation @ 0x{root + 0x170:X}]");
                        sb.AppendLine($"     Raw Bytes (16 bytes): {BitConverter.ToString(relRawBytes)}");
                        sb.AppendLine($"     Control DWORD: 0x{relCtl:X8} (Algo: {relAlgo}, Key: 0x{relKey:X})");
                        sb.AppendLine($"     Sentinel: 0x{relSentinel:X8} (IsEncryptedSentinel: {relSentinel == 0xFF8B6D2B})");

                        uint relBucket = (relKey * 0x9E3779B1U) % 0x10001U;
                        ulong relEntry = DmaMemory.Read<ulong>(tableBase + (ulong)relBucket * 8);
                        sb.AppendLine($"     Bucket: {relBucket} (Entry NodePtr: 0x{relEntry:X})");

                        if (relKey != 0)
                        {
                            ulong node = relEntry;
                            int limit = 0;
                            ulong matchedNode = 0;
                            while (node != 0 && limit < 32)
                            {
                                uint nodeKey = DmaMemory.Read<uint>(node + 0x1C);
                                if (nodeKey == relKey)
                                {
                                    matchedNode = node;
                                    break;
                                }
                                node = DmaMemory.Read<ulong>(node + 0x28);
                                limit++;
                            }

                            if (matchedNode != 0)
                            {
                                uint nodeType = DmaMemory.Read<uint>(matchedNode + 0x00);
                                ulong dataPtr = DmaMemory.Read<ulong>(matchedNode + 0x10);
                                uint dataSize = DmaMemory.Read<uint>(matchedNode + 0x18);
                                uint nodeSeed = DmaMemory.Read<uint>(matchedNode + 0x20);
                                ulong nextPtr = DmaMemory.Read<ulong>(matchedNode + 0x28);

                                byte[] rawEncData = DmaMemory.ReadBytes(dataPtr, 12) ?? Array.Empty<byte>();

                                sb.AppendLine($"     Matched Node: 0x{matchedNode:X}");
                                sb.AppendLine($"       Type: {nodeType}, DataPtr: 0x{dataPtr:X}, DataSize: {dataSize}, Seed: 0x{nodeSeed:X8}, NextPtr: 0x{nextPtr:X}");
                                sb.AppendLine($"       Raw Encrypted Coordinate Bytes: {BitConverter.ToString(rawEncData)}");
                            }
                            else
                            {
                                sb.AppendLine($"     [Warning] Key 0x{relKey:X} not found in bucket chain.");
                            }
                        }

                        Vector3 decLoc = DmaMemory.DecryptActorPosition(root);
                        sb.AppendLine($"     Decrypted Position: <{decLoc.X:F3}, {decLoc.Y:F3}, {decLoc.Z:F3}>");

                        // 2. ComponentToWorld Diagnostics
                        uint ctwCtl = DmaMemory.Read<uint>(root + 0x250);
                        uint ctwAlgo = ctwCtl >> 29;
                        uint ctwKey = ctwCtl & 0x1FFFFFF;
                        byte[] ctwRawBytes = DmaMemory.ReadBytes(root + 0x220, 80) ?? Array.Empty<byte>();

                        sb.AppendLine($"   > [ComponentToWorld FTransform @ 0x{root + 0x220:X}]");
                        sb.AppendLine($"     Raw Bytes (80 bytes): {BitConverter.ToString(ctwRawBytes)}");
                        sb.AppendLine($"     Control DWORD (at 0x{root + 0x250:X}): 0x{ctwCtl:X8} (Algo: {ctwAlgo}, Key: 0x{ctwKey:X})");

                        uint ctwBucket = (ctwKey * 0x9E3779B1U) % 0x10001U;
                        ulong ctwEntry = DmaMemory.Read<ulong>(tableBase + (ulong)ctwBucket * 8);
                        sb.AppendLine($"     Bucket: {ctwBucket} (Entry NodePtr: 0x{ctwEntry:X})");

                        if (ctwKey != 0)
                        {
                            ulong node = ctwEntry;
                            int limit = 0;
                            ulong matchedNode = 0;
                            while (node != 0 && limit < 32)
                            {
                                uint nodeKey = DmaMemory.Read<uint>(node + 0x1C);
                                if (nodeKey == ctwKey)
                                {
                                    matchedNode = node;
                                    break;
                                }
                                node = DmaMemory.Read<ulong>(node + 0x28);
                                limit++;
                            }

                            if (matchedNode != 0)
                            {
                                uint nodeType = DmaMemory.Read<uint>(matchedNode + 0x00);
                                ulong dataPtr = DmaMemory.Read<ulong>(matchedNode + 0x10);
                                uint dataSize = DmaMemory.Read<uint>(matchedNode + 0x18);
                                uint nodeSeed = DmaMemory.Read<uint>(matchedNode + 0x20);
                                ulong nextPtr = DmaMemory.Read<ulong>(matchedNode + 0x28);

                                byte[] rawEncData = DmaMemory.ReadBytes(dataPtr, 48) ?? Array.Empty<byte>();

                                sb.AppendLine($"     Matched Node: 0x{matchedNode:X}");
                                sb.AppendLine($"       Type: {nodeType}, DataPtr: 0x{dataPtr:X}, DataSize: {dataSize}, Seed: 0x{nodeSeed:X8}, NextPtr: 0x{nextPtr:X}");
                                sb.AppendLine($"       Raw Encrypted Transform Bytes: {BitConverter.ToString(rawEncData)}");
                            }
                            else
                            {
                                sb.AppendLine($"     [Warning] Key 0x{ctwKey:X} not found in bucket chain.");
                            }
                        }

                        Vector3 decTranslation = DmaMemory.DecryptC2WTranslation(root);
                        sb.AppendLine($"     Decrypted Translation: <{decTranslation.X:F3}, {decTranslation.Y:F3}, {decTranslation.Z:F3}>");
                    }
                    else
                    {
                        sb.AppendLine($"   > [RelativeLocation] Bypassed (Root is invalid/null)");
                    }

                    sb.AppendLine($"----------------------");
                    validCount++;
                }

                sb.AppendLine($"Total Valid Actors: {validCount}");

                string path = "actor_dump.txt";
                System.IO.File.WriteAllText(path, sb.ToString());
                DMA.Logger.Info($"[Dump] Successfully dumped {validCount} actors to {path}");
            }
            catch (Exception ex)
            {
                DMA.Logger.Error($"[Dump] Error: {ex.Message}");
            }
        }

        public static void DumpPlayers()
        {
            try
            {
                if (!DmaMemory.IsAttached)
                {
                    DMA.Logger.Info("[Dump] Cannot dump players: DMA not attached.");
                    return;
                }

                var sb = new System.Text.StringBuilder();
                sb.AppendLine("================================================================================");
                sb.AppendLine("                         ABI DETAILED PLAYER DUMP                              ");
                sb.AppendLine("================================================================================");
                sb.AppendLine($"Timestamp: {DateTime.Now:yyyy-MM-dd HH:mm:ss.fff}");
                sb.AppendLine($"DMA Base: 0x{DmaMemory.Base:X}");
                sb.AppendLine($"GNames: 0x{DmaMemory.Base + ABIOffsets.GNames:X}");
                sb.AppendLine($"GWorld: 0x{DmaMemory.Base + ABIOffsets.GWorld:X}");
                sb.AppendLine($"ActorArray: 0x{ActorArray:X} (Reported Count: {ActorCount})");
                sb.AppendLine($"LocalPawn: 0x{LocalPawn:X}");
                sb.AppendLine($"Camera: Loc=<{Camera.Location.X:F2}, {Camera.Location.Y:F2}, {Camera.Location.Z:F2}> Rot=<{Camera.Rotation.Pitch:F2}, {Camera.Rotation.Yaw:F2}, {Camera.Rotation.Roll:F2}> FOV={Camera.Fov:F1}");
                sb.AppendLine($"OriginBias: <{_originBias.X:F2}, {_originBias.Y:F2}, {_originBias.Z:F2}>");
                sb.AppendLine($"AceCacheTable: 0x{DmaMemory.Base + ABIOffsets.AceCacheTableRva:X} (Resolved: {DmaMemory.IsTableOffsetResolved})");

                var posSnapshot = ActorPositions ?? new List<ActorPos>();
                var trackedList = ActorList ?? new List<ABIPlayer>();
                sb.AppendLine($"Snapshot Stats: TrackedInActorList={trackedList.Count} | ActiveInPositions={posSnapshot.Count} | ActorCacheEntries={_actorCache.Count}");
                sb.AppendLine("================================================================================\n");

                // 1. ACTIVE POSITION SNAPSHOT (What ESP actually iterates over)
                sb.AppendLine("--- 1. ACTIVE POSITION SNAPSHOT (RENDER BUFFER) ---");
                if (posSnapshot.Count == 0)
                {
                    sb.AppendLine(" [!] Snapshot is empty. No actors currently active in render frame.");
                }
                else
                {
                    for (int i = 0; i < posSnapshot.Count; i++)
                    {
                        var ap = posSnapshot[i];
                        float dist = Vector3.Distance(Camera.Location, ap.Position) / 100f;
                        bool inFront = ABIMath.WorldToScreen(ap.Position, Camera, 1920, 1080, 1f, out var sp);
                        bool inScreen = inFront && sp.X >= 0 && sp.X <= 1920 && sp.Y >= 0 && sp.Y <= 1080;
                        sb.AppendLine($"[{i:D2}] Pawn: 0x{ap.Pawn:X12} | Name: '{ap.Name}' | Type: '{ap.CharTypeName}' | Bot: {ap.IsBot} | Dead: {ap.IsDead}");
                        sb.AppendLine($"     WorldPos: <{ap.Position.X:F2}, {ap.Position.Y:F2}, {ap.Position.Z:F2}> | DistToCam: {dist:F1}m");
                        sb.AppendLine($"     ScreenProj (1080p): <{sp.X:F1}, {sp.Y:F1}> | InFrontOfCam: {inFront} | InScreen: {inScreen}");
                        sb.AppendLine($"     HP: {ap.Health:F0}/{ap.HealthMax:F0} | Velocity: <{ap.Velocity.X:F1}, {ap.Velocity.Y:F1}, {ap.Velocity.Z:F1}>");
                    }
                }
                sb.AppendLine();

                // 2. COLLECT ALL PLAYER / BOT PAWNS
                sb.AppendLine("--- 2. DETAILED PLAYER MEMORY & TRANSFORM DIAGNOSTICS ---");
                var candidatePawns = new List<ulong>();
                var seenPawns = new HashSet<ulong>();

                void AddCandidate(ulong p)
                {
                    if (p > 0x100000 && seenPawns.Add(p)) candidatePawns.Add(p);
                }

                if (LocalPawn > 0x100000) AddCandidate(LocalPawn);
                foreach (var a in trackedList) AddCandidate(a.Pawn);
                foreach (var ap in posSnapshot) AddCandidate(ap.Pawn);
                foreach (var k in _actorCache.Keys) AddCandidate(k);

                // Scan first 4096 actors from ActorArray for characters that might have been missed
                if (ActorArray > 0 && ActorCount > 0)
                {
                    int take = Math.Min(ActorCount, 4096);
                    var ptrs = DmaMemory.ReadArray<ulong>(ActorArray, take);
                    if (ptrs != null)
                    {
                        for (int i = 0; i < ptrs.Length; i++)
                        {
                            ulong p = ptrs[i];
                            if (p < 0x100000 || seenPawns.Contains(p)) continue;

                            uint nameId = DmaMemory.Read<uint>(p + ABIOffsets.UObject_ObjectId);
                            string name = ABINamePool.GetName(nameId);
                            if (string.IsNullOrEmpty(name)) continue;

                            bool isContainer = name.StartsWith("Inventory_", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_Inventory", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_SupplyStation", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_RewardBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_DeathBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_Package", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("Box", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("Corpse", StringComparison.OrdinalIgnoreCase);

                            bool isDummy = !isContainer && name.StartsWith("BP_UamCharacterRange", StringComparison.OrdinalIgnoreCase);
                            bool isBiohazardPlayer = !isContainer && name.StartsWith("BP_BiohazardCharacter", StringComparison.OrdinalIgnoreCase);
                            bool isZombie = !isContainer && (name.Contains("Zombie", StringComparison.OrdinalIgnoreCase) || name.Contains("Leaper", StringComparison.OrdinalIgnoreCase) || name.Contains("Breacher", StringComparison.OrdinalIgnoreCase) || name.Contains("Infiltrator", StringComparison.OrdinalIgnoreCase) || name.Contains("Purifier", StringComparison.OrdinalIgnoreCase) || name.Contains("Reaper", StringComparison.OrdinalIgnoreCase));
                            bool isAi = !isContainer && (name.Contains("AICharacter", StringComparison.OrdinalIgnoreCase) || isZombie);
                            bool isNonChar = name.Contains("Controller", StringComparison.OrdinalIgnoreCase) || name.Contains("State", StringComparison.OrdinalIgnoreCase) || name.Contains("Camera", StringComparison.OrdinalIgnoreCase);

                            bool isChar = !isContainer && !isNonChar && (isDummy || isZombie || isBiohazardPlayer || isAi || name.Contains("Character", StringComparison.OrdinalIgnoreCase) || name.Contains("Pawn", StringComparison.OrdinalIgnoreCase));
                            if (isChar) AddCandidate(p);
                        }
                    }
                }

                sb.AppendLine($"Total Unique Candidates Found: {candidatePawns.Count}\n");

                int idx = 0;
                var bias = _originBias;
                foreach (var p in candidatePawns)
                {
                    idx++;
                    uint nameId = DmaMemory.Read<uint>(p + ABIOffsets.UObject_ObjectId);
                    string name = ABINamePool.GetName(nameId);
                    byte charType = DmaMemory.Read<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType);
                    byte factionType = DmaMemory.Read<byte>(p + ABIOffsets.ASGCharacter_FactionType);
                    ulong ps = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_PlayerState);
                    if (ps < 0x100000) ps = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_PlayerState + 0x1008);
                    bool hasPs = ps > 0x1000000;
                    int teamId = hasPs ? DmaMemory.Read<int>(ps + ABIOffsets.ASGPlayerState_TeamIndex) : 0;
                    if (teamId <= 0 && hasPs) teamId = DmaMemory.Read<int>(ps + 0x5B0);

                    ulong root = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_RootComponent);
                    if (root < 0x100000) root = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_RootComponent + 0x1008);

                    ulong mesh = DmaMemory.Read<ulong>(p + ABIOffsets.ACharacter_Mesh);
                    ulong deathComp = DmaMemory.Read<ulong>(p + ABIOffsets.ASGCharacter_DeathComponent);
                    ulong moveComp = DmaMemory.Read<ulong>(p + ABIOffsets.ASGCharacter_MovementComponent);

                    bool isLocal = (p == LocalPawn);
                    bool inActorList = trackedList.Exists(a => a.Pawn == p);
                    _actorCache.TryGetValue(p, out var cached);

                    sb.AppendLine($"[{idx:D3}] Candidate Pawn: 0x{p:X12} | NameId: {nameId} | Name: '{name}'");
                    sb.AppendLine($"      Flags: IsLocal={isLocal} | InActorList={inActorList} | InCache={cached != null} | CharType={charType} | Faction={factionType} | Team={teamId}");
                    sb.AppendLine($"      Components: Root=0x{root:X} | Mesh=0x{mesh:X} | PS=0x{ps:X} | DeathComp=0x{deathComp:X} | MoveComp=0x{moveComp:X}");

                    if (root > 0x100000)
                    {
                        // 1. ComponentToWorld Diagnostics
                        uint ctwCtl = DmaMemory.Read<uint>(root + 0x250);
                        uint ctwAlgo = ctwCtl >> 29;
                        uint ctwKey = ctwCtl & 0x1FFFFFF;
                        Vector3 ctwPlain = DmaMemory.Read<Vector3>(root + 0x230);
                        uint ctwFirstDword = BitConverter.SingleToUInt32Bits(ctwPlain.X);
                        bool ctwPlainValid = ctwAlgo == 0 && ctwFirstDword != 0xFF8B6D2B && float.IsFinite(ctwPlain.X) && ctwPlain.LengthSquared() >= 100f;
                        Vector3 ctwDecrypted = DmaMemory.DecryptC2WTranslation(root);
                        byte[] ctwRaw = DmaMemory.ReadBytes(root + 0x220, 64) ?? Array.Empty<byte>();

                        sb.AppendLine($"      > ComponentToWorld (+0x220..0x254):");
                        sb.AppendLine($"        Control DWORD: 0x{ctwCtl:X8} (Algo: {ctwAlgo}, Key: 0x{ctwKey:X})");
                        sb.AppendLine($"        Plaintext Translation (+0x230): <{ctwPlain.X:F2}, {ctwPlain.Y:F2}, {ctwPlain.Z:F2}> (FirstDword: 0x{ctwFirstDword:X8}, PlainValid: {ctwPlainValid})");
                        sb.AppendLine($"        Decrypted C2W Translation: <{ctwDecrypted.X:F2}, {ctwDecrypted.Y:F2}, {ctwDecrypted.Z:F2}>");
                        sb.AppendLine($"        Raw Bytes (+0x220..0x25F): {BitConverter.ToString(ctwRaw)}");

                        if (ctwKey != 0)
                        {
                            bool ctwNodeFound = DmaMemory.TryGetAceNode(ctwKey, out var ctwNode);
                            sb.AppendLine($"        ACE Table Lookup (Key 0x{ctwKey:X}): Found={ctwNodeFound}, NodePtr=0x{ctwNode.NodePtr:X}, DataPtr=0x{ctwNode.DataPtr:X}, DataSize={ctwNode.DataSize}, Seed=0x{ctwNode.Seed:X8}");
                        }

                        // 2. RelativeLocation Diagnostics
                        uint relCtl = DmaMemory.Read<uint>(root + 0x17C);
                        uint relAlgo = relCtl >> 29;
                        uint relKey = relCtl & 0x1FFFFFF;
                        Vector3 relPlain = DmaMemory.Read<Vector3>(root + 0x170);
                        uint relFirstDword = BitConverter.SingleToUInt32Bits(relPlain.X);
                        bool relPlainValid = relAlgo == 0 && relFirstDword != 0xFF8B6D2B && float.IsFinite(relPlain.X) && relPlain.LengthSquared() >= 100f;
                        Vector3 relDecrypted = DmaMemory.DecryptRelativeLocation(root);
                        byte[] relRaw = DmaMemory.ReadBytes(root + 0x170, 16) ?? Array.Empty<byte>();

                        sb.AppendLine($"      > RelativeLocation (+0x170..0x180):");
                        sb.AppendLine($"        Control DWORD: 0x{relCtl:X8} (Algo: {relAlgo}, Key: 0x{relKey:X})");
                        sb.AppendLine($"        Plaintext Location (+0x170): <{relPlain.X:F2}, {relPlain.Y:F2}, {relPlain.Z:F2}> (FirstDword: 0x{relFirstDword:X8}, PlainValid: {relPlainValid})");
                        sb.AppendLine($"        Decrypted RelativeLocation: <{relDecrypted.X:F2}, {relDecrypted.Y:F2}, {relDecrypted.Z:F2}>");
                        sb.AppendLine($"        Raw Bytes (+0x170..0x17F): {BitConverter.ToString(relRaw)}");

                        if (relKey != 0)
                        {
                            bool relNodeFound = DmaMemory.TryGetAceNode(relKey, out var relNode);
                            sb.AppendLine($"        ACE Table Lookup (Key 0x{relKey:X}): Found={relNodeFound}, NodePtr=0x{relNode.NodePtr:X}, DataPtr=0x{relNode.DataPtr:X}, DataSize={relNode.DataSize}, Seed=0x{relNode.Seed:X8}");
                        }

                        // 3. Final Multi-tier Position Resolution
                        Vector3 resolvedTranslation = DmaMemory.DecryptActorPosition(root);
                        Vector3 finalPos = resolvedTranslation != default ? resolvedTranslation + bias : default;
                        float distToCam = finalPos != default ? Vector3.Distance(Camera.Location, finalPos) / 100f : 0f;
                        bool inFront = ABIMath.WorldToScreen(finalPos, Camera, 1920, 1080, 1f, out var sp);
                        bool inScreen = inFront && sp.X >= 0 && sp.X <= 1920 && sp.Y >= 0 && sp.Y <= 1080;

                        bool underMap = finalPos.Z < -5000f || finalPos.Z > 100000f;
                        bool stagingPool = (MathF.Abs(resolvedTranslation.X - 10198f) < 100f && MathF.Abs(resolvedTranslation.Y - (-453f)) < 100f);

                        sb.AppendLine($"      > Resolution Summary:");
                        sb.AppendLine($"        Resolved Translation: <{resolvedTranslation.X:F2}, {resolvedTranslation.Y:F2}, {resolvedTranslation.Z:F2}>");
                        sb.AppendLine($"        Final WorldPos (+Bias): <{finalPos.X:F2}, {finalPos.Y:F2}, {finalPos.Z:F2}> | Dist: {distToCam:F1}m");
                        sb.AppendLine($"        Screen Projection (1080p): <{sp.X:F1}, {sp.Y:F1}> | InFrontOfCam: {inFront} | InScreen: {inScreen}");
                        sb.AppendLine($"        Sanity Filters: IsZero={finalPos == default} | UnderMap={underMap} | StagingPool={stagingPool}");
                    }
                    else
                    {
                        sb.AppendLine($"      [!] RootComponent is NULL or invalid (< 0x100000)");
                    }

                    // 4. Mesh & Skeleton Diagnostics
                    if (mesh > 0x1000000)
                    {
                        ulong arr = mesh + ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms;
                        ulong boneArrayPtr = DmaMemory.Read<ulong>(arr);
                        int boneCount = DmaMemory.Read<int>(arr + 0x8);
                        sb.AppendLine($"      > Skeletal Mesh (+0x{ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms:X}): BoneArray=0x{boneArrayPtr:X}, BoneCount={boneCount}");

                        if (TryGetSkeleton(p, out var bones) && bones != null && bones.Length >= 20)
                        {
                            Vector3 head = bones[ABISkeleton.IDX_Head];
                            Vector3 feet = (bones[ABISkeleton.IDX_Foot_L] + bones[ABISkeleton.IDX_Foot_R]) * 0.5f;
                            bool headOk = ABIMath.WorldToScreen(head, Camera, 1920, 1080, 1f, out var headSp);
                            bool feetOk = ABIMath.WorldToScreen(feet, Camera, 1920, 1080, 1f, out var feetSp);
                            sb.AppendLine($"        Cached Skeleton: HeadWorld=<{head.X:F1}, {head.Y:F1}, {head.Z:F1}> -> Screen=<{headSp.X:F1}, {headSp.Y:F1}> (Visible: {headOk})");
                            sb.AppendLine($"                         FeetWorld=<{feet.X:F1}, {feet.Y:F1}, {feet.Z:F1}> -> Screen=<{feetSp.X:F1}, {feetSp.Y:F1}> (Visible: {feetOk})");
                        }
                    }

                    sb.AppendLine("--------------------------------------------------------------------------------");
                }

                string path = "player_dump.txt";
                System.IO.File.WriteAllText(path, sb.ToString());
                DMA.Logger.Info($"[Dump] Successfully dumped {candidatePawns.Count} player candidates to {path}");
            }
            catch (Exception ex)
            {
                DMA.Logger.Error($"[Dump] Player dump failed: {ex.Message}\n{ex.StackTrace}");
            }
        }

        public static bool TryGetFrame(out Frame f)
        {
            f = default;
            for (int i = 0; i < 3; i++)
            {
                int s1 = Volatile.Read(ref _frameSeq);
                if ((s1 & 1) != 0) continue;
                f = _frameBuf;
                Thread.MemoryBarrier();
                int s2 = Volatile.Read(ref _frameSeq);
                if (s1 == s2 && (s2 & 1) == 0 && f.Positions != null) return true;
            }
            return false;
        }

        public static bool TryGetSkeleton(ulong pawn, out Vector3[] pts)
        {
            if (_skelCache.TryGetValue(pawn, out pts)) return pts != null;
            pts = null; return false;
        }

        public static void ResetSessionState()
        {
            lock (Sync)
            {
                DMA.Logger.Info("[Session] ResetSessionState: Purging origin bias, actor cache, skel cache, and visuals.");
                _originBias = Vector3.Zero;
                _prevLocalWorld = Vector3.Zero;
                _havePrevLocal = false;

                _actorCache.Clear();
                _skelCache.Clear();
                ActorList = new();
                ActorPositions = new();
                _frameBuf = default;
                _targetSkelActors.Clear();
                _skelCandidates.Clear();

                ABINamePool.Clear();
                DmaMemory.ClearAceCache();
                DmaMemory.EnsureAceTableValid();
                _cachedLocalRoot = 0;
                _localRootIsEncrypted = false;
                _localAceKey = 0;
                _localAceNodePtr = 0;
                _localAceDataPtr = 0;
                LastPositionsStamp = 0;
                _localHealthSet = 0;
                _lastHealthReset = 0;
                LocalHealth = 0;
                LocalHealthMax = 0;
                Array.Clear(LocalLimbHealth, 0, 7);
                Array.Clear(LocalLimbMax, 0, 7);
                ABILoot.ResetOnMatchChange();
            }
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  WORLD LOOP
        // /////////////////////////////////////////////////////////////////////////////////////

        public static ulong DecryptGWorld()
        {
            ulong plaintext = DmaMemory.Read<ulong>(DmaMemory.Base + ABIOffsets.GWorld);
            if (plaintext > 0x10000 && plaintext < 0x7FFFFFFFFFFF)
            {
                return plaintext;
            }

            ulong encrypted = DmaMemory.Read<ulong>(DmaMemory.Base + ABIOffsets.GWorldDecrypt);
            if (encrypted == 0) return 0;

            byte byte0_original = (byte)(encrypted & 0xFF);
            byte byte7_original = (byte)((encrypted >> 56) & 0xFF);

            byte byte7_new = (byte)(byte0_original ^ 0x36);
            byte byte0_new = (byte)(byte7_original ^ 0x36);

            ulong decrypted = (encrypted & 0x00FFFFFFFFFFFF00) 
                              | ((ulong)byte7_new << 56) 
                              | byte0_new;

            if (decrypted > 0x10000 && decrypted < 0x7FFFFFFFFFFF)
            {
                return decrypted;
            }
            return 0;
        }

        private static void CacheWorldLoop()
        {
            while (_running) { try { CacheWorld(); } catch { } Sleep(150); }
        }

        private static bool CacheWorld()
        {
            UWorld = DecryptGWorld();
            if (UWorld == 0) return false;

            UGameInstance   = DmaMemory.Read<ulong>(UWorld + ABIOffsets.UWorld_OwningGameInstance);
            GameState       = DmaMemory.Read<ulong>(UWorld + ABIOffsets.UWorld_GameState);
            PersistentLevel = DmaMemory.Read<ulong>(UWorld + ABIOffsets.UWorld_PersistentLevel);
            ActorArray      = DmaMemory.Read<ulong>(PersistentLevel + ABIOffsets.ULevel_ActorArray);
            ActorCount      = DmaMemory.Read<int>(PersistentLevel + ABIOffsets.ULevel_ActorArray + 0x08);
            LocalPlayers     = DmaMemory.Read<ulong>(DmaMemory.Read<ulong>(UGameInstance + ABIOffsets.UGameInstance_LocalPlayers));
            PlayerController = DmaMemory.Read<ulong>(LocalPlayers + ABIOffsets.UPlayer_PlayerController);
            LocalCameraMgr   = DmaMemory.Read<ulong>(PlayerController + ABIOffsets.APlayerController_PlayerCameraManager);
            LocalPawn        = DmaMemory.Read<ulong>(PlayerController + ABIOffsets.APlayerController_AcknowledgedPawn);
            if (LocalPawn < 0x1000000) LocalPawn = DmaMemory.Read<ulong>(PlayerController + ABIOffsets.AController_Pawn);
            LocalRoot        = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.AActor_RootComponent);
            if (LocalRoot < 0x100000) LocalRoot = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.AActor_RootComponent + 0x1008);
            if (LocalRoot < 0x100000 && LocalPawn > 0x1000000)
            {
                ulong m = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.ACharacter_Mesh);
                if (m > 0x1000000)
                {
                    ulong attach = DmaMemory.Read<ulong>(m + ABIOffsets.USceneComponent_AttachParent);
                    if (attach > 0x100000) LocalRoot = attach;
                }
            }
            
            LocalState       = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.AActor_PlayerState);
            if (LocalState < 0x100000) LocalState = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.AActor_PlayerState + 0x1008);
            if (LocalState < 0x100000) LocalState = DmaMemory.Read<ulong>(PlayerController + ABIOffsets.AController_PlayerState);
            
            LocalInvMgr      = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.ASGCharacter_InventoryManager);
            if (LocalState > 0x1000000)
            {
                LocalTeam = DmaMemory.Read<int>(LocalState + ABIOffsets.ASGPlayerState_TeamIndex);
                if (LocalTeam <= 0) LocalTeam = DmaMemory.Read<int>(LocalState + 0x5B0);
            }
            else LocalTeam = -1;

            // Resolve Local Components for Fast Path
            if (LocalPawn > 0x1000000)
            {
                var ac = _actorCache.ContainsKey(LocalPawn) ? _actorCache[LocalPawn] : new ActorCacheEntry { Pawn = LocalPawn };
                ac.Root = LocalRoot;
                ac.Mesh = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.ACharacter_Mesh);
                ac.ASC = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.ASGCharacter_AbilitySystemComponent);
                ac.DeathComp = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.ASGCharacter_DeathComponent);
                ac.ArmorMgr = DmaMemory.Read<ulong>(LocalPawn + ABIOffsets.ASGCharacter_ArmorManager);
                ac.InvMgr = LocalInvMgr;
                ac.Name = "Local";
                _actorCache[LocalPawn] = ac;
            }

            PlayerArray      = DmaMemory.Read<ulong>(GameState + ABIOffsets.AGameStateBase_PlayerArray);
            PlayerCount      = DmaMemory.Read<int>(GameState + ABIOffsets.AGameStateBase_PlayerCount);

            if (GameState > 0x1000000)
            {
                byte  sceneType = DmaMemory.Read<byte>(GameState + ABIOffsets.ASGGameState_GameSceneType);
                ulong roomId    = DmaMemory.Read<ulong>(GameState + ABIOffsets.ASGGameState_RoomId);

                // Detect transition into Match, Room Change, or Scene Change
                bool newMatch = (sceneType == 2 && roomId != 0 && roomId != _lastRoomId);
                bool stateChange = (GameState != _lastGameState);
                bool sceneChange = (sceneType != _lastSceneType && sceneType != 0);
                
                if (stateChange || newMatch || sceneChange)
                {
                    if (newMatch) _matchStartTime = Stopwatch.GetTimestamp();
                    DMA.Logger.Info($"[Session] Match Refresh Triggered. RoomId: {roomId}, SceneType: {sceneType}, NewMatch: {newMatch}, StateChange: {stateChange}, SceneChange: {sceneChange}");
                    ResetSessionState();
                    _lastGameState = GameState;
                    _lastRoomId = roomId;
                    _lastSceneType = sceneType;
                }

                // If we return to lobby, reset roomId tracker
                if (sceneType == 1) _lastRoomId = 0;

                MapID = DmaMemory.Read<int>(GameState + 0x05B0);
                RoomID = roomId;
                MapSceneType = sceneType;
                
                // Map names
                MapName = MapID switch {
                    1 => "Farm",
                    2 => "Valley",
                    3 => "Northridge",
                    4 => "Armory",
                    5 => "TV Station",
                    6 => "Port",
                    7 => "Mine",
                    _ => $"Map_{MapID}"
                };
            }

            return true;
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  CAMERA LOOP
        // /////////////////////////////////////////////////////////////////////////////////////

        private static void CacheCameraLoop()
        {
            float lastLoggedFov = 0f;
            while (_running)
            {
                try
                {
                    if (LocalCameraMgr == 0 || LocalRoot == 0 || PlayerController == 0)
                    { Sleep(1); continue; }

                    ulong camAddr     = LocalCameraMgr + ABIOffsets.APlayerCameraManager_CameraCachePrivate + 0x10;
                    ulong ctrlRotAddr = PlayerController + ABIOffsets.AController_ControlRotation;
                    ulong attachAddr  = LocalRoot + ABIOffsets.USceneComponent_AttachParent;
                    ulong localRoot   = LocalRoot;

                    // Resolve LocalPlayer ACE position pointers once without blocking steady-state
                    if (_cachedLocalRoot != localRoot || (_localRootIsEncrypted && (_localAceNodePtr == 0 || _localAceDataPtr == 0)))
                    {
                        uint ctl = DmaMemory.Read<uint>(localRoot + 0x17C);
                        uint algo = ctl >> 29;
                        uint key = ctl & 0x1FFFFFF;
                        if (algo == 0)
                        {
                            _localRootIsEncrypted = false;
                            _localAceKey = 0;
                            _localAceNodePtr = 0;
                            _localAceDataPtr = 0;
                        }
                        else if (key != 0)
                        {
                            if (DmaMemory.TryGetAceNode(key, out var node) && node.DataSize >= 12 && node.DataPtr > 0x1000000)
                            {
                                _localAceKey = key;
                                _localAceNodePtr = node.NodePtr;
                                _localAceDataPtr = node.DataPtr;
                                _localRootIsEncrypted = true;
                            }
                        }
                        _cachedLocalRoot = localRoot;
                    }

                    using var sc = DmaMemory.CreateScatterNoCache();
                    sc.PrepareReadValue<FMinimalViewInfo>(camAddr);
                    sc.PrepareReadValue<Rotator>(ctrlRotAddr);
                    sc.PrepareReadValue<ulong>(attachAddr);
                    sc.PrepareReadValue<C2WPacket>(localRoot + 0x220);
                    sc.PrepareReadValue<RelativeLocPacket>(localRoot + 0x170);

                    if (_localRootIsEncrypted && _localAceDataPtr > 0x1000000 && _localAceNodePtr > 0x1000000)
                    {
                        sc.PrepareReadValue<DmaMemory.AceDword3>(_localAceDataPtr);
                        sc.PrepareReadValue<uint>(_localAceNodePtr + 0x20);
                    }
                    sc.Execute();

                    sc.ReadValue<FMinimalViewInfo>(camAddr,     out var cam);
                    sc.ReadValue<Rotator>         (ctrlRotAddr, out var ctrlRot);
                    sc.ReadValue<ulong>           (attachAddr,  out var attachParent);

                    Vector3 localWorld = default;

                    // Fast-path: Unencrypted C2W Translation (same as C++)
                    if (sc.ReadValue<C2WPacket>(localRoot + 0x220, out var localC2w) && (localC2w.Ctl >> 29) == 0)
                    {
                        var t = localC2w.Transform.Translation;
                        if (float.IsFinite(t.X) && float.IsFinite(t.Y) && float.IsFinite(t.Z) &&
                            MathF.Abs(t.X) < 10000000f && MathF.Abs(t.Y) < 10000000f && MathF.Abs(t.Z) < 10000000f &&
                            t.LengthSquared() >= 100f)
                        {
                            localWorld = t;
                        }
                    }

                    if (localWorld == default && sc.ReadValue<RelativeLocPacket>(localRoot + 0x170, out var localRel))
                    {
                        uint algo = localRel.Ctl >> 29;
                        uint key = localRel.Ctl & 0x1FFFFFF;
                        if (algo == 0)
                        {
                            var r = localRel.Location;
                            if (float.IsFinite(r.X) && float.IsFinite(r.Y) && float.IsFinite(r.Z) &&
                                MathF.Abs(r.X) < 10000000f && MathF.Abs(r.Y) < 10000000f && MathF.Abs(r.Z) < 10000000f &&
                                r.LengthSquared() >= 100f)
                            {
                                localWorld = r;
                            }
                        }
                        else if (_localRootIsEncrypted && _localAceKey == key && _localAceDataPtr > 0x1000000)
                        {
                            if (sc.ReadValue<DmaMemory.AceDword3>(_localAceDataPtr, out var encRaw) &&
                                sc.ReadValue<uint>(_localAceNodePtr + 0x20, out uint curSeed))
                            {
                                var decT = DmaMemory.DecryptAceRelative(encRaw, _localAceKey, curSeed);
                                if (float.IsFinite(decT.X) && float.IsFinite(decT.Y) && float.IsFinite(decT.Z) &&
                                    MathF.Abs(decT.X) < 10000000f && MathF.Abs(decT.Y) < 10000000f && MathF.Abs(decT.Z) < 10000000f &&
                                    decT.LengthSquared() >= 100f)
                                {
                                    localWorld = decT;
                                }
                            }
                        }
                        else if (key != 0 && key != _localAceKey)
                        {
                            _cachedLocalRoot = 0; // Trigger re-resolve next tick
                        }
                    }

                    if (localWorld == default)
                    {
                        localWorld = DmaMemory.DecryptActorPosition(localRoot);
                    }

                    if (localWorld == default && _havePrevLocal)
                    {
                        localWorld = _prevLocalWorld;
                    }

                    if (localWorld.LengthSquared() > 10000f)
                    {
                        _prevLocalWorld = localWorld;
                        _havePrevLocal  = true;
                    }

                    _originBias = Vector3.Zero;
                    var localBiased = localWorld;
                    float ctrlYaw   = ctrlRot.Yaw;

                    // FOV: cam.Fov directly from CameraCachePrivate.POV.FOV reflects the true active camera field of view
                    // (respects in-game user FOV slider 60-120 and dynamic unmagnified ADS FOV transition).
                    // Magnified scopes (PIP / overlay) scale FOV via weapon zoom component when actively zooming.
                    float rawFov = cam.Fov;
                    float dynamicFov = (rawFov >= 10f && rawFov <= 170f) ? rawFov : 90f;

                    ZoomInfo zi = default;
                    bool hasZoom = TryGetZoom(out zi);
                    if (hasZoom && zi.Valid && zi.IsZooming)
                    {
                        if (zi.ScopeMag > 1.0f)
                            dynamicFov = MathF.Min(dynamicFov, rawFov / zi.ScopeMag);
                        else if (zi.Zoom > 1.0f)
                            dynamicFov = MathF.Min(dynamicFov, rawFov / zi.Zoom);
                    }

                    cam.Fov = dynamicFov;

                    if (MathF.Abs(cam.Fov - lastLoggedFov) > 0.5f)
                    {
                        DebugFov($"Active FOV: {cam.Fov:F2} | Raw: {rawFov:F2} | Shadow: {cam.ShadowFov:F2} | CamDesired: {cam.DesiredFov:F2} | WeaponZoom: {(hasZoom && zi.Valid ? zi.Zoom : 0f):F2} | ScopeMag: {(hasZoom && zi.Valid ? zi.ScopeMag : 0f):F2} | IsZooming: {(hasZoom && zi.Valid && zi.IsZooming)}");
                        lastLoggedFov = cam.Fov;
                    }

                    Interlocked.Increment(ref _camSeq);
                    _camBuf      = cam;
                    _camLocalBuf = localBiased;
                    _ctrlYawBuf  = ctrlYaw;
                    Camera        = cam;
                    LocalPosition = localBiased;
                    CtrlYaw       = ctrlYaw;
                    Interlocked.Increment(ref _camSeq);
                }
                catch { }
                Sleep(1);
            }
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  PLAYERS LOOP
        // /////////////////////////////////////////////////////////////////////////////////////

        private static void CachePlayersLoop()
        {
            while (_running)
            {
                try
                {
                    // Wait for time or manual rescan
                    _rescanEvent.Wait(ENUM_PERIOD_MS);
                    _rescanEvent.Reset();
                    _lastEnumTicks = Stopwatch.GetTimestamp();

                    var tmp = new List<ABIPlayer>(32);
                    var humanPawns = new HashSet<ulong>();

                    // =========================================================================
                    // TIER 1: OPTION 1 (AGameStateBase -> PlayerArray) EXCLUSIVELY FOR PLAYERS
                    // Guarantees zero dormant unspawned staging pawns and zero static level clutter
                    // =========================================================================
                    ulong pArray = PlayerArray;
                    int pCount = PlayerCount;
                    if (pArray > 0x1000000 && pCount > 0 && pCount <= 64)
                    {
                        var pStatesArr = DmaMemory.ReadArray<ulong>(pArray, pCount);
                        if (pStatesArr != null && pStatesArr.Length > 0)
                        {
                            var validStates = pStatesArr.Where(ps => ps > 0x1000000).ToArray();
                            if (validStates.Length > 0)
                            {
                                ulong[] pawns = new ulong[validStates.Length];
                                int[] teams = new int[validStates.Length];

                                using (var scPs = DmaMemory.CreateScatter())
                                {
                                    for (int i = 0; i < validStates.Length; i++)
                                    {
                                        scPs.PrepareReadValue<ulong>(validStates[i] + ABIOffsets.APlayerState_PawnPrivate);
                                        scPs.PrepareReadValue<int>(validStates[i] + ABIOffsets.ASGPlayerState_TeamIndex);
                                    }
                                    scPs.Execute();
                                    for (int i = 0; i < validStates.Length; i++)
                                    {
                                        scPs.ReadValue<ulong>(validStates[i] + ABIOffsets.APlayerState_PawnPrivate, out pawns[i]);
                                        scPs.ReadValue<int>(validStates[i] + ABIOffsets.ASGPlayerState_TeamIndex, out teams[i]);
                                    }
                                }

                                for (int i = 0; i < validStates.Length; i++)
                                {
                                    if (pawns[i] < 0x1000000)
                                    {
                                        pawns[i] = DmaMemory.Read<ulong>(validStates[i] + 0x348);
                                        if (pawns[i] < 0x1000000)
                                            pawns[i] = DmaMemory.Read<ulong>(validStates[i] + 0x580);
                                    }
                                    if (teams[i] <= 0)
                                    {
                                        teams[i] = DmaMemory.Read<int>(validStates[i] + 0x5B0);
                                    }
                                }

                                var activeHumans = new List<(ulong pawn, ulong ps, int team)>();
                                for (int i = 0; i < validStates.Length; i++)
                                {
                                    ulong p = pawns[i];
                                    if (p > 0x1000000 && p != LocalPawn && humanPawns.Add(p))
                                    {
                                        activeHumans.Add((p, validStates[i], teams[i]));
                                    }
                                }

                                if (activeHumans.Count > 0)
                                {
                                    ulong[] roots = new ulong[activeHumans.Count];
                                    ulong[] meshes = new ulong[activeHumans.Count];
                                    ulong[] ascs = new ulong[activeHumans.Count];
                                    ulong[] deathComps = new ulong[activeHumans.Count];
                                    ulong[] invMgrs = new ulong[activeHumans.Count];
                                    ulong[] armorMgrs = new ulong[activeHumans.Count];
                                    ulong[] movComps = new ulong[activeHumans.Count];
                                    ulong[] dbnoComps = new ulong[activeHumans.Count];
                                    byte[] charTypes = new byte[activeHumans.Count];

                                    using (var scComp = DmaMemory.CreateScatter())
                                    {
                                        for (int i = 0; i < activeHumans.Count; i++)
                                        {
                                            ulong p = activeHumans[i].pawn;
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.AActor_RootComponent);
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.ACharacter_Mesh);
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_AbilitySystemComponent);
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_DeathComponent);
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_InventoryManager);
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_ArmorManager);
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_MovementComponent);
                                            scComp.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_DBNOComponent);
                                            scComp.PrepareReadValue<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType);
                                        }
                                        scComp.Execute();
                                        for (int i = 0; i < activeHumans.Count; i++)
                                        {
                                            ulong p = activeHumans[i].pawn;
                                            scComp.ReadValue<ulong>(p + ABIOffsets.AActor_RootComponent, out roots[i]);
                                            scComp.ReadValue<ulong>(p + ABIOffsets.ACharacter_Mesh, out meshes[i]);
                                            scComp.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_AbilitySystemComponent, out ascs[i]);
                                            scComp.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_DeathComponent, out deathComps[i]);
                                            scComp.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_InventoryManager, out invMgrs[i]);
                                            scComp.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_ArmorManager, out armorMgrs[i]);
                                            scComp.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_MovementComponent, out movComps[i]);
                                            scComp.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_DBNOComponent, out dbnoComps[i]);
                                            scComp.ReadValue<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType, out charTypes[i]);
                                        }
                                    }

                                    for (int i = 0; i < activeHumans.Count; i++)
                                    {
                                        ulong p = activeHumans[i].pawn;
                                        ulong ps = activeHumans[i].ps;
                                        int team = activeHumans[i].team;

                                        if (roots[i] < 0x100000)
                                        {
                                            roots[i] = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_RootComponent + 0x1008);
                                            if (roots[i] < 0x100000 && meshes[i] > 0x1000000)
                                            {
                                                roots[i] = DmaMemory.Read<ulong>(meshes[i] + ABIOffsets.USceneComponent_AttachParent);
                                            }
                                        }

                                        if (roots[i] < 0x100000) continue;

                                        byte bDead = 0;
                                        if (deathComps[i] > 0x1000000)
                                        {
                                            bDead = DmaMemory.Read<byte>(deathComps[i] + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD);
                                        }
                                        if (bDead != 0) continue;

                                        if (!_actorCache.TryGetValue(p, out var ac) || ac == null)
                                        {
                                            ac = new ActorCacheEntry { Pawn = p };
                                            _actorCache[p] = ac;
                                        }

                                        ac.Pawn = p;
                                        ac.PlayerState = ps;
                                        ac.Root = roots[i];
                                        ac.Mesh = meshes[i];
                                        ac.ASC = ascs[i];
                                        ac.DeathComp = deathComps[i];
                                        ac.InvMgr = invMgrs[i];
                                        ac.ArmorMgr = armorMgrs[i];
                                        ac.MovementComp = movComps[i];
                                        ac.DBNOComp = dbnoComps[i];
                                        ac.CharType = charTypes[i] != 0 ? charTypes[i] : (byte)1;
                                        ac.IsBot = false;
                                        ac.IsEnhanced = false;
                                        ac.IsZombie = false;
                                        ac.IsDummy = false;
                                        ac.Team = team;

                                        if (string.IsNullOrEmpty(ac.PrivateName))
                                        {
                                            string pName = DmaMemory.ReadFString(ps + ABIOffsets.APlayerState_PlayerNamePrivate);
                                            if (!string.IsNullOrEmpty(pName)) ac.PrivateName = pName;
                                        }
                                        ac.Name = !string.IsNullOrEmpty(ac.PrivateName) ? ac.PrivateName : (ac.CharType == 2 ? "Player Scav" : "PMC");
                                        ac.CharTypeName = (ac.CharType == 2) ? "Player Scav" : "PMC";

                                        if (ac.RawPosPtr == 0 || ac.Root != roots[i])
                                        {
                                            ac.RawPosPtr = roots[i] + 0x170;
                                            ac.RelResolved = true;
                                        }

                                        uint ctl = DmaMemory.Read<uint>(roots[i] + 0x17C);
                                        uint algo = ctl >> 29;
                                        uint key = ctl & 0x1FFFFFF;
                                        if (algo != 0 && key != 0)
                                        {
                                            if (ac.AceKey != key || ac.AceNodePtr == 0)
                                            {
                                                if (DmaMemory.TryGetAceNode(key, out var node) && node.DataPtr > 0x1000000)
                                                {
                                                    ac.AceKey = key;
                                                    ac.AceNodePtr = node.NodePtr;
                                                    ac.AceDataPtr = node.DataPtr;
                                                    ac.IsEncrypted = true;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            ac.IsEncrypted = false;
                                        }

                                        if (meshes[i] > 0x1000000 && (ac.BoneArrayPtr == 0 || ac.BoneCount < 20))
                                        {
                                            ulong arr = meshes[i] + ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms;
                                            ulong bPtr = DmaMemory.Read<ulong>(arr);
                                            int bCount = DmaMemory.Read<int>(arr + 0x8);
                                            if (bPtr > 0x1000000 && bPtr < 0x7FFFFFFFFFFF && bCount >= 20 && bCount <= 250)
                                            {
                                                ac.BoneArrayPtr = bPtr;
                                                ac.BoneCount = bCount;
                                                ac.HasValidBones = true;
                                            }
                                        }

                                        if (meshes[i] > 0x1000000)
                                        {
                                            ac.MeshRawCtwPtr = meshes[i] + 0x220;
                                            uint mCtl = DmaMemory.Read<uint>(meshes[i] + 0x250);
                                            uint mAlgo = mCtl >> 29;
                                            uint mKey = mCtl & 0x1FFFFFF;
                                            if (mAlgo != 0 && mKey != 0)
                                            {
                                                if (ac.MeshAceKey != mKey || ac.MeshAceNodePtr == 0)
                                                {
                                                    if (DmaMemory.TryGetAceNode(mKey, out var mNode) && mNode.DataPtr > 0x1000000)
                                                    {
                                                        ac.MeshAceKey = mKey;
                                                        ac.MeshAceNodePtr = mNode.NodePtr;
                                                        ac.MeshAceDataPtr = mNode.DataPtr;
                                                        ac.MeshIsEncrypted = true;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                ac.MeshIsEncrypted = false;
                                            }
                                        }

                                        FactionType fact = (LocalTeam != -1 && ac.Team == LocalTeam) ? FactionType.Team : FactionType.Enemy;
                                        ac.Faction = fact;
                                        _actorCache[p] = ac;

                                        tmp.Add(new ABIPlayer(p, ac.Mesh, ac.Root, ac.Name, false, ac.ASC, ac.HealthSet, ac.DeathComp, ac.Team, fact, false, ac.InvMgr, ac.ArmorMgr, ac.MovementComp, ac.LastInventoryValue, false));
                                    }
                                }
                            }
                        }
                    }

                    // =========================================================================
                    // TIER 2: AI BOTS, BOSSES, ZOMBIES & TARGET DUMMIES
                    // Pulls from NetDriver OpenChannels & ActorArray (strictly skipping unspawned BP_UamCharacter_C)
                    // =========================================================================
                    var aiCandidates = new List<ulong>(128);
                    var seenCandidates = new HashSet<ulong>(aiCandidates.Capacity);

                    ulong netDriver = DmaMemory.Read<ulong>(UWorld + ABIOffsets.UWorld_NetDriver);
                    if (netDriver > 0x1000000)
                    {
                        ulong serverConn = DmaMemory.Read<ulong>(netDriver + ABIOffsets.UNetDriver_ServerConnection);
                        if (serverConn > 0x1000000)
                        {
                            ulong openChannels = DmaMemory.Read<ulong>(serverConn + ABIOffsets.UNetConnection_OpenChannels);
                            int chanCount = DmaMemory.Read<int>(serverConn + ABIOffsets.UNetConnection_ChannelCount);
                            if (openChannels > 0x1000000 && chanCount > 0 && chanCount <= 512)
                            {
                                var chanPtrs = DmaMemory.ReadArray<ulong>(openChannels, chanCount);
                                if (chanPtrs != null && chanPtrs.Length > 0)
                                {
                                    using var scChan = DmaMemory.CreateScatter();
                                    foreach (var ch in chanPtrs)
                                    {
                                        if (ch > 0x1000000)
                                            scChan.PrepareReadValue<ulong>(ch + ABIOffsets.UActorChannel_Actor);
                                    }
                                    scChan.Execute();
                                    foreach (var ch in chanPtrs)
                                    {
                                        if (ch > 0x1000000)
                                        {
                                            scChan.ReadValue<ulong>(ch + ABIOffsets.UActorChannel_Actor, out ulong act);
                                            if (act > 0x1000000 && act != LocalPawn && !humanPawns.Contains(act) && seenCandidates.Add(act))
                                            {
                                                aiCandidates.Add(act);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }

                    bool isRealMap = MapID >= 1 && MapID <= 7;
                    bool scanDummies = !isRealMap && Config.DrawTargetDummies;
                    if (!scanDummies && _cachedDummyPtrs.Count > 0) _cachedDummyPtrs.Clear();

                    if (scanDummies)
                    {
                        long nowTicks = Stopwatch.GetTimestamp();
                        double elapsedMs = (nowTicks - _lastLevelScanTicks) * 1000.0 / Stopwatch.Frequency;
                        if (_lastLevelScanTicks == 0 || elapsedMs >= 5000.0)
                        {
                            _lastLevelScanTicks = nowTicks;
                            _cachedDummyPtrs.Clear();

                            ulong levelsArrayPtr = DmaMemory.Read<ulong>(UWorld + ABIOffsets.UWorld_Levels);
                            int levelsCount = DmaMemory.Read<int>(UWorld + ABIOffsets.UWorld_Levels + 0x08);
                            if (levelsArrayPtr != 0 && levelsCount > 0 && levelsCount < 1000)
                            {
                                var levels = DmaMemory.ReadArray<ulong>(levelsArrayPtr, levelsCount);
                                if (levels != null)
                                {
                                    var validLevels = levels.Where(l => l > 0x1000000).ToArray();
                                    if (validLevels.Length > 0)
                                    {
                                        ulong[] actArrays = new ulong[validLevels.Length];
                                        int[] actCounts = new int[validLevels.Length];
                                        using (var scL = DmaMemory.CreateScatter())
                                        {
                                            for (int j = 0; j < validLevels.Length; j++)
                                            {
                                                scL.PrepareReadValue<ulong>(validLevels[j] + ABIOffsets.ULevel_ActorArray);
                                                scL.PrepareReadValue<int>(validLevels[j] + ABIOffsets.ULevel_ActorArray + 0x08);
                                            }
                                            scL.Execute();
                                            for (int j = 0; j < validLevels.Length; j++)
                                            {
                                                scL.ReadValue<ulong>(validLevels[j] + ABIOffsets.ULevel_ActorArray, out actArrays[j]);
                                                scL.ReadValue<int>(validLevels[j] + ABIOffsets.ULevel_ActorArray + 0x08, out actCounts[j]);
                                            }
                                        }
                                        for (int j = 0; j < validLevels.Length; j++)
                                        {
                                            if (actArrays[j] == 0 || actCounts[j] <= 0 || actCounts[j] > 4096) continue;
                                            var acts = DmaMemory.ReadArray<ulong>(actArrays[j], actCounts[j]);
                                            if (acts != null)
                                            {
                                                foreach (var p in acts)
                                                {
                                                    if (p > 0x1000000 && p != LocalPawn && !humanPawns.Contains(p))
                                                        _cachedDummyPtrs.Add(p);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        foreach (var dummy in _cachedDummyPtrs)
                        {
                            if (seenCandidates.Add(dummy)) aiCandidates.Add(dummy);
                        }
                    }

                    if (ActorArray != 0 && ActorCount > 0)
                    {
                        int take = Math.Min(ActorCount, 4096);
                        var levelActors = DmaMemory.ReadArray<ulong>(ActorArray, take);
                        if (levelActors != null)
                        {
                            foreach (var p in levelActors)
                            {
                                if (p > 0x1000000 && p != LocalPawn && !humanPawns.Contains(p) && seenCandidates.Add(p))
                                {
                                    aiCandidates.Add(p);
                                }
                            }
                        }
                    }

                    if (aiCandidates.Count > 0)
                    {
                        uint[] nameIds = new uint[aiCandidates.Count];
                        byte[] charTypes = new byte[aiCandidates.Count];
                        ulong[] roots = new ulong[aiCandidates.Count];
                        ulong[] meshes = new ulong[aiCandidates.Count];
                        ulong[] zMeshComps = new ulong[aiCandidates.Count];
                        ulong[] zAttrComps = new ulong[aiCandidates.Count];
                        ulong[] playerStates = new ulong[aiCandidates.Count];

                        const int BATCH_SIZE = 128;
                        for (int start = 0; start < aiCandidates.Count; start += BATCH_SIZE)
                        {
                            int count = Math.Min(BATCH_SIZE, aiCandidates.Count - start);
                            using var sc = DmaMemory.CreateScatter();
                            for (int i = start; i < start + count; i++)
                            {
                                ulong p = aiCandidates[i];
                                sc.PrepareReadValue<uint>(p + ABIOffsets.UObject_ObjectId);
                                sc.PrepareReadValue<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType);
                                sc.PrepareReadValue<ulong>(p + ABIOffsets.AActor_RootComponent);
                                sc.PrepareReadValue<ulong>(p + ABIOffsets.ACharacter_Mesh);
                                sc.PrepareReadValue<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieMeshComponent);
                                sc.PrepareReadValue<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieAttributeComponent);
                                sc.PrepareReadValue<ulong>(p + ABIOffsets.AActor_PlayerState);
                            }
                            sc.Execute();
                            for (int i = start; i < start + count; i++)
                            {
                                ulong p = aiCandidates[i];
                                sc.ReadValue<uint>(p + ABIOffsets.UObject_ObjectId, out nameIds[i]);
                                sc.ReadValue<byte>(p + ABIOffsets.ASGCharacter_CachedCharacterType, out charTypes[i]);
                                sc.ReadValue<ulong>(p + ABIOffsets.AActor_RootComponent, out roots[i]);
                                sc.ReadValue<ulong>(p + ABIOffsets.ACharacter_Mesh, out meshes[i]);
                                sc.ReadValue<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieMeshComponent, out zMeshComps[i]);
                                sc.ReadValue<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieAttributeComponent, out zAttrComps[i]);
                                sc.ReadValue<ulong>(p + ABIOffsets.AActor_PlayerState, out playerStates[i]);
                            }
                        }

                        var validAiList = new List<(ulong pawn, string name, byte charType, ulong root, ulong mesh, bool isZombie, bool isDummy, bool isEnhanced, bool isHuman, ulong ps)>();
                        for (int i = 0; i < aiCandidates.Count; i++)
                        {
                            ulong p = aiCandidates[i];
                            string name = ABINamePool.GetName(nameIds[i]);
                            if (string.IsNullOrEmpty(name)) continue;

                            bool isHuman = name.StartsWith("BP_UamCharacter", StringComparison.OrdinalIgnoreCase) &&
                                           !name.StartsWith("BP_UamCharacterRange", StringComparison.OrdinalIgnoreCase);

                            if (isHuman)
                            {
                                ulong ps = playerStates[i];
                                if (ps < 0x1000000) ps = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_PlayerState + 0x1008);
                                if (ps <= 0x1000000) continue; // Skip dormant unspawned staging pawns
                            }

                            bool isContainer = name.StartsWith("Inventory_", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_Inventory", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_SupplyStation", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_RewardBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_DeathBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.StartsWith("BP_Package", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("RewardBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("DeathBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("SafeBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("DropBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("WeaponCase", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("ToolBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("MediKit", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("StorageBox", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("CabinetDrawer", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("OilZombie", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("ZombieCorpse", StringComparison.OrdinalIgnoreCase) ||
                                               name.Contains("Corpse", StringComparison.OrdinalIgnoreCase);
                            if (isContainer) continue;

                            bool isNonCharacter = name.Contains("PlayerState", StringComparison.OrdinalIgnoreCase) ||
                                                  name.Contains("PlayerController", StringComparison.OrdinalIgnoreCase) ||
                                                  name.Contains("CameraManager", StringComparison.OrdinalIgnoreCase) ||
                                                  name.Contains("Controller", StringComparison.OrdinalIgnoreCase) ||
                                                  name.Contains("TeamInfo", StringComparison.OrdinalIgnoreCase) ||
                                                  name.Contains("Faction", StringComparison.OrdinalIgnoreCase);
                            if (isNonCharacter) continue;

                            bool isDummy = name.StartsWith("BP_UamCharacterRange", StringComparison.OrdinalIgnoreCase);
                            bool isZombie = name.StartsWith("BP_UamZombie", StringComparison.OrdinalIgnoreCase) ||
                                            name.StartsWith("BP_Zombie", StringComparison.OrdinalIgnoreCase) ||
                                            name.Contains("ZombieCharacter", StringComparison.OrdinalIgnoreCase) ||
                                            ((name.Contains("Zombie", StringComparison.OrdinalIgnoreCase) ||
                                              name.Contains("Leaper", StringComparison.OrdinalIgnoreCase) ||
                                              name.Contains("Breacher", StringComparison.OrdinalIgnoreCase) ||
                                              name.Contains("Infiltrator", StringComparison.OrdinalIgnoreCase) ||
                                              name.Contains("Purifier", StringComparison.OrdinalIgnoreCase) ||
                                              name.Contains("Reaper", StringComparison.OrdinalIgnoreCase)) &&
                                             (name.StartsWith("BP_Uam", StringComparison.OrdinalIgnoreCase) || name.Contains("Character", StringComparison.OrdinalIgnoreCase)));

                            bool isAi = name.StartsWith("BP_UamAICharacter", StringComparison.OrdinalIgnoreCase) ||
                                        name.Contains("AICharacter", StringComparison.OrdinalIgnoreCase) ||
                                        isZombie;

                            if (!isAi && !isDummy && !isHuman) continue;

                            byte ct = charTypes[i];
                            if (isZombie)
                            {
                                if (name.Contains("Boss", StringComparison.OrdinalIgnoreCase)) ct = 12;
                                else if (name.Contains("Heavy", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Hunter", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Pouncer", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Breach", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Throw", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Spit", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Suicide", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Kamikaze", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Leaper", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Reaper", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Purifier", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Infiltrator", StringComparison.OrdinalIgnoreCase) ||
                                         name.Contains("Elit", StringComparison.OrdinalIgnoreCase))
                                    ct = 11;
                                else ct = 10;
                            }
                            else if (isAi && (ct < 3 || ct > 12)) ct = 3;
                            else if (isHuman && (ct < 1 || ct > 2)) ct = 1;

                            bool isEnhanced = (ct == 4 || ct == 6 || ct == 7 || ct == 12);

                            ulong r = roots[i];
                            if (r < 0x100000)
                            {
                                r = DmaMemory.Read<ulong>(p + ABIOffsets.AActor_RootComponent + 0x1008);
                                if (r < 0x100000 && meshes[i] > 0x1000000)
                                    r = DmaMemory.Read<ulong>(meshes[i] + ABIOffsets.USceneComponent_AttachParent);
                            }
                            if (r < 0x100000) continue;

                            ulong m = meshes[i];
                            if (isZombie && m < 0x1000000)
                            {
                                ulong zm = zMeshComps[i] > 0x1000000 ? zMeshComps[i] : DmaMemory.Read<ulong>(p + ABIOffsets.ASGZombieCharacter_ZombieMeshComponent);
                                if (zm > 0x1000000)
                                    m = DmaMemory.Read<ulong>(zm + ABIOffsets.USGZombieMeshComponent_ZombieSkeletalMeshComponent);
                            }

                            validAiList.Add((p, isDummy ? "Target Dummy" : name, ct, r, m, isZombie, isDummy, isEnhanced, isHuman, isHuman ? playerStates[i] : 0));
                        }

                        if (validAiList.Count > 0)
                        {
                            ulong[] ascs = new ulong[validAiList.Count];
                            ulong[] deathComps = new ulong[validAiList.Count];
                            ulong[] movComps = new ulong[validAiList.Count];
                            int[] teams = new int[validAiList.Count];

                            using (var scAi = DmaMemory.CreateScatter())
                            {
                                for (int i = 0; i < validAiList.Count; i++)
                                {
                                    ulong p = validAiList[i].pawn;
                                    scAi.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_AbilitySystemComponent);
                                    scAi.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_DeathComponent);
                                    scAi.PrepareReadValue<ulong>(p + ABIOffsets.ASGCharacter_MovementComponent);
                                    if (validAiList[i].isHuman && validAiList[i].ps > 0x1000000)
                                        scAi.PrepareReadValue<int>(validAiList[i].ps + ABIOffsets.ASGPlayerState_TeamIndex);
                                }
                                scAi.Execute();
                                for (int i = 0; i < validAiList.Count; i++)
                                {
                                    ulong p = validAiList[i].pawn;
                                    scAi.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_AbilitySystemComponent, out ascs[i]);
                                    scAi.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_DeathComponent, out deathComps[i]);
                                    scAi.ReadValue<ulong>(p + ABIOffsets.ASGCharacter_MovementComponent, out movComps[i]);
                                    if (validAiList[i].isHuman && validAiList[i].ps > 0x1000000)
                                        scAi.ReadValue<int>(validAiList[i].ps + ABIOffsets.ASGPlayerState_TeamIndex, out teams[i]);
                                }
                            }

                            for (int i = 0; i < validAiList.Count; i++)
                            {
                                var ai = validAiList[i];
                                ulong p = ai.pawn;

                                byte bDead = 0;
                                if (deathComps[i] > 0x1000000)
                                    bDead = DmaMemory.Read<byte>(deathComps[i] + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD);

                                if (bDead != 0) continue;

                                if (!_actorCache.TryGetValue(p, out var ac) || ac == null)
                                {
                                    ac = new ActorCacheEntry { Pawn = p };
                                    _actorCache[p] = ac;
                                }

                                ac.Pawn = p;
                                ac.Root = ai.root;
                                ac.Mesh = ai.mesh;
                                ac.ASC = ascs[i];
                                ac.DeathComp = deathComps[i];
                                ac.MovementComp = movComps[i];
                                ac.CharType = ai.charType;
                                ac.IsBot = !ai.isDummy && !ai.isHuman;
                                ac.IsEnhanced = ai.isEnhanced;
                                ac.IsZombie = ai.isZombie;
                                ac.IsDummy = ai.isDummy;
                                ac.Team = ai.isHuman ? teams[i] : 0;

                                if (ai.isHuman)
                                {
                                    ac.PlayerState = ai.ps;
                                    if (string.IsNullOrEmpty(ac.PrivateName) && ac.PlayerState > 0x1000000)
                                    {
                                        string pName = DmaMemory.ReadFString(ac.PlayerState + ABIOffsets.APlayerState_PlayerNamePrivate);
                                        if (!string.IsNullOrEmpty(pName)) ac.PrivateName = pName;
                                    }
                                    ac.Name = !string.IsNullOrEmpty(ac.PrivateName) ? ac.PrivateName : (ac.CharType == 2 ? "Player Scav" : "PMC");
                                    ac.CharTypeName = (ac.CharType == 2) ? "Player Scav" : "PMC";
                                    ac.Faction = (LocalTeam != -1 && ac.Team == LocalTeam) ? FactionType.Team : FactionType.Enemy;
                                }
                                else
                                {
                                    ac.Name = ai.name;
                                    ac.CharTypeName = ai.isDummy ? "Target Dummy" : (ai.isZombie ? (ai.isEnhanced ? "Zombie Boss" : "Zombie") : (ai.isEnhanced ? "Boss" : "Scav"));
                                    ac.Faction = ai.isDummy ? FactionType.Dummy : (ai.isEnhanced ? FactionType.Boss : FactionType.Bot);
                                }

                                if (ac.RawPosPtr == 0 || ac.Root != ai.root)
                                {
                                    ac.RawPosPtr = ai.root + 0x170;
                                    ac.RelResolved = true;
                                }

                                uint ctl = DmaMemory.Read<uint>(ai.root + 0x17C);
                                uint algo = ctl >> 29;
                                uint key = ctl & 0x1FFFFFF;
                                if (algo != 0 && key != 0)
                                {
                                    if (ac.AceKey != key || ac.AceNodePtr == 0)
                                    {
                                        if (DmaMemory.TryGetAceNode(key, out var node) && node.DataPtr > 0x1000000)
                                        {
                                            ac.AceKey = key;
                                            ac.AceNodePtr = node.NodePtr;
                                            ac.AceDataPtr = node.DataPtr;
                                            ac.IsEncrypted = true;
                                        }
                                    }
                                }
                                else
                                {
                                    ac.IsEncrypted = false;
                                }

                                if (ai.mesh > 0x1000000 && (ac.BoneArrayPtr == 0 || ac.BoneCount < 20))
                                {
                                    ulong arr = ai.mesh + ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms;
                                    ulong bPtr = DmaMemory.Read<ulong>(arr);
                                    int bCount = DmaMemory.Read<int>(arr + 0x8);
                                    if (bPtr > 0x1000000 && bPtr < 0x7FFFFFFFFFFF && bCount >= 20 && bCount <= 250)
                                    {
                                        ac.BoneArrayPtr = bPtr;
                                        ac.BoneCount = bCount;
                                        ac.HasValidBones = true;
                                    }
                                }

                                if (ai.mesh > 0x1000000)
                                {
                                    ac.MeshRawCtwPtr = ai.mesh + 0x220;
                                    uint mCtl = DmaMemory.Read<uint>(ai.mesh + 0x250);
                                    uint mAlgo = mCtl >> 29;
                                    uint mKey = mCtl & 0x1FFFFFF;
                                    if (mAlgo != 0 && mKey != 0)
                                    {
                                        if (ac.MeshAceKey != mKey || ac.MeshAceNodePtr == 0)
                                        {
                                            if (DmaMemory.TryGetAceNode(mKey, out var mNode) && mNode.DataPtr > 0x1000000)
                                            {
                                                ac.MeshAceKey = mKey;
                                                ac.MeshAceNodePtr = mNode.NodePtr;
                                                ac.MeshAceDataPtr = mNode.DataPtr;
                                                ac.MeshIsEncrypted = true;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        ac.MeshIsEncrypted = false;
                                    }
                                }

                                _actorCache[p] = ac;
                                tmp.Add(new ABIPlayer(p, ac.Mesh, ac.Root, ac.Name, ac.IsBot, ac.ASC, ac.HealthSet, ac.DeathComp, ac.Team, ac.Faction, ac.IsEnhanced, ac.InvMgr, ac.ArmorMgr, ac.MovementComp, ac.LastInventoryValue, ac.IsZombie));
                            }
                        }
                    }

                    if (EnableUniversalDebug)
                    {
                        var debugTmp = new List<DebugActorInfo>();
                        float debugDistSq = UniversalDebugDist * UniversalDebugDist * 10000f;
                        foreach (var a in tmp)
                        {
                            if (_actorCache.TryGetValue(a.Pawn, out var ac) && ac != null && ac.Root != 0)
                            {
                                Vector3 pos = DmaMemory.DecryptActorPosition(ac.Root);
                                if (pos != default && Vector3.DistanceSquared(LocalPosition, pos + _originBias) <= debugDistSq)
                                    debugTmp.Add(new DebugActorInfo { Ptr = a.Pawn, Name = ac.Name, Pos = pos + _originBias });
                            }
                        }
                        lock (Sync) DebugActors = debugTmp;
                    }
                    else
                    {
                        lock (Sync) DebugActors = new();
                    }

                    lock (Sync)
                    {
                        var currentPawns = tmp.Select(p => p.Pawn).ToHashSet();
                        foreach (var pawn in currentPawns)
                        {
                            if (!_activePawnsLogged.Contains(pawn))
                            {
                                _activePawnsLogged.Add(pawn);
                                if (_actorCache.TryGetValue(pawn, out var ac) && ac != null)
                                {
                                    DebugFlicker($"[Pawn Added] 0x{pawn:X} | Name: {ac.Name} | Faction: {ac.Faction} | Root: 0x{ac.Root:X} | Mesh: 0x{ac.Mesh:X}");
                                }
                            }
                        }
                        var removedPawns = _activePawnsLogged.Where(p => !currentPawns.Contains(p)).ToList();
                        foreach (var pawn in removedPawns)
                        {
                            _activePawnsLogged.Remove(pawn);
                            if (_actorCache.TryGetValue(pawn, out var ac) && ac != null)
                            {
                                DebugFlicker($"[Pawn Removed] 0x{pawn:X} | Name: {ac.Name ?? "Unknown"} | Faction: {ac.Faction}");
                            }
                        }
                        ActorList = tmp;
                    }
                }
                catch (Exception ex)
                {
                    DMA.Logger.Error($"[CachePlayersLoop] Error: {ex.Message}");
                }
            }
        }
        // /////////////////////////////////////////////////////////////////////////////////////

        private static void CacheVitalsLoop()
        {
            while (_running)
            {
                try
                {
                    List<ABIPlayer> actors;
                    lock (Sync) actors = ActorList != null && ActorList.Count > 0 ? new List<ABIPlayer>(ActorList) : new List<ABIPlayer>();

                    // Always ensure LocalPawn is processed in Vitals resolution
                    ulong localPawn = LocalPawn;
                    if (localPawn > 0x1000000 && !actors.Any(a => a.Pawn == localPawn))
                    {
                        ulong localAsc = 0;
                        ulong localDc = 0;
                        if (_actorCache.TryGetValue(localPawn, out var lac) && lac != null)
                        {
                            localAsc = lac.ASC;
                            localDc = lac.DeathComp;
                        }
                        if (localAsc < 0x1000000)
                        {
                            localAsc = DmaMemory.Read<ulong>(localPawn + ABIOffsets.ASGCharacter_AbilitySystemComponent);
                            if (localAsc > 0x1000000)
                            {
                                if (lac != null) { lac.ASC = localAsc; _actorCache[localPawn] = lac; }
                                else _actorCache[localPawn] = new ActorCacheEntry { Pawn = localPawn, ASC = localAsc, Name = "Local" };
                            }
                        }

                        if (localAsc > 0x1000000)
                        {
                            actors.Add(new ABIPlayer(localPawn, 0, 0, "Local", false, localAsc, _localHealthSet, localDc, LocalTeam, FactionType.Team, false, 0, 0, 0, 0));
                        }
                    }

                    if (actors.Count == 0) { Sleep(8); continue; }

                    var need = new List<ABIPlayer>(actors.Count);
                    foreach (var a in actors)
                    {
                        if (a.ASC == 0) continue;
                        if (a.Pawn == localPawn)
                        {
                            if (_localHealthSet != 0 && LocalHealthMax > 1f)
                            {
                                float testMax = DmaMemory.Read<float>(_localHealthSet + 0x4C);
                                if (testMax > 1f) continue;
                                _localHealthSet = 0;
                                DebugVitals($"Local HealthSet stale, re-resolving");
                            }
                            need.Add(a);
                            continue;
                        }

                        if (_actorCache.TryGetValue(a.Pawn, out var ac) && ac != null)
                        {
                            if (ac.IsZombie) continue;
                            if (ac.HealthSet != 0)
                            {
                                float testMax = DmaMemory.Read<float>(ac.HealthSet + 0x4C);
                                if (testMax > 1f) continue;
                                ac.HealthSet = 0;
                                _actorCache[a.Pawn] = ac;
                                DebugVitals($"HealthSet stale for 0x{a.Pawn:X} ({a.Name}), re-resolving");
                            }
                        }
                        need.Add(a);
                    }
                    if (need.Count == 0) { Sleep(8); continue; }

                    var headers = new (ulong data, int num)[need.Count];
                    using (var sc = DmaMemory.CreateScatter())
                    {
                        foreach (var a in need)
                        {
                            ulong basePtr = a.ASC + (ulong)ABIOffsetsExt.OFF_ASC_ATTRSETS;
                            sc.PrepareReadValue<ulong>(basePtr);
                            sc.PrepareReadValue<int>(basePtr + 0x8);
                        }
                        sc.Execute();
                        for (int i = 0; i < need.Count; i++)
                        {
                            ulong basePtr = need[i].ASC + (ulong)ABIOffsetsExt.OFF_ASC_ATTRSETS;
                            sc.ReadValue<ulong>(basePtr, out headers[i].data);
                            sc.ReadValue<int>(basePtr + 0x8, out headers[i].num);
                        }
                    }

                    var attrPointers = new ulong[need.Count, 32];
                    using (var sc = DmaMemory.CreateScatter())
                    {
                        for (int i = 0; i < need.Count; i++)
                        {
                            if (headers[i].data == 0 || headers[i].num <= 0) continue;
                            int scan = Math.Min(headers[i].num, 32);
                            for (int e = 0; e < scan; e++) sc.PrepareReadValue<ulong>(headers[i].data + (ulong)(e * 8));
                        }
                        sc.Execute();

                        for (int i = 0; i < need.Count; i++)
                        {
                            if (headers[i].data == 0 || headers[i].num <= 0) continue;
                            int scan = Math.Min(headers[i].num, 32);
                            for (int e = 0; e < scan; e++) sc.ReadValue<ulong>(headers[i].data + (ulong)(e * 8), out attrPointers[i, e]);
                        }
                    }

                    var nameIds = new uint[need.Count, 32];
                    using (var scName = DmaMemory.CreateScatter())
                    {
                        for (int i = 0; i < need.Count; i++)
                        {
                            for (int e = 0; e < 32; e++) {
                                if (attrPointers[i, e] != 0) scName.PrepareReadValue<uint>(attrPointers[i, e] + ABIOffsets.UObject_ObjectId);
                            }
                        }
                        scName.Execute();
                        for (int i = 0; i < need.Count; i++)
                        {
                            for (int e = 0; e < 32; e++) {
                                if (attrPointers[i, e] != 0) scName.ReadValue<uint>(attrPointers[i, e] + ABIOffsets.UObject_ObjectId, out nameIds[i, e]);
                            }
                        }
                    }

                    for (int i = 0; i < need.Count; i++)
                    {
                        ulong bestSet = 0;
                        int bestPriority = -1;

                        for (int e = 0; e < 32; e++)
                        {
                            if (attrPointers[i, e] == 0) continue;
                            string name = ABINamePool.GetName(nameIds[i, e]);
                            if (name == null) continue;

                            if (name.Contains("Endurance", StringComparison.OrdinalIgnoreCase))
                            {
                                bestSet = attrPointers[i, e];
                                bestPriority = 2; // Real HP for players/AI
                                break;
                            }
                            else if (name.Contains("Health", StringComparison.OrdinalIgnoreCase) && bestPriority < 1)
                            {
                                bestSet = attrPointers[i, e];
                                bestPriority = 1;
                            }
                        }

                        if (bestSet != 0)
                        {
                            DebugVitals($"Resolved HealthSet for 0x{need[i].Pawn:X} ({need[i].Name}): 0x{bestSet:X} (Priority: {bestPriority})");
                            if (need[i].Pawn == localPawn)
                            {
                                _localHealthSet = bestSet;
                            }
                            if (_actorCache.TryGetValue(need[i].Pawn, out var ac2) && ac2 != null)
                            {
                                ac2.HealthSet = bestSet;
                                _actorCache[need[i].Pawn] = ac2;
                            }
                            else if (need[i].Pawn == localPawn)
                            {
                                _actorCache[localPawn] = new ActorCacheEntry { Pawn = localPawn, ASC = need[i].ASC, HealthSet = bestSet, Name = "Local" };
                            }
                        }
                        else
                        {
                            DebugVitals($"Failed to resolve HealthSet for 0x{need[i].Pawn:X} ({need[i].Name}). Attributes count: {headers[i].num}");
                        }
                    }
                }
                catch { }
                Sleep(8);
            }
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  POSITIONS LOOP
        // /////////////////////////////////////////////////////////////////////////////////////

        private static void CachePositionsLoop()
        {
            while (_running)
            {
                try
                {
                    long now = Stopwatch.GetTimestamp();

                    List<ABIPlayer> actors;
                    lock (Sync) actors = ActorList.Count == 0 ? null : new List<ABIPlayer>(ActorList);
                    ulong localPawn = LocalPawn;
                    if ((actors == null || actors.Count == 0) && (_localHealthSet <= 0x1000000 || localPawn <= 0x1000000)) { Sleep(2); continue; }

                    // 1. Ensure Root is set once per actor (Zero synchronous reads)
                    if (actors != null)
                    {
                        foreach (var a in actors)
                        {
                            if (!_actorCache.TryGetValue(a.Pawn, out var ac) || ac == null) continue;

                            ulong root = ac.Root != 0 ? ac.Root : a.Root;
                            if (root > 0x100000 && ac.Root != root)
                            {
                                ac.Root = root;
                                _actorCache[a.Pawn] = ac;
                            }
                        }
                    }

                    // 2. Pure scatter batch across PCIe (Single transaction)
                    using var sc = DmaMemory.CreateScatterNoCache();

                    // Queue local player health if resolved (zero round trips)
                    bool queueLocalHealth = (_localHealthSet > 0x1000000);
                    if (queueLocalHealth)
                    {
                        sc.PrepareReadValue<HealthLimbPacket>(_localHealthSet + 0x48);
                    }

                    ulong localDeathComp = 0;
                    if (localPawn > 0x1000000 && _actorCache.TryGetValue(localPawn, out var lac) && lac != null)
                    {
                        localDeathComp = lac.DeathComp;
                        if (localDeathComp > 0x1000000)
                            sc.PrepareReadValue<byte>(localDeathComp + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD);
                    }

                    if (actors != null)
                    {
                        foreach (var a in actors)
                        {
                            if (!_actorCache.TryGetValue(a.Pawn, out var acEntry) || acEntry == null) continue;
                            ulong r = acEntry.Root != 0 ? acEntry.Root : a.Root;
                            if (r < 0x100000) continue;

                            // ComponentToWorld (0x220: FTransform + Ctl at 0x250) and RelativeLocation (0x170: Vector3 + Ctl at 0x17C)
                            sc.PrepareReadValue<C2WPacket>(r + 0x220);
                            sc.PrepareReadValue<RelativeLocPacket>(r + 0x170);

                            if (acEntry.IsEncrypted && acEntry.AceDataPtr > 0x1000000 && acEntry.AceNodePtr > 0x1000000)
                            {
                                sc.PrepareReadValue<DmaMemory.AceDword3>(acEntry.AceDataPtr);
                                sc.PrepareReadValue<uint>(acEntry.AceNodePtr + 0x20);
                            }

                            if (acEntry.IsZombie)
                            {
                                sc.PrepareReadValue<byte>(a.Pawn + ABIOffsets.ASGZombieCharacter_bIsDead);
                                sc.PrepareReadValue<byte>(a.Pawn + ABIOffsets.ASGZombieCharacter_bOnDieActivated);
                                if (acEntry.HealthSet > 0x1000000)
                                {
                                    sc.PrepareReadValue<ZombieHealthPacket>(acEntry.HealthSet + 0x58);
                                }
                            }
                            else
                            {
                                if (a.DeathComp != 0) sc.PrepareReadValue<byte>(a.DeathComp + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD);
                                if (acEntry.HealthSet != 0 && a.Faction != FactionType.Dummy)
                                {
                                    sc.PrepareReadValue<HealthLimbPacket>(acEntry.HealthSet + 0x48);
                                }
                            }

                            if (a.MovementComp != 0) sc.PrepareReadValue<Vector3>(a.MovementComp + ABIOffsets.UMovementComponent_Velocity);

                            if (a.Mesh != 0)
                            {
                                sc.PrepareReadValue<MeshTimersPacket>(a.Mesh + ABIOffsetsExt.OFF_MESH_TIMERS);
                            }

                            bool checkDBNO = acEntry.DBNOComp > 0x1000000 && (!acEntry.IsZombie && (!acEntry.IsBot || acEntry.Faction == FactionType.Boss || acEntry.CharTypeName == "Guard"));
                            if (checkDBNO)
                            {
                                sc.PrepareReadValue<byte>(acEntry.DBNOComp + ABIOffsets.USGCharacterDBNO_bIsDBNO);
                                sc.PrepareReadValue<byte>(acEntry.DBNOComp + ABIOffsets.USGCharacterDBNO_bCanRescueSelf);
                                sc.PrepareReadValue<ulong>(acEntry.DBNOComp + ABIOffsets.USGCharacterDBNO_LeaveDBNORescuer);
                            }
                        }
                    }
                    sc.Execute();

                    now = Stopwatch.GetTimestamp();

                    // Read local health from scatter
                    if (queueLocalHealth && sc.ReadValue<HealthLimbPacket>(_localHealthSet + 0x48, out var localLimbs))
                    {
                        bool localDead = false;
                        if (localDeathComp > 0x1000000 && sc.ReadValue<byte>(localDeathComp + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD, out byte bLocalDead))
                        {
                            localDead = (bLocalDead != 0);
                        }

                        if (localDead)
                        {
                            LocalHealth = 0;
                            Array.Clear(LocalLimbHealth, 0, 7);
                        }
                        else
                        {
                            float totalH = 0, totalMax = 0;
                            unsafe
                            {
                                for (int j = 0; j < 7; j++)
                                {
                                    float cur = localLimbs.Values[j * 2];
                                    float max = localLimbs.Values[j * 2 + 1];
                                    if (max > 1f)
                                    {
                                        LocalLimbHealth[j] = MathF.Max(0f, cur);
                                        LocalLimbMax[j] = max;
                                        totalH += MathF.Max(0f, cur);
                                        totalMax += max;
                                    }
                                }
                            }
                            if (totalMax > 1f) { LocalHealth = totalH; LocalHealthMax = totalMax; }
                        }
                    }

                    if (actors == null || actors.Count == 0)
                    {
                        Sleep(2);
                        continue;
                    }

                    var bias = _originBias;
                    var posList = new List<ActorPos>(actors.Count);
                    int actorIdx = 0;
                    foreach (var a in actors)
                    {
                        try
                        {
                            if (!_actorCache.TryGetValue(a.Pawn, out var ac) || ac == null) { actorIdx++; continue; }
                            ulong r = ac.Root != 0 ? ac.Root : a.Root;
                            if (r < 0x100000) { actorIdx++; continue; }

                            Vector3 translation = default;

                            // 1. RelativeLocation (Primary: unencrypted or scatter-decrypted ACE)
                            if (sc.ReadValue<RelativeLocPacket>(r + 0x170, out var rel))
                            {
                                uint algo = rel.Ctl >> 29;
                                uint key = rel.Ctl & 0x1FFFFFF;

                                if (algo == 0)
                                {
                                    uint firstDword = BitConverter.SingleToUInt32Bits(rel.Location.X);
                                    if (firstDword != 0xFF8B6D2B && DmaMemory.IsValidCoordinate(rel.Location))
                                    {
                                        translation = rel.Location;
                                    }
                                }
                                else if (key != 0)
                                {
                                    if (ac.IsEncrypted && ac.AceKey == key && ac.AceDataPtr > 0x1000000 && ac.AceNodePtr > 0x1000000)
                                    {
                                        if (sc.ReadValue<DmaMemory.AceDword3>(ac.AceDataPtr, out var encRaw) &&
                                            sc.ReadValue<uint>(ac.AceNodePtr + 0x20, out uint curSeed))
                                        {
                                            var decT = DmaMemory.DecryptAceRelative(encRaw, ac.AceKey, curSeed);
                                            if (DmaMemory.IsValidCoordinate(decT))
                                            {
                                                translation = decT;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        // Key changed or unindexed node: lookup ACE node and cache it
                                        if (DmaMemory.TryGetAceNode(key, out var node) && node.DataPtr > 0x1000000)
                                        {
                                            ac.AceKey = key;
                                            ac.AceNodePtr = node.NodePtr;
                                            ac.AceDataPtr = node.DataPtr;
                                            ac.IsEncrypted = true;

                                            uint curSeed = DmaMemory.Read<uint>(node.NodePtr + 0x20);
                                            var encRaw = DmaMemory.Read<DmaMemory.AceDword3>(node.DataPtr);
                                            var decT = DmaMemory.DecryptAceRelative(encRaw, key, curSeed);
                                            if (DmaMemory.IsValidCoordinate(decT))
                                            {
                                                translation = decT;
                                            }
                                        }
                                    }
                                }
                            }

                            // 2. Fast-path: Unencrypted C2W Translation (fallback if RelLoc unencrypted was invalid)
                            if (translation == default && sc.ReadValue<C2WPacket>(r + 0x220, out var c2w) && (c2w.Ctl >> 29) == 0)
                            {
                                var t = c2w.Transform.Translation;
                                if (DmaMemory.IsValidCoordinate(t))
                                {
                                    translation = t;
                                }
                            }

                            // 3. Fallback: Full synchronous ACE Decryption (Tiered: RelLoc first, C2W second)
                            if (translation == default)
                            {
                                translation = DmaMemory.DecryptActorPosition(r);
                            }

                            Vector3 pos;
                            if (translation != default)
                            {
                                pos = translation + bias;
                                ac.LastValidPosition = pos;
                                ac.LastValidStamp = now;
                            }
                            else if (ac.LastValidPosition != default)
                            {
                                float dtSec = (float)(now - ac.LastValidStamp) / Stopwatch.Frequency;
                                if (dtSec >= 0f && dtSec < 0.3f)
                                {
                                    pos = ac.LastValidPosition + (ac.LastVelocity * dtSec);
                                }
                                else if (dtSec < 1.5f)
                                {
                                    pos = ac.LastValidPosition;
                                }
                                else
                                {
                                    // Expired after 1.5 seconds - drop stale frozen position
                                    actorIdx++;
                                    continue;
                                }
                            }
                            else
                            {
                                actorIdx++;
                                continue;
                            }

                            if (pos == default || pos.LengthSquared() < 100f)
                            {
                                actorIdx++;
                                continue;
                            }

                            // STRICT UNDER-MAP & STAGING POOL FILTER
                            if (!float.IsFinite(pos.X) || !float.IsFinite(pos.Y) || !float.IsFinite(pos.Z) ||
                                pos.Z < -5000f || pos.Z > 100000f ||
                                (MathF.Abs(pos.X - 10198f) < 100f && MathF.Abs(pos.Y - (-453f)) < 100f) ||
                                (MathF.Abs(pos.X - 2333f) < 100f && MathF.Abs(pos.Y - (-12316f)) < 100f && MathF.Abs(pos.Z - (-1870f)) < 100f) ||
                                (MathF.Abs(pos.X - 28977f) < 100f && MathF.Abs(pos.Y - (-20499f)) < 100f && MathF.Abs(pos.Z - (-2412f)) < 100f))
                            {
                                actorIdx++;
                                continue;
                            }

                            float health = 0, healthMax = 0;
                            bool hasSet = false;
                            bool isDead = false;

                            if (ac.IsZombie)
                            {
                                if (ac.HealthSet > 0x1000000 && sc.ReadValue<ZombieHealthPacket>(ac.HealthSet + 0x58, out var zHp))
                                {
                                    health = MathF.Max(0f, zHp.CurValue);
                                    healthMax = zHp.MaxValue > 1f ? zHp.MaxValue : (zHp.MaxBase > 1f ? zHp.MaxBase : 100f);
                                    hasSet = healthMax > 1f;
                                }

                                sc.ReadValue<byte>(a.Pawn + ABIOffsets.ASGZombieCharacter_bIsDead, out byte bDead);
                                sc.ReadValue<byte>(a.Pawn + ABIOffsets.ASGZombieCharacter_bOnDieActivated, out byte bOnDie);
                                if (bDead != 0 || bOnDie != 0) isDead = true;

                                if (!hasSet)
                                {
                                    health = 100f;
                                    healthMax = 100f;
                                    hasSet = true;
                                }

                                if (!isDead && healthMax > 1f && health <= 0f) isDead = true;
                            }
                            else if (a.Faction == FactionType.Dummy)
                            {
                                health = 100f;
                                healthMax = 100f;
                                hasSet = true;
                            }
                            else if (ac.HealthSet != 0 && sc.ReadValue<HealthLimbPacket>(ac.HealthSet + 0x48, out var limbData))
                            {
                                unsafe
                                {
                                    for (int j = 0; j < 7; j++)
                                    {
                                        float cur = limbData.Values[j * 2];
                                        float max = limbData.Values[j * 2 + 1];
                                        if (max > 1f)
                                        {
                                            health += MathF.Max(0f, cur);
                                            healthMax += max;
                                        }
                                    }
                                }
                                hasSet = healthMax > 1f;

                                if (a.DeathComp != 0) { sc.ReadValue<byte>(a.DeathComp + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD, out byte bDead); isDead = bDead != 0; }
                                if (!isDead && healthMax > 1f && health <= 0f) isDead = true;
                            }
                            else
                            {
                                if (a.DeathComp != 0) { sc.ReadValue<byte>(a.DeathComp + (ulong)ABIOffsetsExt.OFF_DEATHCOMP_BISDEAD, out byte bDead); isDead = bDead != 0; }
                            }

                            bool isVisible = false;
                            if (a.Mesh != 0 && sc.ReadValue<MeshTimersPacket>(a.Mesh + ABIOffsetsExt.OFF_MESH_TIMERS, out var timers))
                            {
                                isVisible = (timers.LastSubmit - timers.LastOnScreen) >= 0f && (timers.LastSubmit - timers.LastOnScreen) < ABIOffsetsExt.VIS_TICK;
                            }

                            bool isDowned = false;
                            bool canRescueSelf = false;
                            bool isBeingRevived = false;
                            if (ac.DBNOComp > 0x1000000)
                            {
                                if (sc.ReadValue<byte>(ac.DBNOComp + ABIOffsets.USGCharacterDBNO_bIsDBNO, out byte bDown))
                                    isDowned = (bDown != 0);
                                if (sc.ReadValue<byte>(ac.DBNOComp + ABIOffsets.USGCharacterDBNO_bCanRescueSelf, out byte bRescue))
                                    canRescueSelf = (bRescue != 0);
                                if (sc.ReadValue<ulong>(ac.DBNOComp + ABIOffsets.USGCharacterDBNO_LeaveDBNORescuer, out ulong rescuer))
                                    isBeingRevived = isDowned && (rescuer > 0x1000000);
                            }

                            Vector3 velocity = default;
                            if (a.MovementComp != 0) sc.ReadValue<Vector3>(a.MovementComp + ABIOffsets.UMovementComponent_Velocity, out velocity);
                            ac.LastVelocity = velocity;
                            _actorCache[a.Pawn] = ac;

                            posList.Add(new ActorPos {
                                Pawn = a.Pawn, Position = pos, Velocity = velocity, Health = health, HealthMax = healthMax,
                                IsDead = isDead, IsVisible = isVisible, IsTeam = a.Faction == FactionType.Team, IsZombie = ac.IsZombie,
                                Faction = a.Faction, TeamId = a.Team,
                                DmaStamp = now,
                                Name = !string.IsNullOrEmpty(ac.Name) ? ac.Name : (!string.IsNullOrEmpty(a.Name) ? a.Name : "Unknown"),
                                IsBot = ac.IsBot || a.IsBot,
                                CharTypeName = ac.CharTypeName,
                                WeaponName = ac.LastWeaponName, CurAmmo = ac.LastCurAmmo, MaxAmmo = ac.LastMaxAmmo,
                                Caliber = ac.LastCaliber ?? "", AmmoName = ac.LastAmmoName ?? "", AmmoTier = ac.LastAmmoTier,
                                IsReloading = ac.LastIsReloading, IsDowned = isDowned, CanSelfRevive = canRescueSelf,
                                IsBeingRevived = isBeingRevived,
                                IsCookingGrenade = ac.LastIsCookingGrenade,
                                VestLevel = ac.LastVestLevel, VestDurability = ac.LastVestDurability, VestMaxDurability = ac.LastVestMaxDurability, IsArmoredRig = false,
                                HelmetLevel = ac.LastHelmetLevel, HelmetDurability = ac.LastHelmetDurability, HelmetMaxDurability = ac.LastHelmetMaxDurability,
                                InventoryValue = ac.LastInventoryValue, GearList = ac.LastGearList
                            });
                            actorIdx++;
                        }
                        catch { actorIdx++; }
                    }
                    ActorPositions = posList;
                    LastPositionsStamp = now;
                    LogPlayerLocationsIfNeeded();
                    Interlocked.Increment(ref _frameSeq);
                    _frameBuf = new Frame {
                        Cam = Camera,
                        Local = LocalPosition,
                        Positions = posList,
                        Skeletons = null,
                        Stamp = now,
                        DmaStamp = now
                    };
                    Interlocked.Increment(ref _frameSeq);
                }
                catch { }
                Thread.Sleep(0);
            }
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  HEAVY STATS LOOP - Ammo, Armor, Weapons
        // /////////////////////////////////////////////////////////////////////////////////////

        private static void CacheHeavyStatsLoop()
        {
            while (_running)
            {
                try
                {
                    List<ABIPlayer> actors;
                    lock (Sync) actors = ActorList.Count == 0 ? null : new List<ABIPlayer>(ActorList);
                    ulong localPawn = LocalPawn;
                    if ((actors == null || actors.Count == 0) && localPawn <= 0x1000000) { Sleep(100); continue; }

                    var posSnapshot = ActorPositions;
                    var posMap = new Dictionary<ulong, ActorPos>(posSnapshot?.Count ?? 0);
                    if (posSnapshot != null) foreach (var p in posSnapshot) posMap[p.Pawn] = p;

                    var activeActors = (actors != null ? actors.Where(a => {
                        if (a.Faction == FactionType.Team) return true;
                        if (posMap.TryGetValue(a.Pawn, out var ap))
                            return Vector3.Distance(LocalPosition, ap.Position) / 100f < 1000f;
                        return true;
                    }).ToList() : new List<ABIPlayer>());

                    // Include local pawn in the active actors list for batched processing
                    if (localPawn > 0x1000000 && !activeActors.Any(a => a.Pawn == localPawn))
                    {
                        ulong localArmorMgr = 0;
                        if (_actorCache.TryGetValue(localPawn, out var lac) && lac != null) localArmorMgr = lac.ArmorMgr;
                        var localAc = new ABIPlayer(localPawn, 0, 0, "Local", false, 0, 0, 0, LocalTeam, FactionType.Team, false, LocalInvMgr, localArmorMgr, 0, 0);
                        activeActors.Add(localAc);
                    }

                    if (activeActors.Count == 0) { Sleep(100); continue; }

                    // Stage 1: Managers
                    using var scMgr = DmaMemory.CreateScatter();
                    foreach (var a in activeActors)
                    {
                        scMgr.PrepareReadValue<ulong>(a.Pawn + ABIOffsets.ASGCharacter_WeaponManager);
                        scMgr.PrepareReadValue<ulong>(a.Pawn + ABIOffsets.ASGCharacter_ArmorManager);
                        if (a.InvMgr == 0) scMgr.PrepareReadValue<ulong>(a.Pawn + ABIOffsets.ASGCharacter_InventoryManager);
                    }
                    scMgr.Execute();

                    var wMgrs = new ulong[activeActors.Count];
                    var aMgrs = new ulong[activeActors.Count];
                    var iMgrs = new ulong[activeActors.Count];

                    for (int i = 0; i < activeActors.Count; i++)
                    {
                        scMgr.ReadValue<ulong>(activeActors[i].Pawn + ABIOffsets.ASGCharacter_WeaponManager, out wMgrs[i]);
                        scMgr.ReadValue<ulong>(activeActors[i].Pawn + ABIOffsets.ASGCharacter_ArmorManager, out aMgrs[i]);
                        if (activeActors[i].InvMgr == 0) 
                            scMgr.ReadValue<ulong>(activeActors[i].Pawn + ABIOffsets.ASGCharacter_InventoryManager, out iMgrs[i]);
                        else 
                            iMgrs[i] = activeActors[i].InvMgr;
                    }

                    // Stage 2: Weapons and Armor Arrays
                    using var sc2 = DmaMemory.CreateScatter();
                    for (int i = 0; i < activeActors.Count; i++)
                    {
                        if (wMgrs[i] > 0x1000000) sc2.PrepareReadValue<ulong>(wMgrs[i] + ABIOffsetsExt.OFF_WEAPON_CURRENT);
                        if (aMgrs[i] > 0x1000000)
                        {
                            ulong arrPtr = aMgrs[i] + ABIOffsetsExt.OFF_ARMOR_LIST;
                            sc2.PrepareReadValue<ulong>(arrPtr);
                            sc2.PrepareReadValue<int>(arrPtr + 0x8);
                        }
                        if (iMgrs[i] > 0x1000000)
                        {
                            ulong arrPtr = iMgrs[i] + ABIOffsets.USGCharacterInventoryManagerComponent_InventoryArray;
                            sc2.PrepareReadValue<ulong>(arrPtr);
                            sc2.PrepareReadValue<int>(arrPtr + 0x8);
                        }
                    }
                    sc2.Execute();

                    var curWeps = new ulong[activeActors.Count];
                    var armorListData = new ulong[activeActors.Count];
                    var armorListCount = new int[activeActors.Count];
                    var invListData = new ulong[activeActors.Count];
                    var invListCount = new int[activeActors.Count];

                    for (int i = 0; i < activeActors.Count; i++)
                    {
                        if (wMgrs[i] > 0x1000000) sc2.ReadValue<ulong>(wMgrs[i] + ABIOffsetsExt.OFF_WEAPON_CURRENT, out curWeps[i]);
                        if (aMgrs[i] > 0x1000000)
                        {
                            ulong arrPtr = aMgrs[i] + ABIOffsetsExt.OFF_ARMOR_LIST;
                            sc2.ReadValue<ulong>(arrPtr, out armorListData[i]);
                            sc2.ReadValue<int>(arrPtr + 0x8, out armorListCount[i]);
                        }
                        if (iMgrs[i] > 0x1000000)
                        {
                            ulong arrPtr = iMgrs[i] + ABIOffsets.USGCharacterInventoryManagerComponent_InventoryArray;
                            sc2.ReadValue<ulong>(arrPtr, out invListData[i]);
                            sc2.ReadValue<int>(arrPtr + 0x8, out invListCount[i]);
                        }
                    }

                    // Process Local Player Fast Path for Ammo (since chain is deep, we use sequential helper but now others are faster)
                    // We will batch process Armor and Inventory though.

                    // Read Armor Pointers and Inventory Pointers
                    var allArmorPtrs = new List<(int pIndex, ulong ptr)>();
                    var allInvPtrs = new List<(int pIndex, ulong ptr)>();

                    // Read arrays (small reads)
                    for (int i = 0; i < activeActors.Count; i++)
                    {
                        if (armorListData[i] > 0x1000000 && armorListCount[i] > 0 && armorListCount[i] < 20)
                        {
                            var ptrs = DmaMemory.ReadArray<ulong>(armorListData[i], armorListCount[i]);
                            if (ptrs != null) foreach (var p in ptrs) if (p > 0x1000000) allArmorPtrs.Add((i, p));
                        }
                        if (invListData[i] > 0x1000000 && invListCount[i] > 0 && invListCount[i] < 200)
                        {
                            var ptrs = DmaMemory.ReadArray<ulong>(invListData[i], invListCount[i]);
                            if (ptrs != null) foreach (var p in ptrs) if (p > 0x1000000) allInvPtrs.Add((i, p));
                        }
                    }

                    // Stage 3: Armor and Inventory Info via Scatter
                    var armorDetails = new Dictionary<ulong, (int level, float dur, float max)>();
                    var invDetails = new Dictionary<ulong, int>();

                    const int BATCH_SIZE = 512;
                    for (int b = 0; b < allArmorPtrs.Count; b += BATCH_SIZE)
                    {
                        int end = Math.Min(b + BATCH_SIZE, allArmorPtrs.Count);
                        using var scA = DmaMemory.CreateScatter();
                        for (int i = b; i < end; i++)
                        {
                            ulong aPtr = allArmorPtrs[i].ptr;
                            scA.PrepareReadValue<ulong>(aPtr + ABIOffsetsExt.OFF_ARMOR_TYPE_COMP);
                            scA.PrepareReadValue<int>(aPtr + ABIOffsetsExt.OFF_ARMOR_LEVEL);
                            scA.PrepareReadValue<ulong>(aPtr + ABIOffsetsExt.OFF_ARMOR_COMMON_DATA);
                        }
                        scA.Execute();

                        using var scA2 = DmaMemory.CreateScatter();
                        var aComps = new ulong[end - b];
                        var aDatas = new ulong[end - b];
                        var aLevels = new int[end - b];

                        for (int i = b; i < end; i++)
                        {
                            ulong aPtr = allArmorPtrs[i].ptr;
                            int idx = i - b;
                            scA.ReadValue<ulong>(aPtr + ABIOffsetsExt.OFF_ARMOR_TYPE_COMP, out aComps[idx]);
                            scA.ReadValue<int>(aPtr + ABIOffsetsExt.OFF_ARMOR_LEVEL, out aLevels[idx]);
                            scA.ReadValue<ulong>(aPtr + ABIOffsetsExt.OFF_ARMOR_COMMON_DATA, out aDatas[idx]);

                            if (aComps[idx] > 0x1000000) scA2.PrepareReadValue<byte>(aComps[idx] + ABIOffsetsExt.OFF_ARMOR_TYPE_VAL);
                            if (aDatas[idx] > 0x1000000)
                            {
                                scA2.PrepareReadValue<float>(aDatas[idx] + ABIOffsetsExt.OFF_ARMOR_DURABILITY);
                                scA2.PrepareReadValue<float>(aDatas[idx] + ABIOffsetsExt.OFF_ARMOR_DURABILITY_MAX);
                            }
                        }
                        scA2.Execute();

                        for (int i = b; i < end; i++)
                        {
                            int idx = i - b;
                            byte type = 0; float dur = 0, max = 0;
                            if (aComps[idx] > 0x1000000) scA2.ReadValue<byte>(aComps[idx] + ABIOffsetsExt.OFF_ARMOR_TYPE_VAL, out type);
                            if (aDatas[idx] > 0x1000000)
                            {
                                scA2.ReadValue<float>(aDatas[idx] + ABIOffsetsExt.OFF_ARMOR_DURABILITY, out dur);
                                scA2.ReadValue<float>(aDatas[idx] + ABIOffsetsExt.OFF_ARMOR_DURABILITY_MAX, out max);
                            }
                            if (type == 1 || type == 2) armorDetails[allArmorPtrs[i].ptr] = (type == 1 ? -aLevels[idx] : aLevels[idx], dur, max); // negative for helmet to distinguish
                        }
                    }

                    for (int b = 0; b < allInvPtrs.Count; b += BATCH_SIZE)
                    {
                        int end = Math.Min(b + BATCH_SIZE, allInvPtrs.Count);
                        using var scI = DmaMemory.CreateScatter();
                        for (int i = b; i < end; i++) scI.PrepareReadValue<ulong>(allInvPtrs[i].ptr + ABIOffsets.ASGInventory_CommonDataComponent);
                        scI.Execute();

                        using var scI2 = DmaMemory.CreateScatter();
                        var iDatas = new ulong[end - b];
                        for (int i = b; i < end; i++)
                        {
                            scI.ReadValue<ulong>(allInvPtrs[i].ptr + ABIOffsets.ASGInventory_CommonDataComponent, out iDatas[i - b]);
                            if (iDatas[i - b] > 0x1000000) scI2.PrepareReadValue<int>(iDatas[i - b] + ABIOffsets.USGInventoryCommonDataComponent_StandardPrice);
                        }
                        scI2.Execute();

                        for (int i = b; i < end; i++)
                        {
                            int price = 0;
                            if (iDatas[i - b] > 0x1000000) scI2.ReadValue<int>(iDatas[i - b] + ABIOffsets.USGInventoryCommonDataComponent_StandardPrice, out price);
                            if (price > 0 && price < 10000000) invDetails[allInvPtrs[i].ptr] = price;
                        }
                    }

                    // Apply results
                    for (int i = 0; i < activeActors.Count; i++)
                    {
                        var a = activeActors[i];
                        bool isLocal = a.Pawn == localPawn;

                        // Ammo & Weapon & Cooking Grenade Detection
                        int curAmmo = 0, maxAmmo = 0;
                        string wepName = "Unarmed";
                        string caliber = "";
                        string ammoName = "";
                        int ammoTier = 0;
                        bool isReloading = false;
                        bool isCooking = false;

                        if (curWeps[i] > 0x1000000)
                        {
                            uint oid = DmaMemory.Read<uint>(curWeps[i] + ABIOffsets.UObject_ObjectId);
                            wepName = CleanWeaponName(ABINamePool.GetName(oid));

                            // Grenade Cooking Detection
                            if (!string.IsNullOrEmpty(wepName) &&
                                (wepName.Contains("Grenade", StringComparison.OrdinalIgnoreCase) ||
                                 wepName.Contains("Throw", StringComparison.OrdinalIgnoreCase) ||
                                 wepName.Contains("Molotov", StringComparison.OrdinalIgnoreCase)))
                            {
                                byte hasFired = DmaMemory.Read<byte>(curWeps[i] + ABIOffsets.ABP_ThrowWeapon_bHasFired);
                                isCooking = (hasFired == 0);
                            }

                            // S7 Player-only Ammo, Caliber, Tier & Reload Detection (strictly human players & local)
                            if (!a.IsBot || a.Faction == FactionType.Team || isLocal)
                            {
                                var ammoDetails = ReadPlayerAmmoDetails(curWeps[i], a.Mesh);
                                curAmmo = ammoDetails.CurAmmo;
                                maxAmmo = ammoDetails.MaxAmmo;
                                caliber = ammoDetails.Caliber;
                                ammoName = ammoDetails.AmmoName;
                                ammoTier = ammoDetails.AmmoTier;
                                isReloading = ammoDetails.IsReloading;
                            }
                            else
                            {
                                var ammo = ReadAmmo(curWeps[i]);
                                curAmmo = ammo.current; maxAmmo = ammo.max;
                            }
                        }

                        // Armor
                        int vLvl = 0, hLvl = 0;
                        float vDur = 0f, vMax = 0f, hDur = 0f, hMax = 0f;
                        foreach (var ap in allArmorPtrs.Where(x => x.pIndex == i))
                        {
                            if (armorDetails.TryGetValue(ap.ptr, out var det))
                            {
                                if (det.level < 0 && -det.level >= hLvl) { hLvl = -det.level; hDur = det.dur; hMax = det.max; }
                                else if (det.level > 0 && det.level >= vLvl) { vLvl = det.level; vDur = det.dur; vMax = det.max; }
                            }
                        }

                        // Inventory
                        int totalValue = 0;
                        var gear = new List<(string name, int value)>();
                        foreach (var ip in allInvPtrs.Where(x => x.pIndex == i))
                        {
                            if (invDetails.TryGetValue(ip.ptr, out var price))
                            {
                                totalValue += price;
                                if (price >= ABIGameConfig.GlobalGearMin) {
                                    uint oid = DmaMemory.Read<uint>(ip.ptr + ABIOffsets.UObject_ObjectId);
                                    string name = CleanWeaponName(ABINamePool.GetName(oid));
                                    gear.Add((name, price));
                                }
                            }
                        }
                        if (gear.Count > 10) { gear.Sort((x, y) => y.value.CompareTo(x.value)); gear = gear.Take(10).ToList(); }

                        if (isLocal)
                        {
                            LocalCurAmmo = curAmmo;
                            LocalMaxAmmo = maxAmmo;
                            LocalVestLevel = vLvl;
                            LocalVestDurability = vDur;
                            LocalVestMaxDurability = vMax;
                            LocalHelmetLevel = hLvl;
                            LocalHelmetDurability = hDur;
                            LocalHelmetMaxDurability = hMax;
                        }

                        if (!_actorCache.TryGetValue(a.Pawn, out var ac) || ac == null)
                        {
                            ac = new ActorCacheEntry { Pawn = a.Pawn };
                        }
                        ac.LastWeaponName = wepName;
                        ac.LastCurAmmo = curAmmo; ac.LastMaxAmmo = maxAmmo;
                        ac.LastCaliber = caliber;
                        ac.LastAmmoName = ammoName;
                        ac.LastAmmoTier = ammoTier;
                        ac.LastIsReloading = isReloading;
                        ac.LastIsCookingGrenade = isCooking;
                        ac.LastVestLevel = vLvl; ac.LastVestDurability = vDur; ac.LastVestMaxDurability = vMax;
                        ac.LastHelmetLevel = hLvl; ac.LastHelmetDurability = hDur; ac.LastHelmetMaxDurability = hMax;
                        ac.LastInventoryValue = totalValue; ac.LastGearList = gear;
                        _actorCache[a.Pawn] = ac;
                    }
                }
                catch { }
                Sleep(100);
            }
        }

        private static string CleanWeaponName(string name)
        {
            if (string.IsNullOrEmpty(name) || name == "None") return "Unarmed";
            string s = name;
            string[] prefixes = { "Weapon_", "WPN_", "BP_", "SGWeapon_", "Item_" };
            foreach (var pre in prefixes) if (s.StartsWith(pre, StringComparison.Ordinal)) { s = s.Substring(pre.Length); break; }
            if (s.Contains("_C")) s = s.Replace("_C", "");
            if (s.Contains("_Uam")) s = s.Replace("_Uam", "");
            return s.Replace("_", " ").Trim();
        }

        public static PlayerAmmoInfo ReadPlayerAmmoDetails(ulong curWep, ulong mesh = 0)
        {
            var info = new PlayerAmmoInfo { Caliber = "", AmmoName = "", AmmoTier = 0, CurAmmo = 0, MaxAmmo = 0, IsReloading = false };
            if (curWep < 0x1000000) return info;

            try
            {
                // 1. Direct Ammo & Live Reload State from USGWeaponAmmoComponent (+0x0C50)
                ulong ammoComp = DmaMemory.Read<ulong>(curWep + ABIOffsets.ASGWeapon_WeaponAmmoComp);
                if (ammoComp > 0x1000000)
                {
                    info.IsReloading = DmaMemory.Read<bool>(ammoComp + ABIOffsets.USGWeaponAmmoComp_bIsReloading);
                    int liveCur = DmaMemory.Read<int>(ammoComp + ABIOffsets.USGWeaponAmmoComp_CurAmmo);
                    int liveMax = DmaMemory.Read<int>(ammoComp + ABIOffsets.USGWeaponAmmoComp_MaxAmmo);
                    if (liveCur >= 0 && liveCur <= 150) info.CurAmmo = liveCur;
                    if (liveMax > 0 && liveMax <= 150) info.MaxAmmo = liveMax;
                }

                // Fallback Live Reload State from Character AnimInstance (FSGCharacterAnimInstanceProxyBase::bIsReloading at +0x0B52)
                if (!info.IsReloading && mesh > 0x1000000)
                {
                    ulong animInst = DmaMemory.Read<ulong>(mesh + ABIOffsets.USkeletalMeshComponent_AnimScriptInstance);
                    if (animInst > 0x1000000)
                    {
                        info.IsReloading = DmaMemory.Read<bool>(animInst + ABIOffsets.USGCharacterAnimInstance_bIsReloading);
                    }
                }

                // 2. Resolve Magazine Assembly via USGWeaponAssembleComponent (0xBD0)
                ulong assemble = DmaMemory.Read<ulong>(curWep + ABIOffsets.ASGWeapon_WeaponAssembleComp);
                if (assemble < 0x1000000) assemble = DmaMemory.Read<ulong>(curWep + ABIOffsets.ASGWeapon_WeaponAssembleComp_Legacy);
                if (assemble < 0x1000000) assemble = DmaMemory.Read<ulong>(curWep + ABIOffsets.ASGWeapon_WeaponAssembleComp_Alt);
                if (assemble < 0x1000000) assemble = DmaMemory.Read<ulong>(curWep + ABIOffsetsExt.OFF_WEAPON_ASSEMBLE_COMP);
                if (assemble < 0x1000000) return info;

                ulong magazine = DmaMemory.Read<ulong>(assemble + ABIOffsets.USGWeaponAssembleComponent_CachedMagazine);
                if (magazine < 0x1000000) magazine = DmaMemory.Read<ulong>(assemble + ABIOffsetsExt.OFF_CACHED_MAGAZINE);
                if (magazine < 0x1000000) return info;

                ulong container = DmaMemory.Read<ulong>(magazine + ABIOffsets.SGWeaponContainer);
                if (container < 0x1000000) container = DmaMemory.Read<ulong>(magazine + ABIOffsetsExt.OFF_SG_WEAPON_CONTAINER);
                if (container < 0x1000000) return info;

                // 3. Max Ammo (MaxStackCount at +0x0120)
                info.MaxAmmo = DmaMemory.Read<int>(container + ABIOffsets.USGWeaponContainer_MaxStack);

                // 4. Resolve Caliber String from CaliberClass (+0x0100)
                ulong caliberClass = DmaMemory.Read<ulong>(container + ABIOffsets.USGWeaponContainer_CaliberClass);
                if (caliberClass > 0x1000000)
                {
                    uint calNameId = DmaMemory.Read<uint>(caliberClass + ABIOffsets.UObject_ObjectId);
                    info.Caliber = CleanCaliberName(ABINamePool.GetName(calNameId));
                }

                // 5. Resolve Ammo Name & Tier from DefaultBulletClass (+0x0108)
                ulong bulletClass = DmaMemory.Read<ulong>(container + ABIOffsets.USGWeaponContainer_DefaultBulletClass);
                if (bulletClass > 0x1000000)
                {
                    uint bulletNameId = DmaMemory.Read<uint>(bulletClass + ABIOffsets.UObject_ObjectId);
                    info.AmmoName = CleanAmmoName(ABINamePool.GetName(bulletNameId), out info.AmmoTier);
                }

                // 6. Current Ammo count from ContainDataList (+0x0208)
                ulong data = DmaMemory.Read<ulong>(container + ABIOffsets.USGWeaponContainer_ContainList);
                int count  = DmaMemory.Read<int>(container + ABIOffsets.USGWeaponContainer_ContainList + 0x8);
                if (data > 0x1000000 && count > 0 && count < 50)
                {
                    int total = 0;
                    for (int i = 0; i < count; i++)
                    {
                        // Check primary stride 0x10 (sizeof(FBulletContainerInfo) == 16), fallback 0x18
                        int stack = DmaMemory.Read<int>(data + (ulong)(i * 0x10) + ABIOffsets.FBulletContainerInfo_StackCount);
                        if (stack <= 0 || stack > 150)
                            stack = DmaMemory.Read<int>(data + (ulong)(i * 0x18) + ABIOffsets.FBulletContainerInfo_StackCount);
                        if (stack > 0 && stack <= 150) total += stack;
                    }
                    info.CurAmmo = total;
                }
            }
            catch { }

            return info;
        }

        private static string CleanCaliberName(string raw)
        {
            if (string.IsNullOrEmpty(raw)) return "";
            return raw.Replace("BP_Caliber_", "")
                      .Replace("_Uam_C", "")
                      .Replace("_C", "")
                      .Trim();
        }

        private static string CleanAmmoName(string raw, out int tier)
        {
            tier = 0;
            if (string.IsNullOrEmpty(raw)) return "";

            string s = raw.Replace("BP_", "").Replace("_Uam_C", "").Replace("_C", "");
            int lastUnder = s.LastIndexOf('_');
            string name = (lastUnder >= 0 && lastUnder < s.Length - 1) ? s.Substring(lastUnder + 1) : s;

            string upper = name.ToUpperInvariant();
            if (upper.Contains("M61") || upper.Contains("M995") || upper.Contains("SNB") || upper.Contains("7N39") || upper.Contains("AP SX"))
                tier = 6;
            else if (upper.Contains("M80") || upper.Contains("M62") || upper.Contains("BS") || upper.Contains("SS190") || upper.Contains("7N31"))
                tier = 5;
            else if (upper.Contains("M855A1") || upper.Contains("BT") || upper.Contains("AP63") || upper.Contains("AP6.3") || upper.Contains("LPS"))
                tier = 4;
            else if (upper.Contains("M855") || upper.Contains("BP") || upper.Contains("T45M") || upper.Contains("PST"))
                tier = 3;
            else if (upper.Contains("FMJ") || upper.Contains("HP") || upper.Contains("PSO"))
                tier = 1;

            return name;
        }

        private static (int current, int max) ReadAmmo(ulong curWep)
        {
            try {
                ulong assemble = DmaMemory.Read<ulong>(curWep + ABIOffsetsExt.OFF_WEAPON_ASSEMBLE_COMP);
                if (assemble < 0x1000000) assemble = DmaMemory.Read<ulong>(curWep + ABIOffsetsExt.OFF_WEAPON_ASSEMBLE_COMP_LEGACY);
                if (assemble < 0x1000000) assemble = DmaMemory.Read<ulong>(curWep + ABIOffsetsExt.OFF_WEAPON_ASSEMBLE_COMP_BP);
                if (assemble < 0x1000000) return (-1, -1);
                ulong magazine = DmaMemory.Read<ulong>(assemble + ABIOffsetsExt.OFF_CACHED_MAGAZINE);
                if (magazine < 0x1000000) return (0, 0);
                ulong container = DmaMemory.Read<ulong>(magazine + ABIOffsetsExt.OFF_SG_WEAPON_CONTAINER);
                if (container < 0x1000000) return (0, 0);

                int max = DmaMemory.Read<int>(container + ABIOffsetsExt.OFF_MAX_STACK);
                ulong arrPtr = container + ABIOffsetsExt.OFF_CONTAIN_LIST;
                ulong data = DmaMemory.Read<ulong>(arrPtr);
                int count = DmaMemory.Read<int>(arrPtr + 0x8);

                int total = 0;
                if (data > 0x1000000 && count > 0 && count < 50)
                {
                    for (int i = 0; i < count; i++)
                    {
                        int stack = DmaMemory.Read<int>(data + (ulong)(i * 0x10) + (ulong)ABIOffsetsExt.OFF_STACK_COUNT);
                        if (stack <= 0 || stack > 150)
                            stack = DmaMemory.Read<int>(data + (ulong)(i * 0x18) + (ulong)ABIOffsetsExt.OFF_STACK_COUNT);
                        if (stack > 0 && stack <= 150) total += stack;
                    }
                }
                return (total, max);
            } catch { return (0, 0); }
        }

        private static (int vestLevel, float vestDur, float vestMax, int helmLevel, float helmDur, float helmMax) ReadArmorInfo(ulong armorMgr)
        {
            try {
                ulong arrPtr = armorMgr + ABIOffsetsExt.OFF_ARMOR_LIST;
                ulong data = DmaMemory.Read<ulong>(arrPtr);
                int count = DmaMemory.Read<int>(arrPtr + 0x8);
                if (data < 0x1000000 || count <= 0 || count > 20) return (0, 0f, 0f, 0, 0f, 0f);

                ulong[] ptrs = DmaMemory.ReadArray<ulong>(data, count);
                if (ptrs == null) return (0, 0f, 0f, 0, 0f, 0f);

                int vLvl = 0, hLvl = 0;
                float vDur = 0f, vMax = 0f, hDur = 0f, hMax = 0f;

                foreach (var armor_ptr in ptrs)
                {
                    if (armor_ptr < 0x1000000) continue;
                    
                    ulong typeComp = DmaMemory.Read<ulong>(armor_ptr + ABIOffsetsExt.OFF_ARMOR_TYPE_COMP);
                    if (typeComp < 0x1000000) typeComp = DmaMemory.Read<ulong>(armor_ptr + 0x830);
                    if (typeComp < 0x1000000) continue;
                    byte type = DmaMemory.Read<byte>(typeComp + ABIOffsetsExt.OFF_ARMOR_TYPE_VAL);

                    // 1 = Helmet, 2 = Vest / Armored Rig
                    if (type != 1 && type != 2) continue;

                    int level = DmaMemory.Read<int>(armor_ptr + ABIOffsetsExt.OFF_ARMOR_LEVEL);
                    if (level <= 0 || level > 10) level = DmaMemory.Read<int>(armor_ptr + 0x6C8);
                    
                    ulong common_data = DmaMemory.Read<ulong>(armor_ptr + ABIOffsetsExt.OFF_ARMOR_COMMON_DATA);
                    if (common_data < 0x1000000) common_data = DmaMemory.Read<ulong>(armor_ptr + 0x760);
                    float currentDur = 0f, maxDur = 0f;
                    if (common_data > 0x1000000)
                    {
                        currentDur = DmaMemory.Read<float>(common_data + ABIOffsetsExt.OFF_ARMOR_DURABILITY);
                        maxDur = DmaMemory.Read<float>(common_data + ABIOffsetsExt.OFF_ARMOR_DURABILITY_MAX);
                    }

                    if (type == 1 && level >= hLvl)
                    {
                        hLvl = level; hDur = currentDur; hMax = maxDur;
                    }
                    else if (type == 2 && level >= vLvl)
                    {
                        vLvl = level; vDur = currentDur; vMax = maxDur;
                    }
                }
                return (vLvl, vDur, vMax, hLvl, hDur, hMax);
            } catch { return (0, 0f, 0f, 0, 0f, 0f); }
        }

        private static Vector3 ReadActorPos(ulong root)
        {
            if (root < 0x1000000) return default;
            return DmaMemory.DecryptActorPosition(root) + _originBias;
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  FRAME PULSE
        // /////////////////////////////////////////////////////////////////////////////////////

        private static void FramePulseLoop()
        {
            while (_running)
            {
                try
                {
                    var positions = ActorPositions;
                    if (positions == null || positions.Count == 0) { Sleep(1); continue; }
                    Interlocked.Increment(ref _frameSeq);
                    _frameBuf = new Frame {
                        Cam = Camera,
                        Local = LocalPosition,
                        Positions = positions,
                        Skeletons = null,
                        Stamp = LastPositionsStamp > 0 ? LastPositionsStamp : Stopwatch.GetTimestamp(),
                        DmaStamp = LastPositionsStamp
                    };
                    Interlocked.Increment(ref _frameSeq);
                }
                catch { }
                Sleep(1);
            }
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  SKELETON CACHE LOOP - High Priority Butter-Smooth Bones & Zero-Allocation Pipeline
        // /////////////////////////////////////////////////////////////////////////////////////

        private struct SkelCandidate
        {
            public ABIPlayer Player;
            public bool IsVisible;
            public bool IsBot;
            public float DistSq;
        }

        private static readonly List<SkelCandidate> _skelCandidates = new(64);
        private static readonly List<ABIPlayer> _targetSkelActors = new(24);

        private static void CacheSkeletonsLoop()
        {
            while (_running)
            {
                try
                {
                    List<ABIPlayer> actors;
                    lock (Sync) actors = ActorList.Count == 0 ? null : new List<ABIPlayer>(ABIPlayers.ActorList);
                    if (actors == null || actors.Count == 0) { Sleep(1); continue; }

                    var posSnapshot = ActorPositions;
                    var posMap = new Dictionary<ulong, ActorPos>(posSnapshot?.Count ?? 0);
                    if (posSnapshot != null) foreach (var p in posSnapshot) posMap[p.Pawn] = p;
                    
                    // Prioritize without LINQ allocations: Visible > Players > Distance, capped to 24 closest within 500m
                    _skelCandidates.Clear();
                    Vector3 localPos = LocalPosition;
                    foreach (var a in actors)
                    {
                        // Exclude ONLY Zombies from skeleton reads - players and bots retain full skeleton support
                        if (a.IsZombie) continue;

                        if (posMap.TryGetValue(a.Pawn, out var ap))
                        {
                            bool isZombie = (ap.CharTypeName != null && ap.CharTypeName.Contains("Zombie", StringComparison.OrdinalIgnoreCase)) || ap.IsZombie;
                            if (isZombie) continue;

                            float dSq = Vector3.DistanceSquared(localPos, ap.Position);
                            if (dSq < 25000000f && !ap.IsDead)
                            {
                                _skelCandidates.Add(new SkelCandidate { Player = a, IsVisible = ap.IsVisible, IsBot = a.IsBot, DistSq = dSq });
                            }
                        }
                    }

                    _skelCandidates.Sort((x, y) => {
                        // Priority 1: High-threat proximity (< 60m) takes precedence over bot/player distinction
                        bool xClose = x.DistSq < (60f * 60f * 100f * 100f);
                        bool yClose = y.DistSq < (60f * 60f * 100f * 100f);
                        if (xClose != yClose) return xClose ? -1 : 1;

                        // Priority 2: Visibility
                        if (x.IsVisible != y.IsVisible) return x.IsVisible ? -1 : 1;

                        // Priority 3: Non-bot players over bots at medium/long ranges
                        if (x.IsBot != y.IsBot) return x.IsBot ? 1 : -1;

                        // Priority 4: Distance
                        return x.DistSq.CompareTo(y.DistSq);
                    });

                    _targetSkelActors.Clear();
                    int countToTake = Math.Min(32, _skelCandidates.Count);
                    for (int i = 0; i < countToTake; i++)
                        _targetSkelActors.Add(_skelCandidates[i].Player);

                    // 1. Resolve and cache skeleton pointer headers if missing
                    foreach (var a in _targetSkelActors)
                    {
                        if (_actorCache.TryGetValue(a.Pawn, out var ac) && ac != null)
                        {
                            if (ac.MeshCtwPtr == 0 || ac.BoneArrayPtr == 0 || ac.BoneCount < 20)
                            {
                                long now = Stopwatch.GetTimestamp();
                                if (ac.BoneResolveAttempts >= 3 && (now - ac.LastBoneAttemptStamp) < Stopwatch.Frequency * 2)
                                {
                                    continue;
                                }
                                ac.BoneResolveAttempts++;
                                ac.LastBoneAttemptStamp = now;

                                ulong targetMesh = ac.Mesh != 0 ? ac.Mesh : a.Mesh;
                                ulong arr = (targetMesh > 0x1000000) ? targetMesh + ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms : 0;
                                ulong boneArrayPtr = (arr > 0x1000000) ? DmaMemory.Read<ulong>(arr) : 0;
                                int boneCount = (arr > 0x1000000) ? DmaMemory.Read<int>(arr + 0x8) : 0;
                                ulong meshCtwPtr = targetMesh;

                                // Fallback candidate 2: ACharacter_Mesh (0x388)
                                if (boneArrayPtr < 0x1000000 || boneCount < 20)
                                {
                                    ulong pMesh = DmaMemory.Read<ulong>(a.Pawn + ABIOffsets.ACharacter_Mesh);
                                    if (pMesh > 0x1000000 && pMesh != targetMesh)
                                    {
                                        arr = pMesh + ABIOffsets.USkeletalMeshComponent_CachedComponentSpaceTransforms;
                                        boneArrayPtr = DmaMemory.Read<ulong>(arr);
                                        boneCount = DmaMemory.Read<int>(arr + 0x8);
                                        if (boneArrayPtr > 0x1000000 && boneCount >= 20)
                                        {
                                            meshCtwPtr = pMesh;
                                            ac.Mesh = pMesh;
                                        }
                                    }
                                }

                                if (boneArrayPtr > 0x1000000 && boneCount >= 20 && meshCtwPtr > 0x1000000)
                                {
                                    ac.BoneArrayPtr = boneArrayPtr;
                                    ac.BoneCount = boneCount;
                                    ac.MeshCtwPtr = meshCtwPtr;
                                    ac.HasValidBones = true;
                                    ac.BoneResolveAttempts = 0;

                                    uint ctl = DmaMemory.Read<uint>(meshCtwPtr + 0x250);
                                    uint algo = ctl >> 29;
                                    uint key = ctl & 0x1FFFFFF;
                                    if (algo == 0)
                                    {
                                        ac.MeshIsEncrypted = false;
                                        ac.MeshAceKey = 0;
                                        ac.MeshAceNodePtr = 0;
                                        ac.MeshAceDataPtr = 0;
                                    }
                                    else if (key != 0)
                                    {
                                        if (DmaMemory.TryGetAceNode(key, out var mNode) && mNode.DataSize >= 48 && mNode.DataPtr > 0x1000000 && mNode.NodePtr > 0x1000000)
                                        {
                                            ac.MeshIsEncrypted = true;
                                            ac.MeshAceKey = key;
                                            ac.MeshAceNodePtr = mNode.NodePtr;
                                            ac.MeshAceDataPtr = mNode.DataPtr;
                                        }
                                    }
                                    _actorCache[a.Pawn] = ac;
                                }
                                else
                                {
                                    _actorCache[a.Pawn] = ac;
                                }
                            }
                        }
                    }

                    var bias = _originBias;
                    using var sc = DmaMemory.CreateScatterNoCache();
                    foreach (var a in _targetSkelActors)
                    {
                        if (_actorCache.TryGetValue(a.Pawn, out var ac) && ac != null)
                        {
                            if (ac.MeshCtwPtr != 0 && ac.BoneArrayPtr != 0 && ac.BoneCount >= 20)
                            {
                                if (ac.MeshIsEncrypted && ac.MeshAceNodePtr > 0x1000000 && ac.MeshAceDataPtr > 0x1000000)
                                {
                                    sc.PrepareReadValue<uint>(ac.MeshAceNodePtr + 0x20);
                                    sc.PrepareReadValue<DmaMemory.AceDword12>(ac.MeshAceDataPtr);
                                }
                                else
                                {
                                    sc.PrepareReadValue<FTransform>(ac.MeshCtwPtr + 0x220);
                                }
                                sc.PrepareReadValue<ABISkeleton.BoneArray55>(ac.BoneArrayPtr);
                            }
                        }
                    }
                    sc.Execute();

                    var seen = new HashSet<ulong>(_targetSkelActors.Count);
                    for (int i = 0; i < _targetSkelActors.Count; i++)
                    {
                        var a = _targetSkelActors[i]; seen.Add(a.Pawn);
                        if (!_actorCache.TryGetValue(a.Pawn, out var ac) || ac == null) continue;
                        if (ac.MeshCtwPtr == 0 || ac.BoneArrayPtr == 0 || ac.BoneCount < 20) continue;

                        FTransform meshCtw = default;
                        if (ac.MeshIsEncrypted)
                        {
                            if (sc.ReadValue<uint>(ac.MeshAceNodePtr + 0x20, out uint mSeed) &&
                                sc.ReadValue<DmaMemory.AceDword12>(ac.MeshAceDataPtr, out var mRaw12))
                            {
                                meshCtw = DmaMemory.DecryptAceFTransform(mRaw12, ac.MeshAceKey, mSeed);
                            }
                        }
                        else
                        {
                            sc.ReadValue<FTransform>(ac.MeshCtwPtr + 0x220, out meshCtw);
                        }

                        if (meshCtw.Translation == Vector3.Zero) continue;
                        meshCtw.Translation += bias;
                        if (!ABISkeleton.IsSanePublic(meshCtw)) continue;

                        if (!sc.ReadValue<ABISkeleton.BoneArray55>(ac.BoneArrayPtr, out var boneArray)) continue;

                        if (!_skelCache.TryGetValue(a.Pawn, out var pts) || pts == null || pts.Length != ABISkeleton.FetchIndices.Length)
                        {
                            pts = new Vector3[ABISkeleton.FetchIndices.Length];
                        }

                        bool ok = true;
                        for (int b = 0; b < ABISkeleton.FetchIndices.Length; b++)
                        {
                            int bi = ABISkeleton.FetchIndices[b];
                            if (bi >= ac.BoneCount)
                            {
                                pts[b] = pts[0];
                                continue;
                            }
                            var boneCS = boneArray[bi];
                            if (!float.IsFinite(boneCS.Translation.X))
                            {
                                ok = false;
                                break;
                            }
                            pts[b] = ABIMath.TransformPosition(meshCtw, boneCS.Translation);
                        }
                        if (ok) _skelCache[a.Pawn] = pts;
                    }
                    foreach (var k in _skelCache.Keys) if (!seen.Contains(k)) _skelCache.TryRemove(k, out _);
                }
                catch { }
                Sleep(1);
            }
        }

        // /////////////////////////////////////////////////////////////////////////////////////
        //  WEAPON ZOOM LOOP
        // /////////////////////////////////////////////////////////////////////////////////////

        private static void CacheWeaponZoomLoop()
        {
            while (_running)
            {
                try
                {
                    if (LocalPawn == 0 || ABIOffsetsExt.OFF_PAWN_WEAPONMAN == 0) { Sleep(8); continue; }
                    ulong wmAddr = LocalPawn + (ulong)ABIOffsetsExt.OFF_PAWN_WEAPONMAN;
                    using var sc1 = DmaMemory.CreateScatterNoCache();
                    sc1.PrepareReadValue<ulong>(wmAddr); sc1.Execute(); sc1.ReadValue<ulong>(wmAddr, out ulong weaponMan);
                    if (weaponMan == 0) { lock (_zoomSync) _zoom = default; Sleep(8); continue; }
                    ulong cwAddr = weaponMan + ABIOffsetsExt.OFF_WEAPON_CURRENT;
                    using var sc2 = DmaMemory.CreateScatterNoCache();
                    sc2.PrepareReadValue<ulong>(cwAddr); sc2.Execute(); sc2.ReadValue<ulong>(cwAddr, out ulong currentWeapon);
                    if (currentWeapon == 0) { lock (_zoomSync) _zoom = default; Sleep(8); continue; }
                    ulong zcAddr = currentWeapon + ABIOffsetsExt.OFF_WEAPON_ZOOMCOMP;
                    ulong fcAddr = currentWeapon + ABIOffsetsExt.OFF_WEAPON_FIRINGCOMP;
                    using var sc3 = DmaMemory.CreateScatterNoCache();
                    sc3.PrepareReadValue<ulong>(zcAddr); sc3.PrepareReadValue<ulong>(fcAddr); sc3.Execute(); 
                    sc3.ReadValue<ulong>(zcAddr, out ulong zoomComp); sc3.ReadValue<ulong>(fcAddr, out ulong firingComp);
                    
                    float scopeMag = 1f, progress = 0f, scopeAdsScale = 1f, projSpeed = 90000f, gravScale = 1f;
                    bool isZooming = false;
                    using var sc4 = DmaMemory.CreateScatterNoCache();
                    if (zoomComp != 0) {
                        sc4.PrepareReadValue<float>(zoomComp + ABIOffsetsExt.OFF_ZOOM_SCOPEMAG); 
                        sc4.PrepareReadValue<float>(zoomComp + ABIOffsetsExt.OFF_ZOOM_PROGRESSRATE);
                        sc4.PrepareReadValue<float>(zoomComp + ABIOffsetsExt.OFF_SCOPE_ADS_SCALE);
                        sc4.PrepareReadValue<byte>(zoomComp + ABIOffsetsExt.OFF_ZOOM_CACHED);
                    }
                    if (firingComp != 0) {
                        sc4.PrepareReadValue<float>(firingComp + ABIOffsetsExt.OFF_PROJECTILE_SPEED);
                        sc4.PrepareReadValue<float>(firingComp + ABIOffsetsExt.OFF_AMMO_GRAVITY);
                    }
                    sc4.Execute();
                    
                    if (zoomComp != 0) {
                        sc4.ReadValue<float>(zoomComp + ABIOffsetsExt.OFF_ZOOM_SCOPEMAG, out scopeMag); 
                        sc4.ReadValue<float>(zoomComp + ABIOffsetsExt.OFF_ZOOM_PROGRESSRATE, out progress);
                        sc4.ReadValue<float>(zoomComp + ABIOffsetsExt.OFF_SCOPE_ADS_SCALE, out scopeAdsScale);
                        sc4.ReadValue<byte>(zoomComp + ABIOffsetsExt.OFF_ZOOM_CACHED, out byte cachedZoom);
                        isZooming = cachedZoom != 0 || progress > 0.01f;
                    }
                    if (firingComp != 0) {
                        sc4.ReadValue<float>(firingComp + ABIOffsetsExt.OFF_PROJECTILE_SPEED, out projSpeed);
                        sc4.ReadValue<float>(firingComp + ABIOffsetsExt.OFF_AMMO_GRAVITY, out gravScale);
                    }

                    scopeMag = MathF.Max(1f, scopeMag);
                    float t = Math.Clamp(progress, 0f, 1f);
                    float zoom = isZooming && scopeMag > 1f
                        ? scopeMag
                        : 1f + (scopeMag - 1f) * t;
                    if (scopeAdsScale > 1f && isZooming)
                        zoom = MathF.Max(zoom, scopeAdsScale);

                    lock (_zoomSync) _zoom = new ZoomInfo {
                        Valid = true, Zoom = zoom, ScopeMag = scopeMag, Progress = progress,
                        ScopeAdsScale = scopeAdsScale, IsZooming = isZooming,
                        WeaponMan = weaponMan, CurrentWeapon = currentWeapon, ZoomComp = zoomComp,
                        ProjectileSpeed = projSpeed, GravityScale = gravScale, Stamp = Stopwatch.GetTimestamp()
                    };
                }
                catch { lock (_zoomSync) _zoom = default; }
                Sleep(8);
            }
        }

        private static void Sleep(int ms) => Thread.Sleep(ms);
        public static ulong GetLocalHealthSetAddress() => _localHealthSet;
    }
}
