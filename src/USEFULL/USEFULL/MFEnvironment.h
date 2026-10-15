// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LevelSequence

#pragma pack(push, 0x1)

/// Class /Script/MFEnvironment.MFEnvActorInfoComponent
/// Size: 0x0128 (296 bytes) (0x0000F8 - 0x000128) align 8 MaxSize: 0x0128
class UMFEnvActorInfoComponent : public UActorComponent
{ 
public:
	class AMFEnvSystem*                                EnvSystem;                                                  // 0x00F8   (0x0008)  
	TArray<class USkinnedMeshComponent*>               SkinMeshArray;                                              // 0x0100   (0x0010)  
	FVector                                            PreviousPosition;                                           // 0x0110   (0x000C)  
	float                                              PreviousPositionTime;                                       // 0x011C   (0x0004)  
	SDK_UNDEFINED(1,1481) /* EEnvActorType */          __um(EnvActorType);                                         // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	int32_t                                            LatentFrames;                                               // 0x0124   (0x0004)  
};

/// Class /Script/MFEnvironment.MFEnvBaseComponent
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align 8 MaxSize: 0x0100
class UMFEnvBaseComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvAutoExposureComponent
/// Size: 0x01B0 (432 bytes) (0x000100 - 0x0001B0) align 16 MaxSize: 0x01B0
class UMFEnvAutoExposureComponent : public UMFEnvBaseComponent
{ 
public:
	FName                                              ComponentTag;                                               // 0x0100   (0x0008)  
	bool                                               TakeEffect;                                                 // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	class UStaticMeshComponent*                        AEComp;                                                     // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_7[0x98];                                      // 0x0118   (0x0098)  MISSED
};

/// Struct /Script/MFEnvironment.MFEnvBurnBlockBound
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMFEnvBurnBlockBound
{ 
	FVector                                            CenterPos;                                                  // 0x0000   (0x000C)  
	int16_t                                            RotYaw;                                                     // 0x000C   (0x0002)  
	char                                               Extent;                                                     // 0x000E   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x000F   (0x0001)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvBurnComponent
/// Size: 0x01C8 (456 bytes) (0x000100 - 0x0001C8) align 8 MaxSize: 0x01C8
class UMFEnvBurnComponent : public UMFEnvBaseComponent
{ 
public:
	TArray<FMFEnvBurnBlockBound>                       BurnedBlocks;                                               // 0x0100   (0x0010)  
	TArray<class UMFEnvBurnFireComponent*>             FireComponents;                                             // 0x0110   (0x0010)  
	class UTexture2D*                                  BurnMaskTex;                                                // 0x0120   (0x0008)  
	TArray<class UParticleSystemComponent*>            AshesPSCArray;                                              // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,1482) /* FMulticastInlineDelegate */ __um(BurnFireBlockEvent);                                // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0148   (0x0004)  MISSED
	int32_t                                            BurnTexSize;                                                // 0x014C   (0x0004)  
	int32_t                                            BurnAreaSize;                                               // 0x0150   (0x0004)  
	FVector2D                                          BurnAreaCenter;                                             // 0x0154   (0x0008)  
	int32_t                                            SpreadTimes;                                                // 0x015C   (0x0004)  
	int32_t                                            Extent;                                                     // 0x0160   (0x0004)  
	float                                              DitherScale;                                                // 0x0164   (0x0004)  
	float                                              BurnProbability;                                            // 0x0168   (0x0004)  
	float                                              BurnWeightProbabilityScale;                                 // 0x016C   (0x0004)  
	float                                              BurnWindDirWeightScale;                                     // 0x0170   (0x0004)  
	float                                              SpreadInv;                                                  // 0x0174   (0x0004)  
	float                                              BurnTimePlantDown;                                          // 0x0178   (0x0004)  
	float                                              BurnTimePlantBufferRatio;                                   // 0x017C   (0x0004)  
	float                                              BurnTimeEffectOff;                                          // 0x0180   (0x0004)  
	float                                              FireDamagePerSec;                                           // 0x0184   (0x0004)  
	float                                              FireDamageDuration;                                         // 0x0188   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	class UMaterialInterface*                          BurnDecalMaterial;                                          // 0x0190   (0x0008)  
	float                                              DecalFadeInTime;                                            // 0x0198   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	class UParticleSystem*                             ContinuousFiringPS1;                                        // 0x01A0   (0x0008)  
	class UParticleSystem*                             ContinuousFiringPS2;                                        // 0x01A8   (0x0008)  
	float                                              FiringPS1Probability;                                       // 0x01B0   (0x0004)  
	float                                              AshesPSProbability;                                         // 0x01B4   (0x0004)  
	float                                              TexBoxExpand;                                               // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
	class UParticleSystem*                             AshesPS;                                                    // 0x01C0   (0x0008)  


	/// Functions
	// Function /Script/MFEnvironment.MFEnvBurnComponent.OnRep_BurnedBlocks
	// void OnRep_BurnedBlocks();                                                                                               // [0xd5046c] Native|Protected     
};

/// Struct /Script/MFEnvironment.MFEnvBlockInitInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMFEnvBlockInitInfo
{ 
	FMFEnvBurnBlockBound                               BurnBounds;                                                 // 0x0000   (0x0010)  
	char                                               DamageScale;                                                // 0x0010   (0x0001)  
	char                                               TimeScale;                                                  // 0x0011   (0x0001)  
	bool                                               bNoEffects;                                                 // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0013   (0x0001)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvBurnFireBlockComponent
/// Size: 0x0150 (336 bytes) (0x000100 - 0x000150) align 8 MaxSize: 0x0150
class UMFEnvBurnFireBlockComponent : public UMFEnvBaseComponent
{ 
public:
	FMFEnvBlockInitInfo                                BlockInfo;                                                  // 0x0100   (0x0014)  
	unsigned char                                      UnknownData00_6[0x11];                                      // 0x0114   (0x0011)  MISSED
	bool                                               bRemovePlants;                                              // 0x0125   (0x0001)  
	bool                                               bTurnOffEffect;                                             // 0x0126   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0127   (0x0001)  MISSED
	class UParticleSystemComponent*                    ContinuousFiringPSC;                                        // 0x0128   (0x0008)  
	class UMFEnvBurnFireComponent*                     FireComponent;                                              // 0x0130   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0138   (0x0018)  MISSED


	/// Functions
	// Function /Script/MFEnvironment.MFEnvBurnFireBlockComponent.OnRep_TurnOffEffect
	// void OnRep_TurnOffEffect();                                                                                              // [0x53bb7a0] Native|Protected     
	// Function /Script/MFEnvironment.MFEnvBurnFireBlockComponent.OnRep_RemovePlants
	// void OnRep_RemovePlants();                                                                                               // [0x29c3668] Native|Protected     
	// Function /Script/MFEnvironment.MFEnvBurnFireBlockComponent.OnRep_BurnRep
	// void OnRep_BurnRep();                                                                                                    // [0xd5046c] Native|Protected     
};

/// Class /Script/MFEnvironment.MFEnvBurnFireComponent
/// Size: 0x01C0 (448 bytes) (0x000100 - 0x0001C0) align 8 MaxSize: 0x01C0
class UMFEnvBurnFireComponent : public UMFEnvBaseComponent
{ 
public:
	class UMFEnvBurnComponent*                         BurnComponent;                                              // 0x0100   (0x0008)  
	TArray<class UMFEnvBurnFireBlockComponent*>        FireBlocks;                                                 // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0118   (0x00A8)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvMudComponent
/// Size: 0x0190 (400 bytes) (0x000100 - 0x000190) align 8 MaxSize: 0x0190
class UMFEnvMudComponent : public UMFEnvBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0100   (0x0028)  MISSED
	class UMaterialInstanceDynamic*                    MudRTMID;                                                   // 0x0128   (0x0008)  
	class UMaterialInstanceDynamic*                    MudRTCopyMID;                                               // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0138   (0x0018)  MISSED
	float                                              UpdateInv;                                                  // 0x0150   (0x0004)  
	float                                              SampleInv;                                                  // 0x0154   (0x0004)  
	float                                              MudDepth;                                                   // 0x0158   (0x0004)  
	float                                              MudRoll;                                                    // 0x015C   (0x0004)  
	float                                              MudBottom;                                                  // 0x0160   (0x0004)  
	float                                              MudBottomTime;                                              // 0x0164   (0x0004)  
	class UTextureRenderTarget2D*                      MudRT;                                                      // 0x0168   (0x0008)  
	class UTextureRenderTarget2D*                      MudRTCopy;                                                  // 0x0170   (0x0008)  
	class UTextureRenderTarget2D*                      MudRTComposite;                                             // 0x0178   (0x0008)  
	class UTextureRenderTarget2D*                      MudRTBlur;                                                  // 0x0180   (0x0008)  
	class UTextureRenderTarget2D*                      MudRTNormal;                                                // 0x0188   (0x0008)  
};

/// Class /Script/MFEnvironment.MFEnvPhysFoliageActor
/// Size: 0x0358 (856 bytes) (0x000318 - 0x000358) align 8 MaxSize: 0x0358
class AMFEnvPhysFoliageActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0318   (0x0010)  MISSED
	class UHierarchicalInstancedStaticMeshComponent*   HISMInc;                                                    // 0x0328   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0330   (0x0010)  MISSED
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0340   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                      // 0x0348   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0350   (0x0008)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvPhysFoliageComponent
/// Size: 0x0148 (328 bytes) (0x000100 - 0x000148) align 8 MaxSize: 0x0148
class UMFEnvPhysFoliageComponent : public UMFEnvBaseComponent
{ 
public:
	float                                              FoliageReplaceInv;                                          // 0x0100   (0x0004)  
	float                                              FoliageReplaceRadius;                                       // 0x0104   (0x0004)  
	SDK_UNDEFINED(1,1483) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionObjectType);                          // 0x0108   (0x0001)  
	SDK_UNDEFINED(1,1484) /* TEnumAsByte<ECollisionChannel> */ __um(CollisionResponse);                            // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x010A   (0x0006)  MISSED
	class UClass*                                      EnvPhysFoliageActorTemplate;                                // 0x0110   (0x0008)  
	class UDataTable*                                  PhysFoliageMeshDT;                                          // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0120   (0x0018)  MISSED
	TArray<class AMFEnvPhysFoliageActor*>              EnvPhysFoliageActorList;                                    // 0x0138   (0x0010)  
};

/// Class /Script/MFEnvironment.MFEnvSceneInfoCharacterComponent
/// Size: 0x0120 (288 bytes) (0x000100 - 0x000120) align 8 MaxSize: 0x0120
class UMFEnvSceneInfoCharacterComponent : public UMFEnvBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0100   (0x0008)  MISSED
	float                                              WindSpeedDown;                                              // 0x0108   (0x0004)  
	float                                              WindSpeedHorizontal;                                        // 0x010C   (0x0004)  
	float                                              WindRotation;                                               // 0x0110   (0x0004)  
	FVector2D                                          WindDirection;                                              // 0x0114   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x011C   (0x0004)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvSceneInfoComponent
/// Size: 0x0200 (512 bytes) (0x000100 - 0x000200) align 16 MaxSize: 0x0200
class UMFEnvSceneInfoComponent : public UMFEnvBaseComponent
{ 
public:
	TArray<class USkinnedMeshComponent*>               CaptureObjectData_RenderThread;                             // 0x0100   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0110   (0x0050)  MISSED
	TArray<class UMFEnvActorInfoComponent*>            ActorInfoArray;                                             // 0x0160   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0170   (0x0030)  MISSED
	class USceneCaptureComponent2D*                    HeightMapCaptureComponent;                                  // 0x01A0   (0x0008)  
	class USceneCaptureComponent2D*                    RainDepthCaptureComponent;                                  // 0x01A8   (0x0008)  
	class UTextureRenderTarget2D*                      CaptureCharacterRT;                                         // 0x01B0   (0x0008)  
	class UTextureRenderTarget2D*                      CaptureHeightMapRT;                                         // 0x01B8   (0x0008)  
	class UTextureRenderTarget2D*                      CaptureRainDepthRT;                                         // 0x01C0   (0x0008)  
	class UMaterialInterface*                          CaptureHeightMat;                                           // 0x01C8   (0x0008)  
	class UMaterialInterface*                          CaptureRainDepthMat;                                        // 0x01D0   (0x0008)  
	float                                              IdleWaveInv;                                                // 0x01D8   (0x0004)  
	float                                              IdleWaveWindow;                                             // 0x01DC   (0x0004)  
	float                                              CaptureExtent;                                              // 0x01E0   (0x0004)  
	float                                              CaptureCharacterRange;                                      // 0x01E4   (0x0004)  
	float                                              CaptureZOffsetMax;                                          // 0x01E8   (0x0004)  
	float                                              CaptureZOffsetMin;                                          // 0x01EC   (0x0004)  
	float                                              CaptureHeightMapUpdateDistance;                             // 0x01F0   (0x0004)  
	bool                                               DebugUpdateEveryFrame;                                      // 0x01F4   (0x0001)  
	bool                                               enableShowOnlyRainBlockerMode;                              // 0x01F5   (0x0001)  
	unsigned char                                      UnknownData02_7[0xA];                                       // 0x01F6   (0x000A)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFEnvStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFEnvironment.MFEnvStatics.UpdateWindGlobalParams
	// bool UpdateWindGlobalParams(class UWorld* InWorld, float InNormalizedWindLevel, FVector2D InWindDirection);              // [0x53bb7b8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFEnvironment.MFEnvStatics.GetFirstEnvSystem
	// class AMFEnvSystem* GetFirstEnvSystem(class UWorld* InWorld);                                                            // [0x53bb708] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFEnvironment.MFEnvStatics.ClearRenderTarget
	// void ClearRenderTarget(class UTextureRenderTarget2D* InRT);                                                              // [0x53bb680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFEnvironment.MFEnvStatics.CharacterIsProne
	// bool CharacterIsProne(class ACharacter* Character);                                                                      // [0x528f7d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFEnvironment.MFEnvStatics.BPGetFirstEnvSystem
	// class AMFEnvSystem* BPGetFirstEnvSystem(class UObject* WorldContextObject);                                              // [0x53bb424] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFEnvironment.MFEnvSystem
/// Size: 0x03B0 (944 bytes) (0x000318 - 0x0003B0) align 8 MaxSize: 0x03B0
class AMFEnvSystem : public AActor
{ 
public:
	class UMFEnvBurnComponent*                         BurnComponent;                                              // 0x0318   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0320   (0x0008)  MISSED
	class USceneCaptureComponent2D*                    HeightMapCaptureComponent;                                  // 0x0328   (0x0008)  
	class USceneCaptureComponent2D*                    RainDepthCaptureComponent;                                  // 0x0330   (0x0008)  
	class UMFEnvSceneInfoComponent*                    SceneInfoComponent;                                         // 0x0338   (0x0008)  
	class UMFEnvWaterComponent*                        WaterComponent;                                             // 0x0340   (0x0008)  
	class UMFEnvTrailComponent*                        TrailComponent;                                             // 0x0348   (0x0008)  
	class UMFEnvWindComponent*                         WindComponent;                                              // 0x0350   (0x0008)  
	class UMFEnvMudComponent*                          MudComponent;                                               // 0x0358   (0x0008)  
	class UMFEnvPhysFoliageComponent*                  PhysFoliageComponent;                                       // 0x0360   (0x0008)  
	class UMFEnvAutoExposureComponent*                 AutoExposureComponent;                                      // 0x0368   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0370   (0x0008)  MISSED
	class UMaterialInstanceDynamic*                    DebugActorMID;                                              // 0x0378   (0x0008)  
	class APlayerController*                           CacheLocalPC;                                               // 0x0380   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0388   (0x0010)  MISSED
	class UMaterialParameterCollection*                EnvMPC;                                                     // 0x0398   (0x0008)  
	bool                                               Debug_TryFindDebugActor;                                    // 0x03A0   (0x0001)  
	bool                                               Debug_UseAssetTexture;                                      // 0x03A1   (0x0001)  
	bool                                               Debug_IsMonsterHunterDemo;                                  // 0x03A2   (0x0001)  
	bool                                               Debug_ForRenderDocCapture;                                  // 0x03A3   (0x0001)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x03A4   (0x000C)  MISSED


	/// Functions
	// Function /Script/MFEnvironment.MFEnvSystem.BPTestSetFire
	// void BPTestSetFire();                                                                                                    // [0x53bb66c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFEnvironment.MFEnvSystem.BPTestBlowAir
	// void BPTestBlowAir(FVector InForceOrigin, FVector InForceDir, float InMomentum);                                         // [0x53bb510] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFEnvironment.MFEnvTrailComponent
/// Size: 0x0288 (648 bytes) (0x000100 - 0x000288) align 8 MaxSize: 0x0288
class UMFEnvTrailComponent : public UMFEnvBaseComponent
{ 
public:
	class UMaterialInstanceDynamic*                    TrailRTMID;                                                 // 0x0100   (0x0008)  
	class UMaterialInstanceDynamic*                    TrailRTCopyMID;                                             // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0xF8];                                      // 0x0110   (0x00F8)  MISSED
	float                                              Extent;                                                     // 0x0208   (0x0004)  
	float                                              TrailPosExtent;                                             // 0x020C   (0x0004)  
	float                                              TrailOldScale;                                              // 0x0210   (0x0004)  
	float                                              ZHeight;                                                    // 0x0214   (0x0004)  
	float                                              ZFootOffset;                                                // 0x0218   (0x0004)  
	float                                              Radius;                                                     // 0x021C   (0x0004)  
	float                                              ReserveTime;                                                // 0x0220   (0x0004)  
	float                                              UpdateInv;                                                  // 0x0224   (0x0004)  
	class UTextureRenderTarget2D*                      TrailRT;                                                    // 0x0228   (0x0008)  
	class UTextureRenderTarget2D*                      TrailRTCopy;                                                // 0x0230   (0x0008)  
	class UTextureRenderTarget2D*                      TrailPosRT;                                                 // 0x0238   (0x0008)  
	class UTextureRenderTarget2D*                      TrailPosRTCopy;                                             // 0x0240   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0248   (0x0008)  MISSED
	TArray<FVector4>                                   PlayerInfos_RenderThread;                                   // 0x0250   (0x0010)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0260   (0x0028)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvWaterComponent
/// Size: 0x0160 (352 bytes) (0x000100 - 0x000160) align 8 MaxSize: 0x0160
class UMFEnvWaterComponent : public UMFEnvBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0100   (0x0004)  MISSED
	int32_t                                            SimulateFrame;                                              // 0x0104   (0x0004)  
	float                                              Extent;                                                     // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	class UTextureRenderTarget2D*                      WaterHeightRT0;                                             // 0x0110   (0x0008)  
	class UTextureRenderTarget2D*                      WaterHeightRT1;                                             // 0x0118   (0x0008)  
	class UTextureRenderTarget2D*                      WaterHeightRT2;                                             // 0x0120   (0x0008)  
	class UTextureRenderTarget2D*                      WaterCompositeRT;                                           // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0130   (0x0030)  MISSED
};

/// Class /Script/MFEnvironment.MFEnvWindComponent
/// Size: 0x0290 (656 bytes) (0x000100 - 0x000290) align 8 MaxSize: 0x0290
class UMFEnvWindComponent : public UMFEnvBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0100   (0x0030)  MISSED
	float                                              SwayTexUpdateInv;                                           // 0x0130   (0x0004)  
	float                                              SwayTexUpdateDist;                                          // 0x0134   (0x0004)  
	float                                              SwayTexExtent;                                              // 0x0138   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	class UTexture2D*                                  SwayParamTex;                                               // 0x0140   (0x0008)  
	class UTextureRenderTarget2D*                      WindSwayRT;                                                 // 0x0148   (0x0008)  
	class UTextureRenderTarget2D*                      WindSwayRTCopy;                                             // 0x0150   (0x0008)  
	float                                              Extent;                                                     // 0x0158   (0x0004)  
	int32_t                                            IterCountDiffuse;                                           // 0x015C   (0x0004)  
	int32_t                                            IterCountProjection;                                        // 0x0160   (0x0004)  
	float                                              ForceDirectMomentum;                                        // 0x0164   (0x0004)  
	float                                              ForceDirectExponent;                                        // 0x0168   (0x0004)  
	float                                              ForceExplodeMomentum;                                       // 0x016C   (0x0004)  
	float                                              ForceExplodeExponent;                                       // 0x0170   (0x0004)  
	float                                              ForceExplodeLastTime;                                       // 0x0174   (0x0004)  
	float                                              WindDeltaTimeScale;                                         // 0x0178   (0x0004)  
	float                                              WindViscosity;                                              // 0x017C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0180   (0x0004)  MISSED
	float                                              WindForce;                                                  // 0x0184   (0x0004)  
	FVector2D                                          WindDirection;                                              // 0x0188   (0x0008)  
	float                                              WindMax;                                                    // 0x0190   (0x0004)  
	float                                              WindSpeedLarge;                                             // 0x0194   (0x0004)  
	float                                              WindSpeedDetail;                                            // 0x0198   (0x0004)  
	float                                              WindScaleLarge;                                             // 0x019C   (0x0004)  
	float                                              WindScaleDetail;                                            // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01A4   (0x0004)  MISSED
	class ULevelSequence*                              WindSequence;                                               // 0x01A8   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTV1;                                                   // 0x01B0   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTV2;                                                   // 0x01B8   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTV3;                                                   // 0x01C0   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTP1;                                                   // 0x01C8   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTP2;                                                   // 0x01D0   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTVelocity;                                             // 0x01D8   (0x0008)  
	class ULevelSequencePlayer*                        WindSequencePlayer;                                         // 0x01E0   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTV_Slot1_RenderThread;                                 // 0x01E8   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTV_Slot2_RenderThread;                                 // 0x01F0   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTV_Slot3_RenderThread;                                 // 0x01F8   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTP_Slot1_RenderThread;                                 // 0x0200   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTP_Slot2_RenderThread;                                 // 0x0208   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTDebugSlot1_RenderThread;                              // 0x0210   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTDebugSlot2_RenderThread;                              // 0x0218   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTJacobi1_RenderThread;                                 // 0x0220   (0x0008)  
	class UTextureRenderTarget2D*                      WindRTJacobi2_RenderThread;                                 // 0x0228   (0x0008)  
	float                                              Jacobi_Alpha;                                               // 0x0230   (0x0004)  
	float                                              Jacobi_Beta;                                                // 0x0234   (0x0004)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x0238   (0x0058)  MISSED
};

/// Class /Script/MFEnvironment.MFMudDeformationActor
/// Size: 0x0368 (872 bytes) (0x000328 - 0x000368) align 8 MaxSize: 0x0368
class AMFMudDeformationActor : public AStaticMeshActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0328   (0x0004)  MISSED
	int32_t                                            HeightMaskTexelSize;                                        // 0x032C   (0x0004)  
	int32_t                                            ScanStepNum;                                                // 0x0330   (0x0004)  
	FVector                                            LastPos;                                                    // 0x0334   (0x000C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0340   (0x0008)  MISSED
	class UTexture2D*                                  HeightMaskTex;                                              // 0x0348   (0x0008)  
	TArray<char>                                       HeightMaskData;                                             // 0x0350   (0x0010)  
	int32_t                                            TexLatentCreateFrameIndexMax;                               // 0x0360   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0364   (0x0004)  MISSED
};

/// Struct /Script/MFEnvironment.MFEnvPhysFoliageMeshRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FMFEnvPhysFoliageMeshRow : FTableRowBase
{ 
	TWeakObjectPtr<class UStaticMesh*>                 StaticMeshSoftPtr;                                          // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	FSoftObjectPath                                    MeshObjectPath;                                             // 0x0030   (0x0018)  
	SDK_UNDEFINED(1,1485) /* EMFPhysFoliageMeshTypeEnum */ __um(MeshType);                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/MFEnvironment.MFEnvTrailPlayerInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FMFEnvTrailPlayerInfo
{ 
	FVector                                            PlayerPosition;                                             // 0x0000   (0x000C)  
	FVector                                            PlayerPositionLeft;                                         // 0x000C   (0x000C)  
	FVector                                            PlayerPositionRight;                                        // 0x0018   (0x000C)  
	FVector2D                                          Direction;                                                  // 0x0024   (0x0008)  
	float                                              Velocity;                                                   // 0x002C   (0x0004)  
	float                                              Radius;                                                     // 0x0030   (0x0004)  
	SDK_UNDEFINED(1,1486) /* EMFEnvTrailShapeEnum */   __um(Shape);                                                // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/MFEnvironment.MFEnvWindSwayInstInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FMFEnvWindSwayInstInfo
{ 
	class UHierarchicalInstancedStaticMeshComponent*   InstPtr;                                                    // 0x0000   (0x0008)  
	int32_t                                            InstId;                                                     // 0x0008   (0x0004)  
	FVector2D                                          Pos;                                                        // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FVector4                                           Params;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/MFEnvironment.MFEnvWindDirectForceInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMFEnvWindDirectForceInfo
{ 
	FVector2D                                          ForceVector;                                                // 0x0000   (0x0008)  
	FVector2D                                          ForceOrigin;                                                // 0x0008   (0x0008)  
	float                                              ForceMomentum;                                              // 0x0010   (0x0004)  
};

/// Struct /Script/MFEnvironment.MFEnvWindExplodeForceInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMFEnvWindExplodeForceInfo
{ 
	FVector2D                                          ForceOrigin;                                                // 0x0000   (0x0008)  
	float                                              ForceMomentum;                                              // 0x0008   (0x0004)  
	float                                              LastTime;                                                   // 0x000C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UMFEnvActorInfoComponent) == 0x0128); // 296 bytes (0x0000F8 - 0x000128)
static_assert(sizeof(UMFEnvBaseComponent) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UMFEnvAutoExposureComponent) == 0x01B0); // 432 bytes (0x000100 - 0x0001B0)
static_assert(sizeof(FMFEnvBurnBlockBound) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMFEnvBurnComponent) == 0x01C8); // 456 bytes (0x000100 - 0x0001C8)
static_assert(sizeof(FMFEnvBlockInitInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UMFEnvBurnFireBlockComponent) == 0x0150); // 336 bytes (0x000100 - 0x000150)
static_assert(sizeof(UMFEnvBurnFireComponent) == 0x01C0); // 448 bytes (0x000100 - 0x0001C0)
static_assert(sizeof(UMFEnvMudComponent) == 0x0190); // 400 bytes (0x000100 - 0x000190)
static_assert(sizeof(AMFEnvPhysFoliageActor) == 0x0358); // 856 bytes (0x000318 - 0x000358)
static_assert(sizeof(UMFEnvPhysFoliageComponent) == 0x0148); // 328 bytes (0x000100 - 0x000148)
static_assert(sizeof(UMFEnvSceneInfoCharacterComponent) == 0x0120); // 288 bytes (0x000100 - 0x000120)
static_assert(sizeof(UMFEnvSceneInfoComponent) == 0x0200); // 512 bytes (0x000100 - 0x000200)
static_assert(sizeof(UMFEnvStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMFEnvSystem) == 0x03B0); // 944 bytes (0x000318 - 0x0003B0)
static_assert(sizeof(UMFEnvTrailComponent) == 0x0288); // 648 bytes (0x000100 - 0x000288)
static_assert(sizeof(UMFEnvWaterComponent) == 0x0160); // 352 bytes (0x000100 - 0x000160)
static_assert(sizeof(UMFEnvWindComponent) == 0x0290); // 656 bytes (0x000100 - 0x000290)
static_assert(sizeof(AMFMudDeformationActor) == 0x0368); // 872 bytes (0x000328 - 0x000368)
static_assert(sizeof(FMFEnvPhysFoliageMeshRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FMFEnvTrailPlayerInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMFEnvWindSwayInstInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMFEnvWindDirectForceInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMFEnvWindExplodeForceInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UMFEnvActorInfoComponent, EnvSystem) == 0x00F8);
static_assert(offsetof(UMFEnvActorInfoComponent, SkinMeshArray) == 0x0100);
static_assert(offsetof(UMFEnvActorInfoComponent, PreviousPosition) == 0x0110);
static_assert(offsetof(UMFEnvAutoExposureComponent, ComponentTag) == 0x0100);
static_assert(offsetof(UMFEnvAutoExposureComponent, AEComp) == 0x0110);
static_assert(offsetof(FMFEnvBurnBlockBound, CenterPos) == 0x0000);
static_assert(offsetof(UMFEnvBurnComponent, BurnedBlocks) == 0x0100);
static_assert(offsetof(UMFEnvBurnComponent, FireComponents) == 0x0110);
static_assert(offsetof(UMFEnvBurnComponent, BurnMaskTex) == 0x0120);
static_assert(offsetof(UMFEnvBurnComponent, AshesPSCArray) == 0x0128);
static_assert(offsetof(UMFEnvBurnComponent, BurnAreaCenter) == 0x0154);
static_assert(offsetof(UMFEnvBurnComponent, BurnDecalMaterial) == 0x0190);
static_assert(offsetof(UMFEnvBurnComponent, ContinuousFiringPS1) == 0x01A0);
static_assert(offsetof(UMFEnvBurnComponent, ContinuousFiringPS2) == 0x01A8);
static_assert(offsetof(UMFEnvBurnComponent, AshesPS) == 0x01C0);
static_assert(offsetof(FMFEnvBlockInitInfo, BurnBounds) == 0x0000);
static_assert(offsetof(UMFEnvBurnFireBlockComponent, BlockInfo) == 0x0100);
static_assert(offsetof(UMFEnvBurnFireBlockComponent, ContinuousFiringPSC) == 0x0128);
static_assert(offsetof(UMFEnvBurnFireBlockComponent, FireComponent) == 0x0130);
static_assert(offsetof(UMFEnvBurnFireComponent, BurnComponent) == 0x0100);
static_assert(offsetof(UMFEnvBurnFireComponent, FireBlocks) == 0x0108);
static_assert(offsetof(UMFEnvMudComponent, MudRTMID) == 0x0128);
static_assert(offsetof(UMFEnvMudComponent, MudRTCopyMID) == 0x0130);
static_assert(offsetof(UMFEnvMudComponent, MudRT) == 0x0168);
static_assert(offsetof(UMFEnvMudComponent, MudRTCopy) == 0x0170);
static_assert(offsetof(UMFEnvMudComponent, MudRTComposite) == 0x0178);
static_assert(offsetof(UMFEnvMudComponent, MudRTBlur) == 0x0180);
static_assert(offsetof(UMFEnvMudComponent, MudRTNormal) == 0x0188);
static_assert(offsetof(AMFEnvPhysFoliageActor, HISMInc) == 0x0328);
static_assert(offsetof(AMFEnvPhysFoliageActor, StaticMeshComponent) == 0x0340);
static_assert(offsetof(AMFEnvPhysFoliageActor, SkeletalMeshComponent) == 0x0348);
static_assert(offsetof(UMFEnvPhysFoliageComponent, EnvPhysFoliageActorTemplate) == 0x0110);
static_assert(offsetof(UMFEnvPhysFoliageComponent, PhysFoliageMeshDT) == 0x0118);
static_assert(offsetof(UMFEnvPhysFoliageComponent, EnvPhysFoliageActorList) == 0x0138);
static_assert(offsetof(UMFEnvSceneInfoCharacterComponent, WindDirection) == 0x0114);
static_assert(offsetof(UMFEnvSceneInfoComponent, CaptureObjectData_RenderThread) == 0x0100);
static_assert(offsetof(UMFEnvSceneInfoComponent, ActorInfoArray) == 0x0160);
static_assert(offsetof(UMFEnvSceneInfoComponent, HeightMapCaptureComponent) == 0x01A0);
static_assert(offsetof(UMFEnvSceneInfoComponent, RainDepthCaptureComponent) == 0x01A8);
static_assert(offsetof(UMFEnvSceneInfoComponent, CaptureCharacterRT) == 0x01B0);
static_assert(offsetof(UMFEnvSceneInfoComponent, CaptureHeightMapRT) == 0x01B8);
static_assert(offsetof(UMFEnvSceneInfoComponent, CaptureRainDepthRT) == 0x01C0);
static_assert(offsetof(UMFEnvSceneInfoComponent, CaptureHeightMat) == 0x01C8);
static_assert(offsetof(UMFEnvSceneInfoComponent, CaptureRainDepthMat) == 0x01D0);
static_assert(offsetof(AMFEnvSystem, BurnComponent) == 0x0318);
static_assert(offsetof(AMFEnvSystem, HeightMapCaptureComponent) == 0x0328);
static_assert(offsetof(AMFEnvSystem, RainDepthCaptureComponent) == 0x0330);
static_assert(offsetof(AMFEnvSystem, SceneInfoComponent) == 0x0338);
static_assert(offsetof(AMFEnvSystem, WaterComponent) == 0x0340);
static_assert(offsetof(AMFEnvSystem, TrailComponent) == 0x0348);
static_assert(offsetof(AMFEnvSystem, WindComponent) == 0x0350);
static_assert(offsetof(AMFEnvSystem, MudComponent) == 0x0358);
static_assert(offsetof(AMFEnvSystem, PhysFoliageComponent) == 0x0360);
static_assert(offsetof(AMFEnvSystem, AutoExposureComponent) == 0x0368);
static_assert(offsetof(AMFEnvSystem, DebugActorMID) == 0x0378);
static_assert(offsetof(AMFEnvSystem, CacheLocalPC) == 0x0380);
static_assert(offsetof(AMFEnvSystem, EnvMPC) == 0x0398);
static_assert(offsetof(UMFEnvTrailComponent, TrailRTMID) == 0x0100);
static_assert(offsetof(UMFEnvTrailComponent, TrailRTCopyMID) == 0x0108);
static_assert(offsetof(UMFEnvTrailComponent, TrailRT) == 0x0228);
static_assert(offsetof(UMFEnvTrailComponent, TrailRTCopy) == 0x0230);
static_assert(offsetof(UMFEnvTrailComponent, TrailPosRT) == 0x0238);
static_assert(offsetof(UMFEnvTrailComponent, TrailPosRTCopy) == 0x0240);
static_assert(offsetof(UMFEnvTrailComponent, PlayerInfos_RenderThread) == 0x0250);
static_assert(offsetof(UMFEnvWaterComponent, WaterHeightRT0) == 0x0110);
static_assert(offsetof(UMFEnvWaterComponent, WaterHeightRT1) == 0x0118);
static_assert(offsetof(UMFEnvWaterComponent, WaterHeightRT2) == 0x0120);
static_assert(offsetof(UMFEnvWaterComponent, WaterCompositeRT) == 0x0128);
static_assert(offsetof(UMFEnvWindComponent, SwayParamTex) == 0x0140);
static_assert(offsetof(UMFEnvWindComponent, WindSwayRT) == 0x0148);
static_assert(offsetof(UMFEnvWindComponent, WindSwayRTCopy) == 0x0150);
static_assert(offsetof(UMFEnvWindComponent, WindDirection) == 0x0188);
static_assert(offsetof(UMFEnvWindComponent, WindSequence) == 0x01A8);
static_assert(offsetof(UMFEnvWindComponent, WindRTV1) == 0x01B0);
static_assert(offsetof(UMFEnvWindComponent, WindRTV2) == 0x01B8);
static_assert(offsetof(UMFEnvWindComponent, WindRTV3) == 0x01C0);
static_assert(offsetof(UMFEnvWindComponent, WindRTP1) == 0x01C8);
static_assert(offsetof(UMFEnvWindComponent, WindRTP2) == 0x01D0);
static_assert(offsetof(UMFEnvWindComponent, WindRTVelocity) == 0x01D8);
static_assert(offsetof(UMFEnvWindComponent, WindSequencePlayer) == 0x01E0);
static_assert(offsetof(UMFEnvWindComponent, WindRTV_Slot1_RenderThread) == 0x01E8);
static_assert(offsetof(UMFEnvWindComponent, WindRTV_Slot2_RenderThread) == 0x01F0);
static_assert(offsetof(UMFEnvWindComponent, WindRTV_Slot3_RenderThread) == 0x01F8);
static_assert(offsetof(UMFEnvWindComponent, WindRTP_Slot1_RenderThread) == 0x0200);
static_assert(offsetof(UMFEnvWindComponent, WindRTP_Slot2_RenderThread) == 0x0208);
static_assert(offsetof(UMFEnvWindComponent, WindRTDebugSlot1_RenderThread) == 0x0210);
static_assert(offsetof(UMFEnvWindComponent, WindRTDebugSlot2_RenderThread) == 0x0218);
static_assert(offsetof(UMFEnvWindComponent, WindRTJacobi1_RenderThread) == 0x0220);
static_assert(offsetof(UMFEnvWindComponent, WindRTJacobi2_RenderThread) == 0x0228);
static_assert(offsetof(AMFMudDeformationActor, LastPos) == 0x0334);
static_assert(offsetof(AMFMudDeformationActor, HeightMaskTex) == 0x0348);
static_assert(offsetof(AMFMudDeformationActor, HeightMaskData) == 0x0350);
static_assert(offsetof(FMFEnvPhysFoliageMeshRow, StaticMeshSoftPtr) == 0x0008);
static_assert(offsetof(FMFEnvPhysFoliageMeshRow, MeshObjectPath) == 0x0030);
static_assert(offsetof(FMFEnvTrailPlayerInfo, PlayerPosition) == 0x0000);
static_assert(offsetof(FMFEnvTrailPlayerInfo, PlayerPositionLeft) == 0x000C);
static_assert(offsetof(FMFEnvTrailPlayerInfo, PlayerPositionRight) == 0x0018);
static_assert(offsetof(FMFEnvTrailPlayerInfo, Direction) == 0x0024);
static_assert(offsetof(FMFEnvWindSwayInstInfo, InstPtr) == 0x0000);
static_assert(offsetof(FMFEnvWindSwayInstInfo, Pos) == 0x000C);
static_assert(offsetof(FMFEnvWindSwayInstInfo, Params) == 0x0020);
static_assert(offsetof(FMFEnvWindDirectForceInfo, ForceVector) == 0x0000);
static_assert(offsetof(FMFEnvWindDirectForceInfo, ForceOrigin) == 0x0008);
static_assert(offsetof(FMFEnvWindExplodeForceInfo, ForceOrigin) == 0x0000);
