// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MFNPCAIUtils

#pragma pack(push, 0x1)

/// Class /Script/MFVoxelNav.MFVoxelNavData
/// Size: 0x0370 (880 bytes) (0x000318 - 0x000370) align 8 MaxSize: 0x0370
class AMFVoxelNavData : public AActor
{ 
public:
	FVector                                            OctreeOrigin;                                               // 0x0318   (0x000C)  
	FVector                                            OctreeSize;                                                 // 0x0324   (0x000C)  
	char                                               Depth;                                                      // 0x0330   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0331   (0x0003)  MISSED
	uint32_t                                           VoxelCntPerAxis;                                            // 0x0334   (0x0004)  
	FVector                                            VoxelSize;                                                  // 0x0338   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0344   (0x0004)  MISSED
	uint64_t                                           VoxelCnt;                                                   // 0x0348   (0x0008)  
	TArray<char>                                       WalkableVoxels;                                             // 0x0350   (0x0010)  
	TArray<char>                                       FlyableVoxels;                                              // 0x0360   (0x0010)  
};

/// Class /Script/MFVoxelNav.MFVoxelNavManager
/// Size: 0x03A0 (928 bytes) (0x000318 - 0x0003A0) align 16 MaxSize: 0x03A0
class AMFVoxelNavManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0318   (0x0088)  MISSED
};

/// Struct /Script/MFVoxelNav.MFVoxelNavLinkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMFVoxelNavLinkData
{ 
	TWeakObjectPtr<class ANPCAINavLinkProxy*>          LinkProxyPtr;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FNavLinkDetail                                     LinkDetail;                                                 // 0x0028   (0x000C)  
	char                                               LinkDir;                                                    // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	uint64_t                                           LeftNodeCodeEx;                                             // 0x0038   (0x0008)  
	uint64_t                                           RightNodeCodeEx;                                            // 0x0040   (0x0008)  
	FVector                                            LeftLoc;                                                    // 0x0048   (0x000C)  
	FVector                                            RightLoc;                                                   // 0x0054   (0x000C)  
};

/// Struct /Script/MFVoxelNav.MFVoxelNavGraphAStarFilterParam
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMFVoxelNavGraphAStarFilterParam
{ 
	float                                              HeuristicScale;                                             // 0x0000   (0x0004)  
	int32_t                                            MaxSearchNodes;                                             // 0x0004   (0x0004)  
	float                                              CloseEnoughDist;                                            // 0x0008   (0x0004)  
	char                                               SuggestWalkableRatio;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	SDK_UNDEFINED(80,1516) /* TSet<ENavLinkType> */    __um(EnabledNavLinkTypes);                                  // 0x0010   (0x0050)  
	float                                              CostLimit;                                                  // 0x0060   (0x0004)  
	float                                              TimeLimit;                                                  // 0x0064   (0x0004)  
};

/// Class /Script/MFVoxelNav.MFVoxelNavVolume
/// Size: 0x06D0 (1744 bytes) (0x000350 - 0x0006D0) align 8 MaxSize: 0x06D0
class AMFVoxelNavVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_8[0x1F8];                                     // 0x0350   (0x01F8)  MISSED
	FVector                                            VoxelSize;                                                  // 0x0548   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0554   (0x0004)  MISSED
	TArray<FVector>                                    NodeSizePerDepth;                                           // 0x0558   (0x0010)  
	char                                               MaxDepth;                                                   // 0x0568   (0x0001)  
	char                                               DepthPerChunk;                                              // 0x0569   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x056A   (0x0002)  MISSED
	uint32_t                                           ChunkNumPerAxis;                                            // 0x056C   (0x0004)  
	FVector                                            OctreeLoc;                                                  // 0x0570   (0x000C)  
	FVector                                            OriginLoc;                                                  // 0x057C   (0x000C)  
	FVector                                            LinkLocTolerance;                                           // 0x0588   (0x000C)  
	FVector                                            OctreeSize;                                                 // 0x0594   (0x000C)  
	uint32_t                                           ChunkNum;                                                   // 0x05A0   (0x0004)  
	FVector                                            ChunkSize;                                                  // 0x05A4   (0x000C)  
	SDK_UNDEFINED(16,1517) /* TArray<TWeakObjectPtr<AMFVoxelNavData*>> */ __um(NavDataList);                       // 0x05B0   (0x0010)  
	TArray<FMFVoxelNavLinkData>                        LinkDatas;                                                  // 0x05C0   (0x0010)  
	TWeakObjectPtr<class AActor*>                      PathStartActor;                                             // 0x05D0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x05D8   (0x0020)  MISSED
	TWeakObjectPtr<class AActor*>                      PathEndActor;                                               // 0x05F8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0600   (0x0020)  MISSED
	FMFVoxelNavGraphAStarFilterParam                   AStarFilterParam;                                           // 0x0620   (0x0068)  
	bool                                               bPostProcess : 1;                                           // 0x0688:0 (0x0001)  
	bool                                               bCheckSight : 1;                                            // 0x0688:1 (0x0001)  
	bool                                               bDrawNodePool : 1;                                          // 0x0688:2 (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0689   (0x0007)  MISSED
	TArray<uint64_t>                                   DebugDrawNodeArray;                                         // 0x0690   (0x0010)  
	TWeakObjectPtr<class AVolume*>                     ModifyCostVolume;                                           // 0x06A0   (0x0008)  
	unsigned char                                      UnknownData06_6[0x20];                                      // 0x06A8   (0x0020)  MISSED
	float                                              DebugTargetCost;                                            // 0x06C8   (0x0004)  
	unsigned char                                      UnknownData07_7[0x4];                                       // 0x06CC   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AMFVoxelNavData) == 0x0370); // 880 bytes (0x000318 - 0x000370)
static_assert(sizeof(AMFVoxelNavManager) == 0x03A0); // 928 bytes (0x000318 - 0x0003A0)
static_assert(sizeof(FMFVoxelNavLinkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMFVoxelNavGraphAStarFilterParam) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(AMFVoxelNavVolume) == 0x06D0); // 1744 bytes (0x000350 - 0x0006D0)
static_assert(offsetof(AMFVoxelNavData, OctreeOrigin) == 0x0318);
static_assert(offsetof(AMFVoxelNavData, OctreeSize) == 0x0324);
static_assert(offsetof(AMFVoxelNavData, VoxelSize) == 0x0338);
static_assert(offsetof(AMFVoxelNavData, WalkableVoxels) == 0x0350);
static_assert(offsetof(AMFVoxelNavData, FlyableVoxels) == 0x0360);
static_assert(offsetof(FMFVoxelNavLinkData, LinkProxyPtr) == 0x0000);
static_assert(offsetof(FMFVoxelNavLinkData, LinkDetail) == 0x0028);
static_assert(offsetof(FMFVoxelNavLinkData, LeftLoc) == 0x0048);
static_assert(offsetof(FMFVoxelNavLinkData, RightLoc) == 0x0054);
static_assert(offsetof(AMFVoxelNavVolume, VoxelSize) == 0x0548);
static_assert(offsetof(AMFVoxelNavVolume, NodeSizePerDepth) == 0x0558);
static_assert(offsetof(AMFVoxelNavVolume, OctreeLoc) == 0x0570);
static_assert(offsetof(AMFVoxelNavVolume, OriginLoc) == 0x057C);
static_assert(offsetof(AMFVoxelNavVolume, LinkLocTolerance) == 0x0588);
static_assert(offsetof(AMFVoxelNavVolume, OctreeSize) == 0x0594);
static_assert(offsetof(AMFVoxelNavVolume, ChunkSize) == 0x05A4);
static_assert(offsetof(AMFVoxelNavVolume, LinkDatas) == 0x05C0);
static_assert(offsetof(AMFVoxelNavVolume, PathStartActor) == 0x05D0);
static_assert(offsetof(AMFVoxelNavVolume, PathEndActor) == 0x05F8);
static_assert(offsetof(AMFVoxelNavVolume, AStarFilterParam) == 0x0620);
static_assert(offsetof(AMFVoxelNavVolume, DebugDrawNodeArray) == 0x0690);
static_assert(offsetof(AMFVoxelNavVolume, ModifyCostVolume) == 0x06A0);
