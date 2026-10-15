// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/MFVoxelEnvAreaCluster.MFVoxelEnvTrafficabilityClusterSideInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMFVoxelEnvTrafficabilityClusterSideInfo
{ 
	TArray<int32_t>                                    NodeIndexList;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/MFVoxelEnvAreaCluster.MFVoxelEnvTrafficabilityClusterInfo
/// Size: 0x01E8 (488 bytes) (0x000000 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FMFVoxelEnvTrafficabilityClusterInfo
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	FVector                                            PCADir;                                                     // 0x0050   (0x000C)  
	int32_t                                            ClusterTrafficabilityArray[4];                              // 0x005C   (0x0010)  
	int32_t                                            ID;                                                         // 0x006C   (0x0004)  
	int32_t                                            ParentClusterID;                                            // 0x0070   (0x0004)  
	char                                               SpecialType;                                                // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	FMFVoxelEnvTrafficabilityClusterSideInfo           ClusterSideTrafficabilityArray[4];                          // 0x0078   (0x0040)  
	int32_t                                            CenterIndex;                                                // 0x00B8   (0x0004)  
	float                                              Size;                                                       // 0x00BC   (0x0004)  
	float                                              AverageTrafficability;                                      // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TMap<int32_t, float>                               AdjacentClusterInfo;                                        // 0x00C8   (0x0050)  
	TMap<int32_t, float>                               VisibleAdjacentClusterInfo;                                 // 0x0118   (0x0050)  
	int32_t                                            FarthestNodeIndex;                                          // 0x0168   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x016C   (0x0004)  MISSED
	TArray<FBox>                                       BoxList;                                                    // 0x0170   (0x0010)  
	FVector                                            CenterLoc;                                                  // 0x0180   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	TMap<int32_t, float>                               NearbyClusters;                                             // 0x0190   (0x0050)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x01E0   (0x0008)  MISSED
};

/// Struct /Script/MFVoxelEnvAreaCluster.MFVoxelEnvAreaClusterRelevancyInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFVoxelEnvAreaClusterRelevancyInfo
{ 
	TArray<float>                                      PathCostList;                                               // 0x0000   (0x0010)  
	TArray<float>                                      VisibilityList;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/MFVoxelEnvAreaCluster.MFVoxelEnvAreaClusterRelevancyInfo1st
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMFVoxelEnvAreaClusterRelevancyInfo1st
{ 
	SDK_UNDEFINED(80,5132) /* TSet<int32_t> */         __um(VisibleClusterIDs);                                    // 0x0000   (0x0050)  
};

/// Class /Script/MFVoxelEnvAreaCluster.MFVoxelEnvAreaClusterActor
/// Size: 0x0468 (1128 bytes) (0x000318 - 0x000468) align 8 MaxSize: 0x0468
class AMFVoxelEnvAreaClusterActor : public AActor
{ 
public:
	TArray<FMFVoxelEnvTrafficabilityClusterInfo>       AreaClusterInfoList;                                        // 0x0318   (0x0010)  
	TArray<FMFVoxelEnvTrafficabilityClusterInfo>       AreaClusterInfoList1st;                                     // 0x0328   (0x0010)  
	TArray<FMFVoxelEnvAreaClusterRelevancyInfo>        AreaClusterRelevancyMatrix;                                 // 0x0338   (0x0010)  
	TArray<FMFVoxelEnvAreaClusterRelevancyInfo1st>     AreaClusterRelevancyMatrix1st;                              // 0x0348   (0x0010)  
	FVector                                            AreaClusterRelevancyVolumeOrigin;                           // 0x0358   (0x000C)  
	FVector                                            AreaClusterRelevancyVolumeExtent;                           // 0x0364   (0x000C)  
	float                                              AreaClusterRelevancyVoxelSize;                              // 0x0370   (0x0004)  
	SDK_UNDEFINED(1,5133) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionChannel);                             // 0x0374   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0375   (0x0003)  MISSED
	int32_t                                            DebugShowVisible1stClustersID;                              // 0x0378   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x037C   (0x0004)  MISSED
	SDK_UNDEFINED(80,5134) /* TSet<int32_t> */         __um(OnlyDrawAreaClusterSet);                               // 0x0380   (0x0050)  
	bool                                               bDraw1stAreaCluster;                                        // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x03D1   (0x0007)  MISSED
	FString                                            DebugWriteActorsInfoLevelStr;                               // 0x03D8   (0x0010)  
	SDK_UNDEFINED(16,5135) /* TArray<TWeakObjectPtr<AActor*>> */ __um(DebugActors);                                // 0x03E8   (0x0010)  
	SDK_UNDEFINED(80,5136) /* TMap<TWeakObjectPtr<AActor*>, FBox> */ __um(OverrideActorBoxes);                     // 0x03F8   (0x0050)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0448   (0x0020)  MISSED
};

/// Class /Script/MFVoxelEnvAreaCluster.MFVoxelEnvVolumeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFVoxelEnvVolumeInterface : public UInterface
{ 
public:
};

/// Struct /Script/MFVoxelEnvAreaCluster.VoxelEnvClusterOctreeElement
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FVoxelEnvClusterOctreeElement
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FMFVoxelEnvTrafficabilityClusterSideInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMFVoxelEnvTrafficabilityClusterInfo) == 0x01E8); // 488 bytes (0x000000 - 0x0001E8)
static_assert(sizeof(FMFVoxelEnvAreaClusterRelevancyInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFVoxelEnvAreaClusterRelevancyInfo1st) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(AMFVoxelEnvAreaClusterActor) == 0x0468); // 1128 bytes (0x000318 - 0x000468)
static_assert(sizeof(UMFVoxelEnvVolumeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FVoxelEnvClusterOctreeElement) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterSideInfo, NodeIndexList) == 0x0000);
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterInfo, PCADir) == 0x0050);
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterInfo, ClusterSideTrafficabilityArray) == 0x0078);
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterInfo, AdjacentClusterInfo) == 0x00C8);
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterInfo, VisibleAdjacentClusterInfo) == 0x0118);
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterInfo, BoxList) == 0x0170);
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterInfo, CenterLoc) == 0x0180);
static_assert(offsetof(FMFVoxelEnvTrafficabilityClusterInfo, NearbyClusters) == 0x0190);
static_assert(offsetof(FMFVoxelEnvAreaClusterRelevancyInfo, PathCostList) == 0x0000);
static_assert(offsetof(FMFVoxelEnvAreaClusterRelevancyInfo, VisibilityList) == 0x0010);
static_assert(offsetof(AMFVoxelEnvAreaClusterActor, AreaClusterInfoList) == 0x0318);
static_assert(offsetof(AMFVoxelEnvAreaClusterActor, AreaClusterInfoList1st) == 0x0328);
static_assert(offsetof(AMFVoxelEnvAreaClusterActor, AreaClusterRelevancyMatrix) == 0x0338);
static_assert(offsetof(AMFVoxelEnvAreaClusterActor, AreaClusterRelevancyMatrix1st) == 0x0348);
static_assert(offsetof(AMFVoxelEnvAreaClusterActor, AreaClusterRelevancyVolumeOrigin) == 0x0358);
static_assert(offsetof(AMFVoxelEnvAreaClusterActor, AreaClusterRelevancyVolumeExtent) == 0x0364);
static_assert(offsetof(AMFVoxelEnvAreaClusterActor, DebugWriteActorsInfoLevelStr) == 0x03D8);
