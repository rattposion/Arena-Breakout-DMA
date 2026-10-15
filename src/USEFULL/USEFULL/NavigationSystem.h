// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0368 (872 bytes) (0x000350 - 0x000368) align 8 MaxSize: 0x0368
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0350   (0x0008)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0358   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0361   (0x0007)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x7db2858] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0128 (296 bytes) (0x0000F8 - 0x000128) align 8 MaxSize: 0x0128
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x24];                                      // 0x00F8   (0x0024)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x011C:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	class UObject*                                     CachedNavParent;                                            // 0x0120   (0x0008)  


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// void SetNavigationRelevancy(bool bRelevant);                                                                             // [0x7db2a04] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15F8 (5624 bytes) (0x000028 - 0x0015F8) align 8 MaxSize: 0x15F8
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	class ANavigationData*                             MainNavData;                                                // 0x0028   (0x0008)  
	class ANavigationData*                             AbstractNavData;                                            // 0x0030   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0038   (0x0008)  
	TSoftObjectPtr<class UClass*>                      CrowdManagerClass;                                          // 0x0040   (0x0028)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0068:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0068:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0068:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0068:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0068:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0068:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0068:6 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0068:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0069:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              NavMeshQueryFindPathTimeLimit;                              // 0x006C   (0x0004)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x0074   (0x0004)  
	SDK_UNDEFINED(1,951) /* ENavDataGatheringModeConfig */ __um(DataGatheringMode);                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x007C   (0x0004)  
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0080   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x0090   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x0098   (0x0010)  
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x00B8   (0x0010)  MISSED
	SDK_UNDEFINED(16,952) /* FMulticastInlineDelegate */ __um(OnNavDataRegisteredEvent);                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,953) /* FMulticastInlineDelegate */ __um(OnNavigationGenerationFinishedDelegate);             // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,954) /* FMulticastInlineDelegate */ __um(OnNavigationGenerationBeginDelegate);                // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData06_6[0xDC];                                      // 0x00F8   (0x00DC)  MISSED
	SDK_UNDEFINED(1,955) /* FNavigationSystemRunMode */ __um(OperationMode);                                       // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData07_6[0x13FF];                                    // 0x01D5   (0x13FF)  MISSED
	float                                              DirtyAreasUpdateFreq;                                       // 0x15D4   (0x0004)  
	unsigned char                                      UnknownData08_7[0x20];                                      // 0x15D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                                 // [0x7db2450] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                                 // [0x7db232c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                               // [0x7db2244] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                                 // [0x7db2158] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);                                                      // [0x7db20bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                      // [0x7db20a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);              // [0x7db1f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	// FVector ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x7db1d2c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                   // [0x7db1c0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x7db191c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                    // [0x7db17b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x7db1508] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x7db1264] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x7db0fc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x7db0fc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                                  // [0x7db0ef0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                          // [0x7db0e58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	// FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x7db0c24] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	// FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x7db09f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x7db072c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, float& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x7db0440] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                       // [0x7db036c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& PathStart, FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass); // [0x7db0060] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass); // [0x7dafa78] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0050:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0050:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0050:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0030   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x0034   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0038   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x003C   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0040:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0040:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0040:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0040:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0040:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0040:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0040:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0040:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0041:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0041:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0041:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0041:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0041:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0041:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0041:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0041:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0042   (0x0006)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNavigationFilterArea
{ 
	class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0028   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0038   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSupportedAreaData
{ 
	FString                                            AreaClassName;                                              // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0520 (1312 bytes) (0x000318 - 0x000520) align 8 MaxSize: 0x0520
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0318   (0x0008)  MISSED
	class UPrimitiveComponent*                         RenderingComp;                                              // 0x0320   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x0328   (0x0078)  
	bool                                               bEnableDrawing : 1;                                         // 0x03A0:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x03A0:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x03A0:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x03A0:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x03A0:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x03A0:5 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03A1   (0x0003)  MISSED
	SDK_UNDEFINED(1,956) /* ERuntimeGenerationType */  __um(RuntimeGeneration);                                    // 0x03A4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x03A5   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x03A8   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x03AC   (0x0004)  
	unsigned char                                      UnknownData03_6[0x108];                                     // 0x03B0   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x04C8   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x05E8 (1512 bytes) (0x000520 - 0x0005E8) align 8 MaxSize: 0x05E8
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x0520:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x0520:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x0520:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x0520:3 (0x0001)  
	bool                                               bDrawNavMeshClosedAngle : 1;                                // 0x0520:4 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x0520:5 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x0520:6 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x0520:7 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x0521:0 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x0521:1 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x0521:2 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x0521:3 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x0521:4 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x0521:5 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x0521:6 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x0521:7 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x0522:0 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x0522:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0523   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x0524   (0x0004)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x0528:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0529   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x052C   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0530   (0x0004)  
	float                                              CellSize;                                                   // 0x0534   (0x0004)  
	float                                              CellHeight;                                                 // 0x0538   (0x0004)  
	float                                              AgentRadius;                                                // 0x053C   (0x0004)  
	float                                              AgentHeight;                                                // 0x0540   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0544   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x0548   (0x0004)  
	float                                              MinRegionArea;                                              // 0x054C   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0550   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0554   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0558   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x055C   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x0560   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x0564   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0568   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x056C   (0x000C)  
	float                                              DefaultDrawDistance;                                        // 0x0578   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x057C   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x0580   (0x0004)  
	SDK_UNDEFINED(1,957) /* TEnumAsByte<ERecastPartitioning> */ __um(RegionPartitioning);                          // 0x0584   (0x0001)  
	SDK_UNDEFINED(1,958) /* TEnumAsByte<ERecastPartitioning> */ __um(LayerPartitioning);                           // 0x0585   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0586   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0588   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x058C   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x0590:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x0590:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x0590:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x0590:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x0590:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x0590:5 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x0590:6 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x0590:7 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x0591:0 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x0591:1 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x0591:2 (0x0001)  
	bool                                               bUseVoxelCache : 1;                                         // 0x0591:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0592   (0x0002)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x0594   (0x0004)  
	float                                              HeuristicScale;                                             // 0x0598   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x059C   (0x0004)  
	unsigned char                                      UnknownData04_7[0x48];                                      // 0x05A0   (0x0048)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);           // [0x7db26b0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0520 (1312 bytes) (0x000520 - 0x000520) align 8 MaxSize: 0x0520
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x00C8 (200 bytes) (0x000048 - 0x0000C8) align 8 MaxSize: 0x00C8
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	class UClass*                                      Agent0Area;                                                 // 0x0048   (0x0008)  
	class UClass*                                      Agent1Area;                                                 // 0x0050   (0x0008)  
	class UClass*                                      Agent2Area;                                                 // 0x0058   (0x0008)  
	class UClass*                                      Agent3Area;                                                 // 0x0060   (0x0008)  
	class UClass*                                      Agent4Area;                                                 // 0x0068   (0x0008)  
	class UClass*                                      Agent5Area;                                                 // 0x0070   (0x0008)  
	class UClass*                                      Agent6Area;                                                 // 0x0078   (0x0008)  
	class UClass*                                      Agent7Area;                                                 // 0x0080   (0x0008)  
	class UClass*                                      Agent8Area;                                                 // 0x0088   (0x0008)  
	class UClass*                                      Agent9Area;                                                 // 0x0090   (0x0008)  
	class UClass*                                      Agent10Area;                                                // 0x0098   (0x0008)  
	class UClass*                                      Agent11Area;                                                // 0x00A0   (0x0008)  
	class UClass*                                      Agent12Area;                                                // 0x00A8   (0x0008)  
	class UClass*                                      Agent13Area;                                                // 0x00B0   (0x0008)  
	class UClass*                                      Agent14Area;                                                // 0x00B8   (0x0008)  
	class UClass*                                      Agent15Area;                                                // 0x00C0   (0x0008)  
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	float                                              Height;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	FVector                                            Extent;                                                     // 0x000C   (0x000C)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align 8 MaxSize: 0x00D8
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0070   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0080   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0090   (0x0010)  
	class UClass*                                      AreaClass;                                                  // 0x00A0   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00A8:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00A8:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x2F];                                      // 0x00A9   (0x002F)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0520 (1312 bytes) (0x000520 - 0x000520) align 8 MaxSize: 0x0520
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNavGraphNode
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x02A0 (672 bytes) (0x000270 - 0x0002A0) align 16 MaxSize: 0x02A0
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x0270   (0x0018)  
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x0288   (0x0008)  
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x0290   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align 8 MaxSize: 0x0100
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00F8   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00FC   (0x0004)  
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UNavigationPath : public UObject
{ 
public:
	SDK_UNDEFINED(16,959) /* FMulticastInlineDelegate */ __um(PathUpdatedNotifier);                                // 0x0028   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,960) /* TEnumAsByte<ENavigationOptionFlag> */ __um(RecalculateOnInvalidation);                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x0049   (0x003F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	// bool IsValid();                                                                                                          // [0x7db0fa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	// bool IsStringPulled();                                                                                                   // [0x21793e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	// bool IsPartial();                                                                                                        // [0x7db0f88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	// float GetPathLength();                                                                                                   // [0x7db0704] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	// float GetPathCost();                                                                                                     // [0x7db0404] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	// FString GetDebugString();                                                                                                // [0x7db02ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                              // [0x7daf9b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                              // [0x7daf8b4] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x0408 (1032 bytes) (0x000318 - 0x000408) align 8 MaxSize: 0x0408
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0318   (0x0010)  MISSED
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0328   (0x0008)  
	class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x0330   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x0338:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0339   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x0340   (0x0030)  
	FVector                                            QueryingExtent;                                             // 0x0370   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x037C   (0x0004)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x0380   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x0388   (0x000C)  
	bool                                               bProjectedLocationValid : 1;                                // 0x0394:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x0394:1 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0395   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x0398   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x039C   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x03A0:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x03A0:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x03A0:2 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x03A0:3 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x03A0:4 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x03A0:5 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x03A0:6 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x03A0:7 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x03A1   (0x0003)  MISSED
	SDK_UNDEFINED(1,961) /* TEnumAsByte<ENavCostDisplay> */ __um(CostDisplayMode);                                 // 0x03A4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x03A5   (0x0003)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x03A8   (0x0008)  
	bool                                               bPathExist : 1;                                             // 0x03B0:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x03B0:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x03B0:2 (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x03B1   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x03B4   (0x0004)  
	float                                              PathCost;                                                   // 0x03B8   (0x0004)  
	int32_t                                            PathfindingSteps;                                           // 0x03BC   (0x0004)  
	class ANavigationTestingActor*                     OtherActor;                                                 // 0x03C0   (0x0008)  
	class UClass*                                      FilterClass;                                                // 0x03C8   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x03D0   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x03D4   (0x0004)  
	unsigned char                                      UnknownData07_7[0x30];                                      // 0x03D8   (0x0030)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0510 (1296 bytes) (0x0004F0 - 0x000510) align 16 MaxSize: 0x0510
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04F0   (0x0008)  MISSED
	TArray<FNavigationLink>                            Links;                                                      // 0x04F8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0508   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x01E8 (488 bytes) (0x000128 - 0x0001E8) align 8 MaxSize: 0x01E8
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0128   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	class UClass*                                      EnabledAreaClass;                                           // 0x0138   (0x0008)  
	class UClass*                                      DisabledAreaClass;                                          // 0x0140   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0148   (0x0004)  
	FVector                                            LinkRelativeStart;                                          // 0x014C   (0x000C)  
	FVector                                            LinkRelativeEnd;                                            // 0x0158   (0x000C)  
	SDK_UNDEFINED(1,962) /* TEnumAsByte<ENavLinkDirection> */ __um(LinkDirection);                                 // 0x0164   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x0168:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x0168:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x0168:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x0168:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x016C   (0x000C)  
	FVector                                            ObstacleExtent;                                             // 0x0178   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0184   (0x0004)  MISSED
	class UClass*                                      ObstacleAreaClass;                                          // 0x0188   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0190   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x0194   (0x0004)  
	SDK_UNDEFINED(1,963) /* TEnumAsByte<ECollisionChannel> */ __um(BroadcastChannel);                              // 0x0198   (0x0001)  
	unsigned char                                      UnknownData05_7[0x4F];                                      // 0x0199   (0x004F)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x04F0 (1264 bytes) (0x0004F0 - 0x0004F0) align 16 MaxSize: 0x04F0
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0358 (856 bytes) (0x000350 - 0x000358) align 8 MaxSize: 0x0358
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0354   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0500 (1280 bytes) (0x0004F0 - 0x000500) align 16 MaxSize: 0x0500
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x04F0   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0190 (400 bytes) (0x000128 - 0x000190) align 16 MaxSize: 0x0190
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	class UClass*                                      AreaClass;                                                  // 0x0128   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x0130   (0x000C)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x013C:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x53];                                      // 0x013D   (0x0053)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                           // [0x7db2968] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class ANavSystemConfigOverride : public AActor
{ 
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x0318   (0x0008)  
	SDK_UNDEFINED(1,964) /* ENavSystemOverridePolicy */ __um(OverridePolicy);                                      // 0x0320   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x0321:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0322   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x04F0 (1264 bytes) (0x0004F0 - 0x0004F0) align 16 MaxSize: 0x04F0
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.NavMeshTileData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNavMeshTileData
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	SDK_UNDEFINED(1,965) /* TEnumAsByte<ERecastPartitioning> */ __um(RegionPartitioning);                          // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,966) /* TEnumAsByte<ERecastPartitioning> */ __um(LayerPartitioning);                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UCrowdManagerBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavModifierVolume) == 0x0368); // 872 bytes (0x000350 - 0x000368)
static_assert(sizeof(UNavRelevantComponent) == 0x0128); // 296 bytes (0x0000F8 - 0x000128)
static_assert(sizeof(UNavigationSystemV1) == 0x15F8); // 5624 bytes (0x000028 - 0x0015F8)
static_assert(sizeof(UNavigationSystemModuleConfig) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UNavArea) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FNavigationFilterArea) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavigationFilterFlags) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(UNavigationQueryFilter) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FSupportedAreaData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ANavigationData) == 0x0520); // 1312 bytes (0x000318 - 0x000520)
static_assert(sizeof(ARecastNavMesh) == 0x05E8); // 1512 bytes (0x000520 - 0x0005E8)
static_assert(sizeof(AAbstractNavData) == 0x0520); // 1312 bytes (0x000520 - 0x000520)
static_assert(sizeof(UNavArea_Default) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_LowHeight) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Null) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Obstacle) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavAreaMeta_SwitchByAgent) == 0x00C8); // 200 bytes (0x000048 - 0x0000C8)
static_assert(sizeof(FNavCollisionCylinder) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNavCollisionBox) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavCollision) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(ANavigationGraph) == 0x0520); // 1312 bytes (0x000520 - 0x000520)
static_assert(sizeof(ANavigationGraphNode) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(FNavGraphNode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNavigationGraphNodeComponent) == 0x02A0); // 672 bytes (0x000270 - 0x0002A0)
static_assert(sizeof(UNavigationInvokerComponent) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UNavigationPath) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UNavigationPathGenerator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavigationTestingActor) == 0x0408); // 1032 bytes (0x000318 - 0x000408)
static_assert(sizeof(UNavLinkComponent) == 0x0510); // 1296 bytes (0x0004F0 - 0x000510)
static_assert(sizeof(UNavLinkCustomComponent) == 0x01E8); // 488 bytes (0x000128 - 0x0001E8)
static_assert(sizeof(UNavLinkCustomInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkHostInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNavLinkRenderingComponent) == 0x04F0); // 1264 bytes (0x0004F0 - 0x0004F0)
static_assert(sizeof(UNavLinkTrivial) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(ANavMeshBoundsVolume) == 0x0358); // 856 bytes (0x000350 - 0x000358)
static_assert(sizeof(UNavMeshRenderingComponent) == 0x0500); // 1280 bytes (0x0004F0 - 0x000500)
static_assert(sizeof(UNavModifierComponent) == 0x0190); // 400 bytes (0x000128 - 0x000190)
static_assert(sizeof(UNavNodeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavSystemConfigOverride) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UNavTestRenderingComponent) == 0x04F0); // 1264 bytes (0x0004F0 - 0x0004F0)
static_assert(sizeof(URecastFilter_UseDefaultArea) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(URecastNavMeshDataChunk) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FNavGraphEdge) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavLinkCustomInstanceData) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FNavMeshTileData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRecastNavMeshGenerationProperties) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(ANavModifierVolume, AreaClass) == 0x0358);
static_assert(offsetof(UNavRelevantComponent, CachedNavParent) == 0x0120);
static_assert(offsetof(UNavigationSystemV1, MainNavData) == 0x0028);
static_assert(offsetof(UNavigationSystemV1, AbstractNavData) == 0x0030);
static_assert(offsetof(UNavigationSystemV1, DefaultAgentName) == 0x0038);
static_assert(offsetof(UNavigationSystemV1, CrowdManagerClass) == 0x0040);
static_assert(offsetof(UNavigationSystemV1, SupportedAgents) == 0x0080);
static_assert(offsetof(UNavigationSystemV1, SupportedAgentsMask) == 0x0090);
static_assert(offsetof(UNavigationSystemV1, NavDataSet) == 0x0098);
static_assert(offsetof(UNavigationSystemV1, NavDataRegistrationQueue) == 0x00A8);
static_assert(offsetof(UNavArea, DrawColor) == 0x0038);
static_assert(offsetof(UNavArea, SupportedAgents) == 0x003C);
static_assert(offsetof(FNavigationFilterArea, AreaClass) == 0x0000);
static_assert(offsetof(UNavigationQueryFilter, Areas) == 0x0028);
static_assert(offsetof(UNavigationQueryFilter, IncludeFlags) == 0x0038);
static_assert(offsetof(UNavigationQueryFilter, ExcludeFlags) == 0x003C);
static_assert(offsetof(FSupportedAreaData, AreaClassName) == 0x0000);
static_assert(offsetof(FSupportedAreaData, AreaClass) == 0x0018);
static_assert(offsetof(ANavigationData, RenderingComp) == 0x0320);
static_assert(offsetof(ANavigationData, NavDataConfig) == 0x0328);
static_assert(offsetof(ANavigationData, SupportedAreas) == 0x04B8);
static_assert(offsetof(ARecastNavMesh, NavMeshOriginOffset) == 0x056C);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent0Area) == 0x0048);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent1Area) == 0x0050);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent2Area) == 0x0058);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent3Area) == 0x0060);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent4Area) == 0x0068);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent5Area) == 0x0070);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent6Area) == 0x0078);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent7Area) == 0x0080);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent8Area) == 0x0088);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent9Area) == 0x0090);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent10Area) == 0x0098);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent11Area) == 0x00A0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent12Area) == 0x00A8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent13Area) == 0x00B0);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent14Area) == 0x00B8);
static_assert(offsetof(UNavAreaMeta_SwitchByAgent, Agent15Area) == 0x00C0);
static_assert(offsetof(FNavCollisionCylinder, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Offset) == 0x0000);
static_assert(offsetof(FNavCollisionBox, Extent) == 0x000C);
static_assert(offsetof(UNavCollision, CylinderCollision) == 0x0080);
static_assert(offsetof(UNavCollision, BoxCollision) == 0x0090);
static_assert(offsetof(UNavCollision, AreaClass) == 0x00A0);
static_assert(offsetof(FNavGraphNode, Owner) == 0x0000);
static_assert(offsetof(UNavigationGraphNodeComponent, Node) == 0x0270);
static_assert(offsetof(UNavigationGraphNodeComponent, NextNodeComponent) == 0x0288);
static_assert(offsetof(UNavigationGraphNodeComponent, PrevNodeComponent) == 0x0290);
static_assert(offsetof(UNavigationPath, PathPoints) == 0x0038);
static_assert(offsetof(ANavigationTestingActor, CapsuleComponent) == 0x0328);
static_assert(offsetof(ANavigationTestingActor, InvokerComponent) == 0x0330);
static_assert(offsetof(ANavigationTestingActor, NavAgentProps) == 0x0340);
static_assert(offsetof(ANavigationTestingActor, QueryingExtent) == 0x0370);
static_assert(offsetof(ANavigationTestingActor, MyNavData) == 0x0380);
static_assert(offsetof(ANavigationTestingActor, ProjectedLocation) == 0x0388);
static_assert(offsetof(ANavigationTestingActor, TextCanvasOffset) == 0x03A8);
static_assert(offsetof(ANavigationTestingActor, OtherActor) == 0x03C0);
static_assert(offsetof(ANavigationTestingActor, FilterClass) == 0x03C8);
static_assert(offsetof(UNavLinkComponent, Links) == 0x04F8);
static_assert(offsetof(UNavLinkCustomComponent, EnabledAreaClass) == 0x0138);
static_assert(offsetof(UNavLinkCustomComponent, DisabledAreaClass) == 0x0140);
static_assert(offsetof(UNavLinkCustomComponent, SupportedAgents) == 0x0148);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeStart) == 0x014C);
static_assert(offsetof(UNavLinkCustomComponent, LinkRelativeEnd) == 0x0158);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleOffset) == 0x016C);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleExtent) == 0x0178);
static_assert(offsetof(UNavLinkCustomComponent, ObstacleAreaClass) == 0x0188);
static_assert(offsetof(ANavMeshBoundsVolume, SupportedAgents) == 0x0350);
static_assert(offsetof(UNavModifierComponent, AreaClass) == 0x0128);
static_assert(offsetof(UNavModifierComponent, FailsafeExtent) == 0x0130);
static_assert(offsetof(ANavSystemConfigOverride, NavigationSystemConfig) == 0x0318);
