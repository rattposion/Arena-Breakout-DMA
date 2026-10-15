// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MFPluginWrapper
/// dependency: SGFramework
/// dependency: UAGame

#pragma pack(push, 0x1)

/// Class /Game/Startup/GameBase/BPC_GameInstanceGameInfoComponent.BPC_GameInstanceGameInfoComponent_C
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UBPC_GameInstanceGameInfoComponent_C : public UUAGameInstanceGameInfoComponent
{ 
public:
};

/// Class /Game/Startup/GameBase/BPC_GameinstanceWeakNetworkComponent.BPC_GameInstanceWeakNetworkComponent_C
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UBPC_GameInstanceWeakNetworkComponent_C : public USGGameInstanceWeakNetworkComponent
{ 
public:
};

/// Class /Game/Startup/GameBase/BPC_GameInstanceG6PlatformComponent.BPC_GameInstanceG6PlatformComponent_C
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UBPC_GameInstanceG6PlatformComponent_C : public USGGameInstanceG6PlatformComponent
{ 
public:
};

/// Class /Game/Startup/GameBase/BPC_GameInstancePluginManagerComponent.BPC_GameInstancePluginManagerComponent_C
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UBPC_GameInstancePluginManagerComponent_C : public USGGameInstancePluginManagerComponent
{ 
public:
};

/// Class /Game/Startup/GameBase/BPC_GAS_GlobalComponent.BPC_GAS_GlobalComponent_C
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UBPC_GAS_GlobalComponent_C : public USGGIGASGlobalComponent
{ 
public:
};

/// Class /Game/Startup/GameBase/BPC_GILoadingTipsComponent.BPC_GILoadingTipsComponent_C
/// Size: 0x0170 (368 bytes) (0x000170 - 0x000170) align 8 MaxSize: 0x0170
class UBPC_GILoadingTipsComponent_C : public UUAGILoadingTipsComponent
{ 
public:
};

/// Class /Game/Startup/GameBase/BP_GameInstance.BP_GameInstance_C
/// Size: 0x0378 (888 bytes) (0x000368 - 0x000378) align 8 MaxSize: 0x0378
class UBP_GameInstance_C : public USGGameInstance
{ 
public:
	SDK_UNDEFINED(16,5188) /* FMulticastInlineDelegate */ __um(OnAndroidBackPressed);                              // 0x0368   (0x0010)  


	/// Functions
	// Function /Game/Startup/GameBase/BP_GameInstance.BP_GameInstance_C.OnAndroidBackPressed__DelegateSignature
	// void OnAndroidBackPressed__DelegateSignature();                                                                          // [0x182d6bc] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Startup/GameBase/BP_GameInstance_HD.BP_GameInstance_HD_C
/// Size: 0x0378 (888 bytes) (0x000378 - 0x000378) align 8 MaxSize: 0x0378
class UBP_GameInstance_HD_C : public UBP_GameInstance_C
{ 
public:
};

/// Class /Game/Startup/Launcher/Blueprints/BP_GCloudDolphin.BP_GCloudDolphin_C
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UBP_GCloudDolphin_C : public UMFGCloudDolphinService
{ 
public:


	/// Functions
	// Function /Game/Startup/Launcher/Blueprints/BP_GCloudDolphin.BP_GCloudDolphin_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x182d6bc] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Startup/Launcher/Blueprints/BP_WeGameDLCStrategy.BP_WeGameDLCStrategy_C
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UBP_WeGameDLCStrategy_C : public UMFGCloudPufferService
{ 
public:


	/// Functions
	// Function /Game/Startup/Launcher/Blueprints/BP_WeGameDLCStrategy.BP_WeGameDLCStrategy_C.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x182d6bc] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

#pragma pack(pop)


static_assert(sizeof(UBPC_GameInstanceGameInfoComponent_C) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UBPC_GameInstanceWeakNetworkComponent_C) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UBPC_GameInstanceG6PlatformComponent_C) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UBPC_GameInstancePluginManagerComponent_C) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UBPC_GAS_GlobalComponent_C) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UBPC_GILoadingTipsComponent_C) == 0x0170); // 368 bytes (0x000170 - 0x000170)
static_assert(sizeof(UBP_GameInstance_C) == 0x0378); // 888 bytes (0x000368 - 0x000378)
static_assert(sizeof(UBP_GameInstance_HD_C) == 0x0378); // 888 bytes (0x000378 - 0x000378)
static_assert(sizeof(UBP_GCloudDolphin_C) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(UBP_WeGameDLCStrategy_C) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
