// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

#pragma pack(push, 0x1)

/// Class /Script/HairStrandsCore.GroomActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AGroomActor : public AActor
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0318   (0x0008)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FHairGroupInfo
{ 
	int32_t                                            GroupID;                                                    // 0x0000   (0x0004)  
	int32_t                                            NumCurves;                                                  // 0x0004   (0x0004)  
	int32_t                                            NumGuides;                                                  // 0x0008   (0x0004)  
	int32_t                                            NumCurveVertices;                                           // 0x000C   (0x0004)  
	int32_t                                            NumGuideVertices;                                           // 0x0010   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfoWithVisibility
/// Size: 0x0018 (24 bytes) (0x000014 - 0x000018) align 4 MaxSize: 0x0018
struct FHairGroupInfoWithVisibility : FHairGroupInfo
{ 
	bool                                               bIsVisible;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGeometrySettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FHairGeometrySettings
{ 
	float                                              HairWidth;                                                  // 0x0000   (0x0004)  
	float                                              HairRootScale;                                              // 0x0004   (0x0004)  
	float                                              HairTipScale;                                               // 0x0008   (0x0004)  
	float                                              HairClipScale;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairShadowSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHairShadowSettings
{ 
	float                                              HairShadowDensity;                                          // 0x0000   (0x0004)  
	float                                              HairRaytracingRadiusScale;                                  // 0x0004   (0x0004)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0008   (0x0001)  
	bool                                               bVoxelize;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairAdvancedRenderingSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FHairAdvancedRenderingSettings
{ 
	bool                                               bUseStableRasterization;                                    // 0x0000   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x0001   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairGroupsRendering
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FHairGroupsRendering
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
	FHairGeometrySettings                              GeometrySettings;                                           // 0x0010   (0x0010)  
	FHairShadowSettings                                ShadowSettings;                                             // 0x0020   (0x000C)  
	FHairAdvancedRenderingSettings                     AdvancedSettings;                                           // 0x002C   (0x0002)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSolverSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FHairSolverSettings
{ 
	bool                                               EnableSimulation;                                           // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,4918) /* EGroomNiagaraSolvers */   __um(NiagaraSolver);                                        // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TWeakObjectPtr<class UNiagaraSystem*>              CustomSystem;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	int32_t                                            SubSteps;                                                   // 0x0030   (0x0004)  
	int32_t                                            IterationCount;                                             // 0x0034   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairExternalForces
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FHairExternalForces
{ 
	FVector                                            GravityVector;                                              // 0x0000   (0x000C)  
	float                                              AirDrag;                                                    // 0x000C   (0x0004)  
	FVector                                            AirVelocity;                                                // 0x0010   (0x000C)  
};

/// Struct /Script/HairStrandsCore.HairBendConstraint
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FHairBendConstraint
{ 
	bool                                               SolveBend;                                                  // 0x0000   (0x0001)  
	bool                                               ProjectBend;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              BendDamping;                                                // 0x0004   (0x0004)  
	float                                              BendStiffness;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 BendScale;                                                  // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairStretchConstraint
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FHairStretchConstraint
{ 
	bool                                               SolveStretch;                                               // 0x0000   (0x0001)  
	bool                                               ProjectStretch;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StretchDamping;                                             // 0x0004   (0x0004)  
	float                                              StretchStiffness;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 StretchScale;                                               // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairCollisionConstraint
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FHairCollisionConstraint
{ 
	bool                                               SolveCollision;                                             // 0x0000   (0x0001)  
	bool                                               ProjectCollision;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StaticFriction;                                             // 0x0004   (0x0004)  
	float                                              KineticFriction;                                            // 0x0008   (0x0004)  
	float                                              StrandsViscosity;                                           // 0x000C   (0x0004)  
	FIntVector                                         GridDimension;                                              // 0x0010   (0x000C)  
	float                                              CollisionRadius;                                            // 0x001C   (0x0004)  
	FRuntimeFloatCurve                                 RadiusScale;                                                // 0x0020   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairMaterialConstraints
/// Size: 0x01D8 (472 bytes) (0x000000 - 0x0001D8) align 8 MaxSize: 0x01D8
struct FHairMaterialConstraints
{ 
	FHairBendConstraint                                BendConstraint;                                             // 0x0000   (0x0098)  
	FHairStretchConstraint                             StretchConstraint;                                          // 0x0098   (0x0098)  
	FHairCollisionConstraint                           CollisionConstraint;                                        // 0x0130   (0x00A8)  
};

/// Struct /Script/HairStrandsCore.HairStrandsParameters
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FHairStrandsParameters
{ 
	SDK_UNDEFINED(1,4919) /* EGroomStrandsSize */      __um(StrandsSize);                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              StrandsDensity;                                             // 0x0004   (0x0004)  
	float                                              StrandsSmoothing;                                           // 0x0008   (0x0004)  
	float                                              StrandsThickness;                                           // 0x000C   (0x0004)  
	FRuntimeFloatCurve                                 ThicknessScale;                                             // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairGroupsPhysics
/// Size: 0x02C8 (712 bytes) (0x000000 - 0x0002C8) align 8 MaxSize: 0x02C8
struct FHairGroupsPhysics
{ 
	FHairSolverSettings                                SolverSettings;                                             // 0x0000   (0x0038)  
	FHairExternalForces                                ExternalForces;                                             // 0x0038   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FHairMaterialConstraints                           MaterialConstraints;                                        // 0x0058   (0x01D8)  
	FHairStrandsParameters                             StrandsParameters;                                          // 0x0230   (0x0098)  
};

/// Struct /Script/HairStrandsCore.HairDecimationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FHairDecimationSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairInterpolationSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHairInterpolationSettings
{ 
	bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	SDK_UNDEFINED(1,4920) /* EHairInterpolationQuality */ __um(InterpolationQuality);                              // 0x0008   (0x0001)  
	SDK_UNDEFINED(1,4921) /* EHairInterpolationWeight */ __um(InterpolationDistance);                              // 0x0009   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairGroupsInterpolation
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FHairGroupsInterpolation
{ 
	FHairDecimationSettings                            DecimationSettings;                                         // 0x0000   (0x0008)  
	FHairInterpolationSettings                         InterpolationSettings;                                      // 0x0008   (0x000C)  
};

/// Struct /Script/HairStrandsCore.HairLODSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FHairLODSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
	float                                              AngularThreshold;                                           // 0x0008   (0x0004)  
	float                                              ScreenSize;                                                 // 0x000C   (0x0004)  
	float                                              ThicknessScale;                                             // 0x0010   (0x0004)  
	bool                                               bVisible;                                                   // 0x0014   (0x0001)  
	SDK_UNDEFINED(1,4922) /* EGroomGeometryType */     __um(GeometryType);                                         // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupsLOD
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FHairGroupsLOD
{ 
	TArray<FHairLODSettings>                           LODs;                                                       // 0x0000   (0x0010)  
	float                                              ClusterWorldSize;                                           // 0x0010   (0x0004)  
	float                                              ClusterScreenSizeScale;                                     // 0x0014   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairCardsClusterSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FHairCardsClusterSettings
{ 
	float                                              ClusterDecimation;                                          // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,4923) /* EHairCardsClusterType */  __um(Type);                                                 // 0x0004   (0x0001)  
	bool                                               bUseGuide;                                                  // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairCardsGeometrySettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FHairCardsGeometrySettings
{ 
	SDK_UNDEFINED(1,4924) /* EHairCardsGenerationType */ __um(GenerationType);                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            CardsCount;                                                 // 0x0004   (0x0004)  
	SDK_UNDEFINED(1,4925) /* EHairCardsClusterType */  __um(ClusterType);                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MinSegmentLength;                                           // 0x000C   (0x0004)  
	float                                              AngularThreshold;                                           // 0x0010   (0x0004)  
	float                                              MinCardsLength;                                             // 0x0014   (0x0004)  
	float                                              MaxCardsLength;                                             // 0x0018   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairCardsTextureSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FHairCardsTextureSettings
{ 
	int32_t                                            AtlasMaxResolution;                                         // 0x0000   (0x0004)  
	int32_t                                            PixelPerCentimeters;                                        // 0x0004   (0x0004)  
	int32_t                                            LengthTextureCount;                                         // 0x0008   (0x0004)  
	int32_t                                            DensityTextureCount;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsProceduralCards
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FHairGroupsProceduralCards
{ 
	FHairCardsClusterSettings                          ClusterSettings;                                            // 0x0000   (0x0008)  
	FHairCardsGeometrySettings                         GeometrySettings;                                           // 0x0008   (0x001C)  
	FHairCardsTextureSettings                          TextureSettings;                                            // 0x0024   (0x0010)  
	int32_t                                            Version;                                                    // 0x0034   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupCardsTextures
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FHairGroupCardsTextures
{ 
	class UTexture2D*                                  DepthTexture;                                               // 0x0000   (0x0008)  
	class UTexture2D*                                  CoverageTexture;                                            // 0x0008   (0x0008)  
	class UTexture2D*                                  TangentTexture;                                             // 0x0010   (0x0008)  
	class UTexture2D*                                  AttributeTexture;                                           // 0x0018   (0x0008)  
	class UTexture2D*                                  AuxilaryDataTexture;                                        // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupCardsInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FHairGroupCardsInfo
{ 
	int32_t                                            NumCards;                                                   // 0x0000   (0x0004)  
	int32_t                                            NumCardVertices;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsCardsSourceDescription
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FHairGroupsCardsSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,4926) /* EHairCardsSourceType */   __um(SourceType);                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UStaticMesh*                                 ProceduralMesh;                                             // 0x0018   (0x0008)  
	FString                                            ProceduralMeshKey;                                          // 0x0020   (0x0010)  
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0030   (0x0008)  
	FHairGroupsProceduralCards                         ProceduralSettings;                                         // 0x0038   (0x0038)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0070   (0x0030)  
	int32_t                                            GroupIndex;                                                 // 0x00A0   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x00A4   (0x0004)  
	FHairGroupCardsInfo                                CardsInfo;                                                  // 0x00A8   (0x0008)  
	FString                                            ImportedMeshKey;                                            // 0x00B0   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FHairGroupsMeshesSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x0008)  
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0010   (0x0008)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0018   (0x0030)  
	int32_t                                            GroupIndex;                                                 // 0x0048   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x004C   (0x0004)  
	FString                                            ImportedMeshKey;                                            // 0x0050   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMaterial
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FHairGroupsMaterial
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              SlotName;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/HairStrandsCore.GroomAsset
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class UGroomAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FHairGroupInfoWithVisibility>               HairGroupsInfo;                                             // 0x0030   (0x0010)  
	TArray<FHairGroupsRendering>                       HairGroupsRendering;                                        // 0x0040   (0x0010)  
	TArray<FHairGroupsPhysics>                         HairGroupsPhysics;                                          // 0x0050   (0x0010)  
	TArray<FHairGroupsInterpolation>                   HairGroupsInterpolation;                                    // 0x0060   (0x0010)  
	TArray<FHairGroupsLOD>                             HairGroupsLOD;                                              // 0x0070   (0x0010)  
	TArray<FHairGroupsCardsSourceDescription>          HairGroupsCards;                                            // 0x0080   (0x0010)  
	TArray<FHairGroupsMeshesSourceDescription>         HairGroupsMeshes;                                           // 0x0090   (0x0010)  
	TArray<FHairGroupsMaterial>                        HairGroupsMaterials;                                        // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
	bool                                               EnableGlobalInterpolation;                                  // 0x00C0   (0x0001)  
	SDK_UNDEFINED(1,4927) /* EGroomInterpolationType */ __um(HairInterpolationType);                               // 0x00C1   (0x0001)  
	SDK_UNDEFINED(1,4928) /* EHairLODSelectionType */  __um(LODSelectionType);                                     // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x00C3   (0x0001)  MISSED
	FPerPlatformInt                                    MinLOD;                                                     // 0x00C4   (0x0008)  
	FPerPlatformBool                                   DisableBelowMinLodStripping;                                // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
	TArray<float>                                      EffectiveLODBias;                                           // 0x00D0   (0x0010)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.GroomAssetImportData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UGroomAssetImportData : public UAssetImportData
{ 
public:
	class UGroomImportOptions*                         ImportOptions;                                              // 0x0028   (0x0008)  
};

/// Struct /Script/HairStrandsCore.GoomBindingGroupInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGoomBindingGroupInfo
{ 
	int32_t                                            RenRootCount;                                               // 0x0000   (0x0004)  
	int32_t                                            RenLODCount;                                                // 0x0004   (0x0004)  
	int32_t                                            SimRootCount;                                               // 0x0008   (0x0004)  
	int32_t                                            SimLODCount;                                                // 0x000C   (0x0004)  
};

/// Class /Script/HairStrandsCore.GroomBindingAsset
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 16 MaxSize: 0x00A0
class UGroomBindingAsset : public UObject
{ 
public:
	class UGroomAsset*                                 Groom;                                                      // 0x0028   (0x0008)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0030   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0038   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0040   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x0044   (0x0004)  
	TArray<FGoomBindingGroupInfo>                      GroupInfos;                                                 // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0058   (0x0048)  MISSED
};

/// Class /Script/HairStrandsCore.GroomBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	// class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0x4d64e9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	// class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0x4d64cdc] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/HairStrandsCore.HairGroupDesc
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 MaxSize: 0x004C
struct FHairGroupDesc
{ 
	int32_t                                            HairCount;                                                  // 0x0000   (0x0004)  
	int32_t                                            GuideCount;                                                 // 0x0004   (0x0004)  
	float                                              HairLength;                                                 // 0x0008   (0x0004)  
	float                                              HairWidth;                                                  // 0x000C   (0x0004)  
	bool                                               HairWidth_Override;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              HairRootScale;                                              // 0x0014   (0x0004)  
	bool                                               HairRootScale_Override;                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              HairTipScale;                                               // 0x001C   (0x0004)  
	bool                                               HairTipScale_Override;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              HairClipLength;                                             // 0x0024   (0x0004)  
	bool                                               HairClipLength_Override;                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              HairShadowDensity;                                          // 0x002C   (0x0004)  
	bool                                               HairShadowDensity_Override;                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              HairRaytracingRadiusScale;                                  // 0x0034   (0x0004)  
	bool                                               HairRaytracingRadiusScale_Override;                         // 0x0038   (0x0001)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0039   (0x0001)  
	bool                                               bUseHairRaytracingGeometry_Override;                        // 0x003A   (0x0001)  
	unsigned char                                      UnknownData05_6[0x1];                                       // 0x003B   (0x0001)  MISSED
	float                                              LODBias;                                                    // 0x003C   (0x0004)  
	bool                                               bUseStableRasterization;                                    // 0x0040   (0x0001)  
	bool                                               bUseStableRasterization_Override;                           // 0x0041   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x0042   (0x0001)  
	bool                                               bScatterSceneLighting_Override;                             // 0x0043   (0x0001)  
	bool                                               bSupportVoxelization;                                       // 0x0044   (0x0001)  
	bool                                               bSupportVoxelization_Override;                              // 0x0045   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	int32_t                                            LODForcedIndex;                                             // 0x0048   (0x0004)  
};

/// Class /Script/HairStrandsCore.GroomComponent
/// Size: 0x0630 (1584 bytes) (0x000520 - 0x000630) align 16 MaxSize: 0x0630
class UGroomComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0520   (0x0008)  MISSED
	class UGroomAsset*                                 GroomAsset;                                                 // 0x0528   (0x0008)  
	TArray<class UNiagaraComponent*>                   NiagaraComponents;                                          // 0x0530   (0x0010)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0540   (0x0008)  
	class UGroomBindingAsset*                          BindingAsset;                                               // 0x0548   (0x0008)  
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0550   (0x0008)  
	class UMaterialInterface*                          Strands_DebugMaterial;                                      // 0x0558   (0x0008)  
	class UMaterialInterface*                          Strands_DefaultMaterial;                                    // 0x0560   (0x0008)  
	class UMaterialInterface*                          Cards_DefaultMaterial;                                      // 0x0568   (0x0008)  
	class UMaterialInterface*                          Meshes_DefaultMaterial;                                     // 0x0570   (0x0008)  
	class UNiagaraSystem*                              AngularSpringsSystem;                                       // 0x0578   (0x0008)  
	class UNiagaraSystem*                              CosseratRodsSystem;                                         // 0x0580   (0x0008)  
	FString                                            AttachmentName;                                             // 0x0588   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0598   (0x0048)  MISSED
	TArray<FHairGroupDesc>                             GroomGroupsDesc;                                            // 0x05E0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x05F0   (0x0040)  MISSED


	/// Functions
	// Function /Script/HairStrandsCore.GroomComponent.SetGroomAsset
	// void SetGroomAsset(class UGroomAsset* Asset);                                                                            // [0x4d65198] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetBindingAsset
	// void SetBindingAsset(class UGroomBindingAsset* InBinding);                                                               // [0x4d650bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HairStrandsCore.GroomCreateBindingOptions
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGroomCreateBindingOptions : public UObject
{ 
public:
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0028   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0030   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0038   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x003C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.FollicleMaskOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFollicleMaskOptions
{ 
	class UGroomAsset*                                 Groom;                                                      // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,4929) /* EFollicleMaskChannel */   __um(Channel);                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGroomCreateFollicleMaskOptions : public UObject
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0028   (0x0004)  
	int32_t                                            RootRadius;                                                 // 0x002C   (0x0004)  
	TArray<FFollicleMaskOptions>                       Grooms;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UGroomCreateStrandsTexturesOptions : public UObject
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0028   (0x0004)  
	SDK_UNDEFINED(1,4930) /* EStrandsTexturesTraceType */ __um(TraceType);                                         // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              TraceDistance;                                              // 0x0030   (0x0004)  
	SDK_UNDEFINED(1,4931) /* EStrandsTexturesMeshType */ __um(MeshType);                                           // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0038   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0040   (0x0008)  
	int32_t                                            LODIndex;                                                   // 0x0048   (0x0004)  
	int32_t                                            SectionIndex;                                               // 0x004C   (0x0004)  
	int32_t                                            UVChannelIndex;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<int32_t>                                    GroupIndex;                                                 // 0x0058   (0x0010)  
};

/// Struct /Script/HairStrandsCore.GroomConversionSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FGroomConversionSettings
{ 
	FVector                                            Rotation;                                                   // 0x0000   (0x000C)  
	FVector                                            Scale;                                                      // 0x000C   (0x000C)  
};

/// Class /Script/HairStrandsCore.GroomImportOptions
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UGroomImportOptions : public UObject
{ 
public:
	FGroomConversionSettings                           ConversionSettings;                                         // 0x0028   (0x0018)  
	TArray<FHairGroupsInterpolation>                   InterpolationSettings;                                      // 0x0040   (0x0010)  
};

/// Struct /Script/HairStrandsCore.GroomHairGroupPreview
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FGroomHairGroupPreview
{ 
	int32_t                                            GroupID;                                                    // 0x0000   (0x0004)  
	int32_t                                            CurveCount;                                                 // 0x0004   (0x0004)  
	int32_t                                            GuideCount;                                                 // 0x0008   (0x0004)  
	FHairGroupsInterpolation                           InterpolationSettings;                                      // 0x000C   (0x0014)  
};

/// Class /Script/HairStrandsCore.GroomHairGroupsPreview
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGroomHairGroupsPreview : public UObject
{ 
public:
	TArray<FGroomHairGroupPreview>                     Groups;                                                     // 0x0028   (0x0010)  
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{ 
public:
	class UGroomAsset*                                 DefaultSource;                                              // 0x0038   (0x0008)  
	class AActor*                                      SourceActor;                                                // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePhysicsAsset
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{ 
public:
	class UPhysicsAsset*                               DefaultSource;                                              // 0x0038   (0x0008)  
	class AActor*                                      SourceActor;                                                // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         GridSize;                                                   // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid
/// Size: 0x00E8 (232 bytes) (0x0000E8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{ 
public:
};

/// Struct /Script/HairStrandsCore.GroomBuildSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGroomBuildSettings
{ 
	bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	SDK_UNDEFINED(1,4932) /* EGroomInterpolationQuality */ __um(InterpolationQuality);                             // 0x0008   (0x0001)  
	SDK_UNDEFINED(1,4933) /* EGroomInterpolationWeight */ __um(InterpolationDistance);                             // 0x0009   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(AGroomActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(FHairGroupInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FHairGroupInfoWithVisibility) == 0x0018); // 24 bytes (0x000014 - 0x000018)
static_assert(sizeof(FHairGeometrySettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FHairShadowSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairAdvancedRenderingSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FHairGroupsRendering) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHairSolverSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairExternalForces) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairBendConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairStretchConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairCollisionConstraint) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FHairMaterialConstraints) == 0x01D8); // 472 bytes (0x000000 - 0x0001D8)
static_assert(sizeof(FHairStrandsParameters) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairGroupsPhysics) == 0x02C8); // 712 bytes (0x000000 - 0x0002C8)
static_assert(sizeof(FHairDecimationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairInterpolationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairGroupsInterpolation) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FHairLODSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairGroupsLOD) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairCardsClusterSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairCardsGeometrySettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairCardsTextureSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FHairGroupsProceduralCards) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairGroupCardsTextures) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHairGroupCardsInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairGroupsCardsSourceDescription) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FHairGroupsMeshesSourceDescription) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FHairGroupsMaterial) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomAsset) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(UGroomAssetImportData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FGoomBindingGroupInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomBindingAsset) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UGroomBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FHairGroupDesc) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(UGroomComponent) == 0x0630); // 1584 bytes (0x000520 - 0x000630)
static_assert(sizeof(UGroomCreateBindingOptions) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FFollicleMaskOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomCreateFollicleMaskOptions) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGroomCreateStrandsTexturesOptions) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FGroomConversionSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGroomImportOptions) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FGroomHairGroupPreview) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGroomHairGroupsPreview) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceHairStrands) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfacePhysicsAsset) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceVelocityGrid) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UNiagaraDataInterfacePressureGrid) == 0x00E8); // 232 bytes (0x0000E8 - 0x0000E8)
static_assert(sizeof(FGroomBuildSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(AGroomActor, GroomComponent) == 0x0318);
static_assert(offsetof(FHairGroupsRendering, MaterialSlotName) == 0x0000);
static_assert(offsetof(FHairGroupsRendering, Material) == 0x0008);
static_assert(offsetof(FHairGroupsRendering, GeometrySettings) == 0x0010);
static_assert(offsetof(FHairGroupsRendering, ShadowSettings) == 0x0020);
static_assert(offsetof(FHairGroupsRendering, AdvancedSettings) == 0x002C);
static_assert(offsetof(FHairSolverSettings, CustomSystem) == 0x0008);
static_assert(offsetof(FHairExternalForces, GravityVector) == 0x0000);
static_assert(offsetof(FHairExternalForces, AirVelocity) == 0x0010);
static_assert(offsetof(FHairBendConstraint, BendScale) == 0x0010);
static_assert(offsetof(FHairStretchConstraint, StretchScale) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, GridDimension) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, RadiusScale) == 0x0020);
static_assert(offsetof(FHairMaterialConstraints, BendConstraint) == 0x0000);
static_assert(offsetof(FHairMaterialConstraints, StretchConstraint) == 0x0098);
static_assert(offsetof(FHairMaterialConstraints, CollisionConstraint) == 0x0130);
static_assert(offsetof(FHairStrandsParameters, ThicknessScale) == 0x0010);
static_assert(offsetof(FHairGroupsPhysics, SolverSettings) == 0x0000);
static_assert(offsetof(FHairGroupsPhysics, ExternalForces) == 0x0038);
static_assert(offsetof(FHairGroupsPhysics, MaterialConstraints) == 0x0058);
static_assert(offsetof(FHairGroupsPhysics, StrandsParameters) == 0x0230);
static_assert(offsetof(FHairGroupsInterpolation, DecimationSettings) == 0x0000);
static_assert(offsetof(FHairGroupsInterpolation, InterpolationSettings) == 0x0008);
static_assert(offsetof(FHairGroupsLOD, LODs) == 0x0000);
static_assert(offsetof(FHairGroupsProceduralCards, ClusterSettings) == 0x0000);
static_assert(offsetof(FHairGroupsProceduralCards, GeometrySettings) == 0x0008);
static_assert(offsetof(FHairGroupsProceduralCards, TextureSettings) == 0x0024);
static_assert(offsetof(FHairGroupCardsTextures, DepthTexture) == 0x0000);
static_assert(offsetof(FHairGroupCardsTextures, CoverageTexture) == 0x0008);
static_assert(offsetof(FHairGroupCardsTextures, TangentTexture) == 0x0010);
static_assert(offsetof(FHairGroupCardsTextures, AttributeTexture) == 0x0018);
static_assert(offsetof(FHairGroupCardsTextures, AuxilaryDataTexture) == 0x0020);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsCardsSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMesh) == 0x0018);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMeshKey) == 0x0020);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMesh) == 0x0030);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralSettings) == 0x0038);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Textures) == 0x0070);
static_assert(offsetof(FHairGroupsCardsSourceDescription, CardsInfo) == 0x00A8);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMeshKey) == 0x00B0);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMesh) == 0x0010);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Textures) == 0x0018);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMeshKey) == 0x0050);
static_assert(offsetof(FHairGroupsMaterial, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMaterial, SlotName) == 0x0008);
static_assert(offsetof(UGroomAsset, HairGroupsInfo) == 0x0030);
static_assert(offsetof(UGroomAsset, HairGroupsRendering) == 0x0040);
static_assert(offsetof(UGroomAsset, HairGroupsPhysics) == 0x0050);
static_assert(offsetof(UGroomAsset, HairGroupsInterpolation) == 0x0060);
static_assert(offsetof(UGroomAsset, HairGroupsLOD) == 0x0070);
static_assert(offsetof(UGroomAsset, HairGroupsCards) == 0x0080);
static_assert(offsetof(UGroomAsset, HairGroupsMeshes) == 0x0090);
static_assert(offsetof(UGroomAsset, HairGroupsMaterials) == 0x00A0);
static_assert(offsetof(UGroomAsset, MinLOD) == 0x00C4);
static_assert(offsetof(UGroomAsset, DisableBelowMinLodStripping) == 0x00CC);
static_assert(offsetof(UGroomAsset, EffectiveLODBias) == 0x00D0);
static_assert(offsetof(UGroomAsset, AssetUserData) == 0x00E0);
static_assert(offsetof(UGroomAssetImportData, ImportOptions) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, Groom) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, SourceSkeletalMesh) == 0x0030);
static_assert(offsetof(UGroomBindingAsset, TargetSkeletalMesh) == 0x0038);
static_assert(offsetof(UGroomBindingAsset, GroupInfos) == 0x0048);
static_assert(offsetof(UGroomComponent, GroomAsset) == 0x0528);
static_assert(offsetof(UGroomComponent, NiagaraComponents) == 0x0530);
static_assert(offsetof(UGroomComponent, SourceSkeletalMesh) == 0x0540);
static_assert(offsetof(UGroomComponent, BindingAsset) == 0x0548);
static_assert(offsetof(UGroomComponent, PhysicsAsset) == 0x0550);
static_assert(offsetof(UGroomComponent, Strands_DebugMaterial) == 0x0558);
static_assert(offsetof(UGroomComponent, Strands_DefaultMaterial) == 0x0560);
static_assert(offsetof(UGroomComponent, Cards_DefaultMaterial) == 0x0568);
static_assert(offsetof(UGroomComponent, Meshes_DefaultMaterial) == 0x0570);
static_assert(offsetof(UGroomComponent, AngularSpringsSystem) == 0x0578);
static_assert(offsetof(UGroomComponent, CosseratRodsSystem) == 0x0580);
static_assert(offsetof(UGroomComponent, AttachmentName) == 0x0588);
static_assert(offsetof(UGroomComponent, GroomGroupsDesc) == 0x05E0);
static_assert(offsetof(UGroomCreateBindingOptions, SourceSkeletalMesh) == 0x0028);
static_assert(offsetof(UGroomCreateBindingOptions, TargetSkeletalMesh) == 0x0030);
static_assert(offsetof(FFollicleMaskOptions, Groom) == 0x0000);
static_assert(offsetof(UGroomCreateFollicleMaskOptions, Grooms) == 0x0030);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, StaticMesh) == 0x0038);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, SkeletalMesh) == 0x0040);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, GroupIndex) == 0x0058);
static_assert(offsetof(FGroomConversionSettings, Rotation) == 0x0000);
static_assert(offsetof(FGroomConversionSettings, Scale) == 0x000C);
static_assert(offsetof(UGroomImportOptions, ConversionSettings) == 0x0028);
static_assert(offsetof(UGroomImportOptions, InterpolationSettings) == 0x0040);
static_assert(offsetof(FGroomHairGroupPreview, InterpolationSettings) == 0x000C);
static_assert(offsetof(UGroomHairGroupsPreview, Groups) == 0x0028);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, DefaultSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, DefaultSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceVelocityGrid, GridSize) == 0x00D8);
