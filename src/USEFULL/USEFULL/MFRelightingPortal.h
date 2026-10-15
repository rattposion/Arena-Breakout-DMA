// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFRelightingPortal.MFRelightingPortalActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFRelightingPortalActor : public AActor
{ 
public:
	class UMFRelightingPortalComponent*                RelightingPortal;                                           // 0x0318   (0x0008)  
};

/// Struct /Script/MFRelightingPortal.MFRelightingPortalLocalLight
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FMFRelightingPortalLocalLight
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	FVector                                            Direction;                                                  // 0x0010   (0x000C)  
	FLinearColor                                       IndirectColor;                                              // 0x001C   (0x0010)  
	float                                              FalloffExponent;                                            // 0x002C   (0x0004)  
	bool                                               bIsSpotLight : 1;                                           // 0x0030:0 (0x0001)  
	bool                                               bInverseSquared : 1;                                        // 0x0030:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              CosOuterConeAngle;                                          // 0x0034   (0x0004)  
	float                                              CosInnerConeAngle;                                          // 0x0038   (0x0004)  
	float                                              InvCosConeDifference;                                       // 0x003C   (0x0004)  
};

/// Struct /Script/MFRelightingPortal.MFRelightingPortalStaticMap
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMFRelightingPortalStaticMap
{ 
	int32_t                                            MapSize;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       Samples;                                                    // 0x0008   (0x0010)  
};

/// Class /Script/MFRelightingPortal.MFRelightingPortalComponent
/// Size: 0x0540 (1344 bytes) (0x000270 - 0x000540) align 16 MaxSize: 0x0540
class UMFRelightingPortalComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0270   (0x0008)  MISSED
	float                                              Weight;                                                     // 0x0278   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x027C:0 (0x0001)  
	bool                                               bAffectsWorld : 1;                                          // 0x027C:1 (0x0001)  
	bool                                               bUseProbeInjection : 1;                                     // 0x027C:2 (0x0001)  
	bool                                               bSunGI : 1;                                                 // 0x027C:3 (0x0001)  
	bool                                               bSkyLight : 1;                                              // 0x027C:4 (0x0001)  
	bool                                               bLocalLight : 1;                                            // 0x027C:5 (0x0001)  
	bool                                               bNeedWriteIndoorMask : 1;                                   // 0x027C:6 (0x0001)  
	bool                                               bNeedReplaceIndoorMask : 1;                                 // 0x027C:7 (0x0001)  
	bool                                               bMultiBounceGI : 1;                                         // 0x027D:0 (0x0001)  
	bool                                               bCastShadowMap : 1;                                         // 0x027D:1 (0x0001)  
	bool                                               bSurfelLighting : 1;                                        // 0x027D:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x027E   (0x0002)  MISSED
	FVector4                                           LocalLightSHCoefficientR;                                   // 0x0280   (0x0010)  
	FVector4                                           LocalLightSHCoefficientG;                                   // 0x0290   (0x0010)  
	FVector4                                           LocalLightSHCoefficientB;                                   // 0x02A0   (0x0010)  
	TArray<FMFRelightingPortalLocalLight>              LocalLights;                                                // 0x02B0   (0x0010)  
	FBoxSphereBounds                                   LocalLightingVolumeBounds;                                  // 0x02C0   (0x001C)  
	char                                               EffectiveBoundsMask;                                        // 0x02DC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02DD   (0x0003)  MISSED
	FMFRelightingPortalStaticMap                       ShadowMapData;                                              // 0x02E0   (0x0018)  
	FMFRelightingPortalStaticMap                       SurfelNormalMapData;                                        // 0x02F8   (0x0018)  
	FMFRelightingPortalStaticMap                       SurfelAlbedoMapData;                                        // 0x0310   (0x0018)  
	class UBoxComponent*                               PreviewBox;                                                 // 0x0328   (0x0008)  
	class UStaticMeshComponent*                        OcclusionMeshComponent;                                     // 0x0330   (0x0008)  
	unsigned char                                      UnknownData03_7[0x208];                                     // 0x0338   (0x0208)  MISSED


	/// Functions
	// Function /Script/MFRelightingPortal.MFRelightingPortalComponent.SetWeight
	// void SetWeight(float InWeight);                                                                                          // [0x4ef0088] Native|Public|BlueprintCallable 
	// Function /Script/MFRelightingPortal.MFRelightingPortalComponent.GetWeight
	// float GetWeight();                                                                                                       // [0x4ef0070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFRelightingPortal.MFRelightingPortalSubSystem
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UMFRelightingPortalSubSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AMFRelightingPortalActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(FMFRelightingPortalLocalLight) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMFRelightingPortalStaticMap) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UMFRelightingPortalComponent) == 0x0540); // 1344 bytes (0x000270 - 0x000540)
static_assert(sizeof(UMFRelightingPortalSubSystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(offsetof(AMFRelightingPortalActor, RelightingPortal) == 0x0318);
static_assert(offsetof(FMFRelightingPortalLocalLight, position) == 0x0000);
static_assert(offsetof(FMFRelightingPortalLocalLight, Direction) == 0x0010);
static_assert(offsetof(FMFRelightingPortalLocalLight, IndirectColor) == 0x001C);
static_assert(offsetof(FMFRelightingPortalStaticMap, Samples) == 0x0008);
static_assert(offsetof(UMFRelightingPortalComponent, LocalLightSHCoefficientR) == 0x0280);
static_assert(offsetof(UMFRelightingPortalComponent, LocalLightSHCoefficientG) == 0x0290);
static_assert(offsetof(UMFRelightingPortalComponent, LocalLightSHCoefficientB) == 0x02A0);
static_assert(offsetof(UMFRelightingPortalComponent, LocalLights) == 0x02B0);
static_assert(offsetof(UMFRelightingPortalComponent, LocalLightingVolumeBounds) == 0x02C0);
static_assert(offsetof(UMFRelightingPortalComponent, ShadowMapData) == 0x02E0);
static_assert(offsetof(UMFRelightingPortalComponent, SurfelNormalMapData) == 0x02F8);
static_assert(offsetof(UMFRelightingPortalComponent, SurfelAlbedoMapData) == 0x0310);
static_assert(offsetof(UMFRelightingPortalComponent, PreviewBox) == 0x0328);
static_assert(offsetof(UMFRelightingPortalComponent, OcclusionMeshComponent) == 0x0330);
