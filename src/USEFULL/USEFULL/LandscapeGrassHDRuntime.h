// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Landscape

#pragma pack(push, 0x1)

/// Class /Script/LandscapeGrassHDRuntime.GrassHDBuildData
/// Size: 0x0500 (1280 bytes) (0x000028 - 0x000500) align 16 MaxSize: 0x0500
class UGrassHDBuildData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x488];                                     // 0x0028   (0x0488)  MISSED
	SDK_UNDEFINED(1,5005) /* EGrassHDBuildState */     __um(State);                                                // 0x04B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x04B1   (0x0007)  MISSED
	FString                                            Description;                                                // 0x04B8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x38];                                      // 0x04C8   (0x0038)  MISSED
};

/// Class /Script/LandscapeGrassHDRuntime.GrassHDComponent
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align 8 MaxSize: 0x0110
class UGrassHDComponent : public UActorComponent
{ 
public:
	TArray<class UGrassHDBuildData*>                   BuildDataCollection;                                        // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/LandscapeGrassHDRuntime.GrassHDCompKey
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGrassHDCompKey
{ 
	TWeakObjectPtr<class ULandscapeComponent*>         BasedOn;                                                    // 0x0000   (0x0008)  
	class ULandscapeGrassType*                         GrassType;                                                  // 0x0008   (0x0008)  
	int32_t                                            SqrtSubsections;                                            // 0x0010   (0x0004)  
	int32_t                                            CachedMaxInstancesPerComponent;                             // 0x0014   (0x0004)  
	int32_t                                            SubsectionX;                                                // 0x0018   (0x0004)  
	int32_t                                            SubsectionY;                                                // 0x001C   (0x0004)  
	int32_t                                            NumVarieties;                                               // 0x0020   (0x0004)  
	int32_t                                            VarietyIndex;                                               // 0x0024   (0x0004)  
};

/// Class /Script/LandscapeGrassHDRuntime.GrassHDData
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGrassHDData : public UAssetUserData
{ 
public:
	TMap<FGrassHDCompKey, class UGrassHDRuntimeData*>  RuntimeDataMap;                                             // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0078   (0x0028)  MISSED
};

/// Class /Script/LandscapeGrassHDRuntime.GrassHDRuntimeData
/// Size: 0x0138 (312 bytes) (0x000028 - 0x000138) align 8 MaxSize: 0x0138
class UGrassHDRuntimeData : public UObject
{ 
public:
	float                                              HeightMin;                                                  // 0x0028   (0x0004)  
	float                                              HeightMax;                                                  // 0x002C   (0x0004)  
	TArray<char>                                       CompressedData;                                             // 0x0030   (0x0010)  
	int32_t                                            OBBsNum;                                                    // 0x0040   (0x0004)  
	char                                               CompressionVersion;                                         // 0x0044   (0x0001)  
	bool                                               bRequireCPUAccess;                                          // 0x0045   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x0046   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0047   (0x0001)  MISSED
	FVector                                            ComponentOrigin;                                            // 0x0048   (0x000C)  
	FVector2D                                          LightmapBaseBias;                                           // 0x0054   (0x0008)  
	FVector2D                                          LightmapBaseScale;                                          // 0x005C   (0x0008)  
	FVector2D                                          ShadowmapBaseBias;                                          // 0x0064   (0x0008)  
	FVector2D                                          ShadowmapBaseScale;                                         // 0x006C   (0x0008)  
	FVector2D                                          LightMapComponentBias;                                      // 0x0074   (0x0008)  
	FVector2D                                          LightMapComponentScale;                                     // 0x007C   (0x0008)  
	FVector                                            MeshBoxMin;                                                 // 0x0084   (0x000C)  
	FVector                                            MeshBoxMax;                                                 // 0x0090   (0x000C)  
	int32_t                                            DesiredInstancesPerLeaf;                                    // 0x009C   (0x0004)  
	int32_t                                            RandomSeed;                                                 // 0x00A0   (0x0004)  
	FVector                                            DrawScale;                                                  // 0x00A4   (0x000C)  
	FIntPoint                                          SectionBase;                                                // 0x00B0   (0x0008)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x00B8   (0x0008)  
	FVector                                            LandscapeLocationOffset;                                    // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData01_7[0x6C];                                      // 0x00CC   (0x006C)  MISSED
};

/// Class /Script/LandscapeGrassHDRuntime.GrassHDSettingsActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AGrassHDSettingsActor : public AActor
{ 
public:
	char                                               CompressionVersion;                                         // 0x0318   (0x0001)  
	bool                                               bEnabled;                                                   // 0x0319   (0x0001)  
	bool                                               bNormalFixEnabled;                                          // 0x031A   (0x0001)  
	bool                                               bFixNormalPlane;                                            // 0x031B   (0x0001)  
	float                                              ToleranceRate;                                              // 0x031C   (0x0004)  
	float                                              DepthRate;                                                  // 0x0320   (0x0004)  
	float                                              OBBGrassMinScale;                                           // 0x0324   (0x0004)  
};

/// Class /Script/LandscapeGrassHDRuntime.MaterialExpressionLandscapeGrassHDOutput
/// Size: 0x0158 (344 bytes) (0x000040 - 0x000158) align 8 MaxSize: 0x0158
class UMaterialExpressionLandscapeGrassHDOutput : public UMaterialExpressionCustomOutput
{ 
public:
	FExpressionInput                                   MinGrassWeight;                                             // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   GrassMinScale;                                              // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED
	FExpressionInput                                   SDFNoGrass;                                                 // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0074   (0x0008)  MISSED
	FExpressionInput                                   SDFGrassEdge;                                               // 0x007C   (0x000C)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FExpressionInput                                   SDFNoGrassTolerance;                                        // 0x0090   (0x000C)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x009C   (0x0008)  MISSED
	FExpressionInput                                   SDFGrassEdgeTolerance;                                      // 0x00A4   (0x000C)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
	FExpressionInput                                   GrassEdgeSmall;                                             // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x00C4   (0x0008)  MISSED
	FExpressionInput                                   GrassEdgeSparse;                                            // 0x00CC   (0x000C)  
	unsigned char                                      UnknownData07_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FExpressionInput                                   GrassEdgeGrade1;                                            // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData08_6[0x8];                                       // 0x00EC   (0x0008)  MISSED
	FExpressionInput                                   GrassEdgeGrade2;                                            // 0x00F4   (0x000C)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x0100   (0x0008)  MISSED
	FExpressionInput                                   GrassEdgeGradeScale1;                                       // 0x0108   (0x000C)  
	unsigned char                                      UnknownData10_6[0x8];                                       // 0x0114   (0x0008)  MISSED
	FExpressionInput                                   GrassEdgeGradeScale2;                                       // 0x011C   (0x000C)  
	unsigned char                                      UnknownData11_6[0x8];                                       // 0x0128   (0x0008)  MISSED
	FExpressionInput                                   DeleteGrassBoxThreshold;                                    // 0x0130   (0x000C)  
	unsigned char                                      UnknownData12_6[0x8];                                       // 0x013C   (0x0008)  MISSED
	FExpressionInput                                   DeleteGrassWeightTolerance;                                 // 0x0144   (0x000C)  
	unsigned char                                      UnknownData13_7[0x8];                                       // 0x0150   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGrassHDBuildData) == 0x0500); // 1280 bytes (0x000028 - 0x000500)
static_assert(sizeof(UGrassHDComponent) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(FGrassHDCompKey) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UGrassHDData) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UGrassHDRuntimeData) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(AGrassHDSettingsActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UMaterialExpressionLandscapeGrassHDOutput) == 0x0158); // 344 bytes (0x000040 - 0x000158)
static_assert(offsetof(UGrassHDBuildData, Description) == 0x04B8);
static_assert(offsetof(UGrassHDComponent, BuildDataCollection) == 0x00F8);
static_assert(offsetof(FGrassHDCompKey, BasedOn) == 0x0000);
static_assert(offsetof(FGrassHDCompKey, GrassType) == 0x0008);
static_assert(offsetof(UGrassHDData, RuntimeDataMap) == 0x0028);
static_assert(offsetof(UGrassHDRuntimeData, CompressedData) == 0x0030);
static_assert(offsetof(UGrassHDRuntimeData, ComponentOrigin) == 0x0048);
static_assert(offsetof(UGrassHDRuntimeData, LightmapBaseBias) == 0x0054);
static_assert(offsetof(UGrassHDRuntimeData, LightmapBaseScale) == 0x005C);
static_assert(offsetof(UGrassHDRuntimeData, ShadowmapBaseBias) == 0x0064);
static_assert(offsetof(UGrassHDRuntimeData, ShadowmapBaseScale) == 0x006C);
static_assert(offsetof(UGrassHDRuntimeData, LightMapComponentBias) == 0x0074);
static_assert(offsetof(UGrassHDRuntimeData, LightMapComponentScale) == 0x007C);
static_assert(offsetof(UGrassHDRuntimeData, MeshBoxMin) == 0x0084);
static_assert(offsetof(UGrassHDRuntimeData, MeshBoxMax) == 0x0090);
static_assert(offsetof(UGrassHDRuntimeData, DrawScale) == 0x00A4);
static_assert(offsetof(UGrassHDRuntimeData, SectionBase) == 0x00B0);
static_assert(offsetof(UGrassHDRuntimeData, LandscapeSectionOffset) == 0x00B8);
static_assert(offsetof(UGrassHDRuntimeData, LandscapeLocationOffset) == 0x00C0);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, MinGrassWeight) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, GrassMinScale) == 0x0054);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, SDFNoGrass) == 0x0068);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, SDFGrassEdge) == 0x007C);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, SDFNoGrassTolerance) == 0x0090);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, SDFGrassEdgeTolerance) == 0x00A4);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, GrassEdgeSmall) == 0x00B8);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, GrassEdgeSparse) == 0x00CC);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, GrassEdgeGrade1) == 0x00E0);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, GrassEdgeGrade2) == 0x00F4);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, GrassEdgeGradeScale1) == 0x0108);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, GrassEdgeGradeScale2) == 0x011C);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, DeleteGrassBoxThreshold) == 0x0130);
static_assert(offsetof(UMaterialExpressionLandscapeGrassHDOutput, DeleteGrassWeightTolerance) == 0x0144);
