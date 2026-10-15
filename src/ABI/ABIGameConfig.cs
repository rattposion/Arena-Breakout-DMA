using System.Numerics;

namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI GAME CONFIG    All Arena Breakout Infinite feature settings.
    //  Serialized to JSON via ConfigManager ("abi_config.json").
    // /////////////////////////////////////////////////////////////////////////////////////

    public sealed class ABIGameConfig
    {
        // //// Player ESP //////////////////////////////////////////////////////////////
        public bool  DrawBoxes             = true;
        public bool  DrawNames             = true;
        public bool  DrawDistance          = true;
        public bool  DrawSkeletons         = false;
        public bool  DrawTeam              = true;
        public bool  DrawWeapon            = true;
        public bool  DrawArmor             = true;
        public bool    DrawInventoryValue    = true;
        public int     MinInventoryValue     = 20000;
        public bool    DrawGearList              = true;
        public bool    DrawTargetDummies         = false;
        public bool    DrawOffscreenArrows       = true;
        public float   OffscreenArrowRadius      = 280f;
        public float   OffscreenArrowSize        = 8f;
        public bool    DrawOffscreenDistance     = true;
        public float   OffscreenArrowFontSize    = 0.75f;
        public int     GearListKey               = 0x05; // Mouse4
        public int     GearListMinItemValue      = 10000;
        public float   GearListFontSize          = 0.85f;
        public static int GlobalGearMin = 10000;
        public Vector4 ColorGearList      = new(0.40f, 0.85f, 1.00f, 1f); // Light Blue
        // Separate Distance Checks (PMC/Players, AI Bots, Zombies)
        public float PlayerMaxDistance      = 800f;   // meters (PMC/Players)
        public float AiMaxDistance          = 300f;   // meters (AI Bots / Scavs)
        public float ZombieMaxDistance      = 200f;   // meters (Zombies)
        public float MaxDistance
        {
            get => PlayerMaxDistance;
            set => PlayerMaxDistance = value;
        }
        public float MaxSkeletonDistance   = 300f;

        // //// S7 Tactical Player Alerts ///////////////////////////////////////////////
        public bool  DrawAmmoTier          = true;
        public bool  DrawReloadAlert       = true;
        public bool  DrawDownedAlert       = true;
        public bool  DrawGrenadeAlert      = true;
        public bool  DrawZombies           = true;

        // //// Death markers ///////////////////////////////////////////////////////////
        public bool  DrawDeathMarkers    = true;
        public float DeathMarkerMaxDist  = 1200f;
        public float DeathMarkerBaseSize = 10f;

        // //// Label / box colors /////////////////////////////////////////////////////
        public Vector4 ColorPlayer        = new(1f,    0.25f, 0.25f, 1f);
        public Vector4 ColorBot           = new(0f,    0.6f,  1f,    1f);
        public Vector4 ColorTeam          = new(0f,    1f,    1f,    1f); // Cyan for team
        public Vector4 ColorBoxVisible    = new(0.20f, 1.00f, 0.20f, 1f);
        public Vector4 ColorBoxInvisible  = new(1.00f, 0.50f, 0.00f, 1f);
        public Vector4 ColorSkelVisible   = new(1.00f, 1.00f, 1.00f, 1f);
        public Vector4 ColorSkelInvisible = new(0.70f, 0.70f, 0.70f, 1f);
        public Vector4 DeadFill           = new(0f,    0f,    0f,    1f);
        public Vector4 DeadOutline        = new(1f,    0f,    0f,    1f); // Red for player death markers

        // //// Aimbot //////////////////////////////////////////////////////////////////
        public bool  AimbotEnabled        = true;
        public bool  AimbotPredictVelocity = true; // Projectile velocity prediction
        public bool  AimbotPredictDrop     = true; // Bullet drop compensation
        public int   AimbotPriority       = 0;    // 0 = Crosshair (FOV), 1 = Distance, 2 = Hybrid
        public float AimbotPredictionLatency = 0.05f; // Latency compensation in seconds
        public bool  AimbotRequireVisible = true;
        public bool  AimbotTargetAIOnly   = false;
        public bool  AimbotTargetPMCOnly  = false;
        public bool  AimbotHeadshotAI     = false;
        public bool  AimbotRandomBone     = false;
        public int   AimbotTargetBone     = ABISkeleton.IDX_Head;
        public float AimbotMaxMeters      = 400f;
        public float AimbotFovPx          = 140f;
        public float AimbotPixelPower     = 0.0400f;  // mouse counts per screen pixel
        public float AimbotDeadzonePx     = 1.5f;
        public bool  AimbotInvertY        = false;
        public int   AimbotKey            = 0x06; // VK_XBUTTON2 (Mouse5)
        public int   AimbotType           = 0;    // 0 = Default, 1 = Humanized
        public float AimbotSmooth         = 5f;   // Smoothing factor for Humanized
        public int   AimbotSwitchDelayMs  = 200;  // Delay before switching targets

        // //// Triggerbot /////////////////////////////////////////////////////////////
        public bool  TriggerbotEnabled    = false;
        public int   TriggerbotKey        = 0x02; // VK_RBUTTON
        public int   TriggerbotKeyVK      = 0x02; // VK_RBUTTON
        public int   TriggerbotDelayMs    = 50;   // ms delay before firing
        public int   TriggerbotDurationMs = 80;   // ms to hold the fire button
        public bool  TriggerbotRequireVisible = true;
        public bool  DrawGroundLoot         = true;
        public bool  DrawGroundLootNames    = true;
        public bool  DrawGroundLootDistance = true;
        public float GroundLootMaxDistance  = 150f;
        public float GroundLootMarkerSize   = 6f;

        // //// Containers //////////////////////////////////////////////////////////////
        public bool  DrawContainers         = true;
        public bool  DrawContainerNames     = true;
        public bool  DrawContainerDistance  = true;
        public bool  DrawEmptyContainers    = true; // Deprecated - all containers drawn
        public bool  ContainerColorByTier   = true; // Color container marker quad by loot rarity/tier like backup source
        public float ContainerMaxDistance   = 50f;
        public float ContainerMarkerSize    = 8f;
        public Vector4 ContainerColor       = new(1f,   0.84f, 0f,   1f); // Single gold/yellow container marker color
        public Vector4 ContainerFilledColor { get => ContainerColor; set => ContainerColor = value; }
        public Vector4 ContainerEmptyColor  { get => ContainerColor; set => ContainerColor = value; }
        public Vector4 ContainerCorpseColor = new(1f,   0f,    0f,   1f); // Red for corpses
        public Vector4 ContainerSafeColor   = new(1f,   0.05f, 0.05f, 1f); // Red for Safes
        public bool    DrawCorpseValue      = true;
        public int     CorpseMinValue       = 50000;

        // //// S7 Container & Safe Toggles /////////////////////////////////////////////
        public bool  DrawContainerLidState    = true;
        public bool  DrawContainerLootedState = true;
        public bool  DrawContainerEmptyState  = false; // Removed - no empty tag
        public bool  DrawSafeTimers           = true;

        // //// Missions & Terminals ////////////////////////////////////////////////////
        public bool    DrawMissionTerminals     = true;
        public bool    DrawTerminalDistance     = true;
        public float   TerminalMaxDistance      = 600f;
        public Vector4 RadioColor               = new(1.0f, 0.15f, 0.65f, 1.0f); // Hot Pink / Neon Fuchsia for Mission Radios
        public bool    EnablePositionSmoothing  = true;

        // //// Debug & Logging /////////////////////////////////////////////////////////
        public bool  ShowDebug                = false;

        // //// Loot price / colors /////////////////////////////////////////////////////
        public int    LootMinPriceRegular   = 20000;
        public int    LootMinPriceImportant = 50000;
        public bool   LootShowPrice         = true;
        public bool   DrawDebugEsp          = false;
        public float  DebugEspMaxDistance   = 30f;
        public string LootFilterInclude     = "";
        public string LootFilterExclude     = "";
        public Vector4 LootRegularColor     = new(0f, 1f,    0.5f, 1f);
        public Vector4 LootImportantColor   = new(1f, 0.1f,  1f,   1f);

        // //// Debug widgets ///////////////////////////////////////////////////////////
        public bool    DrawPlayerWidget          = false;  // toggle via menu

        // //// Loot widget (real-time list) ////////////////////////////////////////////
        public bool    DrawLootWidget            = true;
        public int     LootWidgetMaxItems        = 20;
        public int     LootWidgetMinPrice        = 5000;
        public bool    LootWidgetShowDistance    = true;
        public Vector4 LootWidgetBackground      = new(0.08f, 0.08f, 0.08f, 0.92f);
        public Vector4 LootWidgetImportantColor  = new(1f,    0.65f, 0.1f,  1f);
        public Vector2 LootWidgetPosition        = new(20f, 400f);
        public float   LootDumpDistance          = 10f; // Default 10 meters

        // //// KmboxNet ////////////////////////////////////////////////////////////////
        public string KmboxIP   = "192.168.2.152";
        public int    KmboxPort = 32207;
        public string KmboxMAC  = "8AFFE04E";
    }
}

