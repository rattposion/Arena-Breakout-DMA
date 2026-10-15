// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MFClimateRuntime

#pragma pack(push, 0x1)

/// Class /MFClimate/VolumeCloud/Blueprints/CloudMask/BP_CloudMaskBaseWeatherMap.BP_CloudMaskBaseWeatherMap_C
/// Size: 0x0340 (832 bytes) (0x000340 - 0x000340) align 16 MaxSize: 0x0340
class ABP_CloudMaskBaseWeatherMap_C : public AMFClimateWeatherMapCloudMask
{ 
public:
};

/// Class /MFClimate/VolumeCloud/Blueprints/BP_WeatherMapGenerator.BP_WeatherMapGenerator_C
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 8 MaxSize: 0x0350
class ABP_WeatherMapGenerator_C : public AMFClimateWeatherMapGenerator
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0348   (0x0008)  
};

/// Class /MFClimate/VolumeCloud/Blueprints/BP_UEVolumeCloud.BP_UEVolumeCloud_C
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class ABP_UEVolumeCloud_C : public AActor
{ 
public:
	class UVolumetricCloudComponent*                   VolumetricCloud;                                            // 0x0318   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0320   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(ABP_CloudMaskBaseWeatherMap_C) == 0x0340); // 832 bytes (0x000340 - 0x000340)
static_assert(sizeof(ABP_WeatherMapGenerator_C) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(ABP_UEVolumeCloud_C) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(offsetof(ABP_WeatherMapGenerator_C, DefaultSceneRoot) == 0x0348);
static_assert(offsetof(ABP_UEVolumeCloud_C, VolumetricCloud) == 0x0318);
static_assert(offsetof(ABP_UEVolumeCloud_C, DefaultSceneRoot) == 0x0320);
