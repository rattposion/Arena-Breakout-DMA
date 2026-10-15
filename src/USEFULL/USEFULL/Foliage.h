// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0790 (1936 bytes) (0x000758 - 0x000790) align 16 MaxSize: 0x0790
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,4842) /* FMulticastInlineDelegate */ __um(OnInstanceTakePointDamage);                         // 0x0758   (0x0010)  
	SDK_UNDEFINED(16,4843) /* FMulticastInlineDelegate */ __um(OnInstanceTakeRadialDamage);                        // 0x0768   (0x0010)  
	FGuid                                              GenerationGuid;                                             // 0x0778   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0788   (0x0008)  MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x742cf70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box);          // [0x742ce1c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFoliageVertexColorChannelMask
{ 
	bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaskThreshold;                                              // 0x0004   (0x0004)  
	bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x03B0 (944 bytes) (0x000028 - 0x0003B0) align 8 MaxSize: 0x03B0
class UFoliageType : public UObject
{ 
public:
	FGuid                                              UpdateGuid;                                                 // 0x0028   (0x0010)  
	float                                              Density;                                                    // 0x0038   (0x0004)  
	float                                              DensityAdjustmentFactor;                                    // 0x003C   (0x0004)  
	float                                              Radius;                                                     // 0x0040   (0x0004)  
	bool                                               bSingleInstanceModeOverrideRadius;                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              SingleInstanceModeRadius;                                   // 0x0048   (0x0004)  
	SDK_UNDEFINED(1,4844) /* EFoliageScaling */        __um(Scaling);                                              // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0050   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0058   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0060   (0x0008)  
	FFoliageVertexColorChannelMask                     VertexColorMaskByChannel[4];                                // 0x0068   (0x0030)  
	SDK_UNDEFINED(1,4845) /* TEnumAsByte<FoliageVertexColorMask> */ __um(VertexColorMask);                         // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              VertexColorMaskThreshold;                                   // 0x009C   (0x0004)  
	bool                                               VertexColorMaskInvert : 1;                                  // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FFloatInterval                                     ZOffset;                                                    // 0x00A4   (0x0008)  
	bool                                               AlignToNormal : 1;                                          // 0x00AC:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x00B0   (0x0004)  
	bool                                               RandomYaw : 1;                                              // 0x00B4:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              RandomPitchAngle;                                           // 0x00B8   (0x0004)  
	FFloatInterval                                     GroundSlopeAngle;                                           // 0x00BC   (0x0008)  
	FFloatInterval                                     Height;                                                     // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      LandscapeLayers;                                            // 0x00D0   (0x0010)  
	float                                              MinimumLayerWeight;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00E8   (0x0010)  
	float                                              MinimumExclusionLayerWeight;                                // 0x00F8   (0x0004)  
	FName                                              LandscapeLayer;                                             // 0x00FC   (0x0008)  
	bool                                               CollisionWithWorld : 1;                                     // 0x0104:0 (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x0108   (0x000C)  
	FBoxSphereBounds                                   MeshBounds;                                                 // 0x0114   (0x001C)  
	FVector                                            LowBoundOriginRadius;                                       // 0x0130   (0x000C)  
	bool                                               bReMergeInstancing : 1;                                     // 0x013C:0 (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x013D   (0x0003)  MISSED
	SDK_UNDEFINED(1,4846) /* EShadowCaptureLayer */    __um(ShadowCaptureLayer);                                   // 0x0140   (0x0001)  
	bool                                               bHiddenShadowOnShadowCapture : 1;                           // 0x0141:0 (0x0001)  
	SDK_UNDEFINED(1,4847) /* TEnumAsByte<EComponentMobility> */ __um(Mobility);                                    // 0x0142   (0x0001)  
	unsigned char                                      UnknownData10_6[0x1];                                       // 0x0143   (0x0001)  MISSED
	FInt32Interval                                     CullDistance;                                               // 0x0144   (0x0008)  
	bool                                               bEnableStaticLighting : 1;                                  // 0x014C:0 (0x0001)  
	bool                                               CastShadow : 1;                                             // 0x014C:1 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x014C:2 (0x0001)  
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x014C:3 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x014C:4 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x014C:5 (0x0001)  
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x014C:6 (0x0001)  
	bool                                               bCastDFShadow : 1;                                          // 0x014C:7 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x014D   (0x0003)  MISSED
	bool                                               bCSMCacheForceEnable : 1;                                   // 0x0150:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x0151   (0x0003)  MISSED
	bool                                               bReceivesDecals : 1;                                        // 0x0154:0 (0x0001)  
	bool                                               bOverrideLightmapRes : 1;                                   // 0x0154:1 (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x0155   (0x0003)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x0158   (0x0004)  
	SDK_UNDEFINED(1,4848) /* ELightmapType */          __um(LightmapType);                                         // 0x015C   (0x0001)  
	SDK_UNDEFINED(1,4849) /* TEnumAsByte<EIndirectLightingCacheQuality> */ __um(IndirectLightingCacheQuality);     // 0x015D   (0x0001)  
	unsigned char                                      UnknownData14_6[0x2];                                       // 0x015E   (0x0002)  MISSED
	bool                                               bForceUseSkyLightAsDiffuseGI : 1;                           // 0x0160:0 (0x0001)  
	bool                                               bUseAsOccluder : 1;                                         // 0x0160:1 (0x0001)  
	unsigned char                                      UnknownData15_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0168   (0x0150)  
	SDK_UNDEFINED(1,4850) /* TEnumAsByte<EHasCustomNavigableGeometry> */ __um(CustomNavigableGeometry);            // 0x02B8   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData16_6[0x2];                                       // 0x02BA   (0x0002)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x02BC:0 (0x0001)  
	unsigned char                                      UnknownData17_5[0x3];                                       // 0x02BD   (0x0003)  MISSED
	SDK_UNDEFINED(1,4851) /* ERendererStencilMask */   __um(CustomDepthStencilWriteMask);                          // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData18_6[0x3];                                       // 0x02C1   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x02C4   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x02C8   (0x0004)  
	float                                              CollisionRadius;                                            // 0x02CC   (0x0004)  
	float                                              ShadeRadius;                                                // 0x02D0   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x02D4   (0x0004)  
	float                                              InitialSeedDensity;                                         // 0x02D8   (0x0004)  
	float                                              AverageSpreadDistance;                                      // 0x02DC   (0x0004)  
	float                                              SpreadVariance;                                             // 0x02E0   (0x0004)  
	int32_t                                            SeedsPerStep;                                               // 0x02E4   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x02E8   (0x0004)  
	float                                              MaxInitialSeedOffset;                                       // 0x02EC   (0x0004)  
	bool                                               bCanGrowInShade;                                            // 0x02F0   (0x0001)  
	bool                                               bSpawnsInShade;                                             // 0x02F1   (0x0001)  
	unsigned char                                      UnknownData19_6[0x2];                                       // 0x02F2   (0x0002)  MISSED
	float                                              MaxInitialAge;                                              // 0x02F4   (0x0004)  
	float                                              MaxAge;                                                     // 0x02F8   (0x0004)  
	float                                              OverlapPriority;                                            // 0x02FC   (0x0004)  
	FFloatInterval                                     ProceduralScale;                                            // 0x0300   (0x0008)  
	FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0308   (0x0088)  
	int32_t                                            ChangeCount;                                                // 0x0390   (0x0004)  
	bool                                               ReapplyDensity : 1;                                         // 0x0394:0 (0x0001)  
	bool                                               ReapplyRadius : 1;                                          // 0x0394:1 (0x0001)  
	bool                                               ReapplyAlignToNormal : 1;                                   // 0x0394:2 (0x0001)  
	bool                                               ReapplyRandomYaw : 1;                                       // 0x0394:3 (0x0001)  
	bool                                               ReapplyScaling : 1;                                         // 0x0394:4 (0x0001)  
	bool                                               ReapplyScaleX : 1;                                          // 0x0394:5 (0x0001)  
	bool                                               ReapplyScaleY : 1;                                          // 0x0394:6 (0x0001)  
	bool                                               ReapplyScaleZ : 1;                                          // 0x0394:7 (0x0001)  
	bool                                               ReapplyRandomPitchAngle : 1;                                // 0x0395:0 (0x0001)  
	bool                                               ReapplyGroundSlope : 1;                                     // 0x0395:1 (0x0001)  
	bool                                               ReapplyHeight : 1;                                          // 0x0395:2 (0x0001)  
	bool                                               ReapplyLandscapeLayers : 1;                                 // 0x0395:3 (0x0001)  
	bool                                               ReapplyZOffset : 1;                                         // 0x0395:4 (0x0001)  
	bool                                               ReapplyCollisionWithWorld : 1;                              // 0x0395:5 (0x0001)  
	bool                                               ReapplyVertexColorMask : 1;                                 // 0x0395:6 (0x0001)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0395:7 (0x0001)  
	bool                                               bEnableDiscardOnLoad : 1;                                   // 0x0396:0 (0x0001)  
	unsigned char                                      UnknownData20_5[0x1];                                       // 0x0397   (0x0001)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x0398   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x03A8   (0x0004)  
	SDK_UNDEFINED(1,4852) /* ERuntimeVirtualTextureMainPassType */ __um(VirtualTextureRenderPassType);             // 0x03AC   (0x0001)  
	unsigned char                                      UnknownData21_7[0x3];                                       // 0x03AD   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x03C0 (960 bytes) (0x0003B0 - 0x0003C0) align 8 MaxSize: 0x03C0
class UFoliageType_Actor : public UFoliageType
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x03B0   (0x0008)  
	bool                                               bShouldAttachToBaseComponent;                               // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x03B9   (0x0007)  MISSED
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x03D0 (976 bytes) (0x0003B0 - 0x0003D0) align 8 MaxSize: 0x03D0
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x03B0   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x03B8   (0x0010)  
	class UClass*                                      ComponentClass;                                             // 0x03C8   (0x0008)  
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0368 (872 bytes) (0x000318 - 0x000368) align 8 MaxSize: 0x0368
class AInstancedFoliageActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0318   (0x0050)  MISSED
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0388 (904 bytes) (0x000328 - 0x000388) align 8 MaxSize: 0x0388
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0328   (0x0008)  
	FVector                                            TouchingActorEntryPosition;                                 // 0x0330   (0x000C)  
	FVector                                            FoliageVelocity;                                            // 0x033C   (0x000C)  
	FVector                                            FoliageForce;                                               // 0x0348   (0x000C)  
	FVector                                            FoliagePosition;                                            // 0x0354   (0x000C)  
	float                                              FoliageDamageImpulseScale;                                  // 0x0360   (0x0004)  
	float                                              FoliageTouchImpulseScale;                                   // 0x0364   (0x0004)  
	float                                              FoliageStiffness;                                           // 0x0368   (0x0004)  
	float                                              FoliageStiffnessQuadratic;                                  // 0x036C   (0x0004)  
	float                                              FoliageDamping;                                             // 0x0370   (0x0004)  
	float                                              MaxDamageImpulse;                                           // 0x0374   (0x0004)  
	float                                              MaxTouchImpulse;                                            // 0x0378   (0x0004)  
	float                                              MaxForce;                                                   // 0x037C   (0x0004)  
	float                                              Mass;                                                       // 0x0380   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0384   (0x0004)  MISSED


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x742cbb0] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0590 (1424 bytes) (0x000588 - 0x000590) align 16 MaxSize: 0x0590
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0588   (0x0008)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0358 (856 bytes) (0x000350 - 0x000358) align 8 MaxSize: 0x0358
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                    // 0x0350   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0120 (288 bytes) (0x0000F8 - 0x000120) align 8 MaxSize: 0x0120
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x00F8   (0x0008)  
	float                                              TileOverlap;                                                // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	class AVolume*                                     SpawningVolume;                                             // 0x0108   (0x0008)  
	FGuid                                              ProceduralGuid;                                             // 0x0110   (0x0010)  
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFoliageTypeObject
{ 
	class UObject*                                     FoliageTypeObject;                                          // 0x0000   (0x0008)  
	class UFoliageType*                                TypeInstance;                                               // 0x0008   (0x0008)  
	bool                                               bIsAsset;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UClass*                                      Type;                                                       // 0x0018   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UProceduralFoliageSpawner : public UObject
{ 
public:
	int32_t                                            RandomSeed;                                                 // 0x0028   (0x0004)  
	float                                              TileSize;                                                   // 0x002C   (0x0004)  
	int32_t                                            NumUniqueTiles;                                             // 0x0030   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x0034   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                         // [0x742d0fc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FProceduralFoliageInstance
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	float                                              Age;                                                        // 0x001C   (0x0004)  
	FVector                                            Normal;                                                     // 0x0020   (0x000C)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	class UFoliageType*                                Type;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0158 (344 bytes) (0x000028 - 0x000158) align 8 MaxSize: 0x0158
class UProceduralFoliageTile : public UObject
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x78];                                      // 0x00E0   (0x0078)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0358 (856 bytes) (0x000350 - 0x000358) align 8 MaxSize: 0x0358
class AProceduralFoliageVolume : public AVolume
{ 
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                        // 0x0350   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UFoliageInstancedStaticMeshComponent) == 0x0790); // 1936 bytes (0x000758 - 0x000790)
static_assert(sizeof(UFoliageStatistics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FFoliageVertexColorChannelMask) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UFoliageType) == 0x03B0); // 944 bytes (0x000028 - 0x0003B0)
static_assert(sizeof(UFoliageType_Actor) == 0x03C0); // 960 bytes (0x0003B0 - 0x0003C0)
static_assert(sizeof(UFoliageType_InstancedStaticMesh) == 0x03D0); // 976 bytes (0x0003B0 - 0x0003D0)
static_assert(sizeof(AInstancedFoliageActor) == 0x0368); // 872 bytes (0x000318 - 0x000368)
static_assert(sizeof(AInteractiveFoliageActor) == 0x0388); // 904 bytes (0x000328 - 0x000388)
static_assert(sizeof(UInteractiveFoliageComponent) == 0x0590); // 1424 bytes (0x000588 - 0x000590)
static_assert(sizeof(AProceduralFoliageBlockingVolume) == 0x0358); // 856 bytes (0x000350 - 0x000358)
static_assert(sizeof(UProceduralFoliageComponent) == 0x0120); // 288 bytes (0x0000F8 - 0x000120)
static_assert(sizeof(FFoliageTypeObject) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UProceduralFoliageSpawner) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FProceduralFoliageInstance) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UProceduralFoliageTile) == 0x0158); // 344 bytes (0x000028 - 0x000158)
static_assert(sizeof(AProceduralFoliageVolume) == 0x0358); // 856 bytes (0x000350 - 0x000358)
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, GenerationGuid) == 0x0778);
static_assert(offsetof(UFoliageType, UpdateGuid) == 0x0028);
static_assert(offsetof(UFoliageType, ScaleX) == 0x0050);
static_assert(offsetof(UFoliageType, ScaleY) == 0x0058);
static_assert(offsetof(UFoliageType, ScaleZ) == 0x0060);
static_assert(offsetof(UFoliageType, VertexColorMaskByChannel) == 0x0068);
static_assert(offsetof(UFoliageType, ZOffset) == 0x00A4);
static_assert(offsetof(UFoliageType, GroundSlopeAngle) == 0x00BC);
static_assert(offsetof(UFoliageType, Height) == 0x00C4);
static_assert(offsetof(UFoliageType, LandscapeLayers) == 0x00D0);
static_assert(offsetof(UFoliageType, ExclusionLandscapeLayers) == 0x00E8);
static_assert(offsetof(UFoliageType, LandscapeLayer) == 0x00FC);
static_assert(offsetof(UFoliageType, CollisionScale) == 0x0108);
static_assert(offsetof(UFoliageType, MeshBounds) == 0x0114);
static_assert(offsetof(UFoliageType, LowBoundOriginRadius) == 0x0130);
static_assert(offsetof(UFoliageType, CullDistance) == 0x0144);
static_assert(offsetof(UFoliageType, BodyInstance) == 0x0168);
static_assert(offsetof(UFoliageType, LightingChannels) == 0x02B9);
static_assert(offsetof(UFoliageType, ProceduralScale) == 0x0300);
static_assert(offsetof(UFoliageType, ScaleCurve) == 0x0308);
static_assert(offsetof(UFoliageType, RuntimeVirtualTextures) == 0x0398);
static_assert(offsetof(UFoliageType_Actor, ActorClass) == 0x03B0);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, Mesh) == 0x03B0);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials) == 0x03B8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, ComponentClass) == 0x03C8);
static_assert(offsetof(AInteractiveFoliageActor, CapsuleComponent) == 0x0328);
static_assert(offsetof(AInteractiveFoliageActor, TouchingActorEntryPosition) == 0x0330);
static_assert(offsetof(AInteractiveFoliageActor, FoliageVelocity) == 0x033C);
static_assert(offsetof(AInteractiveFoliageActor, FoliageForce) == 0x0348);
static_assert(offsetof(AInteractiveFoliageActor, FoliagePosition) == 0x0354);
static_assert(offsetof(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume) == 0x0350);
static_assert(offsetof(UProceduralFoliageComponent, FoliageSpawner) == 0x00F8);
static_assert(offsetof(UProceduralFoliageComponent, SpawningVolume) == 0x0108);
static_assert(offsetof(UProceduralFoliageComponent, ProceduralGuid) == 0x0110);
static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0x0000);
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 0x0008);
static_assert(offsetof(FFoliageTypeObject, Type) == 0x0018);
static_assert(offsetof(UProceduralFoliageSpawner, FoliageTypes) == 0x0040);
static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0x0000);
static_assert(offsetof(FProceduralFoliageInstance, Location) == 0x0010);
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 0x0020);
static_assert(offsetof(FProceduralFoliageInstance, Type) == 0x0030);
static_assert(offsetof(UProceduralFoliageTile, FoliageSpawner) == 0x0028);
static_assert(offsetof(UProceduralFoliageTile, InstancesArray) == 0x00D0);
static_assert(offsetof(AProceduralFoliageVolume, ProceduralComponent) == 0x0350);
