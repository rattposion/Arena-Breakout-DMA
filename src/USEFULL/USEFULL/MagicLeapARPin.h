// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MagicLeapARPin.MagicLeapARPinComponent
/// Size: 0x0430 (1072 bytes) (0x000270 - 0x000430) align 16 MaxSize: 0x0430
class UMagicLeapARPinComponent : public USceneComponent
{ 
public:
	FString                                            ObjectUID;                                                  // 0x0270   (0x0010)  
	int32_t                                            UserIndex;                                                  // 0x0280   (0x0004)  
	SDK_UNDEFINED(1,5018) /* EMagicLeapAutoPinType */  __um(AutoPinType);                                          // 0x0284   (0x0001)  
	bool                                               bShouldPinActor;                                            // 0x0285   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0286   (0x0002)  MISSED
	class UClass*                                      PinDataClass;                                               // 0x0288   (0x0008)  
	SDK_UNDEFINED(80,5019) /* TSet<EMagicLeapARPinType> */ __um(SearchPinTypes);                                   // 0x0290   (0x0050)  
	class USphereComponent*                            SearchVolume;                                               // 0x02E0   (0x0008)  
	SDK_UNDEFINED(16,5020) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinned);                          // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,5021) /* FMulticastInlineDelegate */ __um(OnPersistentEntityPinLost);                         // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,5022) /* FMulticastInlineDelegate */ __um(OnPinDataLoadAttemptCompleted);                     // 0x0308   (0x0010)  
	FGuid                                              PinnedCFUID;                                                // 0x0318   (0x0010)  
	class USceneComponent*                             PinnedSceneComponent;                                       // 0x0328   (0x0008)  
	class UMagicLeapARPinSaveGame*                     PinData;                                                    // 0x0330   (0x0008)  
	unsigned char                                      UnknownData01_7[0xF8];                                      // 0x0338   (0x00F8)  MISSED


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.UnPin
	// void UnPin();                                                                                                            // [0x626d3f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
	// class UMagicLeapARPinSaveGame* TryGetPinData(class UClass* InPinDataClass, bool& OutPinDataValid);                       // [0x626d154] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
	// bool PinToRestoredOrSyncedID();                                                                                          // [0x626cc78] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToID
	// bool PinToID(FGuid& PinId);                                                                                              // [0x626cbc8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
	// void PinToBestFit();                                                                                                     // [0x626cba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	// bool PinSceneComponent(class USceneComponent* ComponentToPin);                                                           // [0x626cab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	// bool PinRestoredOrSynced();                                                                                              // [0x626ca98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PinActor
	// bool PinActor(class AActor* ActorToPin);                                                                                 // [0x626c9b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	// void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced);                                                  // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	// void PersistentEntityPinLost__DelegateSignature();                                                                       // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
	// void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored);                                      // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	// bool IsPinned();                                                                                                         // [0x626c83c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	// bool GetPinState(FMagicLeapARPinState& State);                                                                           // [0x626c6c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	// bool GetPinnedPinID(FGuid& PinId);                                                                                       // [0x626c780] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.GetPinData
	// class UMagicLeapARPinSaveGame* GetPinData(class UClass* PinDataClass);                                                   // [0x626c5c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
	// void AttemptPinDataRestorationAsync();                                                                                   // [0x626b84c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
	// bool AttemptPinDataRestoration();                                                                                        // [0x626b828] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
	// void UnBindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                        // [0x626d324] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
	// void UnBindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                               // [0x626d254] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
	// EMagicLeapPassableWorldError SetGlobalQueryFilter(FMagicLeapARPinQuery& InGlobalFilter);                                 // [0x626cf3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
	// void SetContentBindingSaveGameUserIndex(int32_t UserIndex);                                                              // [0x626ceb4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
	// EMagicLeapPassableWorldError QueryARPins(FMagicLeapARPinQuery& Query, TArray<FGuid>& Pins);                              // [0x626cc9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
	// bool ParseStringToARPinId(FString PinIdString, FGuid& ARPinId);                                                          // [0x626c8a8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
	// bool IsTrackerValid();                                                                                                   // [0x626c868] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
	// EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t& Count);                                                      // [0x626c52c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
	// EMagicLeapPassableWorldError GetGlobalQueryFilter(FMagicLeapARPinQuery& CurrentGlobalFilter);                            // [0x626c3a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
	// int32_t GetContentBindingSaveGameUserIndex();                                                                            // [0x626c36c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
	// EMagicLeapPassableWorldError GetClosestARPin(FVector& SearchPoint, FGuid& PinId);                                        // [0x626c22c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
	// EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, TArray<FGuid>& Pins);                              // [0x626c0cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
	// FString GetARPinStateToString(FMagicLeapARPinState& State);                                                              // [0x626bf98] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
	// EMagicLeapPassableWorldError GetARPinState(FGuid& PinId, FMagicLeapARPinState& State);                                   // [0x626be7c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
	// bool GetARPinPositionAndOrientation_TrackingSpace(FGuid& PinId, FVector& position, FRotator& Orientation, bool& PinFoundInEnvironment); // [0x626bc7c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
	// bool GetARPinPositionAndOrientation(FGuid& PinId, FVector& position, FRotator& Orientation, bool& PinFoundInEnvironment); // [0x626ba7c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
	// EMagicLeapPassableWorldError DestroyTracker();                                                                           // [0x626ba44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
	// EMagicLeapPassableWorldError CreateTracker();                                                                            // [0x626ba20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
	// void BindToOnMagicLeapContentBindingFoundDelegate(FDelegateProperty& Delegate);                                          // [0x626b940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
	// void BindToOnMagicLeapARPinUpdatedDelegate(FDelegateProperty& Delegate);                                                 // [0x626b860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
	// FString ARPinIdToString(FGuid& ARPinId);                                                                                 // [0x626b6d4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align 8 MaxSize: 0x0330
class AMagicLeapARPinInfoActorBase : public AActor
{ 
public:
	FGuid                                              PinId;                                                      // 0x0318   (0x0010)  
	bool                                               bVisibilityOverride;                                        // 0x0328   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0329   (0x0007)  MISSED


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	// void OnUpdateARPinState();                                                                                               // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinRenderer
/// Size: 0x0380 (896 bytes) (0x000318 - 0x000380) align 8 MaxSize: 0x0380
class AMagicLeapARPinRenderer : public AActor
{ 
public:
	bool                                               bInfoActorsVisibilityOverride;                              // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0319   (0x0007)  MISSED
	TMap<FGuid, class AMagicLeapARPinInfoActorBase*>   AllInfoActors;                                              // 0x0320   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0370   (0x0008)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x0378   (0x0008)  


	/// Functions
	// Function /Script/MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	// void SetVisibilityOverride(bool InVisibilityOverride);                                                                   // [0x626d0b8] Final|Native|Private|BlueprintCallable 
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMagicLeapARPinState
{ 
	float                                              Confidence;                                                 // 0x0000   (0x0004)  
	float                                              ValidRadius;                                                // 0x0004   (0x0004)  
	float                                              RotationError;                                              // 0x0008   (0x0004)  
	float                                              TranslationError;                                           // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,5023) /* EMagicLeapARPinType */    __um(PinType);                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMagicLeapARPinSettings : public UObject
{ 
public:
	float                                              UpdateCheckFrequency;                                       // 0x0028   (0x0004)  
	FMagicLeapARPinState                               OnUpdatedEventTriggerDelta;                                 // 0x002C   (0x0014)  
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinSaveGame
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 16 MaxSize: 0x00B0
class UMagicLeapARPinSaveGame : public USaveGame
{ 
public:
	FGuid                                              PinnedID;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         ComponentWorldTransform;                                    // 0x0040   (0x0030)  
	FTransform                                         PinTransform;                                               // 0x0070   (0x0030)  
	bool                                               bShouldPinActor;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinObjectIdList
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMagicLeapARPinObjectIdList
{ 
	SDK_UNDEFINED(80,5024) /* TSet<FString> */         __um(ObjectIdList);                                         // 0x0000   (0x0050)  
};

/// Class /Script/MagicLeapARPin.MagicLeapARPinContentBindings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMagicLeapARPinContentBindings : public USaveGame
{ 
public:
	TMap<FGuid, FMagicLeapARPinObjectIdList>           AllContentBindings;                                         // 0x0028   (0x0050)  
};

/// Struct /Script/MagicLeapARPin.MagicLeapARPinQuery
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMagicLeapARPinQuery
{ 
	SDK_UNDEFINED(80,5025) /* TSet<EMagicLeapARPinType> */ __um(Types);                                            // 0x0000   (0x0050)  
	int32_t                                            MaxResults;                                                 // 0x0050   (0x0004)  
	FVector                                            TargetPoint;                                                // 0x0054   (0x000C)  
	float                                              Radius;                                                     // 0x0060   (0x0004)  
	bool                                               bSorted;                                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapARPinComponent) == 0x0430); // 1072 bytes (0x000270 - 0x000430)
static_assert(sizeof(UMagicLeapARPinFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AMagicLeapARPinInfoActorBase) == 0x0330); // 816 bytes (0x000318 - 0x000330)
static_assert(sizeof(AMagicLeapARPinRenderer) == 0x0380); // 896 bytes (0x000318 - 0x000380)
static_assert(sizeof(FMagicLeapARPinState) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UMagicLeapARPinSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMagicLeapARPinSaveGame) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FMagicLeapARPinObjectIdList) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UMagicLeapARPinContentBindings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FMagicLeapARPinQuery) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(UMagicLeapARPinComponent, ObjectUID) == 0x0270);
static_assert(offsetof(UMagicLeapARPinComponent, PinDataClass) == 0x0288);
static_assert(offsetof(UMagicLeapARPinComponent, SearchVolume) == 0x02E0);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedCFUID) == 0x0318);
static_assert(offsetof(UMagicLeapARPinComponent, PinnedSceneComponent) == 0x0328);
static_assert(offsetof(UMagicLeapARPinComponent, PinData) == 0x0330);
static_assert(offsetof(AMagicLeapARPinInfoActorBase, PinId) == 0x0318);
static_assert(offsetof(AMagicLeapARPinRenderer, AllInfoActors) == 0x0320);
static_assert(offsetof(AMagicLeapARPinRenderer, ClassToSpawn) == 0x0378);
static_assert(offsetof(UMagicLeapARPinSettings, OnUpdatedEventTriggerDelta) == 0x002C);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinnedID) == 0x0028);
static_assert(offsetof(UMagicLeapARPinSaveGame, ComponentWorldTransform) == 0x0040);
static_assert(offsetof(UMagicLeapARPinSaveGame, PinTransform) == 0x0070);
static_assert(offsetof(UMagicLeapARPinContentBindings, AllContentBindings) == 0x0028);
static_assert(offsetof(FMagicLeapARPinQuery, TargetPoint) == 0x0054);
