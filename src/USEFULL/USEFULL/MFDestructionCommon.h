// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Struct /Script/MFDestructionCommon.DestructibleObjParam
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FDestructibleObjParam
{ 
	int32_t                                            DestructibleLevel;                                          // 0x0000   (0x0004)  
	float                                              ChunkLife;                                                  // 0x0004   (0x0004)  
	float                                              ChunkLife5;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/MFDestructionCommon.DestructibleObjParamBind
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FDestructibleObjParamBind
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	FDestructibleObjParam                              Param;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/MFDestructionCommon.MFDestructibleObjParamManager
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UMFDestructibleObjParamManager : public UObject
{ 
public:
	class UClass*                                      MgrClassCache;                                              // 0x0028   (0x0008)  
	TArray<FDestructibleObjParamBind>                  DestructibleObjParamBindList;                               // 0x0030   (0x0010)  
	FDestructibleObjParam                              DefaultParam;                                               // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFDestructionCommon.MFDestructibleObjParamManager.GetDestructibleObjParamFromPhysicalMaterial
	// FDestructibleObjParam GetDestructibleObjParamFromPhysicalMaterial(class UPhysicalMaterial* InPhysicalMaterial);          // [0x60ca5f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFDestructionCommon.MFDestructionEffectPlayerComponent
/// Size: 0x0180 (384 bytes) (0x0000F8 - 0x000180) align 8 MaxSize: 0x0180
class UMFDestructionEffectPlayerComponent : public UActorComponent
{ 
public:
	TArray<class UNiagaraSystem*>                      GlassWindowParticles;                                       // 0x00F8   (0x0010)  
	TArray<class UNiagaraSystem*>                      GlassWindowParticles_SaaS;                                  // 0x0108   (0x0010)  
	TArray<class UNiagaraComponent*>                   SaaSNiagaraComponents;                                      // 0x0118   (0x0010)  
	float                                              BatchThresholdDistSquared;                                  // 0x0128   (0x0004)  
	float                                              EffectSizeMultipler;                                        // 0x012C   (0x0004)  
	TMap<int8_t, FString>                              WeaponTypeAudioMapping;                                     // 0x0130   (0x0050)  
};

/// Class /Script/MFDestructionCommon.MSingletonCollectionActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AMSingletonCollectionActor : public AActor
{ 
public:
	class UClass*                                      DestructibleManagerCollectionSingleton;                     // 0x0318   (0x0008)  
	class UMFDestructibleManagerCollectionSingleton*   SingletonCache;                                             // 0x0320   (0x0008)  
};

/// Class /Script/MFDestructionCommon.MFDestructibleManagerCollectionSingleton
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UMFDestructibleManagerCollectionSingleton : public UObject
{ 
public:
	class UClass*                                      DestructibleObjParamMgr;                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Struct /Script/MFDestructionCommon.GlassBreakParam
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGlassBreakParam
{ 
	FVector                                            Pos;                                                        // 0x0000   (0x000C)  
	FVector                                            Dir;                                                        // 0x000C   (0x000C)  
	FVector                                            Size;                                                       // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UObject*                                     StaticMesh;                                                 // 0x0028   (0x0008)  
	int32_t                                            TriStartIndex;                                              // 0x0030   (0x0004)  
	int32_t                                            TriEndIndex;                                                // 0x0034   (0x0004)  
	FVector                                            VelocityDir;                                                // 0x0038   (0x000C)  
	int8_t                                             EffectType;                                                 // 0x0044   (0x0001)  
	int8_t                                             WeaponType;                                                 // 0x0045   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	class UPhysicalMaterial*                           PhysMat;                                                    // 0x0048   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(FDestructibleObjParam) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FDestructibleObjParamBind) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UMFDestructibleObjParamManager) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMFDestructionEffectPlayerComponent) == 0x0180); // 384 bytes (0x0000F8 - 0x000180)
static_assert(sizeof(AMSingletonCollectionActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UMFDestructibleManagerCollectionSingleton) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FGlassBreakParam) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FDestructibleObjParamBind, PhysicalMaterial) == 0x0000);
static_assert(offsetof(FDestructibleObjParamBind, Param) == 0x0008);
static_assert(offsetof(UMFDestructibleObjParamManager, MgrClassCache) == 0x0028);
static_assert(offsetof(UMFDestructibleObjParamManager, DestructibleObjParamBindList) == 0x0030);
static_assert(offsetof(UMFDestructibleObjParamManager, DefaultParam) == 0x0040);
static_assert(offsetof(UMFDestructionEffectPlayerComponent, GlassWindowParticles) == 0x00F8);
static_assert(offsetof(UMFDestructionEffectPlayerComponent, GlassWindowParticles_SaaS) == 0x0108);
static_assert(offsetof(UMFDestructionEffectPlayerComponent, SaaSNiagaraComponents) == 0x0118);
static_assert(offsetof(UMFDestructionEffectPlayerComponent, WeaponTypeAudioMapping) == 0x0130);
static_assert(offsetof(AMSingletonCollectionActor, DestructibleManagerCollectionSingleton) == 0x0318);
static_assert(offsetof(AMSingletonCollectionActor, SingletonCache) == 0x0320);
static_assert(offsetof(UMFDestructibleManagerCollectionSingleton, DestructibleObjParamMgr) == 0x0028);
static_assert(offsetof(FGlassBreakParam, Pos) == 0x0000);
static_assert(offsetof(FGlassBreakParam, Dir) == 0x000C);
static_assert(offsetof(FGlassBreakParam, Size) == 0x0018);
static_assert(offsetof(FGlassBreakParam, StaticMesh) == 0x0028);
static_assert(offsetof(FGlassBreakParam, VelocityDir) == 0x0038);
static_assert(offsetof(FGlassBreakParam, PhysMat) == 0x0048);
