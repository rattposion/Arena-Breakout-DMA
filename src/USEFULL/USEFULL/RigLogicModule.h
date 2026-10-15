// generated header

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RigVM

#pragma pack(push, 0x1)

/// Class /Script/RigLogicModule.DNAAsset
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UDNAAsset : public UAssetUserData
{ 
public:
	FString                                            DNAFileName;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0038   (0x0040)  MISSED
};

/// Struct /Script/RigLogicModule.VertexLayout
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FVertexLayout
{ 
	int32_t                                            position;                                                   // 0x0000   (0x0004)  
	int32_t                                            TextureCoordinate;                                          // 0x0004   (0x0004)  
	int32_t                                            Normal;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/RigLogicModule.TextureCoordinate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FTextureCoordinate
{ 
	float                                              U;                                                          // 0x0000   (0x0004)  
	float                                              V;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/RigLogicModule.MeshBlendShapeChannelMapping
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMeshBlendShapeChannelMapping
{ 
	int32_t                                            MeshIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            BlendShapeChannelIndex;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/RigLogicModule.CoordinateSystem
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FCoordinateSystem
{ 
	SDK_UNDEFINED(1,5157) /* EDirection */             __um(XAxis);                                                // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,5158) /* EDirection */             __um(YAxis);                                                // 0x0001   (0x0001)  
	SDK_UNDEFINED(1,5159) /* EDirection */             __um(ZAxis);                                                // 0x0002   (0x0001)  
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_IntArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_RigLogic_IntArray
{ 
	TArray<int32_t>                                    Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_Data
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_RigLogic_Data
{ 
	TWeakObjectPtr<class USkeletalMeshComponent*>      SkelMeshComponent;                                          // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
	TArray<int32_t>                                    InputCurveIndices;                                          // 0x0018   (0x0010)  
	TArray<int32_t>                                    HierarchyBoneIndices;                                       // 0x0028   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 MorphTargetCurveIndices;                                    // 0x0038   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 BlendShapeIndices;                                          // 0x0048   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 CurveContainerIndicesForAnimMaps;                           // 0x0058   (0x0010)  
	TArray<FRigUnit_RigLogic_IntArray>                 RigLogicIndicesForAnimMaps;                                 // 0x0068   (0x0010)  
	uint32_t                                           CurrentLOD;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FRigUnit_RigLogic : FRigUnitMutable
{ 
	FRigUnit_RigLogic_Data                             Data;                                                       // 0x0068   (0x0080)  
};

#pragma pack(pop)


static_assert(sizeof(UDNAAsset) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FVertexLayout) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FTextureCoordinate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMeshBlendShapeChannelMapping) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCoordinateSystem) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FRigUnit_RigLogic_IntArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_RigLogic_Data) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigUnit_RigLogic) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(offsetof(UDNAAsset, DNAFileName) == 0x0028);
static_assert(offsetof(FRigUnit_RigLogic_IntArray, Values) == 0x0000);
static_assert(offsetof(FRigUnit_RigLogic_Data, SkelMeshComponent) == 0x0000);
static_assert(offsetof(FRigUnit_RigLogic_Data, InputCurveIndices) == 0x0018);
static_assert(offsetof(FRigUnit_RigLogic_Data, HierarchyBoneIndices) == 0x0028);
static_assert(offsetof(FRigUnit_RigLogic_Data, MorphTargetCurveIndices) == 0x0038);
static_assert(offsetof(FRigUnit_RigLogic_Data, BlendShapeIndices) == 0x0048);
static_assert(offsetof(FRigUnit_RigLogic_Data, CurveContainerIndicesForAnimMaps) == 0x0058);
static_assert(offsetof(FRigUnit_RigLogic_Data, RigLogicIndicesForAnimMaps) == 0x0068);
static_assert(offsetof(FRigUnit_RigLogic, Data) == 0x0068);
