// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: PhysicsCore
/// dependency: ProceduralMeshComponent
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/MFClimateRuntime.MFClimateActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AMFClimateActor : public AActor
{ 
public:
	class UMFClimateWorldSubSystem*                    System;                                                     // 0x0318   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0320   (0x0008)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateComponent
/// Size: 0x0110 (272 bytes) (0x0000F8 - 0x000110) align 8 MaxSize: 0x0110
class UMFClimateComponent : public UActorComponent
{ 
public:
	class UMFClimateWorldSubSystem*                    System;                                                     // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0100   (0x0010)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateBakeModeComponent
/// Size: 0x0198 (408 bytes) (0x000110 - 0x000198) align 8 MaxSize: 0x0198
class UMFClimateBakeModeComponent : public UMFClimateComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0110   (0x0008)  MISSED
	TArray<class UMFClimateBaseBakeProcedure*>         RegisteredBakeProcedures;                                   // 0x0118   (0x0010)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0128   (0x0060)  MISSED
	bool                                               bBakeMode;                                                  // 0x0188   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0189   (0x0007)  MISSED
	class UMFClimateBaseBakeProcedure*                 RunningBakeProcedure;                                       // 0x0190   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateBakeModeComponent.ToggleBakeMode
	// void ToggleBakeMode(bool bBakeModeOn);                                                                                   // [0x5374954] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateBakeModeComponent.RunBakeProcedure
	// void RunBakeProcedure(class UMFClimateBaseBakeProcedure* BakeProcedure);                                                 // [0x53745c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateBakeModeComponent.IsBakeMode
	// bool IsBakeMode();                                                                                                       // [0x5374590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateBakeModeComponent.BakeUpdate
	// void BakeUpdate();                                                                                                       // [0x53742f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateBakeModeComponent.AbortBakeProcedure
	// void AbortBakeProcedure();                                                                                               // [0x5374280] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFClimateRuntime.MFClimateBakeMode
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateBakeMode : public AActor
{ 
public:
	class UMFClimateBakeModeComponent*                 BakeMode;                                                   // 0x0318   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateBaseBakeProcedure
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMFClimateBaseBakeProcedure : public UObject
{ 
public:
	bool                                               bEditorOnly;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UMFClimateBakeModeComponent*                 Baker;                                                      // 0x0030   (0x0008)  
	bool                                               bBakeDone;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateBaseBakeProcedure.TickBaking
	// void TickBaking();                                                                                                       // [0x1a9df80] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateBaseBakeProcedure.OnFinalizeBaking
	// void OnFinalizeBaking();                                                                                                 // [0x53745a8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateBaseBakeProcedure.OnBeginBake
	// void OnBeginBake();                                                                                                      // [0x51312b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateBaseBakeProcedure.OnAbortBaking
	// void OnAbortBaking();                                                                                                    // [0x1d76c64] Native|Event|Protected|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateBaseBakeProcedure.IsBakingDone
	// bool IsBakingDone();                                                                                                     // [0x468d478] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateBaseBakeProcedure.FinishBaking
	// void FinishBaking();                                                                                                     // [0x5374304] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateBaseBakeProcedure.BakeUpdate
	// void BakeUpdate();                                                                                                       // [0x156ee74] Native|Protected|BlueprintCallable 
};

/// Class /Script/MFClimateRuntime.MFClimateBakeProcedure
/// Size: 0x00B8 (184 bytes) (0x000040 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMFClimateBakeProcedure : public UMFClimateBaseBakeProcedure
{ 
public:
	TArray<float>                                      TodsToBake;                                                 // 0x0040   (0x0010)  
	bool                                               bIterateWeatherPresets;                                     // 0x0050   (0x0001)  
	bool                                               bHideCelestials;                                            // 0x0051   (0x0001)  
	bool                                               bHideLightning;                                             // 0x0052   (0x0001)  
	bool                                               bHideRain;                                                  // 0x0053   (0x0001)  
	float                                              PrepareTime;                                                // 0x0054   (0x0004)  
	bool                                               bDisableVolumetricFog;                                      // 0x0058   (0x0001)  
	bool                                               bDisableRealTimeSkyLightTimeSlicing;                        // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x005A   (0x0002)  MISSED
	int32_t                                            OuterLoopCount;                                             // 0x005C   (0x0004)  
	int32_t                                            CurrentOuterLoop;                                           // 0x0060   (0x0004)  
	int32_t                                            CurrentTODIndex;                                            // 0x0064   (0x0004)  
	float                                              CurrentTOD;                                                 // 0x0068   (0x0004)  
	int32_t                                            CurrentWeatherIndex;                                        // 0x006C   (0x0004)  
	FString                                            CurrentWeatherName;                                         // 0x0070   (0x0010)  
	int32_t                                            BackupTimeSlicingEnabled;                                   // 0x0080   (0x0004)  
	int32_t                                            BackupVolumetricFog;                                        // 0x0084   (0x0004)  
	float                                              BackupTOD;                                                  // 0x0088   (0x0004)  
	bool                                               bBackupEventProducerActive;                                 // 0x008C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	TArray<float>                                      BackupWeatherLayers;                                        // 0x0090   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateBakeProcedure.SetupBake
	// void SetupBake();                                                                                                        // [0x4de6e58] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateBakeProcedure.DoBake
	// void DoBake();                                                                                                           // [0x1aa6c04] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MFClimateRuntime.MFClimateBaseLightningEventProducer
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFClimateBaseLightningEventProducer : public UObject
{ 
public:
	class UMFClimateLightningDirectorComponent*        Director;                                                   // 0x0028   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateBaseLightningEventProducer.Tick
	// void Tick(float DeltaTime);                                                                                              // [0x107bc44] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MFClimateRuntime.MFClimateCelestialOrbit
/// Size: 0x02C0 (704 bytes) (0x000270 - 0x0002C0) align 16 MaxSize: 0x02C0
class UMFClimateCelestialOrbit : public USceneComponent
{ 
public:
	SDK_UNDEFINED(4,1255) /* EMFClimateCelestialOrbitType */ __um(OrbitType);                                      // 0x0270   (0x0004)  
	char                                               SatelliteOrbitFrequencyYear;                                // 0x0274   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0275   (0x0003)  MISSED
	float                                              AscendingNodeLongitude;                                     // 0x0278   (0x0004)  
	float                                              OrbitalInclination;                                         // 0x027C   (0x0004)  
	float                                              OrbitOffset;                                                // 0x0280   (0x0004)  
	float                                              DistantOrbitLatitude;                                       // 0x0284   (0x0004)  
	float                                              DistantOrbitLongitude;                                      // 0x0288   (0x0004)  
	float                                              ExtraHorizontalOffset;                                      // 0x028C   (0x0004)  
	FRotator                                           CelestialRotation;                                          // 0x0290   (0x000C)  
	FRotator                                           CelestialPosition;                                          // 0x029C   (0x000C)  
	FRotator                                           CelestialToEarthEcliptic;                                   // 0x02A8   (0x000C)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x02B4   (0x000C)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialToEarthEcliptic
	// FRotator GetCelestialToEarthEcliptic();                                                                                  // [0x53743b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialRotationInScene
	// FRotator GetCelestialRotationInScene();                                                                                  // [0x5374388] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialPositionInScene
	// FRotator GetCelestialPositionInScene();                                                                                  // [0x5374360] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateCelestialOrbit.GetCelestialFacingSceneDirection
	// FVector GetCelestialFacingSceneDirection();                                                                              // [0x5374318] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFClimateRuntime.MFClimateCelestialBody
/// Size: 0x0340 (832 bytes) (0x000318 - 0x000340) align 8 MaxSize: 0x0340
class AMFClimateCelestialBody : public AActor
{ 
public:
	bool                                               bSpriteMode;                                                // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0319   (0x0003)  MISSED
	FColor                                             Color;                                                      // 0x031C   (0x0004)  
	float                                              Intensity;                                                  // 0x0320   (0x0004)  
	float                                              AngularDiameter;                                            // 0x0324   (0x0004)  
	float                                              Distance;                                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x032C   (0x0004)  MISSED
	class UMFClimateCelestialOrbit*                    OrbitComponent;                                             // 0x0330   (0x0008)  
	class USceneComponent*                             RotatedPivot;                                               // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.SystemTexturesRefreshed
	// void SystemTexturesRefreshed();                                                                                          // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.SetIntensity
	// void SetIntensity(float NewValue);                                                                                       // [0x1b593f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.SetColor
	// void SetColor(FColor NewValue);                                                                                          // [0x27b0cc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.GetOrbitComponent
	// class UMFClimateCelestialOrbit* GetOrbitComponent();                                                                     // [0x5374450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.GetIrradiance
	// FLinearColor GetIrradiance();                                                                                            // [0x5374424] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.GetIntensity
	// float GetIntensity();                                                                                                    // [0x5060e2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.GetColor
	// FColor GetColor();                                                                                                       // [0x537440c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateCelestialBody.GetCenterDir
	// FVector GetCenterDir();                                                                                                  // [0x53743d8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFClimateRuntime.MFClimateCirrusCloud
/// Size: 0x0158 (344 bytes) (0x000110 - 0x000158) align 8 MaxSize: 0x0158
class UMFClimateCirrusCloud : public UMFClimateComponent
{ 
public:
	bool                                               bAutoColorFromSystem;                                       // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	FLinearColor                                       EnvironmentLightColor;                                      // 0x0114   (0x0010)  
	FVector                                            EnvironmentLightDir;                                        // 0x0124   (0x000C)  
	float                                              Height;                                                     // 0x0130   (0x0004)  
	float                                              Fill;                                                       // 0x0134   (0x0004)  
	FColor                                             Albedo;                                                     // 0x0138   (0x0004)  
	FLinearColor                                       Emissive;                                                   // 0x013C   (0x0010)  
	float                                              ExtinctionCoefficient;                                      // 0x014C   (0x0004)  
	float                                              FirstLobeG;                                                 // 0x0150   (0x0004)  
	float                                              SecondLobeG;                                                // 0x0154   (0x0004)  
};

/// Class /Script/MFClimateRuntime.MFClimateCloudCustomVolume
/// Size: 0x0350 (848 bytes) (0x000318 - 0x000350) align 8 MaxSize: 0x0350
class AMFClimateCloudCustomVolume : public AActor
{ 
public:
	int32_t                                            TextureIndex;                                               // 0x0318   (0x0004)  
	float                                              EdgeThreshold;                                              // 0x031C   (0x0004)  
	float                                              BaseTiling;                                                 // 0x0320   (0x0004)  
	float                                              DetailStrength;                                             // 0x0324   (0x0004)  
	float                                              DetailTiling;                                               // 0x0328   (0x0004)  
	float                                              CurlStrength;                                               // 0x032C   (0x0004)  
	float                                              CurlTiling;                                                 // 0x0330   (0x0004)  
	FVector2D                                          DetailOffset;                                               // 0x0334   (0x0008)  
	float                                              BaseNoiseCenter;                                            // 0x033C   (0x0004)  
	float                                              BaseNoiseVariation;                                         // 0x0340   (0x0004)  
	float                                              ExtinctionScale;                                            // 0x0344   (0x0004)  
	float                                              Erosion;                                                    // 0x0348   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x034C   (0x0004)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateCloudCustomVolumesManager
/// Size: 0x0360 (864 bytes) (0x000318 - 0x000360) align 8 MaxSize: 0x0360
class AMFClimateCloudCustomVolumesManager : public AActor
{ 
public:
	TArray<class UVolumeTexture*>                      CloudTextures;                                              // 0x0318   (0x0010)  
	bool                                               bShowCloudBoundingBoxes;                                    // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0329   (0x0007)  MISSED
	class UVolumeTexture*                              CloudTextureAtlas;                                          // 0x0330   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0338   (0x0028)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateCloudNoiseGeneratorV2
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UMFClimateCloudNoiseGeneratorV2 : public UDataAsset
{ 
public:
	FIntVector                                         NoiseTextureSize;                                           // 0x0030   (0x000C)  
	bool                                               bSingleChannel;                                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            WorleyFbmOctaves;                                           // 0x0040   (0x0004)  
	int32_t                                            PerlinFbmOctaves;                                           // 0x0044   (0x0004)  
	int32_t                                            WorleyNoiseCells_Channel1;                                  // 0x0048   (0x0004)  
	int32_t                                            PerlinNoiseCells_Channel1;                                  // 0x004C   (0x0004)  
	float                                              PerlinWeight_Channel1;                                      // 0x0050   (0x0004)  
	int32_t                                            WorleyNoiseCells_Channel2;                                  // 0x0054   (0x0004)  
	int32_t                                            PerlinNoiseCells_Channel2;                                  // 0x0058   (0x0004)  
	float                                              PerlinWeight_Channel2;                                      // 0x005C   (0x0004)  
	int32_t                                            WorleyNoiseCells_Channel3;                                  // 0x0060   (0x0004)  
	int32_t                                            PerlinNoiseCells_Channel3;                                  // 0x0064   (0x0004)  
	float                                              PerlinWeight_Channel3;                                      // 0x0068   (0x0004)  
	int32_t                                            WorleyNoiseCells_Channel4;                                  // 0x006C   (0x0004)  
	int32_t                                            PerlinNoiseCells_Channel4;                                  // 0x0070   (0x0004)  
	float                                              PerlinWeight_Channel4;                                      // 0x0074   (0x0004)  
	class UVolumeTexture*                              OutputTexture3D;                                            // 0x0078   (0x0008)  
	class UTexture2D*                                  OutputTexture2D;                                            // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateCloudNoiseGeneratorV2.GenerateNoise
	// void GenerateNoise();                                                                                                    // [0x1e39048] Final|Native|Public  
};

/// Struct /Script/MFClimateRuntime.MFClimatePlatformNoiseGenerationSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FMFClimatePlatformNoiseGenerationSettings
{ 
	FIntVector                                         BaseNoiseTextureSize;                                       // 0x0000   (0x000C)  
	FIntVector                                         DetailNoiseTextureSize;                                     // 0x000C   (0x000C)  
	FIntPoint                                          BaseNoise2DTextureSize;                                     // 0x0018   (0x0008)  
	FIntPoint                                          DetailNoise2DTextureSize;                                   // 0x0020   (0x0008)  
	FIntPoint                                          WeatherMapNoiseTextureSize;                                 // 0x0028   (0x0008)  
	FIntPoint                                          CurlNoiseTextureSize;                                       // 0x0030   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateCloudNoiseGroup
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UMFClimateCloudNoiseGroup : public UDataAsset
{ 
public:
	FMFClimatePlatformNoiseGenerationSettings          PlatformSettings;                                           // 0x0030   (0x0038)  
	class UVolumeTexture*                              SavedBaseNoise;                                             // 0x0068   (0x0008)  
	class UVolumeTexture*                              SavedDetailNoise;                                           // 0x0070   (0x0008)  
	class UTexture2D*                                  SavedWeatherMapNoise;                                       // 0x0078   (0x0008)  
	class UTexture2D*                                  SavedCurlNoise;                                             // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateCloudNoiseGroup.CreateAssets
	// void CreateAssets();                                                                                                     // [0x1e39048] Final|Native|Public  
};

/// Class /Script/MFClimateRuntime.MFClimateCloudNoiseGroupPlatformSwitcher
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UMFClimateCloudNoiseGroupPlatformSwitcher : public UDataAsset
{ 
public:
	class UMFClimateCloudNoiseGroup*                   CookedAsset;                                                // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateCloudNoiseGroupPlatformSwitcher.UpdateAllNoise
	// void UpdateAllNoise();                                                                                                   // [0x1e39048] Final|Native|Public  
};

/// Struct /Script/MFClimateRuntime.MFClimateCloudTypeDescriptor
/// Size: 0x0228 (552 bytes) (0x000000 - 0x000228) align 8 MaxSize: 0x0228
struct FMFClimateCloudTypeDescriptor
{ 
	float                                              TypeWeight;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FRuntimeFloatCurve                                 BaseNoiseCenter;                                            // 0x0008   (0x0088)  
	FRuntimeFloatCurve                                 BaseNoiseVariation;                                         // 0x0090   (0x0088)  
	FRuntimeFloatCurve                                 ExtinctionScale;                                            // 0x0118   (0x0088)  
	FRuntimeFloatCurve                                 Erosion;                                                    // 0x01A0   (0x0088)  
};

/// Class /Script/MFClimateRuntime.MFClimateCloudProfile
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UMFClimateCloudProfile : public UDataAsset
{ 
public:
	TArray<FMFClimateCloudTypeDescriptor>              TypeDescriptors;                                            // 0x0030   (0x0010)  
	class UTexture2D*                                  LUT0;                                                       // 0x0040   (0x0008)  
	uint32_t                                           LUT0SizeX;                                                  // 0x0048   (0x0004)  
	uint32_t                                           LUT0SizeY;                                                  // 0x004C   (0x0004)  
	float                                              LUTMSApproxMaxOpticalDepth;                                 // 0x0050   (0x0004)  
	float                                              LUTMSApproxRangeCompress;                                   // 0x0054   (0x0004)  
	uint32_t                                           LUTMSApproxSizeX;                                           // 0x0058   (0x0004)  
	uint32_t                                           LUTMSApproxSizeY;                                           // 0x005C   (0x0004)  
	uint32_t                                           LUTMSApproxIterationCount;                                  // 0x0060   (0x0004)  
	float                                              CloudMSApproxA;                                             // 0x0064   (0x0004)  
	float                                              CloudMSApproxB;                                             // 0x0068   (0x0004)  
	float                                              CloudMSApproxC;                                             // 0x006C   (0x0004)  
	float                                              CloudMSApproxLobeG1;                                        // 0x0070   (0x0004)  
	float                                              CloudMSApproxLobeG2;                                        // 0x0074   (0x0004)  
};

/// Class /Script/MFClimateRuntime.MFClimateDemoGameMode
/// Size: 0x0400 (1024 bytes) (0x000400 - 0x000400) align 8 MaxSize: 0x0400
class AMFClimateDemoGameMode : public AGameMode
{ 
public:
};

/// Class /Script/MFClimateRuntime.MFClimateGlobalWindComponent
/// Size: 0x0140 (320 bytes) (0x000110 - 0x000140) align 8 MaxSize: 0x0140
class UMFClimateGlobalWindComponent : public UMFClimateComponent
{ 
public:
	FVector2D                                          Direction;                                                  // 0x0110   (0x0008)  
	float                                              Level;                                                      // 0x0118   (0x0004)  
	FVector2D                                          WindTravel;                                                 // 0x011C   (0x0008)  
	float                                              WindFrequency;                                              // 0x0124   (0x0004)  
	float                                              WindAmplitude;                                              // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1256) /* FMulticastInlineDelegate */ __um(OnWindParameterChanged);                            // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.WindParameterChangedEvent__DelegateSignature
	// void WindParameterChangedEvent__DelegateSignature();                                                                     // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.SetWindLevel
	// void SetWindLevel(float WindLevel);                                                                                      // [0x53748a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.SetWindDirection
	// void SetWindDirection(FVector2D WindDir);                                                                                // [0x5374810] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.SetWindAmplitude
	// void SetWindAmplitude(float InValue);                                                                                    // [0x29b5428] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.GetWindVelocityInMeter
	// FVector2D GetWindVelocityInMeter();                                                                                      // [0x5374564] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.GetWindTravel
	// FVector2D GetWindTravel();                                                                                               // [0x537453c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.GetWindLevel
	// float GetWindLevel();                                                                                                    // [0x276ecd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.GetWindDirection
	// FVector2D GetWindDirection();                                                                                            // [0x5374468] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateGlobalWindComponent.GetWindAmplitude
	// float GetWindAmplitude();                                                                                                // [0x1c2d038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFClimateRuntime.MFClimateGlobalWind
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateGlobalWind : public AActor
{ 
public:
	class UMFClimateGlobalWindComponent*               GlobalWindComponent;                                        // 0x0318   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateSceneLightInterfaceComponent
/// Size: 0x0118 (280 bytes) (0x000110 - 0x000118) align 8 MaxSize: 0x0118
class UMFClimateSceneLightInterfaceComponent : public UMFClimateComponent
{ 
public:
	bool                                               bHasMainLightControl;                                       // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              MobileForceUpdateTimer;                                     // 0x0114   (0x0004)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetMainLight
	// bool GetMainLight(class UDirectionalLightComponent*& OutLightComponent);                                                 // [0x5376ef0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetLightInfoForLightingCloud
	// bool GetLightInfoForLightingCloud(FVector& OutDir, float BottomHeight, FLinearColor& OutColorBottom, float TopHeight, FLinearColor& OutColorTop); // [0x5376cac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetGroundLevelIrradiance
	// FLinearColor GetGroundLevelIrradiance();                                                                                 // [0x5376c60] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetCloudLightingAtHeight
	// bool GetCloudLightingAtHeight(float Height, FVector& LightDir, FLinearColor& Color);                                     // [0x5376850] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateSceneLightInterfaceComponent.GetAtmosphereLight
	// bool GetAtmosphereLight(FVector& OutDir, FLinearColor& OutColoredBrightness, int32_t LightIndex);                        // [0x53763ec] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFClimateRuntime.MFClimateHDSunMoonSceneLightComponent
/// Size: 0x01C8 (456 bytes) (0x000118 - 0x0001C8) align 8 MaxSize: 0x01C8
class UMFClimateHDSunMoonSceneLightComponent : public UMFClimateSceneLightInterfaceComponent
{ 
public:
	class ADirectionalLight*                           SunLight;                                                   // 0x0118   (0x0008)  
	class ADirectionalLight*                           MoonLight;                                                  // 0x0120   (0x0008)  
	class AMFClimateCelestialBody*                     BindSun;                                                    // 0x0128   (0x0008)  
	class AMFClimateCelestialBody*                     BindMoon;                                                   // 0x0130   (0x0008)  
	FVector                                            SunDirection;                                               // 0x0138   (0x000C)  
	FVector                                            MoonDirection;                                              // 0x0144   (0x000C)  
	FLinearColor                                       SunColoredBrightness;                                       // 0x0150   (0x0010)  
	FLinearColor                                       MoonColoredBrightness;                                      // 0x0160   (0x0010)  
	bool                                               bAutoUpdateCloudCastShadow;                                 // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0171   (0x0003)  MISSED
	float                                              CastCloudShadowTransferTime;                                // 0x0174   (0x0004)  
	float                                              CloudShadowValue;                                           // 0x0178   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	class UDirectionalLightComponent*                  SunLightComponent;                                          // 0x0180   (0x0008)  
	class UDirectionalLightComponent*                  MoonLightComponent;                                         // 0x0188   (0x0008)  
	FLinearColor                                       SunScatteredIrradiance;                                     // 0x0190   (0x0010)  
	FLinearColor                                       MoonScatteredIrradiance;                                    // 0x01A0   (0x0010)  
	FLinearColor                                       CurrentLightningSceneLightColor;                            // 0x01B0   (0x0010)  
	class UDirectionalLightComponent*                  LightningFakeLight;                                         // 0x01C0   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateHDSunMoonSceneLight
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateHDSunMoonSceneLight : public AActor
{ 
public:
	class UMFClimateHDSunMoonSceneLightComponent*      MFClimateLight;                                             // 0x0318   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateIrcCamera
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align 8 MaxSize: 0x0330
class AMFClimateIrcCamera : public AActor
{ 
public:
	class UCameraComponent*                            CameraComponent;                                            // 0x0318   (0x0008)  
	FString                                            CameraTag;                                                  // 0x0320   (0x0010)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateIrcCamera.GetCameraTag
	// FString GetCameraTag();                                                                                                  // [0x5374e48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MFClimateRuntime.MFClimateFractalLightningGenerateParams
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FMFClimateFractalLightningGenerateParams
{ 
	int32_t                                            RandomSeed;                                                 // 0x0000   (0x0004)  
	float                                              InitialBranchProb;                                          // 0x0004   (0x0004)  
	float                                              BranchProbAttenuation;                                      // 0x0008   (0x0004)  
	FVector                                            TargetOffset;                                               // 0x000C   (0x000C)  
	float                                              MinSegmentLength;                                           // 0x0018   (0x0004)  
	int32_t                                            MaxFracTimes;                                               // 0x001C   (0x0004)  
	float                                              WidthFactor;                                                // 0x0020   (0x0004)  
	float                                              BranchShortenFactor;                                        // 0x0024   (0x0004)  
	FVector2D                                          MinMaxBranchLiftAngleDegrees;                               // 0x0028   (0x0008)  
	float                                              MinChannelCreationDistance;                                 // 0x0030   (0x0004)  
};

/// Class /Script/MFClimateRuntime.MFClimateLightningChannelActor
/// Size: 0x03A8 (936 bytes) (0x000318 - 0x0003A8) align 8 MaxSize: 0x03A8
class AMFClimateLightningChannelActor : public AActor
{ 
public:
	class UMaterialInterface*                          LightningMaterial;                                          // 0x0318   (0x0008)  
	class UMaterialInstanceDynamic*                    Mid;                                                        // 0x0320   (0x0008)  
	FMFClimateFractalLightningGenerateParams           Params;                                                     // 0x0328   (0x0034)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x035C   (0x0004)  MISSED
	class UProceduralMeshComponent*                    PMC;                                                        // 0x0360   (0x0008)  
	float                                              Width;                                                      // 0x0368   (0x0004)  
	float                                              MinObserveDegree;                                           // 0x036C   (0x0004)  
	bool                                               bEnableMockRange;                                           // 0x0370   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0371   (0x0003)  MISSED
	float                                              MockRange;                                                  // 0x0374   (0x0004)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0378   (0x0030)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateLightningChannelActor.RefreshChannel
	// void RefreshChannel(FVector InStart, FVector InEnd, int32_t InRandomSeed, float NormalizedEnergy);                       // [0x537535c] Final|Native|Public|HasDefaults 
	// Function /Script/MFClimateRuntime.MFClimateLightningChannelActor.ReceiveOnReturnStrike
	// void ReceiveOnReturnStrike(float NormalizedEnergy, FVector StartInKM, FVector EndInKM, int32_t InRandomSeed, FVector MockActorLocation, FVector MockActorScale); // [0x182d6bc] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateLightningChannelActor.ReceiveOnRefreshChannel
	// void ReceiveOnRefreshChannel(float NormalizedEnergy, FVector StartInKM, FVector EndInKM, int32_t InRandomSeed, FVector MockActorLocation, FVector MockActorScale); // [0x182d6bc] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateLightningChannelActor.ReceiveOnLightningHidden
	// void ReceiveOnLightningHidden();                                                                                         // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateLightningChannelActor.GenerateFractalTree
	// void GenerateFractalTree();                                                                                              // [0x5374dfc] Final|Native|Public  
};

/// Struct /Script/MFClimateRuntime.MFClimateLightningEvent
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FMFClimateLightningEvent
{ 
	bool                                               bForceRejectPrevious;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            StartPosition;                                              // 0x0004   (0x000C)  
	FVector                                            EndPosition;                                                // 0x0010   (0x000C)  
	float                                              NormalizedReturnStrikeEnergy;                               // 0x001C   (0x0004)  
	int32_t                                            ReStrikeCount;                                              // 0x0020   (0x0004)  
};

/// Class /Script/MFClimateRuntime.MFClimateLightningDirectorComponent
/// Size: 0x0218 (536 bytes) (0x000110 - 0x000218) align 8 MaxSize: 0x0218
class UMFClimateLightningDirectorComponent : public UMFClimateComponent
{ 
public:
	class AMFClimateLightningChannelActor*             InstantiatedLightningActor;                                 // 0x0110   (0x0008)  
	FMFClimateLightningEvent                           ExecutingLightningEvent;                                    // 0x0118   (0x0024)  
	float                                              LightningLeaderProgress;                                    // 0x013C   (0x0004)  
	float                                              CurrentEnergy;                                              // 0x0140   (0x0004)  
	int32_t                                            RemainingReStrike;                                          // 0x0144   (0x0004)  
	float                                              ReStrikeTimer;                                              // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	class UMFClimateBaseLightningEventProducer*        EventProducer;                                              // 0x0150   (0x0008)  
	class UClass*                                      LightningChannelType;                                       // 0x0158   (0x0008)  
	float                                              LightningFrequency;                                         // 0x0160   (0x0004)  
	float                                              ReturnStrikeEnergyMean;                                     // 0x0164   (0x0004)  
	float                                              ReturnStrikeEnergyStdDev;                                   // 0x0168   (0x0004)  
	float                                              StrikeEnergyBoost;                                          // 0x016C   (0x0004)  
	float                                              LightningDecayAlpha;                                        // 0x0170   (0x0004)  
	FLinearColor                                       LightningTint;                                              // 0x0174   (0x0010)  
	float                                              EventOverEnergyThreshold;                                   // 0x0184   (0x0004)  
	bool                                               bAllowLightningEventOverride;                               // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0189   (0x0003)  MISSED
	float                                              ReStrikeFrequency;                                          // 0x018C   (0x0004)  
	float                                              ReStrikeCountMean;                                          // 0x0190   (0x0004)  
	float                                              ReStrikeCountStdDev;                                        // 0x0194   (0x0004)  
	float                                              ReStrikeEnergyMean;                                         // 0x0198   (0x0004)  
	float                                              ReStrikeEnergyStdDev;                                       // 0x019C   (0x0004)  
	float                                              ReStrikeTickInterval;                                       // 0x01A0   (0x0004)  
	float                                              LightningLeaderDuration;                                    // 0x01A4   (0x0004)  
	float                                              LightningLeaderRelativeEv;                                  // 0x01A8   (0x0004)  
	bool                                               bRelativeToCamera;                                          // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	float                                              LightningCloudLayerHeight;                                  // 0x01B0   (0x0004)  
	float                                              MaxDistance;                                                // 0x01B4   (0x0004)  
	float                                              MinDistance;                                                // 0x01B8   (0x0004)  
	float                                              MaxGroundOffset;                                            // 0x01BC   (0x0004)  
	float                                              SceneLightEVScale;                                          // 0x01C0   (0x0004)  
	bool                                               bDevelopmentModeEnable;                                     // 0x01C4   (0x0001)  
	bool                                               bDevelopmentModeAutoLightning;                              // 0x01C5   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x01C6   (0x0002)  MISSED
	float                                              DevelopmentModeAutoLightningInterval;                       // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
	bool                                               bEventProducerActive;                                       // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x01D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,1257) /* FMulticastInlineDelegate */ __um(OnLightningEventRegistered);                        // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,1258) /* FMulticastInlineDelegate */ __um(OnLightningStrike);                                 // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData06_7[0x20];                                      // 0x01F8   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.SetReStrikeRandomSeed
	// void SetReStrikeRandomSeed(int32_t Seed);                                                                                // [0x537598c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.SetLightningFrequency
	// void SetLightningFrequency(float InValue);                                                                               // [0x53758f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.SampleLightningEvent
	// FMFClimateLightningEvent SampleLightningEvent(int32_t Seed);                                                             // [0x53756d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.RegisterLightningEventDetermined
	// void RegisterLightningEventDetermined(FMFClimateLightningEvent& Evt, int32_t RandomSeed);                                // [0x53755c8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.RegisterLightningEvent
	// void RegisterLightningEvent(FMFClimateLightningEvent& Evt);                                                              // [0x5375520] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.LightningStrikeEventDelegate__DelegateSignature
	// void LightningStrikeEventDelegate__DelegateSignature(FMFClimateLightningEvent& Event, float NormStrikeEnergy);           // [0x182d6bc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.LightningEventGoingOn
	// bool LightningEventGoingOn();                                                                                            // [0x537518c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.LightningEventDelegate__DelegateSignature
	// void LightningEventDelegate__DelegateSignature(FMFClimateLightningEvent& Event);                                         // [0x182d6bc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetSceneLightIntensityScale
	// float GetSceneLightIntensityScale();                                                                                     // [0x5375154] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetSceneLightEVScale
	// float GetSceneLightEVScale();                                                                                            // [0x537513c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetReStrikeCountStdDev
	// float GetReStrikeCountStdDev();                                                                                          // [0x29ae0ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetReStrikeCountMean
	// float GetReStrikeCountMean();                                                                                            // [0x29adce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetMinDistance
	// float GetMinDistance();                                                                                                  // [0x5375084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetMaxGroundOffset
	// float GetMaxGroundOffset();                                                                                              // [0x537506c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetMaxDistance
	// float GetMaxDistance();                                                                                                  // [0x5375054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetLocalToCamera
	// bool GetLocalToCamera();                                                                                                 // [0x537503c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetLightningTint
	// FLinearColor GetLightningTint();                                                                                         // [0x5375020] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetLightningFrequency
	// float GetLightningFrequency();                                                                                           // [0x5375008] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetLightningChannelActor
	// class AMFClimateLightningChannelActor* GetLightningChannelActor();                                                       // [0x5374fe4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.GetEnergyNormalDistribution
	// FVector2D GetEnergyNormalDistribution();                                                                                 // [0x5374f68] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateLightningDirectorComponent.DevelopmentModeCallLightning
	// void DevelopmentModeCallLightning();                                                                                     // [0x5374ddc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MFClimateRuntime.MFClimateLightningEventProducer
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMFClimateLightningEventProducer : public UMFClimateBaseLightningEventProducer
{ 
public:
	bool                                               bDeterministicByTOD;                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              TestIntervalInTodSeconds;                                   // 0x0034   (0x0004)  
	bool                                               bDisableDeterministicInEditor;                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent
/// Size: 0x0220 (544 bytes) (0x0000F8 - 0x000220) align 8 MaxSize: 0x0220
class UMFClimateMovableRainWetnessComponent : public UActorComponent
{ 
public:
	class UPhysicalMaterial*                           LastOccludePhysicalMaterial;                                // 0x00F8   (0x0008)  
	float                                              WetSpeed;                                                   // 0x0100   (0x0004)  
	float                                              DrySpeed;                                                   // 0x0104   (0x0004)  
	float                                              OcclusionWetRate;                                           // 0x0108   (0x0004)  
	float                                              OcclusionDryRate;                                           // 0x010C   (0x0004)  
	float                                              SnowWetSpeed;                                               // 0x0110   (0x0004)  
	float                                              SnowDrySpeed;                                               // 0x0114   (0x0004)  
	float                                              SnowOcclusionWetRate;                                       // 0x0118   (0x0004)  
	float                                              SnowOcclusionDryRate;                                       // 0x011C   (0x0004)  
	bool                                               bUpdateMaterialParam;                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	FName                                              AccumulationParameterName;                                  // 0x0124   (0x0008)  
	FName                                              OcclusionParameterName;                                     // 0x012C   (0x0008)  
	bool                                               bUpdatePrimitiveData;                                       // 0x0134   (0x0001)  
	char                                               PrimitiveDataIndex;                                         // 0x0135   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0136   (0x0002)  MISSED
	float                                              OcclusionRate;                                              // 0x0138   (0x0004)  
	float                                              CurrentAccumulation;                                        // 0x013C   (0x0004)  
	float                                              SmoothedOcclusion;                                          // 0x0140   (0x0004)  
	float                                              AppliedVisualAccumulation;                                  // 0x0144   (0x0004)  
	float                                              AppliedVisualOcclusion;                                     // 0x0148   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x014C   (0x0014)  MISSED
	class UMFClimateWorldSubSystem*                    MFClimateSystem;                                            // 0x0160   (0x0008)  
	class AMFClimateRain*                              RainActor;                                                  // 0x0168   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            CollectedMaterials;                                         // 0x0170   (0x0010)  
	SDK_UNDEFINED(80,1259) /* TSet<UPrimitiveComponent*> */ __um(CollectedPrimitive);                              // 0x0180   (0x0050)  
	SDK_UNDEFINED(80,1260) /* TSet<AActor*> */         __um(CollectedProtective);                                  // 0x01D0   (0x0050)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.UpdateWetnessParameter
	// void UpdateWetnessParameter(float GlobalRainAmount, float DeltaTime);                                                    // [0x5375ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.UpdateVisualEffects
	// void UpdateVisualEffects(bool bForceUpdate);                                                                             // [0x5375a3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.UpdateOcclusionRateByLineTrace
	// void UpdateOcclusionRateByLineTrace();                                                                                   // [0x5375a28] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.RefreshPrimitiveMaterialCollection
	// void RefreshPrimitiveMaterialCollection();                                                                               // [0x537550c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.GetOcclusionRate
	// float GetOcclusionRate();                                                                                                // [0x2793b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.GetOcclusionDetectionPosition
	// FVector GetOcclusionDetectionPosition();                                                                                 // [0x537509c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.GetLastOccludeMaterial
	// class UPhysicalMaterial* GetLastOccludeMaterial();                                                                       // [0x4a29a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.AddExtraPrimitiveComponent
	// void AddExtraPrimitiveComponent(class UPrimitiveComponent* PrimitiveComponent);                                          // [0x5374d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateMovableRainWetnessComponent.AddExtraPrimitive
	// void AddExtraPrimitive(class AActor* Actor);                                                                             // [0x5374c98] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFClimateRuntime.MFClimateRain
/// Size: 0x0410 (1040 bytes) (0x000328 - 0x000410) align 16 MaxSize: 0x0410
class AMFClimateRain : public AMFClimateActor
{ 
public:
	char                                               DynamicObjectPrimitiveIndex;                                // 0x0328   (0x0001)  
	bool                                               bIsUsePrimitiveCustomData;                                  // 0x0329   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x032A   (0x0002)  MISSED
	float                                              PuddleDisturbSpeed;                                         // 0x032C   (0x0004)  
	float                                              PuddleDisturbTiling;                                        // 0x0330   (0x0004)  
	float                                              PuddleDisturbStrength;                                      // 0x0334   (0x0004)  
	float                                              PuddleRippleStrength;                                       // 0x0338   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x033C   (0x0004)  MISSED
	FVector4                                           PuddleRippleFrequencies;                                    // 0x0340   (0x0010)  
	float                                              PuddleRippleTiling;                                         // 0x0350   (0x0004)  
	bool                                               IsSnow;                                                     // 0x0354   (0x0001)  
	bool                                               bEnableSnowFogVolume;                                       // 0x0355   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0356   (0x0002)  MISSED
	class UMFClimateSnowTrailManager*                  SnowTrailManager;                                           // 0x0358   (0x0008)  
	float                                              AmountOfRain;                                               // 0x0360   (0x0004)  
	float                                              Accumulation;                                               // 0x0364   (0x0004)  
	float                                              MaxAccumulation;                                            // 0x0368   (0x0004)  
	bool                                               bRainAutoUpdateAccumulation;                                // 0x036C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x036D   (0x0003)  MISSED
	float                                              FixedAccumulation;                                          // 0x0370   (0x0004)  
	float                                              AccumulateSpeed;                                            // 0x0374   (0x0004)  
	float                                              DecaySpeed;                                                 // 0x0378   (0x0004)  
	float                                              WindTiltMultiplier;                                         // 0x037C   (0x0004)  
	class UMFClimatePlayerTransformComponent*          PlayerPosition;                                             // 0x0380   (0x0008)  
	class UMFClimatePlayerTransformComponent*          PlayerRotation;                                             // 0x0388   (0x0008)  
	class USceneComponent*                             WindAlignedPivot;                                           // 0x0390   (0x0008)  
	class UMFClimateMovableRainWetnessComponent*       WetnessComponent;                                           // 0x0398   (0x0008)  
	bool                                               bTraceComplex;                                              // 0x03A0   (0x0001)  
	SDK_UNDEFINED(1,1261) /* TEnumAsByte<EDrawDebugTrace> */ __um(DebugType);                                      // 0x03A1   (0x0001)  
	bool                                               bUseObjectChannels;                                         // 0x03A2   (0x0001)  
	SDK_UNDEFINED(1,1262) /* TEnumAsByte<ETraceTypeQuery> */ __um(DetectChannel);                                  // 0x03A3   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03A4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1263) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(ObjectChannels);                       // 0x03A8   (0x0010)  
	float                                              detectrange;                                                // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x03BC   (0x0004)  MISSED
	class UMFClimateRainOcclusionTestManager*          RainOcclusionTestManager;                                   // 0x03C0   (0x0008)  
	unsigned char                                      UnknownData06_7[0x48];                                      // 0x03C8   (0x0048)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateRain.SetIsSnow
	// void SetIsSnow(bool NewValue);                                                                                           // [0x27c5b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateRain.SetEnableSnowFogVolume
	// void SetEnableSnowFogVolume(bool NewValue);                                                                              // [0x5375848] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateRain.SetAmountOfRain
	// void SetAmountOfRain(float NewValue);                                                                                    // [0x1abedfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateRain.SetAccumulation
	// void SetAccumulation(float NewValue);                                                                                    // [0x5375790] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateRain.OnParameterUpdated
	// void OnParameterUpdated();                                                                                               // [0x1c0ab50] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateRain.LineTraceRainOcclusion
	// bool LineTraceRainOcclusion(FVector position, TArray<AActor*>& ActorsToIgnore, FHitResult& OutHitResult);                // [0x53751ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetRainOcclusionRate
	// float GetRainOcclusionRate();                                                                                            // [0x537511c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetRainDownVector
	// FVector GetRainDownVector();                                                                                             // [0x53750e8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetRainAutoUpdateAccumulation
	// bool GetRainAutoUpdateAccumulation();                                                                                    // [0x53750d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetLastOcclusionMaterial
	// class UPhysicalMaterial* GetLastOcclusionMaterial();                                                                     // [0x5374fc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetIsSnow
	// bool GetIsSnow();                                                                                                        // [0x1c16ab4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetIsRain
	// bool GetIsRain();                                                                                                        // [0x5374fa8] Final|Native|Public  
	// Function /Script/MFClimateRuntime.MFClimateRain.GetIsEnableSnowFogVolume
	// bool GetIsEnableSnowFogVolume();                                                                                         // [0x5374f90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetAmountOfRain
	// float GetAmountOfRain();                                                                                                 // [0x1c712b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateRain.GetAccumulation
	// float GetAccumulation();                                                                                                 // [0x5374e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFClimateRuntime.MFClimateParticleRain
/// Size: 0x0530 (1328 bytes) (0x000410 - 0x000530) align 16 MaxSize: 0x0530
class AMFClimateParticleRain : public AMFClimateRain
{ 
public:
	class UActorComponent*                             RainShadowCapture;                                          // 0x0410   (0x0008)  
	class UActorComponent*                             WideShadowCapture;                                          // 0x0418   (0x0008)  
	bool                                               bDelayParametersUpdate;                                     // 0x0420   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0421   (0x0007)  MISSED
	TArray<class UNiagaraComponent*>                   NiagaraComponents;                                          // 0x0428   (0x0010)  
	TArray<class UParticleSystemComponent*>            CascadesComponents;                                         // 0x0438   (0x0010)  
	unsigned char                                      UnknownData01_7[0xE8];                                      // 0x0448   (0x00E8)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateParticleRain.OnWideShadowCaptureUpdated
	// void OnWideShadowCaptureUpdated(FMatrix Matrix);                                                                         // [0x182d6bc] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/MFClimateRuntime.MFClimateParticleRain.OnRainShadowCaptureUpdated
	// void OnRainShadowCaptureUpdated(FMatrix Matrix);                                                                         // [0x182d6bc] Event|Protected|HasDefaults|BlueprintEvent 
};

/// Class /Script/MFClimateRuntime.MFClimatePlayerTransformComponent
/// Size: 0x02C0 (704 bytes) (0x000270 - 0x0002C0) align 16 MaxSize: 0x02C0
class UMFClimatePlayerTransformComponent : public USceneComponent
{ 
public:
	bool                                               bCameraOrPawn;                                              // 0x0270   (0x0001)  
	bool                                               bSyncPosition;                                              // 0x0271   (0x0001)  
	bool                                               bSyncRotation;                                              // 0x0272   (0x0001)  
	bool                                               bIgnorePitchRotation;                                       // 0x0273   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4C];                                      // 0x0274   (0x004C)  MISSED
};

/// Struct /Script/MFClimateRuntime.MFClimateRainOcclusionTestQueueItem
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMFClimateRainOcclusionTestQueueItem
{ 
	class UMFClimateMovableRainWetnessComponent*       Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateRainOcclusionTestManager
/// Size: 0x0130 (304 bytes) (0x0000F8 - 0x000130) align 8 MaxSize: 0x0130
class UMFClimateRainOcclusionTestManager : public UActorComponent
{ 
public:
	class AMFClimateRain*                              Rain;                                                       // 0x00F8   (0x0008)  
	float                                              TickBudget;                                                 // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UMFClimateMovableRainWetnessComponent*       LocalObservingTargetComponent;                              // 0x0108   (0x0008)  
	TArray<FMFClimateRainOcclusionTestQueueItem>       MovableObjectQueue;                                         // 0x0110   (0x0010)  
	TArray<FMFClimateRainOcclusionTestQueueItem>       MovableObjectQueue_Off;                                     // 0x0120   (0x0010)  
};

/// Class /Script/MFClimateRuntime.MFClimateSDFCanvas
/// Size: 0x0338 (824 bytes) (0x000318 - 0x000338) align 8 MaxSize: 0x0338
class AMFClimateSDFCanvas : public AActor
{ 
public:
	class UStaticMeshComponent*                        Root;                                                       // 0x0318   (0x0008)  
	class UStaticMesh*                                 SourceMesh;                                                 // 0x0320   (0x0008)  
	class UVolumeTexture*                              TargetTexture;                                              // 0x0328   (0x0008)  
	float                                              SaveDistanceFieldPortion;                                   // 0x0330   (0x0004)  
	bool                                               bSaveEveryFrame;                                            // 0x0334   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0335   (0x0003)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateSettings
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UMFClimateSettings : public UDeveloperSettings
{ 
public:
	TArray<FSoftObjectPath>                            MFClimateMPCPaths;                                          // 0x0038   (0x0010)  
};

/// Class /Script/MFClimateRuntime.MFClimateSingleSceneLightComponent
/// Size: 0x0138 (312 bytes) (0x000118 - 0x000138) align 8 MaxSize: 0x0138
class UMFClimateSingleSceneLightComponent : public UMFClimateSceneLightInterfaceComponent
{ 
public:
	class AMFClimateCelestialBody*                     BoundCelestialBody;                                         // 0x0118   (0x0008)  
	float                                              LongShadowFixDegrees;                                       // 0x0120   (0x0004)  
	float                                              LongShadowPower;                                            // 0x0124   (0x0004)  
	class ADirectionalLight*                           MainLight;                                                  // 0x0128   (0x0008)  
	class UDirectionalLightComponent*                  Light;                                                      // 0x0130   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateSimpleLight
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateSimpleLight : public AActor
{ 
public:
	class UMFClimateSingleSceneLightComponent*         MFClimateLight;                                             // 0x0318   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateSkyAtmosphereComponent
/// Size: 0x03D8 (984 bytes) (0x000110 - 0x0003D8) align 8 MaxSize: 0x03D8
class UMFClimateSkyAtmosphereComponent : public UMFClimateComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x240];                                     // 0x0110   (0x0240)  MISSED
	class USkyAtmosphereComponent*                     RawSkyAtmosphere;                                           // 0x0350   (0x0008)  
	FLinearColor                                       SkyAtmosphereTransmittanceAtZenith;                         // 0x0358   (0x0010)  
	FLinearColor                                       SkyAtmosphereTransmittanceCurrent[2];                       // 0x0368   (0x0020)  
	class UTexture2D*                                  CpuSkyAtmosphereSkyTex;                                     // 0x0388   (0x0008)  
	class UTexture2D*                                  CpuSkyAtmosphereTransmittanceTex;                           // 0x0390   (0x0008)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x0398   (0x0040)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateBaseSkyMesh
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateBaseSkyMesh : public AActor
{ 
public:
	bool                                               bCenterAtCamera;                                            // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0319   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateBaseSkyMesh.OnSystemTexturesUpdated
	// void OnSystemTexturesUpdated();                                                                                          // [0x1c0ab50] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MFClimateRuntime.MFClimateSingleMeshSky
/// Size: 0x0348 (840 bytes) (0x000320 - 0x000348) align 8 MaxSize: 0x0348
class AMFClimateSingleMeshSky : public AMFClimateBaseSkyMesh
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0320   (0x0008)  
	class UStaticMeshComponent*                        ShadingMesh;                                                // 0x0328   (0x0008)  
	FVector                                            SkySphereScale;                                             // 0x0330   (0x000C)  
	FVector                                            SkySphereLocation;                                          // 0x033C   (0x000C)  
};

/// Struct /Script/MFClimateRuntime.SnowTrail
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FSnowTrail
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateSnowTrailManager
/// Size: 0x0178 (376 bytes) (0x0000F8 - 0x000178) align 8 MaxSize: 0x0178
class UMFClimateSnowTrailManager : public UActorComponent
{ 
public:
	class UMaterialInterface*                          TrailMaterial;                                              // 0x00F8   (0x0008)  
	class UMaterialInterface*                          HistoryBlendMaterial;                                       // 0x0100   (0x0008)  
	class UMaterialInterface*                          ClearMaterial;                                              // 0x0108   (0x0008)  
	class UMaterialInterface*                          CopyMaterial;                                               // 0x0110   (0x0008)  
	class UMaterialInterface*                          EdgeAccumulationMaterial;                                   // 0x0118   (0x0008)  
	class UMaterialParameterCollection*                SnowTrailMPC;                                               // 0x0120   (0x0008)  
	FVector2D                                          TrailExtent;                                                // 0x0128   (0x0008)  
	FVector2D                                          FootPrintScale;                                             // 0x0130   (0x0008)  
	float                                              SnowHeight;                                                 // 0x0138   (0x0004)  
	float                                              SideFade;                                                   // 0x013C   (0x0004)  
	class UTextureRenderTarget2D*                      Current;                                                    // 0x0140   (0x0008)  
	class UTextureRenderTarget2D*                      History;                                                    // 0x0148   (0x0008)  
	class UTextureRenderTarget2D*                      Trails;                                                     // 0x0150   (0x0008)  
	class AMFClimateRain*                              Snow;                                                       // 0x0158   (0x0008)  
	TArray<FSnowTrail>                                 SnowTrails;                                                 // 0x0160   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0170   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateSnowTrailManager.AddTrail
	// void AddTrail(FVector Location, FRotator Rotation, float HitDistance, float Radius);                                     // [0x5375bf4] Final|Native|Public|HasDefaults 
};

/// Class /Script/MFClimateRuntime.MFClimateStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFClimateStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateStatics.StepTimeOfDay
	// void StepTimeOfDay(class UObject* WorldContextObject, float StepInHours);                                                // [0x5379434] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetWindLevel
	// void SetWindLevel(class UObject* WorldContextObject, float WindLevel);                                                   // [0x53791bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetWindDirection
	// void SetWindDirection(class UObject* WorldContextObject, FVector2D WindDir);                                             // [0x53790bc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetWeatherPresetWeights
	// void SetWeatherPresetWeights(class UObject* WorldContextObject, TArray<float>& Params);                                  // [0x5378f14] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetTimeOfDay
	// void SetTimeOfDay(class UObject* WorldContextObject, float InTODTime);                                                   // [0x5378cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetSystemTextures
	// void SetSystemTextures(class UObject* WorldContextObject, class UMaterialInstanceDynamic* Mid);                          // [0x5378bec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetNorthVector
	// void SetNorthVector(class UObject* WorldContextObject, FVector NorthVector);                                             // [0x5378a1c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetMatrixRowAsMPCVectorParameter
	// void SetMatrixRowAsMPCVectorParameter(class UObject* WorldContextObject, class UMaterialParameterCollection* MPC, FMatrix& InMatrix, FVector Translation, FName RowName0, FName RowName1, FName RowName2, FName RowName3); // [0x53784d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetMatrixRowAsMIDVectorParameter
	// void SetMatrixRowAsMIDVectorParameter(class UMaterialInstanceDynamic* Mid, FMatrix& InMatrix, FVector Translation, FName RowName0, FName RowName1, FName RowName2, FName RowName3); // [0x5378228] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetEditorViewportRotation
	// void SetEditorViewportRotation(FRotator Rotation);                                                                       // [0x53781b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetEditorViewportLocation
	// void SetEditorViewportLocation(FVector position);                                                                        // [0x53781b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.SetAutoStepTimeRate
	// void SetAutoStepTimeRate(class UObject* WorldContextObject, float InAutoStepTimeRate);                                   // [0x5377ed8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.ProjectPointOnCircleLayer
	// float ProjectPointOnCircleLayer(float PointExtent, float CircleRadius);                                                  // [0x5377c20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.ModuloWarpNegative
	// float ModuloWarpNegative(float Value, float Mod);                                                                        // [0x5377b1c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetWindVelocity
	// FVector2D GetWindVelocity(class UObject* WorldContextObject);                                                            // [0x16f33c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetWindLevel
	// float GetWindLevel(class UObject* WorldContextObject);                                                                   // [0x5377a6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetWindDirection
	// FVector2D GetWindDirection(class UObject* WorldContextObject);                                                           // [0x53779c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetWeatherPresetWeights
	// void GetWeatherPresetWeights(class UObject* WorldContextObject, TArray<float>& Params);                                  // [0x53778cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetTimeOfDay
	// float GetTimeOfDay(class UObject* WorldContextObject);                                                                   // [0x5377804] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetSystem
	// class UMFClimateWorldSubSystem* GetSystem(class UObject* WorldContextObject);                                            // [0x5376bc8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetQualityLevel
	// int32_t GetQualityLevel();                                                                                               // [0x5377718] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetPresetName
	// FString GetPresetName(class UObject* WorldContextObject, int32_t InPresetIndex);                                         // [0x537761c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetPresetIndexByName
	// int32_t GetPresetIndexByName(class UObject* WorldContextObject, FString InPresetName);                                   // [0x5377518] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetPlayerRotation
	// FRotator GetPlayerRotation(class UObject* WorldContextObject);                                                           // [0x5377470] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetPlayerLocation
	// FVector GetPlayerLocation(class UObject* WorldContextObject);                                                            // [0x53773c8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetNumWeatherPresets
	// int32_t GetNumWeatherPresets(class UObject* WorldContextObject);                                                         // [0x5377330] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetNorthVector
	// FVector GetNorthVector(class UObject* WorldContextObject);                                                               // [0x5377260] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetNorthAngleOffset
	// float GetNorthAngleOffset(class UObject* WorldContextObject);                                                            // [0x53771c8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetMatrixRow
	// FVector4 GetMatrixRow(FMatrix& Matrix, int32_t Row);                                                                     // [0x5376fa4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetFirstSystem
	// class UMFClimateWorldSubSystem* GetFirstSystem(class UObject* WorldContextObject);                                       // [0x5376bc8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetFeature
	// class UObject* GetFeature(class UObject* WorldContextObject, class UClass* FeatureType);                                 // [0x1b623b4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetEastVector
	// FVector GetEastVector(class UObject* WorldContextObject);                                                                // [0x5376ab0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetEastAngleOffset
	// float GetEastAngleOffset(class UObject* WorldContextObject);                                                             // [0x5376a00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetCameraRotation
	// FRotator GetCameraRotation(class UObject* WorldContextObject);                                                           // [0x53767a8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetCameraLocation
	// FVector GetCameraLocation(class UObject* WorldContextObject);                                                            // [0x5376700] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetCameraAspect
	// float GetCameraAspect(class UObject* WorldContextObject);                                                                // [0x5376668] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GetAutoStepTimeRate
	// float GetAutoStepTimeRate(class UObject* WorldContextObject);                                                            // [0x53765d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GaussianSampleFromStream
	// float GaussianSampleFromStream(FRandomStream& Stream, float Mean, float StdDev);                                         // [0x53762a8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.GaussianSample
	// float GaussianSample(float Mean, float StdDev);                                                                          // [0x53761c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.ComputeCubemapBrightness
	// FVector ComputeCubemapBrightness(class UTextureCube* InCubemap);                                                         // [0x5376118] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateStatics.ChangeToWeatherPreset
	// void ChangeToWeatherPreset(class UObject* WorldContextObject, int32_t WeatherIndex);                                     // [0x5376018] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFClimateRuntime.MFClimateSunMoonSceneLightComponent
/// Size: 0x0190 (400 bytes) (0x000118 - 0x000190) align 8 MaxSize: 0x0190
class UMFClimateSunMoonSceneLightComponent : public UMFClimateSceneLightInterfaceComponent
{ 
public:
	class AMFClimateCelestialBody*                     BindSun;                                                    // 0x0118   (0x0008)  
	class AMFClimateCelestialBody*                     BindMoon;                                                   // 0x0120   (0x0008)  
	float                                              MainLightTransferTime;                                      // 0x0128   (0x0004)  
	float                                              LongShadowFixDegrees;                                       // 0x012C   (0x0004)  
	float                                              LongShadowFixPower;                                         // 0x0130   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	class ADirectionalLight*                           MainDirectionalLight;                                       // 0x0138   (0x0008)  
	class UDirectionalLightComponent*                  MainDirectionalLightComponent;                              // 0x0140   (0x0008)  
	FLinearColor                                       LightningColor;                                             // 0x0148   (0x0010)  
	class UDirectionalLightComponent*                  FakeAtmLight1;                                              // 0x0158   (0x0008)  
	class UDirectionalLightComponent*                  FakeAtmLight2;                                              // 0x0160   (0x0008)  
	float                                              SunWeight;                                                  // 0x0168   (0x0004)  
	FLinearColor                                       SunScatteredIrradiance;                                     // 0x016C   (0x0010)  
	FLinearColor                                       MoonScatteredIrradiance;                                    // 0x017C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x018C   (0x0004)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateSunMoonSceneLight
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateSunMoonSceneLight : public AActor
{ 
public:
	class UMFClimateSunMoonSceneLightComponent*        MFClimateLight;                                             // 0x0318   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateTimeGeographyComponent
/// Size: 0x0210 (528 bytes) (0x000110 - 0x000210) align 16 MaxSize: 0x0210
class UMFClimateTimeGeographyComponent : public UMFClimateComponent
{ 
public:
	float                                              TimeZone;                                                   // 0x0110   (0x0004)  
	float                                              YearPercent;                                                // 0x0114   (0x0004)  
	float                                              TimeOfDay;                                                  // 0x0118   (0x0004)  
	float                                              Longitude;                                                  // 0x011C   (0x0004)  
	float                                              Latitude;                                                   // 0x0120   (0x0004)  
	float                                              EarthAxialTilt;                                             // 0x0124   (0x0004)  
	float                                              EarthRadiusKM;                                              // 0x0128   (0x0004)  
	FVector2D                                          SceneNorthVector;                                           // 0x012C   (0x0008)  
	bool                                               bAutoStepTime;                                              // 0x0134   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0135   (0x0003)  MISSED
	float                                              AutoStepTimeRate;                                           // 0x0138   (0x0004)  
	SDK_UNDEFINED(1,1264) /* EAutoAutoStepMode */      __um(AutoStepInEditor);                                     // 0x013C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x013D   (0x0003)  MISSED
	float                                              AutoStepRateInEditor;                                       // 0x0140   (0x0004)  
	unsigned char                                      UnknownData02_7[0xCC];                                      // 0x0144   (0x00CC)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.TransformSceneVectorToEcliptic
	// FVector TransformSceneVectorToEcliptic(FVector Vector);                                                                  // [0x5379684] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.TransformEclipticVectorToScene
	// FVector TransformEclipticVectorToScene(FVector Vector);                                                                  // [0x53795bc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.StepTimeOfDay
	// void StepTimeOfDay(float DeltaHour);                                                                                     // [0x5379518] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetYearPercentFromMonthAndDay
	// float SetYearPercentFromMonthAndDay(int32_t InMonth, int32_t InDay);                                                     // [0x537933c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetYearPercent
	// void SetYearPercent(float NewValue);                                                                                     // [0x53792a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetTimeZone
	// void SetTimeZone(float NewValue);                                                                                        // [0x5378e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetTimeOfDay
	// void SetTimeOfDay(float NewValue);                                                                                       // [0x5378db4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetNorthVector
	// void SetNorthVector(FVector2D NewNorthVector);                                                                           // [0x5378b58] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetLongitude
	// void SetLongitude(float NewValue);                                                                                       // [0x29b36bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetLatitude
	// void SetLatitude(float NewValue);                                                                                        // [0x29b580c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetEarthRadiusKM
	// void SetEarthRadiusKM(float NewValue);                                                                                   // [0x5378104] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetEarthAxialTilt
	// void SetEarthAxialTilt(float NewValue);                                                                                  // [0x5378058] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTimeRate
	// void SetAutoStepTimeRate(float InValue);                                                                                 // [0x5377fbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTimeEditorRate
	// void SetAutoStepTimeEditorRate(float InValue);                                                                           // [0x5377e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTimeEditor
	// void SetAutoStepTimeEditor(EAutoAutoStepMode InValue);                                                                   // [0x5377da8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.SetAutoStepTime
	// void SetAutoStepTime(bool InValue);                                                                                      // [0x5377d08] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetYearPercent
	// float GetYearPercent();                                                                                                  // [0x5377b04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetTimeZone
	// float GetTimeZone();                                                                                                     // [0x53778b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetTimeOfDay
	// float GetTimeOfDay();                                                                                                    // [0x537789c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetSunRotationProgressPingPong
	// float GetSunRotationProgressPingPong();                                                                                  // [0x53777cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetSunRotationProgress
	// float GetSunRotationProgress();                                                                                          // [0x53777a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetSunHorizonAngle
	// float GetSunHorizonAngle();                                                                                              // [0x537777c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetSceneToEclipticMatrix
	// FMatrix GetSceneToEclipticMatrix();                                                                                      // [0x537773c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetNorthVector
	// FVector2D GetNorthVector();                                                                                              // [0x5377308] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetMonthAndDay
	// void GetMonthAndDay(int32_t& OutMonth, int32_t& OutDay);                                                                 // [0x53770c8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetLongitude
	// float GetLongitude();                                                                                                    // [0x5376ed8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetLatitude
	// float GetLatitude();                                                                                                     // [0x5376c94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetEclipticToSceneMatrix
	// FMatrix GetEclipticToSceneMatrix();                                                                                      // [0x5376b88] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetEastVector
	// FVector2D GetEastVector();                                                                                               // [0x5376b58] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetEarthRadiusKM
	// float GetEarthRadiusKM();                                                                                                // [0x1c2d038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetEarthAxialTilt
	// float GetEarthAxialTilt();                                                                                               // [0x53769e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTimeRate
	// float GetAutoStepTimeRate();                                                                                             // [0x2793b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTimeEditorRate
	// float GetAutoStepTimeEditorRate();                                                                                       // [0x53765b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTimeEditor
	// EAutoAutoStepMode GetAutoStepTimeEditor();                                                                               // [0x53765a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.GetAutoStepTime
	// bool GetAutoStepTime();                                                                                                  // [0x5376588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateTimeGeographyComponent.CalculateEclipticToSceneMatrixAtTimeOfDay
	// void CalculateEclipticToSceneMatrixAtTimeOfDay(float InTimeOfDay, float InYearPercent, FRotator& OutEarthToEclipticRotator, FMatrix& OutSceneToEarthMatrix, FMatrix& OutSceneToEclipticMatrix, FMatrix& OutEclipticToSceneMatrix); // [0x5375da8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFClimateRuntime.MFClimateTimeGeography
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateTimeGeography : public AActor
{ 
public:
	class UMFClimateTimeGeographyComponent*            TimeGeographyComponent;                                     // 0x0318   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateTodIrcBase
/// Size: 0x0118 (280 bytes) (0x0000B8 - 0x000118) align 8 MaxSize: 0x0118
class UMFClimateTodIrcBase : public UMFClimateBakeProcedure
{ 
public:
	FString                                            OutputFolder;                                               // 0x00B8   (0x0010)  
	FString                                            FileNameFormat;                                             // 0x00C8   (0x0010)  
	TArray<FString>                                    CameraTagFilter;                                            // 0x00D8   (0x0010)  
	bool                                               bSyncEditorViewportWithCamera;                              // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	TArray<class AMFClimateIrcCamera*>                 Cameras;                                                    // 0x00F0   (0x0010)  
	FVector                                            BackupCameraLocation;                                       // 0x0100   (0x000C)  
	FRotator                                           BackupCameraRotation;                                       // 0x010C   (0x000C)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateTodIrcBase.GetOutputFileName
	// FString GetOutputFileName();                                                                                             // [0x537a0a8] Final|Native|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFClimateRuntime.MFClimateTodIrc2D
/// Size: 0x0128 (296 bytes) (0x000118 - 0x000128) align 8 MaxSize: 0x0128
class UMFClimateTodIrc2D : public UMFClimateTodIrcBase
{ 
public:
	bool                                               bSuperFastEyeAdaption;                                      // 0x0118   (0x0001)  
	bool                                               bHDR;                                                       // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x011A   (0x0002)  MISSED
	int32_t                                            Width;                                                      // 0x011C   (0x0004)  
	int32_t                                            Height;                                                     // 0x0120   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateTodIrcPanorama
/// Size: 0x0120 (288 bytes) (0x000118 - 0x000120) align 8 MaxSize: 0x0120
class UMFClimateTodIrcPanorama : public UMFClimateTodIrcBase
{ 
public:
	int32_t                                            Size;                                                       // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateTodSequenceMixer
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AMFClimateTodSequenceMixer : public AActor
{ 
public:
	class UMFClimateWeatherComponent*                  WeatherComponent;                                           // 0x0318   (0x0008)  
	class UMFClimateWeatherLayerPresetsComponent*      PresetsComponent;                                           // 0x0320   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFClimateTypes : public UObject
{ 
public:
};

/// Class /Script/MFClimateRuntime.MFClimateUIBase
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class UMFClimateUIBase : public UUserWidget
{ 
public:
	class UMFClimateWorldSubSystem*                    MFClimateSystem;                                            // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateUIBase.SetWeatherConditionWeight
	// void SetWeatherConditionWeight(int32_t Index, float Weight);                                                             // [0x537b230] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateUIBase.SetTimeOfDay
	// void SetTimeOfDay(float TimeOfDay);                                                                                      // [0x537b194] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateUIBase.OnTODChanged
	// void OnTODChanged(FText& NewTime);                                                                                       // [0x537a9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateUIBase.GetWeatherConditionWeight
	// float GetWeatherConditionWeight(int32_t Index);                                                                          // [0x537a888] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateUIBase.GetWeatherConditionName
	// FString GetWeatherConditionName(int32_t SequenceIndex);                                                                  // [0x537a758] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateUIBase.GetTODText
	// FText GetTODText(float InValue);                                                                                         // [0x537a550] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateUIBase.GetTimeOfDay
	// float GetTimeOfDay();                                                                                                    // [0x537a680] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFClimateRuntime.MFClimateUIBase.GetMFClimateSystem
	// class UMFClimateWorldSubSystem* GetMFClimateSystem();                                                                    // [0x537a084] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MFClimateRuntime.MFClimateCloudSettings
/// Size: 0x008C (140 bytes) (0x000000 - 0x00008C) align 4 MaxSize: 0x008C
struct FMFClimateCloudSettings
{ 
	float                                              CloudBaseTilingVertical;                                    // 0x0000   (0x0004)  
	float                                              CloudBaseTilingHorizontal;                                  // 0x0004   (0x0004)  
	float                                              CloudDetailTiling;                                          // 0x0008   (0x0004)  
	float                                              CloudDetailStrength;                                        // 0x000C   (0x0004)  
	float                                              CloudCurlStrength;                                          // 0x0010   (0x0004)  
	float                                              CloudCurlTiling;                                            // 0x0014   (0x0004)  
	float                                              DetailWindMultiply;                                         // 0x0018   (0x0004)  
	float                                              CloudBottomHeight;                                          // 0x001C   (0x0004)  
	float                                              CloudThickness;                                             // 0x0020   (0x0004)  
	float                                              CloudDetailFadeStart;                                       // 0x0024   (0x0004)  
	float                                              CloudDetailFadeEnd;                                         // 0x0028   (0x0004)  
	float                                              HorizonAARange;                                             // 0x002C   (0x0004)  
	float                                              HorizonAAValue;                                             // 0x0030   (0x0004)  
	FLinearColor                                       CloudAlbedo;                                                // 0x0034   (0x0010)  
	float                                              CloudExtinction;                                            // 0x0044   (0x0004)  
	float                                              CloudFirstLobeG;                                            // 0x0048   (0x0004)  
	float                                              CloudSecondLobeG;                                           // 0x004C   (0x0004)  
	float                                              MaxShadowRayLength;                                         // 0x0050   (0x0004)  
	float                                              ShadowAttenuation;                                          // 0x0054   (0x0004)  
	float                                              CloudAmbientOcclusionSky;                                   // 0x0058   (0x0004)  
	float                                              CloudAmbientOcclusionGround;                                // 0x005C   (0x0004)  
	float                                              CloudOpacityScale;                                          // 0x0060   (0x0004)  
	FLinearColor                                       CloudEmissive;                                              // 0x0064   (0x0010)  
	FLinearColor                                       LightningTint;                                              // 0x0074   (0x0010)  
	float                                              EarthShadowSharpness;                                       // 0x0084   (0x0004)  
	float                                              InscatteringBrightness;                                     // 0x0088   (0x0004)  
};

/// Class /Script/MFClimateRuntime.MFClimateVolumeCloudComponent
/// Size: 0x04C8 (1224 bytes) (0x000110 - 0x0004C8) align 8 MaxSize: 0x04C8
class UMFClimateVolumeCloudComponent : public UMFClimateComponent
{ 
public:
	bool                                               bAutoColorFromSystem;                                       // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	FLinearColor                                       SunColorTop;                                                // 0x0114   (0x0010)  
	FLinearColor                                       SunColorBottom;                                             // 0x0124   (0x0010)  
	FVector                                            SunDirection;                                               // 0x0134   (0x000C)  
	FLinearColor                                       CloudAmbientGround;                                         // 0x0140   (0x0010)  
	FLinearColor                                       CloudAmbientSky;                                            // 0x0150   (0x0010)  
	float                                              PreExposureSmoothness;                                      // 0x0160   (0x0004)  
	bool                                               bAutoWindFromSystem;                                        // 0x0164   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	float                                              SystemWindMultiplier;                                       // 0x0168   (0x0004)  
	FVector2D                                          CloudWind;                                                  // 0x016C   (0x0008)  
	float                                              CloudVerticalWind;                                          // 0x0174   (0x0004)  
	class AMFClimateWeatherMapGenerator*               WeatherMapGenerator;                                        // 0x0178   (0x0008)  
	class UTexture*                                    CustomWeatherMap;                                           // 0x0180   (0x0008)  
	float                                              CustomWeatherMapSize;                                       // 0x0188   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	class UMFClimateCloudProfile*                      CloudProfile;                                               // 0x0190   (0x0008)  
	FMFClimateCloudSettings                            CloudSettings;                                              // 0x0198   (0x008C)  
	unsigned char                                      UnknownData03_6[0x21C];                                     // 0x0224   (0x021C)  MISSED
	float                                              HibernateUpdateRemain;                                      // 0x0440   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0444   (0x0004)  MISSED
	class UMFClimateCloudNoiseGroupPlatformSwitcher*   NoiseGroupSwitcher;                                         // 0x0448   (0x0008)  
	class UTextureRenderTarget2D*                      MSApproxRT;                                                 // 0x0450   (0x0008)  
	class UTextureRenderTarget2D*                      RaymarchRTFull;                                             // 0x0458   (0x0008)  
	class UTextureRenderTarget2D*                      RaymarchRTCheckerboard;                                     // 0x0460   (0x0008)  
	class UTextureRenderTarget2D*                      ResolveRT;                                                  // 0x0468   (0x0008)  
	class UVolumeTexture*                              CachedBaseNoiseTexture;                                     // 0x0470   (0x0008)  
	class UVolumeTexture*                              CachedDetailNoiseTexture;                                   // 0x0478   (0x0008)  
	class UTexture2D*                                  CachedCurlNoiseTexture;                                     // 0x0480   (0x0008)  
	class UTexture2D*                                  CachedLUT0Texture;                                          // 0x0488   (0x0008)  
	TArray<class AMFClimateCloudCustomVolume*>         CustomVolumes;                                              // 0x0490   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x04A0   (0x0008)  MISSED
	class AMFClimateCloudCustomVolumesManager*         SDFManager;                                                 // 0x04A8   (0x0008)  
	class UTextureRenderTarget2D*                      SDFCloudRTFull;                                             // 0x04B0   (0x0008)  
	class UTextureRenderTarget2D*                      SDFCloudRTCheckerboard;                                     // 0x04B8   (0x0008)  
	class UTextureRenderTarget2D*                      SDFCloudResolveRT;                                          // 0x04C0   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateVolumeCloudComponent.GetSDFCloudRaymarchResult
	// class UTexture* GetSDFCloudRaymarchResult();                                                                             // [0x537a3d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateVolumeCloudComponent.GetRaymarchResult
	// class UTexture* GetRaymarchResult();                                                                                     // [0x537a3bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFClimateRuntime.MFClimateVolumeCloud
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFClimateVolumeCloud : public AActor
{ 
public:
	class UMFClimateVolumeCloudComponent*              VolumeCloud;                                                // 0x0318   (0x0008)  
};

/// Struct /Script/MFClimateRuntime.MFClimateWeatherLayer
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMFClimateWeatherLayer
{ 
	float                                              BlendWeight;                                                // 0x0000   (0x0004)  
	float                                              EffectiveBlendWeight;                                       // 0x0004   (0x0004)  
	class ULevelSequence*                              TimeOfDaySequence;                                          // 0x0008   (0x0008)  
	SDK_UNDEFINED(4,1265) /* EWeatherLayerEvaluationMode */ __um(EvaluationMode);                                  // 0x0010   (0x0004)  
	bool                                               bIgnorePresetSystem;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x43];                                      // 0x0015   (0x0043)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateWeatherComponent
/// Size: 0x01A0 (416 bytes) (0x000110 - 0x0001A0) align 8 MaxSize: 0x01A0
class UMFClimateWeatherComponent : public UMFClimateComponent
{ 
public:
	class AMFClimateWeatherLayerSceneBindings*         SceneBindings;                                              // 0x0110   (0x0008)  
	TArray<FMFClimateWeatherLayer>                     Layers;                                                     // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0128   (0x0070)  MISSED
	bool                                               bBindingsDirty;                                             // 0x0198   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0199   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateWeatherComponent.SetSequenceWeight
	// void SetSequenceWeight(class ULevelSequence* Sequence, float NewWeight);                                                 // [0x537b038] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherComponent.GetSequenceCurrentWeight
	// float GetSequenceCurrentWeight(class ULevelSequence* Sequence);                                                          // [0x537a444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWeatherComponent.EvaluateAndUpdateValuesImmediately
	// void EvaluateAndUpdateValuesImmediately();                                                                               // [0x5379f1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherComponent.BlendInSequencesAndFadeOthers
	// void BlendInSequencesAndFadeOthers(TArray<ULevelSequence*> ToBlendIn, float MaxDelta);                                   // [0x5379dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherComponent.AddSequenceWeight
	// void AddSequenceWeight(class ULevelSequence* Sequence, float Delta);                                                     // [0x5379ce8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFClimateRuntime.MFClimateWeatherLayerPresetItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMFClimateWeatherLayerPresetItem
{ 
	class ULevelSequence*                              Sequence;                                                   // 0x0000   (0x0008)  
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/MFClimateRuntime.MFClimateLayerPreset
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMFClimateLayerPreset
{ 
	FString                                            PresetName;                                                 // 0x0000   (0x0010)  
	TArray<FMFClimateWeatherLayerPresetItem>           Items;                                                      // 0x0010   (0x0010)  
	float                                              Weight;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent
/// Size: 0x0138 (312 bytes) (0x000110 - 0x000138) align 8 MaxSize: 0x0138
class UMFClimateWeatherLayerPresetsComponent : public UMFClimateComponent
{ 
public:
	SDK_UNDEFINED(16,1266) /* FMulticastInlineDelegate */ __um(OnPresetChangedEvent);                              // 0x0110   (0x0010)  
	TArray<FMFClimateLayerPreset>                      ActivatedPresets;                                           // 0x0120   (0x0010)  
	class UMFClimateWeatherComponent*                  WeatherComponent;                                           // 0x0130   (0x0008)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.UpdateLayerWeights
	// void UpdateLayerWeights(bool bEvaluateImmediately);                                                                      // [0x537b318] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SetPresetWeights
	// void SetPresetWeights(TArray<float>& Weights, bool bEvaluateImmediately);                                                // [0x537af2c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SetPresetWeightByName
	// void SetPresetWeightByName(FString PresetName, float NewWeight, bool bEvaluateImmediately);                              // [0x537add4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SetPresetWeight
	// void SetPresetWeight(int32_t PresetID, float NewWeight, bool bEvaluateImmediately);                                      // [0x537ac94] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.SaveCurrentLayersAsPreset
	// int32_t SaveCurrentLayersAsPreset(int32_t PresetID);                                                                     // [0x537aaa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.PresetChangedEvent__DelegateSignature
	// void PresetChangedEvent__DelegateSignature();                                                                            // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetPresetWeight
	// float GetPresetWeight(int32_t PresetID);                                                                                 // [0x537a2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetPresetName
	// FString GetPresetName(int32_t PresetID);                                                                                 // [0x537a194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.GetPresetCount
	// int32_t GetPresetCount();                                                                                                // [0x1c2d038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWeatherLayerPresetsComponent.AddPresetWeight
	// void AddPresetWeight(int32_t PresetID, float DeltaWeight);                                                               // [0x5379c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFClimateRuntime.MFClimateWeatherLayerSceneBindings
/// Size: 0x0380 (896 bytes) (0x000318 - 0x000380) align 8 MaxSize: 0x0380
class AMFClimateWeatherLayerSceneBindings : public AInfo
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0318   (0x0018)  MISSED
	SDK_UNDEFINED(80,1267) /* TMap<FName, TLazyObjectPtr<AActor*>> */ __um(PersistentMappings_New);                // 0x0330   (0x0050)  
};

/// Class /Script/MFClimateRuntime.MFClimateWeatherListEntry
/// Size: 0x02A0 (672 bytes) (0x000298 - 0x0002A0) align 8 MaxSize: 0x02A0
class UMFClimateWeatherListEntry : public UMFClimateUIBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/MFClimateRuntime.MFClimateWeatherMapGenerator
/// Size: 0x0348 (840 bytes) (0x000318 - 0x000348) align 8 MaxSize: 0x0348
class AMFClimateWeatherMapGenerator : public AActor
{ 
public:
	bool                                               bRefreshEveryFrame;                                         // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0319   (0x0003)  MISSED
	int32_t                                            WeatherMapScaleInKM;                                        // 0x031C   (0x0004)  
	class UTextureRenderTarget2D*                      OutputTarget;                                               // 0x0320   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0328   (0x0010)  MISSED
	float                                              GlobalCoverage;                                             // 0x0338   (0x0004)  
	float                                              GlobalCloudType;                                            // 0x033C   (0x0004)  
	bool                                               bGeometryDirty;                                             // 0x0340   (0x0001)  
	bool                                               bRenderingDirty;                                            // 0x0341   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x0342   (0x0006)  MISSED


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateWeatherMapGenerator.SetGlobalCoverage
	// void SetGlobalCoverage(float NewValue);                                                                                  // [0x537abf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFClimateRuntime.MFClimateWeatherMapGenerator.SetGlobalCloudType
	// void SetGlobalCloudType(float NewValue);                                                                                 // [0x537ab4c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFClimateRuntime.MFClimateWeatherMapCloudMask
/// Size: 0x0340 (832 bytes) (0x000318 - 0x000340) align 16 MaxSize: 0x0340
class AMFClimateWeatherMapCloudMask : public AActor
{ 
public:
	int32_t                                            DrawLayer;                                                  // 0x0318   (0x0004)  
	SDK_UNDEFINED(4,1268) /* EMFClimateCloudMaskType */ __um(DrawType);                                            // 0x031C   (0x0004)  
	class UMaterialInterface*                          Material;                                                   // 0x0320   (0x0008)  
	class UMaterialInstanceDynamic*                    Mid;                                                        // 0x0328   (0x0008)  
	FVector4                                           MaterialParameter;                                          // 0x0330   (0x0010)  
};

/// Struct /Script/MFClimateRuntime.MFClimateMPCItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMFClimateMPCItem
{ 
	class UMaterialParameterCollection*                PublicMPC;                                                  // 0x0000   (0x0008)  
	class UMaterialParameterCollectionInstance*        MPCI;                                                       // 0x0008   (0x0008)  
};

/// Class /Script/MFClimateRuntime.MFClimateWorldSubSystem
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMFClimateWorldSubSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0030   (0x0060)  MISSED
	TArray<class UObject*>                             DuplicatedFeatures;                                         // 0x0090   (0x0010)  
	TArray<class UObject*>                             FeatureTable;                                               // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
	TArray<FMFClimateMPCItem>                          PublicMPCs;                                                 // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetWindComponent
	// class UMFClimateGlobalWindComponent* GetWindComponent();                                                                 // [0x537a988] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetWeatherLayerPresetComponent
	// class UMFClimateWeatherLayerPresetsComponent* GetWeatherLayerPresetComponent();                                          // [0x537a930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetWeatherComponent
	// class UMFClimateWeatherComponent* GetWeatherComponent();                                                                 // [0x537a700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetVolumeCloud
	// class UMFClimateVolumeCloudComponent* GetVolumeCloud();                                                                  // [0x537a6a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetTimeAndGeographyComponent
	// class UMFClimateTimeGeographyComponent* GetTimeAndGeographyComponent();                                                  // [0x537a628] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetSceneLightInterface
	// class UMFClimateSceneLightInterfaceComponent* GetSceneLightInterface();                                                  // [0x537a3ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetRain
	// class AMFClimateRain* GetRain();                                                                                         // [0x537a398] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetFeature
	// class UObject* GetFeature(class UClass* FeatureType, EMFClimateGetFeatureErrorMode ErrorMode);                           // [0x5379f88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFClimateRuntime.MFClimateWorldSubSystem.GetClimateSkyAtmosphere
	// class UMFClimateSkyAtmosphereComponent* GetClimateSkyAtmosphere();                                                       // [0x5379f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MFClimateRuntime.MFClimateNoiseGenerationParams
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMFClimateNoiseGenerationParams
{ 
	SDK_UNDEFINED(4,1269) /* EMFClimateNoiseType */    __um(NoiseType);                                            // 0x0000   (0x0004)  
	int32_t                                            CellNoiseCells;                                             // 0x0004   (0x0004)  
	float                                              CellNoiseScale;                                             // 0x0008   (0x0004)  
	bool                                               bCellNoiseUseSmoothMin : 1;                                 // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              CellNoiseSmoothMinK;                                        // 0x0010   (0x0004)  
};

/// Struct /Script/MFClimateRuntime.MFClimateCurlCloudNoiseGenerationParams
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMFClimateCurlCloudNoiseGenerationParams
{ 
	int32_t                                            CurlCells;                                                  // 0x0000   (0x0004)  
	float                                              CurlBrightness;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/MFClimateRuntime.MFClimateWeatherMapCloudNoiseGenerationParams
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMFClimateWeatherMapCloudNoiseGenerationParams
{ 
	int32_t                                            CoverageWorleyCellNum;                                      // 0x0000   (0x0004)  
	int32_t                                            CoveragePerlinFreq;                                         // 0x0004   (0x0004)  
	int32_t                                            CloudTypePerlinFreq;                                        // 0x0008   (0x0004)  
};

/// Struct /Script/MFClimateRuntime.MFClimateSharedNoiseGenerationSettings
/// Size: 0x0064 (100 bytes) (0x000000 - 0x000064) align 4 MaxSize: 0x0064
struct FMFClimateSharedNoiseGenerationSettings
{ 
	FMFClimateNoiseGenerationParams                    BaseNoiseGenerationParams;                                  // 0x0000   (0x0014)  
	FMFClimateNoiseGenerationParams                    DetailNoiseGenerationParams;                                // 0x0014   (0x0014)  
	FMFClimateNoiseGenerationParams                    BaseNoise2DGenerationParams;                                // 0x0028   (0x0014)  
	FMFClimateNoiseGenerationParams                    DetailNoise2DGenerationParams;                              // 0x003C   (0x0014)  
	FMFClimateCurlCloudNoiseGenerationParams           CurlNoiseParams;                                            // 0x0050   (0x0008)  
	FMFClimateWeatherMapCloudNoiseGenerationParams     WeatherMapParams;                                           // 0x0058   (0x000C)  
};

/// Struct /Script/MFClimateRuntime.MFClimateRainParameterUpdateTick
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FMFClimateRainParameterUpdateTick : FTickFunction
{ 
	class AMFClimateRain*                              Rain;                                                       // 0x0038   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(AMFClimateActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UMFClimateComponent) == 0x0110); // 272 bytes (0x0000F8 - 0x000110)
static_assert(sizeof(UMFClimateBakeModeComponent) == 0x0198); // 408 bytes (0x000110 - 0x000198)
static_assert(sizeof(AMFClimateBakeMode) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UMFClimateBaseBakeProcedure) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMFClimateBakeProcedure) == 0x00B8); // 184 bytes (0x000040 - 0x0000B8)
static_assert(sizeof(UMFClimateBaseLightningEventProducer) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFClimateCelestialOrbit) == 0x02C0); // 704 bytes (0x000270 - 0x0002C0)
static_assert(sizeof(AMFClimateCelestialBody) == 0x0340); // 832 bytes (0x000318 - 0x000340)
static_assert(sizeof(UMFClimateCirrusCloud) == 0x0158); // 344 bytes (0x000110 - 0x000158)
static_assert(sizeof(AMFClimateCloudCustomVolume) == 0x0350); // 848 bytes (0x000318 - 0x000350)
static_assert(sizeof(AMFClimateCloudCustomVolumesManager) == 0x0360); // 864 bytes (0x000318 - 0x000360)
static_assert(sizeof(UMFClimateCloudNoiseGeneratorV2) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(FMFClimatePlatformNoiseGenerationSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UMFClimateCloudNoiseGroup) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UMFClimateCloudNoiseGroupPlatformSwitcher) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FMFClimateCloudTypeDescriptor) == 0x0228); // 552 bytes (0x000000 - 0x000228)
static_assert(sizeof(UMFClimateCloudProfile) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(AMFClimateDemoGameMode) == 0x0400); // 1024 bytes (0x000400 - 0x000400)
static_assert(sizeof(UMFClimateGlobalWindComponent) == 0x0140); // 320 bytes (0x000110 - 0x000140)
static_assert(sizeof(AMFClimateGlobalWind) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UMFClimateSceneLightInterfaceComponent) == 0x0118); // 280 bytes (0x000110 - 0x000118)
static_assert(sizeof(UMFClimateHDSunMoonSceneLightComponent) == 0x01C8); // 456 bytes (0x000118 - 0x0001C8)
static_assert(sizeof(AMFClimateHDSunMoonSceneLight) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(AMFClimateIrcCamera) == 0x0330); // 816 bytes (0x000318 - 0x000330)
static_assert(sizeof(FMFClimateFractalLightningGenerateParams) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(AMFClimateLightningChannelActor) == 0x03A8); // 936 bytes (0x000318 - 0x0003A8)
static_assert(sizeof(FMFClimateLightningEvent) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UMFClimateLightningDirectorComponent) == 0x0218); // 536 bytes (0x000110 - 0x000218)
static_assert(sizeof(UMFClimateLightningEventProducer) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UMFClimateMovableRainWetnessComponent) == 0x0220); // 544 bytes (0x0000F8 - 0x000220)
static_assert(sizeof(AMFClimateRain) == 0x0410); // 1040 bytes (0x000328 - 0x000410)
static_assert(sizeof(AMFClimateParticleRain) == 0x0530); // 1328 bytes (0x000410 - 0x000530)
static_assert(sizeof(UMFClimatePlayerTransformComponent) == 0x02C0); // 704 bytes (0x000270 - 0x0002C0)
static_assert(sizeof(FMFClimateRainOcclusionTestQueueItem) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UMFClimateRainOcclusionTestManager) == 0x0130); // 304 bytes (0x0000F8 - 0x000130)
static_assert(sizeof(AMFClimateSDFCanvas) == 0x0338); // 824 bytes (0x000318 - 0x000338)
static_assert(sizeof(UMFClimateSettings) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UMFClimateSingleSceneLightComponent) == 0x0138); // 312 bytes (0x000118 - 0x000138)
static_assert(sizeof(AMFClimateSimpleLight) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UMFClimateSkyAtmosphereComponent) == 0x03D8); // 984 bytes (0x000110 - 0x0003D8)
static_assert(sizeof(AMFClimateBaseSkyMesh) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(AMFClimateSingleMeshSky) == 0x0348); // 840 bytes (0x000320 - 0x000348)
static_assert(sizeof(FSnowTrail) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UMFClimateSnowTrailManager) == 0x0178); // 376 bytes (0x0000F8 - 0x000178)
static_assert(sizeof(UMFClimateStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFClimateSunMoonSceneLightComponent) == 0x0190); // 400 bytes (0x000118 - 0x000190)
static_assert(sizeof(AMFClimateSunMoonSceneLight) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UMFClimateTimeGeographyComponent) == 0x0210); // 528 bytes (0x000110 - 0x000210)
static_assert(sizeof(AMFClimateTimeGeography) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UMFClimateTodIrcBase) == 0x0118); // 280 bytes (0x0000B8 - 0x000118)
static_assert(sizeof(UMFClimateTodIrc2D) == 0x0128); // 296 bytes (0x000118 - 0x000128)
static_assert(sizeof(UMFClimateTodIrcPanorama) == 0x0120); // 288 bytes (0x000118 - 0x000120)
static_assert(sizeof(AMFClimateTodSequenceMixer) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UMFClimateTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFClimateUIBase) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(FMFClimateCloudSettings) == 0x008C); // 140 bytes (0x000000 - 0x00008C)
static_assert(sizeof(UMFClimateVolumeCloudComponent) == 0x04C8); // 1224 bytes (0x000110 - 0x0004C8)
static_assert(sizeof(AMFClimateVolumeCloud) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(FMFClimateWeatherLayer) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UMFClimateWeatherComponent) == 0x01A0); // 416 bytes (0x000110 - 0x0001A0)
static_assert(sizeof(FMFClimateWeatherLayerPresetItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMFClimateLayerPreset) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMFClimateWeatherLayerPresetsComponent) == 0x0138); // 312 bytes (0x000110 - 0x000138)
static_assert(sizeof(AMFClimateWeatherLayerSceneBindings) == 0x0380); // 896 bytes (0x000318 - 0x000380)
static_assert(sizeof(UMFClimateWeatherListEntry) == 0x02A0); // 672 bytes (0x000298 - 0x0002A0)
static_assert(sizeof(AMFClimateWeatherMapGenerator) == 0x0348); // 840 bytes (0x000318 - 0x000348)
static_assert(sizeof(AMFClimateWeatherMapCloudMask) == 0x0340); // 832 bytes (0x000318 - 0x000340)
static_assert(sizeof(FMFClimateMPCItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMFClimateWorldSubSystem) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(FMFClimateNoiseGenerationParams) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMFClimateCurlCloudNoiseGenerationParams) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMFClimateWeatherMapCloudNoiseGenerationParams) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMFClimateSharedNoiseGenerationSettings) == 0x0064); // 100 bytes (0x000000 - 0x000064)
static_assert(sizeof(FMFClimateRainParameterUpdateTick) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(offsetof(AMFClimateActor, System) == 0x0318);
static_assert(offsetof(UMFClimateComponent, System) == 0x00F8);
static_assert(offsetof(UMFClimateBakeModeComponent, RegisteredBakeProcedures) == 0x0118);
static_assert(offsetof(UMFClimateBakeModeComponent, RunningBakeProcedure) == 0x0190);
static_assert(offsetof(AMFClimateBakeMode, BakeMode) == 0x0318);
static_assert(offsetof(UMFClimateBaseBakeProcedure, Baker) == 0x0030);
static_assert(offsetof(UMFClimateBakeProcedure, TodsToBake) == 0x0040);
static_assert(offsetof(UMFClimateBakeProcedure, CurrentWeatherName) == 0x0070);
static_assert(offsetof(UMFClimateBakeProcedure, BackupWeatherLayers) == 0x0090);
static_assert(offsetof(UMFClimateBaseLightningEventProducer, Director) == 0x0028);
static_assert(offsetof(UMFClimateCelestialOrbit, CelestialRotation) == 0x0290);
static_assert(offsetof(UMFClimateCelestialOrbit, CelestialPosition) == 0x029C);
static_assert(offsetof(UMFClimateCelestialOrbit, CelestialToEarthEcliptic) == 0x02A8);
static_assert(offsetof(AMFClimateCelestialBody, Color) == 0x031C);
static_assert(offsetof(AMFClimateCelestialBody, OrbitComponent) == 0x0330);
static_assert(offsetof(AMFClimateCelestialBody, RotatedPivot) == 0x0338);
static_assert(offsetof(UMFClimateCirrusCloud, EnvironmentLightColor) == 0x0114);
static_assert(offsetof(UMFClimateCirrusCloud, EnvironmentLightDir) == 0x0124);
static_assert(offsetof(UMFClimateCirrusCloud, Albedo) == 0x0138);
static_assert(offsetof(UMFClimateCirrusCloud, Emissive) == 0x013C);
static_assert(offsetof(AMFClimateCloudCustomVolume, DetailOffset) == 0x0334);
static_assert(offsetof(AMFClimateCloudCustomVolumesManager, CloudTextures) == 0x0318);
static_assert(offsetof(AMFClimateCloudCustomVolumesManager, CloudTextureAtlas) == 0x0330);
static_assert(offsetof(UMFClimateCloudNoiseGeneratorV2, NoiseTextureSize) == 0x0030);
static_assert(offsetof(UMFClimateCloudNoiseGeneratorV2, OutputTexture3D) == 0x0078);
static_assert(offsetof(UMFClimateCloudNoiseGeneratorV2, OutputTexture2D) == 0x0080);
static_assert(offsetof(FMFClimatePlatformNoiseGenerationSettings, BaseNoiseTextureSize) == 0x0000);
static_assert(offsetof(FMFClimatePlatformNoiseGenerationSettings, DetailNoiseTextureSize) == 0x000C);
static_assert(offsetof(FMFClimatePlatformNoiseGenerationSettings, BaseNoise2DTextureSize) == 0x0018);
static_assert(offsetof(FMFClimatePlatformNoiseGenerationSettings, DetailNoise2DTextureSize) == 0x0020);
static_assert(offsetof(FMFClimatePlatformNoiseGenerationSettings, WeatherMapNoiseTextureSize) == 0x0028);
static_assert(offsetof(FMFClimatePlatformNoiseGenerationSettings, CurlNoiseTextureSize) == 0x0030);
static_assert(offsetof(UMFClimateCloudNoiseGroup, PlatformSettings) == 0x0030);
static_assert(offsetof(UMFClimateCloudNoiseGroup, SavedBaseNoise) == 0x0068);
static_assert(offsetof(UMFClimateCloudNoiseGroup, SavedDetailNoise) == 0x0070);
static_assert(offsetof(UMFClimateCloudNoiseGroup, SavedWeatherMapNoise) == 0x0078);
static_assert(offsetof(UMFClimateCloudNoiseGroup, SavedCurlNoise) == 0x0080);
static_assert(offsetof(UMFClimateCloudNoiseGroupPlatformSwitcher, CookedAsset) == 0x0030);
static_assert(offsetof(FMFClimateCloudTypeDescriptor, BaseNoiseCenter) == 0x0008);
static_assert(offsetof(FMFClimateCloudTypeDescriptor, BaseNoiseVariation) == 0x0090);
static_assert(offsetof(FMFClimateCloudTypeDescriptor, ExtinctionScale) == 0x0118);
static_assert(offsetof(FMFClimateCloudTypeDescriptor, Erosion) == 0x01A0);
static_assert(offsetof(UMFClimateCloudProfile, TypeDescriptors) == 0x0030);
static_assert(offsetof(UMFClimateCloudProfile, LUT0) == 0x0040);
static_assert(offsetof(UMFClimateGlobalWindComponent, Direction) == 0x0110);
static_assert(offsetof(UMFClimateGlobalWindComponent, WindTravel) == 0x011C);
static_assert(offsetof(AMFClimateGlobalWind, GlobalWindComponent) == 0x0318);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, SunLight) == 0x0118);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, MoonLight) == 0x0120);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, BindSun) == 0x0128);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, BindMoon) == 0x0130);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, SunDirection) == 0x0138);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, MoonDirection) == 0x0144);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, SunColoredBrightness) == 0x0150);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, MoonColoredBrightness) == 0x0160);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, SunLightComponent) == 0x0180);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, MoonLightComponent) == 0x0188);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, SunScatteredIrradiance) == 0x0190);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, MoonScatteredIrradiance) == 0x01A0);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, CurrentLightningSceneLightColor) == 0x01B0);
static_assert(offsetof(UMFClimateHDSunMoonSceneLightComponent, LightningFakeLight) == 0x01C0);
static_assert(offsetof(AMFClimateHDSunMoonSceneLight, MFClimateLight) == 0x0318);
static_assert(offsetof(AMFClimateIrcCamera, CameraComponent) == 0x0318);
static_assert(offsetof(AMFClimateIrcCamera, CameraTag) == 0x0320);
static_assert(offsetof(FMFClimateFractalLightningGenerateParams, TargetOffset) == 0x000C);
static_assert(offsetof(FMFClimateFractalLightningGenerateParams, MinMaxBranchLiftAngleDegrees) == 0x0028);
static_assert(offsetof(AMFClimateLightningChannelActor, LightningMaterial) == 0x0318);
static_assert(offsetof(AMFClimateLightningChannelActor, Mid) == 0x0320);
static_assert(offsetof(AMFClimateLightningChannelActor, Params) == 0x0328);
static_assert(offsetof(AMFClimateLightningChannelActor, PMC) == 0x0360);
static_assert(offsetof(FMFClimateLightningEvent, StartPosition) == 0x0004);
static_assert(offsetof(FMFClimateLightningEvent, EndPosition) == 0x0010);
static_assert(offsetof(UMFClimateLightningDirectorComponent, InstantiatedLightningActor) == 0x0110);
static_assert(offsetof(UMFClimateLightningDirectorComponent, ExecutingLightningEvent) == 0x0118);
static_assert(offsetof(UMFClimateLightningDirectorComponent, EventProducer) == 0x0150);
static_assert(offsetof(UMFClimateLightningDirectorComponent, LightningChannelType) == 0x0158);
static_assert(offsetof(UMFClimateLightningDirectorComponent, LightningTint) == 0x0174);
static_assert(offsetof(UMFClimateMovableRainWetnessComponent, LastOccludePhysicalMaterial) == 0x00F8);
static_assert(offsetof(UMFClimateMovableRainWetnessComponent, AccumulationParameterName) == 0x0124);
static_assert(offsetof(UMFClimateMovableRainWetnessComponent, OcclusionParameterName) == 0x012C);
static_assert(offsetof(UMFClimateMovableRainWetnessComponent, MFClimateSystem) == 0x0160);
static_assert(offsetof(UMFClimateMovableRainWetnessComponent, RainActor) == 0x0168);
static_assert(offsetof(UMFClimateMovableRainWetnessComponent, CollectedMaterials) == 0x0170);
static_assert(offsetof(AMFClimateRain, PuddleRippleFrequencies) == 0x0340);
static_assert(offsetof(AMFClimateRain, SnowTrailManager) == 0x0358);
static_assert(offsetof(AMFClimateRain, PlayerPosition) == 0x0380);
static_assert(offsetof(AMFClimateRain, PlayerRotation) == 0x0388);
static_assert(offsetof(AMFClimateRain, WindAlignedPivot) == 0x0390);
static_assert(offsetof(AMFClimateRain, WetnessComponent) == 0x0398);
static_assert(offsetof(AMFClimateRain, RainOcclusionTestManager) == 0x03C0);
static_assert(offsetof(AMFClimateParticleRain, RainShadowCapture) == 0x0410);
static_assert(offsetof(AMFClimateParticleRain, WideShadowCapture) == 0x0418);
static_assert(offsetof(AMFClimateParticleRain, NiagaraComponents) == 0x0428);
static_assert(offsetof(AMFClimateParticleRain, CascadesComponents) == 0x0438);
static_assert(offsetof(FMFClimateRainOcclusionTestQueueItem, Component) == 0x0000);
static_assert(offsetof(UMFClimateRainOcclusionTestManager, Rain) == 0x00F8);
static_assert(offsetof(UMFClimateRainOcclusionTestManager, LocalObservingTargetComponent) == 0x0108);
static_assert(offsetof(UMFClimateRainOcclusionTestManager, MovableObjectQueue) == 0x0110);
static_assert(offsetof(UMFClimateRainOcclusionTestManager, MovableObjectQueue_Off) == 0x0120);
static_assert(offsetof(AMFClimateSDFCanvas, Root) == 0x0318);
static_assert(offsetof(AMFClimateSDFCanvas, SourceMesh) == 0x0320);
static_assert(offsetof(AMFClimateSDFCanvas, TargetTexture) == 0x0328);
static_assert(offsetof(UMFClimateSettings, MFClimateMPCPaths) == 0x0038);
static_assert(offsetof(UMFClimateSingleSceneLightComponent, BoundCelestialBody) == 0x0118);
static_assert(offsetof(UMFClimateSingleSceneLightComponent, MainLight) == 0x0128);
static_assert(offsetof(UMFClimateSingleSceneLightComponent, Light) == 0x0130);
static_assert(offsetof(AMFClimateSimpleLight, MFClimateLight) == 0x0318);
static_assert(offsetof(UMFClimateSkyAtmosphereComponent, RawSkyAtmosphere) == 0x0350);
static_assert(offsetof(UMFClimateSkyAtmosphereComponent, SkyAtmosphereTransmittanceAtZenith) == 0x0358);
static_assert(offsetof(UMFClimateSkyAtmosphereComponent, SkyAtmosphereTransmittanceCurrent) == 0x0368);
static_assert(offsetof(UMFClimateSkyAtmosphereComponent, CpuSkyAtmosphereSkyTex) == 0x0388);
static_assert(offsetof(UMFClimateSkyAtmosphereComponent, CpuSkyAtmosphereTransmittanceTex) == 0x0390);
static_assert(offsetof(AMFClimateSingleMeshSky, Material) == 0x0320);
static_assert(offsetof(AMFClimateSingleMeshSky, ShadingMesh) == 0x0328);
static_assert(offsetof(AMFClimateSingleMeshSky, SkySphereScale) == 0x0330);
static_assert(offsetof(AMFClimateSingleMeshSky, SkySphereLocation) == 0x033C);
static_assert(offsetof(UMFClimateSnowTrailManager, TrailMaterial) == 0x00F8);
static_assert(offsetof(UMFClimateSnowTrailManager, HistoryBlendMaterial) == 0x0100);
static_assert(offsetof(UMFClimateSnowTrailManager, ClearMaterial) == 0x0108);
static_assert(offsetof(UMFClimateSnowTrailManager, CopyMaterial) == 0x0110);
static_assert(offsetof(UMFClimateSnowTrailManager, EdgeAccumulationMaterial) == 0x0118);
static_assert(offsetof(UMFClimateSnowTrailManager, SnowTrailMPC) == 0x0120);
static_assert(offsetof(UMFClimateSnowTrailManager, TrailExtent) == 0x0128);
static_assert(offsetof(UMFClimateSnowTrailManager, FootPrintScale) == 0x0130);
static_assert(offsetof(UMFClimateSnowTrailManager, Current) == 0x0140);
static_assert(offsetof(UMFClimateSnowTrailManager, History) == 0x0148);
static_assert(offsetof(UMFClimateSnowTrailManager, Trails) == 0x0150);
static_assert(offsetof(UMFClimateSnowTrailManager, Snow) == 0x0158);
static_assert(offsetof(UMFClimateSnowTrailManager, SnowTrails) == 0x0160);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, BindSun) == 0x0118);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, BindMoon) == 0x0120);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, MainDirectionalLight) == 0x0138);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, MainDirectionalLightComponent) == 0x0140);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, LightningColor) == 0x0148);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, FakeAtmLight1) == 0x0158);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, FakeAtmLight2) == 0x0160);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, SunScatteredIrradiance) == 0x016C);
static_assert(offsetof(UMFClimateSunMoonSceneLightComponent, MoonScatteredIrradiance) == 0x017C);
static_assert(offsetof(AMFClimateSunMoonSceneLight, MFClimateLight) == 0x0318);
static_assert(offsetof(UMFClimateTimeGeographyComponent, SceneNorthVector) == 0x012C);
static_assert(offsetof(AMFClimateTimeGeography, TimeGeographyComponent) == 0x0318);
static_assert(offsetof(UMFClimateTodIrcBase, OutputFolder) == 0x00B8);
static_assert(offsetof(UMFClimateTodIrcBase, FileNameFormat) == 0x00C8);
static_assert(offsetof(UMFClimateTodIrcBase, CameraTagFilter) == 0x00D8);
static_assert(offsetof(UMFClimateTodIrcBase, Cameras) == 0x00F0);
static_assert(offsetof(UMFClimateTodIrcBase, BackupCameraLocation) == 0x0100);
static_assert(offsetof(UMFClimateTodIrcBase, BackupCameraRotation) == 0x010C);
static_assert(offsetof(AMFClimateTodSequenceMixer, WeatherComponent) == 0x0318);
static_assert(offsetof(AMFClimateTodSequenceMixer, PresetsComponent) == 0x0320);
static_assert(offsetof(UMFClimateUIBase, MFClimateSystem) == 0x0290);
static_assert(offsetof(FMFClimateCloudSettings, CloudAlbedo) == 0x0034);
static_assert(offsetof(FMFClimateCloudSettings, CloudEmissive) == 0x0064);
static_assert(offsetof(FMFClimateCloudSettings, LightningTint) == 0x0074);
static_assert(offsetof(UMFClimateVolumeCloudComponent, SunColorTop) == 0x0114);
static_assert(offsetof(UMFClimateVolumeCloudComponent, SunColorBottom) == 0x0124);
static_assert(offsetof(UMFClimateVolumeCloudComponent, SunDirection) == 0x0134);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CloudAmbientGround) == 0x0140);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CloudAmbientSky) == 0x0150);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CloudWind) == 0x016C);
static_assert(offsetof(UMFClimateVolumeCloudComponent, WeatherMapGenerator) == 0x0178);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CustomWeatherMap) == 0x0180);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CloudProfile) == 0x0190);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CloudSettings) == 0x0198);
static_assert(offsetof(UMFClimateVolumeCloudComponent, NoiseGroupSwitcher) == 0x0448);
static_assert(offsetof(UMFClimateVolumeCloudComponent, MSApproxRT) == 0x0450);
static_assert(offsetof(UMFClimateVolumeCloudComponent, RaymarchRTFull) == 0x0458);
static_assert(offsetof(UMFClimateVolumeCloudComponent, RaymarchRTCheckerboard) == 0x0460);
static_assert(offsetof(UMFClimateVolumeCloudComponent, ResolveRT) == 0x0468);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CachedBaseNoiseTexture) == 0x0470);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CachedDetailNoiseTexture) == 0x0478);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CachedCurlNoiseTexture) == 0x0480);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CachedLUT0Texture) == 0x0488);
static_assert(offsetof(UMFClimateVolumeCloudComponent, CustomVolumes) == 0x0490);
static_assert(offsetof(UMFClimateVolumeCloudComponent, SDFManager) == 0x04A8);
static_assert(offsetof(UMFClimateVolumeCloudComponent, SDFCloudRTFull) == 0x04B0);
static_assert(offsetof(UMFClimateVolumeCloudComponent, SDFCloudRTCheckerboard) == 0x04B8);
static_assert(offsetof(UMFClimateVolumeCloudComponent, SDFCloudResolveRT) == 0x04C0);
static_assert(offsetof(AMFClimateVolumeCloud, VolumeCloud) == 0x0318);
static_assert(offsetof(FMFClimateWeatherLayer, TimeOfDaySequence) == 0x0008);
static_assert(offsetof(UMFClimateWeatherComponent, SceneBindings) == 0x0110);
static_assert(offsetof(UMFClimateWeatherComponent, Layers) == 0x0118);
static_assert(offsetof(FMFClimateWeatherLayerPresetItem, Sequence) == 0x0000);
static_assert(offsetof(FMFClimateLayerPreset, PresetName) == 0x0000);
static_assert(offsetof(FMFClimateLayerPreset, Items) == 0x0010);
static_assert(offsetof(UMFClimateWeatherLayerPresetsComponent, ActivatedPresets) == 0x0120);
static_assert(offsetof(UMFClimateWeatherLayerPresetsComponent, WeatherComponent) == 0x0130);
static_assert(offsetof(AMFClimateWeatherMapGenerator, OutputTarget) == 0x0320);
static_assert(offsetof(AMFClimateWeatherMapCloudMask, Material) == 0x0320);
static_assert(offsetof(AMFClimateWeatherMapCloudMask, Mid) == 0x0328);
static_assert(offsetof(AMFClimateWeatherMapCloudMask, MaterialParameter) == 0x0330);
static_assert(offsetof(FMFClimateMPCItem, PublicMPC) == 0x0000);
static_assert(offsetof(FMFClimateMPCItem, MPCI) == 0x0008);
static_assert(offsetof(UMFClimateWorldSubSystem, DuplicatedFeatures) == 0x0090);
static_assert(offsetof(UMFClimateWorldSubSystem, FeatureTable) == 0x00A0);
static_assert(offsetof(UMFClimateWorldSubSystem, PublicMPCs) == 0x00C0);
static_assert(offsetof(FMFClimateSharedNoiseGenerationSettings, BaseNoiseGenerationParams) == 0x0000);
static_assert(offsetof(FMFClimateSharedNoiseGenerationSettings, DetailNoiseGenerationParams) == 0x0014);
static_assert(offsetof(FMFClimateSharedNoiseGenerationSettings, BaseNoise2DGenerationParams) == 0x0028);
static_assert(offsetof(FMFClimateSharedNoiseGenerationSettings, DetailNoise2DGenerationParams) == 0x003C);
static_assert(offsetof(FMFClimateSharedNoiseGenerationSettings, CurlNoiseParams) == 0x0050);
static_assert(offsetof(FMFClimateSharedNoiseGenerationSettings, WeatherMapParams) == 0x0058);
static_assert(offsetof(FMFClimateRainParameterUpdateTick, Rain) == 0x0038);
