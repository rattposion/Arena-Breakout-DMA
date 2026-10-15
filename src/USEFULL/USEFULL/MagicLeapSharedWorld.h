// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MagicLeapARPin

#pragma pack(push, 0x1)

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMagicLeapSharedWorldSharedData
{ 
	TArray<FGuid>                                      PinIDs;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
/// Size: 0x04D0 (1232 bytes) (0x000400 - 0x0004D0) align 8 MaxSize: 0x04D0
class AMagicLeapSharedWorldGameMode : public AGameMode
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,5026) /* FMulticastInlineDelegate */ __um(OnNewLocalDataFromClients);                         // 0x0410   (0x0010)  
	float                                              PinSelectionConfidenceThreshold;                            // 0x0420   (0x0004)  
	unsigned char                                      UnknownData00_6[0xA4];                                      // 0x0424   (0x00A4)  MISSED
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                  // 0x04C8   (0x0008)  


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	// bool SendSharedWorldDataToClients();                                                                                     // [0x62709b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	// void SelectChosenOne();                                                                                                  // [0x6270998] BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	// void MagicLeapOnNewLocalDataFromClients__DelegateSignature();                                                            // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
	// void DetermineSharedWorldData(FMagicLeapSharedWorldSharedData& NewSharedWorldData);                                      // [0x6270818] BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMagicLeapSharedWorldAlignmentTransforms
{ 
	TArray<FTransform>                                 AlignmentTransforms;                                        // 0x0000   (0x0010)  
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState
/// Size: 0x03C8 (968 bytes) (0x000388 - 0x0003C8) align 8 MaxSize: 0x03C8
class AMagicLeapSharedWorldGameState : public AGameState
{ 
public:
	FMagicLeapSharedWorldSharedData                    SharedWorldData;                                            // 0x0388   (0x0010)  
	FMagicLeapSharedWorldAlignmentTransforms           AlignmentTransforms;                                        // 0x0398   (0x0010)  
	SDK_UNDEFINED(16,5027) /* FMulticastInlineDelegate */ __um(OnSharedWorldDataUpdated);                          // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,5028) /* FMulticastInlineDelegate */ __um(OnAlignmentTransformsUpdated);                      // 0x03B8   (0x0010)  


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	// void OnReplicate_SharedWorldData();                                                                                      // [0x6270984] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	// void OnReplicate_AlignmentTransforms();                                                                                  // [0x6270970] Final|Native|Private 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	// void MagicLeapSharedWorldEvent__DelegateSignature();                                                                     // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
	// FTransform CalculateXRCameraRootTransform();                                                                             // [0x62706ec] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
/// Size: 0x0690 (1680 bytes) (0x000678 - 0x000690) align 8 MaxSize: 0x0690
class AMagicLeapSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0678   (0x0018)  MISSED


	/// Functions
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	// void ServerSetLocalWorldData(FMagicLeapSharedWorldLocalData LocalWorldReplicationData);                                  // [0x6270a80] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	// void ServerSetAlignmentTransforms(FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms);                       // [0x62709d4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	// bool IsChosenOne();                                                                                                      // [0x6270958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	// void ClientSetChosenOne(bool bChosenOne);                                                                                // [0x6270778] Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	// void ClientMarkReadyForSendingLocalData();                                                                               // [0x6270760] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
	// bool CanSendLocalDataToServer();                                                                                         // [0x6270748] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldPinData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FMagicLeapSharedWorldPinData
{ 
	FGuid                                              PinId;                                                      // 0x0000   (0x0010)  
	FMagicLeapARPinState                               PinState;                                                   // 0x0010   (0x0014)  
};

/// Struct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMagicLeapSharedWorldLocalData
{ 
	TArray<FMagicLeapSharedWorldPinData>               LocalPins;                                                  // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FMagicLeapSharedWorldSharedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameMode) == 0x04D0); // 1232 bytes (0x000400 - 0x0004D0)
static_assert(sizeof(FMagicLeapSharedWorldAlignmentTransforms) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AMagicLeapSharedWorldGameState) == 0x03C8); // 968 bytes (0x000388 - 0x0003C8)
static_assert(sizeof(AMagicLeapSharedWorldPlayerController) == 0x0690); // 1680 bytes (0x000678 - 0x000690)
static_assert(sizeof(FMagicLeapSharedWorldPinData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FMagicLeapSharedWorldLocalData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FMagicLeapSharedWorldSharedData, PinIDs) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, SharedWorldData) == 0x0400);
static_assert(offsetof(AMagicLeapSharedWorldGameMode, ChosenOne) == 0x04C8);
static_assert(offsetof(FMagicLeapSharedWorldAlignmentTransforms, AlignmentTransforms) == 0x0000);
static_assert(offsetof(AMagicLeapSharedWorldGameState, SharedWorldData) == 0x0388);
static_assert(offsetof(AMagicLeapSharedWorldGameState, AlignmentTransforms) == 0x0398);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinId) == 0x0000);
static_assert(offsetof(FMagicLeapSharedWorldPinData, PinState) == 0x0010);
static_assert(offsetof(FMagicLeapSharedWorldLocalData, LocalPins) == 0x0000);
