// generated header

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Class /Script/PhysicsCore.BodySetupCore
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UBodySetupCore : public UObject
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	SDK_UNDEFINED(1,14) /* TEnumAsByte<EPhysicsType> */ __um(PhysicsType);                                         // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,15) /* TEnumAsByte<ECollisionTraceFlag> */ __um(CollisionTraceFlag);                           // 0x0031   (0x0001)  
	SDK_UNDEFINED(1,16) /* TEnumAsByte<EBodyCollisionResponse> */ __um(CollisionReponse);                          // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_7[0x15];                                      // 0x0033   (0x0015)  MISSED
};

/// Class /Script/PhysicsCore.ChaosPhysicalMaterial
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UChaosPhysicalMaterial : public UObject
{ 
public:
	float                                              Friction;                                                   // 0x0028   (0x0004)  
	float                                              StaticFriction;                                             // 0x002C   (0x0004)  
	float                                              Restitution;                                                // 0x0030   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x0034   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x0038   (0x0004)  
	float                                              SleepingLinearVelocityThreshold;                            // 0x003C   (0x0004)  
	float                                              SleepingAngularVelocityThreshold;                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterial
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPhysicalMaterial : public UObject
{ 
public:
	float                                              Friction;                                                   // 0x0028   (0x0004)  
	float                                              StaticFriction;                                             // 0x002C   (0x0004)  
	SDK_UNDEFINED(1,17) /* TEnumAsByte<EFrictionCombineMode> */ __um(FrictionCombineMode);                         // 0x0030   (0x0001)  
	bool                                               bOverrideFrictionCombineMode;                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              Restitution;                                                // 0x0034   (0x0004)  
	SDK_UNDEFINED(1,18) /* TEnumAsByte<EFrictionCombineMode> */ __um(RestitutionCombineMode);                      // 0x0038   (0x0001)  
	bool                                               bOverrideRestitutionCombineMode;                            // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	float                                              Density;                                                    // 0x003C   (0x0004)  
	float                                              SleepLinearVelocityThreshold;                               // 0x0040   (0x0004)  
	float                                              SleepAngularVelocityThreshold;                              // 0x0044   (0x0004)  
	int32_t                                            SleepCounterThreshold;                                      // 0x0048   (0x0004)  
	float                                              RaiseMassToPower;                                           // 0x004C   (0x0004)  
	float                                              DestructibleDamageThresholdScale;                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UPhysicalMaterialPropertyBase*               PhysicalMaterialProperty;                                   // 0x0058   (0x0008)  
	SDK_UNDEFINED(1,19) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceType);                                     // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_7[0x1F];                                      // 0x0061   (0x001F)  MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterialPropertyBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPhysicalMaterialPropertyBase : public UObject
{ 
public:
};

/// Class /Script/PhysicsCore.PhysicsSettingsCore
/// Size: 0x00E0 (224 bytes) (0x000038 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPhysicsSettingsCore : public UDeveloperSettings
{ 
public:
	float                                              DefaultGravityZ;                                            // 0x0038   (0x0004)  
	float                                              DefaultTerminalVelocity;                                    // 0x003C   (0x0004)  
	float                                              DefaultFluidFriction;                                       // 0x0040   (0x0004)  
	int32_t                                            SimulateScratchMemorySize;                                  // 0x0044   (0x0004)  
	int32_t                                            RagdollAggregateThreshold;                                  // 0x0048   (0x0004)  
	float                                              TriangleMeshTriangleMinAreaThreshold;                       // 0x004C   (0x0004)  
	bool                                               bEnableShapeSharing;                                        // 0x0050   (0x0001)  
	bool                                               bEnablePCM;                                                 // 0x0051   (0x0001)  
	bool                                               bEnableStabilization;                                       // 0x0052   (0x0001)  
	bool                                               bWarnMissingLocks;                                          // 0x0053   (0x0001)  
	bool                                               bEnable2DPhysics;                                           // 0x0054   (0x0001)  
	bool                                               bDefaultHasComplexCollision;                                // 0x0055   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0056   (0x0002)  MISSED
	float                                              BounceThresholdVelocity;                                    // 0x0058   (0x0004)  
	SDK_UNDEFINED(1,20) /* TEnumAsByte<EFrictionCombineMode> */ __um(FrictionCombineMode);                         // 0x005C   (0x0001)  
	SDK_UNDEFINED(1,21) /* TEnumAsByte<EFrictionCombineMode> */ __um(RestitutionCombineMode);                      // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	float                                              MaxAngularVelocity;                                         // 0x0060   (0x0004)  
	float                                              MaxDepenetrationVelocity;                                   // 0x0064   (0x0004)  
	float                                              ContactOffsetMultiplier;                                    // 0x0068   (0x0004)  
	float                                              MinContactOffset;                                           // 0x006C   (0x0004)  
	float                                              MaxContactOffset;                                           // 0x0070   (0x0004)  
	bool                                               bSimulateSkeletalMeshOnDedicatedServer;                     // 0x0074   (0x0001)  
	SDK_UNDEFINED(1,22) /* TEnumAsByte<ECollisionTraceFlag> */ __um(DefaultShapeComplexity);                       // 0x0075   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0076   (0x0002)  MISSED
	FChaosSolverConfiguration                          SolverOptions;                                              // 0x0078   (0x0068)  
};

/// Struct /Script/PhysicsCore.BodyInstanceCore
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBodyInstanceCore
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bSimulatePhysics : 1;                                       // 0x0010:0 (0x0001)  
	bool                                               bOverrideMass : 1;                                          // 0x0010:1 (0x0001)  
	bool                                               bEnableGravity : 1;                                         // 0x0010:2 (0x0001)  
	bool                                               bAutoWeld : 1;                                              // 0x0010:3 (0x0001)  
	bool                                               bStartAwake : 1;                                            // 0x0010:4 (0x0001)  
	bool                                               bGenerateWakeEvents : 1;                                    // 0x0010:5 (0x0001)  
	bool                                               bUpdateMassWhenScaleChanges : 1;                            // 0x0010:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBodySetupCore) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UChaosPhysicalMaterial) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPhysicalMaterial) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UPhysicalMaterialPropertyBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPhysicsSettingsCore) == 0x00E0); // 224 bytes (0x000038 - 0x0000E0)
static_assert(sizeof(FBodyInstanceCore) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UBodySetupCore, BoneName) == 0x0028);
static_assert(offsetof(UPhysicalMaterial, PhysicalMaterialProperty) == 0x0058);
static_assert(offsetof(UPhysicsSettingsCore, SolverOptions) == 0x0078);
