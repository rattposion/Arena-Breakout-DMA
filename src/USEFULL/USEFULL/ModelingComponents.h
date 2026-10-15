// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InteractiveToolsFramework

#pragma pack(push, 0x1)

/// Class /Script/ModelingComponents.BaseCreateFromSelectedToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(1,5030) /* EHandleSourcesMethod */   __um(OnToolAccept);                                         // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{ 
public:
	SDK_UNDEFINED(4,5031) /* EBaseCreateFromSelectedTargetType */ __um(WriteOutputTo);                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            OutputName;                                                 // 0x0070   (0x0010)  
	FString                                            OutputAsset;                                                // 0x0080   (0x0010)  
};

/// Class /Script/ModelingComponents.TransformInputsToolProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowTransformUI;                                           // 0x0060   (0x0001)  
	bool                                               bSnapToWorldGrid;                                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedTool
/// Size: 0x00F0 (240 bytes) (0x000090 - 0x0000F0) align 8 MaxSize: 0x00F0
class UBaseCreateFromSelectedTool : public UMultiSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UTransformInputsToolProperties*              TransformProperties;                                        // 0x0098   (0x0008)  
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                                  // 0x00A0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00A8   (0x0008)  
	TArray<class UTransformProxy*>                     TransformProxies;                                           // 0x00B0   (0x0010)  
	TArray<class UTransformGizmo*>                     TransformGizmos;                                            // 0x00C0   (0x0010)  
	TArray<FVector>                                    TransformInitialScales;                                     // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.BaseDynamicMeshComponent
/// Size: 0x0570 (1392 bytes) (0x000520 - 0x000570) align 16 MaxSize: 0x0568
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0520   (0x0048)  MISSED
};

/// Class /Script/ModelingComponents.BaseMeshProcessingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.BaseMeshProcessingTool
/// Size: 0x0400 (1024 bytes) (0x000088 - 0x000400) align 16 MaxSize: 0x0400
class UBaseMeshProcessingTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0088   (0x0028)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x348];                                     // 0x00B8   (0x0348)  MISSED
};

/// Class /Script/ModelingComponents.BaseVoxelTool
/// Size: 0x0108 (264 bytes) (0x0000F0 - 0x000108) align 8 MaxSize: 0x0108
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{ 
public:
	class UVoxelProperties*                            VoxProperties;                                              // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00F8   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.CollectSurfacePathMechanic
/// Size: 0x0550 (1360 bytes) (0x000030 - 0x000550) align 16 MaxSize: 0x0550
class UCollectSurfacePathMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x520];                                     // 0x0030   (0x0520)  MISSED
};

/// Class /Script/ModelingComponents.ConstructionPlaneMechanic
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 16 MaxSize: 0x00F0
class UConstructionPlaneMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0030   (0x0098)  MISSED
	class UTransformGizmo*                             PlaneTransformGizmo;                                        // 0x00C8   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00D8   (0x0010)  MISSED
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                    // 0x00E8   (0x0008)  
};

/// Class /Script/ModelingComponents.CurveControlPointsMechanic
/// Size: 0x0650 (1616 bytes) (0x000030 - 0x000650) align 16 MaxSize: 0x0650
class UCurveControlPointsMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class USingleClickInputBehavior*                   ClickBehavior;                                              // 0x0040   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x498];                                     // 0x0050   (0x0498)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x04E8   (0x0008)  
	class UPointSetComponent*                          DrawnControlPoints;                                         // 0x04F0   (0x0008)  
	class ULineSetComponent*                           DrawnControlSegments;                                       // 0x04F8   (0x0008)  
	class UPointSetComponent*                          PreviewPoint;                                               // 0x0500   (0x0008)  
	class ULineSetComponent*                           PreviewSegment;                                             // 0x0508   (0x0008)  
	unsigned char                                      UnknownData02_6[0x78];                                      // 0x0510   (0x0078)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x0588   (0x0008)  
	class UTransformGizmo*                             PointTransformGizmo;                                        // 0x0590   (0x0008)  
	unsigned char                                      UnknownData03_7[0xB8];                                      // 0x0598   (0x00B8)  MISSED
};

/// Class /Script/ModelingComponents.DynamicMeshReplacementChangeTarget
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UDynamicMeshReplacementChangeTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/ModelingComponents.LineSetComponent
/// Size: 0x0580 (1408 bytes) (0x000520 - 0x000580) align 16 MaxSize: 0x0580
class ULineSetComponent : public UMeshComponent
{ 
public:
	class UMaterialInterface*                          LineMaterial;                                               // 0x0520   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0528   (0x001C)  
	bool                                               bBoundsDirty;                                               // 0x0544   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3B];                                      // 0x0545   (0x003B)  MISSED
};

/// Class /Script/ModelingComponents.MeshCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UMeshOpPreviewWithBackgroundCompute : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0058   (0x0008)  
	TArray<class UMaterialInterface*>                  StandardMaterials;                                          // 0x0060   (0x0010)  
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0070   (0x0008)  
	class UMaterialInterface*                          WorkingMaterial;                                            // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.MeshReplacementCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MeshVertexCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshVertexCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MultiTransformer
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 16 MaxSize: 0x0140
class UMultiTransformer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0028   (0x0048)  MISSED
	class UInteractiveGizmoManager*                    GizmoManager;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0078   (0x0068)  MISSED
	class UTransformGizmo*                             TransformGizmo;                                             // 0x00E0   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x00F0   (0x0050)  MISSED
};

/// Class /Script/ModelingComponents.OctreeDynamicMeshComponent
/// Size: 0x0680 (1664 bytes) (0x000568 - 0x000680) align 16 MaxSize: 0x0680
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0568   (0x0018)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x0580   (0x0001)  
	unsigned char                                      UnknownData01_7[0xFF];                                      // 0x0581   (0x00FF)  MISSED
};

/// Class /Script/ModelingComponents.PlaneDistanceFromHitMechanic
/// Size: 0x04B0 (1200 bytes) (0x000030 - 0x0004B0) align 16 MaxSize: 0x04B0
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x480];                                     // 0x0030   (0x0480)  MISSED
};

/// Class /Script/ModelingComponents.PointSetComponent
/// Size: 0x0580 (1408 bytes) (0x000520 - 0x000580) align 16 MaxSize: 0x0580
class UPointSetComponent : public UMeshComponent
{ 
public:
	class UMaterialInterface*                          PointMaterial;                                              // 0x0520   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x0528   (0x001C)  
	bool                                               bBoundsDirty;                                               // 0x0544   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3B];                                      // 0x0545   (0x003B)  MISSED
};

/// Class /Script/ModelingComponents.PreviewMesh
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPreviewMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	bool                                               bBuildSpatialDataStructure;                                 // 0x0040   (0x0001)  
	bool                                               bDrawOnTop;                                                 // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0042   (0x000E)  MISSED
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x0050   (0x0008)  
	unsigned char                                      UnknownData02_7[0x88];                                      // 0x0058   (0x0088)  MISSED
};

/// Class /Script/ModelingComponents.PolyEditPreviewMesh
/// Size: 0x04D0 (1232 bytes) (0x0000E0 - 0x0004D0) align 8 MaxSize: 0x04D0
class UPolyEditPreviewMesh : public UPreviewMesh
{ 
public:
	unsigned char                                      UnknownData00_1[0x3F0];                                     // 0x00E0   (0x03F0)  MISSED
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanicProperties
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSelectFaces;                                               // 0x0060   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x0061   (0x0001)  
	bool                                               bSelectVertices;                                            // 0x0062   (0x0001)  
	bool                                               bPreferProjectedElement;                                    // 0x0063   (0x0001)  
	bool                                               bSelectDownRay;                                             // 0x0064   (0x0001)  
	bool                                               bIgnoreOcclusion;                                           // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0066   (0x0002)  MISSED
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanic
/// Size: 0x0670 (1648 bytes) (0x000030 - 0x000670) align 16 MaxSize: 0x0670
class UPolygonSelectionMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0030   (0x0020)  MISSED
	class UPolygonSelectionMechanicProperties*         Properties;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x308];                                     // 0x0058   (0x0308)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x0360   (0x0008)  
	class UTriangleSetComponent*                       DrawnTriangleSetComponent;                                  // 0x0368   (0x0008)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0370   (0x0050)  MISSED
	class UMaterialInterface*                          HighlightedFaceMaterial;                                    // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x2A8];                                     // 0x03C8   (0x02A8)  MISSED
};

/// Class /Script/ModelingComponents.PreviewGeometryActor
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class APreviewGeometryActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.PreviewGeometry
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPreviewGeometry : public UObject
{ 
public:
	class APreviewGeometryActor*                       ParentActor;                                                // 0x0028   (0x0008)  
	TMap<FString, class ULineSetComponent*>            LineSets;                                                   // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetVisibility
	// bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);                                                     // [0x4c1f53c] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetMaterial
	// bool SetLineSetMaterial(FString LineSetIdentifier, class UMaterialInterface* NewMaterial);                               // [0x4c1f3e8] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	// void SetAllLineSetsMaterial(class UMaterialInterface* Material);                                                         // [0x4c1f34c] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveLineSet
	// bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);                                                            // [0x4c1f244] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllLineSets
	// void RemoveAllLineSets(bool bDestroy);                                                                                   // [0x4c1f1a8] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.GetActor
	// class APreviewGeometryActor* GetActor();                                                                                 // [0x4c1f12c] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.PreviewGeometry.FindLineSet
	// class ULineSetComponent* FindLineSet(FString LineSetIdentifier);                                                         // [0x4c1f074] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.Disconnect
	// void Disconnect();                                                                                                       // [0x4c1f060] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.CreateInWorld
	// void CreateInWorld(class UWorld* World, FTransform& WithTransform);                                                      // [0x4c1ef28] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/ModelingComponents.PreviewGeometry.AddLineSet
	// class ULineSetComponent* AddLineSet(FString LineSetIdentifier);                                                          // [0x4c1ee1c] Final|Native|Public  
};

/// Class /Script/ModelingComponents.PreviewMeshActor
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class APreviewMeshActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.SimpleDynamicMeshComponent
/// Size: 0x06C0 (1728 bytes) (0x000568 - 0x0006C0) align 16 MaxSize: 0x06C0
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	SDK_UNDEFINED(1,5032) /* EDynamicMeshTangentCalcType */ __um(TangentsType);                                    // 0x0568   (0x0001)  
	bool                                               bInvalidateProxyOnChange;                                   // 0x0569   (0x0001)  
	unsigned char                                      UnknownData00_6[0x36];                                      // 0x056A   (0x0036)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x05A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4F];                                      // 0x05A1   (0x004F)  MISSED
	bool                                               bDrawOnTop;                                                 // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xCF];                                      // 0x05F1   (0x00CF)  MISSED
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanicPropertySet
/// Size: 0x0070 (112 bytes) (0x000060 - 0x000070) align 8 MaxSize: 0x0070
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{ 
public:
	SDK_UNDEFINED(4,5033) /* ESpaceCurveControlPointTransformMode */ __um(TransformMode);                          // 0x0060   (0x0004)  
	SDK_UNDEFINED(4,5034) /* ESpaceCurveControlPointOriginMode */ __um(TransformOrigin);                           // 0x0064   (0x0004)  
	float                                              Softness;                                                   // 0x0068   (0x0004)  
	SDK_UNDEFINED(4,5035) /* ESpaceCurveControlPointFalloffType */ __um(SoftFalloff);                              // 0x006C   (0x0004)  
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanic
/// Size: 0x02B0 (688 bytes) (0x000030 - 0x0002B0) align 16 MaxSize: 0x02B0
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class USingleClickInputBehavior*                   ClickBehavior;                                              // 0x0040   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0050   (0x0018)  MISSED
	class USpaceCurveDeformationMechanicPropertySet*   TransformProperties;                                        // 0x0068   (0x0008)  
	unsigned char                                      UnknownData02_6[0xF8];                                      // 0x0070   (0x00F8)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x0168   (0x0008)  
	class UPointSetComponent*                          RenderPoints;                                               // 0x0170   (0x0008)  
	class ULineSetComponent*                           RenderSegments;                                             // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0180   (0x0038)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x01B8   (0x0008)  
	class UTransformGizmo*                             PointTransformGizmo;                                        // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData04_7[0xE8];                                      // 0x01C8   (0x00E8)  MISSED
};

/// Class /Script/ModelingComponents.SpatialCurveDistanceMechanic
/// Size: 0x03F0 (1008 bytes) (0x000030 - 0x0003F0) align 16 MaxSize: 0x03F0
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x3C0];                                     // 0x0030   (0x03C0)  MISSED
};

/// Class /Script/ModelingComponents.TriangleSetComponent
/// Size: 0x0600 (1536 bytes) (0x000520 - 0x000600) align 16 MaxSize: 0x0600
class UTriangleSetComponent : public UMeshComponent
{ 
public:
	FBoxSphereBounds                                   Bounds;                                                     // 0x0520   (0x001C)  
	bool                                               bBoundsDirty;                                               // 0x053C   (0x0001)  
	unsigned char                                      UnknownData00_7[0xC3];                                      // 0x053D   (0x00C3)  MISSED
};

/// Class /Script/ModelingComponents.UVLayoutPreviewProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bVisible;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              ScaleFactor;                                                // 0x0064   (0x0004)  
	SDK_UNDEFINED(4,5036) /* EUVLayoutPreviewSide */   __um(WhichSide);                                            // 0x0068   (0x0004)  
	bool                                               bShowWireframe;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	FVector2D                                          Shift;                                                      // 0x0070   (0x0008)  
};

/// Class /Script/ModelingComponents.UVLayoutPreview
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 16 MaxSize: 0x0140
class UUVLayoutPreview : public UObject
{ 
public:
	class UUVLayoutPreviewProperties*                  Settings;                                                   // 0x0028   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0030   (0x0008)  
	class UTriangleSetComponent*                       TriangleComponent;                                          // 0x0038   (0x0008)  
	bool                                               bShowBackingRectangle;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UMaterialInterface*                          BackingRectangleMaterial;                                   // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x0050   (0x00F0)  MISSED
};

/// Class /Script/ModelingComponents.VoxelProperties
/// Size: 0x0078 (120 bytes) (0x000060 - 0x000078) align 8 MaxSize: 0x0078
class UVoxelProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            VoxelCount;                                                 // 0x0060   (0x0004)  
	bool                                               bAutoSimplify;                                              // 0x0064   (0x0001)  
	bool                                               bRemoveInternalSurfaces;                                    // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0066   (0x0002)  MISSED
	double                                             SimplifyMaxErrorFactor;                                     // 0x0068   (0x0008)  
	double                                             CubeRootMinComponentVolume;                                 // 0x0070   (0x0008)  
};

/// Class /Script/ModelingComponents.WeightMapSetProperties
/// Size: 0x0080 (128 bytes) (0x000060 - 0x000080) align 8 MaxSize: 0x0080
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              WeightMap;                                                  // 0x0060   (0x0008)  
	TArray<FString>                                    WeightMapsList;                                             // 0x0068   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0x4c1f144] Final|Native|Public  
};

/// Struct /Script/ModelingComponents.RenderableTriangleVertex
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FRenderableTriangleVertex
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector2D                                          UV;                                                         // 0x000C   (0x0008)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FColor                                             Color;                                                      // 0x0020   (0x0004)  
};

/// Struct /Script/ModelingComponents.RenderableTriangle
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRenderableTriangle
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FRenderableTriangleVertex                          Vertex0;                                                    // 0x0008   (0x0024)  
	FRenderableTriangleVertex                          Vertex1;                                                    // 0x002C   (0x0024)  
	FRenderableTriangleVertex                          Vertex2;                                                    // 0x0050   (0x0024)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBaseCreateFromSelectedToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOnAcceptHandleSourcesProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBaseCreateFromSelectedHandleSourceProperties) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(UTransformInputsToolProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UBaseCreateFromSelectedTool) == 0x00F0); // 240 bytes (0x000090 - 0x0000F0)
static_assert(sizeof(UBaseDynamicMeshComponent) == 0x0568); // 1384 bytes (0x000520 - 0x000568)
static_assert(sizeof(UBaseMeshProcessingToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBaseMeshProcessingTool) == 0x0400); // 1024 bytes (0x000088 - 0x000400)
static_assert(sizeof(UBaseVoxelTool) == 0x0108); // 264 bytes (0x0000F0 - 0x000108)
static_assert(sizeof(UCollectSurfacePathMechanic) == 0x0550); // 1360 bytes (0x000030 - 0x000550)
static_assert(sizeof(UConstructionPlaneMechanic) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UCurveControlPointsMechanic) == 0x0650); // 1616 bytes (0x000030 - 0x000650)
static_assert(sizeof(UDynamicMeshReplacementChangeTarget) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(ULineSetComponent) == 0x0580); // 1408 bytes (0x000520 - 0x000580)
static_assert(sizeof(UMeshCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshOpPreviewWithBackgroundCompute) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UMeshReplacementCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshVertexCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMultiTransformer) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UOctreeDynamicMeshComponent) == 0x0680); // 1664 bytes (0x000568 - 0x000680)
static_assert(sizeof(UPlaneDistanceFromHitMechanic) == 0x04B0); // 1200 bytes (0x000030 - 0x0004B0)
static_assert(sizeof(UPointSetComponent) == 0x0580); // 1408 bytes (0x000520 - 0x000580)
static_assert(sizeof(UPreviewMesh) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UPolyEditPreviewMesh) == 0x04D0); // 1232 bytes (0x0000E0 - 0x0004D0)
static_assert(sizeof(UPolygonSelectionMechanicProperties) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UPolygonSelectionMechanic) == 0x0670); // 1648 bytes (0x000030 - 0x000670)
static_assert(sizeof(APreviewGeometryActor) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UPreviewGeometry) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(APreviewMeshActor) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(USimpleDynamicMeshComponent) == 0x06C0); // 1728 bytes (0x000568 - 0x0006C0)
static_assert(sizeof(USpaceCurveDeformationMechanicPropertySet) == 0x0070); // 112 bytes (0x000060 - 0x000070)
static_assert(sizeof(USpaceCurveDeformationMechanic) == 0x02B0); // 688 bytes (0x000030 - 0x0002B0)
static_assert(sizeof(USpatialCurveDistanceMechanic) == 0x03F0); // 1008 bytes (0x000030 - 0x0003F0)
static_assert(sizeof(UTriangleSetComponent) == 0x0600); // 1536 bytes (0x000520 - 0x000600)
static_assert(sizeof(UUVLayoutPreviewProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UUVLayoutPreview) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UVoxelProperties) == 0x0078); // 120 bytes (0x000060 - 0x000078)
static_assert(sizeof(UWeightMapSetProperties) == 0x0080); // 128 bytes (0x000060 - 0x000080)
static_assert(sizeof(FRenderableTriangleVertex) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FRenderableTriangle) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputName) == 0x0070);
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputAsset) == 0x0080);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProperties) == 0x0098);
static_assert(offsetof(UBaseCreateFromSelectedTool, HandleSourcesProperties) == 0x00A0);
static_assert(offsetof(UBaseCreateFromSelectedTool, Preview) == 0x00A8);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProxies) == 0x00B0);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformGizmos) == 0x00C0);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformInitialScales) == 0x00D0);
static_assert(offsetof(UBaseMeshProcessingTool, Preview) == 0x00B0);
static_assert(offsetof(UBaseVoxelTool, VoxProperties) == 0x00F0);
static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformGizmo) == 0x00C8);
static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformProxy) == 0x00D0);
static_assert(offsetof(UConstructionPlaneMechanic, ClickToSetPlaneBehavior) == 0x00E8);
static_assert(offsetof(UCurveControlPointsMechanic, ClickBehavior) == 0x0040);
static_assert(offsetof(UCurveControlPointsMechanic, HoverBehavior) == 0x0048);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewGeometryActor) == 0x04E8);
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlPoints) == 0x04F0);
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlSegments) == 0x04F8);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewPoint) == 0x0500);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewSegment) == 0x0508);
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformProxy) == 0x0588);
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformGizmo) == 0x0590);
static_assert(offsetof(ULineSetComponent, LineMaterial) == 0x0520);
static_assert(offsetof(ULineSetComponent, Bounds) == 0x0528);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, PreviewMesh) == 0x0058);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, StandardMaterials) == 0x0060);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, OverrideMaterial) == 0x0070);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, WorkingMaterial) == 0x0078);
static_assert(offsetof(UMultiTransformer, GizmoManager) == 0x0070);
static_assert(offsetof(UMultiTransformer, TransformGizmo) == 0x00E0);
static_assert(offsetof(UMultiTransformer, TransformProxy) == 0x00E8);
static_assert(offsetof(UPointSetComponent, PointMaterial) == 0x0520);
static_assert(offsetof(UPointSetComponent, Bounds) == 0x0528);
static_assert(offsetof(UPreviewMesh, DynamicMeshComponent) == 0x0050);
static_assert(offsetof(UPolygonSelectionMechanic, Properties) == 0x0050);
static_assert(offsetof(UPolygonSelectionMechanic, PreviewGeometryActor) == 0x0360);
static_assert(offsetof(UPolygonSelectionMechanic, DrawnTriangleSetComponent) == 0x0368);
static_assert(offsetof(UPolygonSelectionMechanic, HighlightedFaceMaterial) == 0x03C0);
static_assert(offsetof(UPreviewGeometry, ParentActor) == 0x0028);
static_assert(offsetof(UPreviewGeometry, LineSets) == 0x0030);
static_assert(offsetof(USpaceCurveDeformationMechanic, ClickBehavior) == 0x0040);
static_assert(offsetof(USpaceCurveDeformationMechanic, HoverBehavior) == 0x0048);
static_assert(offsetof(USpaceCurveDeformationMechanic, TransformProperties) == 0x0068);
static_assert(offsetof(USpaceCurveDeformationMechanic, PreviewGeometryActor) == 0x0168);
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderPoints) == 0x0170);
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderSegments) == 0x0178);
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformProxy) == 0x01B8);
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformGizmo) == 0x01C0);
static_assert(offsetof(UTriangleSetComponent, Bounds) == 0x0520);
static_assert(offsetof(UUVLayoutPreviewProperties, Shift) == 0x0070);
static_assert(offsetof(UUVLayoutPreview, Settings) == 0x0028);
static_assert(offsetof(UUVLayoutPreview, PreviewMesh) == 0x0030);
static_assert(offsetof(UUVLayoutPreview, TriangleComponent) == 0x0038);
static_assert(offsetof(UUVLayoutPreview, BackingRectangleMaterial) == 0x0048);
static_assert(offsetof(UWeightMapSetProperties, WeightMap) == 0x0060);
static_assert(offsetof(UWeightMapSetProperties, WeightMapsList) == 0x0068);
static_assert(offsetof(FRenderableTriangleVertex, position) == 0x0000);
static_assert(offsetof(FRenderableTriangleVertex, UV) == 0x000C);
static_assert(offsetof(FRenderableTriangleVertex, Normal) == 0x0014);
static_assert(offsetof(FRenderableTriangleVertex, Color) == 0x0020);
static_assert(offsetof(FRenderableTriangle, Material) == 0x0000);
static_assert(offsetof(FRenderableTriangle, Vertex0) == 0x0008);
static_assert(offsetof(FRenderableTriangle, Vertex1) == 0x002C);
static_assert(offsetof(FRenderableTriangle, Vertex2) == 0x0050);
