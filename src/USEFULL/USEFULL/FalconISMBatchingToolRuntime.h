// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FalconISMBatchingToolRuntime.FalconBatchedISMActor
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class AFalconBatchedISMActor : public AActor
{ 
public:
};

/// Struct /Script/FalconISMBatchingToolRuntime.FalconISMBatchingKey
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FFalconISMBatchingKey
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0008   (0x0010)  
	class ULevel*                                      Level;                                                      // 0x0018   (0x0008)  
	FName                                              CollisionProfile;                                           // 0x0020   (0x0008)  
	bool                                               bNegativeDeterminant;                                       // 0x0028   (0x0001)  
	bool                                               bCastShadow;                                                // 0x0029   (0x0001)  
	SDK_UNDEFINED(1,4830) /* TEnumAsByte<EDetailMode> */ __um(DetailMode);                                         // 0x002A   (0x0001)  
	bool                                               bOverrideLightmapRes;                                       // 0x002B   (0x0001)  
	int32_t                                            OverrideLightmapRes;                                        // 0x002C   (0x0004)  
	FVector                                            CenterPoint;                                                // 0x0030   (0x000C)  
	bool                                               bHasCenterPoint;                                            // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	TArray<FString>                                    OriginalSMCPaths;                                           // 0x0040   (0x0010)  
};

/// Class /Script/FalconISMBatchingToolRuntime.FalconISMBatchingKeyComponent
/// Size: 0x02C0 (704 bytes) (0x000270 - 0x0002C0) align 16 MaxSize: 0x02C0
class UFalconISMBatchingKeyComponent : public USceneComponent
{ 
public:
	FFalconISMBatchingKey                              Key;                                                        // 0x0270   (0x0050)  
};

/// Struct /Script/FalconISMBatchingToolRuntime.FalconISMBatchingParam
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FFalconISMBatchingParam
{ 
	bool                                               bEnable;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            ExcludeStaticMeshPathRegex;                                 // 0x0008   (0x0010)  
	int32_t                                            MinInstancesCount;                                          // 0x0018   (0x0004)  
	bool                                               bSupportRuntimeBatchUnbatch;                                // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              BatchCellSize;                                              // 0x0020   (0x0004)  
	float                                              BoundsMaxMultiplier;                                        // 0x0024   (0x0004)  
	float                                              BoundsSphereMaxRadius;                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/FalconISMBatchingToolRuntime.FalconISMBatchingSettings
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UFalconISMBatchingSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(80,4831) /* TMap<TWeakObjectPtr<UWorld*>, FFalconISMBatchingParam> */ __um(MapBatchingParams);   // 0x0038   (0x0050)  
};

/// Struct /Script/FalconISMBatchingToolRuntime.FalconISMBatchingSMHideMeta
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FFalconISMBatchingSMHideMeta
{ 
	bool                                               bCastShadow;                                                // 0x0000   (0x0001)  
};

/// Class /Script/FalconISMBatchingToolRuntime.FalconISMBatchingSMHideMetaComponent
/// Size: 0x0280 (640 bytes) (0x000270 - 0x000280) align 16 MaxSize: 0x0280
class UFalconISMBatchingSMHideMetaComponent : public USceneComponent
{ 
public:
	FFalconISMBatchingSMHideMeta                       Meta;                                                       // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0271   (0x000F)  MISSED
};

/// Class /Script/FalconISMBatchingToolRuntime.FalconISMBatchingStrategy
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFalconISMBatchingStrategy : public UObject
{ 
public:
};

/// Class /Script/FalconISMBatchingToolRuntime.FalconISMBatchingStrategyTK
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UFalconISMBatchingStrategyTK : public UFalconISMBatchingStrategy
{ 
public:
	float                                              BatchCellSize;                                              // 0x0028   (0x0004)  
	float                                              BoundsMaxMultiplier;                                        // 0x002C   (0x0004)  
	float                                              BoundsSphereMaxRadius;                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFalconISMBatchingToolLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.UnbatchAll
	// void UnbatchAll();                                                                                                       // [0x4f96e88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.ShouldBatch
	// bool ShouldBatch(FFalconISMBatchingParam& Param, class UStaticMeshComponent* SMC);                                       // [0x4f96d20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.IsBlueprintActorWithLogic
	// bool IsBlueprintActorWithLogic(class AActor* Actor);                                                                     // [0x4f96c88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.IsBatched
	// bool IsBatched(class UStaticMeshComponent* SMC);                                                                         // [0x4f96bf4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.GetSettings
	// class UFalconISMBatchingSettings* GetSettings();                                                                         // [0x4f96bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.GetOriginalSMCs
	// TArray<UStaticMeshComponent*> GetOriginalSMCs(class UInstancedStaticMeshComponent* ISMC);                                // [0x4f96ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.CleanupLevel
	// bool CleanupLevel(class ULevel* Level);                                                                                  // [0x4f96a48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.Cleanup
	// bool Cleanup();                                                                                                          // [0x4f96a24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FalconISMBatchingToolRuntime.FalconISMBatchingToolLibrary.BatchAll
	// void BatchAll();                                                                                                         // [0x4f96a10] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(AFalconBatchedISMActor) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(FFalconISMBatchingKey) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UFalconISMBatchingKeyComponent) == 0x02C0); // 704 bytes (0x000270 - 0x0002C0)
static_assert(sizeof(FFalconISMBatchingParam) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UFalconISMBatchingSettings) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(FFalconISMBatchingSMHideMeta) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(UFalconISMBatchingSMHideMetaComponent) == 0x0280); // 640 bytes (0x000270 - 0x000280)
static_assert(sizeof(UFalconISMBatchingStrategy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFalconISMBatchingStrategyTK) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UFalconISMBatchingToolLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FFalconISMBatchingKey, StaticMesh) == 0x0000);
static_assert(offsetof(FFalconISMBatchingKey, Materials) == 0x0008);
static_assert(offsetof(FFalconISMBatchingKey, Level) == 0x0018);
static_assert(offsetof(FFalconISMBatchingKey, CollisionProfile) == 0x0020);
static_assert(offsetof(FFalconISMBatchingKey, CenterPoint) == 0x0030);
static_assert(offsetof(FFalconISMBatchingKey, OriginalSMCPaths) == 0x0040);
static_assert(offsetof(UFalconISMBatchingKeyComponent, Key) == 0x0270);
static_assert(offsetof(FFalconISMBatchingParam, ExcludeStaticMeshPathRegex) == 0x0008);
static_assert(offsetof(UFalconISMBatchingSMHideMetaComponent, Meta) == 0x0270);
