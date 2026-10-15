// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFSceneryRuntime.LandscapeComponentDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULandscapeComponentDataBase : public UAssetUserData
{ 
public:
};

/// Class /Script/MFSceneryRuntime.IndexMapData
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UIndexMapData : public ULandscapeComponentDataBase
{ 
public:
	class UTexture2D*                                  IndexMap;                                                   // 0x0028   (0x0008)  
	FLinearColor                                       LandscapeInfo;                                              // 0x0030   (0x0010)  
};

/// Class /Script/MFSceneryRuntime.PigmentData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPigmentData : public ULandscapeComponentDataBase
{ 
public:
	class UTexture2D*                                  PigmentMap;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/MFSceneryRuntime.HeightMapComponentData
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UHeightMapComponentData : public ULandscapeComponentDataBase
{ 
public:
	class UTexture2D*                                  HeightMap;                                                  // 0x0028   (0x0008)  
	FVector                                            TexOffset;                                                  // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/MFSceneryRuntime.IndexMapStreamingLoadSubsystem
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UIndexMapStreamingLoadSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0030   (0x0078)  MISSED
};

/// Struct /Script/MFSceneryRuntime.MFSceneryLayerParams
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FMFSceneryLayerParams
{ 
	FColor                                             ColorTint;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/MFSceneryRuntime.MFSceneryStreamingAsset
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMFSceneryStreamingAsset
{ 
	class UTextureRenderTarget2DArray*                 StreamingTexture;                                           // 0x0000   (0x0008)  
	class UClass*                                      StreamingTextureType;                                       // 0x0008   (0x0008)  
};

/// Class /Script/MFSceneryRuntime.MFSceneryRuntimeSettingsActor
/// Size: 0x1370 (4976 bytes) (0x000318 - 0x001370) align 16 MaxSize: 0x1370
class AMFSceneryRuntimeSettingsActor : public AActor
{ 
public:
	float                                              LayerNum;                                                   // 0x0318   (0x0004)  
	int32_t                                            FadeoutDistance;                                            // 0x031C   (0x0004)  
	bool                                               bOverrideConsoleVarInEditor;                                // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0321   (0x0003)  MISSED
	int32_t                                            MaxTessellationFactor;                                      // 0x0324   (0x0004)  
	bool                                               bUseGlobalTessFactor;                                       // 0x0328   (0x0001)  
	bool                                               bUsePerLayerTessFactor;                                     // 0x0329   (0x0001)  
	SDK_UNDEFINED(1,5118) /* ETessellationLayerQuality */ __um(TessellationLayerQuality);                          // 0x032A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x032B   (0x0001)  MISSED
	float                                              GlobalTessellationFactorInner;                              // 0x032C   (0x0004)  
	float                                              GlobalTessellationFactorOuter;                              // 0x0330   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0334   (0x0004)  MISSED
	TArray<FMFSceneryLayerParams>                      LayerParams;                                                // 0x0338   (0x0010)  
	class UMaterialParameterCollection*                IndexMapMPC;                                                // 0x0348   (0x0008)  
	class UTextureRenderTarget2D*                      IndirectTexture;                                            // 0x0350   (0x0008)  
	TArray<FMFSceneryStreamingAsset>                   StreamingAssets;                                            // 0x0358   (0x0010)  
	unsigned char                                      UnknownData03_7[0x1008];                                    // 0x0368   (0x1008)  MISSED
};

/// Class /Script/MFSceneryRuntime.TestLoadLandscape
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTestLoadLandscape : public UObject
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(ULandscapeComponentDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UIndexMapData) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPigmentData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UHeightMapComponentData) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UIndexMapStreamingLoadSubsystem) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FMFSceneryLayerParams) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMFSceneryStreamingAsset) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMFSceneryRuntimeSettingsActor) == 0x1370); // 4976 bytes (0x000318 - 0x001370)
static_assert(sizeof(UTestLoadLandscape) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(UIndexMapData, IndexMap) == 0x0028);
static_assert(offsetof(UIndexMapData, LandscapeInfo) == 0x0030);
static_assert(offsetof(UPigmentData, PigmentMap) == 0x0028);
static_assert(offsetof(UHeightMapComponentData, HeightMap) == 0x0028);
static_assert(offsetof(UHeightMapComponentData, TexOffset) == 0x0030);
static_assert(offsetof(FMFSceneryLayerParams, ColorTint) == 0x0000);
static_assert(offsetof(FMFSceneryStreamingAsset, StreamingTexture) == 0x0000);
static_assert(offsetof(FMFSceneryStreamingAsset, StreamingTextureType) == 0x0008);
static_assert(offsetof(AMFSceneryRuntimeSettingsActor, LayerParams) == 0x0338);
static_assert(offsetof(AMFSceneryRuntimeSettingsActor, IndexMapMPC) == 0x0348);
static_assert(offsetof(AMFSceneryRuntimeSettingsActor, IndirectTexture) == 0x0350);
static_assert(offsetof(AMFSceneryRuntimeSettingsActor, StreamingAssets) == 0x0358);
