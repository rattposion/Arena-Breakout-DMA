// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFVoxelReflectionRuntime.MFVoxelReflectionDoorSwitch
/// Size: 0x03A8 (936 bytes) (0x000350 - 0x0003A8) align 8 MaxSize: 0x03A8
class AMFVoxelReflectionDoorSwitch : public AVolume
{ 
public:
	TLazyObjectPtr<class AActor*>                      Door;                                                       // 0x0350   (0x001C)  
	SDK_UNDEFINED(1,5137) /* EMFDoorSwitchMode */      __um(SwitchMode);                                           // 0x036C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x036D   (0x0003)  MISSED
	TWeakObjectPtr<class AReflectionCapture*>          ReflectionCaptureDoorOpened;                                // 0x0370   (0x0008)  
	TWeakObjectPtr<class AReflectionCapture*>          ReflectionCaptureDoorClosed;                                // 0x0378   (0x0008)  
	int32_t                                            VoxelReflectionID;                                          // 0x0380   (0x0004)  
	unsigned char                                      UnknownData01_7[0x24];                                      // 0x0384   (0x0024)  MISSED
};

/// Class /Script/MFVoxelReflectionRuntime.MFVoxelReflectionPatchVolume
/// Size: 0x0388 (904 bytes) (0x000350 - 0x000388) align 8 MaxSize: 0x0388
class AMFVoxelReflectionPatchVolume : public AVolume
{ 
public:
	bool                                               bInterior;                                                  // 0x0350   (0x0001)  
	bool                                               bNoSkyLightCompensation;                                    // 0x0351   (0x0001)  
	bool                                               bEraseVoxels;                                               // 0x0352   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0353   (0x0005)  MISSED
	SDK_UNDEFINED(16,5138) /* TArray<TWeakObjectPtr<AReflectionCapture*>> */ __um(IgnoredReflectionCaptures);      // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,5139) /* TArray<TWeakObjectPtr<AReflectionCapture*>> */ __um(ForcedReflectionCaptures);       // 0x0368   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0378   (0x0010)  MISSED
};

/// Class /Script/MFVoxelReflectionRuntime.MFVoxelReflectionSystem
/// Size: 0x03E0 (992 bytes) (0x000318 - 0x0003E0) align 8 MaxSize: 0x03E0
class AMFVoxelReflectionSystem : public AActor
{ 
public:
	float                                              VoxelSampleBiasScale;                                       // 0x0318   (0x0004)  
	float                                              ReflectionCaptureFadePower;                                 // 0x031C   (0x0004)  
	float                                              VoxelVolumeBoundFadeDistance;                               // 0x0320   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0324   (0x0004)  MISSED
	class UVoxelDataAsset*                             VoxelDataAsset;                                             // 0x0328   (0x0008)  
	class USparseVoxelDataRawAsset*                    SparseVoxelDataRawAsset;                                    // 0x0330   (0x0008)  
	FIntVector                                         VoxelDimensions;                                            // 0x0338   (0x000C)  
	FBox                                               VoxelBounds;                                                // 0x0344   (0x001C)  
	float                                              VoxelGridSize;                                              // 0x0360   (0x0004)  
	float                                              FadeInSpeed;                                                // 0x0364   (0x0004)  
	float                                              FadeOutSpeed;                                               // 0x0368   (0x0004)  
	int32_t                                            VoxelTreeBranchingFactor;                                   // 0x036C   (0x0004)  
	SDK_UNDEFINED(16,5140) /* TArray<TWeakObjectPtr<UReflectionCaptureComponent*>> */ __um(InteriorReflectionCaptures); // 0x0370   (0x0010)  
	TArray<FTransform>                                 InteriorObbs;                                               // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,5141) /* TArray<TWeakObjectPtr<AObbInteriorVolume*>> */ __um(ObbInteriorVolumes);             // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,5142) /* TArray<TWeakObjectPtr<AMFVoxelReflectionPatchVolume*>> */ __um(InteriorPatchVolumes); // 0x03A0   (0x0010)  
	float                                              InteriorFadeOutRange;                                       // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x03B4   (0x0004)  MISSED
	class UBoxComponent*                               BoxComponent;                                               // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x03C0   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFVoxelReflectionRuntime.MFVoxelReflectionSystem.SurroundReflectionProbePlacement
	// void SurroundReflectionProbePlacement();                                                                                 // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFVoxelReflectionRuntime.MFVoxelReflectionSystem.GenerateInteriorBounds
	// void GenerateInteriorBounds();                                                                                           // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFVoxelReflectionRuntime.MFVoxelReflectionSystem.BakeVoxels
	// void BakeVoxels();                                                                                                       // [0x1e39048] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFVoxelReflectionRuntime.ObbInteriorClippingPlane
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class AObbInteriorClippingPlane : public AStaticMeshActor
{ 
public:
};

/// Class /Script/MFVoxelReflectionRuntime.ObbInteriorVolume
/// Size: 0x0370 (880 bytes) (0x000350 - 0x000370) align 16 MaxSize: 0x0370
class AObbInteriorVolume : public AVolume
{ 
public:
	FPlane                                             InteriorClippingPlane;                                      // 0x0350   (0x0010)  
	float                                              FadeOutRange;                                               // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0364   (0x000C)  MISSED
};

/// Class /Script/MFVoxelReflectionRuntime.SparseVoxelDataRawAsset
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class USparseVoxelDataRawAsset : public UDataAsset
{ 
public:
	int32_t                                            Version;                                                    // 0x0030   (0x0004)  
	FIntVector                                         TreeRootDimensions;                                         // 0x0034   (0x000C)  
	int32_t                                            TreeHeight;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x2C];                                      // 0x0044   (0x002C)  MISSED
};

/// Class /Script/MFVoxelReflectionRuntime.VoxelBoundsVisualizer
/// Size: 0x05A0 (1440 bytes) (0x000540 - 0x0005A0) align 16 MaxSize: 0x05A0
class UVoxelBoundsVisualizer : public UDebugDrawComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0540   (0x0060)  MISSED
};

/// Struct /Script/MFVoxelReflectionRuntime.ReflectionVoxel
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReflectionVoxel
{ 
	TArray<int32_t>                                    ReflectionCaptureIDs;                                       // 0x0000   (0x0010)  
	uint32_t                                           CornerNeighbourFlags;                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/MFVoxelReflectionRuntime.VoxelDataAsset
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UVoxelDataAsset : public UDataAsset
{ 
public:
	TArray<FReflectionVoxel>                           Voxels;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/MFVoxelReflectionRuntime.VoxelVisualizer
/// Size: 0x0540 (1344 bytes) (0x000540 - 0x000540) align 16 MaxSize: 0x0540
class UVoxelVisualizer : public UDebugDrawComponent
{ 
public:
};

/// Class /Script/MFVoxelReflectionRuntime.VoxelReflectionSystemVisualizer
/// Size: 0x05C0 (1472 bytes) (0x000540 - 0x0005C0) align 16 MaxSize: 0x05C0
class UVoxelReflectionSystemVisualizer : public UVoxelVisualizer
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0540   (0x0080)  MISSED
};

/// Class /Script/MFVoxelReflectionRuntime.VoxelReflectionWorldSubsystem
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UVoxelReflectionWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class AMFVoxelReflectionSystem*                    VoxelReflectionSystem;                                      // 0x0038   (0x0008)  
	class UWorld*                                      CurrentReflectionCapturesWorld;                             // 0x0040   (0x0008)  
	TArray<class UReflectionCaptureComponent*>         AllReflectionCaptures;                                      // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0058   (0x0018)  MISSED
};

/// Struct /Script/MFVoxelReflectionRuntime.ReflectionVoxelTreeNode
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FReflectionVoxelTreeNode
{ 
	uint32_t                                           ChildMaskL;                                                 // 0x0000   (0x0004)  
	uint32_t                                           ChildMaskH;                                                 // 0x0004   (0x0004)  
	uint32_t                                           ChildStartIndex;                                            // 0x0008   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(AMFVoxelReflectionDoorSwitch) == 0x03A8); // 936 bytes (0x000350 - 0x0003A8)
static_assert(sizeof(AMFVoxelReflectionPatchVolume) == 0x0388); // 904 bytes (0x000350 - 0x000388)
static_assert(sizeof(AMFVoxelReflectionSystem) == 0x03E0); // 992 bytes (0x000318 - 0x0003E0)
static_assert(sizeof(AObbInteriorClippingPlane) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(AObbInteriorVolume) == 0x0370); // 880 bytes (0x000350 - 0x000370)
static_assert(sizeof(USparseVoxelDataRawAsset) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UVoxelBoundsVisualizer) == 0x05A0); // 1440 bytes (0x000540 - 0x0005A0)
static_assert(sizeof(FReflectionVoxel) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UVoxelDataAsset) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UVoxelVisualizer) == 0x0540); // 1344 bytes (0x000540 - 0x000540)
static_assert(sizeof(UVoxelReflectionSystemVisualizer) == 0x05C0); // 1472 bytes (0x000540 - 0x0005C0)
static_assert(sizeof(UVoxelReflectionWorldSubsystem) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FReflectionVoxelTreeNode) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(AMFVoxelReflectionDoorSwitch, Door) == 0x0350);
static_assert(offsetof(AMFVoxelReflectionDoorSwitch, ReflectionCaptureDoorOpened) == 0x0370);
static_assert(offsetof(AMFVoxelReflectionDoorSwitch, ReflectionCaptureDoorClosed) == 0x0378);
static_assert(offsetof(AMFVoxelReflectionSystem, VoxelDataAsset) == 0x0328);
static_assert(offsetof(AMFVoxelReflectionSystem, SparseVoxelDataRawAsset) == 0x0330);
static_assert(offsetof(AMFVoxelReflectionSystem, VoxelDimensions) == 0x0338);
static_assert(offsetof(AMFVoxelReflectionSystem, VoxelBounds) == 0x0344);
static_assert(offsetof(AMFVoxelReflectionSystem, InteriorObbs) == 0x0380);
static_assert(offsetof(AMFVoxelReflectionSystem, BoxComponent) == 0x03B8);
static_assert(offsetof(AObbInteriorVolume, InteriorClippingPlane) == 0x0350);
static_assert(offsetof(USparseVoxelDataRawAsset, TreeRootDimensions) == 0x0034);
static_assert(offsetof(FReflectionVoxel, ReflectionCaptureIDs) == 0x0000);
static_assert(offsetof(UVoxelDataAsset, Voxels) == 0x0030);
static_assert(offsetof(UVoxelReflectionWorldSubsystem, VoxelReflectionSystem) == 0x0038);
static_assert(offsetof(UVoxelReflectionWorldSubsystem, CurrentReflectionCapturesWorld) == 0x0040);
static_assert(offsetof(UVoxelReflectionWorldSubsystem, AllReflectionCaptures) == 0x0048);
