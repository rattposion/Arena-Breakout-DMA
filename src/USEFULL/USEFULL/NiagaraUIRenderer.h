// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/NiagaraUIRenderer.NiagaraSystemWidget
/// Size: 0x0220 (544 bytes) (0x000130 - 0x000220) align 8 MaxSize: 0x0220
class UNiagaraSystemWidget : public UWidget
{ 
public:
	class UNiagaraSystem*                              NiagaraSystemReference;                                     // 0x0130   (0x0008)  
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                  // 0x0138   (0x0050)  
	bool                                               AutoActivate;                                               // 0x0188   (0x0001)  
	bool                                               TickWhenPaused;                                             // 0x0189   (0x0001)  
	bool                                               FakeDepthScale;                                             // 0x018A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x018B   (0x0001)  MISSED
	float                                              FakeDepthScaleDistance;                                     // 0x018C   (0x0004)  
	bool                                               ShowDebugSystemInWorld;                                     // 0x0190   (0x0001)  
	bool                                               DisableWarnings;                                            // 0x0191   (0x0001)  
	bool                                               bFillWidget;                                                // 0x0192   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0193   (0x0005)  MISSED
	FString                                            OpacityParameterName;                                       // 0x0198   (0x0010)  
	TMap<FString, float>                               OverrideMaterialParameters;                                 // 0x01A8   (0x0050)  
	class ANiagaraUIActor*                             NiagaraActorTemplate;                                       // 0x01F8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0200   (0x0010)  MISSED
	class ANiagaraUIActor*                             NiagaraActor;                                               // 0x0210   (0x0008)  
	class UNiagaraUIComponent*                         NiagaraComponent;                                           // 0x0218   (0x0008)  


	/// Functions
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
	// void UpdateTickWhenPaused(bool NewTickWhenPaused);                                                                       // [0x4f0a86c] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
	// void UpdateNiagaraSystemReference(class UNiagaraSystem* NewNiagaraSystem);                                               // [0x4f0a7b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
	// class UNiagaraUIComponent* GetNiagaraComponent();                                                                        // [0x4f0a7a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
	// void DeactivateSystem();                                                                                                 // [0x4f0a774] Final|Native|Public|BlueprintCallable 
	// Function /Script/NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
	// void ActivateSystem(bool Reset);                                                                                         // [0x4f0a6d4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NiagaraUIRenderer.NiagaraUIActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class ANiagaraUIActor : public AActor
{ 
public:
	class UNiagaraUIComponent*                         NiagaraUIComponent;                                         // 0x0318   (0x0008)  
};

/// Class /Script/NiagaraUIRenderer.NiagaraUIComponent
/// Size: 0x06A0 (1696 bytes) (0x0006A0 - 0x0006A0) align 16 MaxSize: 0x06A0
class UNiagaraUIComponent : public UNiagaraComponent
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraSystemWidget) == 0x0220); // 544 bytes (0x000130 - 0x000220)
static_assert(sizeof(ANiagaraUIActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UNiagaraUIComponent) == 0x06A0); // 1696 bytes (0x0006A0 - 0x0006A0)
static_assert(offsetof(UNiagaraSystemWidget, NiagaraSystemReference) == 0x0130);
static_assert(offsetof(UNiagaraSystemWidget, MaterialRemapList) == 0x0138);
static_assert(offsetof(UNiagaraSystemWidget, OpacityParameterName) == 0x0198);
static_assert(offsetof(UNiagaraSystemWidget, OverrideMaterialParameters) == 0x01A8);
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActorTemplate) == 0x01F8);
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActor) == 0x0210);
static_assert(offsetof(UNiagaraSystemWidget, NiagaraComponent) == 0x0218);
static_assert(offsetof(ANiagaraUIActor, NiagaraUIComponent) == 0x0318);
