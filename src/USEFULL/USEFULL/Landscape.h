// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AControlPointMeshActor : public AActor
{ 
public:
	class UControlPointMeshComponent*                  ControlPointMeshComponent;                                  // 0x0318   (0x0008)  
};

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0590 (1424 bytes) (0x000588 - 0x000590) align 16 MaxSize: 0x0590
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
public:
	float                                              VirtualTextureMainPassMaxDrawDistance;                      // 0x0588   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x058C   (0x0004)  MISSED
};

/// Class /Script/Landscape.GPUDrivenLandscapeBatchingComponent
/// Size: 0x0570 (1392 bytes) (0x0004F0 - 0x000570) align 16 MaxSize: 0x0570
class UGPUDrivenLandscapeBatchingComponent : public UPrimitiveComponent
{ 
public:
	FVector4                                           LandscapeBound;                                             // 0x04F0   (0x0010)  
	FVector                                            Origin;                                                     // 0x0500   (0x000C)  
	FVector                                            MinLocation;                                                // 0x050C   (0x000C)  
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0518   (0x0008)  
	class UMaterialInstanceConstant*                   MaterialInstance;                                           // 0x0520   (0x0008)  
	class UMaterialInstanceConstant*                   MaterialInstanceMobile;                                     // 0x0528   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x0530   (0x0010)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0540   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0544   (0x0004)  
	FVector2D                                          ComponentBaseMin;                                           // 0x0548   (0x0008)  
	FVector2D                                          ComponentBaseSize;                                          // 0x0550   (0x0008)  
	FIntPoint                                          ComponentBaseStart;                                         // 0x0558   (0x0008)  
	int32_t                                            FirstVirtualTextureLOD;                                     // 0x0560   (0x0004)  
	int32_t                                            LastVirtualTextureLOD;                                      // 0x0564   (0x0004)  
	bool                                               SetTransformButton;                                         // 0x0568   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0569   (0x0007)  MISSED
};

/// Struct /Script/Landscape.OffsetData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOffsetData
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
	bool                                               bUseDefault;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Class /Script/Landscape.GrassOffsetData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UGrassOffsetData : public UAssetUserData
{ 
public:
	TMap<class ULandscapeGrassType*, FOffsetData>      OffsetData;                                                 // 0x0028   (0x0050)  
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapeProxyMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x06A0 (1696 bytes) (0x000318 - 0x0006A0) align 8 MaxSize: 0x06A0
class ALandscapeProxy : public AActor
{ 
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                            // 0x0318   (0x0008)  
	FGuid                                              LandscapeGuid;                                              // 0x0320   (0x0010)  
	FIntPoint                                          LandscapeSectionOffset;                                     // 0x0330   (0x0008)  
	int32_t                                            MaxLODLevel;                                                // 0x0338   (0x0004)  
	float                                              LODDistanceFactor;                                          // 0x033C   (0x0004)  
	SDK_UNDEFINED(1,4989) /* TEnumAsByte<ELandscapeLODFalloff> */ __um(LODFalloff);                                // 0x0340   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0341   (0x0003)  MISSED
	float                                              ComponentScreenSizeToUseSubSections;                        // 0x0344   (0x0004)  
	float                                              LOD0ScreenSize;                                             // 0x0348   (0x0004)  
	float                                              LOD0DistributionSetting;                                    // 0x034C   (0x0004)  
	float                                              LODDistributionSetting;                                     // 0x0350   (0x0004)  
	float                                              TessellationComponentScreenSize;                            // 0x0354   (0x0004)  
	bool                                               UseTessellationComponentScreenSizeFalloff;                  // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0359   (0x0003)  MISSED
	float                                              TessellationComponentScreenSizeFalloff;                     // 0x035C   (0x0004)  
	int32_t                                            OccluderGeometryLOD;                                        // 0x0360   (0x0004)  
	bool                                               bUseAsOccluder;                                             // 0x0364   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0365   (0x0003)  MISSED
	int32_t                                            StaticLightingLOD;                                          // 0x0368   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x036C   (0x0004)  MISSED
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                        // 0x0370   (0x0008)  
	float                                              StreamingDistanceMultiplier;                                // 0x0378   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x037C   (0x0004)  MISSED
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0380   (0x0008)  
	bool                                               bEnableGrassHD;                                             // 0x0388   (0x0001)  
	unsigned char                                      UnknownData05_6[0x27];                                      // 0x0389   (0x0027)  MISSED
	class UMaterialInterface*                          LandscapeHoleMaterial;                                      // 0x03B0   (0x0008)  
	TArray<FLandscapeProxyMaterialOverride>            LandscapeMaterialsOverride;                                 // 0x03B8   (0x0010)  
	bool                                               bMeshHoles;                                                 // 0x03C8   (0x0001)  
	char                                               MeshHolesMaxLod;                                            // 0x03C9   (0x0001)  
	unsigned char                                      UnknownData06_6[0x6];                                       // 0x03CA   (0x0006)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x03D0   (0x0010)  
	int32_t                                            VirtualTextureNumLods;                                      // 0x03E0   (0x0004)  
	int32_t                                            VirtualTextureLodBias;                                      // 0x03E4   (0x0004)  
	SDK_UNDEFINED(1,4990) /* ERuntimeVirtualTextureMainPassType */ __um(VirtualTextureRenderPassType);             // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x03E9   (0x0003)  MISSED
	float                                              NegativeZBoundsExtension;                                   // 0x03EC   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x03F0   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x03F4   (0x0004)  MISSED
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                        // 0x03F8   (0x0010)  
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                    // 0x0408   (0x0010)  
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                    // 0x0418   (0x0010)  
	unsigned char                                      UnknownData09_6[0x64];                                      // 0x0428   (0x0064)  MISSED
	bool                                               bHasLandscapeGrass;                                         // 0x048C   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x048D   (0x0003)  MISSED
	float                                              StaticLightingResolution;                                   // 0x0490   (0x0004)  
	bool                                               CastShadow : 1;                                             // 0x0494:0 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x0494:1 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x0494:2 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x0495   (0x0003)  MISSED
	bool                                               bCastFarShadow : 1;                                         // 0x0498:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x0499   (0x0003)  MISSED
	bool                                               bCastHiddenShadow : 1;                                      // 0x049C:0 (0x0001)  
	bool                                               bHiddenShadowOnShadowCapture : 1;                           // 0x049C:1 (0x0001)  
	SDK_UNDEFINED(1,4991) /* EShadowCaptureLayer */    __um(ShadowCaptureLayer);                                   // 0x049D   (0x0001)  
	unsigned char                                      UnknownData13_6[0x2];                                       // 0x049E   (0x0002)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x04A0:0 (0x0001)  
	unsigned char                                      UnknownData14_3[0x3];                                       // 0x04A1   (0x0003)  MISSED
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x04A4:0 (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x04A5   (0x0001)  
	unsigned char                                      UnknownData15_6[0x2];                                       // 0x04A6   (0x0002)  MISSED
	bool                                               bUseMaterialPositionOffsetInStaticLighting : 1;             // 0x04A8:0 (0x0001)  
	unsigned char                                      UnknownData16_3[0x3];                                       // 0x04A9   (0x0003)  MISSED
	bool                                               bStaticShadowMaskOnly : 1;                                  // 0x04AC:0 (0x0001)  
	unsigned char                                      UnknownData17_3[0x3];                                       // 0x04AD   (0x0003)  MISSED
	bool                                               bForceUseSkyLightAsDiffuseGI : 1;                           // 0x04B0:0 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x04B0:1 (0x0001)  
	unsigned char                                      UnknownData18_5[0x3];                                       // 0x04B1   (0x0003)  MISSED
	SDK_UNDEFINED(1,4992) /* ERendererStencilMask */   __um(CustomDepthStencilWriteMask);                          // 0x04B4   (0x0001)  
	unsigned char                                      UnknownData19_6[0x3];                                       // 0x04B5   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x04B8   (0x0004)  
	float                                              LDMaxDrawDistance;                                          // 0x04BC   (0x0004)  
	bool                                               bForceUseSkyReflectionCaptureOnly : 1;                      // 0x04C0:0 (0x0001)  
	unsigned char                                      UnknownData20_5[0x3];                                       // 0x04C1   (0x0003)  MISSED
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x04C4   (0x0018)  
	int32_t                                            CollisionMipLevel;                                          // 0x04DC   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x04E0   (0x0004)  
	float                                              CollisionThickness;                                         // 0x04E4   (0x0004)  
	FBodyInstance                                      BodyInstance;                                               // 0x04E8   (0x0150)  
	bool                                               bGenerateOverlapEvents : 1;                                 // 0x0638:0 (0x0001)  
	bool                                               bBakeMaterialPositionOffsetIntoCollision : 1;               // 0x0638:1 (0x0001)  
	unsigned char                                      UnknownData21_5[0x3];                                       // 0x0639   (0x0003)  MISSED
	int32_t                                            ComponentSizeQuads;                                         // 0x063C   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0640   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0644   (0x0004)  
	bool                                               bUsedForNavigation : 1;                                     // 0x0648:0 (0x0001)  
	bool                                               bFillCollisionUnderLandscapeForNavmesh : 1;                 // 0x0648:1 (0x0001)  
	unsigned char                                      UnknownData22_5[0x3];                                       // 0x0649   (0x0003)  MISSED
	bool                                               bUseDynamicMaterialInstance;                                // 0x064C   (0x0001)  
	SDK_UNDEFINED(1,4993) /* ENavDataGatheringMode */  __um(NavigationGeometryGatheringMode);                      // 0x064D   (0x0001)  
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;               // 0x064E   (0x0001)  
	bool                                               bHasLayersContent;                                          // 0x064F   (0x0001)  
	TMap<class UTexture2D*, class ULandscapeWeightmapUsage*> WeightmapUsageMap;                                    // 0x0650   (0x0050)  


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x745b8d0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);                              // [0x745b7e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x745b700] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	// bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x745b5d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);                                         // [0x514e094] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x745b03c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	// void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);                        // [0x745af9c] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	// void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);                    // [0x4a2b0e8] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	// void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);                                     // [0x745aefc] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x745ae5c] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x745adbc] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x06A0 (1696 bytes) (0x0006A0 - 0x0006A0) align 8 MaxSize: 0x06A0
class ALandscape : public ALandscapeProxy
{ 
public:
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ALandscapeBlueprintBrushBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// void RequestLandscapeUpdate();                                                                                           // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
	// class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName); // [0x745ac30] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
	// void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize);   // [0x745aa90] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);                                              // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapeComponentMaterialOverride
{ 
	FPerPlatformInt                                    LODIndex;                                                   // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FWeightmapLayerAllocationInfo
{ 
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                  // 0x0000   (0x0008)  
	char                                               WeightmapTextureIndex;                                      // 0x0008   (0x0001)  
	char                                               WeightmapTextureChannel;                                    // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0720 (1824 bytes) (0x0004F0 - 0x000720) align 16 MaxSize: 0x0720
class ULandscapeComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            SectionBaseX;                                               // 0x04F0   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x04F4   (0x0004)  
	int32_t                                            ComponentSizeQuads;                                         // 0x04F8   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x04FC   (0x0004)  
	int32_t                                            NumSubsections;                                             // 0x0500   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0504   (0x0004)  MISSED
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0508   (0x0008)  
	class UMaterialInterface*                          OverrideHoleMaterial;                                       // 0x0510   (0x0008)  
	TArray<FLandscapeComponentMaterialOverride>        OverrideMaterials;                                          // 0x0518   (0x0010)  
	bool                                               bRemoveMobileWeightmap;                                     // 0x0528   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0529   (0x0007)  MISSED
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                          // 0x0530   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            MaterialInstancesDynamic;                                   // 0x0540   (0x0010)  
	TArray<int8_t>                                     LODIndexToMaterialIndex;                                    // 0x0550   (0x0010)  
	TArray<int8_t>                                     MaterialIndexToDisabledTessellationMaterial;                // 0x0560   (0x0010)  
	class UTexture2D*                                  XYOffsetmapTexture;                                         // 0x0570   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0578   (0x0008)  MISSED
	FVector4                                           WeightmapScaleBias;                                         // 0x0580   (0x0010)  
	float                                              WeightmapSubsectionOffset;                                  // 0x0590   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0594   (0x000C)  MISSED
	FVector4                                           HeightmapScaleBias;                                         // 0x05A0   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x05B0   (0x001C)  
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent*> CollisionComponent;                             // 0x05CC   (0x001C)  
	class UTexture2D*                                  HeightmapTexture;                                           // 0x05E8   (0x0008)  
	TArray<FWeightmapLayerAllocationInfo>              WeightmapLayerAllocations;                                  // 0x05F0   (0x0010)  
	TArray<class UTexture2D*>                          WeightmapTextures;                                          // 0x0600   (0x0010)  
	class ULandscapeLODStreamingProxy*                 LODStreamingProxy;                                          // 0x0610   (0x0008)  
	FGuid                                              MapBuildDataId;                                             // 0x0618   (0x0010)  
	TArray<FGuid>                                      IrrelevantLights;                                           // 0x0628   (0x0010)  
	int32_t                                            CollisionMipLevel;                                          // 0x0638   (0x0004)  
	int32_t                                            SimpleCollisionMipLevel;                                    // 0x063C   (0x0004)  
	float                                              NegativeZBoundsExtension;                                   // 0x0640   (0x0004)  
	float                                              PositiveZBoundsExtension;                                   // 0x0644   (0x0004)  
	float                                              StaticLightingResolution;                                   // 0x0648   (0x0004)  
	int32_t                                            ForcedLOD;                                                  // 0x064C   (0x0004)  
	int32_t                                            LODBias;                                                    // 0x0650   (0x0004)  
	FGuid                                              StateId;                                                    // 0x0654   (0x0010)  
	FGuid                                              BakedTextureMaterialGuid;                                   // 0x0664   (0x0010)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0674   (0x0004)  MISSED
	class UTexture2D*                                  GIBakedBaseColorTexture;                                    // 0x0678   (0x0008)  
	char                                               MobileBlendableLayerMask;                                   // 0x0680   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0681   (0x0007)  MISSED
	class UMaterialInterface*                          MobileMaterialInterface;                                    // 0x0688   (0x0008)  
	TArray<class UMaterialInterface*>                  MobileMaterialInterfaces;                                   // 0x0690   (0x0010)  
	TArray<class UTexture2D*>                          MobileWeightmapTextures;                                    // 0x06A0   (0x0010)  
	unsigned char                                      UnknownData06_7[0x70];                                      // 0x06B0   (0x0070)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                             // [0x745a9a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x745a890] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);             // [0x745a780] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class ALandscapeGizmoActor : public AActor
{ 
public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0368 (872 bytes) (0x000318 - 0x000368) align 8 MaxSize: 0x0368
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0318   (0x0050)  MISSED
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x04F0 (1264 bytes) (0x0004F0 - 0x0004F0) align 16 MaxSize: 0x04F0
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FGrassVariety
{ 
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0008   (0x0010)  
	FPerPlatformFloat                                  GrassDensity;                                               // 0x0018   (0x0004)  
	FPerPlatformFloat                                  MaxOffset;                                                  // 0x001C   (0x0004)  
	FPerPlatformFloat                                  MinGrassWeight;                                             // 0x0020   (0x0004)  
	FFloatInterval                                     SlopeRange;                                                 // 0x0024   (0x0008)  
	bool                                               bUseGrid;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              PlacementJitter;                                            // 0x0030   (0x0004)  
	FPerPlatformInt                                    StartCullDistance;                                          // 0x0034   (0x0008)  
	FPerPlatformInt                                    EndCullDistance;                                            // 0x003C   (0x0008)  
	float                                              FalloffExponent;                                            // 0x0044   (0x0004)  
	FFloatInterval                                     OffsetWeight;                                               // 0x0048   (0x0008)  
	FFloatInterval                                     OffsetRange;                                                // 0x0050   (0x0008)  
	FFloatInterval                                     EdgeScaleWeight;                                            // 0x0058   (0x0008)  
	FFloatInterval                                     EdgeScaleRatio;                                             // 0x0060   (0x0008)  
	int32_t                                            MinLOD;                                                     // 0x0068   (0x0004)  
	SDK_UNDEFINED(1,4994) /* EGrassScaling */          __um(Scaling);                                              // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	SDK_UNDEFINED(4,4995) /* EGrassPreservePriority */ __um(GrassPreservePriority);                                // 0x0070   (0x0004)  
	FFloatInterval                                     ScaleX;                                                     // 0x0074   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x007C   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0084   (0x0008)  
	bool                                               RandomRotation;                                             // 0x008C   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x008D   (0x0001)  
	bool                                               bUseLandscapeLightmap;                                      // 0x008E   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x008F   (0x0001)  
	bool                                               bReceivesDecals;                                            // 0x0090   (0x0001)  
	bool                                               bCastDynamicShadow;                                         // 0x0091   (0x0001)  
	bool                                               bCastShadow;                                                // 0x0092   (0x0001)  
	bool                                               bCastContactShadow;                                         // 0x0093   (0x0001)  
	bool                                               bKeepInstanceBufferCPUCopy;                                 // 0x0094   (0x0001)  
	bool                                               bForceUseSkyLightAsDiffuseGI;                               // 0x0095   (0x0001)  
	SDK_UNDEFINED(1,4996) /* TEnumAsByte<EIndirectLightingCacheQuality> */ __um(IndirectLightingCacheQuality);     // 0x0096   (0x0001)  
	bool                                               bReMergeInstancing;                                         // 0x0097   (0x0001)  
	bool                                               bHiddenShadowOnShadowCapture;                               // 0x0098   (0x0001)  
	SDK_UNDEFINED(1,4997) /* EShadowCaptureLayer */    __um(ShadowCaptureLayer);                                   // 0x0099   (0x0001)  
	bool                                               bGenerateShadowProxy;                                       // 0x009A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x009B   (0x0005)  MISSED
	class UStaticMesh*                                 ShadowProxyMesh;                                            // 0x00A0   (0x0008)  
	FVector                                            ShadowMeshScaleRatio;                                       // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	TArray<class UMaterialInterface*>                  ShadowProxyOverrideMaterials;                               // 0x00B8   (0x0010)  
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULandscapeGrassType : public UObject
{ 
public:
	TArray<FGrassVariety>                              GrassVarieties;                                             // 0x0028   (0x0010)  
	class UTexture*                                    LUT;                                                        // 0x0038   (0x0008)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UStaticMesh*                                 GrassMesh;                                                  // 0x0048   (0x0008)  
	float                                              GrassDensity;                                               // 0x0050   (0x0004)  
	float                                              PlacementJitter;                                            // 0x0054   (0x0004)  
	int32_t                                            StartCullDistance;                                          // 0x0058   (0x0004)  
	int32_t                                            EndCullDistance;                                            // 0x005C   (0x0004)  
	bool                                               RandomRotation;                                             // 0x0060   (0x0001)  
	bool                                               AlignToSurface;                                             // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x05E0 (1504 bytes) (0x0004F0 - 0x0005E0) align 16 MaxSize: 0x05D8
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeLayerInfoObject*>           ComponentLayerInfos;                                        // 0x04F0   (0x0010)  
	int32_t                                            SectionBaseX;                                               // 0x0500   (0x0004)  
	int32_t                                            SectionBaseY;                                               // 0x0504   (0x0004)  
	int32_t                                            CollisionSizeQuads;                                         // 0x0508   (0x0004)  
	float                                              CollisionScale;                                             // 0x050C   (0x0004)  
	int32_t                                            SimpleCollisionSizeQuads;                                   // 0x0510   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0514   (0x0004)  MISSED
	TArray<char>                                       CollisionQuadFlags;                                         // 0x0518   (0x0010)  
	FGuid                                              HeightfieldGuid;                                            // 0x0528   (0x0010)  
	FBox                                               CachedLocalBox;                                             // 0x0538   (0x001C)  
	TLazyObjectPtr<class ULandscapeComponent*>         RenderComponent;                                            // 0x0554   (0x001C)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0570   (0x0010)  MISSED
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                    // 0x0580   (0x0010)  
	unsigned char                                      UnknownData02_7[0x48];                                      // 0x0590   (0x0048)  MISSED


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// class ULandscapeComponent* GetRenderComponent();                                                                         // [0x745b3fc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x0210 (528 bytes) (0x000028 - 0x000210) align 8 MaxSize: 0x0210
class ULandscapeInfo : public UObject
{ 
public:
	TLazyObjectPtr<class ALandscape*>                  LandscapeActor;                                             // 0x0028   (0x001C)  
	FGuid                                              LandscapeGuid;                                              // 0x0044   (0x0010)  
	int32_t                                            ComponentSizeQuads;                                         // 0x0054   (0x0004)  
	int32_t                                            SubsectionSizeQuads;                                        // 0x0058   (0x0004)  
	int32_t                                            ComponentNumSubsections;                                    // 0x005C   (0x0004)  
	FVector                                            DrawScale;                                                  // 0x0060   (0x000C)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x006C   (0x00A4)  MISSED
	TArray<class ALandscapeStreamingProxy*>            Proxies;                                                    // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_7[0xF0];                                      // 0x0120   (0x00F0)  MISSED
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class ULandscapeInfoMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class ULandscapeLayerInfoObject : public UObject
{ 
public:
	FName                                              LayerName;                                                  // 0x0028   (0x0008)  
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x0030   (0x0008)  
	float                                              Hardness;                                                   // 0x0038   (0x0004)  
	FLinearColor                                       LayerUsageDebugColor;                                       // 0x003C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FLandscapeMaterialTextureStreamingInfo
{ 
	FName                                              TextureName;                                                // 0x0000   (0x0008)  
	float                                              TexelFactor;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x03C0 (960 bytes) (0x0003A8 - 0x0003C0) align 8 MaxSize: 0x03C0
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
public:
	TArray<FLandscapeMaterialTextureStreamingInfo>     TextureStreamingInfo;                                       // 0x03A8   (0x0010)  
	bool                                               bIsLayerThumbnail : 1;                                      // 0x03B8:0 (0x0001)  
	bool                                               bDisableTessellation : 1;                                   // 0x03B8:1 (0x0001)  
	bool                                               bMobile : 1;                                                // 0x03B8:2 (0x0001)  
	bool                                               bEditorToolUsage : 1;                                       // 0x03B8:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x03B9   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x05F0 (1520 bytes) (0x0005D8 - 0x0005F0) align 16 MaxSize: 0x05F0
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
public:
	FGuid                                              MeshGuid;                                                   // 0x05D8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x05E8   (0x0008)  MISSED
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class ALandscapeMeshProxyActor : public AActor
{ 
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                                // 0x0318   (0x0008)  
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x05B0 (1456 bytes) (0x000588 - 0x0005B0) align 16 MaxSize: 0x05B0
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
public:
	FGuid                                              LandscapeGuid;                                              // 0x0588   (0x0010)  
	TArray<FIntPoint>                                  ProxyComponentBases;                                        // 0x0598   (0x0010)  
	int8_t                                             ProxyLOD;                                                   // 0x05A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x05A9   (0x0007)  MISSED
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class ULandscapeSettings : public UDeveloperSettings
{ 
public:
	int32_t                                            MaxNumberOfLayers;                                          // 0x0038   (0x0004)  
	float                                              ReductionPercent;                                           // 0x003C   (0x0004)  
	float                                              ReductionError;                                             // 0x0040   (0x0004)  
	float                                              ProxyMeshReductionError;                                    // 0x0044   (0x0004)  
	float                                              ProxyMeshWithHoleReductionError;                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0520 (1312 bytes) (0x0004F0 - 0x000520) align 16 MaxSize: 0x0520
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
public:
	TArray<class ULandscapeSplineControlPoint*>        ControlPoints;                                              // 0x04F0   (0x0010)  
	TArray<class ULandscapeSplineSegment*>             Segments;                                                   // 0x0500   (0x0010)  
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                                // 0x0510   (0x0010)  


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x745bc0c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapeSplineConnection
{ 
	class ULandscapeSplineSegment*                     Segment;                                                    // 0x0000   (0x0008)  
	bool                                               End : 1;                                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 4 MaxSize: 0x0070
struct FLandscapeSplineInterpPoint
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            Left;                                                       // 0x000C   (0x000C)  
	FVector                                            Right;                                                      // 0x0018   (0x000C)  
	FVector                                            FalloffLeft;                                                // 0x0024   (0x000C)  
	FVector                                            FalloffRight;                                               // 0x0030   (0x000C)  
	FVector                                            LayerLeft;                                                  // 0x003C   (0x000C)  
	FVector                                            LayerRight;                                                 // 0x0048   (0x000C)  
	FVector                                            LayerFalloffLeft;                                           // 0x0054   (0x000C)  
	FVector                                            LayerFalloffRight;                                          // 0x0060   (0x000C)  
	float                                              StartEndFalloff;                                            // 0x006C   (0x0004)  
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class ULandscapeSplineControlPoint : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0028   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x0034   (0x000C)  
	float                                              Width;                                                      // 0x0040   (0x0004)  
	float                                              LayerWidthRatio;                                            // 0x0044   (0x0004)  
	float                                              SideFalloff;                                                // 0x0048   (0x0004)  
	float                                              LeftSideFalloffFactor;                                      // 0x004C   (0x0004)  
	float                                              RightSideFalloffFactor;                                     // 0x0050   (0x0004)  
	float                                              LeftSideLayerFalloffFactor;                                 // 0x0054   (0x0004)  
	float                                              RightSideLayerFalloffFactor;                                // 0x0058   (0x0004)  
	float                                              EndFalloff;                                                 // 0x005C   (0x0004)  
	TArray<FLandscapeSplineConnection>                 ConnectedSegments;                                          // 0x0060   (0x0010)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UControlPointMeshComponent*                  LocalMeshComponent;                                         // 0x00A0   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLandscapeSplineSegmentConnection
{ 
	class ULandscapeSplineControlPoint*                ControlPoint;                                               // 0x0000   (0x0008)  
	float                                              TangentLen;                                                 // 0x0008   (0x0004)  
	FName                                              SocketName;                                                 // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class ULandscapeSplineSegment : public UObject
{ 
public:
	FLandscapeSplineSegmentConnection                  Connections[2];                                             // 0x0028   (0x0030)  
	FInterpCurveVector                                 SplineInfo;                                                 // 0x0058   (0x0018)  
	TArray<FLandscapeSplineInterpPoint>                Points;                                                     // 0x0070   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0080   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                        // 0x00A0   (0x0010)  
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x06C0 (1728 bytes) (0x0006A0 - 0x0006C0) align 8 MaxSize: 0x06C0
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
public:
	TLazyObjectPtr<class ALandscape*>                  LandscapeActor;                                             // 0x06A0   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x06BC   (0x0004)  MISSED
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class ULandscapeSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/Landscape.LandscapeTessellationQualityManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULandscapeTessellationQualityManager : public UObject
{ 
public:
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class ULandscapeWeightmapUsage : public UObject
{ 
public:
	class ULandscapeComponent*                         ChannelUsage[4];                                            // 0x0028   (0x0020)  
	FGuid                                              LayerGuid;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeDisplacement
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class UMaterialExpressionLandscapeDisplacement : public UMaterialExpressionCustomOutput
{ 
public:
	FExpressionInput                                   LandscapeDisplacement;                                      // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   LandscapeTessLayerFactor;                                   // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGrassInput
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	class ULandscapeGrassType*                         GrassType;                                                  // 0x0008   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x001C   (0x000C)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FGrassInput>                                GrassTypes;                                                 // 0x0040   (0x0010)  
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 MaxSize: 0x0048
struct FLayerBlendInput
{ 
	FName                                              LayerName;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,4998) /* TEnumAsByte<ELandscapeLayerBlendType> */ __um(BlendType);                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FExpressionInput                                   LayerInput;                                                 // 0x000C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FExpressionInput                                   HeightInput;                                                // 0x0020   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x002C   (0x0008)  MISSED
	float                                              PreviewWeight;                                              // 0x0034   (0x0004)  
	FVector                                            ConstLayerInput;                                            // 0x0038   (0x000C)  
	float                                              ConstHeightInput;                                           // 0x0044   (0x0004)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
public:
	TArray<FLayerBlendInput>                           Layers;                                                     // 0x0040   (0x0010)  
	FGuid                                              ExpressionGUID;                                             // 0x0050   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
public:
	SDK_UNDEFINED(1,4999) /* TEnumAsByte<ETerrainCoordMappingType> */ __um(MappingType);                           // 0x0040   (0x0001)  
	SDK_UNDEFINED(1,5000) /* TEnumAsByte<ELandscapeCustomizedCoordType> */ __um(CustomUVType);                     // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              MappingScale;                                               // 0x0044   (0x0004)  
	float                                              MappingRotation;                                            // 0x0048   (0x0004)  
	float                                              MappingPanU;                                                // 0x004C   (0x0004)  
	float                                              MappingPanV;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
public:
	FName                                              ParameterName;                                              // 0x0040   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0048   (0x0004)  
	FGuid                                              ExpressionGUID;                                             // 0x004C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0088 (136 bytes) (0x000040 - 0x000088) align 8 MaxSize: 0x0088
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
public:
	FExpressionInput                                   LayerUsed;                                                  // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   LayerNotUsed;                                               // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	bool                                               PreviewUsed : 1;                                            // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FGuid                                              ExpressionGUID;                                             // 0x0074   (0x0010)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align 8 MaxSize: 0x0090
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
public:
	FExpressionInput                                   Base;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x004C   (0x0008)  MISSED
	FExpressionInput                                   Layer;                                                      // 0x0054   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0060   (0x0008)  MISSED
	FName                                              ParameterName;                                              // 0x0068   (0x0008)  
	float                                              PreviewWeight;                                              // 0x0070   (0x0004)  
	FVector                                            ConstBase;                                                  // 0x0074   (0x000C)  
	FGuid                                              ExpressionGUID;                                             // 0x0080   (0x0010)  
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPhysicalMaterialInput
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FExpressionInput                                   Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
public:
	TArray<FPhysicalMaterialInput>                     Inputs;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
public:
	FGuid                                              ExpressionGUID;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLandscapeLayerBrush
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FLandscapeLayer
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	bool                                               bVisible;                                                   // 0x0018   (0x0001)  
	bool                                               bLocked;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HeightmapAlpha;                                             // 0x001C   (0x0004)  
	float                                              WeightmapAlpha;                                             // 0x0020   (0x0004)  
	SDK_UNDEFINED(1,5001) /* TEnumAsByte<ELandscapeBlendMode> */ __um(BlendMode);                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	TArray<FLandscapeLayerBrush>                       Brushes;                                                    // 0x0028   (0x0010)  
	TMap<class ULandscapeLayerInfoObject*, bool>       WeightmapLayerAllocationBlend;                              // 0x0038   (0x0050)  
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FHeightmapData
{ 
	class UTexture2D*                                  Texture;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FWeightmapData
{ 
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0000   (0x0010)  
	TArray<FWeightmapLayerAllocationInfo>              LayerAllocations;                                           // 0x0010   (0x0010)  
	TArray<class ULandscapeWeightmapUsage*>            TextureUsages;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLandscapeLayerComponentData
{ 
	FHeightmapData                                     HeightmapData;                                              // 0x0000   (0x0008)  
	FWeightmapData                                     WeightmapData;                                              // 0x0008   (0x0030)  
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLandscapeEditToolRenderData
{ 
	class UMaterialInterface*                          ToolMaterial;                                               // 0x0000   (0x0008)  
	class UMaterialInterface*                          GizmoMaterial;                                              // 0x0008   (0x0008)  
	int32_t                                            SelectedType;                                               // 0x0010   (0x0004)  
	int32_t                                            DebugChannelR;                                              // 0x0014   (0x0004)  
	int32_t                                            DebugChannelG;                                              // 0x0018   (0x0004)  
	int32_t                                            DebugChannelB;                                              // 0x001C   (0x0004)  
	class UTexture2D*                                  DataTexture;                                                // 0x0020   (0x0008)  
	class UTexture2D*                                  LayerContributionTexture;                                   // 0x0028   (0x0008)  
	class UTexture2D*                                  DirtyTexture;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGizmoSelectData
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLandscapeInfoLayerSettings
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
	FName                                              LayerName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLandscapeImportLayerInfo
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FLandscapeLayerStruct
{ 
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                               // 0x0000   (0x0008)  
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FLandscapeEditorLayerSettings
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FForeignWorldSplineData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FForeignSplineSegmentData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FForeignControlPointData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLandscapeSplineMeshEntry
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                          // 0x0008   (0x0010)  
	bool                                               bCenterH : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector2D                                          CenterAdjust;                                               // 0x001C   (0x0008)  
	bool                                               bScaleToWidth : 1;                                          // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0028   (0x000C)  
	SDK_UNDEFINED(1,5002) /* TEnumAsByte<LandscapeSplineMeshOrientation> */ __um(Orientation);                     // 0x0034   (0x0001)  
	SDK_UNDEFINED(1,5003) /* TEnumAsByte<ESplineMeshAxis> */ __um(ForwardAxis);                                    // 0x0035   (0x0001)  
	SDK_UNDEFINED(1,5004) /* TEnumAsByte<ESplineMeshAxis> */ __um(UpAxis);                                         // 0x0036   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1];                                       // 0x0037   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AControlPointMeshActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UControlPointMeshComponent) == 0x0590); // 1424 bytes (0x000588 - 0x000590)
static_assert(sizeof(UGPUDrivenLandscapeBatchingComponent) == 0x0570); // 1392 bytes (0x0004F0 - 0x000570)
static_assert(sizeof(FOffsetData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UGrassOffsetData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FLandscapeProxyMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ALandscapeProxy) == 0x06A0); // 1696 bytes (0x000318 - 0x0006A0)
static_assert(sizeof(ALandscape) == 0x06A0); // 1696 bytes (0x0006A0 - 0x0006A0)
static_assert(sizeof(ALandscapeBlueprintBrushBase) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(ULandscapeLODStreamingProxy) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(FLandscapeComponentMaterialOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWeightmapLayerAllocationInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ULandscapeComponent) == 0x0720); // 1824 bytes (0x0004F0 - 0x000720)
static_assert(sizeof(ALandscapeGizmoActor) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(ALandscapeGizmoActiveActor) == 0x0368); // 872 bytes (0x000318 - 0x000368)
static_assert(sizeof(ULandscapeGizmoRenderComponent) == 0x04F0); // 1264 bytes (0x0004F0 - 0x0004F0)
static_assert(sizeof(FGrassVariety) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(ULandscapeGrassType) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(ULandscapeHeightfieldCollisionComponent) == 0x05D8); // 1496 bytes (0x0004F0 - 0x0005D8)
static_assert(sizeof(ULandscapeInfo) == 0x0210); // 528 bytes (0x000028 - 0x000210)
static_assert(sizeof(ULandscapeInfoMap) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(ULandscapeLayerInfoObject) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FLandscapeMaterialTextureStreamingInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ULandscapeMaterialInstanceConstant) == 0x03C0); // 960 bytes (0x0003A8 - 0x0003C0)
static_assert(sizeof(ULandscapeMeshCollisionComponent) == 0x05F0); // 1520 bytes (0x0005D8 - 0x0005F0)
static_assert(sizeof(ALandscapeMeshProxyActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(ULandscapeMeshProxyComponent) == 0x05B0); // 1456 bytes (0x000588 - 0x0005B0)
static_assert(sizeof(ULandscapeSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(ULandscapeSplinesComponent) == 0x0520); // 1312 bytes (0x0004F0 - 0x000520)
static_assert(sizeof(FLandscapeSplineConnection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeSplineInterpPoint) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(ULandscapeSplineControlPoint) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FLandscapeSplineSegmentConnection) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(ULandscapeSplineSegment) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(ALandscapeStreamingProxy) == 0x06C0); // 1728 bytes (0x0006A0 - 0x0006C0)
static_assert(sizeof(ULandscapeSubsystem) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(ULandscapeTessellationQualityManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULandscapeWeightmapUsage) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMaterialExpressionLandscapeDisplacement) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(FGrassInput) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMaterialExpressionLandscapeGrassOutput) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FLayerBlendInput) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UMaterialExpressionLandscapeLayerBlend) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionLandscapeLayerCoords) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSample) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMaterialExpressionLandscapeLayerSwitch) == 0x0088); // 136 bytes (0x000040 - 0x000088)
static_assert(sizeof(UMaterialExpressionLandscapeLayerWeight) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(FPhysicalMaterialInput) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMaterialExpressionLandscapePhysicalMaterialOutput) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMaterialExpressionLandscapeVisibilityMask) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FLandscapeLayerBrush) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayer) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FHeightmapData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWeightmapData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLandscapeLayerComponentData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLandscapeEditToolRenderData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGizmoSelectData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FLandscapeInfoLayerSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLandscapeImportLayerInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeLayerStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLandscapeEditorLayerSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignWorldSplineData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignSplineSegmentData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FForeignControlPointData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FLandscapeSplineMeshEntry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(AControlPointMeshActor, ControlPointMeshComponent) == 0x0318);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, LandscapeBound) == 0x04F0);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, Origin) == 0x0500);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, MinLocation) == 0x050C);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, LandscapeMaterial) == 0x0518);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, MaterialInstance) == 0x0520);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, MaterialInstanceMobile) == 0x0528);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, LandscapeGuid) == 0x0530);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, ComponentBaseMin) == 0x0548);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, ComponentBaseSize) == 0x0550);
static_assert(offsetof(UGPUDrivenLandscapeBatchingComponent, ComponentBaseStart) == 0x0558);
static_assert(offsetof(FOffsetData, Data) == 0x0000);
static_assert(offsetof(UGrassOffsetData, OffsetData) == 0x0028);
static_assert(offsetof(FLandscapeProxyMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeProxyMaterialOverride, Material) == 0x0008);
static_assert(offsetof(ALandscapeProxy, SplineComponent) == 0x0318);
static_assert(offsetof(ALandscapeProxy, LandscapeGuid) == 0x0320);
static_assert(offsetof(ALandscapeProxy, LandscapeSectionOffset) == 0x0330);
static_assert(offsetof(ALandscapeProxy, DefaultPhysMaterial) == 0x0370);
static_assert(offsetof(ALandscapeProxy, LandscapeMaterial) == 0x0380);
static_assert(offsetof(ALandscapeProxy, LandscapeHoleMaterial) == 0x03B0);
static_assert(offsetof(ALandscapeProxy, LandscapeMaterialsOverride) == 0x03B8);
static_assert(offsetof(ALandscapeProxy, RuntimeVirtualTextures) == 0x03D0);
static_assert(offsetof(ALandscapeProxy, LandscapeComponents) == 0x03F8);
static_assert(offsetof(ALandscapeProxy, CollisionComponents) == 0x0408);
static_assert(offsetof(ALandscapeProxy, FoliageComponents) == 0x0418);
static_assert(offsetof(ALandscapeProxy, LightingChannels) == 0x04A5);
static_assert(offsetof(ALandscapeProxy, LightmassSettings) == 0x04C4);
static_assert(offsetof(ALandscapeProxy, BodyInstance) == 0x04E8);
static_assert(offsetof(ALandscapeProxy, WeightmapUsageMap) == 0x0650);
static_assert(offsetof(FLandscapeComponentMaterialOverride, LODIndex) == 0x0000);
static_assert(offsetof(FLandscapeComponentMaterialOverride, Material) == 0x0008);
static_assert(offsetof(FWeightmapLayerAllocationInfo, LayerInfo) == 0x0000);
static_assert(offsetof(ULandscapeComponent, OverrideMaterial) == 0x0508);
static_assert(offsetof(ULandscapeComponent, OverrideHoleMaterial) == 0x0510);
static_assert(offsetof(ULandscapeComponent, OverrideMaterials) == 0x0518);
static_assert(offsetof(ULandscapeComponent, MaterialInstances) == 0x0530);
static_assert(offsetof(ULandscapeComponent, MaterialInstancesDynamic) == 0x0540);
static_assert(offsetof(ULandscapeComponent, LODIndexToMaterialIndex) == 0x0550);
static_assert(offsetof(ULandscapeComponent, MaterialIndexToDisabledTessellationMaterial) == 0x0560);
static_assert(offsetof(ULandscapeComponent, XYOffsetmapTexture) == 0x0570);
static_assert(offsetof(ULandscapeComponent, WeightmapScaleBias) == 0x0580);
static_assert(offsetof(ULandscapeComponent, HeightmapScaleBias) == 0x05A0);
static_assert(offsetof(ULandscapeComponent, CachedLocalBox) == 0x05B0);
static_assert(offsetof(ULandscapeComponent, CollisionComponent) == 0x05CC);
static_assert(offsetof(ULandscapeComponent, HeightmapTexture) == 0x05E8);
static_assert(offsetof(ULandscapeComponent, WeightmapLayerAllocations) == 0x05F0);
static_assert(offsetof(ULandscapeComponent, WeightmapTextures) == 0x0600);
static_assert(offsetof(ULandscapeComponent, LODStreamingProxy) == 0x0610);
static_assert(offsetof(ULandscapeComponent, MapBuildDataId) == 0x0618);
static_assert(offsetof(ULandscapeComponent, IrrelevantLights) == 0x0628);
static_assert(offsetof(ULandscapeComponent, StateId) == 0x0654);
static_assert(offsetof(ULandscapeComponent, BakedTextureMaterialGuid) == 0x0664);
static_assert(offsetof(ULandscapeComponent, GIBakedBaseColorTexture) == 0x0678);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterface) == 0x0688);
static_assert(offsetof(ULandscapeComponent, MobileMaterialInterfaces) == 0x0690);
static_assert(offsetof(ULandscapeComponent, MobileWeightmapTextures) == 0x06A0);
static_assert(offsetof(FGrassVariety, GrassMesh) == 0x0000);
static_assert(offsetof(FGrassVariety, OverrideMaterials) == 0x0008);
static_assert(offsetof(FGrassVariety, GrassDensity) == 0x0018);
static_assert(offsetof(FGrassVariety, MaxOffset) == 0x001C);
static_assert(offsetof(FGrassVariety, MinGrassWeight) == 0x0020);
static_assert(offsetof(FGrassVariety, SlopeRange) == 0x0024);
static_assert(offsetof(FGrassVariety, StartCullDistance) == 0x0034);
static_assert(offsetof(FGrassVariety, EndCullDistance) == 0x003C);
static_assert(offsetof(FGrassVariety, OffsetWeight) == 0x0048);
static_assert(offsetof(FGrassVariety, OffsetRange) == 0x0050);
static_assert(offsetof(FGrassVariety, EdgeScaleWeight) == 0x0058);
static_assert(offsetof(FGrassVariety, EdgeScaleRatio) == 0x0060);
static_assert(offsetof(FGrassVariety, ScaleX) == 0x0074);
static_assert(offsetof(FGrassVariety, ScaleY) == 0x007C);
static_assert(offsetof(FGrassVariety, ScaleZ) == 0x0084);
static_assert(offsetof(FGrassVariety, LightingChannels) == 0x008F);
static_assert(offsetof(FGrassVariety, ShadowProxyMesh) == 0x00A0);
static_assert(offsetof(FGrassVariety, ShadowMeshScaleRatio) == 0x00A8);
static_assert(offsetof(FGrassVariety, ShadowProxyOverrideMaterials) == 0x00B8);
static_assert(offsetof(ULandscapeGrassType, GrassVarieties) == 0x0028);
static_assert(offsetof(ULandscapeGrassType, LUT) == 0x0038);
static_assert(offsetof(ULandscapeGrassType, GrassMesh) == 0x0048);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos) == 0x04F0);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags) == 0x0518);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid) == 0x0528);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CachedLocalBox) == 0x0538);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, RenderComponent) == 0x0554);
static_assert(offsetof(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials) == 0x0580);
static_assert(offsetof(ULandscapeInfo, LandscapeActor) == 0x0028);
static_assert(offsetof(ULandscapeInfo, LandscapeGuid) == 0x0044);
static_assert(offsetof(ULandscapeInfo, DrawScale) == 0x0060);
static_assert(offsetof(ULandscapeInfo, Proxies) == 0x0110);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerName) == 0x0028);
static_assert(offsetof(ULandscapeLayerInfoObject, PhysMaterial) == 0x0030);
static_assert(offsetof(ULandscapeLayerInfoObject, LayerUsageDebugColor) == 0x003C);
static_assert(offsetof(FLandscapeMaterialTextureStreamingInfo, TextureName) == 0x0000);
static_assert(offsetof(ULandscapeMaterialInstanceConstant, TextureStreamingInfo) == 0x03A8);
static_assert(offsetof(ULandscapeMeshCollisionComponent, MeshGuid) == 0x05D8);
static_assert(offsetof(ALandscapeMeshProxyActor, LandscapeMeshProxyComponent) == 0x0318);
static_assert(offsetof(ULandscapeMeshProxyComponent, LandscapeGuid) == 0x0588);
static_assert(offsetof(ULandscapeMeshProxyComponent, ProxyComponentBases) == 0x0598);
static_assert(offsetof(ULandscapeSplinesComponent, ControlPoints) == 0x04F0);
static_assert(offsetof(ULandscapeSplinesComponent, Segments) == 0x0500);
static_assert(offsetof(ULandscapeSplinesComponent, CookedForeignMeshComponents) == 0x0510);
static_assert(offsetof(FLandscapeSplineConnection, Segment) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Center) == 0x0000);
static_assert(offsetof(FLandscapeSplineInterpPoint, Left) == 0x000C);
static_assert(offsetof(FLandscapeSplineInterpPoint, Right) == 0x0018);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffLeft) == 0x0024);
static_assert(offsetof(FLandscapeSplineInterpPoint, FalloffRight) == 0x0030);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerLeft) == 0x003C);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerRight) == 0x0048);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffLeft) == 0x0054);
static_assert(offsetof(FLandscapeSplineInterpPoint, LayerFalloffRight) == 0x0060);
static_assert(offsetof(ULandscapeSplineControlPoint, Location) == 0x0028);
static_assert(offsetof(ULandscapeSplineControlPoint, Rotation) == 0x0034);
static_assert(offsetof(ULandscapeSplineControlPoint, ConnectedSegments) == 0x0060);
static_assert(offsetof(ULandscapeSplineControlPoint, Points) == 0x0070);
static_assert(offsetof(ULandscapeSplineControlPoint, Bounds) == 0x0080);
static_assert(offsetof(ULandscapeSplineControlPoint, LocalMeshComponent) == 0x00A0);
static_assert(offsetof(FLandscapeSplineSegmentConnection, ControlPoint) == 0x0000);
static_assert(offsetof(FLandscapeSplineSegmentConnection, SocketName) == 0x000C);
static_assert(offsetof(ULandscapeSplineSegment, Connections) == 0x0028);
static_assert(offsetof(ULandscapeSplineSegment, SplineInfo) == 0x0058);
static_assert(offsetof(ULandscapeSplineSegment, Points) == 0x0070);
static_assert(offsetof(ULandscapeSplineSegment, Bounds) == 0x0080);
static_assert(offsetof(ULandscapeSplineSegment, LocalMeshComponents) == 0x00A0);
static_assert(offsetof(ALandscapeStreamingProxy, LandscapeActor) == 0x06A0);
static_assert(offsetof(ULandscapeWeightmapUsage, ChannelUsage) == 0x0028);
static_assert(offsetof(ULandscapeWeightmapUsage, LayerGuid) == 0x0048);
static_assert(offsetof(UMaterialExpressionLandscapeDisplacement, LandscapeDisplacement) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeDisplacement, LandscapeTessLayerFactor) == 0x0054);
static_assert(offsetof(FGrassInput, Name) == 0x0000);
static_assert(offsetof(FGrassInput, GrassType) == 0x0008);
static_assert(offsetof(FGrassInput, Input) == 0x0010);
static_assert(offsetof(UMaterialExpressionLandscapeGrassOutput, GrassTypes) == 0x0040);
static_assert(offsetof(FLayerBlendInput, LayerName) == 0x0000);
static_assert(offsetof(FLayerBlendInput, LayerInput) == 0x000C);
static_assert(offsetof(FLayerBlendInput, HeightInput) == 0x0020);
static_assert(offsetof(FLayerBlendInput, ConstLayerInput) == 0x0038);
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, Layers) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerBlend, ExpressionGUID) == 0x0050);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ParameterName) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSample, ExpressionGUID) == 0x004C);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerUsed) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed) == 0x0054);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ParameterName) == 0x0068);
static_assert(offsetof(UMaterialExpressionLandscapeLayerSwitch, ExpressionGUID) == 0x0074);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Base) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, Layer) == 0x0054);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ParameterName) == 0x0068);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ConstBase) == 0x0074);
static_assert(offsetof(UMaterialExpressionLandscapeLayerWeight, ExpressionGUID) == 0x0080);
static_assert(offsetof(FPhysicalMaterialInput, PhysicalMaterial) == 0x0000);
static_assert(offsetof(FPhysicalMaterialInput, Input) == 0x0008);
static_assert(offsetof(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs) == 0x0040);
static_assert(offsetof(UMaterialExpressionLandscapeVisibilityMask, ExpressionGUID) == 0x0040);
static_assert(offsetof(FLandscapeLayer, Guid) == 0x0000);
static_assert(offsetof(FLandscapeLayer, Name) == 0x0010);
static_assert(offsetof(FLandscapeLayer, Brushes) == 0x0028);
static_assert(offsetof(FLandscapeLayer, WeightmapLayerAllocationBlend) == 0x0038);
static_assert(offsetof(FHeightmapData, Texture) == 0x0000);
static_assert(offsetof(FWeightmapData, Textures) == 0x0000);
static_assert(offsetof(FWeightmapData, LayerAllocations) == 0x0010);
static_assert(offsetof(FWeightmapData, TextureUsages) == 0x0020);
static_assert(offsetof(FLandscapeLayerComponentData, HeightmapData) == 0x0000);
static_assert(offsetof(FLandscapeLayerComponentData, WeightmapData) == 0x0008);
static_assert(offsetof(FLandscapeEditToolRenderData, ToolMaterial) == 0x0000);
static_assert(offsetof(FLandscapeEditToolRenderData, GizmoMaterial) == 0x0008);
static_assert(offsetof(FLandscapeEditToolRenderData, DataTexture) == 0x0020);
static_assert(offsetof(FLandscapeEditToolRenderData, LayerContributionTexture) == 0x0028);
static_assert(offsetof(FLandscapeEditToolRenderData, DirtyTexture) == 0x0030);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeInfoLayerSettings, LayerName) == 0x0008);
static_assert(offsetof(FLandscapeLayerStruct, LayerInfoObj) == 0x0000);
static_assert(offsetof(FLandscapeSplineMeshEntry, Mesh) == 0x0000);
static_assert(offsetof(FLandscapeSplineMeshEntry, MaterialOverrides) == 0x0008);
static_assert(offsetof(FLandscapeSplineMeshEntry, CenterAdjust) == 0x001C);
static_assert(offsetof(FLandscapeSplineMeshEntry, Scale) == 0x0028);
