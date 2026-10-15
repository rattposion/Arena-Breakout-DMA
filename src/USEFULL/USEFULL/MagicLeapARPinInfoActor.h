// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

#pragma pack(push, 0x1)

/// Class /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
/// Size: 0x03BC (956 bytes) (0x000330 - 0x0003BC) align 8 MaxSize: 0x03BC
class AMagicLeapARPinInfoActor_C : public AMagicLeapARPinInfoActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	class UStaticMeshComponent*                        Right;                                                      // 0x0338   (0x0008)  
	class UStaticMeshComponent*                        Forward;                                                    // 0x0340   (0x0008)  
	class UStaticMeshComponent*                        Up;                                                         // 0x0348   (0x0008)  
	class USphereComponent*                            ValidRadiusVisualizer;                                      // 0x0350   (0x0008)  
	class USceneComponent*                             AxisRoot;                                                   // 0x0358   (0x0008)  
	class USceneComponent*                             VisualizerRoot;                                             // 0x0360   (0x0008)  
	class UTextRenderComponent*                        TypeValue;                                                  // 0x0368   (0x0008)  
	class UTextRenderComponent*                        TransErrValue;                                              // 0x0370   (0x0008)  
	class UTextRenderComponent*                        RotErrValue;                                                // 0x0378   (0x0008)  
	class UTextRenderComponent*                        ConfidenceValue;                                            // 0x0380   (0x0008)  
	class UTextRenderComponent*                        TransErrLabel;                                              // 0x0388   (0x0008)  
	class UTextRenderComponent*                        RotErrLabel;                                                // 0x0390   (0x0008)  
	class UTextRenderComponent*                        ConfidenceLabel;                                            // 0x0398   (0x0008)  
	class UTextRenderComponent*                        PinIDValue;                                                 // 0x03A0   (0x0008)  
	class USceneComponent*                             InfoRoot;                                                   // 0x03A8   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x03B0   (0x0008)  
	float                                              RotationSmoothSpeed;                                        // 0x03B8   (0x0004)  


	/// Functions
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
	// void UpdatePinState();                                                                                                   // [0x182d6bc] Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
	// void OnUpdateARPinState();                                                                                               // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /MagicLeapPassableWorld/MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
	// void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint);                                                       // [0x182d6bc] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(AMagicLeapARPinInfoActor_C) == 0x03BC); // 956 bytes (0x000330 - 0x0003BC)
static_assert(offsetof(AMagicLeapARPinInfoActor_C, UberGraphFrame) == 0x0330);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Right) == 0x0338);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Forward) == 0x0340);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Up) == 0x0348);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ValidRadiusVisualizer) == 0x0350);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, AxisRoot) == 0x0358);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, VisualizerRoot) == 0x0360);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TypeValue) == 0x0368);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrValue) == 0x0370);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrValue) == 0x0378);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceValue) == 0x0380);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, TransErrLabel) == 0x0388);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, RotErrLabel) == 0x0390);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, ConfidenceLabel) == 0x0398);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, PinIDValue) == 0x03A0);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, InfoRoot) == 0x03A8);
static_assert(offsetof(AMagicLeapARPinInfoActor_C, Root) == 0x03B0);
