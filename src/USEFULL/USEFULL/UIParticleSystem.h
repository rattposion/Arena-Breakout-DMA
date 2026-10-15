// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/UIParticleSystem.ParticleSystemWidget
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 8 MaxSize: 0x0160
class UParticleSystemWidget : public UWidget
{ 
public:
	class UParticleSystem*                             ParticleSystemTemplate;                                     // 0x0130   (0x0008)  
	bool                                               bAutoActivate;                                              // 0x0138   (0x0001)  
	bool                                               bReactivate;                                                // 0x0139   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x013A   (0x0006)  MISSED
	class UUIParticleComponent*                        WorldParticleComponent;                                     // 0x0140   (0x0008)  
	class AActor*                                      WorldParticleActor;                                         // 0x0148   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0150   (0x0010)  MISSED


	/// Functions
	// Function /Script/UIParticleSystem.ParticleSystemWidget.SetReactivate
	// void SetReactivate(bool bActivateAndReset);                                                                              // [0x4d8624c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UIParticleSystem.ParticleSystemWidget.GetParticleComponent
	// class UParticleSystemComponent* GetParticleComponent();                                                                  // [0x4d86234] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIParticleSystem.ParticleSystemWidget.ActivateParticles
	// void ActivateParticles(bool bActive, bool bReset);                                                                       // [0x4d86138] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UIParticleSystem.UIParticleComponent
/// Size: 0x0750 (1872 bytes) (0x000750 - 0x000750) align 16 MaxSize: 0x0750
class UUIParticleComponent : public UParticleSystemComponent
{ 
public:
};

/// Class /Script/UIParticleSystem.UIParticleActor
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class AUIParticleActor : public AActor
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UParticleSystemWidget) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(UUIParticleComponent) == 0x0750); // 1872 bytes (0x000750 - 0x000750)
static_assert(sizeof(AUIParticleActor) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(offsetof(UParticleSystemWidget, ParticleSystemTemplate) == 0x0130);
static_assert(offsetof(UParticleSystemWidget, WorldParticleComponent) == 0x0140);
static_assert(offsetof(UParticleSystemWidget, WorldParticleActor) == 0x0148);
