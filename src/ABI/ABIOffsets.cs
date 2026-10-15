namespace ImGuiOverlay.ABI
{
    // /////////////////////////////////////////////////////////////////////////////////////
    //  ABI OFFSETS — Arena Breakout Infinite engine + game pointers
    //  Updated for ABI BuildID / ABI S7 from verified ABI S7 dumps
    // /////////////////////////////////////////////////////////////////////////////////////

    public static class ABIOffsets
    {
        // //// GObjects / GNames / GWorld ///////////////////////////////////////////////
        public const ulong GWorld          = 0xB2BEE48;
        public const ulong GNames          = 0xBB519C0;
        public const ulong GObjects        = 0xB5510D8;

        // FName decrypt function / key pointer naming kept for old code compatibility
        public const ulong DecryptKey      = 0xBB0896C;
        public const ulong FNameDecrypt    = 0xBB0896C; // FNameKey — single-byte XOR stream key
        public const ulong GWorldDecrypt   = 0xB2C0E48;
        public const ulong FNameDecryptFn  = 0x3D84110;

        // ACE encrypted position cache table (RVA from game base - can rotate / be resolved dynamically)
        public static ulong AceCacheTableRva = 0xB5E4D70;

        // //// UObject //////////////////////////////////////////////////////////////////
        public const ulong UObject_ObjectId = 0x20;

        // //// UWorld ///////////////////////////////////////////////////////////////////
        public const ulong UWorld_PersistentLevel     = 0x30;
        public const ulong UWorld_NetDriver           = 0x38;
        public const ulong UWorld_GameState           = 0x120;
        public const ulong UWorld_Levels              = 0x138;
        public const ulong UWorld_OwningGameInstance  = 0x180;
        public const ulong UWorld_OriginLocation      = 0x654;

        // //// UGameInstance ///////////////////////////////////////////////////////////
        public const ulong UGameInstance_LocalPlayers = 0x38;
        public const ulong UPlayer_PlayerController   = 0x30;

        // //// AController / APlayerController /////////////////////////////////////////
        public const ulong APlayerController_AcknowledgedPawn    = 0x398;
        public const ulong APlayerController_PlayerCameraManager = 0x3B0;
        public const ulong APlayerController_InputYawScale       = 0x52C;
        public const ulong APlayerController_InputPitchScale     = 0x530;

        // Kept old controller names for compatibility.
        public const ulong AController_ControlRotation = 0x380;
        public const ulong AController_Pawn            = 0x348;
        public const ulong AController_PlayerState     = 0x320;

        // //// AActor / APawn ///////////////////////////////////////////////////////////
        public const ulong AActor_RootComponent = 0x170;
        public const ulong AActor_PlayerState   = 0x348;
        public const ulong AActor_Owner         = 0x118;
        public const ulong AActor_Children      = 0x160;

        // //// ULevel //////////////////////////////////////////////////////////////////
        public const ulong ULevel_ActorArray = 0x98;
        public const ulong ULevel_ActorCount = 0xA0;

        // //// AGameStateBase //////////////////////////////////////////////////////////
        public const ulong AGameStateBase_PlayerArray = 0x330;
        public const ulong AGameStateBase_PlayerCount = 0x338;
        public const ulong ASGGameState_GameSceneType  = 0x579;
        public const ulong ASGGameState_RoomId         = 0x430;

        // //// ACharacter //////////////////////////////////////////////////////////////
        public const ulong ACharacter_Mesh = 0x388;
        public const ulong ACharacter_CapsuleComponent = 0x398;

        // //// Scene / Skeletal Components /////////////////////////////////////////////
        public const ulong USceneComponent_AttachParent       = 0x108;
        public const ulong USceneComponent_RelativeLocation   = 0x170;
        public const ulong USceneComponent_ComponentToWorld   = 0x220;
        public const ulong USceneComponent_ComponentToWorld_Ptr = 0x220;
        public const ulong USkeletalMeshComponent_ComponentToWorld = 0x220;
        public const ulong USkeletalMeshComponent_MeshRotation     = 0x1D0;

        // //// Camera //////////////////////////////////////////////////////////////////
        public const ulong APlayerCameraManager_CameraCachePrivate = 0x2120;
        public const ulong APlayerCameraManager_LastFrameCameraCachePrivate = 0x2870;

        // //// Skeletal Mesh Bones /////////////////////////////////////////////////////
        public const ulong USkeletalMeshComponent_BoneArray = 0x818;
        public const ulong USkeletalMeshComponent_CachedComponentSpaceTransforms = 0x818;
        public const ulong USkeletalMeshComponent_ComponentSpaceTransforms       = 0x818;

        // //// Network //////////////////////////////////////////////////////////////////
        public const ulong UNetDriver_ServerConnection  = 0x88;
        public const ulong UNetDriver_ClientConnections = 0x90;
        public const ulong UNetConnection_OpenChannels  = 0x70;
        public const ulong UNetConnection_ChannelCount  = 0x78;
        public const ulong UActorChannel_Actor          = 0x1A8; // UActorChannel::Actor
        public const ulong UActorComponent_OwnerPrivate = 0x20;

        // //// ASGCharacter / UAM ///////////////////////////////////////////////////////
        public const ulong ASGCharacter_WeaponManager             = 0x1970;
        public const ulong ASGCharacter_AbilitySystemComponent    = 0x17F8;
        public const ulong ASGCharacter_DeathComponent            = 0x1978;
        public const ulong ASGCharacter_MovementComponent         = 0x1790;
        public const ulong ASGCharacter_CachedCharacterType       = 0x16D9;
        public const ulong ASGCharacter_FactionType               = 0x16E8;
        public const ulong ASGCharacter_AIStaticsComponent        = 0x2260;
        public const ulong ASGCharacter_TeamId                    = 0x598;
        public const ulong ASGCharacter_WeaponEnemyArray          = 0xAF0;
        public const ulong ASGCharacter_ArmorManager              = 0x1B08;
        public const ulong ASGCharacter_InventoryManager          = 0x1AE0;
        public const ulong ASGCharacter_CharacterFOVComponent     = 0x1B58;
        public const ulong ASGCharacter_DesiredFOV                = 0x1C40;

        // //// ASGZombieCharacter ///////////////////////////////////////////////////////
        public const ulong ASGZombieCharacter_ZombieAnimationComponent = 0x07B0;
        public const ulong ASGZombieCharacter_ZombieMovementComponent  = 0x07B8;
        public const ulong ASGZombieCharacter_ZombieAbilityComponent   = 0x07C0;
        public const ulong ASGZombieCharacter_ZombieMeshComponent      = 0x07C8;
        public const ulong ASGZombieCharacter_ZombieTurnComponent      = 0x07D0;
        public const ulong ASGZombieCharacter_ZombieAttributeComponent = 0x07D8;
        public const ulong ASGZombieCharacter_CacheDeathBox            = 0x0828;
        public const ulong ASGZombieCharacter_bIsDead                  = 0x0A80;
        public const ulong ASGZombieCharacter_bOnDieActivated          = 0x0A81;

        // //// USGZombieMeshComponent ///////////////////////////////////////////////////
        public const ulong USGZombieMeshComponent_ZombieSkeletalMeshComponent = 0x0170;

        // //// USGZombieAttributeComponent //////////////////////////////////////////////
        public const ulong USGZombieAttributeComponent_ZombieHealthAttributeSet = 0x0108;

        // //// USGZombieHealthAttributeSet //////////////////////////////////////////////
        public const ulong USGZombieHealthAttributeSet_ZombieHealth    = 0x0050;
        public const ulong USGZombieHealthAttributeSet_ZombieHealthMax = 0x0060;

        // //// USGCharacterAIStaticsComponent ///////////////////////////////////////////
        public const ulong USGCharacterAIStaticsComponent_AIMainType   = 0x108;
        public const ulong USGCharacterAIStaticsComponent_AIFactionType = 0x109;

        // //// UMovementComponent //////////////////////////////////////////////////////
        public const ulong UMovementComponent_Velocity = 0x10C;

        // //// UAbilitySystemComponent /////////////////////////////////////////////////
        public const ulong UAbilitySystemComponent_SpawnedAttributes = 0x188;

        // //// USGCharacterDeathComponent ///////////////////////////////////////////////
        public const ulong USGCharacterDeathComponent_bIsDead = 0x240;

        // //// UPrimitiveComponent /////////////////////////////////////////////////////
        public const ulong UPrimitiveComponent_LastSubmitTime = 0x2EC;
        public const ulong UPrimitiveComponent_LastRenderTime = 0x2F0;

        // //// USGCharacterWeaponManager ////////////////////////////////////////////////
        public const ulong USGCharacterWeaponManager_CurrentWeapon = 0x1F8;
        public const ulong USGCharacterWeaponManager_WeaponList    = 0x350;
        public const ulong USGCharacterInventoryManagerComponent_EquippedInventoryMap = 0x150;

        // //// ASGWeapon ////////////////////////////////////////////////////////////////
        public const ulong ASGWeapon_WeaponZoomComponent = 0xC08;
        public const ulong ASGWeapon_WeaponAssembleComp  = 0xBF0;
        public const ulong ABP_MainWeaponBase_WeaponAssembleComp = 0x0DC8;
        public const ulong ASGWeapon_WeaponAssembleComp_Alt = 0x0B58;
        public const ulong ASGWeapon_WeaponAssembleComp_Legacy = 0xBD0;
        public const ulong ASGWeapon_FiringComponent     = 0xC10;

        // //// USGWeaponZoomComponent ///////////////////////////////////////////////////
        public const ulong USGWeaponZoomComponent_ZoomProgressRate   = 0x404;
        public const ulong USGWeaponZoomComponent_ScopeAdsScale       = 0x120;
        public const ulong USGWeaponZoomComponent_ScopeMagnification = 0x578;
        public const ulong USGWeaponZoomComponent_bCachedZoom        = 0x460;
        public const ulong USGWeaponZoomComponent_CurrentZoomState   = 0x408;

        // //// USGWeaponAssembleComponent //////////////////////////////////////////////
        public const ulong USGWeaponAssembleComponent_CachedMagazine = 0x280;
        public const ulong USGWeaponAssembleComponent_AssembledInventoryList = 0x1F8;

        // //// USGFiringComponent //////////////////////////////////////////////////////
        public const ulong USGFiringComponent_ProjectileInitSpeed = 0x610;
        public const ulong USGFiringComponent_AmmoGravityScale    = 0x2EC;

        // //// SGWeaponContainer ///////////////////////////////////////////////////////
        public const ulong SGWeaponContainer = 0x940;
        public const ulong USGWeaponContainer_MaxStack = 0x120;
        public const ulong USGWeaponContainer_ContainList = 0x208;
        public const ulong FBulletContainerInfo_StackCount = 0x8;

        // //// Armor ////////////////////////////////////////////////////////////////////
        public const ulong USGCharacterArmorManagerComponent_ArmorList       = 0x278;
        public const ulong ASGInventory_ArmorLevel                           = 0x6E8;
        public const ulong ASGInventory_ArmorCommonData                      = 0x780;
        public const ulong ASGInventory_InventoryTypeComponent_Armor        = 0x870;
        public const ulong USGInventoryTypeComponent_Armor_ArmorType         = 0x130;
        public const ulong USGInventoryCommonDataComponent_Durability        = 0x118;
        public const ulong USGInventoryCommonDataComponent_DurabilityMax     = 0x11C;

        // //// Inventory ///////////////////////////////////////////////////////////////
        public const ulong USGCharacterInventoryManagerComponent_InventoryArray = 0x110;
        public const ulong ASGInventory_CommonDataComponent                     = 0x780;
        public const ulong ASGInventory_AssembleComp                            = 0x838;
        public const ulong USGInventoryCommonDataComponent_StandardPrice        = 0x10C;
        public const ulong USGInventoryCommonDataComponent_ItemLocalizedName    = 0x170;
        public const ulong ASGInventory_ItemId                                  = 0x6E0;
        public const ulong ASGInventory_InventoryType                           = 0x788;

        // //// APlayerState /////////////////////////////////////////////////////////////
        public const ulong APlayerState_PlayerNamePrivate = 0x3F8;
        public const ulong APlayerState_Score             = 0x318;
        public const ulong APlayerState_PlayerId          = 0x31C;
        public const ulong APlayerState_Ping              = 0x320;
        public const ulong APlayerState_PawnPrivate       = 0x378;
        public const ulong APlayerState_TeamId            = 0x598;
        public const ulong ASGPlayerState_TeamIndex       = 0x598;
        public const ulong ASGPlayerState_ZonePlayerName  = 0x620;

        public const ulong CDC_TotalCount        = 0x0104;
        public const ulong CDC_StandardPrice     = 0x010C;
        public const ulong CDC_Rarity            = 0x0110;
        public const ulong CDC_SellPrice         = 0x0134;
        public const ulong CDC_DisplayName       = 0x0140;
        public const ulong CDC_SimpleDisplayName = 0x0170;

        public const ulong Container_SGInventoryCommonData = 0x08F8;
        public const ulong Container_ContainerMgr          = 0x0928;

        public const ulong CMgr_InventoryContainerBaseList = 0x0150; // S7 Verified
        public const ulong CMgr_IsRolledUp                 = 0x0160; // S7 Verified
        public const ulong CMgr_ChildActorList             = 0x28;

        // //// S7 Container Components & Safe Offsets ////////////////////////////////////
        public const ulong Container_PerfBase_Container    = 0x08F0;
        public const ulong Container_PerfBase_LootBox      = 0x08F8;
        public const ulong Container_PerfBase_LockLootBox  = 0x0998;

        public const ulong Container_BeUsed_Container      = 0x0900;
        public const ulong Container_BeUsed_LootBox        = 0x0920;
        public const ulong Container_BeUsed_LockLootBox    = 0x09C0;

        public const ulong Container_Search_Container      = 0x0918;
        public const ulong Container_Search_LootBox        = 0x0930;
        public const ulong Container_Search_LockLootBox    = 0x09D0;

        public const ulong Container_Searching_Container   = 0x0920;
        public const ulong Container_Searching_LootBox     = 0x0938;
        public const ulong Container_Searching_LockLootBox = 0x09D8;

        public const ulong Container_Mgr_Container         = 0x0928;
        public const ulong Container_Mgr_LootBox           = 0x0948;
        public const ulong Container_Mgr_LockLootBox       = 0x09E8;

        public const ulong Safe_ConditionType              = 0x08F0;
        public const ulong Safe_UnlockTime                 = 0x0918;
        public const ulong Safe_CurFSMState                = 0x0950;
        public const ulong Safe_LeftUnLockTime             = 0x0960;

        // //// S7 DBNO & Ammo & Grenade Offsets /////////////////////////////////////////
        public const ulong ASGCharacter_DBNOComponent      = 0x19B8;
        public const ulong USGCharacterDBNO_bIsDBNO        = 0x0220;
        public const ulong USGCharacterDBNO_bCanRescueSelf = 0x0139;
        public const ulong USGCharacterDBNO_LeaveDBNORescuer = 0x0280;
        public const ulong USGCharacterDBNO_DamageCauser   = 0x0238;
        public const ulong USGCharacterDBNO_Instigator     = 0x0260;

        public const ulong ABP_MainWeaponBase_WeaponAmmoComp = 0x0DE0;
        public const ulong ASGWeapon_WeaponAmmoComp          = 0x0C70;
        public const ulong ASGWeapon_WeaponAmmoComp_Legacy   = 0x0BD8;
        public const ulong USGWeaponAmmoComp_MaxAmmo       = 0x0108;
        public const ulong USGWeaponAmmoComp_CurAmmo       = 0x012C;
        public const ulong USGWeaponAmmoComp_bIsReloading  = 0x0138;

        public const ulong USkeletalMeshComponent_AnimScriptInstance = 0x0778;
        public const ulong USGCharacterAnimInstance_bIsReloading     = 0x0B52;

        public const ulong USGWeaponContainer_CaliberClass = 0x0100;
        public const ulong USGWeaponContainer_DefaultBulletClass = 0x0108;

        public const ulong ABP_ThrowWeapon_bHasFired       = 0x08FF;
        public const ulong ABP_ThrowWeapon_bRollbackNotify = 0x0900;

        // //// UProjectileMovementComponent //////////////////////////////////////////////
        public const ulong UProjectileMovementComponent_Velocity = 0x10C;
        public const ulong UProjectileMovementComponent_UpdatedComponent = 0xF8;
        public const ulong UProjectileMovementComponent_InitialSpeed = 0x138;
        public const ulong UProjectileMovementComponent_MaxSpeed = 0x13C;
        public const ulong UProjectileMovementComponent_ProjectileGravityScale = 0x154;

        // //// USGGameUserSettings //////////////////////////////////////////////////////
        public const ulong USGGameUserSettings_UserSensitivitySettingScale = 0x24C;
        public const ulong USGGameUserSettings_ADSSensitivity = 0x250;
        public const ulong USGGameUserSettings_SubSensitivity = 0x258;

        // //// USGPCRotateRateComponent /////////////////////////////////////////////////
        public const ulong USGPCRotateRateComponent_BaseTurnRate = 0x100;
        public const ulong USGPCRotateRateComponent_BaseLookUpRate = 0x104;
        public const ulong USGPCRotateRateComponent_CurrentRotateRateScale = 0x1D8;

        // //// UCapsuleComponent ////////////////////////////////////////////////////////
        public const ulong UCapsuleComponent_CapsuleHalfHeight = 0x508;
        public const ulong UCapsuleComponent_CapsuleRadius = 0x50C;

        // //// UClass / UEngine / UGameViewportClient ///////////////////////////////////
        public const ulong UClass_ClassDefaultObject = 0x140;
        public const ulong UEngine_GameUserSettings = 0x230;
        public const ulong UEngine_GameViewport = 0x788;
        public const ulong UGameViewportClient_GameInstance = 0x80;
    }

    // /////////////////////////////////////////////////////////////////////////////////////
    //  EXTENDED OFFSETS — Vitals, death, weapon zoom
    // /////////////////////////////////////////////////////////////////////////////////////

    internal static class ABIOffsetsExt
    {
        // //// Pawn / Character /////////////////////////////////////////////////////////
        public const int OFF_PAWN_ASC              = 0x17F8;
        public const int OFF_PAWN_DEATHCOMP        = 0x1978;
        public const int OFF_PAWN_WEAPONMAN        = 0x1970;
        public const int OFF_CHAR_TICKING_ON_DEATH = 0x18F8;
        public const int OFF_CHAR_HEALTH           = 0x1C5C;

        // //// Movement Component //////////////////////////////////////////////////////
        public const ulong OFF_MOVEMENT_COMP    = 0x1790;
        public const ulong OFF_VELOCITY         = 0x10C;

        // //// AbilitySystemComponent //////////////////////////////////////////////////
        public const int OFF_ASC_ATTRSETS = 0x0188;

        // //// Health AttributeSet /////////////////////////////////////////////////////
        public const int OFF_ATTR_HEALTH    = 0x48;
        public const int OFF_ATTR_HEALTHMAX = 0x4C;

        // //// Death Component /////////////////////////////////////////////////////////
        public const int OFF_DEATHCOMP_DEATHINFO = 0x0240;
        public const int OFF_DEATHCOMP_BISDEAD   = 0x0240;

        // //// Mesh visibility timers //////////////////////////////////////////////////
        public const ulong OFF_MESH_TIMERS  = 0x2EC;
        public const int   OFF_LASTSUBMIT   = 0x0;
        public const int   OFF_LASTONSCREEN = 0x4;
        public const float VIS_TICK         = 0.06f;

        public const ulong OFF_LAST_SUBMIT_TIME = 0x2EC;
        public const ulong OFF_LAST_RENDER_TIME = 0x2F0;

        // //// Weapon Manager //////////////////////////////////////////////////////////
        public const ulong OFF_WEAPON_CURRENT = 0x1F8;

        // //// Weapon / Zoom ///////////////////////////////////////////////////////////
        public const ulong OFF_WEAPON_ZOOMCOMP   = 0xC08;
        public const ulong OFF_WEAPON_FIRINGCOMP = 0xC10;
        public const ulong OFF_ZOOM_PROGRESSRATE = 0x404;
        public const ulong OFF_ZOOM_SCOPEMAG     = 0x578;
        public const ulong OFF_ZOOM_CACHED       = 0x460;
        public const ulong OFF_SCOPE_ADS_SCALE   = 0x120;
        public const ulong OFF_CHAR_DESIRED_FOV  = 0x1C40;
        public const ulong OFF_CHAR_FOV_COMP     = 0x1B58;
        public const ulong OFF_FOV_COMP_ZOOM     = 0x108;

        // //// Firing Component ////////////////////////////////////////////////////////
        public const ulong OFF_PROJECTILE_SPEED  = 0x610;
        public const ulong OFF_AMMO_GRAVITY      = 0x2EC;

        // //// Weapon assemble / ammo //////////////////////////////////////////////////
        public const ulong OFF_WEAPON_ASSEMBLE_COMP    = 0xBF0;
        public const ulong OFF_WEAPON_ASSEMBLE_COMP_BP = 0x0DC8;
        public const ulong OFF_WEAPON_ASSEMBLE_COMP_LEGACY = 0xBD0;
        public const ulong OFF_WEAPON_AMMO_COMP        = 0x0C70;
        public const ulong OFF_WEAPON_AMMO_COMP_BP     = 0x0DE0;
        public const ulong OFF_WEAPON_AMMO_COMP_LEGACY = 0x0BD8;
        public const ulong OFF_CACHED_MAGAZINE      = 0x280;
        public const ulong OFF_SG_WEAPON_CONTAINER  = 0x940;
        public const ulong OFF_MAX_STACK            = 0x120;
        public const ulong OFF_CONTAIN_LIST         = 0x208;
        public const ulong OFF_STACK_COUNT          = 0x8;

        // //// Armor ///////////////////////////////////////////////////////////////////
        public const ulong OFF_CHARACTER_ARMOR_MANAGER = 0x1B08;
        public const ulong OFF_ARMOR_LIST              = 0x278;
        public const ulong OFF_ARMOR_LEVEL             = 0x6E8;
        public const ulong OFF_ARMOR_COMMON_DATA       = 0x780;
        public const ulong OFF_ARMOR_TYPE_COMP         = 0x870;
        public const ulong OFF_ARMOR_TYPE_VAL          = 0x130;
        public const ulong OFF_ARMOR_DURABILITY        = 0x118;
        public const ulong OFF_ARMOR_DURABILITY_MAX    = 0x11C;

        // //// Inventory ///////////////////////////////////////////////////////////////
        public const ulong OFF_CHARACTER_INVENTORY_MANAGER = 0x1AE0;
        public const ulong OFF_INVENTORY_ARRAY             = 0x110;
        public const ulong OFF_WEAPON_LIST                 = 0x350;
        public const ulong OFF_COMMON_DATA_COMPONENT       = 0x780;
        public const ulong OFF_ASSEMBLE_COMP               = 0x838;
        public const ulong OFF_STANDARD_PRICE              = 0x10C;
        public const ulong OFF_ITEM_LOCALIZED_NAME         = 0x170;
        public const ulong OFF_ASSEMBLED_INVENTORY_LIST    = 0x1F8;
    }
}
