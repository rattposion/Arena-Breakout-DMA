// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/FalconMapRunner.FalconMapRunnerBody
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FFalconMapRunnerBody
{ 
	TArray<FVector>                                    Points;                                                     // 0x0000   (0x0010)  
	TArray<FQuat>                                      Quats;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      Times;                                                      // 0x0020   (0x0010)  
};

/// Class /Script/FalconMapRunner.FalconMapRunnerAsset
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UFalconMapRunnerAsset : public UObject
{ 
public:
	FFalconMapRunnerBody                               Body;                                                       // 0x0028   (0x0030)  
};

/// Class /Script/FalconMapRunner.FalconMapRunnerSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFalconMapRunnerSettings : public UObject
{ 
public:
	FName                                              RecordName;                                                 // 0x0028   (0x0008)  
	bool                                               Record;                                                     // 0x0030   (0x0001)  
	bool                                               Run;                                                        // 0x0031   (0x0001)  
	bool                                               Debug;                                                      // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Class /Script/FalconMapRunner.FalconMapRunnerServiceBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFalconMapRunnerServiceBase : public UObject
{ 
public:
};

/// Class /Script/FalconMapRunner.FalconMapRunnerServiceNRC
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFalconMapRunnerServiceNRC : public UFalconMapRunnerServiceBase
{ 
public:
};

/// Struct /Script/FalconMapRunner.FalconMapRunnerContext
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FFalconMapRunnerContext
{ 
	bool                                               bPIE;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	TWeakObjectPtr<class ADebugCameraController*>      DebugCameraController;                                      // 0x0004   (0x0008)  
	TWeakObjectPtr<class APlayerController*>           PlayerController;                                           // 0x000C   (0x0008)  
	SDK_UNDEFINED(1,4832) /* EFalconMapRunnerStatus */ __um(status);                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	class UFalconMapRunnerAsset*                       Asset;                                                      // 0x0018   (0x0008)  
	int32_t                                            I0;                                                         // 0x0020   (0x0004)  
	int32_t                                            RecordDistance;                                             // 0x0024   (0x0004)  
	int32_t                                            RecordInterval;                                             // 0x0028   (0x0004)  
	float                                              RecordTimeCurr;                                             // 0x002C   (0x0004)  
	TArray<FString>                                    ServiceStats;                                               // 0x0030   (0x0010)  
	FString                                            DumpPath;                                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/FalconMapRunner.FalconMapRunnerSubsystem
/// Size: 0x00F8 (248 bytes) (0x000030 - 0x0000F8) align 8 MaxSize: 0x00F8
class UFalconMapRunnerSubsystem : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(1,4833) /* EFalconMapRunnerOpMode */ __um(OpMode);                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TMap<FName, class UFalconMapRunnerAsset*>          AssetMap;                                                   // 0x0038   (0x0050)  
	FFalconMapRunnerContext                            Context;                                                    // 0x0088   (0x0068)  
	class UFalconMapRunnerServiceBase*                 Service;                                                    // 0x00F0   (0x0008)  
};

/// Struct /Script/FalconMapRunner.FalconMapRunnerScreenshot
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFalconMapRunnerScreenshot
{ 
	TArray<FColor>                                     Data;                                                       // 0x0000   (0x0010)  
	FString                                            Filename;                                                   // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FFalconMapRunnerBody) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UFalconMapRunnerAsset) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UFalconMapRunnerSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UFalconMapRunnerServiceBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFalconMapRunnerServiceNRC) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFalconMapRunnerContext) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UFalconMapRunnerSubsystem) == 0x00F8); // 248 bytes (0x000030 - 0x0000F8)
static_assert(sizeof(FFalconMapRunnerScreenshot) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FFalconMapRunnerBody, Points) == 0x0000);
static_assert(offsetof(FFalconMapRunnerBody, Quats) == 0x0010);
static_assert(offsetof(FFalconMapRunnerBody, Times) == 0x0020);
static_assert(offsetof(UFalconMapRunnerAsset, Body) == 0x0028);
static_assert(offsetof(UFalconMapRunnerSettings, RecordName) == 0x0028);
static_assert(offsetof(FFalconMapRunnerContext, DebugCameraController) == 0x0004);
static_assert(offsetof(FFalconMapRunnerContext, PlayerController) == 0x000C);
static_assert(offsetof(FFalconMapRunnerContext, Asset) == 0x0018);
static_assert(offsetof(FFalconMapRunnerContext, ServiceStats) == 0x0030);
static_assert(offsetof(FFalconMapRunnerContext, DumpPath) == 0x0040);
static_assert(offsetof(UFalconMapRunnerSubsystem, AssetMap) == 0x0038);
static_assert(offsetof(UFalconMapRunnerSubsystem, Context) == 0x0088);
static_assert(offsetof(UFalconMapRunnerSubsystem, Service) == 0x00F0);
static_assert(offsetof(FFalconMapRunnerScreenshot, Data) == 0x0000);
static_assert(offsetof(FFalconMapRunnerScreenshot, Filename) == 0x0010);
