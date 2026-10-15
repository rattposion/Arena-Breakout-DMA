// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MFClimateRuntime
/// dependency: SGFramework

#pragma pack(push, 0x1)

/// Class /Script/UAMFClimateRuntime.SGCameraMaterial_RainDrop
/// Size: 0x0750 (1872 bytes) (0x000740 - 0x000750) align 16 MaxSize: 0x0750
class USGCameraMaterial_RainDrop : public USGCameraMaterial
{ 
public:
	float                                              ShowThreshold;                                              // 0x0740   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0744   (0x000C)  MISSED


	/// Functions
	// Function /Script/UAMFClimateRuntime.SGCameraMaterial_RainDrop.OnRainWeatherChange
	// void OnRainWeatherChange();                                                                                              // [0x1740c8c] Final|Native|Public  
};

/// Class /Script/UAMFClimateRuntime.UAClimateExtraParametersControlComponent
/// Size: 0x0130 (304 bytes) (0x0000F8 - 0x000130) align 8 MaxSize: 0x0130
class UUAClimateExtraParametersControlComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00F8   (0x0008)  MISSED
	class UMFClimateSunMoonSceneLightComponent*        SunMoonLightComponent;                                      // 0x0100   (0x0008)  
	bool                                               bDebugDisableControlDawnSceneLightInfo;                     // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              Cloud2DDetailsTiling;                                       // 0x010C   (0x0004)  
	float                                              Cloud2DDetailsWarping;                                      // 0x0110   (0x0004)  
	float                                              Cloud2DOverallStrength;                                     // 0x0114   (0x0004)  
	FLinearColor                                       SkyAndCloudTint;                                            // 0x0118   (0x0010)  
	class UMaterialParameterCollection*                MPC;                                                        // 0x0128   (0x0008)  
};

/// Class /Script/UAMFClimateRuntime.UAMFClimateRain
/// Size: 0x0540 (1344 bytes) (0x000530 - 0x000540) align 16 MaxSize: 0x0540
class AUAMFClimateRain : public AMFClimateParticleRain
{ 
public:
	SDK_UNDEFINED(16,3999) /* FMulticastInlineDelegate */ __um(On1PRainStateChange);                               // 0x0530   (0x0010)  
};

/// Struct /Script/UAMFClimateRuntime.CubemapData
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FCubemapData
{ 
	float                                              TODTime;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TWeakObjectPtr<class UTextureCube*>                CubemapTexture;                                             // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	float                                              AverageBrightness;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<float>                                      IrradianceEnvironmentMapFloats;                             // 0x0038   (0x0010)  
	unsigned char                                      UnknownData03_7[0x98];                                      // 0x0048   (0x0098)  MISSED
};

/// Struct /Script/UAMFClimateRuntime.CubemapDataCollection
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCubemapDataCollection
{ 
	int32_t                                            ConfigID;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FCubemapData>                               DataArray;                                                  // 0x0008   (0x0010)  
};

/// Class /Script/UAMFClimateRuntime.UASkyLightCubemapBakerComponent
/// Size: 0x0158 (344 bytes) (0x000110 - 0x000158) align 8 MaxSize: 0x0158
class UUASkyLightCubemapBakerComponent : public UMFClimateComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0110   (0x0018)  MISSED
	TArray<float>                                      SceneCapturingTODTimes;                                     // 0x0128   (0x0010)  
	class ASkyLight*                                   SkyLight;                                                   // 0x0138   (0x0008)  
	TArray<FCubemapDataCollection>                     CubemapDataCollections;                                     // 0x0140   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0150   (0x0008)  MISSED
};

/// Class /Script/UAMFClimateRuntime.UASkyLightCubemapUpdaterComponent
/// Size: 0x0120 (288 bytes) (0x000110 - 0x000120) align 8 MaxSize: 0x0120
class UUASkyLightCubemapUpdaterComponent : public UMFClimateComponent
{ 
public:
	class ASkyLight*                                   SkyLight;                                                   // 0x0110   (0x0008)  
	class UTextureCube*                                SkylightCubemap;                                            // 0x0118   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(USGCameraMaterial_RainDrop) == 0x0750); // 1872 bytes (0x000740 - 0x000750)
static_assert(sizeof(UUAClimateExtraParametersControlComponent) == 0x0130); // 304 bytes (0x0000F8 - 0x000130)
static_assert(sizeof(AUAMFClimateRain) == 0x0540); // 1344 bytes (0x000530 - 0x000540)
static_assert(sizeof(FCubemapData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FCubemapDataCollection) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UUASkyLightCubemapBakerComponent) == 0x0158); // 344 bytes (0x000110 - 0x000158)
static_assert(sizeof(UUASkyLightCubemapUpdaterComponent) == 0x0120); // 288 bytes (0x000110 - 0x000120)
static_assert(offsetof(UUAClimateExtraParametersControlComponent, SunMoonLightComponent) == 0x0100);
static_assert(offsetof(UUAClimateExtraParametersControlComponent, SkyAndCloudTint) == 0x0118);
static_assert(offsetof(UUAClimateExtraParametersControlComponent, MPC) == 0x0128);
static_assert(offsetof(FCubemapData, CubemapTexture) == 0x0008);
static_assert(offsetof(FCubemapData, IrradianceEnvironmentMapFloats) == 0x0038);
static_assert(offsetof(FCubemapDataCollection, DataArray) == 0x0008);
static_assert(offsetof(UUASkyLightCubemapBakerComponent, SceneCapturingTODTimes) == 0x0128);
static_assert(offsetof(UUASkyLightCubemapBakerComponent, SkyLight) == 0x0138);
static_assert(offsetof(UUASkyLightCubemapBakerComponent, CubemapDataCollections) == 0x0140);
static_assert(offsetof(UUASkyLightCubemapUpdaterComponent, SkyLight) == 0x0110);
static_assert(offsetof(UUASkyLightCubemapUpdaterComponent, SkylightCubemap) == 0x0118);
