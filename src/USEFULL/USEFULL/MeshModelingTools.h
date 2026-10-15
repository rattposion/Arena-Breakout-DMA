// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InteractiveToolsFramework
/// dependency: ModelingComponents

#pragma pack(push, 0x1)

/// Class /Script/MeshModelingTools.AddPatchToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.AddPatchToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Width;                                                      // 0x0060   (0x0004)  
	float                                              Rotation;                                                   // 0x0064   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x0068   (0x0004)  
	float                                              Shift;                                                      // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.AddPatchTool
/// Size: 0x0100 (256 bytes) (0x000088 - 0x000100) align 8 MaxSize: 0x0100
class UAddPatchTool : public USingleClickTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0088   (0x0008)  MISSED
	class UAddPatchToolProperties*                     ShapeSettings;                                              // 0x0090   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0098   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x00A8   (0x0058)  MISSED
};

/// Class /Script/MeshModelingTools.AddPrimitiveToolBuilder
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralShapeToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bInstanceIfPossible;                                        // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5037) /* EMakeMeshPolygroupMode */ __um(PolygroupMode);                                        // 0x0061   (0x0001)  
	SDK_UNDEFINED(1,5038) /* EMakeMeshPlacementType */ __um(PlaceMode);                                            // 0x0062   (0x0001)  
	bool                                               bSnapToGrid;                                                // 0x0063   (0x0001)  
	SDK_UNDEFINED(1,5039) /* EMakeMeshPivotLocation */ __um(PivotLocation);                                        // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              Rotation;                                                   // 0x0068   (0x0004)  
	bool                                               bAlignShapeToPlacementSurface;                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralRectangleToolProperties
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Width;                                                      // 0x0070   (0x0004)  
	float                                              Depth;                                                      // 0x0074   (0x0004)  
	int32_t                                            WidthSubdivisions;                                          // 0x0078   (0x0004)  
	int32_t                                            DepthSubdivisions;                                          // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralBoxToolProperties
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
{ 
public:
	float                                              Height;                                                     // 0x0080   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x0084   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralRoundedRectangleToolProperties
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
{ 
public:
	float                                              CornerRadius;                                               // 0x0080   (0x0004)  
	int32_t                                            CornerSlices;                                               // 0x0084   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralDiscToolProperties
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0074   (0x0004)  
	int32_t                                            RadialSubdivisions;                                         // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralPuncturedDiscToolProperties
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
{ 
public:
	float                                              HoleRadius;                                                 // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralTorusToolProperties
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              MajorRadius;                                                // 0x0070   (0x0004)  
	float                                              MinorRadius;                                                // 0x0074   (0x0004)  
	int32_t                                            TubeSlices;                                                 // 0x0078   (0x0004)  
	int32_t                                            CrossSectionSlices;                                         // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralCylinderToolProperties
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	float                                              Height;                                                     // 0x0074   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0078   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralConeToolProperties
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	float                                              Height;                                                     // 0x0074   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0078   (0x0004)  
	int32_t                                            HeightSubdivisions;                                         // 0x007C   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralArrowToolProperties
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              ShaftRadius;                                                // 0x0070   (0x0004)  
	float                                              ShaftHeight;                                                // 0x0074   (0x0004)  
	float                                              HeadRadius;                                                 // 0x0078   (0x0004)  
	float                                              HeadHeight;                                                 // 0x007C   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x0080   (0x0004)  
	int32_t                                            TotalSubdivisions;                                          // 0x0084   (0x0004)  
};

/// Class /Script/MeshModelingTools.ProceduralSphereToolProperties
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	int32_t                                            LatitudeSlices;                                             // 0x0074   (0x0004)  
	int32_t                                            LongitudeSlices;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ProceduralSphericalBoxToolProperties
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
{ 
public:
	float                                              Radius;                                                     // 0x0070   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.LastActorInfo
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class ULastActorInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class AActor*                                      Actor;                                                      // 0x0038   (0x0008)  
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0040   (0x0008)  
	class UProceduralShapeToolProperties*              ShapeSettings;                                              // 0x0048   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0050   (0x0008)  
};

/// Class /Script/MeshModelingTools.AddPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x000088 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddPrimitiveTool : public USingleClickTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0088   (0x0008)  MISSED
	class UProceduralShapeToolProperties*              ShapeSettings;                                              // 0x0090   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0098   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00A0   (0x0008)  
	class ULastActorInfo*                              LastGenerated;                                              // 0x00A8   (0x0008)  
	FString                                            AssetName;                                                  // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x00C0   (0x0030)  MISSED
};

/// Class /Script/MeshModelingTools.AddBoxPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddCylinderPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddConePrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddConePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddRectanglePrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddRoundedRectanglePrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddDiscPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddPuncturedDiscPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddTorusPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddArrowPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddSpherePrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AddSphericalBoxPrimitiveTool
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
{ 
public:
};

/// Class /Script/MeshModelingTools.AlignObjectsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.AlignObjectsToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5040) /* EAlignObjectsAlignTypes */ __um(AlignType);                                           // 0x0060   (0x0004)  
	SDK_UNDEFINED(4,5041) /* EAlignObjectsAlignToOptions */ __um(AlignTo);                                         // 0x0064   (0x0004)  
	SDK_UNDEFINED(4,5042) /* EAlignObjectsBoxPoint */  __um(BoxPosition);                                          // 0x0068   (0x0004)  
	bool                                               bAlignX;                                                    // 0x006C   (0x0001)  
	bool                                               bAlignY;                                                    // 0x006D   (0x0001)  
	bool                                               bAlignZ;                                                    // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x006F   (0x0001)  MISSED
};

/// Class /Script/MeshModelingTools.AlignObjectsTool
/// Size: 0x0140 (320 bytes) (0x000090 - 0x000140) align 8 MaxSize: 0x0140
class UAlignObjectsTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UAlignObjectsToolProperties*                 AlignProps;                                                 // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0xA0];                                      // 0x00A0   (0x00A0)  MISSED
};

/// Class /Script/MeshModelingTools.BakeMeshAttributeMapsToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.BakeMeshAttributeMapsToolProperties
/// Size: 0x0098 (152 bytes) (0x000060 - 0x000098) align 8 MaxSize: 0x0098
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5043) /* EBakeMapType */           __um(MapType);                                              // 0x0060   (0x0004)  
	SDK_UNDEFINED(4,5044) /* EBakeTextureResolution */ __um(Resolution);                                           // 0x0064   (0x0004)  
	FString                                            UVLayer;                                                    // 0x0068   (0x0010)  
	TArray<FString>                                    UVLayerNamesList;                                           // 0x0078   (0x0010)  
	bool                                               bUseWorldSpace;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	class UTexture2D*                                  Result;                                                     // 0x0090   (0x0008)  


	/// Functions
	// Function /Script/MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
	// TArray<FString> GetUVLayerNamesFunc();                                                                                   // [0x4cddc8c] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.BakedNormalMapToolProperties
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.BakedOcclusionMapToolProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            OcclusionRays;                                              // 0x0060   (0x0004)  
	float                                              MaxDistance;                                                // 0x0064   (0x0004)  
	bool                                               bGaussianBlur;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              BlurRadius;                                                 // 0x006C   (0x0004)  
	float                                              BiasAngle;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.BakedOcclusionMapVisualizationProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              BaseGrayLevel;                                              // 0x0060   (0x0004)  
	float                                              OcclusionMultiplier;                                        // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.BakedCurvatureMapToolProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5045) /* EBakedCurvatureTypeMode */ __um(CurvatureType);                                       // 0x0060   (0x0004)  
	SDK_UNDEFINED(4,5046) /* EBakedCurvatureColorMode */ __um(ColorMode);                                          // 0x0064   (0x0004)  
	float                                              RangeMultiplier;                                            // 0x0068   (0x0004)  
	float                                              MinRangeMultiplier;                                         // 0x006C   (0x0004)  
	SDK_UNDEFINED(4,5047) /* EBakedCurvatureClampMode */ __um(Clamping);                                           // 0x0070   (0x0004)  
	bool                                               bGaussianBlur;                                              // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              BlurRadius;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.BakedTexture2DImageProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  SourceTexture;                                              // 0x0060   (0x0008)  
	int32_t                                            UVLayer;                                                    // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.BakeMeshAttributeMapsTool
/// Size: 0x04D0 (1232 bytes) (0x000090 - 0x0004D0) align 8 MaxSize: 0x04D0
class UBakeMeshAttributeMapsTool : public UMultiSelectionTool
{ 
public:
	class UBakeMeshAttributeMapsToolProperties*        Settings;                                                   // 0x0090   (0x0008)  
	class UBakedNormalMapToolProperties*               NormalMapProps;                                             // 0x0098   (0x0008)  
	class UBakedOcclusionMapToolProperties*            OcclusionMapProps;                                          // 0x00A0   (0x0008)  
	class UBakedCurvatureMapToolProperties*            CurvatureMapProps;                                          // 0x00A8   (0x0008)  
	class UBakedTexture2DImageProperties*              Texture2DProps;                                             // 0x00B0   (0x0008)  
	class UBakedOcclusionMapVisualizationProperties*   VisualizationProps;                                         // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED
	class UMaterialInstanceDynamic*                    PreviewMaterial;                                            // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x358];                                     // 0x00D8   (0x0358)  MISSED
	class UTexture2D*                                  CachedNormalMap;                                            // 0x0430   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0438   (0x0018)  MISSED
	class UTexture2D*                                  CachedOcclusionMap;                                         // 0x0450   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0458   (0x0028)  MISSED
	class UTexture2D*                                  CachedCurvatureMap;                                         // 0x0480   (0x0008)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0488   (0x0010)  MISSED
	class UTexture2D*                                  CachedMeshPropertyMap;                                      // 0x0498   (0x0008)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x04A0   (0x0010)  MISSED
	class UTexture2D*                                  CachedTexture2DImageMap;                                    // 0x04B0   (0x0008)  
	class UTexture2D*                                  EmptyNormalMap;                                             // 0x04B8   (0x0008)  
	class UTexture2D*                                  EmptyColorMapBlack;                                         // 0x04C0   (0x0008)  
	class UTexture2D*                                  EmptyColorMapWhite;                                         // 0x04C8   (0x0008)  
};

/// Class /Script/MeshModelingTools.BakeTransformToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.BakeTransformToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bBakeRotation;                                              // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5048) /* EBakeScaleMethod */       __um(BakeScale);                                            // 0x0061   (0x0001)  
	bool                                               bRecenterPivot;                                             // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0063   (0x0005)  MISSED
};

/// Class /Script/MeshModelingTools.BakeTransformTool
/// Size: 0x00B8 (184 bytes) (0x000090 - 0x0000B8) align 8 MaxSize: 0x00B8
class UBakeTransformTool : public UMultiSelectionTool
{ 
public:
	class UBakeTransformToolProperties*                BasicProperties;                                            // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0098   (0x0020)  MISSED
};

/// Struct /Script/MeshModelingTools.PhysicsSphereData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FPhysicsSphereData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FKShapeElem                                        Element;                                                    // 0x0040   (0x0030)  
};

/// Struct /Script/MeshModelingTools.PhysicsBoxData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FPhysicsBoxData
{ 
	FVector                                            Dimensions;                                                 // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FKShapeElem                                        Element;                                                    // 0x0040   (0x0030)  
};

/// Struct /Script/MeshModelingTools.PhysicsCapsuleData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FPhysicsCapsuleData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	float                                              Length;                                                     // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FKShapeElem                                        Element;                                                    // 0x0040   (0x0030)  
};

/// Struct /Script/MeshModelingTools.PhysicsConvexData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPhysicsConvexData
{ 
	int32_t                                            NumVertices;                                                // 0x0000   (0x0004)  
	int32_t                                            NumFaces;                                                   // 0x0004   (0x0004)  
	FKShapeElem                                        Element;                                                    // 0x0008   (0x0030)  
};

/// Class /Script/MeshModelingTools.PhysicsObjectToolPropertySet
/// Size: 0x00B8 (184 bytes) (0x000060 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{ 
public:
	FString                                            ObjectName;                                                 // 0x0060   (0x0010)  
	SDK_UNDEFINED(4,5049) /* ECollisionGeometryMode */ __um(CollisionType);                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FPhysicsSphereData>                         Spheres;                                                    // 0x0078   (0x0010)  
	TArray<FPhysicsBoxData>                            Boxes;                                                      // 0x0088   (0x0010)  
	TArray<FPhysicsCapsuleData>                        Capsules;                                                   // 0x0098   (0x0010)  
	TArray<FPhysicsConvexData>                         Convexes;                                                   // 0x00A8   (0x0010)  
};

/// Class /Script/MeshModelingTools.CollisionGeometryVisualizationProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              LineThickness;                                              // 0x0060   (0x0004)  
	bool                                               bShowHidden;                                                // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	FColor                                             Color;                                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.CombineMeshesToolBuilder
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.CombineMeshesToolProperties
/// Size: 0x0088 (136 bytes) (0x000060 - 0x000088) align 8 MaxSize: 0x0088
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIsDuplicateMode;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	SDK_UNDEFINED(4,5050) /* ECombineTargetType */     __um(WriteOutputTo);                                        // 0x0064   (0x0004)  
	FString                                            OutputName;                                                 // 0x0068   (0x0010)  
	FString                                            OutputAsset;                                                // 0x0078   (0x0010)  
};

/// Class /Script/MeshModelingTools.CombineMeshesTool
/// Size: 0x00B8 (184 bytes) (0x000090 - 0x0000B8) align 8 MaxSize: 0x00B8
class UCombineMeshesTool : public UMultiSelectionTool
{ 
public:
	class UCombineMeshesToolProperties*                BasicProperties;                                            // 0x0090   (0x0008)  
	class UOnAcceptHandleSourcesProperties*            HandleSourceProperties;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED
};

/// Class /Script/MeshModelingTools.ConvertToPolygonsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.ConvertToPolygonsToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5051) /* EConvertToPolygonsMode */ __um(ConversionMode);                                       // 0x0060   (0x0004)  
	float                                              AngleTolerance;                                             // 0x0064   (0x0004)  
	bool                                               bCalculateNormals;                                          // 0x0068   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.ConvertToPolygonsTool
/// Size: 0x03E0 (992 bytes) (0x000088 - 0x0003E0) align 8 MaxSize: 0x03E0
class UConvertToPolygonsTool : public USingleSelectionTool
{ 
public:
	class UConvertToPolygonsToolProperties*            Settings;                                                   // 0x0088   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x348];                                     // 0x0098   (0x0348)  MISSED
};

/// Class /Script/MeshModelingTools.CSGMeshesToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5052) /* ECSGOperation */          __um(Operation);                                            // 0x0060   (0x0001)  
	bool                                               bShowNewBoundaryEdges;                                      // 0x0061   (0x0001)  
	bool                                               bAttemptFixHoles;                                           // 0x0062   (0x0001)  
	bool                                               bOnlyUseFirstMeshMaterials;                                 // 0x0063   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.CSGMeshesTool
/// Size: 0x0120 (288 bytes) (0x0000F0 - 0x000120) align 8 MaxSize: 0x0120
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{ 
public:
	class UCSGMeshesToolProperties*                    CSGProperties;                                              // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F8   (0x0010)  MISSED
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x0108   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.CSGMeshesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DeformMeshPolygonsToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DeformMeshPolygonsTransformProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5053) /* EGroupTopologyDeformationStrategy */ __um(DeformationStrategy);                       // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5054) /* EQuickTransformerMode */  __um(TransformMode);                                        // 0x0061   (0x0001)  
	bool                                               bSelectFaces;                                               // 0x0062   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x0063   (0x0001)  
	bool                                               bSelectVertices;                                            // 0x0064   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0065   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x0066   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0067   (0x0001)  MISSED
	SDK_UNDEFINED(4,5055) /* EWeightScheme */          __um(SelectedWeightScheme);                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	double                                             HandleWeight;                                               // 0x0070   (0x0008)  
	bool                                               bPostFixHandles;                                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.DeformMeshPolygonsTool
/// Size: 0x12F0 (4848 bytes) (0x0000C0 - 0x0012F0) align 16 MaxSize: 0x12F0
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x00C8   (0x0008)  
	class UDeformMeshPolygonsTransformProperties*      TransformProps;                                             // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x1218];                                    // 0x00D8   (0x1218)  MISSED
};

/// Class /Script/MeshModelingTools.DisplaceMeshCommonProperties
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5056) /* EDisplaceMeshToolDisplaceType */ __um(DisplacementType);                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              DisplaceIntensity;                                          // 0x0064   (0x0004)  
	int32_t                                            RandomSeed;                                                 // 0x0068   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x006C   (0x0004)  
	FName                                              WeightMap;                                                  // 0x0070   (0x0008)  
	TArray<FString>                                    WeightMapsList;                                             // 0x0078   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x0088   (0x0001)  
	bool                                               bDisableSizeWarning;                                        // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x008A   (0x0006)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0x4cddc8c] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.DisplaceMeshTextureMapProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  DisplacementMap;                                            // 0x0060   (0x0008)  
};

/// Class /Script/MeshModelingTools.DisplaceMeshDirectionalFilterProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableFilter;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	FVector                                            FilterDirection;                                            // 0x0064   (0x000C)  
	float                                              FilterWidth;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/MeshModelingTools.PerlinLayerProperties
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPerlinLayerProperties
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Intensity;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/MeshModelingTools.DisplaceMeshPerlinNoiseProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<FPerlinLayerProperties>                     PerlinLayerProperties;                                      // 0x0060   (0x0010)  
};

/// Class /Script/MeshModelingTools.DisplaceMeshSineWaveProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SineWaveFrequency;                                          // 0x0060   (0x0004)  
	float                                              SineWavePhaseShift;                                         // 0x0064   (0x0004)  
	FVector                                            SineWaveDirection;                                          // 0x0068   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DisplaceMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.DisplaceMeshTool
/// Size: 0x03F0 (1008 bytes) (0x000088 - 0x0003F0) align 8 MaxSize: 0x03F0
class UDisplaceMeshTool : public USingleSelectionTool
{ 
public:
	class UDisplaceMeshCommonProperties*               CommonProperties;                                           // 0x0088   (0x0008)  
	class UDisplaceMeshDirectionalFilterProperties*    DirectionalFilterProperties;                                // 0x0090   (0x0008)  
	class UDisplaceMeshTextureMapProperties*           TextureMapProperties;                                       // 0x0098   (0x0008)  
	class UDisplaceMeshPerlinNoiseProperties*          NoiseProperties;                                            // 0x00A0   (0x0008)  
	class UDisplaceMeshSineWaveProperties*             SineWaveProperties;                                         // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x340];                                     // 0x00B0   (0x0340)  MISSED
};

/// Class /Script/MeshModelingTools.DrawAndRevolveToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveProperties
/// Size: 0x00B0 (176 bytes) (0x000060 - 0x0000B0) align 8 MaxSize: 0x00B0
class URevolveProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             RevolutionDegrees;                                          // 0x0060   (0x0008)  
	double                                             RevolutionDegreesOffset;                                    // 0x0068   (0x0008)  
	int32_t                                            Steps;                                                      // 0x0070   (0x0004)  
	bool                                               bReverseRevolutionDirection;                                // 0x0074   (0x0001)  
	bool                                               bFlipMesh;                                                  // 0x0075   (0x0001)  
	bool                                               bProfileIsCrossSectionOfSide;                               // 0x0076   (0x0001)  
	SDK_UNDEFINED(1,5057) /* ERevolvePropertiesPolygroupMode */ __um(PolygroupMode);                               // 0x0077   (0x0001)  
	SDK_UNDEFINED(1,5058) /* ERevolvePropertiesQuadSplit */ __um(QuadSplitMode);                                   // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	double                                             DiagonalProportionTolerance;                                // 0x0080   (0x0008)  
	SDK_UNDEFINED(1,5059) /* ERevolvePropertiesCapFillMode */ __um(CapFillMode);                                   // 0x0088   (0x0001)  
	bool                                               bWeldFullRevolution;                                        // 0x0089   (0x0001)  
	bool                                               bWeldVertsOnAxis;                                           // 0x008A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x008B   (0x0005)  MISSED
	double                                             AxisWeldTolerance;                                          // 0x0090   (0x0008)  
	bool                                               bSharpNormals;                                              // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	double                                             SharpNormalAngleTolerance;                                  // 0x00A0   (0x0008)  
	bool                                               bFlipVs;                                                    // 0x00A8   (0x0001)  
	bool                                               bUVsSkipFullyWeldedEdges;                                   // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class URevolveToolProperties : public URevolveProperties
{ 
public:
	bool                                               bConnectOpenProfileToAxis;                                  // 0x00B0   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	FVector                                            DrawPlaneOrigin;                                            // 0x00B4   (0x000C)  
	FRotator                                           DrawPlaneOrientation;                                       // 0x00C0   (0x000C)  
	bool                                               bEnableSnapping;                                            // 0x00CC   (0x0001)  
	bool                                               bAllowedToEditDrawPlane;                                    // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00CE   (0x0002)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URevolveOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UDrawAndRevolveTool*                         RevolveTool;                                                // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.DrawAndRevolveTool
/// Size: 0x0120 (288 bytes) (0x000080 - 0x000120) align 16 MaxSize: 0x0120
class UDrawAndRevolveTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x78];                                      // 0x0080   (0x0078)  MISSED
	class UCurveControlPointsMechanic*                 ControlPointsMechanic;                                      // 0x00F8   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0100   (0x0008)  
	class URevolveToolProperties*                      Settings;                                                   // 0x0108   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0110   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x0118   (0x0008)  
};

/// Class /Script/MeshModelingTools.DrawPolygonToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonToolStandardProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5060) /* EDrawPolygonDrawMode */   __um(PolygonType);                                          // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5061) /* EDrawPolygonOutputMode */ __um(OutputMode);                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              FeatureSizeRatio;                                           // 0x0064   (0x0004)  
	float                                              ExtrudeHeight;                                              // 0x0068   (0x0004)  
	int32_t                                            Steps;                                                      // 0x006C   (0x0004)  
	bool                                               bAllowSelfIntersections;                                    // 0x0070   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonToolSnapProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSnapping;                                            // 0x0060   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0061   (0x0001)  
	bool                                               bSnapToVertices;                                            // 0x0062   (0x0001)  
	bool                                               bSnapToEdges;                                               // 0x0063   (0x0001)  
	bool                                               bSnapToAngles;                                              // 0x0064   (0x0001)  
	bool                                               bSnapToLengths;                                             // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0066   (0x0002)  MISSED
	float                                              SegmentLength;                                              // 0x0068   (0x0004)  
	bool                                               bHitSceneObjects;                                           // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              HitNormalOffset;                                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolygonTool
/// Size: 0x0570 (1392 bytes) (0x000080 - 0x000570) align 16 MaxSize: 0x0570
class UDrawPolygonTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0080   (0x0008)  MISSED
	class UDrawPolygonToolStandardProperties*          PolygonProperties;                                          // 0x0088   (0x0008)  
	class UDrawPolygonToolSnapProperties*              SnapProperties;                                             // 0x0090   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0xB0];                                      // 0x00A0   (0x00B0)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0150   (0x0008)  
	class UTransformGizmo*                             PlaneTransformGizmo;                                        // 0x0158   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x0160   (0x0008)  
	unsigned char                                      UnknownData02_6[0x3D8];                                     // 0x0168   (0x03D8)  MISSED
	class UPlaneDistanceFromHitMechanic*               HeightMechanic;                                             // 0x0540   (0x0008)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x0548   (0x0028)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathToolBuilder
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5062) /* EDrawPolyPathOutputMode */ __um(OutputType);                                          // 0x0060   (0x0004)  
	SDK_UNDEFINED(4,5063) /* EDrawPolyPathWidthMode */ __um(WidthMode);                                            // 0x0064   (0x0004)  
	float                                              Width;                                                      // 0x0068   (0x0004)  
	SDK_UNDEFINED(4,5064) /* EDrawPolyPathHeightMode */ __um(HeightMode);                                          // 0x006C   (0x0004)  
	float                                              Height;                                                     // 0x0070   (0x0004)  
	float                                              RampStartRatio;                                             // 0x0074   (0x0004)  
	bool                                               bSnapToWorldGrid;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathExtrudeProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5065) /* EDrawPolyPathExtrudeDirection */ __um(Direction);                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.DrawPolyPathTool
/// Size: 0x0210 (528 bytes) (0x000080 - 0x000210) align 16 MaxSize: 0x0210
class UDrawPolyPathTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0080   (0x0020)  MISSED
	class UDrawPolyPathProperties*                     TransformProps;                                             // 0x00A0   (0x0008)  
	class UDrawPolyPathExtrudeProperties*              ExtrudeProperties;                                          // 0x00A8   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x00B8   (0x0088)  MISSED
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0140   (0x0008)  
	unsigned char                                      UnknownData02_6[0xA0];                                      // 0x0148   (0x00A0)  MISSED
	class UPolyEditPreviewMesh*                        EditPreview;                                                // 0x01E8   (0x0008)  
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                      // 0x01F0   (0x0008)  
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                          // 0x01F8   (0x0008)  
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                        // 0x0200   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.DynamicMeshBrushTool
/// Size: 0x0210 (528 bytes) (0x0001D0 - 0x000210) align 8 MaxSize: 0x0210
class UDynamicMeshBrushTool : public UBaseBrushTool
{ 
public:
	class UPreviewMesh*                                PreviewMesh;                                                // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x01D8   (0x0038)  MISSED
};

/// Class /Script/MeshModelingTools.DynamicMeshSculptToolBuilder
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.BrushSculptProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIsRemeshingEnabled;                                        // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5066) /* EDynamicMeshSculptBrushType */ __um(PrimaryBrushType);                                // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              PrimaryBrushSpeed;                                          // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              SmoothBrushSpeed;                                           // 0x006C   (0x0004)  
	bool                                               bDetailPreservingSmooth;                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.MeshConstraintProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPreserveSharpEdges;                                        // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5067) /* EMeshBoundaryConstraint */ __um(MeshBoundaryConstraint);                              // 0x0061   (0x0001)  
	SDK_UNDEFINED(1,5068) /* EGroupBoundaryConstraint */ __um(GroupBoundaryConstraint);                            // 0x0062   (0x0001)  
	SDK_UNDEFINED(1,5069) /* EMaterialBoundaryConstraint */ __um(MaterialBoundaryConstraint);                      // 0x0063   (0x0001)  
	bool                                               bPreventNormalFlips;                                        // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.RemeshProperties
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class URemeshProperties : public UMeshConstraintProperties
{ 
public:
	float                                              SmoothingStrength;                                          // 0x0068   (0x0004)  
	bool                                               bFlips;                                                     // 0x006C   (0x0001)  
	bool                                               bSplits;                                                    // 0x006D   (0x0001)  
	bool                                               bCollapses;                                                 // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x006F   (0x0001)  MISSED
};

/// Class /Script/MeshModelingTools.BrushRemeshProperties
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UBrushRemeshProperties : public URemeshProperties
{ 
public:
	bool                                               bEnableRemeshing;                                           // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            TriangleSize;                                               // 0x0074   (0x0004)  
	int32_t                                            PreserveDetail;                                             // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.FixedPlaneBrushProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 16 MaxSize: 0x0080
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x0060   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x0061   (0x0001)  
	bool                                               bSnapToGrid;                                                // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0063   (0x0001)  MISSED
	FVector                                            position;                                                   // 0x0064   (0x000C)  
	FQuat                                              Rotation;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/MeshModelingTools.DynamicMeshSculptTool
/// Size: 0x0C70 (3184 bytes) (0x0000C0 - 0x000C70) align 16 MaxSize: 0x0C70
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{ 
public:
	class USculptBrushProperties*                      BrushProperties;                                            // 0x00C0   (0x0008)  
	class UBrushSculptProperties*                      SculptProperties;                                           // 0x00C8   (0x0008)  
	class USculptMaxBrushProperties*                   SculptMaxBrushProperties;                                   // 0x00D0   (0x0008)  
	class UKelvinBrushProperties*                      KelvinBrushProperties;                                      // 0x00D8   (0x0008)  
	class UBrushRemeshProperties*                      RemeshProperties;                                           // 0x00E0   (0x0008)  
	class UFixedPlaneBrushProperties*                  GizmoProperties;                                            // 0x00E8   (0x0008)  
	class UMeshEditingViewProperties*                  ViewProperties;                                             // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x00F8   (0x0038)  MISSED
	class UBrushStampIndicator*                        BrushIndicator;                                             // 0x0130   (0x0008)  
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                     // 0x0138   (0x0008)  
	class UPreviewMesh*                                BrushIndicatorMesh;                                         // 0x0140   (0x0008)  
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x0148   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                     // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_6[0xAF8];                                     // 0x0158   (0x0AF8)  MISSED
	class UTransformGizmo*                             PlaneTransformGizmo;                                        // 0x0C50   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x0C58   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0C60   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionProperties
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5070) /* EEdgeLoopPositioningMode */ __um(PositionMode);                                       // 0x0060   (0x0004)  
	SDK_UNDEFINED(4,5071) /* EEdgeLoopInsertionMode */ __um(InsertionMode);                                        // 0x0064   (0x0004)  
	int32_t                                            NumLoops;                                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	double                                             ProportionOffset;                                           // 0x0070   (0x0008)  
	double                                             DistanceOffset;                                             // 0x0078   (0x0008)  
	bool                                               bInteractive;                                               // 0x0080   (0x0001)  
	bool                                               bFlipOffsetDirection;                                       // 0x0081   (0x0001)  
	bool                                               bWireframe;                                                 // 0x0082   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0083   (0x0005)  MISSED
	double                                             VertexTolerance;                                            // 0x0088   (0x0008)  
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEdgeLoopInsertionOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UEdgeLoopInsertionTool*                      Tool;                                                       // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.EdgeLoopInsertionTool
/// Size: 0x0500 (1280 bytes) (0x000088 - 0x000500) align 16 MaxSize: 0x0500
class UEdgeLoopInsertionTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0088   (0x0010)  MISSED
	class UEdgeLoopInsertionProperties*                Settings;                                                   // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0x260];                                     // 0x00A0   (0x0260)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x0300   (0x0008)  
	unsigned char                                      UnknownData02_7[0x1F8];                                     // 0x0308   (0x01F8)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolBuilder
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditCommonProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x0060   (0x0001)  
	bool                                               bSelectEdgeLoops;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	SDK_UNDEFINED(4,5072) /* ELocalFrameMode */        __um(LocalFrameMode);                                       // 0x0064   (0x0004)  
	bool                                               bLockRotation;                                              // 0x0068   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActionPropertySet
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	// void Retriangulate();                                                                                                    // [0x4cdeb60] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	// void RecalcNormals();                                                                                                    // [0x4cdeb48] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Outset
	// void Outset();                                                                                                           // [0x4cdeb00] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Offset
	// void Offset();                                                                                                           // [0x4cdeae8] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Merge
	// void Merge();                                                                                                            // [0x4cdead0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Inset
	// void Inset();                                                                                                            // [0x4cdeaa0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Flip
	// void Flip();                                                                                                             // [0x4cdea58] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	// void Extrude();                                                                                                          // [0x4cdea28] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	// void Disconnect();                                                                                                       // [0x4cdea10] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Delete
	// void Delete();                                                                                                           // [0x4cde9f8] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	// void Decompose();                                                                                                        // [0x4cde9e0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
	// void CutFaces();                                                                                                         // [0x4cde9c8] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	// void RecalcNormals();                                                                                                    // [0x4cdeb48] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	// void Poke();                                                                                                             // [0x4cdeb30] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	// void Outset();                                                                                                           // [0x4cdeb00] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	// void Offset();                                                                                                           // [0x4cdeae8] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
	// void Inset();                                                                                                            // [0x4cdeaa0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	// void Flip();                                                                                                             // [0x4cdea58] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	// void Extrude();                                                                                                          // [0x4cdea28] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	// void Disconnect();                                                                                                       // [0x4cdea10] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	// void Delete();                                                                                                           // [0x4cde9f8] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
	// void CutFaces();                                                                                                         // [0x4cde9c8] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolUVActions
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
	// void PlanarProjection();                                                                                                 // [0x4cdeb18] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	// void Weld();                                                                                                             // [0x4cdebf0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	// void Straighten();                                                                                                       // [0x4cdebc0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
	// void FillHole();                                                                                                         // [0x4cdea40] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	// void Weld();                                                                                                             // [0x4cdebf0] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	// void Split();                                                                                                            // [0x4cdeba8] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	// void Flip();                                                                                                             // [0x4cdea70] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	// void FillHole();                                                                                                         // [0x4cdea40] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
	// void Collapse();                                                                                                         // [0x4cde9b0] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.PolyEditExtrudeProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5073) /* EPolyEditExtrudeDirection */ __um(Direction);                                         // 0x0060   (0x0004)  
	bool                                               bShellsToSolids;                                            // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditOffsetProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bUseFaceNormals;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditInsetProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPolyEditInsetProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bReproject;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Softness;                                                   // 0x0064   (0x0004)  
	bool                                               bBoundaryOnly;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              AreaScale;                                                  // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.PolyEditOutsetProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPolyEditOutsetProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Softness;                                                   // 0x0060   (0x0004)  
	bool                                               bBoundaryOnly;                                              // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              AreaScale;                                                  // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditCutProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5074) /* EPolyEditCutPlaneOrientation */ __um(Orientation);                                    // 0x0060   (0x0004)  
	bool                                               bSnapToVertices;                                            // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.PolyEditSetUVProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowMaterial;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.EditMeshPolygonsTool
/// Size: 0x07D0 (2000 bytes) (0x0000C0 - 0x0007D0) align 16 MaxSize: 0x07D0
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x00C0   (0x0010)  MISSED
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x00D0   (0x0008)  
	class UPolyEditCommonProperties*                   CommonProps;                                                // 0x00D8   (0x0008)  
	class UEditMeshPolygonsToolActions*                EditActions;                                                // 0x00E0   (0x0008)  
	class UEditMeshPolygonsToolActions_Triangles*      EditActions_Triangles;                                      // 0x00E8   (0x0008)  
	class UEditMeshPolygonsToolEdgeActions*            EditEdgeActions;                                            // 0x00F0   (0x0008)  
	class UEditMeshPolygonsToolEdgeActions_Triangles*  EditEdgeActions_Triangles;                                  // 0x00F8   (0x0008)  
	class UEditMeshPolygonsToolUVActions*              EditUVActions;                                              // 0x0100   (0x0008)  
	class UPolyEditExtrudeProperties*                  ExtrudeProperties;                                          // 0x0108   (0x0008)  
	class UPolyEditOffsetProperties*                   OffsetProperties;                                           // 0x0110   (0x0008)  
	class UPolyEditInsetProperties*                    InsetProperties;                                            // 0x0118   (0x0008)  
	class UPolyEditOutsetProperties*                   OutsetProperties;                                           // 0x0120   (0x0008)  
	class UPolyEditCutProperties*                      CutProperties;                                              // 0x0128   (0x0008)  
	class UPolyEditSetUVProperties*                    SetUVProperties;                                            // 0x0130   (0x0008)  
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0140   (0x0008)  MISSED
	class UMultiTransformer*                           MultiTransformer;                                           // 0x0148   (0x0008)  
	unsigned char                                      UnknownData02_6[0x350];                                     // 0x0150   (0x0350)  MISSED
	class UPolyEditPreviewMesh*                        EditPreview;                                                // 0x04A0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x04A8   (0x0008)  MISSED
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                      // 0x04B0   (0x0008)  
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                          // 0x04B8   (0x0008)  
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                        // 0x04C0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x308];                                     // 0x04C8   (0x0308)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bRecomputeNormals;                                          // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5075) /* ENormalCalculationMethod */ __um(NormalCalculationMethod);                            // 0x0061   (0x0001)  
	bool                                               bFixInconsistentNormals;                                    // 0x0062   (0x0001)  
	bool                                               bInvertNormals;                                             // 0x0063   (0x0001)  
	SDK_UNDEFINED(1,5076) /* ESplitNormalMethod */     __um(SplitNormalMethod);                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              SharpEdgeAngleThreshold;                                    // 0x0068   (0x0004)  
	bool                                               bAllowSharpVertices;                                        // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsAdvancedProperties
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.EditNormalsOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UEditNormalsOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UEditNormalsTool*                            Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.EditNormalsTool
/// Size: 0x0100 (256 bytes) (0x000090 - 0x000100) align 16 MaxSize: 0x0100
class UEditNormalsTool : public UMultiSelectionTool
{ 
public:
	class UEditNormalsToolProperties*                  BasicProperties;                                            // 0x0090   (0x0008)  
	class UEditNormalsAdvancedProperties*              AdvancedProperties;                                         // 0x0098   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x00B0   (0x0050)  MISSED
};

/// Class /Script/MeshModelingTools.EditPivotToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.EditPivotToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSnapDragging;                                        // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5077) /* EEditPivotSnapDragRotationMode */ __um(RotationMode);                                 // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.EditPivotToolActionPropertySet
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0060   (0x0008)  MISSED
	bool                                               bUseWorldBox;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Top
	// void Top();                                                                                                              // [0x4cdebd8] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Right
	// void Right();                                                                                                            // [0x4cdeb78] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Left
	// void Left();                                                                                                             // [0x4cdeab8] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Front
	// void Front();                                                                                                            // [0x4cdea88] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Center
	// void Center();                                                                                                           // [0x4cde980] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Bottom
	// void Bottom();                                                                                                           // [0x4cde968] Final|Native|Public  
	// Function /Script/MeshModelingTools.EditPivotToolActionPropertySet.Back
	// void Back();                                                                                                             // [0x4cde950] Final|Native|Public  
};

/// Struct /Script/MeshModelingTools.EditPivotTarget
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FEditPivotTarget
{ 
	class UTransformProxy*                             TransformProxy;                                             // 0x0000   (0x0008)  
	class UTransformGizmo*                             TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Class /Script/MeshModelingTools.EditPivotTool
/// Size: 0x0200 (512 bytes) (0x000090 - 0x000200) align 16 MaxSize: 0x0200
class UEditPivotTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UEditPivotToolProperties*                    TransformProps;                                             // 0x0098   (0x0008)  
	class UEditPivotToolActionPropertySet*             EditPivotActions;                                           // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD0];                                      // 0x00A8   (0x00D0)  MISSED
	TArray<FEditPivotTarget>                           ActiveGizmos;                                               // 0x0178   (0x0010)  
	unsigned char                                      UnknownData02_7[0x78];                                      // 0x0188   (0x0078)  MISSED
};

/// Class /Script/MeshModelingTools.EditUVIslandsToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.EditUVIslandsTool
/// Size: 0x0370 (880 bytes) (0x0000C0 - 0x000370) align 16 MaxSize: 0x0370
class UEditUVIslandsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x00C8   (0x0008)  
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x00D0   (0x0008)  
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x00D8   (0x0008)  
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
	class UMultiTransformer*                           MultiTransformer;                                           // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x278];                                     // 0x00F8   (0x0278)  MISSED
};

/// Class /Script/MeshModelingTools.ExtractCollisionGeometryToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.ExtractCollisionGeometryTool
/// Size: 0x0330 (816 bytes) (0x000088 - 0x000330) align 8 MaxSize: 0x0330
class UExtractCollisionGeometryTool : public USingleSelectionTool
{ 
public:
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x0088   (0x0008)  
	class UPhysicsObjectToolPropertySet*               ObjectProps;                                                // 0x0090   (0x0008)  
	class UPreviewGeometry*                            PreviewElements;                                            // 0x0098   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x288];                                     // 0x00A8   (0x0288)  MISSED
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5078) /* EGroupEdgeInsertionMode */ __um(InsertionMode);                                       // 0x0060   (0x0004)  
	bool                                               bWireframe;                                                 // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	double                                             VertexTolerance;                                            // 0x0068   (0x0008)  
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGroupEdgeInsertionOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UGroupEdgeInsertionTool*                     Tool;                                                       // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.GroupEdgeInsertionTool
/// Size: 0x0550 (1360 bytes) (0x000088 - 0x000550) align 16 MaxSize: 0x0550
class UGroupEdgeInsertionTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0088   (0x0010)  MISSED
	class UGroupEdgeInsertionProperties*               Settings;                                                   // 0x0098   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4A8];                                     // 0x00A8   (0x04A8)  MISSED
};

/// Class /Script/MeshModelingTools.HoleFillToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHoleFillToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SmoothHoleFillProperties
/// Size: 0x0088 (136 bytes) (0x000060 - 0x000088) align 8 MaxSize: 0x0088
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bConstrainToHoleInterior;                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            RemeshingExteriorRegionWidth;                               // 0x0064   (0x0004)  
	int32_t                                            SmoothingExteriorRegionWidth;                               // 0x0068   (0x0004)  
	int32_t                                            SmoothingInteriorRegionWidth;                               // 0x006C   (0x0004)  
	float                                              InteriorSmoothness;                                         // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	double                                             FillDensityScalar;                                          // 0x0078   (0x0008)  
	bool                                               bProjectDuringRemesh;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.HoleFillToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5079) /* EHoleFillOpFillType */    __um(FillType);                                             // 0x0060   (0x0001)  
	bool                                               bRemoveIsolatedTriangles;                                   // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.HoleFillToolActions
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UHoleFillToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.HoleFillToolActions.SelectAll
	// void SelectAll();                                                                                                        // [0x4cdeb90] Final|Native|Public  
	// Function /Script/MeshModelingTools.HoleFillToolActions.Clear
	// void Clear();                                                                                                            // [0x4cde998] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.HoleFillStatisticsProperties
/// Size: 0x00B0 (176 bytes) (0x000060 - 0x0000B0) align 8 MaxSize: 0x00B0
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            InitialHoles;                                               // 0x0060   (0x0010)  
	FString                                            SelectedHoles;                                              // 0x0070   (0x0010)  
	FString                                            SuccessfulFills;                                            // 0x0080   (0x0010)  
	FString                                            FailedFills;                                                // 0x0090   (0x0010)  
	FString                                            RemainingHoles;                                             // 0x00A0   (0x0010)  
};

/// Class /Script/MeshModelingTools.HoleFillOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UHoleFillOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UHoleFillTool*                               FillTool;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.HoleFillTool
/// Size: 0x01E0 (480 bytes) (0x000088 - 0x0001E0) align 8 MaxSize: 0x01E0
class UHoleFillTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0088   (0x0010)  MISSED
	class USmoothHoleFillProperties*                   SmoothHoleFillProperties;                                   // 0x0098   (0x0008)  
	class UHoleFillToolProperties*                     Properties;                                                 // 0x00A0   (0x0008)  
	class UHoleFillToolActions*                        Actions;                                                    // 0x00A8   (0x0008)  
	class UHoleFillStatisticsProperties*               Statistics;                                                 // 0x00B0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00B8   (0x0008)  
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x118];                                     // 0x00C8   (0x0118)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSculptBrushOpProps
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.BaseKelvinletBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Stiffness;                                                  // 0x0060   (0x0004)  
	float                                              Incompressiblity;                                           // 0x0064   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.ScaleKelvinletBrushOpProps
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0070   (0x0004)  
	float                                              Falloff;                                                    // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.PullKelvinletBrushOpProps
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x0070   (0x0004)  
	float                                              Depth;                                                      // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.SharpPullKelvinletBrushOpProps
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x0070   (0x0004)  
	float                                              Depth;                                                      // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.TwistKelvinletBrushOpProps
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0070   (0x0004)  
	float                                              Falloff;                                                    // 0x0074   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshAnalysisProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            SurfaceArea;                                                // 0x0060   (0x0010)  
	FString                                            Volume;                                                     // 0x0070   (0x0010)  
};

/// Class /Script/MeshModelingTools.MeshAttributePaintToolBuilder
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 16 MaxSize: 0x0080
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/MeshModelingTools.MeshAttributePaintToolProperties
/// Size: 0x0088 (136 bytes) (0x000060 - 0x000088) align 8 MaxSize: 0x0088
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<FName>                                      Attributes;                                                 // 0x0060   (0x0010)  
	int32_t                                            SelectedAttribute;                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            AttributeName;                                              // 0x0078   (0x0010)  
};

/// Class /Script/MeshModelingTools.MeshAttributePaintEditActions
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MeshAttributePaintTool
/// Size: 0x0670 (1648 bytes) (0x000210 - 0x000670) align 16 MaxSize: 0x0670
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{ 
public:
	class UMeshAttributePaintToolProperties*           AttribProps;                                                // 0x0210   (0x0008)  
	unsigned char                                      UnknownData00_7[0x458];                                     // 0x0218   (0x0458)  MISSED
};

/// Class /Script/MeshModelingTools.MeshBoundaryToolBase
/// Size: 0x0150 (336 bytes) (0x000088 - 0x000150) align 8 MaxSize: 0x0150
class UMeshBoundaryToolBase : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0xB0];                                      // 0x0088   (0x00B0)  MISSED
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x0138   (0x0008)  
	class USingleClickInputBehavior*                   LoopSelectClickBehavior;                                    // 0x0140   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.InflateBrushOpProps
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshInspectorToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.MeshInspectorProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bWireframe;                                                 // 0x0060   (0x0001)  
	bool                                               bBoundaryEdges;                                             // 0x0061   (0x0001)  
	bool                                               bBowtieVertices;                                            // 0x0062   (0x0001)  
	bool                                               bPolygonBorders;                                            // 0x0063   (0x0001)  
	bool                                               bUVSeams;                                                   // 0x0064   (0x0001)  
	bool                                               bUVBowties;                                                 // 0x0065   (0x0001)  
	bool                                               bNormalSeams;                                               // 0x0066   (0x0001)  
	bool                                               bNormalVectors;                                             // 0x0067   (0x0001)  
	bool                                               bTangentVectors;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              NormalLength;                                               // 0x006C   (0x0004)  
	float                                              TangentLength;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.MeshInspectorTool
/// Size: 0x0128 (296 bytes) (0x000088 - 0x000128) align 8 MaxSize: 0x0128
class UMeshInspectorTool : public USingleSelectionTool
{ 
public:
	class UMeshInspectorProperties*                    Settings;                                                   // 0x0088   (0x0008)  
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00A0   (0x0008)  
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x00A8   (0x0008)  
	class UMaterialInterface*                          DefaultMaterial;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x00B8   (0x0070)  MISSED
};

/// Class /Script/MeshModelingTools.NewMeshMaterialProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	TWeakObjectPtr<class UMaterialInterface*>          Material;                                                   // 0x0060   (0x0008)  
	float                                              UVScale;                                                    // 0x0068   (0x0004)  
	bool                                               bWorldSpaceUVScale;                                         // 0x006C   (0x0001)  
	bool                                               bWireframe;                                                 // 0x006D   (0x0001)  
	bool                                               bShowExtendedOptions;                                       // 0x006E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x006F   (0x0001)  MISSED
};

/// Class /Script/MeshModelingTools.ExistingMeshMaterialProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5080) /* ESetMeshMaterialMode */   __um(MaterialMode);                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              CheckerDensity;                                             // 0x0064   (0x0004)  
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0068   (0x0008)  
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x0070   (0x0008)  
};

/// Class /Script/MeshModelingTools.MeshEditingViewProperties
/// Size: 0x0088 (136 bytes) (0x000060 - 0x000088) align 8 MaxSize: 0x0088
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	SDK_UNDEFINED(4,5081) /* EMeshEditingMaterialModes */ __um(MaterialMode);                                      // 0x0064   (0x0004)  
	bool                                               bFlatShading;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x006C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	class UTexture2D*                                  Image;                                                      // 0x0080   (0x0008)  
};

/// Class /Script/MeshModelingTools.MoveBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.PinchBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	bool                                               bPerpDamping;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.BasePlaneBrushOpProps
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingTools.PlaneBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	SDK_UNDEFINED(1,5082) /* EPlaneBrushSideMode */    __um(WhichSide);                                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.ViewAlignedPlaneBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	SDK_UNDEFINED(1,5083) /* EPlaneBrushSideMode */    __um(WhichSide);                                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.FixedPlaneBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	SDK_UNDEFINED(1,5084) /* EPlaneBrushSideMode */    __um(WhichSide);                                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.StandardSculptBrushOpProps
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.ViewAlignedSculptBrushOpProps
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.SculptMaxBrushOpProps
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              MaxHeight;                                                  // 0x0068   (0x0004)  
	bool                                               bUseFixedHeight;                                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              FixedHeight;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.SculptBrushProperties
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
class USculptBrushProperties : public UBrushBaseProperties
{ 
public:
	float                                              Depth;                                                      // 0x0078   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              Lazyness;                                                   // 0x0080   (0x0004)  
	bool                                               bShowPerBrushProps;                                         // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0085   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.KelvinBrushProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              FalloffDistance;                                            // 0x0060   (0x0004)  
	float                                              Stiffness;                                                  // 0x0064   (0x0004)  
	float                                              Incompressiblity;                                           // 0x0068   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.WorkPlaneProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 16 MaxSize: 0x0080
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x0060   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x0061   (0x0001)  
	bool                                               bSnapToGrid;                                                // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0063   (0x0001)  MISSED
	FVector                                            position;                                                   // 0x0064   (0x000C)  
	FQuat                                              Rotation;                                                   // 0x0070   (0x0010)  
};

/// Class /Script/MeshModelingTools.SculptMaxBrushProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              MaxHeight;                                                  // 0x0060   (0x0004)  
	bool                                               bFreezeCurrentHeight;                                       // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSculptToolBase
/// Size: 0x09E0 (2528 bytes) (0x0000C0 - 0x0009E0) align 16 MaxSize: 0x09D8
class UMeshSculptToolBase : public UMeshSurfacePointTool
{ 
public:
	class USculptBrushProperties*                      BrushProperties;                                            // 0x00C0   (0x0008)  
	class UWorkPlaneProperties*                        GizmoProperties;                                            // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0xE0];                                      // 0x00D0   (0x00E0)  MISSED
	TMap<int32_t, class UMeshSculptBrushOpProps*>      BrushOpPropSets;                                            // 0x01B0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0200   (0x0050)  MISSED
	TMap<int32_t, class UMeshSculptBrushOpProps*>      SecondaryBrushOpPropSets;                                   // 0x0250   (0x0050)  
	unsigned char                                      UnknownData02_6[0x5D0];                                     // 0x02A0   (0x05D0)  MISSED
	class UMeshEditingViewProperties*                  ViewProperties;                                             // 0x0870   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                     // 0x0878   (0x0008)  
	class UBrushStampIndicator*                        BrushIndicator;                                             // 0x0880   (0x0008)  
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                     // 0x0888   (0x0008)  
	class UPreviewMesh*                                BrushIndicatorMesh;                                         // 0x0890   (0x0008)  
	class UTransformGizmo*                             PlaneTransformGizmo;                                        // 0x0898   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x08A0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x130];                                     // 0x08A8   (0x0130)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSelectionToolBuilder
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSelectionToolActionPropertySet
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MeshSelectionEditActions
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.Shrink
	// void Shrink();                                                                                                           // [0x4cdf8e8] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
	// void SelectLargestComponentByTriCount();                                                                                 // [0x4cdf8b8] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
	// void SelectLargestComponentByArea();                                                                                     // [0x4cdf8a0] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.SelectAll
	// void SelectAll();                                                                                                        // [0x4cdf888] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
	// void OptimizeSelection();                                                                                                // [0x4cdf870] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.Invert
	// void Invert();                                                                                                           // [0x4cdf858] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.Grow
	// void Grow();                                                                                                             // [0x4cdf840] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
	// void ExpandToConnected();                                                                                                // [0x4cdf810] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionEditActions.Clear
	// void Clear();                                                                                                            // [0x4cdf7b0] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.MeshSelectionMeshEditActions
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
	// void SeparateTriangles();                                                                                                // [0x4cdf8d0] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
	// void FlipNormals();                                                                                                      // [0x4cdf828] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
	// void DisconnectTriangles();                                                                                              // [0x4cdf7f8] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
	// void DeleteTriangles();                                                                                                  // [0x4cdf7e0] Final|Native|Public  
	// Function /Script/MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
	// void CreatePolygroup();                                                                                                  // [0x4cdf7c8] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.MeshSelectionToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5085) /* EMeshSelectionToolPrimaryMode */ __um(SelectionMode);                                 // 0x0060   (0x0004)  
	float                                              AngleTolerance;                                             // 0x0064   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x0068   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	SDK_UNDEFINED(4,5086) /* EMeshFacesColorMode */    __um(FaceColorMode);                                        // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshSelectionTool
/// Size: 0x04E0 (1248 bytes) (0x000210 - 0x0004E0) align 8 MaxSize: 0x04E0
class UMeshSelectionTool : public UDynamicMeshBrushTool
{ 
public:
	class UMeshSelectionToolProperties*                SelectionProps;                                             // 0x0210   (0x0008)  
	class UMeshSelectionEditActions*                   SelectionActions;                                           // 0x0218   (0x0008)  
	class UMeshSelectionToolActionPropertySet*         EditActions;                                                // 0x0220   (0x0008)  
	class UMeshSelectionSet*                           Selection;                                                  // 0x0228   (0x0008)  
	TArray<class AActor*>                              SpawnedActors;                                              // 0x0230   (0x0010)  
	unsigned char                                      UnknownData00_7[0x2A0];                                     // 0x0240   (0x02A0)  MISSED
};

/// Class /Script/MeshModelingTools.BaseSmoothBrushOpProps
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingTools.SmoothBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.SecondarySmoothBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothFillBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.FlattenBrushOpProps
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
	float                                              Depth;                                                      // 0x0068   (0x0004)  
	SDK_UNDEFINED(1,5087) /* EPlaneBrushSideMode */    __um(WhichSide);                                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.EraseBrushOpProps
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              Falloff;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MeshModelingTools.MeshSpaceDeformerToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SpaceDeformerOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USpaceDeformerOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UMeshSpaceDeformerTool*                      SpaceDeformerTool;                                          // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.MeshSpaceDeformerTool
/// Size: 0x01C0 (448 bytes) (0x0000C0 - 0x0001C0) align 16 MaxSize: 0x01C0
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{ 
public:
	SDK_UNDEFINED(1,5088) /* ENonlinearOperationType */ __um(SelectedOperationType);                               // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              UpperBoundsInterval;                                        // 0x00C4   (0x0004)  
	float                                              LowerBoundsInterval;                                        // 0x00C8   (0x0004)  
	float                                              ModifierPercent;                                            // 0x00CC   (0x0004)  
	bool                                               bSnapToWorldGrid;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x00F0   (0x0020)  MISSED
	FVector                                            GizmoCenter;                                                // 0x0110   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FQuat                                              GizmoOrientation;                                           // 0x0120   (0x0010)  
	class UIntervalGizmo*                              IntervalGizmo;                                              // 0x0130   (0x0008)  
	class UTransformGizmo*                             TransformGizmo;                                             // 0x0138   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0140   (0x0008)  
	class UGizmoLocalFloatParameterSource*             UpIntervalSource;                                           // 0x0148   (0x0008)  
	class UGizmoLocalFloatParameterSource*             DownIntervalSource;                                         // 0x0150   (0x0008)  
	class UGizmoLocalFloatParameterSource*             ForwardIntervalSource;                                      // 0x0158   (0x0008)  
	unsigned char                                      UnknownData05_7[0x60];                                      // 0x0160   (0x0060)  MISSED
};

/// Class /Script/MeshModelingTools.MeshStatisticsProperties
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            Mesh;                                                       // 0x0060   (0x0010)  
	FString                                            UV;                                                         // 0x0070   (0x0010)  
	FString                                            Attributes;                                                 // 0x0080   (0x0010)  
};

/// Class /Script/MeshModelingTools.MeshVertexSculptToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.VertexBrushSculptProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5089) /* EMeshVertexSculptBrushType */ __um(PrimaryBrushType);                                 // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5090) /* EMeshSculptFalloffType */ __um(PrimaryFalloffType);                                   // 0x0061   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x0062   (0x0001)  
	bool                                               bSmoothErases;                                              // 0x0063   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.MeshVertexSculptTool
/// Size: 0x1230 (4656 bytes) (0x0009D8 - 0x001230) align 16 MaxSize: 0x1230
class UMeshVertexSculptTool : public UMeshSculptToolBase
{ 
public:
	class UVertexBrushSculptProperties*                SculptProperties;                                           // 0x09D8   (0x0008)  
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x09E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x848];                                     // 0x09E8   (0x0848)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMirrorToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UMirrorToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5091) /* EMirrorOperationMode */   __um(OperationMode);                                        // 0x0060   (0x0001)  
	bool                                               bCropAlongMirrorPlaneFirst;                                 // 0x0061   (0x0001)  
	bool                                               bWeldVerticesOnMirrorPlane;                                 // 0x0062   (0x0001)  
	bool                                               bAllowBowtieVertexCreation;                                 // 0x0063   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0064   (0x0001)  
	SDK_UNDEFINED(1,5092) /* EMirrorCtrlClickBehavior */ __um(CtrlClickBehavior);                                  // 0x0065   (0x0001)  
	bool                                               bButtonsOnlyChangeOrientation;                              // 0x0066   (0x0001)  
	bool                                               bShowPreview;                                               // 0x0067   (0x0001)  
	SDK_UNDEFINED(1,5093) /* EMirrorSaveMode */        __um(SaveMode);                                             // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMirrorOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UMirrorTool*                                 MirrorTool;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.MirrorToolActionPropertySet
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Up
	// void Up();                                                                                                               // [0x4ce014c] Final|Native|Public  
	// Function /Script/MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
	// void ShiftToCenter();                                                                                                    // [0x4ce0134] Final|Native|Public  
	// Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Right
	// void Right();                                                                                                            // [0x4ce011c] Final|Native|Public  
	// Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Left
	// void Left();                                                                                                             // [0x4ce0104] Final|Native|Public  
	// Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Forward
	// void Forward();                                                                                                          // [0x4ce00ec] Final|Native|Public  
	// Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Down
	// void Down();                                                                                                             // [0x4ce00d4] Final|Native|Public  
	// Function /Script/MeshModelingTools.MirrorToolActionPropertySet.Backward
	// void Backward();                                                                                                         // [0x4ce00a8] Final|Native|Public  
};

/// Class /Script/MeshModelingTools.MirrorTool
/// Size: 0x0138 (312 bytes) (0x000090 - 0x000138) align 8 MaxSize: 0x0138
class UMirrorTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UMirrorToolProperties*                       Settings;                                                   // 0x0098   (0x0008)  
	class UMirrorToolActionPropertySet*                ToolActions;                                                // 0x00A0   (0x0008)  
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                                             // 0x00A8   (0x0010)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x00C8   (0x0048)  MISSED
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0118   (0x0020)  MISSED
};

/// Class /Script/MeshModelingTools.OffsetMeshToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5094) /* EOffsetMeshToolOffsetType */ __um(OffsetType);                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x0064   (0x0004)  
	bool                                               bCreateShell;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.OffsetWeightMapSetProperties
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinDistance;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.IterativeOffsetProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            Steps;                                                      // 0x0060   (0x0004)  
	bool                                               bOffsetBoundaries;                                          // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              SmoothingPerStep;                                           // 0x0068   (0x0004)  
	bool                                               bReprojectSmooth;                                           // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.ImplicitOffsetProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Smoothness;                                                 // 0x0060   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.OffsetMeshTool
/// Size: 0x0420 (1056 bytes) (0x000400 - 0x000420) align 16 MaxSize: 0x0420
class UOffsetMeshTool : public UBaseMeshProcessingTool
{ 
public:
	class UOffsetMeshToolProperties*                   OffsetProperties;                                           // 0x0400   (0x0008)  
	class UIterativeOffsetProperties*                  IterativeProperties;                                        // 0x0408   (0x0008)  
	class UImplicitOffsetProperties*                   ImplicitProperties;                                         // 0x0410   (0x0008)  
	class UOffsetWeightMapSetProperties*               WeightMapProperties;                                        // 0x0418   (0x0008)  
};

/// Class /Script/MeshModelingTools.OffsetMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.PhysicsInspectorToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.PhysicsInspectorTool
/// Size: 0x00D8 (216 bytes) (0x000090 - 0x0000D8) align 8 MaxSize: 0x00D8
class UPhysicsInspectorTool : public UMultiSelectionTool
{ 
public:
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x0090   (0x0008)  
	TArray<class UPhysicsObjectToolPropertySet*>       ObjectData;                                                 // 0x0098   (0x0010)  
	class UMaterialInterface*                          LineMaterial;                                               // 0x00A8   (0x0008)  
	TArray<class UPreviewGeometry*>                    PreviewElements;                                            // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.AcceptOutputProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutToolProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSnapToWorldGrid;                                           // 0x0060   (0x0001)  
	bool                                               bKeepBothHalves;                                            // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              SpacingBetweenHalves;                                       // 0x0064   (0x0004)  
	bool                                               bFillCutHole;                                               // 0x0068   (0x0001)  
	bool                                               bShowPreview;                                               // 0x0069   (0x0001)  
	bool                                               bFillSpans;                                                 // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x006B   (0x0005)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPlaneCutOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UPlaneCutTool*                               CutTool;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.PlaneCutTool
/// Size: 0x0170 (368 bytes) (0x000090 - 0x000170) align 16 MaxSize: 0x0170
class UPlaneCutTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UPlaneCutToolProperties*                     BasicProperties;                                            // 0x0098   (0x0008)  
	class UAcceptOutputProperties*                     AcceptProperties;                                           // 0x00A0   (0x0008)  
	FVector                                            CutPlaneOrigin;                                             // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FQuat                                              CutPlaneOrientation;                                        // 0x00C0   (0x0010)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00D0   (0x0010)  
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                                // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x00F0   (0x0068)  MISSED
	class UTransformGizmo*                             PlaneTransformGizmo;                                        // 0x0158   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x0160   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0168   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingTools.PlaneCutTool.Cut
	// void Cut();                                                                                                              // [0x4ce00c0] Final|Native|Protected 
};

/// Class /Script/MeshModelingTools.PositionPlaneGizmoBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.PositionPlaneGizmo
/// Size: 0x0520 (1312 bytes) (0x000038 - 0x000520) align 16 MaxSize: 0x0520
class UPositionPlaneGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0038   (0x0050)  MISSED
	class UPreviewMesh*                                CenterBallShape;                                            // 0x0088   (0x0008)  
	class UMaterialInstance*                           CenterBallMaterial;                                         // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_7[0x488];                                     // 0x0098   (0x0488)  MISSED
};

/// Class /Script/MeshModelingTools.PositionPlaneOnSceneInputBehavior
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x0000B0) align 16 MaxSize: 0x00B0
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0080   (0x0030)  MISSED
};

/// Class /Script/MeshModelingTools.ProjectToTargetToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UProjectToTargetToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemeshMeshToolProperties
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align 8 MaxSize: 0x0090
class URemeshMeshToolProperties : public URemeshProperties
{ 
public:
	int32_t                                            TargetTriangleCount;                                        // 0x0070   (0x0004)  
	SDK_UNDEFINED(1,5095) /* ERemeshSmoothingType */   __um(SmoothingType);                                        // 0x0074   (0x0001)  
	bool                                               bDiscardAttributes;                                         // 0x0075   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x0076   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x0077   (0x0001)  
	SDK_UNDEFINED(1,5096) /* ERemeshType */            __um(RemeshType);                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            RemeshIterations;                                           // 0x007C   (0x0004)  
	bool                                               bUseTargetEdgeLength;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              TargetEdgeLength;                                           // 0x0084   (0x0004)  
	bool                                               bReproject;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.ProjectToTargetToolProperties
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{ 
public:
};

/// Class /Script/MeshModelingTools.RemeshMeshTool
/// Size: 0x00E8 (232 bytes) (0x000090 - 0x0000E8) align 8 MaxSize: 0x00E8
class URemeshMeshTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	class URemeshMeshToolProperties*                   BasicProperties;                                            // 0x0098   (0x0008)  
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                   // 0x00A0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x00B0   (0x0038)  MISSED
};

/// Class /Script/MeshModelingTools.ProjectToTargetTool
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UProjectToTargetTool : public URemeshMeshTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E8   (0x0010)  MISSED
};

/// Class /Script/MeshModelingTools.RemeshMeshToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesToolProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5097) /* EOcclusionCalculationUIMode */ __um(OcclusionTestMethod);                             // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,5098) /* EOcclusionTriangleSamplingUIMode */ __um(TriangleSampling);                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0062   (0x0006)  MISSED
	double                                             WindingIsoValue;                                            // 0x0068   (0x0008)  
	int32_t                                            AddRandomRays;                                              // 0x0070   (0x0004)  
	int32_t                                            AddTriangleSamples;                                         // 0x0074   (0x0004)  
	bool                                               bOnlySelfOcclude;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class URemoveOccludedTrianglesOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class URemoveOccludedTrianglesTool*                Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RemoveOccludedTrianglesTool
/// Size: 0x0150 (336 bytes) (0x000090 - 0x000150) align 16 MaxSize: 0x0150
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{ 
public:
	class URemoveOccludedTrianglesToolProperties*      BasicProperties;                                            // 0x0090   (0x0008)  
	class URemoveOccludedTrianglesAdvancedProperties*  AdvancedProperties;                                         // 0x0098   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00A0   (0x0010)  
	TArray<class UPreviewMesh*>                        PreviewCopies;                                              // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x00C0   (0x0090)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveBoundaryToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveBoundaryOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URevolveBoundaryOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class URevolveBoundaryTool*                        RevolveBoundaryTool;                                        // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingTools.RevolveBoundaryToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class URevolveBoundaryToolProperties : public URevolveProperties
{ 
public:
	bool                                               bDisplayOriginalMesh;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FVector                                            AxisOrigin;                                                 // 0x00B4   (0x000C)  
	float                                              AxisYaw;                                                    // 0x00C0   (0x0004)  
	float                                              AxisPitch;                                                  // 0x00C4   (0x0004)  
	bool                                               bSnapToWorldGrid;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.RevolveBoundaryTool
/// Size: 0x01B0 (432 bytes) (0x000150 - 0x0001B0) align 8 MaxSize: 0x01B0
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0150   (0x0010)  MISSED
	class URevolveBoundaryToolProperties*              Settings;                                                   // 0x0160   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0168   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0170   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x0178   (0x0008)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0180   (0x0030)  MISSED
};

/// Class /Script/MeshModelingTools.SeamSculptToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SeamSculptToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x0060   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/MeshModelingTools.SeamSculptTool
/// Size: 0x02F0 (752 bytes) (0x000210 - 0x0002F0) align 8 MaxSize: 0x02F0
class USeamSculptTool : public UDynamicMeshBrushTool
{ 
public:
	class USeamSculptToolProperties*                   Settings;                                                   // 0x0210   (0x0008)  
	class UPreviewGeometry*                            PreviewGeom;                                                // 0x0218   (0x0008)  
	unsigned char                                      UnknownData00_7[0xD0];                                      // 0x0220   (0x00D0)  MISSED
};

/// Class /Script/MeshModelingTools.SelfUnionMeshesToolProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bAttemptFixHoles;                                           // 0x0060   (0x0001)  
	bool                                               bShowNewBoundaryEdges;                                      // 0x0061   (0x0001)  
	bool                                               bTrimFlaps;                                                 // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0063   (0x0005)  MISSED
	double                                             WindingNumberThreshold;                                     // 0x0068   (0x0008)  
	bool                                               bOnlyUseFirstMeshMaterials;                                 // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.SelfUnionMeshesTool
/// Size: 0x0120 (288 bytes) (0x0000F0 - 0x000120) align 8 MaxSize: 0x0120
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{ 
public:
	class USelfUnionMeshesToolProperties*              Properties;                                                 // 0x00F0   (0x0008)  
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0100   (0x0020)  MISSED
};

/// Class /Script/MeshModelingTools.SelfUnionMeshesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SetCollisionGeometryToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.SetCollisionGeometryToolProperties
/// Size: 0x0090 (144 bytes) (0x000060 - 0x000090) align 8 MaxSize: 0x0090
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5099) /* ECollisionGeometryType */ __um(GeometryType);                                         // 0x0060   (0x0004)  
	SDK_UNDEFINED(4,5100) /* ESetCollisionGeometryInputMode */ __um(InputMode);                                    // 0x0064   (0x0004)  
	bool                                               bUseWorldSpace;                                             // 0x0068   (0x0001)  
	bool                                               bRemoveContained;                                           // 0x0069   (0x0001)  
	bool                                               bEnableMaxCount;                                            // 0x006A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x006B   (0x0001)  MISSED
	int32_t                                            MaxCount;                                                   // 0x006C   (0x0004)  
	float                                              MinThickness;                                               // 0x0070   (0x0004)  
	bool                                               bDetectBoxes;                                               // 0x0074   (0x0001)  
	bool                                               bDetectSpheres;                                             // 0x0075   (0x0001)  
	bool                                               bDetectCapsules;                                            // 0x0076   (0x0001)  
	bool                                               bSimplifyHulls;                                             // 0x0077   (0x0001)  
	int32_t                                            HullTargetFaceCount;                                        // 0x0078   (0x0004)  
	bool                                               bSimplifyPolygons;                                          // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              HullTolerance;                                              // 0x0080   (0x0004)  
	SDK_UNDEFINED(4,5101) /* EProjectedHullAxis */     __um(SweepAxis);                                            // 0x0084   (0x0004)  
	bool                                               bAppendToExisting;                                          // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	SDK_UNDEFINED(4,5102) /* ECollisionGeometryMode */ __um(SetCollisionType);                                     // 0x008C   (0x0004)  
};

/// Class /Script/MeshModelingTools.SetCollisionGeometryTool
/// Size: 0x01C0 (448 bytes) (0x000090 - 0x0001C0) align 16 MaxSize: 0x01C0
class USetCollisionGeometryTool : public UMultiSelectionTool
{ 
public:
	class USetCollisionGeometryToolProperties*         Settings;                                                   // 0x0090   (0x0008)  
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x0098   (0x0008)  
	class UPhysicsObjectToolPropertySet*               CollisionProps;                                             // 0x00A0   (0x0008)  
	class UMaterialInterface*                          LineMaterial;                                               // 0x00A8   (0x0008)  
	class UPreviewGeometry*                            PreviewGeom;                                                // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x108];                                     // 0x00B8   (0x0108)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothMeshToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5103) /* ESmoothMeshToolSmoothType */ __um(SmoothingType);                                     // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.IterativeSmoothProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x0060   (0x0004)  
	int32_t                                            Steps;                                                      // 0x0064   (0x0004)  
	bool                                               bSmoothBoundary;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.DiffusionSmoothProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x0060   (0x0004)  
	int32_t                                            Steps;                                                      // 0x0064   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MeshModelingTools.ImplicitSmoothProperties
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothSpeed;                                                // 0x0060   (0x0004)  
	float                                              Smoothness;                                                 // 0x0064   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              VolumeCorrection;                                           // 0x006C   (0x0004)  
};

/// Class /Script/MeshModelingTools.SmoothWeightMapSetProperties
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinSmoothMultiplier;                                        // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothMeshTool
/// Size: 0x0430 (1072 bytes) (0x000400 - 0x000430) align 16 MaxSize: 0x0430
class USmoothMeshTool : public UBaseMeshProcessingTool
{ 
public:
	class USmoothMeshToolProperties*                   SmoothProperties;                                           // 0x0400   (0x0008)  
	class UIterativeSmoothProperties*                  IterativeProperties;                                        // 0x0408   (0x0008)  
	class UDiffusionSmoothProperties*                  DiffusionProperties;                                        // 0x0410   (0x0008)  
	class UImplicitSmoothProperties*                   ImplicitProperties;                                         // 0x0418   (0x0008)  
	class USmoothWeightMapSetProperties*               WeightMapProperties;                                        // 0x0420   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0428   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.SmoothMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.TransformMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.TransformMeshesToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5104) /* ETransformMeshesTransformMode */ __um(TransformMode);                                 // 0x0060   (0x0001)  
	bool                                               bSetPivot;                                                  // 0x0061   (0x0001)  
	bool                                               bEnableSnapDragging;                                        // 0x0062   (0x0001)  
	SDK_UNDEFINED(1,5105) /* ETransformMeshesSnapDragSource */ __um(SnapDragSource);                               // 0x0063   (0x0001)  
	SDK_UNDEFINED(1,5106) /* ETransformMeshesSnapDragRotationMode */ __um(RotationMode);                           // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/MeshModelingTools.TransformMeshesTarget
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTransformMeshesTarget
{ 
	class UTransformProxy*                             TransformProxy;                                             // 0x0000   (0x0008)  
	class UTransformGizmo*                             TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Class /Script/MeshModelingTools.TransformMeshesTool
/// Size: 0x0140 (320 bytes) (0x000090 - 0x000140) align 16 MaxSize: 0x0140
class UTransformMeshesTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UTransformMeshesToolProperties*              TransformProps;                                             // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00A0   (0x0010)  MISSED
	TArray<FTransformMeshesTarget>                     ActiveGizmos;                                               // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x80];                                      // 0x00C0   (0x0080)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionToolProperties
/// Size: 0x0088 (136 bytes) (0x000060 - 0x000088) align 8 MaxSize: 0x0088
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5107) /* EUVProjectionMethod */    __um(UVProjectionMethod);                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	FVector                                            ProjectionPrimitiveScale;                                   // 0x0064   (0x000C)  
	float                                              CylinderProjectToTopOrBottomAngleThreshold;                 // 0x0070   (0x0004)  
	FVector2D                                          UVScale;                                                    // 0x0074   (0x0008)  
	FVector2D                                          UVOffset;                                                   // 0x007C   (0x0008)  
	bool                                               bWorldSpaceUVScale;                                         // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0085   (0x0003)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionAdvancedProperties
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingTools.UVProjectionOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UUVProjectionOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UUVProjectionTool*                           Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingTools.UVProjectionTool
/// Size: 0x0220 (544 bytes) (0x000090 - 0x000220) align 16 MaxSize: 0x0220
class UUVProjectionTool : public UMultiSelectionTool
{ 
public:
	class UUVProjectionToolProperties*                 BasicProperties;                                            // 0x0090   (0x0008)  
	class UUVProjectionAdvancedProperties*             AdvancedProperties;                                         // 0x0098   (0x0008)  
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x00A0   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00A8   (0x0010)  
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x00B8   (0x0008)  
	TArray<class UTransformGizmo*>                     TransformGizmos;                                            // 0x00C0   (0x0010)  
	TArray<class UTransformProxy*>                     TransformProxies;                                           // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x140];                                     // 0x00E0   (0x0140)  MISSED
};

/// Class /Script/MeshModelingTools.VoxelBlendMeshesToolProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             BlendPower;                                                 // 0x0060   (0x0008)  
	double                                             BlendFalloff;                                               // 0x0068   (0x0008)  
	bool                                               bSolidifyInput;                                             // 0x0070   (0x0001)  
	bool                                               bRemoveInternalsAfterSolidify;                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0072   (0x0006)  MISSED
	double                                             OffsetSolidifySurface;                                      // 0x0078   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelBlendMeshesTool
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000110) align 8 MaxSize: 0x0110
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelBlendMeshesToolProperties*             BlendProperties;                                            // 0x0108   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelBlendMeshesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.VoxelMorphologyMeshesToolProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5108) /* EMorphologyOperation */   __um(Operation);                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	double                                             Distance;                                                   // 0x0068   (0x0008)  
	bool                                               bSolidifyInput;                                             // 0x0070   (0x0001)  
	bool                                               bRemoveInternalsAfterSolidify;                              // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0072   (0x0006)  MISSED
	double                                             OffsetSolidifySurface;                                      // 0x0078   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelMorphologyMeshesTool
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000110) align 8 MaxSize: 0x0110
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelMorphologyMeshesToolProperties*        MorphologyProperties;                                       // 0x0108   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelMorphologyMeshesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.VoxelSolidifyMeshesToolProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             WindingThreshold;                                           // 0x0060   (0x0008)  
	double                                             ExtendBounds;                                               // 0x0068   (0x0008)  
	int32_t                                            SurfaceSearchSteps;                                         // 0x0070   (0x0004)  
	bool                                               bSolidAtBoundaries;                                         // 0x0074   (0x0001)  
	bool                                               bMakeOffsetSurfaces;                                        // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0076   (0x0002)  MISSED
	double                                             OffsetThickness;                                            // 0x0078   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelSolidifyMeshesTool
/// Size: 0x0110 (272 bytes) (0x000108 - 0x000110) align 8 MaxSize: 0x0110
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelSolidifyMeshesToolProperties*          SolidifyProperties;                                         // 0x0108   (0x0008)  
};

/// Class /Script/MeshModelingTools.VoxelSolidifyMeshesToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.WeldMeshEdgesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingTools.WeldMeshEdgesTool
/// Size: 0x0300 (768 bytes) (0x000088 - 0x000300) align 8 MaxSize: 0x0300
class UWeldMeshEdgesTool : public USingleSelectionTool
{ 
public:
	float                                              Tolerance;                                                  // 0x0088   (0x0004)  
	bool                                               bOnlyUnique;                                                // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x273];                                     // 0x008D   (0x0273)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAddPatchToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAddPatchToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UAddPatchTool) == 0x0100); // 256 bytes (0x000088 - 0x000100)
static_assert(sizeof(UAddPrimitiveToolBuilder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UProceduralShapeToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UProceduralRectangleToolProperties) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UProceduralBoxToolProperties) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UProceduralRoundedRectangleToolProperties) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UProceduralDiscToolProperties) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UProceduralPuncturedDiscToolProperties) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UProceduralTorusToolProperties) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UProceduralCylinderToolProperties) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UProceduralConeToolProperties) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UProceduralArrowToolProperties) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(UProceduralSphereToolProperties) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UProceduralSphericalBoxToolProperties) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(ULastActorInfo) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAddPrimitiveTool) == 0x00F0); // 240 bytes (0x000088 - 0x0000F0)
static_assert(sizeof(UAddBoxPrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddCylinderPrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddConePrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddRectanglePrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddRoundedRectanglePrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddDiscPrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddPuncturedDiscPrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddTorusPrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddArrowPrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddSpherePrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAddSphericalBoxPrimitiveTool) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UAlignObjectsToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAlignObjectsToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UAlignObjectsTool) == 0x0140); // 320 bytes (0x000090 - 0x000140)
static_assert(sizeof(UBakeMeshAttributeMapsToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UBakeMeshAttributeMapsToolProperties) == 0x0098); // 152 bytes (0x000060 - 0x000098)
static_assert(sizeof(UBakedNormalMapToolProperties) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBakedOcclusionMapToolProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UBakedOcclusionMapVisualizationProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBakedCurvatureMapToolProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UBakedTexture2DImageProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UBakeMeshAttributeMapsTool) == 0x04D0); // 1232 bytes (0x000090 - 0x0004D0)
static_assert(sizeof(UBakeTransformToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UBakeTransformToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBakeTransformTool) == 0x00B8); // 184 bytes (0x000090 - 0x0000B8)
static_assert(sizeof(FPhysicsSphereData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPhysicsBoxData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPhysicsCapsuleData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPhysicsConvexData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UPhysicsObjectToolPropertySet) == 0x00B8); // 184 bytes (0x000060 - 0x0000B8)
static_assert(sizeof(UCollisionGeometryVisualizationProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UCombineMeshesToolBuilder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UCombineMeshesToolProperties) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UCombineMeshesTool) == 0x00B8); // 184 bytes (0x000090 - 0x0000B8)
static_assert(sizeof(UConvertToPolygonsToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UConvertToPolygonsToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UConvertToPolygonsTool) == 0x03E0); // 992 bytes (0x000088 - 0x0003E0)
static_assert(sizeof(UCSGMeshesToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UCSGMeshesTool) == 0x0120); // 288 bytes (0x0000F0 - 0x000120)
static_assert(sizeof(UCSGMeshesToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDeformMeshPolygonsToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDeformMeshPolygonsTransformProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UDeformMeshPolygonsTool) == 0x12F0); // 4848 bytes (0x0000C0 - 0x0012F0)
static_assert(sizeof(UDisplaceMeshCommonProperties) == 0x0090); // 144 bytes (0x000060 - 0x000090)
static_assert(sizeof(UDisplaceMeshTextureMapProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UDisplaceMeshDirectionalFilterProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(FPerlinLayerProperties) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UDisplaceMeshPerlinNoiseProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UDisplaceMeshSineWaveProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UDisplaceMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDisplaceMeshTool) == 0x03F0); // 1008 bytes (0x000088 - 0x0003F0)
static_assert(sizeof(UDrawAndRevolveToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URevolveProperties) == 0x00B0); // 176 bytes (0x000060 - 0x0000B0)
static_assert(sizeof(URevolveToolProperties) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(URevolveOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UDrawAndRevolveTool) == 0x0120); // 288 bytes (0x000080 - 0x000120)
static_assert(sizeof(UDrawPolygonToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDrawPolygonToolStandardProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UDrawPolygonToolSnapProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UDrawPolygonTool) == 0x0570); // 1392 bytes (0x000080 - 0x000570)
static_assert(sizeof(UDrawPolyPathToolBuilder) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UDrawPolyPathProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UDrawPolyPathExtrudeProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UDrawPolyPathTool) == 0x0210); // 528 bytes (0x000080 - 0x000210)
static_assert(sizeof(UDynamicMeshBrushTool) == 0x0210); // 528 bytes (0x0001D0 - 0x000210)
static_assert(sizeof(UDynamicMeshSculptToolBuilder) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UBrushSculptProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UMeshConstraintProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(URemeshProperties) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UBrushRemeshProperties) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UFixedPlaneBrushProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UDynamicMeshSculptTool) == 0x0C70); // 3184 bytes (0x0000C0 - 0x000C70)
static_assert(sizeof(UEdgeLoopInsertionToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEdgeLoopInsertionProperties) == 0x0090); // 144 bytes (0x000060 - 0x000090)
static_assert(sizeof(UEdgeLoopInsertionOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEdgeLoopInsertionTool) == 0x0500); // 1280 bytes (0x000088 - 0x000500)
static_assert(sizeof(UEditMeshPolygonsToolBuilder) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UPolyEditCommonProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UEditMeshPolygonsToolActionPropertySet) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UEditMeshPolygonsToolActions) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UEditMeshPolygonsToolActions_Triangles) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UEditMeshPolygonsToolUVActions) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UEditMeshPolygonsToolEdgeActions) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UEditMeshPolygonsToolEdgeActions_Triangles) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UPolyEditExtrudeProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPolyEditOffsetProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPolyEditInsetProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UPolyEditOutsetProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UPolyEditCutProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPolyEditSetUVProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UEditMeshPolygonsTool) == 0x07D0); // 2000 bytes (0x0000C0 - 0x0007D0)
static_assert(sizeof(UEditNormalsToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UEditNormalsToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UEditNormalsAdvancedProperties) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UEditNormalsOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UEditNormalsTool) == 0x0100); // 256 bytes (0x000090 - 0x000100)
static_assert(sizeof(UEditPivotToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditPivotToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UEditPivotToolActionPropertySet) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(FEditPivotTarget) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UEditPivotTool) == 0x0200); // 512 bytes (0x000090 - 0x000200)
static_assert(sizeof(UEditUVIslandsToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEditUVIslandsTool) == 0x0370); // 880 bytes (0x0000C0 - 0x000370)
static_assert(sizeof(UExtractCollisionGeometryToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UExtractCollisionGeometryTool) == 0x0330); // 816 bytes (0x000088 - 0x000330)
static_assert(sizeof(UGroupEdgeInsertionToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGroupEdgeInsertionProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UGroupEdgeInsertionOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGroupEdgeInsertionTool) == 0x0550); // 1360 bytes (0x000088 - 0x000550)
static_assert(sizeof(UHoleFillToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USmoothHoleFillProperties) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UHoleFillToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UHoleFillToolActions) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UHoleFillStatisticsProperties) == 0x00B0); // 176 bytes (0x000060 - 0x0000B0)
static_assert(sizeof(UHoleFillOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UHoleFillTool) == 0x01E0); // 480 bytes (0x000088 - 0x0001E0)
static_assert(sizeof(UMeshSculptBrushOpProps) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UBaseKelvinletBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UScaleKelvinletBrushOpProps) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UPullKelvinletBrushOpProps) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(USharpPullKelvinletBrushOpProps) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UTwistKelvinletBrushOpProps) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UMeshAnalysisProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UMeshAttributePaintToolBuilder) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UMeshAttributePaintToolProperties) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UMeshAttributePaintEditActions) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMeshAttributePaintTool) == 0x0670); // 1648 bytes (0x000210 - 0x000670)
static_assert(sizeof(UMeshBoundaryToolBase) == 0x0150); // 336 bytes (0x000088 - 0x000150)
static_assert(sizeof(UInflateBrushOpProps) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMeshInspectorToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshInspectorProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UMeshInspectorTool) == 0x0128); // 296 bytes (0x000088 - 0x000128)
static_assert(sizeof(UNewMeshMaterialProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UExistingMeshMaterialProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UMeshEditingViewProperties) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UMoveBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UPinchBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UBasePlaneBrushOpProps) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UPlaneBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UViewAlignedPlaneBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UFixedPlaneBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UStandardSculptBrushOpProps) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UViewAlignedSculptBrushOpProps) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(USculptMaxBrushOpProps) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(USculptBrushProperties) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(UKelvinBrushProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UWorkPlaneProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(USculptMaxBrushProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMeshSculptToolBase) == 0x09D8); // 2520 bytes (0x0000C0 - 0x0009D8)
static_assert(sizeof(UMeshSelectionToolBuilder) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UMeshSelectionToolActionPropertySet) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMeshSelectionEditActions) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMeshSelectionMeshEditActions) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UMeshSelectionToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UMeshSelectionTool) == 0x04E0); // 1248 bytes (0x000210 - 0x0004E0)
static_assert(sizeof(UBaseSmoothBrushOpProps) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(USmoothBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(USecondarySmoothBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(USmoothFillBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UFlattenBrushOpProps) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UEraseBrushOpProps) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMeshSpaceDeformerToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USpaceDeformerOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMeshSpaceDeformerTool) == 0x01C0); // 448 bytes (0x0000C0 - 0x0001C0)
static_assert(sizeof(UMeshStatisticsProperties) == 0x0090); // 144 bytes (0x000060 - 0x000090)
static_assert(sizeof(UMeshVertexSculptToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVertexBrushSculptProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMeshVertexSculptTool) == 0x1230); // 4656 bytes (0x0009D8 - 0x001230)
static_assert(sizeof(UMirrorToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMirrorToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UMirrorOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMirrorToolActionPropertySet) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UMirrorTool) == 0x0138); // 312 bytes (0x000090 - 0x000138)
static_assert(sizeof(UOffsetMeshToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UOffsetWeightMapSetProperties) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UIterativeOffsetProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UImplicitOffsetProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UOffsetMeshTool) == 0x0420); // 1056 bytes (0x000400 - 0x000420)
static_assert(sizeof(UOffsetMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPhysicsInspectorToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPhysicsInspectorTool) == 0x00D8); // 216 bytes (0x000090 - 0x0000D8)
static_assert(sizeof(UPlaneCutToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAcceptOutputProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPlaneCutToolProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UPlaneCutOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPlaneCutTool) == 0x0170); // 368 bytes (0x000090 - 0x000170)
static_assert(sizeof(UPositionPlaneGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPositionPlaneGizmo) == 0x0520); // 1312 bytes (0x000038 - 0x000520)
static_assert(sizeof(UPositionPlaneOnSceneInputBehavior) == 0x00B0); // 176 bytes (0x000080 - 0x0000B0)
static_assert(sizeof(UProjectToTargetToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URemeshMeshToolProperties) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(UProjectToTargetToolProperties) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(URemeshMeshTool) == 0x00E8); // 232 bytes (0x000090 - 0x0000E8)
static_assert(sizeof(UProjectToTargetTool) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(URemeshMeshToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URemoveOccludedTrianglesToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URemoveOccludedTrianglesToolProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(URemoveOccludedTrianglesAdvancedProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(URemoveOccludedTrianglesOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(URemoveOccludedTrianglesTool) == 0x0150); // 336 bytes (0x000090 - 0x000150)
static_assert(sizeof(URevolveBoundaryToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URevolveBoundaryOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(URevolveBoundaryToolProperties) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(URevolveBoundaryTool) == 0x01B0); // 432 bytes (0x000150 - 0x0001B0)
static_assert(sizeof(USeamSculptToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USeamSculptToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(USeamSculptTool) == 0x02F0); // 752 bytes (0x000210 - 0x0002F0)
static_assert(sizeof(USelfUnionMeshesToolProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(USelfUnionMeshesTool) == 0x0120); // 288 bytes (0x0000F0 - 0x000120)
static_assert(sizeof(USelfUnionMeshesToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USetCollisionGeometryToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USetCollisionGeometryToolProperties) == 0x0090); // 144 bytes (0x000060 - 0x000090)
static_assert(sizeof(USetCollisionGeometryTool) == 0x01C0); // 448 bytes (0x000090 - 0x0001C0)
static_assert(sizeof(USmoothMeshToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UIterativeSmoothProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UDiffusionSmoothProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(UImplicitSmoothProperties) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(USmoothWeightMapSetProperties) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(USmoothMeshTool) == 0x0430); // 1072 bytes (0x000400 - 0x000430)
static_assert(sizeof(USmoothMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTransformMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTransformMeshesToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(FTransformMeshesTarget) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UTransformMeshesTool) == 0x0140); // 320 bytes (0x000090 - 0x000140)
static_assert(sizeof(UUVProjectionToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UUVProjectionToolProperties) == 0x0088); // 136 bytes (0x000060 - 0x000088)
static_assert(sizeof(UUVProjectionAdvancedProperties) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UUVProjectionOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UUVProjectionTool) == 0x0220); // 544 bytes (0x000090 - 0x000220)
static_assert(sizeof(UVoxelBlendMeshesToolProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UVoxelBlendMeshesTool) == 0x0110); // 272 bytes (0x000108 - 0x000110)
static_assert(sizeof(UVoxelBlendMeshesToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVoxelMorphologyMeshesToolProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UVoxelMorphologyMeshesTool) == 0x0110); // 272 bytes (0x000108 - 0x000110)
static_assert(sizeof(UVoxelMorphologyMeshesToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVoxelSolidifyMeshesToolProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(UVoxelSolidifyMeshesTool) == 0x0110); // 272 bytes (0x000108 - 0x000110)
static_assert(sizeof(UVoxelSolidifyMeshesToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWeldMeshEdgesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWeldMeshEdgesTool) == 0x0300); // 768 bytes (0x000088 - 0x000300)
static_assert(offsetof(UAddPatchTool, ShapeSettings) == 0x0090);
static_assert(offsetof(UAddPatchTool, MaterialProperties) == 0x0098);
static_assert(offsetof(UAddPatchTool, PreviewMesh) == 0x00A0);
static_assert(offsetof(ULastActorInfo, Actor) == 0x0038);
static_assert(offsetof(ULastActorInfo, StaticMesh) == 0x0040);
static_assert(offsetof(ULastActorInfo, ShapeSettings) == 0x0048);
static_assert(offsetof(ULastActorInfo, MaterialProperties) == 0x0050);
static_assert(offsetof(UAddPrimitiveTool, ShapeSettings) == 0x0090);
static_assert(offsetof(UAddPrimitiveTool, MaterialProperties) == 0x0098);
static_assert(offsetof(UAddPrimitiveTool, PreviewMesh) == 0x00A0);
static_assert(offsetof(UAddPrimitiveTool, LastGenerated) == 0x00A8);
static_assert(offsetof(UAddPrimitiveTool, AssetName) == 0x00B0);
static_assert(offsetof(UAlignObjectsTool, AlignProps) == 0x0098);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, UVLayer) == 0x0068);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, UVLayerNamesList) == 0x0078);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, Result) == 0x0090);
static_assert(offsetof(UBakedTexture2DImageProperties, SourceTexture) == 0x0060);
static_assert(offsetof(UBakeMeshAttributeMapsTool, Settings) == 0x0090);
static_assert(offsetof(UBakeMeshAttributeMapsTool, NormalMapProps) == 0x0098);
static_assert(offsetof(UBakeMeshAttributeMapsTool, OcclusionMapProps) == 0x00A0);
static_assert(offsetof(UBakeMeshAttributeMapsTool, CurvatureMapProps) == 0x00A8);
static_assert(offsetof(UBakeMeshAttributeMapsTool, Texture2DProps) == 0x00B0);
static_assert(offsetof(UBakeMeshAttributeMapsTool, VisualizationProps) == 0x00B8);
static_assert(offsetof(UBakeMeshAttributeMapsTool, PreviewMaterial) == 0x00D0);
static_assert(offsetof(UBakeMeshAttributeMapsTool, CachedNormalMap) == 0x0430);
static_assert(offsetof(UBakeMeshAttributeMapsTool, CachedOcclusionMap) == 0x0450);
static_assert(offsetof(UBakeMeshAttributeMapsTool, CachedCurvatureMap) == 0x0480);
static_assert(offsetof(UBakeMeshAttributeMapsTool, CachedMeshPropertyMap) == 0x0498);
static_assert(offsetof(UBakeMeshAttributeMapsTool, CachedTexture2DImageMap) == 0x04B0);
static_assert(offsetof(UBakeMeshAttributeMapsTool, EmptyNormalMap) == 0x04B8);
static_assert(offsetof(UBakeMeshAttributeMapsTool, EmptyColorMapBlack) == 0x04C0);
static_assert(offsetof(UBakeMeshAttributeMapsTool, EmptyColorMapWhite) == 0x04C8);
static_assert(offsetof(UBakeTransformTool, BasicProperties) == 0x0090);
static_assert(offsetof(FPhysicsSphereData, Transform) == 0x0010);
static_assert(offsetof(FPhysicsSphereData, Element) == 0x0040);
static_assert(offsetof(FPhysicsBoxData, Dimensions) == 0x0000);
static_assert(offsetof(FPhysicsBoxData, Transform) == 0x0010);
static_assert(offsetof(FPhysicsBoxData, Element) == 0x0040);
static_assert(offsetof(FPhysicsCapsuleData, Transform) == 0x0010);
static_assert(offsetof(FPhysicsCapsuleData, Element) == 0x0040);
static_assert(offsetof(FPhysicsConvexData, Element) == 0x0008);
static_assert(offsetof(UPhysicsObjectToolPropertySet, ObjectName) == 0x0060);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Spheres) == 0x0078);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Boxes) == 0x0088);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Capsules) == 0x0098);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Convexes) == 0x00A8);
static_assert(offsetof(UCollisionGeometryVisualizationProperties, Color) == 0x0068);
static_assert(offsetof(UCombineMeshesToolProperties, OutputName) == 0x0068);
static_assert(offsetof(UCombineMeshesToolProperties, OutputAsset) == 0x0078);
static_assert(offsetof(UCombineMeshesTool, BasicProperties) == 0x0090);
static_assert(offsetof(UCombineMeshesTool, HandleSourceProperties) == 0x0098);
static_assert(offsetof(UConvertToPolygonsTool, Settings) == 0x0088);
static_assert(offsetof(UConvertToPolygonsTool, PreviewMesh) == 0x0090);
static_assert(offsetof(UCSGMeshesTool, CSGProperties) == 0x00F0);
static_assert(offsetof(UCSGMeshesTool, DrawnLineSet) == 0x0108);
static_assert(offsetof(UDeformMeshPolygonsTool, DynamicMeshComponent) == 0x00C8);
static_assert(offsetof(UDeformMeshPolygonsTool, TransformProps) == 0x00D0);
static_assert(offsetof(UDisplaceMeshCommonProperties, WeightMap) == 0x0070);
static_assert(offsetof(UDisplaceMeshCommonProperties, WeightMapsList) == 0x0078);
static_assert(offsetof(UDisplaceMeshTextureMapProperties, DisplacementMap) == 0x0060);
static_assert(offsetof(UDisplaceMeshDirectionalFilterProperties, FilterDirection) == 0x0064);
static_assert(offsetof(UDisplaceMeshPerlinNoiseProperties, PerlinLayerProperties) == 0x0060);
static_assert(offsetof(UDisplaceMeshSineWaveProperties, SineWaveDirection) == 0x0068);
static_assert(offsetof(UDisplaceMeshTool, CommonProperties) == 0x0088);
static_assert(offsetof(UDisplaceMeshTool, DirectionalFilterProperties) == 0x0090);
static_assert(offsetof(UDisplaceMeshTool, TextureMapProperties) == 0x0098);
static_assert(offsetof(UDisplaceMeshTool, NoiseProperties) == 0x00A0);
static_assert(offsetof(UDisplaceMeshTool, SineWaveProperties) == 0x00A8);
static_assert(offsetof(URevolveToolProperties, DrawPlaneOrigin) == 0x00B4);
static_assert(offsetof(URevolveToolProperties, DrawPlaneOrientation) == 0x00C0);
static_assert(offsetof(URevolveOperatorFactory, RevolveTool) == 0x0030);
static_assert(offsetof(UDrawAndRevolveTool, ControlPointsMechanic) == 0x00F8);
static_assert(offsetof(UDrawAndRevolveTool, PlaneMechanic) == 0x0100);
static_assert(offsetof(UDrawAndRevolveTool, Settings) == 0x0108);
static_assert(offsetof(UDrawAndRevolveTool, MaterialProperties) == 0x0110);
static_assert(offsetof(UDrawAndRevolveTool, Preview) == 0x0118);
static_assert(offsetof(UDrawPolygonTool, PolygonProperties) == 0x0088);
static_assert(offsetof(UDrawPolygonTool, SnapProperties) == 0x0090);
static_assert(offsetof(UDrawPolygonTool, MaterialProperties) == 0x0098);
static_assert(offsetof(UDrawPolygonTool, PreviewMesh) == 0x0150);
static_assert(offsetof(UDrawPolygonTool, PlaneTransformGizmo) == 0x0158);
static_assert(offsetof(UDrawPolygonTool, PlaneTransformProxy) == 0x0160);
static_assert(offsetof(UDrawPolygonTool, HeightMechanic) == 0x0540);
static_assert(offsetof(UDrawPolyPathTool, TransformProps) == 0x00A0);
static_assert(offsetof(UDrawPolyPathTool, ExtrudeProperties) == 0x00A8);
static_assert(offsetof(UDrawPolyPathTool, MaterialProperties) == 0x00B0);
static_assert(offsetof(UDrawPolyPathTool, PlaneMechanic) == 0x0140);
static_assert(offsetof(UDrawPolyPathTool, EditPreview) == 0x01E8);
static_assert(offsetof(UDrawPolyPathTool, ExtrudeHeightMechanic) == 0x01F0);
static_assert(offsetof(UDrawPolyPathTool, CurveDistMechanic) == 0x01F8);
static_assert(offsetof(UDrawPolyPathTool, SurfacePathMechanic) == 0x0200);
static_assert(offsetof(UDynamicMeshBrushTool, PreviewMesh) == 0x01D0);
static_assert(offsetof(UFixedPlaneBrushProperties, position) == 0x0064);
static_assert(offsetof(UFixedPlaneBrushProperties, Rotation) == 0x0070);
static_assert(offsetof(UDynamicMeshSculptTool, BrushProperties) == 0x00C0);
static_assert(offsetof(UDynamicMeshSculptTool, SculptProperties) == 0x00C8);
static_assert(offsetof(UDynamicMeshSculptTool, SculptMaxBrushProperties) == 0x00D0);
static_assert(offsetof(UDynamicMeshSculptTool, KelvinBrushProperties) == 0x00D8);
static_assert(offsetof(UDynamicMeshSculptTool, RemeshProperties) == 0x00E0);
static_assert(offsetof(UDynamicMeshSculptTool, GizmoProperties) == 0x00E8);
static_assert(offsetof(UDynamicMeshSculptTool, ViewProperties) == 0x00F0);
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicator) == 0x0130);
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicatorMaterial) == 0x0138);
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicatorMesh) == 0x0140);
static_assert(offsetof(UDynamicMeshSculptTool, DynamicMeshComponent) == 0x0148);
static_assert(offsetof(UDynamicMeshSculptTool, ActiveOverrideMaterial) == 0x0150);
static_assert(offsetof(UDynamicMeshSculptTool, PlaneTransformGizmo) == 0x0C50);
static_assert(offsetof(UDynamicMeshSculptTool, PlaneTransformProxy) == 0x0C58);
static_assert(offsetof(UEdgeLoopInsertionOperatorFactory, Tool) == 0x0030);
static_assert(offsetof(UEdgeLoopInsertionTool, Settings) == 0x0098);
static_assert(offsetof(UEdgeLoopInsertionTool, Preview) == 0x0300);
static_assert(offsetof(UEditMeshPolygonsTool, DynamicMeshComponent) == 0x00D0);
static_assert(offsetof(UEditMeshPolygonsTool, CommonProps) == 0x00D8);
static_assert(offsetof(UEditMeshPolygonsTool, EditActions) == 0x00E0);
static_assert(offsetof(UEditMeshPolygonsTool, EditActions_Triangles) == 0x00E8);
static_assert(offsetof(UEditMeshPolygonsTool, EditEdgeActions) == 0x00F0);
static_assert(offsetof(UEditMeshPolygonsTool, EditEdgeActions_Triangles) == 0x00F8);
static_assert(offsetof(UEditMeshPolygonsTool, EditUVActions) == 0x0100);
static_assert(offsetof(UEditMeshPolygonsTool, ExtrudeProperties) == 0x0108);
static_assert(offsetof(UEditMeshPolygonsTool, OffsetProperties) == 0x0110);
static_assert(offsetof(UEditMeshPolygonsTool, InsetProperties) == 0x0118);
static_assert(offsetof(UEditMeshPolygonsTool, OutsetProperties) == 0x0120);
static_assert(offsetof(UEditMeshPolygonsTool, CutProperties) == 0x0128);
static_assert(offsetof(UEditMeshPolygonsTool, SetUVProperties) == 0x0130);
static_assert(offsetof(UEditMeshPolygonsTool, SelectionMechanic) == 0x0138);
static_assert(offsetof(UEditMeshPolygonsTool, MultiTransformer) == 0x0148);
static_assert(offsetof(UEditMeshPolygonsTool, EditPreview) == 0x04A0);
static_assert(offsetof(UEditMeshPolygonsTool, ExtrudeHeightMechanic) == 0x04B0);
static_assert(offsetof(UEditMeshPolygonsTool, CurveDistMechanic) == 0x04B8);
static_assert(offsetof(UEditMeshPolygonsTool, SurfacePathMechanic) == 0x04C0);
static_assert(offsetof(UEditNormalsOperatorFactory, Tool) == 0x0030);
static_assert(offsetof(UEditNormalsTool, BasicProperties) == 0x0090);
static_assert(offsetof(UEditNormalsTool, AdvancedProperties) == 0x0098);
static_assert(offsetof(UEditNormalsTool, Previews) == 0x00A0);
static_assert(offsetof(FEditPivotTarget, TransformProxy) == 0x0000);
static_assert(offsetof(FEditPivotTarget, TransformGizmo) == 0x0008);
static_assert(offsetof(UEditPivotTool, TransformProps) == 0x0098);
static_assert(offsetof(UEditPivotTool, EditPivotActions) == 0x00A0);
static_assert(offsetof(UEditPivotTool, ActiveGizmos) == 0x0178);
static_assert(offsetof(UEditUVIslandsTool, MaterialSettings) == 0x00C8);
static_assert(offsetof(UEditUVIslandsTool, CheckerMaterial) == 0x00D0);
static_assert(offsetof(UEditUVIslandsTool, DynamicMeshComponent) == 0x00D8);
static_assert(offsetof(UEditUVIslandsTool, SelectionMechanic) == 0x00E0);
static_assert(offsetof(UEditUVIslandsTool, MultiTransformer) == 0x00F0);
static_assert(offsetof(UExtractCollisionGeometryTool, VizSettings) == 0x0088);
static_assert(offsetof(UExtractCollisionGeometryTool, ObjectProps) == 0x0090);
static_assert(offsetof(UExtractCollisionGeometryTool, PreviewElements) == 0x0098);
static_assert(offsetof(UExtractCollisionGeometryTool, PreviewMesh) == 0x00A0);
static_assert(offsetof(UGroupEdgeInsertionOperatorFactory, Tool) == 0x0030);
static_assert(offsetof(UGroupEdgeInsertionTool, Settings) == 0x0098);
static_assert(offsetof(UGroupEdgeInsertionTool, Preview) == 0x00A0);
static_assert(offsetof(UHoleFillStatisticsProperties, InitialHoles) == 0x0060);
static_assert(offsetof(UHoleFillStatisticsProperties, SelectedHoles) == 0x0070);
static_assert(offsetof(UHoleFillStatisticsProperties, SuccessfulFills) == 0x0080);
static_assert(offsetof(UHoleFillStatisticsProperties, FailedFills) == 0x0090);
static_assert(offsetof(UHoleFillStatisticsProperties, RemainingHoles) == 0x00A0);
static_assert(offsetof(UHoleFillOperatorFactory, FillTool) == 0x0030);
static_assert(offsetof(UHoleFillTool, SmoothHoleFillProperties) == 0x0098);
static_assert(offsetof(UHoleFillTool, Properties) == 0x00A0);
static_assert(offsetof(UHoleFillTool, Actions) == 0x00A8);
static_assert(offsetof(UHoleFillTool, Statistics) == 0x00B0);
static_assert(offsetof(UHoleFillTool, Preview) == 0x00B8);
static_assert(offsetof(UHoleFillTool, SelectionMechanic) == 0x00C0);
static_assert(offsetof(UMeshAnalysisProperties, SurfaceArea) == 0x0060);
static_assert(offsetof(UMeshAnalysisProperties, Volume) == 0x0070);
static_assert(offsetof(UMeshAttributePaintToolProperties, Attributes) == 0x0060);
static_assert(offsetof(UMeshAttributePaintToolProperties, AttributeName) == 0x0078);
static_assert(offsetof(UMeshAttributePaintTool, AttribProps) == 0x0210);
static_assert(offsetof(UMeshBoundaryToolBase, SelectionMechanic) == 0x0138);
static_assert(offsetof(UMeshBoundaryToolBase, LoopSelectClickBehavior) == 0x0140);
static_assert(offsetof(UMeshInspectorTool, Settings) == 0x0088);
static_assert(offsetof(UMeshInspectorTool, MaterialSettings) == 0x0090);
static_assert(offsetof(UMeshInspectorTool, PreviewMesh) == 0x00A0);
static_assert(offsetof(UMeshInspectorTool, DrawnLineSet) == 0x00A8);
static_assert(offsetof(UMeshInspectorTool, DefaultMaterial) == 0x00B0);
static_assert(offsetof(UNewMeshMaterialProperties, Material) == 0x0060);
static_assert(offsetof(UExistingMeshMaterialProperties, OverrideMaterial) == 0x0068);
static_assert(offsetof(UExistingMeshMaterialProperties, CheckerMaterial) == 0x0070);
static_assert(offsetof(UMeshEditingViewProperties, Color) == 0x006C);
static_assert(offsetof(UMeshEditingViewProperties, Image) == 0x0080);
static_assert(offsetof(UWorkPlaneProperties, position) == 0x0064);
static_assert(offsetof(UWorkPlaneProperties, Rotation) == 0x0070);
static_assert(offsetof(UMeshSculptToolBase, BrushProperties) == 0x00C0);
static_assert(offsetof(UMeshSculptToolBase, GizmoProperties) == 0x00C8);
static_assert(offsetof(UMeshSculptToolBase, BrushOpPropSets) == 0x01B0);
static_assert(offsetof(UMeshSculptToolBase, SecondaryBrushOpPropSets) == 0x0250);
static_assert(offsetof(UMeshSculptToolBase, ViewProperties) == 0x0870);
static_assert(offsetof(UMeshSculptToolBase, ActiveOverrideMaterial) == 0x0878);
static_assert(offsetof(UMeshSculptToolBase, BrushIndicator) == 0x0880);
static_assert(offsetof(UMeshSculptToolBase, BrushIndicatorMaterial) == 0x0888);
static_assert(offsetof(UMeshSculptToolBase, BrushIndicatorMesh) == 0x0890);
static_assert(offsetof(UMeshSculptToolBase, PlaneTransformGizmo) == 0x0898);
static_assert(offsetof(UMeshSculptToolBase, PlaneTransformProxy) == 0x08A0);
static_assert(offsetof(UMeshSelectionTool, SelectionProps) == 0x0210);
static_assert(offsetof(UMeshSelectionTool, SelectionActions) == 0x0218);
static_assert(offsetof(UMeshSelectionTool, EditActions) == 0x0220);
static_assert(offsetof(UMeshSelectionTool, Selection) == 0x0228);
static_assert(offsetof(UMeshSelectionTool, SpawnedActors) == 0x0230);
static_assert(offsetof(USpaceDeformerOperatorFactory, SpaceDeformerTool) == 0x0030);
static_assert(offsetof(UMeshSpaceDeformerTool, StateTarget) == 0x00D8);
static_assert(offsetof(UMeshSpaceDeformerTool, Preview) == 0x00E8);
static_assert(offsetof(UMeshSpaceDeformerTool, GizmoCenter) == 0x0110);
static_assert(offsetof(UMeshSpaceDeformerTool, GizmoOrientation) == 0x0120);
static_assert(offsetof(UMeshSpaceDeformerTool, IntervalGizmo) == 0x0130);
static_assert(offsetof(UMeshSpaceDeformerTool, TransformGizmo) == 0x0138);
static_assert(offsetof(UMeshSpaceDeformerTool, TransformProxy) == 0x0140);
static_assert(offsetof(UMeshSpaceDeformerTool, UpIntervalSource) == 0x0148);
static_assert(offsetof(UMeshSpaceDeformerTool, DownIntervalSource) == 0x0150);
static_assert(offsetof(UMeshSpaceDeformerTool, ForwardIntervalSource) == 0x0158);
static_assert(offsetof(UMeshStatisticsProperties, Mesh) == 0x0060);
static_assert(offsetof(UMeshStatisticsProperties, UV) == 0x0070);
static_assert(offsetof(UMeshStatisticsProperties, Attributes) == 0x0080);
static_assert(offsetof(UMeshVertexSculptTool, SculptProperties) == 0x09D8);
static_assert(offsetof(UMeshVertexSculptTool, DynamicMeshComponent) == 0x09E0);
static_assert(offsetof(UMirrorOperatorFactory, MirrorTool) == 0x0030);
static_assert(offsetof(UMirrorTool, Settings) == 0x0098);
static_assert(offsetof(UMirrorTool, ToolActions) == 0x00A0);
static_assert(offsetof(UMirrorTool, MeshesToMirror) == 0x00A8);
static_assert(offsetof(UMirrorTool, Previews) == 0x00B8);
static_assert(offsetof(UMirrorTool, PlaneMechanic) == 0x0110);
static_assert(offsetof(UOffsetMeshTool, OffsetProperties) == 0x0400);
static_assert(offsetof(UOffsetMeshTool, IterativeProperties) == 0x0408);
static_assert(offsetof(UOffsetMeshTool, ImplicitProperties) == 0x0410);
static_assert(offsetof(UOffsetMeshTool, WeightMapProperties) == 0x0418);
static_assert(offsetof(UPhysicsInspectorTool, VizSettings) == 0x0090);
static_assert(offsetof(UPhysicsInspectorTool, ObjectData) == 0x0098);
static_assert(offsetof(UPhysicsInspectorTool, LineMaterial) == 0x00A8);
static_assert(offsetof(UPhysicsInspectorTool, PreviewElements) == 0x00B0);
static_assert(offsetof(UPlaneCutOperatorFactory, CutTool) == 0x0030);
static_assert(offsetof(UPlaneCutTool, BasicProperties) == 0x0098);
static_assert(offsetof(UPlaneCutTool, AcceptProperties) == 0x00A0);
static_assert(offsetof(UPlaneCutTool, CutPlaneOrigin) == 0x00A8);
static_assert(offsetof(UPlaneCutTool, CutPlaneOrientation) == 0x00C0);
static_assert(offsetof(UPlaneCutTool, Previews) == 0x00D0);
static_assert(offsetof(UPlaneCutTool, MeshesToCut) == 0x00E0);
static_assert(offsetof(UPlaneCutTool, PlaneTransformGizmo) == 0x0158);
static_assert(offsetof(UPlaneCutTool, PlaneTransformProxy) == 0x0160);
static_assert(offsetof(UPositionPlaneGizmo, CenterBallShape) == 0x0088);
static_assert(offsetof(UPositionPlaneGizmo, CenterBallMaterial) == 0x0090);
static_assert(offsetof(URemeshMeshTool, BasicProperties) == 0x0098);
static_assert(offsetof(URemeshMeshTool, MeshStatisticsProperties) == 0x00A0);
static_assert(offsetof(URemeshMeshTool, Preview) == 0x00A8);
static_assert(offsetof(URemoveOccludedTrianglesOperatorFactory, Tool) == 0x0030);
static_assert(offsetof(URemoveOccludedTrianglesTool, BasicProperties) == 0x0090);
static_assert(offsetof(URemoveOccludedTrianglesTool, AdvancedProperties) == 0x0098);
static_assert(offsetof(URemoveOccludedTrianglesTool, Previews) == 0x00A0);
static_assert(offsetof(URemoveOccludedTrianglesTool, PreviewCopies) == 0x00B0);
static_assert(offsetof(URevolveBoundaryOperatorFactory, RevolveBoundaryTool) == 0x0030);
static_assert(offsetof(URevolveBoundaryToolProperties, AxisOrigin) == 0x00B4);
static_assert(offsetof(URevolveBoundaryTool, Settings) == 0x0160);
static_assert(offsetof(URevolveBoundaryTool, MaterialProperties) == 0x0168);
static_assert(offsetof(URevolveBoundaryTool, PlaneMechanic) == 0x0170);
static_assert(offsetof(URevolveBoundaryTool, Preview) == 0x0178);
static_assert(offsetof(USeamSculptTool, Settings) == 0x0210);
static_assert(offsetof(USeamSculptTool, PreviewGeom) == 0x0218);
static_assert(offsetof(USelfUnionMeshesTool, Properties) == 0x00F0);
static_assert(offsetof(USelfUnionMeshesTool, DrawnLineSet) == 0x00F8);
static_assert(offsetof(USetCollisionGeometryTool, Settings) == 0x0090);
static_assert(offsetof(USetCollisionGeometryTool, VizSettings) == 0x0098);
static_assert(offsetof(USetCollisionGeometryTool, CollisionProps) == 0x00A0);
static_assert(offsetof(USetCollisionGeometryTool, LineMaterial) == 0x00A8);
static_assert(offsetof(USetCollisionGeometryTool, PreviewGeom) == 0x00B0);
static_assert(offsetof(USmoothMeshTool, SmoothProperties) == 0x0400);
static_assert(offsetof(USmoothMeshTool, IterativeProperties) == 0x0408);
static_assert(offsetof(USmoothMeshTool, DiffusionProperties) == 0x0410);
static_assert(offsetof(USmoothMeshTool, ImplicitProperties) == 0x0418);
static_assert(offsetof(USmoothMeshTool, WeightMapProperties) == 0x0420);
static_assert(offsetof(FTransformMeshesTarget, TransformProxy) == 0x0000);
static_assert(offsetof(FTransformMeshesTarget, TransformGizmo) == 0x0008);
static_assert(offsetof(UTransformMeshesTool, TransformProps) == 0x0098);
static_assert(offsetof(UTransformMeshesTool, ActiveGizmos) == 0x00B0);
static_assert(offsetof(UUVProjectionToolProperties, ProjectionPrimitiveScale) == 0x0064);
static_assert(offsetof(UUVProjectionToolProperties, UVScale) == 0x0074);
static_assert(offsetof(UUVProjectionToolProperties, UVOffset) == 0x007C);
static_assert(offsetof(UUVProjectionOperatorFactory, Tool) == 0x0030);
static_assert(offsetof(UUVProjectionTool, BasicProperties) == 0x0090);
static_assert(offsetof(UUVProjectionTool, AdvancedProperties) == 0x0098);
static_assert(offsetof(UUVProjectionTool, MaterialSettings) == 0x00A0);
static_assert(offsetof(UUVProjectionTool, Previews) == 0x00A8);
static_assert(offsetof(UUVProjectionTool, CheckerMaterial) == 0x00B8);
static_assert(offsetof(UUVProjectionTool, TransformGizmos) == 0x00C0);
static_assert(offsetof(UUVProjectionTool, TransformProxies) == 0x00D0);
static_assert(offsetof(UVoxelBlendMeshesTool, BlendProperties) == 0x0108);
static_assert(offsetof(UVoxelMorphologyMeshesTool, MorphologyProperties) == 0x0108);
static_assert(offsetof(UVoxelSolidifyMeshesTool, SolidifyProperties) == 0x0108);
