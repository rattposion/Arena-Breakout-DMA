// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFVolumetricLightmap.MFVolumetricDistanceMapImportanceVolume
/// Size: 0x0368 (872 bytes) (0x000350 - 0x000368) align 8 MaxSize: 0x0368
class AMFVolumetricDistanceMapImportanceVolume : public AVolume
{ 
public:
	bool                                               bGenerateDistanceMaps : 1;                                  // 0x0350:0 (0x0001)  
	bool                                               bGenerateProbeBiasMaps : 1;                                 // 0x0350:1 (0x0001)  
	bool                                               bOverride_MaxFrontProbeBias : 1;                            // 0x0350:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0351   (0x0003)  MISSED
	float                                              MaxFrontProbeBias;                                          // 0x0354   (0x0004)  
	bool                                               bOverride_MaxBackProbeBias : 1;                             // 0x0358:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0359   (0x0003)  MISSED
	float                                              MaxBackProbeBias;                                           // 0x035C   (0x0004)  
	bool                                               bOverride_ProbeBiasScale : 1;                               // 0x0360:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0361   (0x0003)  MISSED
	float                                              ProbeBiasScale;                                             // 0x0364   (0x0004)  
};

/// Class /Script/MFVolumetricLightmap.MFVolumetricLighmtapRenderSettingsComponent
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align 8 MaxSize: 0x0110
class UMFVolumetricLighmtapRenderSettingsComponent : public UActorComponent
{ 
public:
	bool                                               bOverride_DistanceMapWidth : 1;                             // 0x00F8:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F9   (0x0003)  MISSED
	int32_t                                            DistanceMapWidth;                                           // 0x00FC   (0x0004)  
	bool                                               bOverride_DistanceMapHeight : 1;                            // 0x0100:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	int32_t                                            DistanceMapHeight;                                          // 0x0104   (0x0004)  
	bool                                               bOverride_TwoBandSHDistance : 1;                            // 0x0108:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              TwoBandSHDistance;                                          // 0x010C   (0x0004)  
};

/// Class /Script/MFVolumetricLightmap.MFVolumetricLighmtapRenderSettingsActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFVolumetricLighmtapRenderSettingsActor : public AInfo
{ 
public:
	class UMFVolumetricLighmtapRenderSettingsComponent* Component;                                                 // 0x0318   (0x0008)  
};

/// Class /Script/MFVolumetricLightmap.MFVolumetricLightmapSubSystem
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UMFVolumetricLightmapSubSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Struct /Script/MFVolumetricLightmap.MFVolumetricLightmapExtraBrick
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FMFVolumetricLightmapExtraBrick
{ 
	bool                                               bInitialized;                                               // 0x0000   (0x0001)  
	bool                                               bIsPainted;                                                 // 0x0001   (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(AMFVolumetricDistanceMapImportanceVolume) == 0x0368); // 872 bytes (0x000350 - 0x000368)
static_assert(sizeof(UMFVolumetricLighmtapRenderSettingsComponent) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(AMFVolumetricLighmtapRenderSettingsActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UMFVolumetricLightmapSubSystem) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(FMFVolumetricLightmapExtraBrick) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(offsetof(AMFVolumetricLighmtapRenderSettingsActor, Component) == 0x0318);
