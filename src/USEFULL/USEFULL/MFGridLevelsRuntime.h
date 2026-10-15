// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ProceduralMeshComponent

#pragma pack(push, 0x1)

/// Class /Script/MFGridLevelsRuntime.AutoHISM
/// Size: 0x03E0 (992 bytes) (0x000318 - 0x0003E0) align 8 MaxSize: 0x03E0
class AAutoHISM : public AActor
{ 
public:
	int32_t                                            MinInstanceCount;                                           // 0x0318   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x031C   (0x0004)  MISSED
	TMap<class UStaticMeshComponent*, int32_t>         StaticMesheInstanceIndexPairs;                              // 0x0320   (0x0050)  
	TMap<class UStaticMesh*, class UHierarchicalInstancedStaticMeshComponent*> SMToHISMMap;                        // 0x0370   (0x0050)  
	TArray<class UStaticMesh*>                         ForceVisibleStaticMeshes;                                   // 0x03C0   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> ForceInvisibleStaticMeshComponents;                   // 0x03D0   (0x0010)  


	/// Functions
	// Function /Script/MFGridLevelsRuntime.AutoHISM.ShowOriginalMeshes
	// void ShowOriginalMeshes(bool bShowOriginal);                                                                             // [0x46b4270] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.AutoHISM.DumpAutoHISMInfos
	// void DumpAutoHISMInfos();                                                                                                // [0x46b3998] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFGridLevelsRuntime.LODViewDistanceVolume
/// Size: 0x0398 (920 bytes) (0x000360 - 0x000398) align 8 MaxSize: 0x0398
class ALODViewDistanceVolume : public APhysicsVolume
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0360   (0x0010)  MISSED
	TArray<class AActor*>                              SubActors;                                                  // 0x0370   (0x0010)  
	TArray<FString>                                    LevelPathNames;                                             // 0x0380   (0x0010)  
	float                                              DrawDistanceMultiply;                                       // 0x0390   (0x0004)  
	float                                              DrawDistanceAdd;                                            // 0x0394   (0x0004)  


	/// Functions
	// Function /Script/MFGridLevelsRuntime.LODViewDistanceVolume.ActorEndOverlap
	// void ActorEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x46b3634] Native|Public        
	// Function /Script/MFGridLevelsRuntime.LODViewDistanceVolume.ActorBeginOverlap
	// void ActorBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x46b33cc] Native|Public|HasOutParms 
};

/// Class /Script/MFGridLevelsRuntime.MFFoliageBillboardMeshComponent
/// Size: 0x0590 (1424 bytes) (0x000588 - 0x000590) align 16 MaxSize: 0x0590
class UMFFoliageBillboardMeshComponent : public UProceduralMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0588   (0x0008)  MISSED
};

/// Struct /Script/MFGridLevelsRuntime.MFFoliageBillboardInstanceInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMFFoliageBillboardInstanceInfo
{ 
	int32_t                                            SectionIndex;                                               // 0x0000   (0x0004)  
	bool                                               bVisibile : 1;                                              // 0x0004:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Class /Script/MFGridLevelsRuntime.MFFoliageBillboardProxy
/// Size: 0x03A8 (936 bytes) (0x000318 - 0x0003A8) align 8 MaxSize: 0x03A8
class AMFFoliageBillboardProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0318   (0x0018)  MISSED
	class UMaterialInterface*                          MaterialInterface;                                          // 0x0330   (0x0008)  
	TMap<class ULevel*, FMFFoliageBillboardInstanceInfo> LoadedLevels;                                             // 0x0338   (0x0050)  
	int32_t                                            TotalProcMeshSectionNums;                                   // 0x0388   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	class UMFFoliageBillboardMeshComponent*            FoliageBillboardComponent;                                  // 0x0390   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0398   (0x0010)  MISSED
};

/// Struct /Script/MFGridLevelsRuntime.MFFoliageBillboardSection
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMFFoliageBillboardSection
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0000   (0x0008)  
	class UMaterialInterface*                          MaterialInterface;                                          // 0x0008   (0x0008)  
	TArray<FTransform>                                 PerInstanceTransform;                                       // 0x0010   (0x0010)  
	TArray<float>                                      PerInstanceCustomData;                                      // 0x0020   (0x0010)  
};

/// Class /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy
/// Size: 0x0350 (848 bytes) (0x000318 - 0x000350) align 8 MaxSize: 0x0350
class AMFFoliageBillboardSectionProxy : public AActor
{ 
public:
	float                                              BillboardMinHeightToMerge;                                  // 0x0318   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x031C   (0x0004)  MISSED
	TArray<FMFFoliageBillboardSection>                 BillboardSections;                                          // 0x0320   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0330   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.ResetNoShowLOD1
	// void ResetNoShowLOD1();                                                                                                  // [0x46b3c98] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.ResetNoShowLOD0
	// void ResetNoShowLOD0();                                                                                                  // [0x46b3c84] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.ResetNoShowLOD
	// void ResetNoShowLOD(char InNoShowLODCount);                                                                              // [0x46b3cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.ClearBillboardISM
	// void ClearBillboardISM();                                                                                                // [0x46b38ac] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.BuildBillboardSections
	// void BuildBillboardSections();                                                                                           // [0x46b3898] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.BuildBillboardISM
	// void BuildBillboardISM();                                                                                                // [0x46b3884] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.BBClearBillboardISM
	// void BBClearBillboardISM();                                                                                              // [0x46b38ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.BBBuildBillboardSections
	// void BBBuildBillboardSections();                                                                                         // [0x46b3898] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFFoliageBillboardSectionProxy.BBBuildBillboardISM
	// void BBBuildBillboardISM();                                                                                              // [0x46b3884] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFGridLevelsRuntime.MFGeneralDynamicCombineMeshComponent
/// Size: 0x0590 (1424 bytes) (0x000588 - 0x000590) align 16 MaxSize: 0x0590
class UMFGeneralDynamicCombineMeshComponent : public UProceduralMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0588   (0x0008)  MISSED
};

/// Struct /Script/MFGridLevelsRuntime.MFStaticMeshComponentForCombine
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMFStaticMeshComponentForCombine
{ 
	class UStaticMeshComponent*                        Component;                                                  // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
	uint32_t                                           HashCode;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x1C];                                      // 0x0014   (0x001C)  MISSED
};

/// Struct /Script/MFGridLevelsRuntime.MFStaticMeshComponentGroupForCombine
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMFStaticMeshComponentGroupForCombine
{ 
	TArray<FMFStaticMeshComponentForCombine>           StaticMeshComponents;                                       // 0x0000   (0x0010)  
};

/// Class /Script/MFGridLevelsRuntime.MFGeneralDynamicCombineProxy
/// Size: 0x0470 (1136 bytes) (0x000318 - 0x000470) align 8 MaxSize: 0x0470
class AMFGeneralDynamicCombineProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0318   (0x0010)  MISSED
	TArray<class UMaterialInterface*>                  MaterialInterfaces;                                         // 0x0328   (0x0010)  
	int32_t                                            MaxVertexNumsPerMesh;                                       // 0x0338   (0x0004)  
	int32_t                                            DistanceToUseMaxLOD;                                        // 0x033C   (0x0004)  
	int32_t                                            DistanceToHideMesh;                                         // 0x0340   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0344   (0x0004)  MISSED
	TMap<class ULevel*, FMFStaticMeshComponentGroupForCombine> AddStaticMeshComponentGroups;                       // 0x0348   (0x0050)  
	TMap<class UMaterialInterface*, int32_t>           AddedMaterials;                                             // 0x0398   (0x0050)  
	TArray<class UMFGeneralDynamicCombineMeshComponent*> CombinedMeshComponents;                                   // 0x03E8   (0x0010)  
	TMap<uint32_t, int32_t>                            SectionIndexMap;                                            // 0x03F8   (0x0050)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0448   (0x0028)  MISSED
};

/// Class /Script/MFGridLevelsRuntime.MFInstancedStaticMeshActor
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align 8 MaxSize: 0x0330
class AMFInstancedStaticMeshActor : public AActor
{ 
public:
	class UInstancedStaticMeshComponent*               InstancedStaticMeshComponent;                               // 0x0318   (0x0008)  
	SDK_UNDEFINED(16,5110) /* TArray<TWeakObjectPtr<UStaticMeshComponent*>> */ __um(RelatedStaticMeshComponents);  // 0x0320   (0x0010)  


	/// Functions
	// Function /Script/MFGridLevelsRuntime.MFInstancedStaticMeshActor.UngroupRuntime
	// void UngroupRuntime();                                                                                                   // [0x46b4680] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFGridLevelsRuntime.MFWorldComposition
/// Size: 0x0358 (856 bytes) (0x000090 - 0x000358) align 8 MaxSize: 0x0358
class UMFWorldComposition : public UWorldComposition
{ 
public:
	TArray<FString>                                    ClientLevelPathFilters;                                     // 0x0090   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnores;                                     // 0x00A0   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnoresForStandardPackage;                   // 0x00B0   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnoresForLowDevice;                         // 0x00C0   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnoresForMediumDevice;                      // 0x00D0   (0x0010)  
	TArray<FString>                                    ClientLevelPathConsider;                                    // 0x00E0   (0x0010)  
	TArray<FString>                                    ServerLevelPathFilters;                                     // 0x00F0   (0x0010)  
	TArray<FString>                                    ServerLevelPathIgnores;                                     // 0x0100   (0x0010)  
	TArray<FString>                                    ServerLevelPathConsider;                                    // 0x0110   (0x0010)  
	bool                                               bOverrideStreamingDistance;                                 // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              StreamingDistance;                                          // 0x0124   (0x0004)  
	TMap<FString, float>                               StreamingDistanceScaleLowMemory;                            // 0x0128   (0x0050)  
	TMap<int64_t, class UMFPlayModeLevelStreamingPolicy*> PlayModeLevelStreamingPolicies;                          // 0x0178   (0x0050)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x01C8   (0x0068)  MISSED
	TArray<class ULevelStreaming*>                     DiscardTilesStreaming;                                      // 0x0230   (0x0010)  
	TArray<class ULevelStreaming*>                     VolumedLevelStreaming;                                      // 0x0240   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0250   (0x0010)  MISSED
	bool                                               LimitLoadLevel;                                             // 0x0260   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	int32_t                                            MaxAsynLoadNum;                                             // 0x0264   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0268   (0x0008)  MISSED
	SDK_UNDEFINED(80,5111) /* TSet<ULevelStreaming*> */ __um(CentreLevels);                                        // 0x0270   (0x0050)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x02C0   (0x0004)  MISSED
	int32_t                                            PerFrameCount;                                              // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData06_6[0x28];                                      // 0x02C8   (0x0028)  MISSED
	TArray<class AWorldCompositionLevelLoadActor*>     LevelLoadActors;                                            // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData07_7[0x58];                                      // 0x0300   (0x0058)  MISSED


	/// Functions
	// Function /Script/MFGridLevelsRuntime.MFWorldComposition.UnLoadLevel
	// void UnLoadLevel(FString LevelName);                                                                                     // [0x46b43f4] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFWorldComposition.SetOverrideStreamingDistance
	// void SetOverrideStreamingDistance(bool bOverride, float StreamingDistance);                                              // [0x46b4030] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFWorldComposition.RestoreLevel
	// void RestoreLevel(FString LevelName);                                                                                    // [0x46b3d44] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFWorldComposition.RegisterLevelLoadActor
	// void RegisterLevelLoadActor(class AWorldCompositionLevelLoadActor* CurrLevelLoadActor);                                  // [0x46b3ab4] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFWorldComposition.IsCenterLevelLoadComplete
	// bool IsCenterLevelLoadComplete();                                                                                        // [0x46b39ac] Final|Native|Public  
	// Function /Script/MFGridLevelsRuntime.MFWorldComposition.AddtionFilterTiles
	// void AddtionFilterTiles(TArray<FString> AddtionIgnores);                                                                 // [0x46b37bc] Final|Native|Public  
};

/// Class /Script/MFGridLevelsRuntime.MFPlayModeLevelStreamingPolicy
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFPlayModeLevelStreamingPolicy : public UObject
{ 
public:
};

/// Class /Script/MFGridLevelsRuntime.MFPlayModeLevelStreamingPolicy_FixedViewLocation
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMFPlayModeLevelStreamingPolicy_FixedViewLocation : public UMFPlayModeLevelStreamingPolicy
{ 
public:
	FVector                                            ViewLocation;                                               // 0x0028   (0x000C)  
	int32_t                                            LevelStreamingDistance;                                     // 0x0034   (0x0004)  
};

/// Class /Script/MFGridLevelsRuntime.MFPlayModeLevelStreamingPolicy_ByLevelLoadActor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFPlayModeLevelStreamingPolicy_ByLevelLoadActor : public UMFPlayModeLevelStreamingPolicy
{ 
public:
};

/// Class /Script/MFGridLevelsRuntime.MFWorldCompositionActor
/// Size: 0x04A8 (1192 bytes) (0x000318 - 0x0004A8) align 8 MaxSize: 0x04A8
class AMFWorldCompositionActor : public AActor
{ 
public:
	TArray<FString>                                    ClientLevelPathFilters;                                     // 0x0318   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnores;                                     // 0x0328   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnoresForStandardPackage;                   // 0x0338   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnoresForLowDevice;                         // 0x0348   (0x0010)  
	TArray<FString>                                    ClientLevelPathIgnoresForMediumDevice;                      // 0x0358   (0x0010)  
	TArray<FString>                                    ClientLevelPathConsider;                                    // 0x0368   (0x0010)  
	TArray<FString>                                    ServerLevelPathFilters;                                     // 0x0378   (0x0010)  
	TArray<FString>                                    ServerLevelPathIgnores;                                     // 0x0388   (0x0010)  
	TArray<FString>                                    ServerLevelPathConsider;                                    // 0x0398   (0x0010)  
	bool                                               bUseLandscapeMeshProxy;                                     // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x03A9   (0x003F)  MISSED
	class UMaterialParameterCollection*                MPC_LandscapeRegion;                                        // 0x03E8   (0x0008)  
	bool                                               bOverrideStreamingDistance;                                 // 0x03F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x03F1   (0x0003)  MISSED
	float                                              StreamingDistance;                                          // 0x03F4   (0x0004)  
	TMap<FString, float>                               StreamingDistanceScaleLowMemory;                            // 0x03F8   (0x0050)  
	TMap<int64_t, class UMFPlayModeLevelStreamingPolicy*> PlayModeLevelStreamingPolicies;                          // 0x0448   (0x0050)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0498   (0x0010)  MISSED
};

/// Class /Script/MFGridLevelsRuntime.MFWorldCompositionStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFWorldCompositionStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.UnLoadLevel
	// void UnLoadLevel(class UObject* WorldContextObject, FString LevelName);                                                  // [0x46b451c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.UnLimitLevelLoad
	// void UnLimitLevelLoad(class UObject* WorldContextObject, bool bEnabled);                                                 // [0x46b430c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.SetOverrideStreamingDistance
	// void SetOverrideStreamingDistance(class UObject* WorldContextObject, bool bOverride, float StreamingDistance);           // [0x46b4130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.SetLimitLoadLevelEnable
	// void SetLimitLoadLevelEnable(class UObject* WorldContextObject, bool bEnable);                                           // [0x46b3efc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.RestoreLevel
	// void RestoreLevel(class UObject* WorldContextObject, FString LevelName);                                                 // [0x46b3df8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.ReloadLimitLoadLevel
	// void ReloadLimitLoadLevel(class UObject* WorldContextObject);                                                            // [0x46b3bbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.IsCenterLevelLoadComplete
	// bool IsCenterLevelLoadComplete(class UObject* WorldContextObject);                                                       // [0x46b39d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFGridLevelsRuntime.MFWorldCompositionStatics.DoesHaveWorldComposition
	// bool DoesHaveWorldComposition(class UObject* WorldContextObject);                                                        // [0x46b38c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFGridLevelsRuntime.WorldCompositionLevelLoadActor
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align 8 MaxSize: 0x0330
class AWorldCompositionLevelLoadActor : public AActor
{ 
public:
	SDK_UNDEFINED(1,5112) /* EMFLevelLoadType */       __um(LevelLoadType);                                        // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0319   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x031C   (0x0004)  
	bool                                               bIgnoreViewTarget;                                          // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0321   (0x0007)  MISSED
	class UBoxComponent*                               BoxComponent;                                               // 0x0328   (0x0008)  
};

/// Struct /Script/MFGridLevelsRuntime.SelectPlayModeIdParam
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSelectPlayModeIdParam
{ 
	bool                                               bUsePlayModeId;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MainModeID;                                                 // 0x0004   (0x0004)  
	int32_t                                            SubModeID;                                                  // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	int32_t                                            SpecialID;                                                  // 0x0010   (0x0004)  
	int32_t                                            Difficulty;                                                 // 0x0014   (0x0004)  
	int64_t                                            PlayModeId;                                                 // 0x0018   (0x0008)  
};

/// Struct /Script/MFGridLevelsRuntime.CreatePlayModeLevelStreamingPolicyParam
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCreatePlayModeLevelStreamingPolicyParam
{ 
	FSelectPlayModeIdParam                             PlayMode;                                                   // 0x0000   (0x0020)  
	class UClass*                                      PolicyClass;                                                // 0x0020   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(AAutoHISM) == 0x03E0); // 992 bytes (0x000318 - 0x0003E0)
static_assert(sizeof(ALODViewDistanceVolume) == 0x0398); // 920 bytes (0x000360 - 0x000398)
static_assert(sizeof(UMFFoliageBillboardMeshComponent) == 0x0590); // 1424 bytes (0x000588 - 0x000590)
static_assert(sizeof(FMFFoliageBillboardInstanceInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(AMFFoliageBillboardProxy) == 0x03A8); // 936 bytes (0x000318 - 0x0003A8)
static_assert(sizeof(FMFFoliageBillboardSection) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(AMFFoliageBillboardSectionProxy) == 0x0350); // 848 bytes (0x000318 - 0x000350)
static_assert(sizeof(UMFGeneralDynamicCombineMeshComponent) == 0x0590); // 1424 bytes (0x000588 - 0x000590)
static_assert(sizeof(FMFStaticMeshComponentForCombine) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMFStaticMeshComponentGroupForCombine) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMFGeneralDynamicCombineProxy) == 0x0470); // 1136 bytes (0x000318 - 0x000470)
static_assert(sizeof(AMFInstancedStaticMeshActor) == 0x0330); // 816 bytes (0x000318 - 0x000330)
static_assert(sizeof(UMFWorldComposition) == 0x0358); // 856 bytes (0x000090 - 0x000358)
static_assert(sizeof(UMFPlayModeLevelStreamingPolicy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFPlayModeLevelStreamingPolicy_FixedViewLocation) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMFPlayModeLevelStreamingPolicy_ByLevelLoadActor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMFWorldCompositionActor) == 0x04A8); // 1192 bytes (0x000318 - 0x0004A8)
static_assert(sizeof(UMFWorldCompositionStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AWorldCompositionLevelLoadActor) == 0x0330); // 816 bytes (0x000318 - 0x000330)
static_assert(sizeof(FSelectPlayModeIdParam) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCreatePlayModeLevelStreamingPolicyParam) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(AAutoHISM, StaticMesheInstanceIndexPairs) == 0x0320);
static_assert(offsetof(AAutoHISM, SMToHISMMap) == 0x0370);
static_assert(offsetof(AAutoHISM, ForceVisibleStaticMeshes) == 0x03C0);
static_assert(offsetof(AAutoHISM, ForceInvisibleStaticMeshComponents) == 0x03D0);
static_assert(offsetof(ALODViewDistanceVolume, SubActors) == 0x0370);
static_assert(offsetof(ALODViewDistanceVolume, LevelPathNames) == 0x0380);
static_assert(offsetof(AMFFoliageBillboardProxy, MaterialInterface) == 0x0330);
static_assert(offsetof(AMFFoliageBillboardProxy, LoadedLevels) == 0x0338);
static_assert(offsetof(AMFFoliageBillboardProxy, FoliageBillboardComponent) == 0x0390);
static_assert(offsetof(FMFFoliageBillboardSection, StaticMesh) == 0x0000);
static_assert(offsetof(FMFFoliageBillboardSection, MaterialInterface) == 0x0008);
static_assert(offsetof(FMFFoliageBillboardSection, PerInstanceTransform) == 0x0010);
static_assert(offsetof(FMFFoliageBillboardSection, PerInstanceCustomData) == 0x0020);
static_assert(offsetof(AMFFoliageBillboardSectionProxy, BillboardSections) == 0x0320);
static_assert(offsetof(FMFStaticMeshComponentForCombine, Component) == 0x0000);
static_assert(offsetof(FMFStaticMeshComponentForCombine, Material) == 0x0008);
static_assert(offsetof(FMFStaticMeshComponentGroupForCombine, StaticMeshComponents) == 0x0000);
static_assert(offsetof(AMFGeneralDynamicCombineProxy, MaterialInterfaces) == 0x0328);
static_assert(offsetof(AMFGeneralDynamicCombineProxy, AddStaticMeshComponentGroups) == 0x0348);
static_assert(offsetof(AMFGeneralDynamicCombineProxy, AddedMaterials) == 0x0398);
static_assert(offsetof(AMFGeneralDynamicCombineProxy, CombinedMeshComponents) == 0x03E8);
static_assert(offsetof(AMFGeneralDynamicCombineProxy, SectionIndexMap) == 0x03F8);
static_assert(offsetof(AMFInstancedStaticMeshActor, InstancedStaticMeshComponent) == 0x0318);
static_assert(offsetof(UMFWorldComposition, ClientLevelPathFilters) == 0x0090);
static_assert(offsetof(UMFWorldComposition, ClientLevelPathIgnores) == 0x00A0);
static_assert(offsetof(UMFWorldComposition, ClientLevelPathIgnoresForStandardPackage) == 0x00B0);
static_assert(offsetof(UMFWorldComposition, ClientLevelPathIgnoresForLowDevice) == 0x00C0);
static_assert(offsetof(UMFWorldComposition, ClientLevelPathIgnoresForMediumDevice) == 0x00D0);
static_assert(offsetof(UMFWorldComposition, ClientLevelPathConsider) == 0x00E0);
static_assert(offsetof(UMFWorldComposition, ServerLevelPathFilters) == 0x00F0);
static_assert(offsetof(UMFWorldComposition, ServerLevelPathIgnores) == 0x0100);
static_assert(offsetof(UMFWorldComposition, ServerLevelPathConsider) == 0x0110);
static_assert(offsetof(UMFWorldComposition, StreamingDistanceScaleLowMemory) == 0x0128);
static_assert(offsetof(UMFWorldComposition, PlayModeLevelStreamingPolicies) == 0x0178);
static_assert(offsetof(UMFWorldComposition, DiscardTilesStreaming) == 0x0230);
static_assert(offsetof(UMFWorldComposition, VolumedLevelStreaming) == 0x0240);
static_assert(offsetof(UMFWorldComposition, LevelLoadActors) == 0x02F0);
static_assert(offsetof(UMFPlayModeLevelStreamingPolicy_FixedViewLocation, ViewLocation) == 0x0028);
static_assert(offsetof(AMFWorldCompositionActor, ClientLevelPathFilters) == 0x0318);
static_assert(offsetof(AMFWorldCompositionActor, ClientLevelPathIgnores) == 0x0328);
static_assert(offsetof(AMFWorldCompositionActor, ClientLevelPathIgnoresForStandardPackage) == 0x0338);
static_assert(offsetof(AMFWorldCompositionActor, ClientLevelPathIgnoresForLowDevice) == 0x0348);
static_assert(offsetof(AMFWorldCompositionActor, ClientLevelPathIgnoresForMediumDevice) == 0x0358);
static_assert(offsetof(AMFWorldCompositionActor, ClientLevelPathConsider) == 0x0368);
static_assert(offsetof(AMFWorldCompositionActor, ServerLevelPathFilters) == 0x0378);
static_assert(offsetof(AMFWorldCompositionActor, ServerLevelPathIgnores) == 0x0388);
static_assert(offsetof(AMFWorldCompositionActor, ServerLevelPathConsider) == 0x0398);
static_assert(offsetof(AMFWorldCompositionActor, MPC_LandscapeRegion) == 0x03E8);
static_assert(offsetof(AMFWorldCompositionActor, StreamingDistanceScaleLowMemory) == 0x03F8);
static_assert(offsetof(AMFWorldCompositionActor, PlayModeLevelStreamingPolicies) == 0x0448);
static_assert(offsetof(AWorldCompositionLevelLoadActor, BoxComponent) == 0x0328);
static_assert(offsetof(FCreatePlayModeLevelStreamingPolicyParam, PlayMode) == 0x0000);
static_assert(offsetof(FCreatePlayModeLevelStreamingPolicyParam, PolicyClass) == 0x0020);
