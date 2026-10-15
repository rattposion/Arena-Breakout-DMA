// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: MFMission
/// dependency: SGFramework
/// dependency: UAGame

#pragma pack(push, 0x1)

/// Class /Script/UnLua.UnLuaInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUnLuaInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/UnLua.UnLuaInterface.GetModuleName
	// FString GetModuleName();                                                                                                 // [0x50612e8] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/UnLua.UnLuaLatentAction
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UUnLuaLatentAction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	SDK_UNDEFINED(16,5203) /* FDelegateProperty */     __um(Callback);                                             // 0x0030   (0x0010)  
	bool                                               bTickEvenWhenPaused : 1;                                    // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0041   (0x0007)  MISSED


	/// Functions
	// Function /Script/UnLua.UnLuaLatentAction.SetTickableWhenPaused
	// void SetTickableWhenPaused(bool bTickableWhenPaused);                                                                    // [0x5061708] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaLatentAction.OnLegacyCallback
	// void OnLegacyCallback(int32_t InLinkage);                                                                                // [0x506153c] Final|Native|Public  
	// Function /Script/UnLua.UnLuaLatentAction.OnCompleted
	// void OnCompleted(int32_t InLinkage);                                                                                     // [0x5061408] Final|Native|Public|Const 
	// Function /Script/UnLua.UnLuaLatentAction.GetTickableWhenPaused
	// bool GetTickableWhenPaused();                                                                                            // [0x50613f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaLatentAction.CreateInfoForLegacy
	// FLatentActionInfo CreateInfoForLegacy();                                                                                 // [0x5060cb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaLatentAction.CreateInfo
	// FLatentActionInfo CreateInfo(int32_t Linkage);                                                                           // [0x5060bf8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UnLua.UnLuaManager
/// Size: 0x04D0 (1232 bytes) (0x000028 - 0x0004D0) align 8 MaxSize: 0x04D0
class UUnLuaManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TMap<class UClass*, FString>                       ModuleNames;                                                // 0x0030   (0x0050)  
	TMap<FString, class UClass*>                       Classes;                                                    // 0x0080   (0x0050)  
	unsigned char                                      UnknownData01_6[0x230];                                     // 0x00D0   (0x0230)  MISSED
	TMap<class UClass*, class UClass*>                 Derived2BaseClasses;                                        // 0x0300   (0x0050)  
	unsigned char                                      UnknownData02_6[0x100];                                     // 0x0350   (0x0100)  MISSED
	SDK_UNDEFINED(80,5204) /* TSet<AActor*> */         __um(AttachedActors);                                       // 0x0450   (0x0050)  
	class UFunction*                                   InputActionFunc;                                            // 0x04A0   (0x0008)  
	class UFunction*                                   InputAxisFunc;                                              // 0x04A8   (0x0008)  
	class UFunction*                                   InputTouchFunc;                                             // 0x04B0   (0x0008)  
	class UFunction*                                   InputVectorAxisFunc;                                        // 0x04B8   (0x0008)  
	class UFunction*                                   InputGestureFunc;                                           // 0x04C0   (0x0008)  
	class UFunction*                                   AnimNotifyFunc;                                             // 0x04C8   (0x0008)  


	/// Functions
	// Function /Script/UnLua.UnLuaManager.TriggerAnimNotify
	// void TriggerAnimNotify();                                                                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/UnLua.UnLuaManager.OnLatentActionCompleted
	// void OnLatentActionCompleted(int32_t LinkId);                                                                            // [0x50614b8] Final|Native|Public  
	// Function /Script/UnLua.UnLuaManager.OnActorDestroyed
	// void OnActorDestroyed(class AActor* Actor);                                                                              // [0x1b6d62c] Final|Native|Public  
	// Function /Script/UnLua.UnLuaManager.InputVectorAxis
	// void InputVectorAxis(FVector& AxisValue);                                                                                // [0x182d6bc] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/UnLua.UnLuaManager.InputTouch
	// void InputTouch(TEnumAsByte<ETouchIndex> FingerIndex, FVector& Location);                                                // [0x182d6bc] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/UnLua.UnLuaManager.InputGesture
	// void InputGesture(float Value);                                                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/UnLua.UnLuaManager.InputAxis
	// void InputAxis(float AxisValue);                                                                                         // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/UnLua.UnLuaManager.InputAction
	// void InputAction(FKey Key);                                                                                              // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/UnLua.UnLuaManager.HasPostEngineInited
	// bool HasPostEngineInited();                                                                                              // [0x29adba0] Final|Native|Static|Public 
};

/// Class /Script/UnLua.UnLuaPerformanceTestProxy
/// Size: 0x0378 (888 bytes) (0x000318 - 0x000378) align 8 MaxSize: 0x0378
class AUnLuaPerformanceTestProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0318   (0x0008)  MISSED
	int32_t                                            MeshID;                                                     // 0x0320   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0324   (0x0004)  MISSED
	FString                                            MeshName;                                                   // 0x0328   (0x0010)  
	FVector                                            COM;                                                        // 0x0338   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0344   (0x0004)  MISSED
	TArray<int32_t>                                    Indices;                                                    // 0x0348   (0x0010)  
	TArray<FVector>                                    Positions;                                                  // 0x0358   (0x0010)  
	TArray<FVector>                                    PredictedPositions;                                         // 0x0368   (0x0010)  


	/// Functions
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdatePositions
	// void UpdatePositions(TArray<FVector>& NewPositions);                                                                     // [0x5060d14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateMeshName
	// FString UpdateMeshName(FString NewName);                                                                                 // [0x5061824] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateMeshID
	// int32_t UpdateMeshID(int32_t NewID);                                                                                     // [0x490e718] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.UpdateIndices
	// void UpdateIndices(TArray<int32_t>& NewIndices);                                                                         // [0x5060d14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.Simulate
	// void Simulate(float DeltaTime);                                                                                          // [0x50617a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.Raycast
	// bool Raycast(FVector& Origin, FVector& Direction);                                                                       // [0x50615e4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.NOP
	// void NOP();                                                                                                              // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetPredictedPositions
	// TArray<FVector> GetPredictedPositions();                                                                                 // [0x50613d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetPositions
	// void GetPositions(TArray<FVector>& OutPositions);                                                                        // [0x5060d14] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshName
	// FString GetMeshName();                                                                                                   // [0x5061258] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshInfo
	// bool GetMeshInfo(int32_t& OutMeshID, FString& OutMeshName, FVector& OutCOM, TArray<int32_t>& OutIndices, TArray<FVector>& OutPositions, TArray<FVector>& OutPredictedPositions); // [0x5060e44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetMeshID
	// int32_t GetMeshID();                                                                                                     // [0x5060e2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetIndices
	// void GetIndices(TArray<int32_t>& OutIndices);                                                                            // [0x5060d14] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UnLua.UnLuaPerformanceTestProxy.GetCOM
	// FVector GetCOM();                                                                                                        // [0x5060cec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UnLua.PropertyCollector
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FPropertyCollector
{ 
	FTraceableActorInfo                                None;                                                       // 0x0000   (0x0058)  
	FMFMissionFlowReplicateData                        None0;                                                      // 0x0000   (0x0020)  
	class ASGInventory*                                None1;                                                      // 0x0000   (0x0008)  
	int32_t                                            None2;                                                      // 0x0000   (0x0004)  
	FSGAvatarData                                      None3;                                                      // 0x0000   (0x0020)  
	FInputAxisKeyMapping                               None4;                                                      // 0x0000   (0x0028)  
	FInputActionKeyMapping                             None5;                                                      // 0x0000   (0x0028)  
	class USGPlayerItemInfoBase*                       None6;                                                      // 0x0000   (0x0008)  
	FString                                            None7;                                                      // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UUnLuaInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUnLuaLatentAction) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UUnLuaManager) == 0x04D0); // 1232 bytes (0x000028 - 0x0004D0)
static_assert(sizeof(AUnLuaPerformanceTestProxy) == 0x0378); // 888 bytes (0x000318 - 0x000378)
static_assert(sizeof(FPropertyCollector) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UUnLuaManager, ModuleNames) == 0x0030);
static_assert(offsetof(UUnLuaManager, Classes) == 0x0080);
static_assert(offsetof(UUnLuaManager, Derived2BaseClasses) == 0x0300);
static_assert(offsetof(UUnLuaManager, InputActionFunc) == 0x04A0);
static_assert(offsetof(UUnLuaManager, InputAxisFunc) == 0x04A8);
static_assert(offsetof(UUnLuaManager, InputTouchFunc) == 0x04B0);
static_assert(offsetof(UUnLuaManager, InputVectorAxisFunc) == 0x04B8);
static_assert(offsetof(UUnLuaManager, InputGestureFunc) == 0x04C0);
static_assert(offsetof(UUnLuaManager, AnimNotifyFunc) == 0x04C8);
static_assert(offsetof(AUnLuaPerformanceTestProxy, MeshName) == 0x0328);
static_assert(offsetof(AUnLuaPerformanceTestProxy, COM) == 0x0338);
static_assert(offsetof(AUnLuaPerformanceTestProxy, Indices) == 0x0348);
static_assert(offsetof(AUnLuaPerformanceTestProxy, Positions) == 0x0358);
static_assert(offsetof(AUnLuaPerformanceTestProxy, PredictedPositions) == 0x0368);
static_assert(offsetof(FPropertyCollector, None) == 0x0000);
static_assert(offsetof(FPropertyCollector, None0) == 0x0000);
static_assert(offsetof(FPropertyCollector, None1) == 0x0000);
static_assert(offsetof(FPropertyCollector, None3) == 0x0000);
static_assert(offsetof(FPropertyCollector, None4) == 0x0000);
static_assert(offsetof(FPropertyCollector, None5) == 0x0000);
static_assert(offsetof(FPropertyCollector, None6) == 0x0000);
static_assert(offsetof(FPropertyCollector, None7) == 0x0000);
