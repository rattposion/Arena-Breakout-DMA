// generated header

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: NavigationSystem

#pragma pack(push, 0x1)

/// Class /Script/MFVoxelEnv.EnvQueryTest_NodeWeight
/// Size: 0x0200 (512 bytes) (0x0001F8 - 0x000200) align 8 MaxSize: 0x0200
class UEnvQueryTest_NodeWeight : public UEnvQueryTest
{ 
public:
	float                                              WeightScale;                                                // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x01FC   (0x0004)  MISSED
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvCellEditorActor
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class AMFVoxelEnvCellEditorActor : public AActor
{ 
public:
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvComponent
/// Size: 0x01E8 (488 bytes) (0x0000F8 - 0x0001E8) align 8 MaxSize: 0x01E8
class UMFVoxelEnvComponent : public UActorComponent
{ 
public:
	TArray<FString>                                    BuildPathIgnoredLevelSubStrs;                               // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,5119) /* TArray<TWeakObjectPtr<AActor*>> */ __um(BuildPathIgnoredActors);                     // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,5120) /* TArray<TWeakObjectPtr<AActor*>> */ __um(BuildPathKeptActors);                        // 0x0118   (0x0010)  
	TArray<FString>                                    BuildOctreeIgnoredLevelSubStrs;                             // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,5121) /* TArray<TWeakObjectPtr<AActor*>> */ __um(BuildOctreeIgnoredActors);                   // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,5122) /* TArray<TWeakObjectPtr<AActor*>> */ __um(BuildOctreeKeptActors);                      // 0x0148   (0x0010)  
	SDK_UNDEFINED(1,5123) /* EMFVoxelEnvHeuristic */   __um(Heuristic);                                            // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              HeuristicWeight;                                            // 0x015C   (0x0004)  
	float                                              NodeSizePreference;                                         // 0x0160   (0x0004)  
	SDK_UNDEFINED(1,5124) /* EMFVoxelEnvPathPruning */ __um(PathPruning);                                          // 0x0164   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	int32_t                                            PathSmoothing;                                              // 0x0168   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x016C   (0x0004)  MISSED
	SDK_UNDEFINED(80,5125) /* TSet<int32_t> */         __um(DebugIndexs);                                          // 0x0170   (0x0050)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x01C0   (0x0020)  MISSED
	class AMFVoxelEnvVolume*                           Volume;                                                     // 0x01E0   (0x0008)  


	/// Functions
	// Function /Script/MFVoxelEnv.MFVoxelEnvComponent.GetPath
	// void GetPath(TArray<FVector>& Path);                                                                                     // [0x613222c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFVoxelEnv.MFVoxelEnvComponent.GetCoverLocation
	// void GetCoverLocation(FMFVoxelEnvCoverLocation& CoverLocation);                                                          // [0x6132130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFVoxelEnv.MFVoxelEnvComponent.FindPath
	// void FindPath(FVector& StartLocation, FVector& TargetLocation, bool bCheckLineOfSight, FDelegateProperty OnComplete, EMFVoxelEnvPathFindingCallResult& Result); // [0x6131ec0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvComponent.FindLineOfSight
	// void FindLineOfSight(FVector& StartLocation, class AActor* TargetActor, float MinimumDistance, bool bCheckLineOfSight, FDelegateProperty OnComplete, EMFVoxelEnvFindLineOfSightCallResult& Result); // [0x6131c40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvComponent.FindCoverMultipleOpponents
	// void FindCoverMultipleOpponents(FVector SearchOrigin, float MaxRadius, TArray<AActor*> Opponents, EMFVoxelEnvCoverSearchType SearchType, bool bPerformLineTraces, FDelegateProperty OnComplete, EMFVoxelEnvFindCoverCallResult& Result); // [0x613193c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvComponent.FindCover
	// void FindCover(FVector SearchOrigin, float MaxRadius, class AActor* Opponent, EMFVoxelEnvCoverSearchType SearchType, bool bPerformLineTraces, FDelegateProperty OnComplete, EMFVoxelEnvFindCoverCallResult& Result); // [0x6131678] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvModifierVolume
/// Size: 0x0360 (864 bytes) (0x000350 - 0x000360) align 8 MaxSize: 0x0360
class AMFVoxelEnvModifierVolume : public AVolume
{ 
public:
	float                                              PathCostModifier;                                           // 0x0350   (0x0004)  
	bool                                               bInvalidateCoverLocations;                                  // 0x0354   (0x0001)  
	bool                                               bEnabled;                                                   // 0x0355   (0x0001)  
	bool                                               bDisplayVolumeBounds;                                       // 0x0356   (0x0001)  
	bool                                               bDisplayOverlaps;                                           // 0x0357   (0x0001)  
	FColor                                             VolumeBoundsColour;                                         // 0x0358   (0x0004)  
	FColor                                             OverlapColour;                                              // 0x035C   (0x0004)  
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvModifyActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AMFVoxelEnvModifyActor : public AActor
{ 
public:
	class UPrimitiveComponent*                         SpotComponent;                                              // 0x0318   (0x0008)  
	SDK_UNDEFINED(1,5126) /* EMFVoxelEnvModifyNodeType */ __um(ModifyType);                                        // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0321   (0x0007)  MISSED
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvNodeModifierVolume
/// Size: 0x0350 (848 bytes) (0x000350 - 0x000350) align 8 MaxSize: 0x0350
class AMFVoxelEnvNodeModifierVolume : public AVolume
{ 
public:
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvOcclusionComponent
/// Size: 0x01B0 (432 bytes) (0x0000F8 - 0x0001B0) align 16 MaxSize: 0x01B0
class UMFVoxelEnvOcclusionComponent : public UActorComponent
{ 
public:
	float                                              TransformTriggerTolerance;                                  // 0x00F8   (0x0004)  
	bool                                               bEnableCover;                                               // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	class AMFVoxelEnvVolume*                           Volume;                                                     // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0108   (0x0008)  MISSED
	FTransform                                         CachedTransform;                                            // 0x0110   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0140   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6F];                                      // 0x0141   (0x006F)  MISSED


	/// Functions
	// Function /Script/MFVoxelEnv.MFVoxelEnvOcclusionComponent.SetOcclusionEnabled
	// void SetOcclusionEnabled(bool bOcclusionEnabled);                                                                        // [0x61327e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvSettings
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UMFVoxelEnvSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(1,5127) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                             // 0x0038   (0x0001)  
	bool                                               bEnableInvade;                                              // 0x0039   (0x0001)  
	bool                                               bBuildVoidVoxel;                                            // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x003B   (0x0001)  MISSED
	float                                              InvadeRatio;                                                // 0x003C   (0x0004)  
	bool                                               bDisableSVO;                                                // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              MFVoxelEnvAgentHeight;                                      // 0x0044   (0x0004)  
	TArray<class UClass*>                              WalkableIgnoreClassList;                                    // 0x0048   (0x0010)  
	int32_t                                            PathTrafficabilityDirMin;                                   // 0x0058   (0x0004)  
	float                                              PathTrafficabilityDirDiffMinScale;                          // 0x005C   (0x0004)  
	float                                              PathTrafficabilityClusterIndexScale;                        // 0x0060   (0x0004)  
	bool                                               PathTrafficabilityClusterFilter_OneVoxel;                   // 0x0064   (0x0001)  
	bool                                               PathTrafficabilityClusterFilter_XYClose;                    // 0x0065   (0x0001)  
	bool                                               PathTrafficabilityClusterFilter_134SideBlock;               // 0x0066   (0x0001)  
	bool                                               PathTrafficabilityClusterFilter_TopBottom;                  // 0x0067   (0x0001)  
	float                                              PathTrafficabilityClusterFilter_TopBottomScale;             // 0x0068   (0x0004)  
	bool                                               bBuildAdditionHeight;                                       // 0x006C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	int32_t                                            ClusterAdditionHeight;                                      // 0x0070   (0x0004)  
	bool                                               bBuildSkyAreaCluster;                                       // 0x0074   (0x0001)  
	bool                                               bExpandSkyClusterArea;                                      // 0x0075   (0x0001)  
	bool                                               bMergeSingleSkyCluster;                                     // 0x0076   (0x0001)  
	bool                                               bAreaClusterRelevancyOnlyBound;                             // 0x0077   (0x0001)  
	bool                                               bAreaClusterRelevancyAdjacentOptimization;                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FString                                            AreaClusterRelevancyPVSLevelName;                           // 0x0080   (0x0010)  
};

/// Class /Script/MFVoxelEnv.MFVoxelFluidSourceActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AMFVoxelFluidSourceActor : public AActor
{ 
public:
	FVector                                            SourceVelocity;                                             // 0x0318   (0x000C)  
	float                                              SourceSpeed;                                                // 0x0324   (0x0004)  
};

/// Class /Script/MFVoxelEnv.MFVoxelEnvVolume
/// Size: 0x1358 (4952 bytes) (0x000350 - 0x001358) align 8 MaxSize: 0x1358
class AMFVoxelEnvVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0350   (0x0008)  MISSED
	float                                              VolumeSize;                                                 // 0x0358   (0x0004)  
	float                                              VoxelSize;                                                  // 0x035C   (0x0004)  
	bool                                               bEnableInvade;                                              // 0x0360   (0x0001)  
	bool                                               bBuildVoidVoxel;                                            // 0x0361   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0362   (0x0006)  MISSED
	class AVolume*                                     ValidVolume;                                                // 0x0368   (0x0008)  
	TArray<class AVolume*>                             VoidVolumes;                                                // 0x0370   (0x0010)  
	float                                              InvadeRatio;                                                // 0x0380   (0x0004)  
	SDK_UNDEFINED(1,5128) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                             // 0x0384   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0385   (0x0003)  MISSED
	float                                              Clearance;                                                  // 0x0388   (0x0004)  
	float                                              TickInterval;                                               // 0x038C   (0x0004)  
	bool                                               bEnableCoverMap;                                            // 0x0390   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0391   (0x0003)  MISSED
	float                                              MinimumObjectRadius;                                        // 0x0394   (0x0004)  
	float                                              MinimumDensity;                                             // 0x0398   (0x0004)  
	float                                              DebugDistance;                                              // 0x039C   (0x0004)  
	bool                                               bDisplayVolumeBounds;                                       // 0x03A0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x03A1   (0x0003)  MISSED
	FColor                                             VolumeBoundsColour;                                         // 0x03A4   (0x0004)  
	bool                                               bDisplayLayers;                                             // 0x03A8   (0x0001)  
	bool                                               bDisplayLeafs;                                              // 0x03A9   (0x0001)  
	bool                                               bDisplayWalkable;                                           // 0x03AA   (0x0001)  
	bool                                               bDisplayWalkableAreaEdge;                                   // 0x03AB   (0x0001)  
	SDK_UNDEFINED(1,5129) /* EMFVoxelEnvFluidSimDisplayType */ __um(FluidSimDisplayType);                          // 0x03AC   (0x0001)  
	bool                                               bDisplayLeafOcclusion;                                      // 0x03AD   (0x0001)  
	bool                                               bDisplayEdgeAdjacency;                                      // 0x03AE   (0x0001)  
	bool                                               bDisplayCustomVoxel;                                        // 0x03AF   (0x0001)  
	float                                              LineScale;                                                  // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x03B4   (0x0004)  MISSED
	TArray<FColor>                                     LayerColours;                                               // 0x03B8   (0x0010)  
	FColor                                             WalkableAreaEdgeColour;                                     // 0x03C8   (0x0004)  
	FColor                                             LeafOcclusionColour;                                        // 0x03CC   (0x0004)  
	bool                                               bDisplayMortonCodes;                                        // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x03D1   (0x0003)  MISSED
	FColor                                             MortonCodeColour;                                           // 0x03D4   (0x0004)  
	float                                              MortonCodeScale;                                            // 0x03D8   (0x0004)  
	bool                                               bDisplayCoverMap;                                           // 0x03DC   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x03DD   (0x0003)  MISSED
	int32_t                                            VoxelExponent;                                              // 0x03E0   (0x0004)  
	float                                              ActualVolumeSize;                                           // 0x03E4   (0x0004)  
	char                                               NumLayers;                                                  // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x03E9   (0x0007)  MISSED
	int64_t                                            NumBytes;                                                   // 0x03F0   (0x0008)  
	unsigned char                                      UnknownData09_6[0x40];                                      // 0x03F8   (0x0040)  MISSED
	TArray<float>                                      VoxelHalfSizes;                                             // 0x0438   (0x0010)  
	unsigned char                                      UnknownData10_6[0x68];                                      // 0x0448   (0x0068)  MISSED
	TArray<class UMFVoxelEnvOcclusionComponent*>       OcclusionComponents;                                        // 0x04B0   (0x0010)  
	TArray<class AMFVoxelEnvModifierVolume*>           ModifierVolumes;                                            // 0x04C0   (0x0010)  
	unsigned char                                      UnknownData11_6[0x10];                                      // 0x04D0   (0x0010)  MISSED
	FVector                                            VolumeOrigin;                                               // 0x04E0   (0x000C)  
	FVector                                            VolumeExtent;                                               // 0x04EC   (0x000C)  
	unsigned char                                      UnknownData12_6[0x4C0];                                     // 0x04F8   (0x04C0)  MISSED
	float                                              MFVoxelEnvAgentHeight;                                      // 0x09B8   (0x0004)  
	float                                              DampingUpdateInterval;                                      // 0x09BC   (0x0004)  
	unsigned char                                      UnknownData13_6[0x4];                                       // 0x09C0   (0x0004)  MISSED
	uint16_t                                           NodeWeightUpdaterDampingTimestamp;                          // 0x09C4   (0x0002)  
	uint16_t                                           NodeUpdaterExpireTimestamp;                                 // 0x09C6   (0x0002)  
	bool                                               bEnableRuntimeDebugShow;                                    // 0x09C8   (0x0001)  
	unsigned char                                      UnknownData14_6[0x3];                                       // 0x09C9   (0x0003)  MISSED
	float                                              RuntimeDebugShowInterval;                                   // 0x09CC   (0x0004)  
	unsigned char                                      UnknownData15_6[0x8];                                       // 0x09D0   (0x0008)  MISSED
	class UNavigationSystemV1*                         CachedNavSys;                                               // 0x09D8   (0x0008)  
	unsigned char                                      UnknownData16_6[0x818];                                     // 0x09E0   (0x0818)  MISSED
	TArray<class UClass*>                              WalkableIgnoreClassList;                                    // 0x11F8   (0x0010)  
	bool                                               bDisableSVO;                                                // 0x1208   (0x0001)  
	unsigned char                                      UnknownData17_6[0x7];                                       // 0x1209   (0x0007)  MISSED
	TArray<class AMFVoxelFluidSourceActor*>            CacheFluidSourceActorList;                                  // 0x1210   (0x0010)  
	int32_t                                            PathTrafficabilityDirMin;                                   // 0x1220   (0x0004)  
	float                                              PathTrafficabilityDirDiffMinScale;                          // 0x1224   (0x0004)  
	float                                              PathTrafficabilityClusterIndexScale;                        // 0x1228   (0x0004)  
	bool                                               PathTrafficabilityClusterFilter_OneVoxel;                   // 0x122C   (0x0001)  
	bool                                               PathTrafficabilityClusterFilter_XYClose;                    // 0x122D   (0x0001)  
	bool                                               PathTrafficabilityClusterFilter_134SideBlock;               // 0x122E   (0x0001)  
	bool                                               PathTrafficabilityClusterFilter_TopBottom;                  // 0x122F   (0x0001)  
	float                                              PathTrafficabilityClusterFilter_TopBottomScale;             // 0x1230   (0x0004)  
	FColor                                             PathTrafficabilityNodeDrawColor;                            // 0x1234   (0x0004)  
	float                                              PathTrafficabilityNodeDrawScale;                            // 0x1238   (0x0004)  
	bool                                               bDisplayPathTrafficability;                                 // 0x123C   (0x0001)  
	bool                                               bDisplayPathTrafficabilityClusterIndex;                     // 0x123D   (0x0001)  
	bool                                               bDisplayPathTrafficabilityPCADir;                           // 0x123E   (0x0001)  
	bool                                               bDisplayPathTrafficabilityMaxOnly;                          // 0x123F   (0x0001)  
	bool                                               bDisplayPathTrafficabilityNode;                             // 0x1240   (0x0001)  
	bool                                               bDisplayMeanShiftFirstLevelCluster;                         // 0x1241   (0x0001)  
	bool                                               bDisplayMeanShiftSecondLevelCluster;                        // 0x1242   (0x0001)  
	bool                                               bDisplayAreaCluster;                                        // 0x1243   (0x0001)  
	bool                                               bOnlyShowBound;                                             // 0x1244   (0x0001)  
	unsigned char                                      UnknownData18_6[0x3];                                       // 0x1245   (0x0003)  MISSED
	int32_t                                            MaxPathTrafficabilityVoxelSize;                             // 0x1248   (0x0004)  
	FVector                                            PathTrafficabilityDebugLoc;                                 // 0x124C   (0x000C)  
	unsigned char                                      UnknownData19_6[0x4];                                       // 0x1258   (0x0004)  MISSED
	float                                              MeanShiftClusterWindowSize;                                 // 0x125C   (0x0004)  
	float                                              MeanShiftClusterMaxSize;                                    // 0x1260   (0x0004)  
	float                                              MeanShiftCluster2ndPathTrafficabilityMin;                   // 0x1264   (0x0004)  
	unsigned char                                      UnknownData20_6[0x30];                                      // 0x1268   (0x0030)  MISSED
	int32_t                                            MeanShiftCluster1stLevelMinNum;                             // 0x1298   (0x0004)  
	float                                              MeanShiftClusterPathTrafficabilityDistScale;                // 0x129C   (0x0004)  
	int32_t                                            MeanShiftClusterIterationCount;                             // 0x12A0   (0x0004)  
	float                                              MeanShiftCentroidClusterMergeMaxDist;                       // 0x12A4   (0x0004)  
	int32_t                                            MeanShiftCluster2ndMinSize;                                 // 0x12A8   (0x0004)  
	unsigned char                                      UnknownData21_6[0x4];                                       // 0x12AC   (0x0004)  MISSED
	class UMFVoxelEnvComponent*                        PathFinderComp;                                             // 0x12B0   (0x0008)  
	int32_t                                            DebugMeanShiftClusterID1;                                   // 0x12B8   (0x0004)  
	int32_t                                            DebugMeanShiftClusterID2;                                   // 0x12BC   (0x0004)  
	bool                                               bDebugMeanShiftAdjacentCheck;                               // 0x12C0   (0x0001)  
	unsigned char                                      UnknownData22_6[0x3];                                       // 0x12C1   (0x0003)  MISSED
	int32_t                                            Debug2ndClusteringLargeID;                                  // 0x12C4   (0x0004)  
	bool                                               bDebugCopyData;                                             // 0x12C8   (0x0001)  
	bool                                               bDebugCalculateDist;                                        // 0x12C9   (0x0001)  
	unsigned char                                      UnknownData23_6[0x2];                                       // 0x12CA   (0x0002)  MISSED
	float                                              CalculateDist_MaxDist;                                      // 0x12CC   (0x0004)  
	int32_t                                            Debug1ClusterDisplayID;                                     // 0x12D0   (0x0004)  
	int32_t                                            Debug2ClusterDisplayID;                                     // 0x12D4   (0x0004)  
	bool                                               DebugBuild1ndCluster;                                       // 0x12D8   (0x0001)  
	bool                                               DebugBuild2ndCluster;                                       // 0x12D9   (0x0001)  
	bool                                               bDistributeTrafficabilityByVis;                             // 0x12DA   (0x0001)  
	bool                                               bDivisiveClusterByDoor;                                     // 0x12DB   (0x0001)  
	bool                                               bDivisivePlat2ndCluster;                                    // 0x12DC   (0x0001)  
	bool                                               DebugBuildAdjacentClusterInfo;                              // 0x12DD   (0x0001)  
	bool                                               bBuildAdditionHeight;                                       // 0x12DE   (0x0001)  
	unsigned char                                      UnknownData24_6[0x1];                                       // 0x12DF   (0x0001)  MISSED
	int32_t                                            ClusterAdditionHeight;                                      // 0x12E0   (0x0004)  
	bool                                               bBuildSkyAreaCluster;                                       // 0x12E4   (0x0001)  
	unsigned char                                      UnknownData25_6[0x3];                                       // 0x12E5   (0x0003)  MISSED
	float                                              SkyAreaClusterMaxZLoc;                                      // 0x12E8   (0x0004)  
	bool                                               bExpandSkyClusterArea;                                      // 0x12EC   (0x0001)  
	bool                                               bMergeSingleSkyCluster;                                     // 0x12ED   (0x0001)  
	unsigned char                                      UnknownData26_6[0x2];                                       // 0x12EE   (0x0002)  MISSED
	int32_t                                            DebugPoint1;                                                // 0x12F0   (0x0004)  
	int32_t                                            DebugPoint2;                                                // 0x12F4   (0x0004)  
	int32_t                                            DebugCluster1;                                              // 0x12F8   (0x0004)  
	int32_t                                            DebugCluster2;                                              // 0x12FC   (0x0004)  
	int32_t                                            DebugShowVisibleClustersID;                                 // 0x1300   (0x0004)  
	int32_t                                            CalculateClusterVisibiility_OptID;                          // 0x1304   (0x0004)  
	int32_t                                            AreaClusterAABBSimplificationMinCount;                      // 0x1308   (0x0004)  
	int32_t                                            AreaClusterRelevancyMaxCount;                               // 0x130C   (0x0004)  
	float                                              AreaClusterVisibilityAdjacentMin;                           // 0x1310   (0x0004)  
	float                                              AreaClusterRelevancyPathWeight;                             // 0x1314   (0x0004)  
	FVector                                            AreaClusterRelevancyVolumeOrigin;                           // 0x1318   (0x000C)  
	FVector                                            AreaClusterRelevancyVolumeExtent;                           // 0x1324   (0x000C)  
	float                                              AreaClusterRelevancyVolumeSize;                             // 0x1330   (0x0004)  
	bool                                               bAreaClusterRelevancyOnlyBound;                             // 0x1334   (0x0001)  
	bool                                               bAreaClusterRelevancyAdjacentOptimization;                  // 0x1335   (0x0001)  
	unsigned char                                      UnknownData27_6[0x2];                                       // 0x1336   (0x0002)  MISSED
	FString                                            AreaClusterRelevancyPVSLevelName;                           // 0x1338   (0x0010)  
	unsigned char                                      UnknownData28_7[0x10];                                      // 0x1348   (0x0010)  MISSED


	/// Functions
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.UpdateTaskComplete
	// void UpdateTaskComplete();                                                                                               // [0x61329ec] Final|Native|Public  
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.UnregisterWeightActorUpdateInfo
	// void UnregisterWeightActorUpdateInfo(class AActor* InUpdateOwner, char InGroupID, char InSourceID);                      // [0x61328ac] Final|Native|Private|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.ShowWalkableVoxcel
	// void ShowWalkableVoxcel();                                                                                               // [0x1e39048] Final|Native|Private|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.ShowOctreeVoxel
	// void ShowOctreeVoxel();                                                                                                  // [0x1e39048] Final|Native|Private|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.ShowAdjWaklableVoxel
	// void ShowAdjWaklableVoxel();                                                                                             // [0x1e39048] Final|Native|Private|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.RegisterWeightActorUpdateInfo
	// void RegisterWeightActorUpdateInfo(float InUpdateInterval, class AActor* InUpdateOwner, char InGroupID, char InSourceID, float InDampingValue, float InRadius, float InCenterWeight); // [0x6132544] Final|Native|Private|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.OnActorDestroyed
	// void OnActorDestroyed(class AActor* DestroyedActor);                                                                     // [0x61324a8] Final|Native|Private 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.GetWalkableNodeLocations
	// void GetWalkableNodeLocations(TArray<FVector>& OutLocations);                                                            // [0x613236c] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.ClearShowOctreeVoxel
	// void ClearShowOctreeVoxel();                                                                                             // [0x6131664] Final|Native|Private|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.ClearAllNodeWeight
	// void ClearAllNodeWeight();                                                                                               // [0x6131664] Final|Native|Private|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.BuildPath
	// void BuildPath();                                                                                                        // [0x6131650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.BuildOctree
	// bool BuildOctree();                                                                                                      // [0x613162c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFVoxelEnv.MFVoxelEnvVolume.AddNodeWeight
	// void AddNodeWeight(FVector StartLoc, char GroupID, char SourceID, char Weight, float Radius);                            // [0x6131480] Final|Native|Private|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MFVoxelEnv.MFVoxelEnvCoverLocation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFVoxelEnvCoverLocation
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/MFVoxelEnv.MFVoxelEnvPathPointFindingConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMFVoxelEnvPathPointFindingConfig
{ 
	float                                              EstimateWeight;                                             // 0x0000   (0x0004)  
	float                                              NodeSizePreference;                                         // 0x0004   (0x0004)  
	SDK_UNDEFINED(1,5130) /* EMFVoxelEnvHeuristic */   __um(Heuristic);                                            // 0x0008   (0x0001)  
	SDK_UNDEFINED(1,5131) /* EMFVoxelEnvPathPruning */ __um(PathPruning);                                          // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	int32_t                                            PathSmoothing;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/MFVoxelEnv.MFVoxelEnvDebugLocation
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMFVoxelEnvDebugLocation
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FColor                                             Colour;                                                     // 0x000C   (0x0004)  
	float                                              LineScale;                                                  // 0x0010   (0x0004)  
};

/// Struct /Script/MFVoxelEnv.MFVoxelEnvDebugPath
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMFVoxelEnvDebugPath
{ 
	TArray<FVector>                                    Points;                                                     // 0x0000   (0x0010)  
	FColor                                             Colour;                                                     // 0x0010   (0x0004)  
	float                                              LineScale;                                                  // 0x0014   (0x0004)  
};

/// Struct /Script/MFVoxelEnv.MFVoxelEnvPathPoint
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMFVoxelEnvPathPoint
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	int32_t                                            Layer;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/MFVoxelEnv.MFVoxelEnvPath
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMFVoxelEnvPath
{ 
	TArray<FMFVoxelEnvPathPoint>                       Points;                                                     // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UEnvQueryTest_NodeWeight) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(AMFVoxelEnvCellEditorActor) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UMFVoxelEnvComponent) == 0x01E8); // 488 bytes (0x0000F8 - 0x0001E8)
static_assert(sizeof(AMFVoxelEnvModifierVolume) == 0x0360); // 864 bytes (0x000350 - 0x000360)
static_assert(sizeof(AMFVoxelEnvModifyActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(AMFVoxelEnvNodeModifierVolume) == 0x0350); // 848 bytes (0x000350 - 0x000350)
static_assert(sizeof(UMFVoxelEnvOcclusionComponent) == 0x01B0); // 432 bytes (0x0000F8 - 0x0001B0)
static_assert(sizeof(UMFVoxelEnvSettings) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(AMFVoxelFluidSourceActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(AMFVoxelEnvVolume) == 0x1358); // 4952 bytes (0x000350 - 0x001358)
static_assert(sizeof(FMFVoxelEnvCoverLocation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFVoxelEnvPathPointFindingConfig) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMFVoxelEnvDebugLocation) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMFVoxelEnvDebugPath) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMFVoxelEnvPathPoint) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMFVoxelEnvPath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UMFVoxelEnvComponent, BuildPathIgnoredLevelSubStrs) == 0x00F8);
static_assert(offsetof(UMFVoxelEnvComponent, BuildOctreeIgnoredLevelSubStrs) == 0x0128);
static_assert(offsetof(UMFVoxelEnvComponent, Volume) == 0x01E0);
static_assert(offsetof(AMFVoxelEnvModifierVolume, VolumeBoundsColour) == 0x0358);
static_assert(offsetof(AMFVoxelEnvModifierVolume, OverlapColour) == 0x035C);
static_assert(offsetof(AMFVoxelEnvModifyActor, SpotComponent) == 0x0318);
static_assert(offsetof(UMFVoxelEnvOcclusionComponent, Volume) == 0x0100);
static_assert(offsetof(UMFVoxelEnvOcclusionComponent, CachedTransform) == 0x0110);
static_assert(offsetof(UMFVoxelEnvSettings, WalkableIgnoreClassList) == 0x0048);
static_assert(offsetof(UMFVoxelEnvSettings, AreaClusterRelevancyPVSLevelName) == 0x0080);
static_assert(offsetof(AMFVoxelFluidSourceActor, SourceVelocity) == 0x0318);
static_assert(offsetof(AMFVoxelEnvVolume, ValidVolume) == 0x0368);
static_assert(offsetof(AMFVoxelEnvVolume, VoidVolumes) == 0x0370);
static_assert(offsetof(AMFVoxelEnvVolume, VolumeBoundsColour) == 0x03A4);
static_assert(offsetof(AMFVoxelEnvVolume, LayerColours) == 0x03B8);
static_assert(offsetof(AMFVoxelEnvVolume, WalkableAreaEdgeColour) == 0x03C8);
static_assert(offsetof(AMFVoxelEnvVolume, LeafOcclusionColour) == 0x03CC);
static_assert(offsetof(AMFVoxelEnvVolume, MortonCodeColour) == 0x03D4);
static_assert(offsetof(AMFVoxelEnvVolume, VoxelHalfSizes) == 0x0438);
static_assert(offsetof(AMFVoxelEnvVolume, OcclusionComponents) == 0x04B0);
static_assert(offsetof(AMFVoxelEnvVolume, ModifierVolumes) == 0x04C0);
static_assert(offsetof(AMFVoxelEnvVolume, VolumeOrigin) == 0x04E0);
static_assert(offsetof(AMFVoxelEnvVolume, VolumeExtent) == 0x04EC);
static_assert(offsetof(AMFVoxelEnvVolume, CachedNavSys) == 0x09D8);
static_assert(offsetof(AMFVoxelEnvVolume, WalkableIgnoreClassList) == 0x11F8);
static_assert(offsetof(AMFVoxelEnvVolume, CacheFluidSourceActorList) == 0x1210);
static_assert(offsetof(AMFVoxelEnvVolume, PathTrafficabilityNodeDrawColor) == 0x1234);
static_assert(offsetof(AMFVoxelEnvVolume, PathTrafficabilityDebugLoc) == 0x124C);
static_assert(offsetof(AMFVoxelEnvVolume, PathFinderComp) == 0x12B0);
static_assert(offsetof(AMFVoxelEnvVolume, AreaClusterRelevancyVolumeOrigin) == 0x1318);
static_assert(offsetof(AMFVoxelEnvVolume, AreaClusterRelevancyVolumeExtent) == 0x1324);
static_assert(offsetof(AMFVoxelEnvVolume, AreaClusterRelevancyPVSLevelName) == 0x1338);
static_assert(offsetof(FMFVoxelEnvCoverLocation, Actor) == 0x0000);
static_assert(offsetof(FMFVoxelEnvCoverLocation, Location) == 0x0008);
static_assert(offsetof(FMFVoxelEnvCoverLocation, Normal) == 0x0014);
static_assert(offsetof(FMFVoxelEnvDebugLocation, Location) == 0x0000);
static_assert(offsetof(FMFVoxelEnvDebugLocation, Colour) == 0x000C);
static_assert(offsetof(FMFVoxelEnvDebugPath, Points) == 0x0000);
static_assert(offsetof(FMFVoxelEnvDebugPath, Colour) == 0x0010);
static_assert(offsetof(FMFVoxelEnvPathPoint, Location) == 0x0000);
static_assert(offsetof(FMFVoxelEnvPath, Points) == 0x0000);
