// generated header

#pragma once
/// dependency: BasicType
/// dependency: AIActionPointGeneratorRuntime
/// dependency: AIModule
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MFNPCAIUtils
/// dependency: MFVoxelNav
/// dependency: NavigationSystem

#pragma pack(push, 0x1)

/// Class /Script/MFNPCAI.NPCBTService_BlueprintBase
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTService_BlueprintBase : public UBTService
{ 
public:
	bool                                               bAsSharedInstance;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	class AAIController*                               AIOwner;                                                    // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0080   (0x0014)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0094:0 (0x0001)  
	bool                                               bShowEventDetails : 1;                                      // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0095   (0x0003)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                            // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(class AActor* OwnerActor);                                                                       // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                           // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(class AActor* OwnerActor);                                                                      // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                             // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.ReceiveActivation
	// void ReceiveActivation(class AActor* OwnerActor);                                                                        // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.IsServiceActive
	// bool IsServiceActive();                                                                                                  // [0x606fc84] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.GetOwnerPawn
	// class APawn* GetOwnerPawn();                                                                                             // [0x606fc24] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCBTService_BlueprintBase.GetOwnerController
	// class AAIController* GetOwnerController();                                                                               // [0x606fbdc] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.NPCBTTask_BlueprintBase
/// Size: 0x00A8 (168 bytes) (0x000070 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTTask_BlueprintBase : public UBTTaskNode
{ 
public:
	bool                                               bAsSharedInstance;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	class AAIController*                               AIOwner;                                                    // 0x0078   (0x0008)  
	FIntervalCountdown                                 TickInterval;                                               // 0x0080   (0x0008)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x0088   (0x001C)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x00A5   (0x0003)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.SetFinishOnMessageWithId
	// void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);                                                     // [0x606fe90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.SetFinishOnMessage
	// void SetFinishOnMessage(FName MessageName);                                                                              // [0x606fdf8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.ReceiveExecute
	// void ReceiveExecute(class AActor* OwnerActor);                                                                           // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.ReceiveAbortAI
	// void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);                                  // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.ReceiveAbort
	// void ReceiveAbort(class AActor* OwnerActor);                                                                             // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.IsTaskExecuting
	// bool IsTaskExecuting();                                                                                                  // [0x606fdac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.IsTaskAborting
	// bool IsTaskAborting();                                                                                                   // [0x606fd90] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.GetOwnerPawn
	// class APawn* GetOwnerPawn();                                                                                             // [0x606fc24] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.GetOwnerController
	// class AAIController* GetOwnerController();                                                                               // [0x606fbdc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.FinishExecute
	// void FinishExecute(bool bSuccess);                                                                                       // [0x606fac0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCBTTask_BlueprintBase.FinishAbort
	// void FinishAbort();                                                                                                      // [0x606fa70] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCBTTask_LatenTaskBase
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNPCBTTask_LatenTaskBase : public UNPCBTTask_BlueprintBase
{ 
public:
	float                                              TaskDuration;                                               // 0x00A8   (0x0004)  
	float                                              StartTime;                                                  // 0x00AC   (0x0004)  


	/// Functions
	// Function /Script/MFNPCAI.NPCBTTask_LatenTaskBase.ForceAbortTask
	// void ForceAbortTask();                                                                                                   // [0x606fb8c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAISubsystemBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAISubsystemBase : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAISubsystemBase.OnPostBeginGameInit
	// void OnPostBeginGameInit();                                                                                              // [0x4de6e58] Native|Protected     
};

/// Class /Script/MFNPCAI.NPCAISpawnPoint
/// Size: 0x0348 (840 bytes) (0x000340 - 0x000348) align 8 MaxSize: 0x0348
class ANPCAISpawnPoint : public ANavigationObjectBase
{ 
public:
	bool                                               bCanBePlacedOnIsolateRegion;                                // 0x0340   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0341   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPathFollowingComponent
/// Size: 0x03A0 (928 bytes) (0x000298 - 0x0003A0) align 16 MaxSize: 0x03A0
class UNPCAIPathFollowingComponent : public UPathFollowingComponent
{ 
public:
	bool                                               bEnableMoveSmooth;                                          // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0299   (0x0003)  MISSED
	float                                              AdjustAngleMaxDist;                                         // 0x029C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x100];                                     // 0x02A0   (0x0100)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPathFollowingComponent.ResumePathFollowing
	// void ResumePathFollowing(class AActor* Actor, ENPCAIPausePathFollowReason reason);                                       // [0x602d3e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPathFollowingComponent.PausePathFollowing
	// void PausePathFollowing(class AActor* Actor, ENPCAIPausePathFollowReason reason);                                        // [0x602d27c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPathFollowingComponent.EnableFocus
	// void EnableFocus(class AActor* Actor, ENPCAIDisableFocusReason reason);                                                  // [0x602c490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPathFollowingComponent.EnableCheckPathSafety
	// void EnableCheckPathSafety(class AActor* Actor, bool bEnable);                                                           // [0x602c3a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPathFollowingComponent.DisableFocus
	// void DisableFocus(class AActor* Actor, ENPCAIDisableFocusReason reason);                                                 // [0x602c078] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavModifierVolume
/// Size: 0x0388 (904 bytes) (0x000368 - 0x000388) align 8 MaxSize: 0x0388
class ANPCAINavModifierVolume : public ANavModifierVolume
{ 
public:
	TArray<int64_t>                                    AffectedPolygons;                                           // 0x0368   (0x0010)  
	TArray<class ANPCAINavLinkProxy*>                  AffectedNavLinks;                                           // 0x0378   (0x0010)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavModifierVolume.SetupNavNodesAreaID
	// void SetupNavNodesAreaID();                                                                                              // [0x601fe74] Final|Native|Protected 
	// Function /Script/MFNPCAI.NPCAINavModifierVolume.OnNavDataRegisteredCallback
	// void OnNavDataRegisteredCallback(class ANavigationData* NavData);                                                        // [0x5d6407c] Final|Native|Protected 
	// Function /Script/MFNPCAI.NPCAINavModifierVolume.CollectAffectedNavNodes
	// void CollectAffectedNavNodes();                                                                                          // [0x46f6420] Native|Protected     
};

/// Struct /Script/MFNPCAI.AIRuntimeMonitorStatInfo
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FAIRuntimeMonitorStatInfo
{ 
	float                                              HistoryIncAvg;                                              // 0x0000   (0x0004)  
	float                                              HistoryIncMax;                                              // 0x0004   (0x0004)  
	int32_t                                            HistoryMaxCallCount;                                        // 0x0008   (0x0004)  
	float                                              HistoryAvgCallCount;                                        // 0x000C   (0x0004)  
	int32_t                                            TotalIncCount;                                              // 0x0010   (0x0004)  
	float                                              TotalIncExeTime;                                            // 0x0014   (0x0004)  
	int32_t                                            TotalSavedNum;                                              // 0x0018   (0x0004)  
	uint32_t                                           NowFrame32;                                                 // 0x001C   (0x0004)  
	int32_t                                            NowFrameCallCount;                                          // 0x0020   (0x0004)  
	float                                              NowFrameExeUseTime;                                         // 0x0024   (0x0004)  
	float                                              WarningTopCost;                                             // 0x0028   (0x0004)  
};

/// Class /Script/MFNPCAI.AIRuntimeMonitor
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UAIRuntimeMonitor : public UObject
{ 
public:
	TMap<FString, FAIRuntimeMonitorStatInfo>           StatMap;                                                    // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Class /Script/MFNPCAI.AISceneEventMessage
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UAISceneEventMessage : public UObject
{ 
public:
	float                                              ValidTime;                                                  // 0x0028   (0x0004)  
	float                                              ValidScope;                                                 // 0x002C   (0x0004)  
	TArray<FString>                                    Tags;                                                       // 0x0030   (0x0010)  
	TArray<class UObject*>                             ObjectParams;                                               // 0x0040   (0x0010)  
	int32_t                                            EvtUniqueId;                                                // 0x0050   (0x0004)  
	float                                              StartTime;                                                  // 0x0054   (0x0004)  
	float                                              EndTime;                                                    // 0x0058   (0x0004)  
	FVector                                            TriggerLocation;                                            // 0x005C   (0x000C)  


	/// Functions
	// Function /Script/MFNPCAI.AISceneEventMessage.IsExpired
	// bool IsExpired(float CurrentTimeSec);                                                                                    // [0x6007d74] Final|Native|Public  
};

/// Class /Script/MFNPCAI.AISceneEvent_SpawnAI
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
class UAISceneEvent_SpawnAI : public UAISceneEventMessage
{ 
public:
	SDK_UNDEFINED(1,1518) /* EAISpawnSceneEvtType */   __um(SpawnSceneEvtType);                                    // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.AISceneEventsTriggerManager
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UAISceneEventsTriggerManager : public UObject
{ 
public:
	TArray<class UAISceneEventMessage*>                SceneEventsList;                                            // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.TriggerSceneEvent
	// int32_t TriggerSceneEvent(class UAISceneEventMessage* SceneEvtMessage, FVector& TriggerLocation, float CoverInRange);    // [0x6008904] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.RemoveSceneEventByUniqueId
	// void RemoveSceneEventByUniqueId(int32_t EvtUniqueId);                                                                    // [0x60083dc] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.RemoveSceneEvent
	// void RemoveSceneEvent(class UAISceneEventMessage* SceneEvtMessage);                                                      // [0x4de6e70] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.OnDSTick
	// void OnDSTick();                                                                                                         // [0x1d76c64] Native|Public        
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.GetSceneEventByUniqueId
	// class UAISceneEventMessage* GetSceneEventByUniqueId(int32_t EvtUniqueId);                                                // [0x60077f8] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.FindNearSceneEvents
	// bool FindNearSceneEvents(TArray<UAISceneEventMessage*> ActivedEvents, FVector& CenterPos, float Radius);                 // [0x6006ed8] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.FilterExpiredSceneEvents
	// void FilterExpiredSceneEvents();                                                                                         // [0x6006ec4] Final|Native|Public  
	// Function /Script/MFNPCAI.AISceneEventsTriggerManager.ClearExpiredSceneEventOnAI
	// void ClearExpiredSceneEventOnAI(int32_t EvtUniqueId);                                                                    // [0x6006754] Final|Native|Public  
};

/// Struct /Script/MFNPCAI.AISGDoorUsed
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAISGDoorUsed
{ 
	class AActor*                                      SGDoor;                                                     // 0x0000   (0x0008)  
	class ACharacter*                                  AIPawn;                                                     // 0x0008   (0x0008)  
	double                                             UsedTime;                                                   // 0x0010   (0x0008)  
	char                                               WaitPersons;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.AISGDoorManager
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UAISGDoorManager : public UObject
{ 
public:
	TArray<FAISGDoorUsed>                              AISGDoorUsedList;                                           // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1519) /* TArray<TWeakObjectPtr<AActor*>> */ __um(DoorsInWorld);                               // 0x0038   (0x0010)  
	float                                              TimeFindDoorsInWorld;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.AISGDoorManager.WantToWaitUsed
	// void WantToWaitUsed(class ACharacter* AIPawn, class AActor* SGDoor);                                                     // [0x6008d90] Final|Native|Public  
	// Function /Script/MFNPCAI.AISGDoorManager.WantToUsedDoor
	// bool WantToUsedDoor(class ACharacter* AIPawn, class AActor* SGDoor);                                                     // [0x6008bac] Final|Native|Public  
	// Function /Script/MFNPCAI.AISGDoorManager.ReleaseUsedDoor
	// void ReleaseUsedDoor(class ACharacter* AIPawn);                                                                          // [0x60081e4] Final|Native|Public  
	// Function /Script/MFNPCAI.AISGDoorManager.InitDoorsInWorld
	// void InitDoorsInWorld(class UObject* WorldContext);                                                                      // [0x6007c1c] Final|Native|Private 
	// Function /Script/MFNPCAI.AISGDoorManager.GetPawnUsedDoor
	// class AActor* GetPawnUsedDoor(class AActor* SGDoor);                                                                     // [0x60076e8] Final|Native|Public  
	// Function /Script/MFNPCAI.AISGDoorManager.GetDoor
	// class AActor* GetDoor(class UObject* WorldContext, FVector& DoorPoint);                                                  // [0x6007434] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.AISGDoorManager.DoorIsBusy
	// bool DoorIsBusy(class AActor* SGDoor, class ACharacter* AIPawn);                                                         // [0x6006d18] Final|Native|Public  
	// Function /Script/MFNPCAI.AISGDoorManager.AutoRemoveInValidUsed
	// void AutoRemoveInValidUsed();                                                                                            // [0x6006660] Final|Native|Public  
};

/// Class /Script/MFNPCAI.BehaviorTreeTooler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBehaviorTreeTooler : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.BehaviorTreeTooler.GetGameState
	// class AGameState* GetGameState(class UObject* World);                                                                    // [0x6007564] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.BehaviorTreeTooler.GetClientWorld
	// class UWorld* GetClientWorld(class UObject* WorldContext);                                                               // [0x60072bc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NavLinkProxyGenerator
/// Size: 0x0378 (888 bytes) (0x000318 - 0x000378) align 8 MaxSize: 0x0378
class ANavLinkProxyGenerator : public AInfo
{ 
public:
	SDK_UNDEFINED(80,1520) /* TSet<int32_t> */         __um(EnabledMapIDs);                                        // 0x0318   (0x0050)  
	class UNavigationSystemV1*                         CachedNavSys;                                               // 0x0368   (0x0008)  
	class ARecastNavMesh*                              CachedNavMeshData;                                          // 0x0370   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAIActorComponent
/// Size: 0x0108 (264 bytes) (0x0000F8 - 0x000108) align 8 MaxSize: 0x0108
class UNPCAIActorComponent : public UActorComponent
{ 
public:
	TArray<class UNPCAIProfileBaseComponent*>          PropertyComponents;                                         // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIActorComponent.GetAIPropertyByClass
	// class UNPCAIProfileBaseComponent* GetAIPropertyByClass(class UClass* InPropertyClass);                                   // [0x60070b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCAIAimingInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIAimingInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIAimingInterface.UpdatePredestinedHit
	// void UpdatePredestinedHit();                                                                                             // [0x6008b94] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.TriggerPressedDone
	// void TriggerPressedDone(float WeaponRecoilParam);                                                                        // [0x6008868] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.SetTargetEnemy
	// void SetTargetEnemy(class AActor* InEnemyPawn);                                                                          // [0x5e51598] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.SetShootPartID
	// void SetShootPartID(char InShootPartID);                                                                                 // [0x60087cc] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.SetNextAimingDelay
	// void SetNextAimingDelay(float DelayTime);                                                                                // [0x6008730] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.SetAimingPoint
	// void SetAimingPoint(FVector& InAimingPoint);                                                                             // [0x6008478] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIAimingInterface.NodeUpdate
	// void NodeUpdate();                                                                                                       // [0x60081bc] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.NextShotMiss
	// void NextShotMiss();                                                                                                     // [0x60081a4] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.NextShotHit
	// void NextShotHit();                                                                                                      // [0x600818c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.LoseTarget
	// void LoseTarget();                                                                                                       // [0x6008178] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.IsWaitingStartAiming
	// bool IsWaitingStartAiming();                                                                                             // [0x6008154] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.IsUsingPredestined
	// bool IsUsingPredestined();                                                                                               // [0x600812c] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCAIAimingInterface.IsReady
	// bool IsReady();                                                                                                          // [0x5c5bd20] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.IsNextShotMiss
	// bool IsNextShotMiss();                                                                                                   // [0x6008008] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCAIAimingInterface.IsNextShotHit
	// bool IsNextShotHit();                                                                                                    // [0x6007fe0] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCAIAimingInterface.IsInPullBolt
	// bool IsInPullBolt();                                                                                                     // [0x6007fb8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.IsFacingTargetPoint
	// bool IsFacingTargetPoint(FVector& TargetPoint, float AngleLimit);                                                        // [0x6007e1c] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIAimingInterface.HasAmmo
	// bool HasAmmo();                                                                                                          // [0x6007a60] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetTargetEnemy
	// class AActor* GetTargetEnemy();                                                                                          // [0x5cb04f8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetShootPartID
	// char GetShootPartID();                                                                                                   // [0x60078a4] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetMaxShotCount
	// int32_t GetMaxShotCount();                                                                                               // [0x60076c0] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetLastDist2Target
	// float GetLastDist2Target();                                                                                              // [0x6007698] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetHit
	// void GetHit(int32_t DamageInfo);                                                                                         // [0x60075fc] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetDimAimingPoint
	// FVector GetDimAimingPoint(float Scaler);                                                                                 // [0x6007378] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetCurrentShotCount
	// int32_t GetCurrentShotCount();                                                                                           // [0x6007350] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetAimingPoint
	// FVector GetAimingPoint();                                                                                                // [0x6007284] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetAimingOffset
	// FVector GetAimingOffset(float WeakenTime);                                                                               // [0x60071c8] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIAimingInterface.GetAimingLeftTime
	// float GetAimingLeftTime();                                                                                               // [0x5d83944] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.ForceCompleteAim
	// void ForceCompleteAim();                                                                                                 // [0x600709c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.ClearNextShotMiss
	// void ClearNextShotMiss();                                                                                                // [0x600681c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.ClearNextShotHit
	// void ClearNextShotHit();                                                                                                 // [0x6006804] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.ClearNextShotFlags
	// void ClearNextShotFlags();                                                                                               // [0x60067ec] Native|Public        
	// Function /Script/MFNPCAI.NPCAIAimingInterface.CalculateRequiredAimingTime
	// float CalculateRequiredAimingTime(FVector& AimingPos);                                                                   // [0x6006674] Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/MFNPCAI.NPCAIAreaVolumeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIAreaVolumeInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIAsyncTaskBase
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIAsyncTaskBase : public UBlueprintAsyncActionBase
{ 
public:
	bool                                               bSimpleTodo;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	class AActor*                                      AIPawn;                                                     // 0x0038   (0x0008)  
};

/// Struct /Script/MFNPCAI.NPCAIAsyncTask
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNPCAIAsyncTask
{ 
	class AActor*                                      AIPawn;                                                     // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1521) /* ENPCAIAsyncTaskType */    __um(Type);                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UNPCAIAsyncTaskBase*                         AsyncTask;                                                  // 0x0010   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAIAsyncTaskSystem
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIAsyncTaskSystem : public UWorldSubsystem
{ 
public:
	TArray<FNPCAIAsyncTask>                            AsyncTasks;                                                 // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIAsyncTaskSystem.OnDSTick
	// void OnDSTick();                                                                                                         // [0x60081d0] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIAsyncTaskSystem.HasTask
	// bool HasTask(class AActor* AIPawn, ENPCAIAsyncTaskType& InType);                                                         // [0x6007a88] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIAsyncTaskSystem.GetTask
	// class UNPCAIAsyncTaskBase* GetTask(class AActor* AIPawn, ENPCAIAsyncTaskType& InType);                                   // [0x60078cc] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFNPCAI.NPCAIAttentionPoint
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNPCAIAttentionPoint : public UObject
{ 
public:
	bool                                               bIsCome;                                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class AActor*                                      Creator;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0038   (0x0001)  MISSED
	bool                                               IsFootSounder;                                              // 0x0039   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x003A   (0x0006)  MISSED
	class AActor*                                      FootSounderSpawnCharacter;                                  // 0x0040   (0x0008)  
	class AAIController*                               CheckingPlayer;                                             // 0x0048   (0x0008)  
	bool                                               bReachable;                                                 // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1522) /* ENPCPlaceForCheckType */  __um(PointType);                                            // 0x0051   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0052   (0x0002)  MISSED
	float                                              CreatedTime;                                                // 0x0054   (0x0004)  
	float                                              DiedTime;                                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData04_7[0x44];                                      // 0x005C   (0x0044)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.UpdatePointData
	// void UpdatePointData(float InNewCreateTime, FVector InNewPosition);                                                      // [0x6008a8c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.SetIsCome
	// void SetIsCome(bool InIsCome);                                                                                           // [0x6008694] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.SetDieTime
	// void SetDieTime(float LifeTime);                                                                                         // [0x60085e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.SetCreator
	// void SetCreator(class AActor* InCreator);                                                                                // [0x6008544] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.IsThisPointClose
	// bool IsThisPointClose(FVector InCheckLoc);                                                                               // [0x6008054] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.IsOld
	// bool IsOld();                                                                                                            // [0x6008030] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.IsGrenadeHolding
	// bool IsGrenadeHolding();                                                                                                 // [0x6007fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.IsGrenadeHit
	// bool IsGrenadeHit();                                                                                                     // [0x6007f84] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.IsGrenadeComing
	// bool IsGrenadeComing();                                                                                                  // [0x6007f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.IsFatal
	// bool IsFatal();                                                                                                          // [0x6007f54] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.IsDanger
	// bool IsDanger();                                                                                                         // [0x6007d54] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.GetPosition
	// FVector GetPosition();                                                                                                   // [0x60077c4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.CreateNewAttentionPointWithCoverPointID
	// class UNPCAIAttentionPoint* CreateNewAttentionPointWithCoverPointID(class UObject* InHolder, int32_t InCoverPointID, FVector InBaseLoc, ENPCPlaceForCheckType InType, class AActor* InCreator); // [0x6006a80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIAttentionPoint.CreateNewAttentionPoint
	// class UNPCAIAttentionPoint* CreateNewAttentionPoint(class UObject* InHolder, FVector InLoc, ENPCPlaceForCheckType InType, class AActor* InCreator); // [0x6006834] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIBattleVolumeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIBattleVolumeInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIBehaviorHistoryDebugInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIBehaviorHistoryDebugInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICharacterInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAICharacterInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIControllerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIControllerInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryData
/// Size: 0x01D0 (464 bytes) (0x000028 - 0x0001D0) align 8 MaxSize: 0x01D0
class UNPCAICoverEnvQueryData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0xA8];                                      // 0x0028   (0x00A8)  MISSED
	FVector                                            Generator_Location;                                         // 0x00D0   (0x000C)  
	float                                              Generator_Radius;                                           // 0x00DC   (0x0004)  
	class AVolume*                                     Generator_BotZoneVolume;                                    // 0x00E0   (0x0008)  
	float                                              IsFree_TreatAsFreeAfterSeconds;                             // 0x00E8   (0x0004)  
	float                                              IsSafe_TreatAsSafeAfterSeconds;                             // 0x00EC   (0x0004)  
	FVector                                            IsNear_Location;                                            // 0x00F0   (0x000C)  
	float                                              IsNear_Distance;                                            // 0x00FC   (0x0004)  
	bool                                               IsNear_Reversed;                                            // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FVector                                            CloserRatio_Location;                                       // 0x0104   (0x000C)  
	float                                              CloserRatio_Ratio;                                          // 0x0110   (0x0004)  
	FVector                                            CanContain_TargetLocation;                                  // 0x0114   (0x000C)  
	float                                              CanContain_HorizontalAngle;                                 // 0x0120   (0x0004)  
	float                                              CanContain_TopAngle;                                        // 0x0124   (0x0004)  
	float                                              CanContain_BottomAngle;                                     // 0x0128   (0x0004)  
	FVector                                            CanAttackTo_TargetLocation;                                 // 0x012C   (0x000C)  
	TArray<class AActor*>                              CanAttackTo_IgnoredActors;                                  // 0x0138   (0x0010)  
	FVector                                            PathLength_StartLocation;                                   // 0x0148   (0x000C)  
	float                                              PathLength_MaxPathLength;                                   // 0x0154   (0x0004)  
	float                                              PathLength_MaxRatio;                                        // 0x0158   (0x0004)  
	float                                              PathLength_CheckPoint;                                      // 0x015C   (0x0004)  
	float                                              DefenceRatio_MinRatio;                                      // 0x0160   (0x0004)  
	float                                              DefenceAngle_MinAngle;                                      // 0x0164   (0x0004)  
	TArray<FVector>                                    DistanceToHotPoint_Locations;                               // 0x0168   (0x0010)  
	FVector                                            DistanceToAllyCover_Location;                               // 0x0178   (0x000C)  
	float                                              DistanceToAllyCover_MinDistance;                            // 0x0184   (0x0004)  
	FVector                                            IsSameSideToTarget_TargetLocation;                          // 0x0188   (0x000C)  
	FVector                                            IsSameSideToTarget_TargetDirection;                         // 0x0194   (0x000C)  
	FVector                                            IsInCone_Location;                                          // 0x01A0   (0x000C)  
	FVector                                            IsInCone_Direction;                                         // 0x01AC   (0x000C)  
	float                                              IsInCone_Radius;                                            // 0x01B8   (0x0004)  
	float                                              IsInCone_Angle;                                             // 0x01BC   (0x0004)  
	FVector                                            CoverDist_Location;                                         // 0x01C0   (0x000C)  
	float                                              CoverDist_MaxDistance;                                      // 0x01CC   (0x0004)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupPathLength
	// void SetupPathLength(FVector& Location, float MaxPathLength, float MaxRatio, float CheckPointPathLength);                // [0x600bd70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupIsSameSideToTarget
	// void SetupIsSameSideToTarget(FVector& Location, FVector& Direction);                                                     // [0x600bafc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupIsSafe
	// void SetupIsSafe(float TreatAsSafeAfterSeconds);                                                                         // [0x600ba60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupIsIsNear
	// void SetupIsIsNear(FVector& Location, float Distance, bool bReversed);                                                   // [0x600b8d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupIsInCone
	// void SetupIsInCone(FVector& Location, FVector& Direction, float Radius, float Angle);                                    // [0x600b6d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupIsFree
	// void SetupIsFree(float TreatAsFreeAfterSeconds);                                                                         // [0x600b638] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupIsCloserRatio
	// void SetupIsCloserRatio(FVector& Location, float Ratio);                                                                 // [0x600b4f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupGenerator
	// void SetupGenerator(FVector& Location, float Radius, class AVolume* BotZoneVolume);                                      // [0x600b364] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupDistanceToHotPoint
	// void SetupDistanceToHotPoint(TArray<FVector>& Locations);                                                                // [0x600b1d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupDistanceToAllyCover
	// void SetupDistanceToAllyCover(FVector& Location, float MinDistance);                                                     // [0x600b0a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupDefenceRatio
	// void SetupDefenceRatio(float MinRatio);                                                                                  // [0x53758f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupDefenceAngle
	// void SetupDefenceAngle(float MinAngle);                                                                                  // [0x600b008] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupCoverDist
	// void SetupCoverDist(FVector& Location, float MaxDistance);                                                               // [0x600aec0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupCanContain
	// void SetupCanContain(FVector& Location, float HorizontalAngle, float TopAngle, float BottomAngle);                       // [0x600acec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverEnvQueryData.SetupCanAttackTo
	// void SetupCanAttackTo(FVector& Location, TArray<AActor*>& IgnoredActors);                                                // [0x600ab84] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryGenerator
/// Size: 0x0218 (536 bytes) (0x000210 - 0x000218) align 8 MaxSize: 0x0218
class UNPCAICoverEnvQueryGenerator : public UEnvQueryGenerator_OnCircle
{ 
public:
	class UCoverSystem*                                CacheCoverSystem;                                           // 0x0210   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_CanAttackTo
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_CanAttackTo : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_CanContain
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_CanContain : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_CloserRatio
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_CloserRatio : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_CoverDist
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_CoverDist : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_DefenceAngle
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_DefenceAngle : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_DefenceRatio
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_DefenceRatio : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_DistanceToAllyCover
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_DistanceToAllyCover : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_DistanceToHotPoint
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_DistanceToHotPoint : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_IsFree
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_IsFree : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_IsInCone
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_IsInCone : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_IsNear
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_IsNear : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_IsSafe
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_IsSafe : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_IsSameSideToTarget
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UNPCAICoverEnvQueryTest_IsSameSideToTarget : public UEnvQueryTest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_PathLength
/// Size: 0x0200 (512 bytes) (0x0001F8 - 0x000200) align 8 MaxSize: 0x0200
class UNPCAICoverEnvQueryTest_PathLength : public UEnvQueryTest
{ 
public:
	bool                                               bEnabledDebug;                                              // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_Protection
/// Size: 0x0200 (512 bytes) (0x0001F8 - 0x000200) align 8 MaxSize: 0x0200
class UNPCAICoverEnvQueryTest_Protection : public UEnvQueryTest
{ 
public:
	class UClass*                                      ProtectionFrom;                                             // 0x01F8   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAICoverEnvQueryTest_ShootDistance
/// Size: 0x0200 (512 bytes) (0x0001F8 - 0x000200) align 8 MaxSize: 0x0200
class UNPCAICoverEnvQueryTest_ShootDistance : public UEnvQueryTest
{ 
public:
	class UClass*                                      ShootDistanceTo;                                            // 0x01F8   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAICoverSystemStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAICoverSystemStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_IsSafe
	// bool TestCoverPoints_IsSafe(TArray<int32_t>& InPoints, float SecondsAfterLastSpotted, TArray<int32_t>& PassPoints, class UObject* WorldContextObject); // [0x600d06c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_IsNear
	// bool TestCoverPoints_IsNear(TArray<int32_t>& InPoints, FVector& Location, float Distance, bool bReversed, TArray<int32_t>& PassPoints, class UObject* WorldContextObject); // [0x600cdbc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_IsFree
	// bool TestCoverPoints_IsFree(TArray<int32_t>& InPoints, class AActor* InActor, float TreatAsFreeAfterSeconds, TArray<int32_t>& PassPoints, class UObject* WorldContextObject); // [0x600cbb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_HasNavPath
	// bool TestCoverPoints_HasNavPath(TArray<int32_t>& InPoints, FVector& StartLocation, float MaxPathLenght, TArray<int32_t>& PassPoints, class UObject* WorldContextObject); // [0x600c954] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_CanProtectPose
	// bool TestCoverPoints_CanProtectPose(TArray<int32_t>& InPoints, ENPCPoseType PoseType, TArray<int32_t>& PassPoints, class UObject* WorldContextObject); // [0x600c738] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_CanContain
	// bool TestCoverPoints_CanContain(TArray<int32_t>& InPoints, FVector& Location, float HorizontalAngle, float TopAngle, float BottomAngle, TArray<int32_t>& PassPoints, class UObject* WorldContextObject); // [0x600c430] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoints_CanAttackTo
	// bool TestCoverPoints_CanAttackTo(TArray<int32_t>& InPoints, FVector& Location, TArray<AActor*>& IgnoredActors, TArray<int32_t>& PassPoints, class UObject* WorldContextObject); // [0x600c0e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.TestCoverPoint_IsSafe
	// bool TestCoverPoint_IsSafe(int32_t InPointID, float SecondsAfterLastSpotted, class UObject* WorldContextObject);         // [0x600bf44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.SetCoverPointSpotted
	// bool SetCoverPointSpotted(int32_t PointId, class UObject* WorldContextObject);                                           // [0x600aaa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.SetCoverPointOwner
	// bool SetCoverPointOwner(int32_t PointId, class AActor* Actor, float Radius, class UObject* WorldContextObject);          // [0x600a920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.RunEQSQuery_FindBackUpCoverPointNearBy
	// class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery_FindBackUpCoverPointNearBy(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class AActor* Querier, FVector& InEnemyPos, float InRadiusNoCheck, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass); // [0x600a138] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.RemoveCoverPointBeTaked
	// void RemoveCoverPointBeTaked(class AActor* InAIPawn);                                                                    // [0x600a01c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.GetQueryResultsAsCoverIDs
	// bool GetQueryResultsAsCoverIDs(class UEnvQueryInstanceBlueprintWrapper* QueryInstanceBPWrapper, TArray<int32_t>& PassPoints); // [0x6009bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.GetCoverSystem
	// class UCoverSystem* GetCoverSystem(class UObject* WorldContextObject);                                                   // [0x6009b38] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.GetCoverPointPoseDataArray
	// bool GetCoverPointPoseDataArray(int32_t PointId, TArray<FCoverPoseData>& PoseDataArray, FVector& RightDirection, class UObject* WorldContextObject); // [0x6009950] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.GetCoverPointLocationAndDirection
	// bool GetCoverPointLocationAndDirection(int32_t PointId, FVector& Location, FVector& Direction, class UObject* WorldContextObject); // [0x60096f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.GetCoverPointData
	// bool GetCoverPointData(int32_t PointId, FCoverPointOctreeData& Data, class UObject* WorldContextObject);                 // [0x600958c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.FindNearestCoverPoint
	// bool FindNearestCoverPoint(FVector& Location, float EdgeSize, FVector& CoverLocation, class UObject* WorldContextObject); // [0x6009398] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.FindCoverPointsInSphere
	// bool FindCoverPointsInSphere(FVector Location, float Radius, TArray<int32_t>& Points, class UObject* WorldContextObject); // [0x60091e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAICoverSystemStatics.FindCoverPointsInPathLength
	// bool FindCoverPointsInPathLength(class AActor* AIPawn, float PathLength, TArray<FVector>& PointsPos);                    // [0x6009090] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIDamageData
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIDamageData : public UObject
{ 
public:
	float                                              TimeDamage;                                                 // 0x0028   (0x0004)  
	FVector                                            position;                                                   // 0x002C   (0x000C)  
	float                                              CachedMaxActiveTime;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIDamageData.IsActive
	// bool IsActive();                                                                                                         // [0x6009f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCAIDoorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIDoorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIDoorInterface.IsDoorLocked
	// bool IsDoorLocked();                                                                                                     // [0x5d83b74] Native|Public        
	// Function /Script/MFNPCAI.NPCAIDoorInterface.IsDoorClosed
	// bool IsDoorClosed();                                                                                                     // [0x5c5bd20] Native|Public        
};

/// Class /Script/MFNPCAI.NPCAIDoorOpenInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIDoorOpenInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIDoorOpenInterface.IsDoorOpened
	// bool IsDoorOpened(class AActor* InDoor);                                                                                 // [0x600ef34] Native|Public        
};

/// Class /Script/MFNPCAI.NPCAIDynamicGroupInfo
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UNPCAIDynamicGroupInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	int32_t                                            DyGroupId;                                                  // 0x0030   (0x0004)  
	float                                              CreateTime;                                                 // 0x0034   (0x0004)  
	bool                                               CanAutoRelease;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<class AActor*>                              AllyList;                                                   // 0x0040   (0x0010)  
	class UWorld*                                      WorldPrivate;                                               // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIDynamicGroupInfo.GetTimeSeconds
	// float GetTimeSeconds();                                                                                                  // [0x5c91ef8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIDynamicGroupInfo.GetAllyList
	// TArray<AActor*> GetAllyList();                                                                                           // [0x600ea40] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MFNPCAI.AIShotCountStat
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAIShotCountStat
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              LastTime;                                                   // 0x0004   (0x0004)  
	float                                              FirstTime;                                                  // 0x0008   (0x0004)  
	float                                              IntervalToClear;                                            // 0x000C   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAITargetInfoBase
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNPCAITargetInfoBase : public UObject
{ 
public:
	float                                              FirstTimeSeen;                                              // 0x0028   (0x0004)  
	float                                              TimeToForgorAboutEnemySec;                                  // 0x002C   (0x0004)  
	FAIShotCountStat                                   BeFireCount;                                                // 0x0030   (0x0010)  
	FAIShotCountStat                                   BeHitCount;                                                 // 0x0040   (0x0010)  
	float                                              EnemyStartSeenTime;                                         // 0x0050   (0x0004)  
	float                                              EnemyLastSeenTime;                                          // 0x0054   (0x0004)  
	float                                              EnemyLastKnowTime;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.SetTimeToForgorAboutEnemySec
	// void SetTimeToForgorAboutEnemySec(float Value);                                                                          // [0x6066464] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.SetTimeLastKnow
	// void SetTimeLastKnow(float InNowTime);                                                                                   // [0x60663c4] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.SetFirstTimeSeen
	// void SetFirstTimeSeen(float InNowTime);                                                                                  // [0x6066324] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.SetBeHitTime
	// void SetBeHitTime(float InNowTime);                                                                                      // [0x60660ac] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.SetBeFireTime
	// void SetBeFireTime(float InNowTime);                                                                                     // [0x606600c] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetTimeToForgorAboutEnemySec
	// float GetTimeToForgorAboutEnemySec();                                                                                    // [0x60656ac] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetTimeLastSeen
	// float GetTimeLastSeen();                                                                                                 // [0x6065680] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetTimeLastKnow
	// float GetTimeLastKnow();                                                                                                 // [0x6065654] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetLastBeHitTime
	// float GetLastBeHitTime();                                                                                                // [0x60652e8] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetFirstTimeSeen
	// float GetFirstTimeSeen();                                                                                                // [0x1ba97d8] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetFirstBeHitTime
	// float GetFirstBeHitTime();                                                                                               // [0x6064d68] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetFirstBeFireTime
	// float GetFirstBeFireTime();                                                                                              // [0x6064d3c] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetBeHitCount
	// int32_t GetBeHitCount();                                                                                                 // [0x60642a8] Native|Public        
	// Function /Script/MFNPCAI.NPCAITargetInfoBase.GetBeFireCount
	// int32_t GetBeFireCount();                                                                                                // [0x6064280] Native|Public        
};

/// Class /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo
/// Size: 0x00A8 (168 bytes) (0x000060 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCAIEnemyGroupSingleInfo : public UNPCAITargetInfoBase
{ 
public:
	bool                                               IsTemporaryEnemy;                                           // 0x0060   (0x0001)  
	bool                                               IsTemporaryEnemyFromAlly;                                   // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              EndTimeOfTemporaryEnemy;                                    // 0x0064   (0x0004)  
	FVector                                            EnemyLastSeenPosition;                                      // 0x0068   (0x000C)  
	float                                              EndTimeOfSupressed;                                         // 0x0074   (0x0004)  
	float                                              LastTimeCreateSuspectedPoint;                               // 0x0078   (0x0004)  
	float                                              PersonInValidTime;                                          // 0x007C   (0x0004)  
	class AActor*                                      Person;                                                     // 0x0080   (0x0008)  
	int32_t                                            HatredValue;                                                // 0x0088   (0x0004)  
	float                                              HatredEndtime;                                              // 0x008C   (0x0004)  
	float                                              LastShootGroupAllyTime;                                     // 0x0090   (0x0004)  
	int32_t                                            SuspectedPointCreatedNum;                                   // 0x0094   (0x0004)  
	float                                              LastIncreaseTimeSuspectedPoint;                             // 0x0098   (0x0004)  
	FVector                                            EnemyLastEstimatePosition;                                  // 0x009C   (0x000C)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.SetTemporaryEnemyInfo
	// void SetTemporaryEnemyInfo(bool InIsTemporaryEnemy, float InExpiredTime, bool InIsFromAlly);                             // [0x600f604] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.SetSuppressEndTime
	// void SetSuppressEndTime(float InEndTime);                                                                                // [0x600f56c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.SetLastShootGroupAllyTime
	// void SetLastShootGroupAllyTime(float InTime);                                                                            // [0x600f4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.SetHatredValue
	// void SetHatredValue(int32_t InHatredValue, float InEndTime);                                                             // [0x600f3e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.SetEnemyLastVisibleInfo
	// void SetEnemyLastVisibleInfo(FVector InLastSeenPosition, float InLastSeenTime);                                          // [0x600f2d8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.SetEnemyLastEstimatePosition
	// void SetEnemyLastEstimatePosition(class AActor* InEnemy, FVector InPosition);                                            // [0x600f1d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.IsRealValidEnemy
	// bool IsRealValidEnemy(float InNowTime);                                                                                  // [0x600efe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.GetSuspectedPointCreatedNum
	// int32_t GetSuspectedPointCreatedNum(class AActor* InAIPawn);                                                             // [0x600ec44] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.GetPerson
	// class AActor* GetPerson();                                                                                               // [0x600eb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.GetLastShootGroupAllyTime
	// float GetLastShootGroupAllyTime();                                                                                       // [0x600eb68] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.GetHatredValue
	// int32_t GetHatredValue(float InNowTime);                                                                                 // [0x600eac0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.GetEnemyLastEstimatePosition
	// FVector GetEnemyLastEstimatePosition();                                                                                  // [0x600ea70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.CalculateSuspectedPointCreatedNum
	// void CalculateSuspectedPointCreatedNum(class AActor* InAIPawn);                                                          // [0x600e608] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIEnemyGroupSingleInfo.AddSuspectedPointCreatedNum
	// void AddSuspectedPointCreatedNum(class AActor* InAIPawn);                                                                // [0x600e310] Final|Native|Public  
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryGenerator_BlueprintBase
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNPCAIEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator_BlueprintBase
{ 
public:
	FAIDataProviderIntValue                            IntParam;                                                   // 0x0080   (0x0038)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIEnvQueryGenerator_BlueprintBase.GetQueryIntParam
	// int32_t GetQueryIntParam(FName& ParamName);                                                                              // [0x600eb98] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryGenerator_OnPolyCenter
/// Size: 0x02F8 (760 bytes) (0x000210 - 0x0002F8) align 8 MaxSize: 0x02F8
class UNPCAIEnvQueryGenerator_OnPolyCenter : public UEnvQueryGenerator_OnCircle
{ 
public:
	FAIDataProviderBoolValue                           OnlyCurrentRegion;                                          // 0x0210   (0x0038)  
	FAIDataProviderBoolValue                           IncludeNavMeshPolyCenters;                                  // 0x0248   (0x0038)  
	FAIDataProviderBoolValue                           IncludeNavMeshInternalEdges;                                // 0x0280   (0x0038)  
	FAIDataProviderBoolValue                           IncludeNavMeshBoundaryEdges;                                // 0x02B8   (0x0038)  
	float                                              PointZOffset;                                               // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02F4   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryInstanceBlueprintWrapper
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class UNPCAIEnvQueryInstanceBlueprintWrapper : public UEnvQueryInstanceBlueprintWrapper
{ 
public:
	float                                              QueryTime;                                                  // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryItemType_CoverPoint
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UNPCAIEnvQueryItemType_CoverPoint : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryManager
/// Size: 0x0140 (320 bytes) (0x000140 - 0x000140) align 8 MaxSize: 0x0140
class UNPCAIEnvQueryManager : public UEnvQueryManager
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryTest_BlueprintBase
/// Size: 0x0218 (536 bytes) (0x0001F8 - 0x000218) align 8 MaxSize: 0x0218
class UNPCAIEnvQueryTest_BlueprintBase : public UEnvQueryTest
{ 
public:
	class UClass*                                      Context;                                                    // 0x01F8   (0x0008)  
	FText                                              TestDescription;                                            // 0x0200   (0x0018)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIEnvQueryTest_BlueprintBase.CalcScore
	// float CalcScore(class AActor* ItemActor, TArray<AActor*>& ContextActors);                                                // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryTest_PathfindingFromQuerier
/// Size: 0x0238 (568 bytes) (0x0001F8 - 0x000238) align 8 MaxSize: 0x0238
class UNPCAIEnvQueryTest_PathfindingFromQuerier : public UEnvQueryTest
{ 
public:
	SDK_UNDEFINED(1,1523) /* TEnumAsByte<EEnvTestPathfinding> */ __um(TestMode);                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0200   (0x0038)  
};

/// Class /Script/MFNPCAI.NPCAIEnvQueryTest_PointBase
/// Size: 0x0218 (536 bytes) (0x0001F8 - 0x000218) align 8 MaxSize: 0x0218
class UNPCAIEnvQueryTest_PointBase : public UEnvQueryTest
{ 
public:
	class UClass*                                      Context;                                                    // 0x01F8   (0x0008)  
	FText                                              TestDescription;                                            // 0x0200   (0x0018)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIEnvQueryTest_PointBase.CalcScore
	// float CalcScore(FVector& ItemLocation, TArray<AActor*>& ContextActors, class UObject* QueryOwner);                       // [0x182d6bc] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/MFNPCAI.NPCAIEQSSystemStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIEQSSystemStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIEQSSystemStatics.UARunEQSQuery
	// class UEnvQueryInstanceBlueprintWrapper* UARunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class AActor* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass, TEnumAsByte<EEnvQueryPriority> QueryPriority); // [0x600f748] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIEventSubsystem
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNPCAIEventSubsystem : public UNPCAISubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIFactionComponent
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
class UNPCAIFactionComponent : public UNPCAIActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0108   (0x0008)  MISSED
	TArray<class UNPCAIPropertyProfile*>               PropertyProfiles;                                           // 0x0110   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCAIFactionPluginBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIFactionPluginBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,1524) /* TArray<TWeakObjectPtr<UObject*>> */ __um(ObjectRefs);                                // 0x0028   (0x0010)  
};

/// Struct /Script/MFNPCAI.NPCAIProfileCover
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNPCAIProfileCover
{ 
	TArray<char>                                       Ars;                                                        // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
	FString                                            CoverName;                                                  // 0x0018   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCAIFactionPlugin
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNPCAIFactionPlugin : public UNPCAIFactionPluginBase
{ 
public:
	SDK_UNDEFINED(80,1525) /* TMap<EAIProfileType, class UClass*> */ __um(ProfileTypeMap);                         // 0x0038   (0x0050)  
	FNPCAIProfileCover                                 ProfileCover;                                               // 0x0088   (0x0028)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIFactionPlugin.CoverFaction
	// void CoverFaction(class AAIController* AIController);                                                                    // [0x514e094] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIFindAmbushAgainstPointAsyncTask
/// Size: 0x0078 (120 bytes) (0x000040 - 0x000078) align 8 MaxSize: 0x0078
class UNPCAIFindAmbushAgainstPointAsyncTask : public UNPCAIAsyncTaskBase
{ 
public:
	SDK_UNDEFINED(16,1526) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1527) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0050   (0x0010)  
	FVector                                            PointStart;                                                 // 0x0060   (0x000C)  
	FVector                                            PointToGo;                                                  // 0x006C   (0x000C)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIFindAmbushAgainstPointAsyncTask.ExecuteTask
	// void ExecuteTask();                                                                                                      // [0x156ee74] Native|Public        
	// Function /Script/MFNPCAI.NPCAIFindAmbushAgainstPointAsyncTask.AIFindAmbushAgainstPoint
	// class UNPCAIFindAmbushAgainstPointAsyncTask* AIFindAmbushAgainstPoint(class AActor* Pawn, FVector& PointStart, FVector& PointToGo); // [0x600db08] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIFindPathByKeyRouteAsyncTask
/// Size: 0x0128 (296 bytes) (0x000040 - 0x000128) align 8 MaxSize: 0x0128
class UNPCAIFindPathByKeyRouteAsyncTask : public UNPCAIAsyncTaskBase
{ 
public:
	SDK_UNDEFINED(16,1528) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1529) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0050   (0x0010)  
	FKeyRoutePointData                                 FromPoint;                                                  // 0x0060   (0x0060)  
	FKeyRoutePointData                                 ToPoint;                                                    // 0x00C0   (0x0060)  
	SDK_UNDEFINED(1,1530) /* EAIKeyRouteQueryType */   __um(QueryType);                                            // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0121   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIFindPathByKeyRouteAsyncTask.ExecuteTask
	// void ExecuteTask();                                                                                                      // [0x156ee74] Native|Public        
	// Function /Script/MFNPCAI.NPCAIFindPathByKeyRouteAsyncTask.AIFindPathByKeyRoute
	// class UNPCAIFindPathByKeyRouteAsyncTask* AIFindPathByKeyRoute(class AActor* Pawn, FKeyRoutePointData& FromPoint, FKeyRoutePointData& ToPoint, EAIKeyRouteQueryType QueryType); // [0x600debc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGameStateDebugInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIGameStateDebugInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIGlobalManagerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIGlobalManagerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.NotifySceneEvent
	// void NotifySceneEvent(class UAISceneEventMessage* SceneEvent, EAISceneEventState& EventState, class AActor* AIPawn);     // [0x600f088] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetTacticSystemActor
	// class ATacticSystemActor* GetTacticSystemActor();                                                                        // [0x4dddd6c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetPerceptionDynamicActor
	// class ANPCAIPerceptionDynamicActor* GetPerceptionDynamicActor();                                                         // [0x5cb0628] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetPerceptionAssistActor
	// class ANPCAIPerceptionAssistActor* GetPerceptionAssistActor();                                                           // [0x220627c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetGrenadeMinLifeTime
	// float GetGrenadeMinLifeTime();                                                                                           // [0x600ea98] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetCurrentFogDensity
	// float GetCurrentFogDensity();                                                                                            // [0x5d8373c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetCoverSystemActor
	// class ACoverSystemActor* GetCoverSystemActor();                                                                          // [0x4ddd7b8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetAISGDoorManager
	// class UAISGDoorManager* GetAISGDoorManager();                                                                            // [0x5cb05d8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetAISceneEventsTriggerManager
	// class UAISceneEventsTriggerManager* GetAISceneEventsTriggerManager();                                                    // [0x5cb0538] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetAISceneEventDataTable
	// class UDataTable* GetAISceneEventDataTable();                                                                            // [0x5cb04f8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetAIRuntimeMonitor
	// class UAIRuntimeMonitor* GetAIRuntimeMonitor();                                                                          // [0x5cb0600] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.GetAIGlobalShareInfo
	// class UNPCAIGlobalSharedInfo* GetAIGlobalShareInfo();                                                                    // [0x600ea18] Native|Public        
	// Function /Script/MFNPCAI.NPCAIGlobalManagerInterface.FindAllSGDoorsInWorld
	// void FindAllSGDoorsInWorld(TArray<TWeakObjectPtr<AActor*>>& DoorsInWorld);                                               // [0x600e8dc] Native|Public|HasOutParms 
};

/// Struct /Script/MFNPCAI.AIGlobalCacheActors
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAIGlobalCacheActors
{ 
	float                                              LastTimeSeconds;                                            // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1531) /* TArray<TWeakObjectPtr<AActor*>> */ __um(CacheActors);                                // 0x0008   (0x0010)  
};

/// Struct /Script/MFNPCAI.AIEnemyInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FAIEnemyInfo
{ 
	float                                              FireTime;                                                   // 0x0000   (0x0004)  
	float                                              TimeInterval;                                               // 0x0004   (0x0004)  
	FVector                                            FireLocation;                                               // 0x0008   (0x000C)  
	FVector                                            FireDirection;                                              // 0x0014   (0x000C)  
};

/// Struct /Script/MFNPCAI.AIAnalysisReport
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAIAnalysisReport
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.AIProtectTreasureBox
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FAIProtectTreasureBox
{ 
	class AActor*                                      BoxInstance;                                                // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0008   (0x0058)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIGlobalSharedInfo
/// Size: 0x0300 (768 bytes) (0x000028 - 0x000300) align 8 MaxSize: 0x0300
class UNPCAIGlobalSharedInfo : public UObject
{ 
public:
	float                                              TimeOfRunEQS_FindBackUpCoverPoint;                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TMap<class UClass*, FAIGlobalCacheActors>          CacheActorsInWorld;                                         // 0x0030   (0x0050)  
	TMap<uint32_t, FAIEnemyInfo>                       AIEnemyInfos;                                               // 0x0080   (0x0050)  
	bool                                               bEnableAIPerceptionLines;                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              AITrackLOGLastAutoReleaseTime;                              // 0x00D4   (0x0004)  
	TMap<FString, class UAITrackLOGUnit*>              AITrackLOGData;                                             // 0x00D8   (0x0050)  
	bool                                               bAITrackEnabled;                                            // 0x0128   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	SDK_UNDEFINED(80,1532) /* TMap<EAITrackLOGType, FString> */ __um(AITrackLOGTemplate);                          // 0x0130   (0x0050)  
	FAIAnalysisReport                                  AIAnalysisReport;                                           // 0x0180   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0184   (0x0004)  MISSED
	TArray<class AActor*>                              DSPoseUpdateWaitList;                                       // 0x0188   (0x0010)  
	TArray<class AActor*>                              DSLeanPoseUpdateWaitList;                                   // 0x0198   (0x0010)  
	class AActor*                                      DSPoseUpdateCharacter;                                      // 0x01A8   (0x0008)  
	TArray<class AActor*>                              DSIKUpdateWaitList;                                         // 0x01B0   (0x0010)  
	class AActor*                                      DSIKUpdateCharacter;                                        // 0x01C0   (0x0008)  
	TArray<FAIProtectTreasureBox>                      TreasureBoxInfos;                                           // 0x01C8   (0x0010)  
	SDK_UNDEFINED(80,1533) /* TMap<class UClass*, EAIProfileType> */ __um(AIPropClassTypes);                       // 0x01D8   (0x0050)  
	TMap<uint64_t, bool>                               CachedInvIDLimitedAIPickUp;                                 // 0x0228   (0x0050)  
	TMap<int32_t, char>                                ZombieReplaceSpecialIDMap;                                  // 0x0278   (0x0050)  
	class AActor*                                      LastBetrayPlayer;                                           // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x14];                                      // 0x02D0   (0x0014)  MISSED
	float                                              EnemyUpdateInterval;                                        // 0x02E4   (0x0004)  
	float                                              EnemyUpdatePosSize;                                         // 0x02E8   (0x0004)  
	float                                              EnemyPathQuerySize;                                         // 0x02EC   (0x0004)  
	unsigned char                                      UnknownData05_7[0x10];                                      // 0x02F0   (0x0010)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIGoalTarget
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIGoalTarget : public UObject
{ 
public:
	class UNPCAIAttentionPoint*                        AttentionPoint;                                             // 0x0028   (0x0008)  
	class AAIController*                               AIOwner;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGoalTarget.SetZeroGoal
	// void SetZeroGoal();                                                                                                      // [0x5374304] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.SetGoalTargetPoint
	// void SetGoalTargetPoint(class UNPCAIAttentionPoint* InPoint);                                                            // [0x6012888] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.SetAIOwner
	// void SetAIOwner(class AAIController* InOwner);                                                                           // [0x4de0af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.PointLookComplete
	// void PointLookComplete(int32_t InLookingIndex);                                                                          // [0x6011c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.IsDanger
	// bool IsDanger();                                                                                                         // [0x60118a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.HaveZeroTarget
	// bool HaveZeroTarget();                                                                                                   // [0x468d478] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.HavePlaceTarget
	// bool HavePlaceTarget();                                                                                                  // [0x6011488] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.HaveMainTarget
	// bool HaveMainTarget();                                                                                                   // [0x6011440] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.GetPointType
	// ENPCPlaceForCheckType GetPointType();                                                                                    // [0x6011194] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.GetGoalTargetPoint
	// class UNPCAIAttentionPoint* GetGoalTargetPoint();                                                                        // [0x4c1f12c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.GetCreatedTime
	// float GetCreatedTime();                                                                                                  // [0x6010dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.ClearGoalTarget
	// void ClearGoalTarget();                                                                                                  // [0x6010a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGoalTarget.CanCheckBody
	// bool CanCheckBody();                                                                                                     // [0x60102b4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupBaseRequest
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCAIGroupBaseRequest : public UObject
{ 
public:
	int32_t                                            RequestType;                                                // 0x0028   (0x0004)  
	int32_t                                            DynamicGroupId;                                             // 0x002C   (0x0004)  
	bool                                               bOnlyInDynamicGroup;                                        // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,1534) /* EAIGroupRequestPriority */ __um(RequestPriority);                                     // 0x0031   (0x0001)  
	bool                                               bCanExecuteByMyself;                                        // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
	int32_t                                            MaxTakenCount;                                              // 0x0034   (0x0004)  
	bool                                               IsNeedAllCompleted;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            CurrentTakenCount;                                          // 0x003C   (0x0004)  
	int32_t                                            CurrentCompleteCount;                                       // 0x0040   (0x0004)  
	int32_t                                            MaxRequestCount;                                            // 0x0044   (0x0004)  
	int32_t                                            RequestTypeNeedCompletedInPast;                             // 0x0048   (0x0004)  
	float                                              StartTimeOfTake;                                            // 0x004C   (0x0004)  
	float                                              EndTimeOfTake;                                              // 0x0050   (0x0004)  
	float                                              EndTimeOfExecute;                                           // 0x0054   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	class AActor*                                      Requester;                                                  // 0x0060   (0x0008)  
	class UObject*                                     WorldContext;                                               // 0x0068   (0x0008)  
	TArray<class AActor*>                              ExecuterList;                                               // 0x0070   (0x0010)  
	TArray<class AActor*>                              HistoryExecuterList;                                        // 0x0080   (0x0010)  
	TArray<class AActor*>                              PossibleExecuterList;                                       // 0x0090   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.Take
	// void Take(class AActor* InExecuter);                                                                                     // [0x4de6cc4] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.SetRequestTypeNeedCompletedInPast
	// bool SetRequestTypeNeedCompletedInPast();                                                                                // [0x6012a64] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.SetPossibleExecuterList
	// void SetPossibleExecuterList(TArray<AActor*>& InExecuterList);                                                           // [0x60129b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.SetEndTimeOnTake
	// void SetEndTimeOnTake(float InEndTime);                                                                                  // [0x60127dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.SetEndTimeOnExecute
	// void SetEndTimeOnExecute(float InEndTime);                                                                               // [0x6012730] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.RemoveFromExecuterList
	// void RemoveFromExecuterList(class AActor* InExecuter);                                                                   // [0x6011f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.IsPossibleExecuter
	// bool IsPossibleExecuter(class AActor* InExecuter);                                                                       // [0x6011b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.IsInHistoryExecuter
	// bool IsInHistoryExecuter(class AActor* InExecuter);                                                                      // [0x6011a7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.IsInExecuter
	// bool IsInExecuter(class AActor* InExecuter);                                                                             // [0x6011990] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.IsGroupAsRequester
	// bool IsGroupAsRequester();                                                                                               // [0x601196c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.InitRequestType
	// bool InitRequestType();                                                                                                  // [0x6011778] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.InitRequestInfo
	// void InitRequestInfo(class AActor* InRequester, int32_t InMaxTakenCount, float InEndOfTakeTime, class UObject* InWorldContext); // [0x60115e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.InitRequestByBluePrint
	// bool InitRequestByBluePrint();                                                                                           // [0x490e100] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.GetStartTimeOfTake
	// float GetStartTimeOfTake();                                                                                              // [0x29adf78] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.GetRequestName
	// FString GetRequestName();                                                                                                // [0x5dc94f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.GetRequester
	// class AActor* GetRequester();                                                                                            // [0x6011380] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.GetExecuterList
	// TArray<AActor*> GetExecuterList();                                                                                       // [0x6010de4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.GetEndTimeOfTake
	// float GetEndTimeOfTake();                                                                                                // [0x29adc9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.Dispose
	// void Dispose();                                                                                                          // [0x6010a4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CheckIsEndOfTake
	// bool CheckIsEndOfTake(float InCurrentRuntime);                                                                           // [0x6010988] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CheckIsEndOfExecute
	// bool CheckIsEndOfExecute(float InCurrentRuntime);                                                                        // [0x60108e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequestForLastRequestLimit
	// bool CheckCanTakeRequestForLastRequestLimit(class AActor* InExecuter);                                                   // [0x6010838] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequestForGroupLimit
	// bool CheckCanTakeRequestForGroupLimit(class AActor* InExecuter);                                                         // [0x6010650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequestAllLimit
	// bool CheckCanTakeRequestAllLimit(class AActor* InExecuter);                                                              // [0x60105a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CheckCanTakeRequest
	// bool CheckCanTakeRequest(class AActor* InExecuter);                                                                      // [0x60104f8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CanRequest
	// bool CanRequest();                                                                                                       // [0x60103d4] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.CanProceed
	// bool CanProceed(class AActor* InExecuter);                                                                               // [0x6010324] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupBaseRequest.AddPossibleExecuter
	// void AddPossibleExecuter(class AActor* InExecuter);                                                                      // [0x60100c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupAttackCloseRequest
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCAIGroupAttackCloseRequest : public UNPCAIGroupBaseRequest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIGroupCustomRequest
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCAIGroupCustomRequest : public UNPCAIGroupBaseRequest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIGroupDoorOpenRequest
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNPCAIGroupDoorOpenRequest : public UNPCAIGroupBaseRequest
{ 
public:
	class AActor*                                      Door;                                                       // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupDoorOpenRequest.InitData
	// void InitData(class AActor* InDoor);                                                                                     // [0x60114ac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupFollowMeRequest
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNPCAIGroupFollowMeRequest : public UNPCAIGroupBaseRequest
{ 
public:
	float                                              TimeLimit;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupFollowMeRequest.IsExecuterFar
	// bool IsExecuterFar(class AActor* InExecuter);                                                                            // [0x60118c4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupGoToPointRequest
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UNPCAIGroupGoToPointRequest : public UNPCAIGroupBaseRequest
{ 
public:
	FVector                                            PointToGo;                                                  // 0x00A8   (0x000C)  
	float                                              Radius;                                                     // 0x00B4   (0x0004)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupGoToPointRequest.InitTargetPoint
	// void InitTargetPoint(FVector InTargetPoint, float InRadius);                                                             // [0x60117a0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupHideRequest
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCAIGroupHideRequest : public UNPCAIGroupBaseRequest
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIGroupHoldRequest
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UNPCAIGroupHoldRequest : public UNPCAIGroupBaseRequest
{ 
public:
	FVector                                            Direction;                                                  // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupHoldRequest.InitData
	// void InitData(FVector InDirection);                                                                                      // [0x6011544] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupHoldRequest.GetProjectionPoint
	// FVector GetProjectionPoint(FVector InP1, FVector InP2, FVector InP3);                                                    // [0x60111f4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupHoldRequest.CalculateDirection
	// void CalculateDirection(class AActor* InExecuter, FVector InDirection, FVector InRequesterHeadPos);                      // [0x601015c] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAISubSystemComponent
/// Size: 0x0108 (264 bytes) (0x0000F8 - 0x000108) align 8 MaxSize: 0x0108
class UNPCAISubSystemComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAISubSystemComponent.GetOwnerPawn
	// class ACharacter* GetOwnerPawn();                                                                                        // [0x604e8e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAISubSystemComponent.GetOwnerController
	// class AAIController* GetOwnerController();                                                                               // [0x604e8c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCAIGroupRequestComponent
/// Size: 0x0158 (344 bytes) (0x000108 - 0x000158) align 8 MaxSize: 0x0158
class UNPCAIGroupRequestComponent : public UNPCAISubSystemComponent
{ 
public:
	bool                                               bIsLogEnabled;                                              // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	int32_t                                            LastCompletedRequestType;                                   // 0x010C   (0x0004)  
	SDK_UNDEFINED(16,1535) /* FMulticastInlineDelegate */ __um(OnRequestCompleted);                                // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1536) /* FMulticastInlineDelegate */ __um(OnRequestGiveUp);                                   // 0x0120   (0x0010)  
	float                                              NextSearchRequestTime;                                      // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	class UNPCAIGroupBaseRequest*                      CurrentRequest;                                             // 0x0138   (0x0008)  
	TArray<int32_t>                                    CompletedRequestTypeList;                                   // 0x0140   (0x0010)  
	class UNPCAIGroupRequestController*                GpRequestController;                                        // 0x0150   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.Update
	// void Update();                                                                                                           // [0x6014194] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.TryToFindRequest
	// bool TryToFindRequest();                                                                                                 // [0x6014170] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.TryGiveUpCurrentRequest
	// void TryGiveUpCurrentRequest();                                                                                          // [0x601415c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.TickCheckCurrentRequestIsValid
	// void TickCheckCurrentRequestIsValid();                                                                                   // [0x6012a8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.SetCurrentRequestCompleted
	// void SetCurrentRequestCompleted();                                                                                       // [0x601271c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.SetCurrentRequest
	// void SetCurrentRequest(class UNPCAIGroupBaseRequest* InRequest);                                                         // [0x6012684] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.HasCompletedRequestInPast
	// bool HasCompletedRequestInPast(int32_t InRequestType);                                                                   // [0x6011398] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.GetGroupRequestController
	// class UNPCAIGroupRequestController* GetGroupRequestController();                                                         // [0x6010ed8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.CheckCanReplaceHighPriorityRequest
	// bool CheckCanReplaceHighPriorityRequest(class UNPCAIGroupBaseRequest* InNewRequest);                                     // [0x60103fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestComponent.AcceptRequest
	// bool AcceptRequest(class UNPCAIGroupBaseRequest* InRequest);                                                             // [0x6010018] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupRequestController
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIGroupRequestController : public UObject
{ 
public:
	TArray<class UNPCAIGroupBaseRequest*>              GroupRequestsList;                                          // 0x0028   (0x0010)  
	float                                              LastTimeAutoFiltRequests;                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.TryAddRequest
	// bool TryAddRequest(class UNPCAIGroupBaseRequest* InRequest);                                                             // [0x6013bdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.TryActivateRequestByGroup
	// class UNPCAIGroupBaseRequest* TryActivateRequestByGroup(class UObject* InWorldContextObject, class UClass* InRequestClass, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InOnlyInDynamicGroup, bool InCanExecuteByMyself, TArray<AActor*>& InPossibleExecuterList); // [0x601385c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.TryActivateRequestByClass
	// class UNPCAIGroupBaseRequest* TryActivateRequestByClass(class AActor* InRequester, class UClass* InRequestClass, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InCanExecuteByMyself, TArray<AActor*>& InPossibleExecuterList); // [0x6013520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.TryActivateRequest
	// class UNPCAIGroupBaseRequest* TryActivateRequest(class AActor* InRequester, class UNPCAIGroupBaseRequest* InRequestInstance, int32_t InMaxExecuterCount, bool InIsNeedAllCompleted, bool InCanExecuteByMyself, TArray<AActor*>& InPossibleExecuterList); // [0x60132b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.TryActivateCustomRequest
	// class UNPCAIGroupBaseRequest* TryActivateCustomRequest(class AActor* InRequester, class UNPCAIGroupCustomRequest* InRequest, class AActor* PossibleExecuter, bool bResetSearchTime, bool InIsNeedAllCompleted, bool bCleanPendingRequest); // [0x6012aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.RequestGiveUpToDo
	// void RequestGiveUpToDo(class UNPCAIGroupBaseRequest* InRequest, class AActor* InExecuter);                               // [0x60123ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.RequestCompletedToDo
	// void RequestCompletedToDo(class UNPCAIGroupBaseRequest* InRequest, class AActor* InExecuter);                            // [0x6012150] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.RemoveRequestInList
	// void RemoveRequestInList(class UNPCAIGroupBaseRequest* InRequest);                                                       // [0x6012028] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.RemoveAllByRequester
	// void RemoveAllByRequester(class AActor* InRequester);                                                                    // [0x6011d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.GetGroupRequestsList
	// TArray<UNPCAIGroupBaseRequest*> GetGroupRequestsList();                                                                  // [0x6011108] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.GetGroupRequestListByType
	// int32_t GetGroupRequestListByType(int32_t InRequestType, TArray<UNPCAIGroupBaseRequest*>& OutRequestsList);              // [0x6010fa4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.GetGroupRequestCountByType
	// int32_t GetGroupRequestCountByType(int32_t InRequestType);                                                               // [0x6010efc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.GetGroupRequestCount
	// int32_t GetGroupRequestCount();                                                                                          // [0x50ca39c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.GetGroupRequestByType
	// class UNPCAIGroupBaseRequest* GetGroupRequestByType(int32_t InRequestType);                                              // [0x6010e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.FindForMe
	// class UNPCAIGroupBaseRequest* FindForMe(class AActor* InExecuter);                                                       // [0x6010c2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupRequestController.FilterInValidRequest
	// void FilterInValidRequest(class UObject* WorldContext);                                                                  // [0x6010a60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupSusspressionFireRequest
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UNPCAIGroupSusspressionFireRequest : public UNPCAIGroupBaseRequest
{ 
public:
	SDK_UNDEFINED(1,1537) /* EAIGroupRequestFireTarget */ __um(TargetType);                                        // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	class AActor*                                      EnemyTarget;                                                // 0x00B0   (0x0008)  
	FVector                                            PointTarget;                                                // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00C4   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupSusspressionFireRequest.IsEnemyLost
	// bool IsEnemyLost();                                                                                                      // [0x6015ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupSusspressionFireRequest.InitEnemy
	// void InitEnemy(class AActor* InEnemy, FVector InFirePoint);                                                              // [0x6015a8c] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupThrowGrenadeRequest
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNPCAIGroupThrowGrenadeRequest : public UNPCAIGroupBaseRequest
{ 
public:
	class AActor*                                      EnemyTarget;                                                // 0x00A8   (0x0008)  
	FVector                                            PointTarget;                                                // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupThrowGrenadeRequest.IsThrowEnemy
	// bool IsThrowEnemy();                                                                                                     // [0x6015eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupThrowGrenadeRequest.IsEnemyLost
	// bool IsEnemyLost();                                                                                                      // [0x6015d54] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupThrowGrenadeRequest.InitEnemy
	// void InitEnemy(class AActor* InEnemy, FVector InThrowPoint);                                                             // [0x6015bdc] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UNPCAIGroupWarnPlayerRequest : public UNPCAIGroupBaseRequest
{ 
public:
	class AActor*                                      WarnPlayer;                                                 // 0x00A8   (0x0008)  
	SDK_UNDEFINED(1,1538) /* EAIStateWarnPlayerRequest */ __um(StateWarnPlayer);                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              DistanceToRequester;                                        // 0x00B4   (0x0004)  
	FVector                                            PointToShoot;                                               // 0x00B8   (0x000C)  
	float                                              TimeOfStay;                                                 // 0x00C4   (0x0004)  
	int32_t                                            CountOfWarns;                                               // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest.ShallEndStay
	// bool ShallEndStay(class AActor* InExecuter);                                                                             // [0x5c3a1b4] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest.OnStateToDo
	// void OnStateToDo(class AActor* InExecuter);                                                                              // [0x5d76150] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest.NextState
	// void NextState(class AActor* InExecuter);                                                                                // [0x5c3ce7c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest.IsWarnPlayerAwayFromRequester
	// bool IsWarnPlayerAwayFromRequester();                                                                                    // [0x6015f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest.InitData
	// void InitData(class AActor* InTargetToWarn);                                                                             // [0x60114ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest.GetPointToShoot
	// FVector GetPointToShoot();                                                                                               // [0x6015a18] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIGroupWarnPlayerRequest.CalculatePointToShoot
	// void CalculatePointToShoot();                                                                                            // [0x6014bdc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.MetisOptions
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FMetisOptions
{ 
	bool                                               bUseDefault;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	SDK_UNDEFINED(4,1539) /* EMETIS_OBJTYPE */         __um(ObjectiveType);                                        // 0x0004   (0x0004)  
	SDK_UNDEFINED(4,1540) /* EMETIS_CTYPE */           __um(CoarsenType);                                          // 0x0008   (0x0004)  
	SDK_UNDEFINED(4,1541) /* EMETIS_IPTYPE */          __um(InitialPartitioningType);                              // 0x000C   (0x0004)  
	SDK_UNDEFINED(4,1542) /* EMETIS_RTYPE */           __um(RifinementType);                                       // 0x0010   (0x0004)  
	int32_t                                            NCuts;                                                      // 0x0014   (0x0004)  
	int32_t                                            IterateTimes;                                               // 0x0018   (0x0004)  
	bool                                               bMinimizeMaximumConnectivity;                               // 0x001C   (0x0001)  
	bool                                               bNo2Hop;                                                    // 0x001D   (0x0001)  
	bool                                               bForcesContiguousPartitions;                                // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x001F   (0x0001)  MISSED
};

/// Struct /Script/MFNPCAI.HNavSettings
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FHNavSettings
{ 
	bool                                               bAutoBuildAfterNavigationGenerationFinished;                // 0x0000   (0x0001)  
	bool                                               bBuildIntermediateGraph;                                    // 0x0001   (0x0001)  
	bool                                               bRemoveIntermediateGraph;                                   // 0x0002   (0x0001)  
	bool                                               bIntraPathOnlyInSelfNode;                                   // 0x0003   (0x0001)  
	bool                                               bCombineMultiEdges;                                         // 0x0004   (0x0001)  
	bool                                               bEnableEdgeWeight;                                          // 0x0005   (0x0001)  
	bool                                               bBreakNavLinkConnection;                                    // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
	int32_t                                            MaxGraphLevel;                                              // 0x0008   (0x0004)  
	int32_t                                            PartitionSize;                                              // 0x000C   (0x0004)  
	int32_t                                            ForceBuildForTopK;                                          // 0x0010   (0x0004)  
	int32_t                                            MinNodeCountToBuild;                                        // 0x0014   (0x0004)  
	int32_t                                            MaxSearchNode;                                              // 0x0018   (0x0004)  
	FMetisOptions                                      MetisOptions;                                               // 0x001C   (0x0020)  
};

/// Struct /Script/MFNPCAI.PortalEdge
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FPortalEdge
{ 
	uint64_t                                           PackedData;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/MFNPCAI.IntraPath
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FIntraPath
{ 
	uint64_t                                           PackedData;                                                 // 0x0000   (0x0008)  
	TArray<uint64_t>                                   Nodes;                                                      // 0x0008   (0x0010)  
	float                                              Length;                                                     // 0x0018   (0x0004)  
	float                                              Cost;                                                       // 0x001C   (0x0004)  
};

/// Struct /Script/MFNPCAI.HNavGraph
/// Size: 0x0150 (336 bytes) (0x000000 - 0x000150) align 8 MaxSize: 0x0150
struct FHNavGraph
{ 
	int32_t                                            Level;                                                      // 0x0000   (0x0004)  
	int32_t                                            NodeCount;                                                  // 0x0004   (0x0004)  
	bool                                               bIntermediate;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<int32_t>                                    ParentIndices;                                              // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0020   (0x0020)  MISSED
	TArray<int32_t>                                    ChildIndexOffsets;                                          // 0x0040   (0x0010)  
	TArray<int32_t>                                    ChildIndices;                                               // 0x0050   (0x0010)  
	TArray<int32_t>                                    PortalEdgeOffsets;                                          // 0x0060   (0x0010)  
	TArray<FPortalEdge>                                PortalEdges;                                                // 0x0070   (0x0010)  
	TArray<int32_t>                                    IntraPathOffsets;                                           // 0x0080   (0x0010)  
	TArray<FIntraPath>                                 IntraPaths;                                                 // 0x0090   (0x0010)  
	TArray<int32_t>                                    IntraPathSourceIndexOffsets;                                // 0x00A0   (0x0010)  
	TArray<int32_t>                                    IntraPathSourceIndices;                                     // 0x00B0   (0x0010)  
	TArray<int32_t>                                    IntraPathTargetIndexOffsets;                                // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00D0   (0x0010)  MISSED
	TArray<uint64_t>                                   IntraPathCounts;                                            // 0x00E0   (0x0010)  
	TArray<int32_t>                                    IntraPathPolyRefOffsets;                                    // 0x00F0   (0x0010)  
	TArray<uint64_t>                                   IntraPathPolyRefs;                                          // 0x0100   (0x0010)  
	TArray<float>                                      IntraPathCosts;                                             // 0x0110   (0x0010)  
	TArray<float>                                      IntraPathLengths;                                           // 0x0120   (0x0010)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x0130   (0x0020)  MISSED
};

/// Struct /Script/MFNPCAI.HNavSearchInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FHNavSearchInfo
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIHNavActor
/// Size: 0x04A8 (1192 bytes) (0x000318 - 0x0004A8) align 8 MaxSize: 0x04A8
class ANPCAIHNavActor : public AActor
{ 
public:
	FHNavSettings                                      Settings;                                                   // 0x0318   (0x003C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0354   (0x0004)  MISSED
	TArray<FHNavGraph>                                 Graphs;                                                     // 0x0358   (0x0010)  
	int32_t                                            MinimumPartitionCount;                                      // 0x0368   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x036C   (0x0004)  MISSED
	TArray<char>                                       PortalNodeFlags;                                            // 0x0370   (0x0010)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x0380   (0x00C0)  MISSED
	FHNavSearchInfo                                    SearchedInfo;                                               // 0x0440   (0x0060)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x04A0   (0x0004)  MISSED
	bool                                               bUseDefaultPathfinding;                                     // 0x04A4   (0x0001)  
	bool                                               bNewMaxPortalAdjacency;                                     // 0x04A5   (0x0001)  
	unsigned char                                      UnknownData04_7[0x2];                                       // 0x04A6   (0x0002)  MISSED
};

/// Class /Script/MFNPCAI.NPCAILaunchPad
/// Size: 0x0350 (848 bytes) (0x000318 - 0x000350) align 8 MaxSize: 0x0350
class ANPCAILaunchPad : public AActor
{ 
public:
	class USceneComponent*                             Root;                                                       // 0x0318   (0x0008)  
	class UStaticMeshComponent*                        Launchpad;                                                  // 0x0320   (0x0008)  
	class USphereComponent*                            TriggerVolume;                                              // 0x0328   (0x0008)  
	class UNavLinkComponent*                           NavLink;                                                    // 0x0330   (0x0008)  
	FVector                                            Target;                                                     // 0x0338   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0344   (0x0004)  MISSED
	class ACharacter*                                  LaunchedCharacter;                                          // 0x0348   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAILaunchPad.OnTriggerBeginOverlap
	// void OnTriggerBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x6015f48] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAILaunchPad.CanTriggerLaunch
	// bool CanTriggerLaunch(class ACharacter* Other);                                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAILaunchPad.CalculateLaunchVelocity
	// FVector CalculateLaunchVelocity(class AActor* LaunchedActor);                                                            // [0x6014b24] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAILaunchPad.BP_LaunchCharacter
	// void BP_LaunchCharacter(class ACharacter* Character);                                                                    // [0x182d6bc] Event|Protected|BlueprintEvent 
};

/// Class /Script/MFNPCAI.NPCAITestingRenderingComponent
/// Size: 0x04F0 (1264 bytes) (0x0004F0 - 0x0004F0) align 16 MaxSize: 0x04F0
class UNPCAITestingRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAILocalNavigationRenderingComponent
/// Size: 0x04F0 (1264 bytes) (0x0004F0 - 0x0004F0) align 16 MaxSize: 0x04F0
class UNPCAILocalNavigationRenderingComponent : public UNPCAITestingRenderingComponent
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAINavSubsystemBase
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAINavSubsystemBase : public UNPCAISubsystemBase
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavSubsystemBase.IsNavTileDataPrepared
	// bool IsNavTileDataPrepared(class UObject* WorldContextObject);                                                           // [0x602a388] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSubsystemBase.GetNavLinkById
	// class ANPCAINavLinkProxy* GetNavLinkById(class UObject* WorldContextObject, int32_t LinkId);                             // [0x602a2a4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAILocalNavigationSubsystem
/// Size: 0x00D0 (208 bytes) (0x000038 - 0x0000D0) align 8 MaxSize: 0x00D0
class UNPCAILocalNavigationSubsystem : public UNPCAINavSubsystemBase
{ 
public:
	float                                              GridCellSize;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x34];                                      // 0x003C   (0x0034)  MISSED
	SDK_UNDEFINED(80,1543) /* TMap<TWeakObjectPtr<UObject*>, int32_t> */ __um(CauserToGridId);                     // 0x0070   (0x0050)  
	SDK_UNDEFINED(16,1544) /* FMulticastInlineDelegate */ __um(OnNavigationGridUpdated);                           // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.SetCellSize
	// bool SetCellSize(float CellSize);                                                                                        // [0x6016adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.RemoveGridById
	// int32_t RemoveGridById(int32_t GridId, bool bUpdate);                                                                    // [0x6016948] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.RemoveGridByCauser
	// int32_t RemoveGridByCauser(class UObject* Causer, bool bUpdate);                                                         // [0x6016788] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.RemoveAllGrids
	// void RemoveAllGrids();                                                                                                   // [0x601670c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.OnNavigationGridUpdated__DelegateSignature
	// void OnNavigationGridUpdated__DelegateSignature();                                                                       // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.CreateGridForPoints
	// int32_t CreateGridForPoints(class UObject* Causer, ENPCAICellGridValue CellGridValue, TArray<FVector>& Locations, float Padding2D, float Height, bool bRebuildGrids); // [0x60153d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.CreateGridForCapsule
	// int32_t CreateGridForCapsule(class UObject* Causer, ENPCAICellGridValue CellGridValue, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, float Padding2D, float Height, bool bRebuildGrids); // [0x60150a8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAILocalNavigationSubsystem.CreateGridForBox
	// int32_t CreateGridForBox(class UObject* Causer, ENPCAICellGridValue CellGridValue, FVector& Location, FVector& Extent, FRotator Rotation, float Padding2D, float Height, bool bRebuildGrids); // [0x6014d24] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAITestingActor
/// Size: 0x0358 (856 bytes) (0x000318 - 0x000358) align 8 MaxSize: 0x0358
class ANPCAITestingActor : public AActor
{ 
public:
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0318   (0x0008)  
	FNavAgentProperties                                NavAgentProps;                                              // 0x0320   (0x0030)  
	bool                                               bEnableDrawing;                                             // 0x0350   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0351   (0x0003)  MISSED
	float                                              DrawDistanceLimit;                                          // 0x0354   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAILocalNavigationTestingActor
/// Size: 0x03B8 (952 bytes) (0x000358 - 0x0003B8) align 8 MaxSize: 0x03B8
class ANPCAILocalNavigationTestingActor : public ANPCAITestingActor
{ 
public:
	FColor                                             EmptyCellColor;                                             // 0x0358   (0x0004)  
	FColor                                             BlockedCellColor;                                           // 0x035C   (0x0004)  
	FVector                                            CellTextOffset;                                             // 0x0360   (0x000C)  
	bool                                               bDrawNavGrids;                                              // 0x036C   (0x0001)  
	bool                                               bDrawCellId;                                                // 0x036D   (0x0001)  
	bool                                               bDrawCellCoords;                                            // 0x036E   (0x0001)  
	bool                                               bDrawCellZ;                                                 // 0x036F   (0x0001)  
	class AActor*                                      Destination;                                                // 0x0370   (0x0008)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0378   (0x0010)  
	int32_t                                            SelfCombinedGridId;                                         // 0x0388   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	TArray<int32_t>                                    SelfSourceGridIds;                                          // 0x0390   (0x0010)  
	FIntVector                                         SelfGridSize;                                               // 0x03A0   (0x000C)  
	FIntVector                                         SelfCoords;                                                 // 0x03AC   (0x000C)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAILocalNavigationTestingActor.OnNavigationGridUpdated
	// void OnNavigationGridUpdated();                                                                                          // [0x6015f34] Final|Native|Protected 
};

/// Struct /Script/MFNPCAI.AIBackUpCoverPointFinder
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FAIBackUpCoverPointFinder
{ 
	FVector                                            AIPosistion;                                                // 0x0000   (0x000C)  
	FVector                                            EnemyPosition;                                              // 0x000C   (0x000C)  
	float                                              LastTime;                                                   // 0x0018   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIStackGunRecord
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FAIStackGunRecord
{ 
	bool                                               CanStackGun;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            MyPosition;                                                 // 0x0004   (0x000C)  
	FVector                                            EnemyPosition;                                              // 0x0010   (0x000C)  
	SDK_UNDEFINED(1,1545) /* EAILeanType */            __um(AILean);                                               // 0x001C   (0x0001)  
	SDK_UNDEFINED(1,1546) /* EAIPose */                __um(AIPose);                                               // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001E   (0x0002)  MISSED
	FVector                                            GunPoint;                                                   // 0x0020   (0x000C)  
	FVector                                            EeyPoint;                                                   // 0x002C   (0x000C)  
	FVector                                            ShootPoint;                                                 // 0x0038   (0x000C)  
};

/// Struct /Script/MFNPCAI.AIRoundPathFindingNodes
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FAIRoundPathFindingNodes
{ 
	float                                              LastTimeCheckUpdate;                                        // 0x0000   (0x0004)  
	int32_t                                            CheckUpdateCount;                                           // 0x0004   (0x0004)  
	float                                              RoundPathLength;                                            // 0x0008   (0x0004)  
	float                                              RadiusReCalcRoundPathNodes;                                 // 0x000C   (0x0004)  
	int64_t                                            CurrentPolyId;                                              // 0x0010   (0x0008)  
	FVector                                            LastLocationCalcRoundPathNodes;                             // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_7[0x5C];                                      // 0x0024   (0x005C)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIQueryRoundEnvironmentResult
/// Size: 0x005C (92 bytes) (0x000000 - 0x00005C) align 4 MaxSize: 0x005C
struct FNPCAIQueryRoundEnvironmentResult
{ 
	FVector                                            AILocation;                                                 // 0x0000   (0x000C)  
	FVector                                            EnemyLocation;                                              // 0x000C   (0x000C)  
	bool                                               LCanMove;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FVector                                            LMovePoint;                                                 // 0x001C   (0x000C)  
	bool                                               RCanMove;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FVector                                            RMovePoint;                                                 // 0x002C   (0x000C)  
	bool                                               FCanMove;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FVector                                            FMovePoint;                                                 // 0x003C   (0x000C)  
	bool                                               BCanMove;                                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	FVector                                            BMovePoint;                                                 // 0x004C   (0x000C)  
	bool                                               LCanDefense;                                                // 0x0058   (0x0001)  
	bool                                               RCanDefense;                                                // 0x0059   (0x0001)  
	bool                                               LCanAttack;                                                 // 0x005A   (0x0001)  
	bool                                               RCanAttack;                                                 // 0x005B   (0x0001)  
};

/// Class /Script/MFNPCAI.NPCAIMemorySystemComponent
/// Size: 0x0320 (800 bytes) (0x000108 - 0x000320) align 8 MaxSize: 0x0320
class UNPCAIMemorySystemComponent : public UNPCAISubSystemComponent
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED
	bool                                               IsLockingGoalEnemy;                                         // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	class UNPCAITargetInfo*                            GoalEnemy;                                                  // 0x0128   (0x0008)  
	class UNPCAITargetInfo*                            LastEnemy;                                                  // 0x0130   (0x0008)  
	float                                              LastSetGoalEnemyTime;                                       // 0x0138   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FString                                            MemoryServiceNodeName;                                      // 0x0140   (0x0010)  
	class UNPCAIGoalTarget*                            GoalTarget;                                                 // 0x0150   (0x0008)  
	FVector                                            CheckCoverPointPosition;                                    // 0x0158   (0x000C)  
	int32_t                                            CurrentCoverPointID;                                        // 0x0164   (0x0004)  
	FAIBackUpCoverPointFinder                          BackUpCoverPointFinder;                                     // 0x0168   (0x001C)  
	int32_t                                            PeekCount;                                                  // 0x0184   (0x0004)  
	char                                               CallUpReason;                                               // 0x0188   (0x0001)  
	char                                               CallUpResult;                                               // 0x0189   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x018A   (0x0002)  MISSED
	float                                              LastMolotovHurttime;                                        // 0x018C   (0x0004)  
	float                                              SightWeakenEndTime;                                         // 0x0190   (0x0004)  
	bool                                               bIsInTryLeanShoot;                                          // 0x0194   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0195   (0x0003)  MISSED
	float                                              PauseBehaviorEndTime;                                       // 0x0198   (0x0004)  
	bool                                               bIsAlwaysOpenDoor;                                          // 0x019C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x019D   (0x0003)  MISSED
	FAIStackGunRecord                                  StackGunRecord;                                             // 0x01A0   (0x0044)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x01E4   (0x0004)  MISSED
	TArray<int32_t>                                    AcceptedSceneEvtUniqueIds;                                  // 0x01E8   (0x0010)  
	FAIRoundPathFindingNodes                           RoundPathNodes;                                             // 0x01F8   (0x0080)  
	class AActor*                                      TreasureBoxWantProtect;                                     // 0x0278   (0x0008)  
	FVector                                            Cache_AmbushAgainstStartPoint;                              // 0x0280   (0x000C)  
	FVector                                            Cache_AmbushAgainstEndPoint;                                // 0x028C   (0x000C)  
	FVector                                            Cache_AmbushAgainstResultPoint;                             // 0x0298   (0x000C)  
	FNPCAIQueryRoundEnvironmentResult                  Cache_QREResult;                                            // 0x02A4   (0x005C)  
	class UActorComponent*                             AIStaticComponent;                                          // 0x0300   (0x0008)  
	class UAISceneEventsTriggerManager*                AISceneEventsTriggerManager;                                // 0x0308   (0x0008)  
	class UNPCAIPerceptionComponent*                   CachedPerceptionComponent;                                  // 0x0310   (0x0008)  
	class UNPCAIMoverSystemComponent*                  MoverSystemComponent;                                       // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.UpdateRoundPathNodes
	// void UpdateRoundPathNodes();                                                                                             // [0x60173bc] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetStackGunRecord
	// void SetStackGunRecord(FVector& InMyPos, FVector& InEnemyPos, EAIPose& InPose, EAILeanType& InLean);                     // [0x6017178] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetSightWeakenTime
	// void SetSightWeakenTime(float WeakenTime);                                                                               // [0x60170dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetPauseBehaviorTime
	// void SetPauseBehaviorTime(float Time);                                                                                   // [0x6017040] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetLastCalculateBackUpCoverPointNearBy
	// void SetLastCalculateBackUpCoverPointNearBy(FVector& InEnemyPos);                                                        // [0x6016f74] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetIsMolotovHurted
	// void SetIsMolotovHurted(bool bInHurted);                                                                                 // [0x6016ed8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetIsInTryLeanShoot
	// void SetIsInTryLeanShoot(bool bTryLean);                                                                                 // [0x6016e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetIsAlwaysOpenDoor
	// void SetIsAlwaysOpenDoor(bool bInAlwaysOpenDoor);                                                                        // [0x5dadefc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetGoalTarget
	// void SetGoalTarget(class AActor* InOwner, class UNPCAIAttentionPoint* InPoint);                                          // [0x6016d58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetGoalEnemy
	// void SetGoalEnemy(class AActor* InOwner, class UNPCAITargetInfo* InEnemy);                                               // [0x6016c74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.SetCurrentCoverPoint
	// void SetCurrentCoverPoint(class AActor* InOwner, int32_t InCoverPointID);                                                // [0x6016b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.RemoveSceneEvent
	// void RemoveSceneEvent(int32_t EventUniqueId);                                                                            // [0x6016a44] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.QueryPathLengthToPoint
	// float QueryPathLengthToPoint(FVector& ToPoint, int64_t& PointPolyRef, bool bTryUpdatePathNodes);                         // [0x6016570] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.QueryNavPathPoints
	// bool QueryNavPathPoints(FVector& ToPoint, TArray<FVector>& Paths);                                                       // [0x6016384] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.PointIsAroundAI
	// bool PointIsAroundAI(FVector& ToPoint, int64_t& PointPolyRef, bool bTryUpdatePathNodes);                                 // [0x60161e8] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.IsSightWeaken
	// bool IsSightWeaken();                                                                                                    // [0x6015e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.IsInCover
	// bool IsInCover();                                                                                                        // [0x6015e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.IsGoalEnemyThreaten
	// bool IsGoalEnemyThreaten(float ThreatenDistance);                                                                        // [0x6015dc8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.HasGoldEnemyOrTarget
	// bool HasGoldEnemyOrTarget();                                                                                             // [0x6015a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetSightWeakenEndTime
	// float GetSightWeakenEndTime();                                                                                           // [0x29adce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetPauseBehaviorEndTime
	// float GetPauseBehaviorEndTime();                                                                                         // [0x29ae04c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetLastSetGoalEnemyTime
	// float GetLastSetGoalEnemyTime(class AActor* InOwner);                                                                    // [0x6015980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetIsMolotovHurted
	// bool GetIsMolotovHurted();                                                                                               // [0x601595c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetIsInTryLeanShoot
	// bool GetIsInTryLeanShoot();                                                                                              // [0x5d41cec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetIsAlwaysOpenDoor
	// bool GetIsAlwaysOpenDoor();                                                                                              // [0x29adf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetGoalTarget
	// class UNPCAIGoalTarget* GetGoalTarget(class AActor* InOwner);                                                            // [0x60158c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetGoalEnemy
	// class UNPCAITargetInfo* GetGoalEnemy(class AActor* InOwner);                                                             // [0x601582c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetCurrentCoverPoint
	// bool GetCurrentCoverPoint(class AActor* InOwner, FCoverPointOctreeData& Out_CoverPoint);                                 // [0x60156b8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.GetCachedPerceptionComponent
	// class UNPCAIPerceptionComponent* GetCachedPerceptionComponent();                                                         // [0x6015630] Final|Native|Protected 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.DescribeSelfToAIInfo
	// FString DescribeSelfToAIInfo();                                                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.CanCalculateBackUpCoverPointNearBy
	// bool CanCalculateBackUpCoverPointNearBy(FVector& InEnemyPos, float InRadiusNoCheck);                                     // [0x6014bf0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIMemorySystemComponent.AcceptSceneEvent
	// bool AcceptSceneEvent(int32_t EventUniqueId);                                                                            // [0x6014a7c] Final|Native|Public  
};

/// Class /Script/MFNPCAI.NPCAIPropertyProfileBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyProfileBase : public UObject
{ 
public:
	class UClass*                                      PropertyComponentClass;                                     // 0x0028   (0x0008)  
	SDK_UNDEFINED(1,1547) /* EAIProfileType */         __um(AIProfileType);                                        // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIModifierProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIModifierProfile : public UNPCAIPropertyProfileBase
{ 
public:
};

/// Class /Script/MFNPCAI.AIModifierAITypeProfile
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAIModifierAITypeProfile : public UNPCAIModifierProfile
{ 
public:
	SDK_UNDEFINED(1,1548) /* EAIMainType */            __um(AIMainType);                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIProfileBaseComponent
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIProfileBaseComponent : public UObject
{ 
public:
	class UNPCAIPropertyProfileBase*                   PropertyProfile;                                            // 0x0028   (0x0008)  
	class AActor*                                      Owner;                                                      // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIProfileBaseComponent.GetTimeSeconds
	// float GetTimeSeconds();                                                                                                  // [0x602dd2c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIProfileBaseComponent.GetOwner
	// class AActor* GetOwner();                                                                                                // [0x5c43264] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCAIModifierComponent
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIModifierComponent : public UNPCAIProfileBaseComponent
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIModifierComponent_AIType
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIModifierComponent_AIType : public UNPCAIModifierComponent
{ 
public:
};

/// Struct /Script/MFNPCAI.AIArmorAttributeModifier
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAIArmorAttributeModifier
{ 
	float                                              DurabilityConsumeScale_Blocked;                             // 0x0000   (0x0004)  
	float                                              DurabilityConsumeScale_Penetrated;                          // 0x0004   (0x0004)  
	float                                              AntiPenetrationFactor;                                      // 0x0008   (0x0004)  
	float                                              DamageScaleForPenetration;                                  // 0x000C   (0x0004)  
	float                                              DamageScaleForBlock;                                        // 0x0010   (0x0004)  
};

/// Class /Script/MFNPCAI.AIModifierArmorProfile
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UAIModifierArmorProfile : public UNPCAIModifierProfile
{ 
public:
	FAIArmorAttributeModifier                          HeadArmor;                                                  // 0x0038   (0x0014)  
	FAIArmorAttributeModifier                          BodyArmor;                                                  // 0x004C   (0x0014)  
};

/// Class /Script/MFNPCAI.NPCAIModifierComponent_Armor
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIModifierComponent_Armor : public UNPCAIModifierComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIModifierComponent_Armor.GetHeadArmor
	// FAIArmorAttributeModifier GetHeadArmor();                                                                                // [0x6017844] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIModifierComponent_Armor.GetBodyArmor
	// FAIArmorAttributeModifier GetBodyArmor();                                                                                // [0x60175ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.AIModifierDamageProfile
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAIModifierDamageProfile : public UNPCAIModifierProfile
{ 
public:
	float                                              DamageScale;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIModifierComponent_Damage
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIModifierComponent_Damage : public UNPCAIModifierComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIModifierComponent_Damage.GetDamageScale
	// float GetDamageScale();                                                                                                  // [0x6017648] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.AILocationMonitor
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAILocationMonitor
{ 
	TWeakObjectPtr<class APawn*>                       Target;                                                     // 0x0000   (0x0008)  
	float                                              MonitoringInterval;                                         // 0x0008   (0x0004)  
	float                                              MaxTimeAllowOutOfNavmesh;                                   // 0x000C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIMoverSystemComponent
/// Size: 0x02F8 (760 bytes) (0x000108 - 0x0002F8) align 8 MaxSize: 0x02F8
class UNPCAIMoverSystemComponent : public UNPCAISubSystemComponent
{ 
public:
	bool                                               bAllowStrafe;                                               // 0x0108   (0x0001)  
	bool                                               bAllowPartialPath;                                          // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x010A   (0x0002)  MISSED
	float                                              AcceptableRadius;                                           // 0x010C   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x0110   (0x0004)  
	float                                              DisposableOffsetFromCornersDistance;                        // 0x0114   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0118   (0x0004)  MISSED
	bool                                               bReachTestIncludesAgentRadius;                              // 0x011C   (0x0001)  
	bool                                               bReachTestIncludesGoalRadius;                               // 0x011D   (0x0001)  
	bool                                               bProjectGoalLocation;                                       // 0x011E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x011F   (0x0001)  MISSED
	bool                                               bHandleLandedDelegate;                                      // 0x0120   (0x0001)  
	bool                                               bEnableMoverSystem;                                         // 0x0121   (0x0001)  
	SDK_UNDEFINED(1,1549) /* ENPCAIMovementKind */     __um(MovementKind);                                         // 0x0122   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0123   (0x0001)  MISSED
	int32_t                                            GotoPointDecision;                                          // 0x0124   (0x0004)  
	TArray<class AVolume*>                             AvoidVolumes;                                               // 0x0128   (0x0010)  
	unsigned char                                      UnknownData04_6[0x40];                                      // 0x0138   (0x0040)  MISSED
	FVector                                            DirCurPoint;                                                // 0x0178   (0x000C)  
	SDK_UNDEFINED(1,1550) /* ENPCAIMoveResult */       __um(LastMoveResult);                                       // 0x0184   (0x0001)  
	unsigned char                                      UnknownData05_6[0x17];                                      // 0x0185   (0x0017)  MISSED
	float                                              CurrentSprintEngery;                                        // 0x019C   (0x0004)  
	class UNPCAIPropertyComponent_Move*                MoveProperty;                                               // 0x01A0   (0x0008)  
	FAILocationMonitor                                 LocationMonitor;                                            // 0x01A8   (0x0030)  
	unsigned char                                      UnknownData06_6[0x24];                                      // 0x01D8   (0x0024)  MISSED
	TWeakObjectPtr<class AActor*>                      CaredActorWhenMoving;                                       // 0x01FC   (0x0008)  
	float                                              CaredActorEffectRadius;                                     // 0x0204   (0x0004)  
	FVector                                            BlendingVelocity;                                           // 0x0208   (0x000C)  
	int32_t                                            CheckPointCountOnPath;                                      // 0x0214   (0x0004)  
	SDK_UNDEFINED(16,1551) /* FMulticastInlineDelegate */ __um(OnAIPathChecked);                                   // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,1552) /* FMulticastInlineDelegate */ __um(OnAIGoDirectlyFinished);                            // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,1553) /* FMulticastInlineDelegate */ __um(OnOutOfNavmesh);                                    // 0x0238   (0x0010)  
	bool                                               bEnableDrawPathPoints;                                      // 0x0248   (0x0001)  
	bool                                               bUseFlanking;                                               // 0x0249   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x024A   (0x0002)  MISSED
	FVector                                            DangerPoint;                                                // 0x024C   (0x000C)  
	FVector                                            DangerPointDirection;                                       // 0x0258   (0x000C)  
	float                                              DangerPointEffectRadius;                                    // 0x0264   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x0268   (0x0004)  MISSED
	float                                              MaxTurnDistance;                                            // 0x026C   (0x0004)  
	float                                              MinTurnDistance;                                            // 0x0270   (0x0004)  
	float                                              DistanceCheck;                                              // 0x0274   (0x0004)  
	float                                              SwayWidthCheck;                                             // 0x0278   (0x0004)  
	float                                              SwayWidth;                                                  // 0x027C   (0x0004)  
	float                                              RandSwayWidthRate;                                          // 0x0280   (0x0004)  
	float                                              PathOffset;                                                 // 0x0284   (0x0004)  
	int32_t                                            SampleTimes;                                                // 0x0288   (0x0004)  
	int32_t                                            RegionWhereNavLinksNeedDisable;                             // 0x028C   (0x0004)  
	class UActorComponent*                             AIDoorOpenerComponent;                                      // 0x0290   (0x0008)  
	class UActorComponent*                             AIPoseComponent;                                            // 0x0298   (0x0008)  
	int32_t                                            Blending_Count;                                             // 0x02A0   (0x0004)  
	float                                              Blending_Time;                                              // 0x02A4   (0x0004)  
	unsigned char                                      UnknownData09_7[0x50];                                      // 0x02A8   (0x0050)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.SetupRegionWhereNavLinksNeedDisable
	// void SetupRegionWhereNavLinksNeedDisable(int32_t RegionIndex);                                                           // [0x6019374] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.SetupFlanking
	// void SetupFlanking(FVector& InDangerPoint, FVector& InDangerPointDirection, float InDangerPointEffectRadius);            // [0x60191c4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.SetIgnoreGotoPoint
	// void SetIgnoreGotoPoint(float IgnoreTime);                                                                               // [0x6018ff0] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.SetDisposableOffsetFromCornersDistance
	// void SetDisposableOffsetFromCornersDistance(float OffsetDistance);                                                       // [0x6018f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.SetDestination
	// void SetDestination(FVector InPosition);                                                                                 // [0x6018ea4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.SetCurrentMoveType
	// void SetCurrentMoveType(EAIMoveType InMoveType);                                                                         // [0x6018e0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.SetAvoidVolumes
	// void SetAvoidVolumes(TArray<AVolume*> Volumes);                                                                          // [0x6018c04] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.PauseMovement
	// void PauseMovement(float PauseTime);                                                                                     // [0x6018ad0] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.OnMovementModeChanged
	// void OnMovementModeChanged(class ACharacter* MovedCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x601884c] Final|Native|Protected 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x6018764] Final|Native|Protected 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.OnLanded
	// void OnLanded(FHitResult& Hit);                                                                                          // [0x60186a8] Final|Native|Protected|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsSprintEnergyEnough
	// bool IsSprintEnergyEnough(bool bSprinting);                                                                              // [0x6018430] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsPauseMovement
	// bool IsPauseMovement();                                                                                                  // [0x601840c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsMovingMayBlocking
	// bool IsMovingMayBlocking();                                                                                              // [0x60183e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsLastPathPassDoor
	// bool IsLastPathPassDoor();                                                                                               // [0x60183d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsLastMoveSuccess
	// bool IsLastMoveSuccess();                                                                                                // [0x60183b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsInIgnoreGotoPoint
	// bool IsInIgnoreGotoPoint();                                                                                              // [0x6018364] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsGoalPositionReached
	// bool IsGoalPositionReached();                                                                                            // [0x6018298] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsComeTo
	// bool IsComeTo(bool OnCover);                                                                                             // [0x60181f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsCloseToDestination
	// bool IsCloseToDestination(float InRadius);                                                                               // [0x6018148] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.IsAnyLegBroken
	// bool IsAnyLegBroken();                                                                                                   // [0x6018024] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GoToPoint
	// void GoToPoint(FVector InPosition, bool bSlowAtTheEnd, float InReachDist, bool bShoudGetUp, bool bGetUpWithCheck, class AActor* CaredActor, float CaredActorEffectRadius, int32_t GoDecision, bool bInOverrideAvoidGunline, FNPCAIOverrideAvoidGunlineParam& InOvrrideAvoidGunlineParam); // [0x6017c50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GoDirectly
	// void GoDirectly(FVector& Direction, float Seconds, FVector& InBlendingVelocity);                                         // [0x6017aa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GoAccordingToWayPoints
	// void GoAccordingToWayPoints(FNavSkeletonGraphFindResult& PathResult, FNavSkeletonMoveSettings& Settings);                // [0x6017974] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetNearestDoorState
	// int32_t GetNearestDoorState();                                                                                           // [0x5c477e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetNearestDoorLocation
	// FVector GetNearestDoorLocation();                                                                                        // [0x601794c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetMoveType
	// EAIMoveType GetMoveType();                                                                                               // [0x5d41d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetMoveProperty
	// class UNPCAIPropertyComponent_Move* GetMoveProperty();                                                                   // [0x6017910] Final|Native|Protected|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetMovementKind
	// ENPCAIMovementKind GetMovementKind();                                                                                    // [0x6017934] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetLastMoveResult
	// ENPCAIMoveResult GetLastMoveResult();                                                                                    // [0x60178f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetFromPosition
	// FVector GetFromPosition();                                                                                               // [0x60176e4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetDirCurPoint
	// FVector GetDirCurPoint();                                                                                                // [0x6017698] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetDestinationUpdateTime
	// float GetDestinationUpdateTime();                                                                                        // [0x29ae064] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.GetDestination
	// FVector GetDestination();                                                                                                // [0x6017670] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.EnableMoverSystem
	// void EnableMoverSystem(bool InbEnableMoverSystem);                                                                       // [0x5e33750] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.ClearMovement
	// void ClearMovement();                                                                                                    // [0x6017468] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMoverSystemComponent.ClearLastPathPassDoorFlag
	// void ClearLastPathPassDoorFlag();                                                                                        // [0x6017450] Final|Native|Public  
};

/// Class /Script/MFNPCAI.NPCAIMultiTargetSystemComponent
/// Size: 0x01D0 (464 bytes) (0x000108 - 0x0001D0) align 8 MaxSize: 0x01D0
class UNPCAIMultiTargetSystemComponent : public UNPCAISubSystemComponent
{ 
public:
	bool                                               bDebugSuspectedPoint;                                       // 0x0108   (0x0001)  
	bool                                               bDebugShootOffsetScope;                                     // 0x0109   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x010A   (0x0002)  MISSED
	float                                              TimeOfShootOffsetScopeDraw;                                 // 0x010C   (0x0004)  
	bool                                               bDebugShootScopeTestPoints;                                 // 0x0110   (0x0001)  
	bool                                               bLogGoalEnemyScore;                                         // 0x0111   (0x0001)  
	bool                                               bWantCalculateGoalTargetPoint;                              // 0x0112   (0x0001)  
	bool                                               bWantCalculateGoalEnemy;                                    // 0x0113   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	class UNPCAIZoneGroupInfo*                         ZoneGroupInfo;                                              // 0x0118   (0x0008)  
	int32_t                                            DynamicGroupId;                                             // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	TArray<class UNPCAITargetInfo*>                    AllTargetInfoList;                                          // 0x0128   (0x0010)  
	float                                              LastChangeEnemyTime;                                        // 0x0138   (0x0004)  
	float                                              LastWantCalcEnemyTime;                                      // 0x013C   (0x0004)  
	TWeakObjectPtr<class ACharacter*>                  WarningScavPlayerPtr;                                       // 0x0140   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0148   (0x0008)  MISSED
	float                                              CurrentForgetAboutEnemySec;                                 // 0x0150   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	class UClass*                                      DefaultTargetScoreCalculateBlueprint;                       // 0x0158   (0x0008)  
	class UClass*                                      TargetScoreCalculateOverrideBlueprint;                      // 0x0160   (0x0008)  
	TArray<class UNPCAITargetInfo*>                    CachedHatredList;                                           // 0x0168   (0x0010)  
	class UNPCAIMemorySystemComponent*                 MemoryComponent;                                            // 0x0178   (0x0008)  
	class UNPCAIPerceptionComponent*                   PerceptionComponent;                                        // 0x0180   (0x0008)  
	class UActorComponent*                             AIStaticComponent;                                          // 0x0188   (0x0008)  
	class UNPCAIGlobalSharedInfo*                      SharedInfo;                                                 // 0x0190   (0x0008)  
	class UNPCAIPropertyComponent_Mind*                MindProps;                                                  // 0x0198   (0x0008)  
	class UNPCAIPropertyComponent_Hearing*             HearProps;                                                  // 0x01A0   (0x0008)  
	class UNPCAIPropertyComponent_Aiming*              AimingProps;                                                // 0x01A8   (0x0008)  
	class UNPCAIPropertyComponent_Health*              HealthProps;                                                // 0x01B0   (0x0008)  
	class UNPCAIPropertyComponent_Grenade*             GrenadeProps;                                               // 0x01B8   (0x0008)  
	class UNPCAIPropertyComponent_Damage*              DamageProps;                                                // 0x01C0   (0x0008)  
	float                                              CD_CHANGE_GOALENEMY_IF_BOTH_NOT_SEE;                        // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x01CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.WantToCalculateGoalEnemy
	// void WantToCalculateGoalEnemy();                                                                                         // [0x601dc4c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.UpdateGroupEnemyVisibleInfo
	// void UpdateGroupEnemyVisibleInfo(class AActor* InEnemy, FVector InLastSeenPosition, float SeenTime);                     // [0x601db00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SwitchToTemporaryEnemy
	// bool SwitchToTemporaryEnemy(class AActor* InNeutral, float InEndTime);                                                   // [0x601d924] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SwitchEnemyToNeutral
	// bool SwitchEnemyToNeutral(class AActor* InEnemy);                                                                        // [0x601d684] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SwitchEnemyToAlly
	// bool SwitchEnemyToAlly(class AActor* InEnemy);                                                                           // [0x601d3f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SetZoneGroupInfo
	// void SetZoneGroupInfo(class UNPCAIZoneGroupInfo* InGroupInfo);                                                           // [0x5ca39bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SetKnowEnemySeenTimeAndPosition
	// void SetKnowEnemySeenTimeAndPosition(class AActor* InTargetPawn, bool bCanSeenSoon);                                     // [0x601cd24] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SetAITargetScoreBlueprintOverride
	// void SetAITargetScoreBlueprintOverride(class UClass* OverrideScoreCalculator);                                           // [0x601cc8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SearchDangerPoint
	// class UNPCAIAttentionPoint* SearchDangerPoint();                                                                         // [0x601cc68] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.SearchDangerEnemy
	// class UNPCAITargetInfo* SearchDangerEnemy();                                                                             // [0x601cc44] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.ResetCurrentForgetEnemyTime
	// void ResetCurrentForgetEnemyTime();                                                                                      // [0x601cc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveSuspectedPointByType
	// void RemoveSuspectedPointByType(ENPCPlaceForCheckType InPlaceType, class AActor* InCreator);                             // [0x601cb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveSuspectedPoint
	// void RemoveSuspectedPoint(class UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee);                         // [0x601ca44] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveNeutral
	// void RemoveNeutral(class AActor* InNeutral);                                                                             // [0x601c95c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveEnemy
	// void RemoveEnemy(class AActor* InEnemy);                                                                                 // [0x601c7b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.RemoveAlly
	// void RemoveAlly(class AActor* InAlly);                                                                                   // [0x601c718] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.QuitToDynamicGroup
	// void QuitToDynamicGroup();                                                                                               // [0x601c704] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.OverrideCurrentForgetEnemyTime
	// void OverrideCurrentForgetEnemyTime(float NewForgetEnemyTime);                                                           // [0x601c0f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.JoinToDynamicGroup
	// bool JoinToDynamicGroup(int32_t DyGroupId);                                                                              // [0x601bf30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.IsPointInVShootScope
	// bool IsPointInVShootScope(FVector& GunPoint, FVector& ShootPoint, float HRadin, float VTopRadin, float VLowRadin, FVector& InPoint); // [0x601bc68] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.IsPointInHShootScope
	// bool IsPointInHShootScope(FVector& GunPoint, FVector& ShootPoint, float HRadin, float VTopRadin, float VLowRadin, FVector& InPoint); // [0x601b9b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.IsNeutral
	// bool IsNeutral(class AActor* InNeutral);                                                                                 // [0x601b8b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.IsInSameZoneGroup
	// bool IsInSameZoneGroup(class AActor* InTarget);                                                                          // [0x601b520] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.IsGroupEnemy
	// bool IsGroupEnemy(class AActor* InEnemy);                                                                                // [0x601b430] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.IsAlly
	// bool IsAlly(class AActor* InAlly);                                                                                       // [0x601b370] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.HasOthersAllyInShootScope
	// bool HasOthersAllyInShootScope();                                                                                        // [0x601b34c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetZoneGroupInfo
	// class UNPCAIZoneGroupInfo* GetZoneGroupInfo();                                                                           // [0x29b536c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetYoungestSuspectedPoint
	// class UNPCAIAttentionPoint* GetYoungestSuspectedPoint(class AActor* InCharacter, float InRadius, bool InPriorityDanger); // [0x601b208] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetWarningScavPlayer
	// class ACharacter* GetWarningScavPlayer();                                                                                // [0x601b1e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetNeutralsNum
	// int32_t GetNeutralsNum();                                                                                                // [0x601b1bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetHatredList
	// TArray<UNPCAITargetInfo*> GetHatredList();                                                                               // [0x601a9c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetEnemyNum
	// int32_t GetEnemyNum();                                                                                                   // [0x601a99c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetEnemyGroupInfo
	// class UNPCAIEnemyGroupSingleInfo* GetEnemyGroupInfo(class AActor* InTarget);                                             // [0x601a8e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetDynamicGroupId
	// int32_t GetDynamicGroupId();                                                                                             // [0x5376c94] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetCurrentForgetEnemyTime
	// float GetCurrentForgetEnemyTime();                                                                                       // [0x29ae064] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetBulletFireDangerPower
	// int32_t GetBulletFireDangerPower(bool IsHitNoise, FVector InNoisePosition, float InNoiseDistance, FVector InBulletVelocity); // [0x601a438] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllyNum
	// int32_t GetAllyNum();                                                                                                    // [0x601a3fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllTargetInfoList
	// TArray<UNPCAITargetInfo*> GetAllTargetInfoList();                                                                        // [0x601a3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllInSightEnemys
	// void GetAllInSightEnemys(TArray<AActor*>& OutEnemys);                                                                    // [0x601a330] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.GetAllHadSeenEnemys
	// void GetAllHadSeenEnemys(TArray<AActor*>& OutEnemys);                                                                    // [0x601a280] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.FilterNotValidEnemyOrPoints
	// void FilterNotValidEnemyOrPoints();                                                                                      // [0x601a26c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.ClearAITargetScoreBlueprintOverride
	// void ClearAITargetScoreBlueprintOverride();                                                                              // [0x6019ff8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.CanHeardNoise
	// bool CanHeardNoise(float InNoiseDistance, float InNoisePower);                                                           // [0x6019f00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateShootScope
	// bool CalculateShootScope(FVector& GunPoint, FVector& ShootPoint, float& HRadian, float& VTopRadian, float& VLowRadian, FVector& HMaxPoint1, FVector& HMaxPoint2, FVector& VTopPoint, FVector& VLowPoint); // [0x6019b04] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateGoalPointForBot
	// void CalculateGoalPointForBot();                                                                                         // [0x6019af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateGoalForBot
	// void CalculateGoalForBot();                                                                                              // [0x6019adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.CalculateGoalEnemyForBot
	// void CalculateGoalEnemyForBot();                                                                                         // [0x6019ac8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.AddTarget
	// class UNPCAITargetInfo* AddTarget(class AActor* InTarget);                                                               // [0x6019998] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.AddSuspectedPointToSearch
	// class UNPCAIAttentionPoint* AddSuspectedPointToSearch(FVector InPoint, ENPCPlaceForCheckType InPlaceType, class AActor* InCreator, bool bIsAutoReCalculate, bool bIsAddSuspectedNum); // [0x601979c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.AddNeutral
	// void AddNeutral(class AActor* InNeutral);                                                                                // [0x6019664] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.AddEnemy
	// class UNPCAIEnemyGroupSingleInfo* AddEnemy(class AActor* InEnemy);                                                       // [0x60195bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.AddAllyGoalEnemyIfNotTarget
	// class UNPCAITargetInfo* AddAllyGoalEnemyIfNotTarget(float InRange);                                                      // [0x6019510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSystemComponent.AddAlly
	// void AddAlly(class AActor* InAlly);                                                                                      // [0x6019474] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent
/// Size: 0x02D8 (728 bytes) (0x0001D0 - 0x0002D8) align 8 MaxSize: 0x02D8
class UNPCAIMultiTargetSelectorComponent : public UNPCAIMultiTargetSystemComponent
{ 
public:
	FString                                            PerceptionTag1;                                             // 0x01D0   (0x0010)  
	FString                                            PerceptionTag2;                                             // 0x01E0   (0x0010)  
	FString                                            PerceptionTag3;                                             // 0x01F0   (0x0010)  
	float                                              DistanceToPercActor;                                        // 0x0200   (0x0004)  
	float                                              DistanceToPercLoc;                                          // 0x0204   (0x0004)  
	class AActor*                                      PerceptionActor;                                            // 0x0208   (0x0008)  
	FAIStimulus                                        PerceptionStimulus;                                         // 0x0210   (0x003C)  
	bool                                               bIsTeamEnemy;                                               // 0x024C   (0x0001)  
	bool                                               bIsTeamFriendly;                                            // 0x024D   (0x0001)  
	bool                                               bIsGroupEnemy;                                              // 0x024E   (0x0001)  
	bool                                               bIsGroupAlly;                                               // 0x024F   (0x0001)  
	bool                                               bIsSounder;                                                 // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0251   (0x0007)  MISSED
	class AActor*                                      SounderThrower;                                             // 0x0258   (0x0008)  
	bool                                               bIsCheatGhost;                                              // 0x0260   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              LastCalculateWarnPlayerTime;                                // 0x0264   (0x0004)  
	float                                              LastCalculateGoalEnemyTime;                                 // 0x0268   (0x0004)  
	float                                              LastCalculateGoalPointTime;                                 // 0x026C   (0x0004)  
	float                                              NextLeanAutoRelaxTime;                                      // 0x0270   (0x0004)  
	float                                              LastTodoHearingTime;                                        // 0x0274   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0278   (0x0008)  MISSED
	class AActor*                                      LastFireToMePerson;                                         // 0x0280   (0x0008)  
	float                                              LastFireToMeTime;                                           // 0x0288   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	class AActor*                                      LastShootMePerson;                                          // 0x0290   (0x0008)  
	FVector                                            LastShootMePersonLocation;                                  // 0x0298   (0x000C)  
	FVector                                            LastShootMeSelfLocation;                                    // 0x02A4   (0x000C)  
	float                                              LastShootMeDamageValue;                                     // 0x02B0   (0x0004)  
	float                                              LastBeenShootTime;                                          // 0x02B4   (0x0004)  
	FAIShotCountStat                                   BeHitCount;                                                 // 0x02B8   (0x0010)  
	float                                              TEMPORARY_ENEMY_DURATION_TIME;                              // 0x02C8   (0x0004)  
	float                                              SWITCH_TO_ENEMY_IF_ATK_INRADIUS;                            // 0x02CC   (0x0004)  
	float                                              SWITCH_TO_ENEMY_IF_NEARBY_BETRAYER;                         // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x02D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.SetWantCalculateGoalEnemy
	// void SetWantCalculateGoalEnemy(bool bWants);                                                                             // [0x6019128] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.SetScavPlayerTeamAsGroupEnemy
	// void SetScavPlayerTeamAsGroupEnemy(class AActor* InScavPlayer);                                                          // [0x601908c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.SetBeHitDetail
	// void SetBeHitDetail(class AActor* DamageCauser, float DamageValue, float InTimeSec);                                     // [0x6018ccc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.SeparateMultiTags
	// void SeparateMultiTags(FName InTotalTag);                                                                                // [0x6018b6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.OnSmokeExplosionToDo
	// void OnSmokeExplosionToDo();                                                                                             // [0x6018abc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.OnSightToDo
	// void OnSightToDo();                                                                                                      // [0x6018aa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.OnPerceptionUpdated
	// void OnPerceptionUpdated(class AActor* InTarget, FAIStimulus InAIStimulus);                                              // [0x601898c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.OnHearingToDo
	// void OnHearingToDo();                                                                                                    // [0x6018694] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.OnDamageToDo
	// void OnDamageToDo();                                                                                                     // [0x6018680] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.OnBulletFireToDo
	// void OnBulletFireToDo(class AActor* InInstigator, FVector InBulletLocation, FVector InBulletVelocity, FName InNoiseType); // [0x60184d8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.IsGunNoise
	// bool IsGunNoise(FString InTag);                                                                                          // [0x60182b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.IsBeingFireHited
	// bool IsBeingFireHited(float InTime, class AActor*& OutWhoFire);                                                          // [0x6018048] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.GetLastBeHitTime
	// float GetLastBeHitTime();                                                                                                // [0x60178e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.GetFuzzyPointCoef
	// float GetFuzzyPointCoef(FString InHearTag);                                                                              // [0x601770c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.GetFirstBeHitTime
	// float GetFirstBeHitTime();                                                                                               // [0x60176cc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.GetBeHitCount
	// int32_t GetBeHitCount();                                                                                                 // [0x6017588] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIMultiTargetSelectorComponent.CreateFuzzyPoint
	// FVector CreateFuzzyPoint(FVector InCenterPoint, float InFuzzyRadius);                                                    // [0x601747c] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavAreaComponent
/// Size: 0x0150 (336 bytes) (0x000128 - 0x000150) align 8 MaxSize: 0x0150
class UNPCAINavAreaComponent : public UNavRelevantComponent
{ 
public:
	bool                                               bInitHighCost;                                              // 0x0128   (0x0001)  
	bool                                               bOverrideNavBounds;                                         // 0x0129   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x012A   (0x0002)  MISSED
	FBox                                               OverrideNavBounds;                                          // 0x012C   (0x001C)  
	bool                                               bCompEnabled;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0149   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavAreaComponent.MakeNavAreaBoxes
	// TArray<FNPCAINavAreaBox> MakeNavAreaBoxes(class AActor* Actor);                                                          // [0x601bfd8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavAreaInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAINavAreaInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavAreaInterface.OnNavigationGenerationFinished
	// void OnNavigationGenerationFinished();                                                                                   // [0x5d76794] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAINavAreaInterface.OnNavigationGenerationBegin
	// void OnNavigationGenerationBegin();                                                                                      // [0x5e3286c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAINavAreaInterface.GetNavAreaComp
	// class UNPCAINavAreaComponent* GetNavAreaComp();                                                                          // [0x5cb0628] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/MFNPCAI.NPCAINavAreaInterface.GetNavAreaBoxes
	// TArray<FNPCAINavAreaBox> GetNavAreaBoxes();                                                                              // [0x601af50] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/MFNPCAI.NPCAINavAreaObstacleActor
/// Size: 0x03F8 (1016 bytes) (0x000318 - 0x0003F8) align 8 MaxSize: 0x03F8
class ANPCAINavAreaObstacleActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0318   (0x0008)  MISSED
	class UNPCAINavAreaComponent*                      NPCAINavAreaComponent;                                      // 0x0320   (0x0008)  
	SDK_UNDEFINED(16,1554) /* TArray<TWeakObjectPtr<AActor*>> */ __um(ObstacleActors);                             // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,1555) /* TArray<TWeakObjectPtr<AActor*>> */ __um(ActorsToIgnore);                             // 0x0338   (0x0010)  
	TArray<class AActor*>                              IgnoredActors;                                              // 0x0348   (0x0010)  
	SDK_UNDEFINED(80,1556) /* TMap<TWeakObjectPtr<AActor*>, FTransform> */ __um(ActorsToAdjustLoc);                // 0x0358   (0x0050)  
	TMap<class AActor*, FTransform>                    AdjustedActors;                                             // 0x03A8   (0x0050)  
};

/// Class /Script/MFNPCAI.NPCAINavConnectivitySystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAINavConnectivitySystem : public UNPCAINavSubsystemBase
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavConnectivitySystem.GetNavLinkCylinderLocation
	// bool GetNavLinkCylinderLocation(class ANPCAINavLinkProxy* NavLink, int32_t RegionIndex, FVector& OutLocation);           // [0x601b03c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavConnectivitySystem.GetLinkUsageCount
	// int32_t GetLinkUsageCount(FVector& SourceLocation, FVector& TargetLocation, int32_t& OutSourceRegionIndex, int32_t& OutTargetRegionIndex, int32_t& OutSourceRegionSize, int32_t& OutTargetRegionSize, EGetLinkUsageCountStatus& OutStatus); // [0x601aa78] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavConnectivitySystem.GetDoorNavLinksInRegion
	// TArray<ANPCAINavLinkProxy*> GetDoorNavLinksInRegion(int32_t RegionIndex);                                                // [0x601a70c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavConnectivitySystem.GetDoorNavLinksBetweenAdjacentRegions
	// TArray<ANPCAINavLinkProxy*> GetDoorNavLinksBetweenAdjacentRegions(int32_t SourceRegionIndex, int32_t TargetRegionIndex); // [0x601a5fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCAINavCostSubsystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAINavCostSubsystem : public UNPCAINavSubsystemBase
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavCostSubsystem.GetInstance
	// class UNPCAINavCostSubsystem* GetInstance(class UObject* WorldContextObject);                                            // [0x601a9e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavDebugSystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAINavDebugSystem : public UNPCAINavSubsystemBase
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.TestDoorPath
	// bool TestDoorPath(class UObject* WorldContextObject, class ANPCAINavLinkProxy* NavLinkProxy);                            // [0x601da20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.ProjectPointToNavMesh
	// bool ProjectPointToNavMesh(class UObject* WorldContextObject, FVector& Location, FVector& QueryExtent, int32_t& OutPolyIndex, FVector& OutProjectedLocation); // [0x601c464] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.PrintNavMeshPolygonSlope
	// void PrintNavMeshPolygonSlope(class UObject* WorldContextObject, FVector& Location);                                     // [0x601c34c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.PlaceActorsOnNodes
	// void PlaceActorsOnNodes(class UObject* WorldContextObject, FString NodeIndicesString, bool bUseNodeIndexAsPolyRef, TArray<AActor*>& OutActors); // [0x601c194] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.IsLocationOnNavLinkDebug
	// void IsLocationOnNavLinkDebug(class UObject* WorldContextObject, FVector& Location);                                     // [0x601b7a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.GetLinkUsageCountDebug
	// void GetLinkUsageCountDebug(class UObject* WorldContextObject, FVector& SourceLocation, FVector& TargetLocation);        // [0x601ada0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.GetDoorNavLinksInRegionDebug
	// void GetDoorNavLinksInRegionDebug(class UObject* WorldContextObject, FVector& SourceLocation);                           // [0x601a7cc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.DrawPathPoints
	// void DrawPathPoints(class UObject* WorldContextObject, TArray<FVector>& PathPoints, int32_t StartIndex, bool bFlushBeforeDrawing, bool bColorfulDrawing); // [0x601a0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.DestroyPlacedActors
	// void DestroyPlacedActors(TArray<AActor*>& OutActors);                                                                    // [0x601a010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavDebugSystem.CalculateBoundaryEdgeLength
	// void CalculateBoundaryEdgeLength(class UObject* WorldContextObject);                                                     // [0x6019a40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavExperimentSystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAINavExperimentSystem : public UNPCAINavSubsystemBase
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestRaycastToNavSkeletonPoints
	// TArray<bool> TestRaycastToNavSkeletonPoints(class UObject* WorldContextObject, FVector& StartLocation, TArray<int32_t>& PointIDs); // [0x602014c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestNavSkeletonFloodFrom
	// TArray<bool> TestNavSkeletonFloodFrom(class UObject* WorldContextObject, FVector& StartLocation, float MaxPathLength);   // [0x601ffdc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestNavRaycast
	// void TestNavRaycast(class UObject* WorldContextObject);                                                                  // [0x514e094] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestMoveDirectly
	// void TestMoveDirectly(class UObject* WorldContextObject);                                                                // [0x601ff3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestMoveAlongSurface
	// void TestMoveAlongSurface(class UObject* WorldContextObject);                                                            // [0x601fe9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestLimitMoveInRegion
	// void TestLimitMoveInRegion(class UObject* WorldContextObject);                                                           // [0x514e094] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestArrangeStandPositions
	// void TestArrangeStandPositions(class UObject* WorldContextObject);                                                       // [0x514e094] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavExperimentSystem.TestAIMoveDirectly
	// void TestAIMoveDirectly(class UObject* WorldContextObject);                                                              // [0x514e094] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavigationStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAINavigationStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavigationStatics.PointIsInNavigation
	// bool PointIsInNavigation(class UObject* WorldContext, FVector& InCheckPoint, FVector& InExtent);                         // [0x601f838] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.PathNodesToNeighborPathNodes
	// void PathNodesToNeighborPathNodes(class UObject* WorldContext, TArray<int32_t>& TargetPathNodes, int32_t Step, TArray<int32_t>& Result); // [0x601f680] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.PathNodesToDistAndNeighborPathNodes
	// void PathNodesToDistAndNeighborPathNodes(class UObject* WorldContext, TArray<int32_t>& TargetPathNodes, float PathLength, TArray<int32_t>& NodesInPathLength, TArray<int32_t>& NodesNeighbor, bool& IsTimeOut); // [0x601f3f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.IsNavigationPlanarFloor
	// bool IsNavigationPlanarFloor(class UObject* WorldContext, FVector& StartPoint, FVector& Direction, float Distance);      // [0x601ebec] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.GetRandomReachablePoint
	// FVector GetRandomReachablePoint(class UObject* WorldContext, FVector InCenter, float InRadius);                          // [0x601e940] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.GetRandomNavigationPoint
	// FVector GetRandomNavigationPoint(class UObject* WorldContext, FVector& InCenter, float InRadius);                        // [0x601e6d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.GetRandomNavigationAndNearPoint
	// FVector GetRandomNavigationAndNearPoint(class UObject* WorldContext, FVector InCenter, float InRadius);                  // [0x601e574] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.GetPointToNavigationLocation
	// FVector GetPointToNavigationLocation(class UObject* WorldContext, FVector& InCenter, FVector& InExtent);                 // [0x601e314] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavigationStatics.FindCloserToMePoints
	// void FindCloserToMePoints(class UObject* WorldContext, TArray<int32_t>& PathNodeIds, FVector& MyLocation, FVector& EnemyLocation, TArray<int32_t>& Result); // [0x601de6c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavigationSystem
/// Size: 0x1800 (6144 bytes) (0x0015F8 - 0x001800) align 16 MaxSize: 0x1800
class UNPCAINavigationSystem : public UNavigationSystemV1
{ 
public:
	unsigned char                                      UnknownData00_1[0x208];                                     // 0x15F8   (0x0208)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavigationSystem.GetNPCAINavigationSystem
	// class UNPCAINavigationSystem* GetNPCAINavigationSystem(class UObject* WorldContextObject);                               // [0x601e210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.NPCAINavigationSystemConfig
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UNPCAINavigationSystemConfig : public UNavigationSystemModuleConfig
{ 
public:
};

/// Struct /Script/MFNPCAI.NavSkeletonBuildSettings
/// Size: 0x008C (140 bytes) (0x000000 - 0x00008C) align 4 MaxSize: 0x008C
struct FNavSkeletonBuildSettings
{ 
	FVector                                            NavQueryExtent;                                             // 0x0000   (0x000C)  
	float                                              SampleSpacing;                                              // 0x000C   (0x0004)  
	float                                              DeltaLength;                                                // 0x0010   (0x0004)  
	int32_t                                            GradientNeighbourRadius;                                    // 0x0014   (0x0004)  
	float                                              DivergenceFilterThreshold;                                  // 0x0018   (0x0004)  
	float                                              DivergenceNeighbourRadius;                                  // 0x001C   (0x0004)  
	float                                              CoarseCoverageNeighbourRadius;                              // 0x0020   (0x0004)  
	float                                              RefinedCoverageNeighbourRadius;                             // 0x0024   (0x0004)  
	float                                              PolylineSimplificationDistanceThreshold;                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	bool                                               bUseNewBuilder;                                             // 0x0030   (0x0001)  
	bool                                               bCheckEdgeOnNavMesh;                                        // 0x0031   (0x0001)  
	bool                                               bRemoveUnreachablePoints;                                   // 0x0032   (0x0001)  
	bool                                               bHintProjection2D;                                          // 0x0033   (0x0001)  
	bool                                               bAddRegionConnection;                                       // 0x0034   (0x0001)  
	bool                                               bEnableCollapseShortPolylines;                              // 0x0035   (0x0001)  
	bool                                               bEnableParallelFindWallsInNeighbourhood;                    // 0x0036   (0x0001)  
	bool                                               bEnableParallelCalculateWallDistance;                       // 0x0037   (0x0001)  
	bool                                               bEnableParallelGenerateRawPoints;                           // 0x0038   (0x0001)  
	bool                                               bEnableParallelCalculateGradient;                           // 0x0039   (0x0001)  
	bool                                               bEnableParallelCalculateDivergence;                         // 0x003A   (0x0001)  
	bool                                               bEnableParallelCalculateOutdoors;                           // 0x003B   (0x0001)  
	bool                                               bEnableParallelPruneSamplePoints;                           // 0x003C   (0x0001)  
	bool                                               bEnableParallelCalculateProtection;                         // 0x003D   (0x0001)  
	bool                                               bEnableParallelCalculateVisibility;                         // 0x003E   (0x0001)  
	bool                                               bEnableParallelCalculateThrowing;                           // 0x003F   (0x0001)  
	bool                                               bEnableParallelCalculateMoving;                             // 0x0040   (0x0001)  
	bool                                               bEnablePruneSamplePoints;                                   // 0x0041   (0x0001)  
	bool                                               bEnableRemoveTooCloseMainPointAtCoverageStage;              // 0x0042   (0x0001)  
	bool                                               bEnableRefineCoverage;                                      // 0x0043   (0x0001)  
	bool                                               bEnablePruneEndBranch;                                      // 0x0044   (0x0001)  
	bool                                               bEnableCalculateVisibilityStage;                            // 0x0045   (0x0001)  
	bool                                               bEnableCalculateThrowingStage;                              // 0x0046   (0x0001)  
	SDK_UNDEFINED(1,1557) /* ENavSkeletonDivergenceMethod */ __um(DivergenceMethod);                               // 0x0047   (0x0001)  
	float                                              FindWallInRadius;                                           // 0x0048   (0x0004)  
	int32_t                                            MaxWallCount;                                               // 0x004C   (0x0004)  
	float                                              PolylineLengthLowerBound;                                   // 0x0050   (0x0004)  
	float                                              RegionConnectionDistanceTolerance;                          // 0x0054   (0x0004)  
	float                                              VisiblityQueryZExtent;                                      // 0x0058   (0x0004)  
	float                                              VisiblityTraceZOffset;                                      // 0x005C   (0x0004)  
	float                                              VisiblityMaxRange;                                          // 0x0060   (0x0004)  
	float                                              ProtectionTraceAngleStep;                                   // 0x0064   (0x0004)  
	float                                              ProtectionTraceZOffset;                                     // 0x0068   (0x0004)  
	float                                              ProtectionTraceMaxRange;                                    // 0x006C   (0x0004)  
	float                                              EndpointProtectionLowerBound;                               // 0x0070   (0x0004)  
	float                                              ThrowingInitialSpeed;                                       // 0x0074   (0x0004)  
	float                                              ThrowingMaxRange;                                           // 0x0078   (0x0004)  
	float                                              MovingMaxRange;                                             // 0x007C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0080   (0x0004)  MISSED
	float                                              CheckOutdoorsRadius;                                        // 0x0084   (0x0004)  
	float                                              CheckOutdoorsHeight;                                        // 0x0088   (0x0004)  
};

/// Struct /Script/MFNPCAI.NavSkeletonPoint
/// Size: 0x00A0 (160 bytes) (0x000010 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FNavSkeletonPoint : FActionPointData
{ 
	bool                                               Outdoors;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0014   (0x0004)  
	float                                              EffectiveRange;                                             // 0x0018   (0x0004)  
	int32_t                                            LinkId;                                                     // 0x001C   (0x0004)  
	uint64_t                                           AtPolyRef;                                                  // 0x0020   (0x0008)  
	FVector                                            ProtectionDirection;                                        // 0x0028   (0x000C)  
	float                                              ProtectionHalfAngle;                                        // 0x0034   (0x0004)  
	int32_t                                            BattleIntensityExpectation;                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<int32_t>                                    NeighbourIndices;                                           // 0x0040   (0x0010)  
	TArray<float>                                      NeighbourDistances;                                         // 0x0050   (0x0010)  
	TArray<int32_t>                                    VisibleIndices;                                             // 0x0060   (0x0010)  
	TArray<int32_t>                                    ThrowableIndices;                                           // 0x0070   (0x0010)  
	TArray<int32_t>                                    MovableIndices;                                             // 0x0080   (0x0010)  
	TArray<int32_t>                                    FriendIndices;                                              // 0x0090   (0x0010)  
};

/// Struct /Script/MFNPCAI.NavSkeletonPathPoint
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNavSkeletonPathPoint
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           NodeRef;                                                    // 0x0010   (0x0008)  
	uint32_t                                           Flags;                                                      // 0x0018   (0x0004)  
	uint32_t                                           CustomLinkId;                                               // 0x001C   (0x0004)  
	FNavLinkId                                         CustomNavLinkId;                                            // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/MFNPCAI.NavSkeletonPatchedPath
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNavSkeletonPatchedPath
{ 
	TArray<FNavSkeletonPathPoint>                      PathPoints;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/MFNPCAI.NavSkeletonData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNavSkeletonData
{ 
	TArray<FNavSkeletonPoint>                          Points;                                                     // 0x0000   (0x0010)  
	TMap<uint64_t, FNavSkeletonPatchedPath>            UnstableSegmentPatchPaths;                                  // 0x0010   (0x0050)  
};

/// Struct /Script/MFNPCAI.NPCAINavPlatformBuildTemplate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAINavPlatformBuildTemplate
{ 
	class AActor*                                      Platform;                                                   // 0x0000   (0x0008)  
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavPlatformNavMeshBoundsVolumeData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNPCAINavPlatformNavMeshBoundsVolumeData
{ 
	class ANavMeshBoundsVolume*                        NavMeshBoundsVolume;                                        // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Extent;                                                     // 0x0014   (0x000C)  
	FVector                                            NewPlatformLoc;                                             // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavPlatformRegion
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FNPCAINavPlatformRegion
{ 
	TMap<int32_t, int64_t>                             LinkLineIDs;                                                // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1558) /* TSet<int64_t> */         __um(PolyRefs);                                             // 0x0050   (0x0050)  
	int32_t                                            LinkLinesNum;                                               // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavPlatformBuildData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNPCAINavPlatformBuildData
{ 
	FNPCAINavPlatformNavMeshBoundsVolumeData           NavMeshBoundsVolumeData;                                    // 0x0000   (0x0030)  
	TArray<FNPCAINavPlatformRegion>                    PlatformRegions;                                            // 0x0030   (0x0010)  
	float                                              MaxLinkLineLength;                                          // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavPlatformPathInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNPCAINavPlatformPathInfo
{ 
	TArray<FVector>                                    PathPoints;                                                 // 0x0000   (0x0010)  
	TArray<uint64_t>                                   PathPointPolyRefs;                                          // 0x0010   (0x0010)  
	float                                              PathCost;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<uint64_t>                                   PathCorridor;                                               // 0x0028   (0x0010)  
	TArray<float>                                      PathCorridorCost;                                           // 0x0038   (0x0010)  
};

/// Struct /Script/MFNPCAI.NPCAINavPlatformLinkLine
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FNPCAINavPlatformLinkLine
{ 
	FVector                                            LinkLineStart;                                              // 0x0000   (0x000C)  
	FVector                                            LinkLineEnd;                                                // 0x000C   (0x000C)  
	FVector                                            LinkLineDir;                                                // 0x0018   (0x000C)  
	float                                              ProjectHeight;                                              // 0x0024   (0x0004)  
	TMap<int32_t, FNPCAINavPlatformPathInfo>           PathInfos;                                                  // 0x0028   (0x0050)  
};

/// Class /Script/MFNPCAI.NPCAINavMeshManager
/// Size: 0x0720 (1824 bytes) (0x000318 - 0x000720) align 8 MaxSize: 0x0720
class ANPCAINavMeshManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x198];                                     // 0x0318   (0x0198)  MISSED
	FNavSkeletonBuildSettings                          SkeletonBuildSettings;                                      // 0x04B0   (0x008C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x053C   (0x0004)  MISSED
	TArray<FNavSkeletonPoint>                          NavSkeletonPoints;                                          // 0x0540   (0x0010)  
	FNavSkeletonData                                   NavSkeletonData;                                            // 0x0550   (0x0060)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x05B0   (0x0008)  MISSED
	TArray<class ANPCAINavLinkProxy*>                  CachedNavLinkProxies;                                       // 0x05B8   (0x0010)  
	SDK_UNDEFINED(80,1559) /* TSet<FVector> */         __um(SkeletonForcePoints);                                  // 0x05C8   (0x0050)  
	TMap<int32_t, FNPCAINavPlatformBuildTemplate>      PlatformBuildTemplates;                                     // 0x0618   (0x0050)  
	TMap<int32_t, FNPCAINavPlatformBuildData>          PlatformBuildDatas;                                         // 0x0668   (0x0050)  
	TMap<int32_t, FNPCAINavPlatformLinkLine>           LinkLines;                                                  // 0x06B8   (0x0050)  
	FVector                                            PlatformOctreeOrigin;                                       // 0x0708   (0x000C)  
	float                                              PlatformOctreeExtent;                                       // 0x0714   (0x0004)  
	float                                              PlatformMinimumUpdateInterval;                              // 0x0718   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x071C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavMeshManager.SetupNavSkeleton
	// void SetupNavSkeleton();                                                                                                 // [0x601fe88] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavMeshManager.PrintSkeletonPointRadiusStat
	// void PrintSkeletonPointRadiusStat();                                                                                     // [0x601fac4] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAINavMeshManager.PrintSkeletonPointDegreeStat
	// void PrintSkeletonPointDegreeStat();                                                                                     // [0x601fab0] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAINavMeshManager.PrintSkeletonMemoryUsage
	// void PrintSkeletonMemoryUsage();                                                                                         // [0x601fa9c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAINavMeshManager.PrintSkeletonInfo
	// void PrintSkeletonInfo();                                                                                                // [0x601fa88] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAINavMeshManager.PrintSkeletonEdgeLengthStat
	// void PrintSkeletonEdgeLengthStat();                                                                                      // [0x601fa74] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAINavMeshManager.OnPostBeginGameInit
	// void OnPostBeginGameInit();                                                                                              // [0x601f3e0] Final|Native|Protected 
};

/// Class /Script/MFNPCAI.NPCAINavMeshRenderingComponent
/// Size: 0x04F0 (1264 bytes) (0x0004F0 - 0x0004F0) align 16 MaxSize: 0x04F0
class UNPCAINavMeshRenderingComponent : public UNPCAITestingRenderingComponent
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAINavMeshTestingActor
/// Size: 0x0720 (1824 bytes) (0x000358 - 0x000720) align 16 MaxSize: 0x0720
class ANPCAINavMeshTestingActor : public ANPCAITestingActor
{ 
public:
	float                                              ToWallCylinderHeight;                                       // 0x0358   (0x0004)  
	float                                              RadiusMultiplier;                                           // 0x035C   (0x0004)  
	float                                              DistanceHeightMultiplier;                                   // 0x0360   (0x0004)  
	float                                              DistanceLineThickness;                                      // 0x0364   (0x0004)  
	float                                              ShowGradientThreshold;                                      // 0x0368   (0x0004)  
	float                                              GradientZOffset;                                            // 0x036C   (0x0004)  
	float                                              UpdateGradientFlowAnimInterval;                             // 0x0370   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0374   (0x0004)  MISSED
	float                                              ShowDivergenceThreshold;                                    // 0x0378   (0x0004)  
	float                                              DivergenceHeightMultiplier;                                 // 0x037C   (0x0004)  
	float                                              DivergenceLineThickness;                                    // 0x0380   (0x0004)  
	float                                              ConnectionLineThickness;                                    // 0x0384   (0x0004)  
	float                                              SimlifiedConnectionZOffset;                                 // 0x0388   (0x0004)  
	int32_t                                            ShowCoverageLevel;                                          // 0x038C   (0x0004)  
	int32_t                                            ShowWallLevel;                                              // 0x0390   (0x0004)  
	bool                                               bEnableRefreshData : 1;                                     // 0x0394:0 (0x0001)  
	bool                                               bDrawSamplePoints : 1;                                      // 0x0394:1 (0x0001)  
	bool                                               bDrawWallCountMap : 1;                                      // 0x0394:2 (0x0001)  
	bool                                               bDrawDistanceMap : 1;                                       // 0x0394:3 (0x0001)  
	bool                                               bDrawGradient : 1;                                          // 0x0394:4 (0x0001)  
	bool                                               bShowAllGradient : 1;                                       // 0x0394:5 (0x0001)  
	bool                                               bDrawGradientFlowAnim : 1;                                  // 0x0394:6 (0x0001)  
	bool                                               bDrawCoverage : 1;                                          // 0x0394:7 (0x0001)  
	bool                                               bAlwaysShowMainCoverage : 1;                                // 0x0395:0 (0x0001)  
	bool                                               bDrawOriginalConnection : 1;                                // 0x0395:1 (0x0001)  
	bool                                               bDrawSimplifiedConnection : 1;                              // 0x0395:2 (0x0001)  
	bool                                               bOnlyDrawMainSimplifiedConnection : 1;                      // 0x0395:3 (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0396   (0x0002)  MISSED
	int32_t                                            NearestMainCoverageSampleIndex;                             // 0x0398   (0x0004)  
	int32_t                                            PolyMeshCount;                                              // 0x039C   (0x0004)  
	int32_t                                            PolylineCount;                                              // 0x03A0   (0x0004)  
	int32_t                                            CurrentTileIndex;                                           // 0x03A4   (0x0004)  
	FVector                                            ClosestPointOnWall;                                         // 0x03A8   (0x000C)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x03B4   (0x0014)  MISSED
	int32_t                                            NeighbourWallEdgeCount;                                     // 0x03C8   (0x0004)  
	float                                              DistanceToWall;                                             // 0x03CC   (0x0004)  
	FVector4                                           SamplePointCountStat;                                       // 0x03D0   (0x0010)  
	FVector4                                           WallStat;                                                   // 0x03E0   (0x0010)  
	FVector4                                           DistanceStat;                                               // 0x03F0   (0x0010)  
	FVector4                                           DivergenceStat;                                             // 0x0400   (0x0010)  
	FVector4                                           FilteredDistanceStat;                                       // 0x0410   (0x0010)  
	FVector4                                           FilteredDivergenceStat;                                     // 0x0420   (0x0010)  
	int32_t                                            CoverageStats[5];                                           // 0x0430   (0x0014)  
	int32_t                                            ConnectionStats[13];                                        // 0x0444   (0x0034)  
	float                                              MaxPathLength;                                              // 0x0478   (0x0004)  
	FNavSkeletonBuildSettings                          BuildSettings;                                              // 0x047C   (0x008C)  
	bool                                               bDrawPersistent : 1;                                        // 0x0508:0 (0x0001)  
	bool                                               bDrawForcePoint : 1;                                        // 0x0508:1 (0x0001)  
	bool                                               bDrawTextInfo : 1;                                          // 0x0508:2 (0x0001)  
	bool                                               bDrawProtection : 1;                                        // 0x0508:3 (0x0001)  
	bool                                               bDrawNearestPoint : 1;                                      // 0x0508:4 (0x0001)  
	bool                                               bDrawPointNeighbours : 1;                                   // 0x0508:5 (0x0001)  
	bool                                               bDrawFindResultPoints : 1;                                  // 0x0508:6 (0x0001)  
	bool                                               bDrawOutDoorsPoints : 1;                                    // 0x0508:7 (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0509   (0x0007)  MISSED
	FNavSkeletonPoint                                  NavSkeletonPoint;                                           // 0x0510   (0x00A0)  
	FNavSkeletonPoint                                  TargetNavSkeletonPoint;                                     // 0x05B0   (0x00A0)  
	TArray<int32_t>                                    FoundPointIDs;                                              // 0x0650   (0x0010)  
	float                                              CostLimit;                                                  // 0x0660   (0x0004)  
	float                                              HalfAngleOfView;                                            // 0x0664   (0x0004)  
	class AActor*                                      TargetDebugActor;                                           // 0x0668   (0x0008)  
	unsigned char                                      UnknownData04_7[0xB0];                                      // 0x0670   (0x00B0)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavMeshTestingActor.UpdateDrawing
	// void UpdateDrawing();                                                                                                    // [0x1e39048] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavPlatformComponent
/// Size: 0x0128 (296 bytes) (0x0000F8 - 0x000128) align 8 MaxSize: 0x0128
class UNPCAINavPlatformComponent : public UActorComponent
{ 
public:
	int64_t                                            PID;                                                        // 0x00F8   (0x0008)  
	int32_t                                            TemplateID;                                                 // 0x0100   (0x0004)  
	float                                              AffectedBottomHeight;                                       // 0x0104   (0x0004)  
	FVector                                            OriginLoc;                                                  // 0x0108   (0x000C)  
	FRotator                                           OriginRot;                                                  // 0x0114   (0x000C)  
	bool                                               bDebugDraw;                                                 // 0x0120   (0x0001)  
	bool                                               bDebugDrawBaseInfo;                                         // 0x0121   (0x0001)  
	bool                                               bDebugDrawLinkLines;                                        // 0x0122   (0x0001)  
	bool                                               bDebugDrawPlatformArea;                                     // 0x0123   (0x0001)  
	bool                                               bDebugDrawPolys;                                            // 0x0124   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0125   (0x0003)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.WorldLocToRelativeLoc
	// FVector WorldLocToRelativeLoc(FVector& WorldLoc);                                                                        // [0x60203f4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.WorldLocToNavLoc
	// FVector WorldLocToNavLoc(FVector& WorldLoc);                                                                             // [0x60202f8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.RelativeLocToWorldLoc
	// FVector RelativeLocToWorldLoc(FVector& RelativeLoc);                                                                     // [0x601fd8c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.RelativeLocToNavLoc
	// FVector RelativeLocToNavLoc(FVector& RelativeLoc);                                                                       // [0x601fca4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.ProjectWorldLocOnPlatform
	// bool ProjectWorldLocOnPlatform(FVector& WorldLoc, int64_t& PolyRef, FVector& Extent);                                    // [0x601fad8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.OnMapOpened
	// void OnMapOpened(FString Filename, bool bAsTemplate);                                                                    // [0x601f2fc] Final|Native|Private 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.NavLocToWorldLoc
	// FVector NavLocToWorldLoc(FVector& NavLoc);                                                                               // [0x601f200] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.NavLocToRelativeLoc
	// FVector NavLocToRelativeLoc(FVector& NavLoc);                                                                            // [0x601f118] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.IsWorldLocOnPlatform
	// bool IsWorldLocOnPlatform(FVector& WorldLoc);                                                                            // [0x601efb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.IsNavLocOnPlatform
	// bool IsNavLocOnPlatform(FVector& NavLoc);                                                                                // [0x601ea9c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.GetOwnerWorldLoc
	// FVector GetOwnerWorldLoc();                                                                                              // [0x601e2e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.GetBuildData
	// FNPCAINavPlatformBuildData GetBuildData();                                                                               // [0x601e1e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformComponent.GetBuildConfig
	// FNPCAINavPlatformBuildConfig GetBuildConfig();                                                                           // [0x601e1b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCAINavMovablePlatformComponent
/// Size: 0x0130 (304 bytes) (0x000128 - 0x000130) align 8 MaxSize: 0x0130
class UNPCAINavMovablePlatformComponent : public UNPCAINavPlatformComponent
{ 
public:
	float                                              MinUpdateDist;                                              // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAINavPlatformSystem
/// Size: 0x0340 (832 bytes) (0x000038 - 0x000340) align 16 MaxSize: 0x0340
class UNPCAINavPlatformSystem : public UNPCAINavSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x178];                                     // 0x0038   (0x0178)  MISSED
	TMap<class AActor*, int64_t>                       Platforms;                                                  // 0x01B0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x0200   (0x0080)  MISSED
	TMap<class UNPCAINavPlatformComponent*, int64_t>   PlatformComponents;                                         // 0x0280   (0x0050)  
	TMap<int64_t, class UNPCAINavPlatformComponent*>   PlatformComponentInfos;                                     // 0x02D0   (0x0050)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0320   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.OnNavigationGenerationFinished
	// void OnNavigationGenerationFinished(class ANavigationData* NavData);                                                     // [0x514e094] Final|Native|Private 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.OnNavigationGenerationBegin
	// void OnNavigationGenerationBegin();                                                                                      // [0x1e39048] Final|Native|Private 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.OnNavDataRegistered
	// void OnNavDataRegistered(class ANavigationData* NavData);                                                                // [0x6025104] Final|Native|Private 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.GetNavPlatformSystem
	// class UNPCAINavPlatformSystem* GetNavPlatformSystem(class UObject* WorldContextObject);                                  // [0x6024cc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.GetBuildDatas
	// TMap<int32_t, FNPCAINavPlatformBuildData> GetBuildDatas();                                                               // [0x6024bac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.GetBuildDataByTemplateID
	// FNPCAINavPlatformBuildData GetBuildDataByTemplateID(int32_t TemplateID);                                                 // [0x6024afc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.GetBuildConfigByTemplateID
	// FNPCAINavPlatformBuildConfig GetBuildConfigByTemplateID(int32_t TemplateID);                                             // [0x6024a4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.FindPlatformComponent
	// class UNPCAINavPlatformComponent* FindPlatformComponent(int64_t PID);                                                    // [0x6024168] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAINavPlatformSystem.FindPID
	// int64_t FindPID(class UNPCAINavPlatformComponent* PlatformComponent);                                                    // [0x6023a64] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MFNPCAI.NavCostDescriptor
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNavCostDescriptor
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MFNPCAI.NavPolyRefArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNavPolyRefArray
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MFNPCAI.NavCostModifierSharedPointer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNavCostModifierSharedPointer
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/MFNPCAI.NPCAINavRuntimeSystem
/// Size: 0x03B8 (952 bytes) (0x000038 - 0x0003B8) align 8 MaxSize: 0x03B8
class UNPCAINavRuntimeSystem : public UNPCAINavSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0038   (0x0040)  MISSED
	SDK_UNDEFINED(80,1560) /* TMap<int32_t, ENPCAIPerceptibleTile> */ __um(AreaIDToPerceptibleTile);               // 0x0078   (0x0050)  
	SDK_UNDEFINED(80,1561) /* TMap<ENPCAIPerceptibleTile, FNavCostDescriptor> */ __um(PerceptibleTileToNavCostDescriptor); // 0x00C8   (0x0050)  
	TMap<class UObject*, FNavPolyRefArray>             BurningPolyRefs;                                            // 0x0118   (0x0050)  
	TMap<class UObject*, FNavPolyRefArray>             TearGasPolyRefs;                                            // 0x0168   (0x0050)  
	TMap<class UObject*, FNavPolyRefArray>             TripMinePolyRefs;                                           // 0x01B8   (0x0050)  
	TMap<class UObject*, FNavPolyRefArray>             ClaymorePolyRefs;                                           // 0x0208   (0x0050)  
	TMap<class UObject*, FNavPolyRefArray>             ParadropPolyRefs;                                           // 0x0258   (0x0050)  
	TMap<class UObject*, class ANPCAINavModifierVolume*> ObjectToNavModifierVolume;                                // 0x02A8   (0x0050)  
	SDK_UNDEFINED(80,1562) /* TMap<TWeakObjectPtr<UObject*>, FNavCostModifierSharedPointer> */ __um(ObjectToNavCostModifier); // 0x02F8   (0x0050)  
	SDK_UNDEFINED(16,1563) /* TArray<TWeakObjectPtr<UObject*>> */ __um(InvalidNavCostModifiers);                   // 0x0348   (0x0010)  
	TMap<class AVolume*, FNavPolyRefArray>             AvoidPolyRefs;                                              // 0x0358   (0x0050)  
	class UCoverSystem*                                CachedCoverSystem;                                          // 0x03A8   (0x0008)  
	class ANPCAINavMeshManager*                        CachedNavMeshManager;                                       // 0x03B0   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.SetupTripMineAreas
	// void SetupTripMineAreas(class UObject* Object, FVector& StartPoint, FVector& EndPoint, bool bEnabled);                   // [0x60275a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.SetupTearGasAreas
	// void SetupTearGasAreas(class UObject* TearGasObject, FVector& CenterPos, FVector& EffectExtent, bool bActiving);         // [0x6026f74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.SetupRegionWhereNavLinksNeedDisable
	// bool SetupRegionWhereNavLinksNeedDisable(class AActor* AIPawnOrController, int32_t RegionIndex);                         // [0x6026e34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.SetupBurningAreas
	// void SetupBurningAreas(class UObject* Object, TArray<FVector>& Centers, float Radius, bool bEnable);                     // [0x60267ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.SetupAvoidAreas
	// void SetupAvoidAreas(class AAIController* AIController, TArray<AVolume*>& Volumes, bool bAvoid);                         // [0x602669c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.MapAreaIDToPerceptibleTile
	// ENPCAIPerceptibleTile MapAreaIDToPerceptibleTile(int32_t AreaID);                                                        // [0x602505c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.IsAreaBombing
	// int32_t IsAreaBombing(FVector& Location, bool bCheckMolotov, bool bCheckTearGas);                                        // [0x6024ec8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavRuntimeSystem.ArrangeStandPositions
	// TArray<FAICandidateStandPosition> ArrangeStandPositions(class UObject* WorldContextObject, FVector& Location, float MaxRange, float MinGap); // [0x602329c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavSkeletonForcePoint
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class ANPCAINavSkeletonForcePoint : public AActor
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0318   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAINavSkeletonSystem
/// Size: 0x0160 (352 bytes) (0x000038 - 0x000160) align 16 MaxSize: 0x0160
class UNPCAINavSkeletonSystem : public UNPCAINavSubsystemBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0038   (0x0128)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.SetupTryBestToIncludePointIDs
	// FNavSkeletonGraphAStarFilter SetupTryBestToIncludePointIDs(FNavSkeletonGraphAStarFilter& Filter, TArray<int32_t>& PointIDs); // [0x6028204] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryVisiblePointIDsFromMultiTargets
	// void QueryVisiblePointIDsFromMultiTargets(TArray<AActor*> Targets, TArray<float> HalfAngles, TArray<int32_t>& Result, float MaxDistance, float AroundRadius); // [0x602641c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryVisiblePointIDs
	// TArray<int32_t> QueryVisiblePointIDs(FVector& Location, FVector& Direction, float HalfAngle, float MaxDistance);         // [0x60261f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryThrowablePointIDs
	// TArray<int32_t> QueryThrowablePointIDs(int32_t TargetPointID);                                                           // [0x6026130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryProtectablePointIDs
	// TArray<int32_t> QueryProtectablePointIDs(FVector& Location, float MaxPathLength, int32_t KeepTopK);                      // [0x6025f94] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryPointIDsInSphericalCone
	// TArray<int32_t> QueryPointIDsInSphericalCone(FVector& Location, FVector& Direction, float HalfAngle, float MaxDistance); // [0x6025ce0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryPointIDs
	// TArray<int32_t> QueryPointIDs(FVector& Location, float QueryLength);                                                     // [0x6025b18] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryOutdoorsPointIDs
	// TArray<int32_t> QueryOutdoorsPointIDs(FVector& Location, FVector& Extent);                                               // [0x6025910] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryNearestPointIDsSorted
	// TArray<int32_t> QueryNearestPointIDsSorted(TArray<FVector>& Locations, float MaxPathLength);                             // [0x60257e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryNearestPointIDs
	// TArray<int32_t> QueryNearestPointIDs(FVector& Location, float MaxPathLength);                                            // [0x6025698] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryNearestPointID
	// int32_t QueryNearestPointID(FVector& Location, float MaxPathLength);                                                     // [0x6025564] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryNearestDoorPointID
	// int32_t QueryNearestDoorPointID(FVector& Location, float MaxPathLength);                                                 // [0x602542c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.QueryBranchyPointIDs
	// TArray<int32_t> QueryBranchyPointIDs(FVector& Location, float MaxPathLength, int32_t KeepTopK);                          // [0x6025290] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.OptimizePathResult
	// FNavSkeletonGraphFindResult OptimizePathResult(FNavSkeletonGraphFindResult& PathResult);                                 // [0x60251a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.GetTotalPointCount
	// int32_t GetTotalPointCount();                                                                                            // [0x6024ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.GetPointData
	// FNavSkeletonPoint GetPointData(int32_t PointId);                                                                         // [0x6024df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.GetNavSkeletonSystem
	// class UNPCAINavSkeletonSystem* GetNavSkeletonSystem(class UObject* WorldContextObject);                                  // [0x6024d58] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.GetFindPathStatus
	// EMFGraphAStarResult GetFindPathStatus(class UObject* Querier);                                                           // [0x6024c0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.FloodFromPointIDs
	// TArray<int32_t> FloodFromPointIDs(TArray<int32_t> PointIDs, FNavSkeletonGraphAStarFilter& Filter, bool bCanEndInUnreachablePoint); // [0x602475c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.FloodFromPointID
	// TArray<int32_t> FloodFromPointID(int32_t PointId, FNavSkeletonGraphAStarFilter& Filter, bool bCanEndInUnreachablePoint); // [0x60244d0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.FindStepBackPointIDs
	// FNavSkeletonGraphFindResult FindStepBackPointIDs(int32_t PointId, TArray<int32_t>& CandidatePointIDs, FNavSkeletonGraphAStarFilter& Filter); // [0x6024210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.FindPathAsync
	// bool FindPathAsync(int32_t StartPointID, int32_t EndPointID, FNavSkeletonGraphAStarFilter& Filter, FMFGraphAStarPolicy& Policy, FDelegateProperty Callback, class UObject* Caller); // [0x6023dcc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.FindPath
	// FNavSkeletonGraphFindResult FindPath(int32_t StartPointID, int32_t EndPointID, FNavSkeletonGraphAStarFilter& Filter, class UObject* Caller); // [0x6023b0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.FindOutsidePointIDs
	// FNavSkeletonGraphFindResult FindOutsidePointIDs(int32_t PointId, FNavSkeletonGraphAStarFilter& Filter);                  // [0x6023868] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.ClearUnreachablePointIDs
	// FNavSkeletonGraphAStarFilter ClearUnreachablePointIDs(FNavSkeletonGraphAStarFilter& Filter);                             // [0x60236c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.CalculatePathLengthToEachPoint
	// TArray<FNavSkeletonGraphResultNode> CalculatePathLengthToEachPoint(TArray<int32_t>& PointIDs, FVector& Location, float MaxPathLength); // [0x6023504] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.BuildSkeleton
	// void BuildSkeleton(class UObject* WorldContextObject);                                                                   // [0x602347c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.AddUnreachablePointIDs
	// FNavSkeletonGraphAStarFilter AddUnreachablePointIDs(FNavSkeletonGraphAStarFilter& Filter, TArray<int32_t>& PointIDs);    // [0x6023044] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.AddUnreachablePointID
	// FNavSkeletonGraphAStarFilter AddUnreachablePointID(FNavSkeletonGraphAStarFilter& Filter, int32_t PointId);               // [0x6022e0c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavSkeletonSystem.AbortFindPathRequest
	// bool AbortFindPathRequest(class UObject* Querier);                                                                       // [0x6022d50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAINavSteepZoneSystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAINavSteepZoneSystem : public UNPCAINavSubsystemBase
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavSteepZoneSystem.RunDeleter
	// void RunDeleter(FSteepZoneDeleteSettings& Settings);                                                                     // [0x602a420] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NavArea_Burning
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Burning : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_TearGas
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_TearGas : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_TripMine
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_TripMine : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Claymore
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Claymore : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Paradrop
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Paradrop : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Vehicle
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Vehicle : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_UnderPlatform
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_UnderPlatform : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Avoid
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Avoid : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Color0
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Color0 : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Color1
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Color1 : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Color2
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Color2 : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Color3
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Color3 : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Color4
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Color4 : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Color5
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Color5 : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Color6
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Color6 : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_Dynamic
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_Dynamic : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.NavArea_ClosedDoor
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNavArea_ClosedDoor : public UNavArea
{ 
public:
};

/// Class /Script/MFNPCAI.FloodSeedCollection
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFloodSeedCollection : public UObject
{ 
public:
	TArray<class AActor*>                              PlayerStarts;                                               // 0x0028   (0x0010)  
	TArray<class AActor*>                              AISpawnPoints;                                              // 0x0038   (0x0010)  
	TArray<class AActor*>                              DoorNavLinks;                                               // 0x0048   (0x0010)  
	SDK_UNDEFINED(80,1564) /* TSet<int64_t> */         __um(PlatformPolys);                                        // 0x0058   (0x0050)  
};

/// Class /Script/MFNPCAI.NavPathPointActor
/// Size: 0x0348 (840 bytes) (0x000318 - 0x000348) align 8 MaxSize: 0x0348
class ANavPathPointActor : public ANote
{ 
public:
	int32_t                                            NodeIndex;                                                  // 0x0318   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x031C   (0x0004)  MISSED
	uint64_t                                           NodeRef;                                                    // 0x0320   (0x0008)  
	FVector                                            NodeLocation;                                               // 0x0328   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0334   (0x0004)  MISSED
	TArray<class ANavPathPointActor*>                  NextPathPointArray;                                         // 0x0338   (0x0010)  
};

/// Class /Script/MFNPCAI.NavigationQueryFilter_DontVault
/// Size: 0x0100 (256 bytes) (0x000048 - 0x000100) align 8 MaxSize: 0x0100
class UNavigationQueryFilter_DontVault : public UNavigationQueryFilter
{ 
public:
	SDK_UNDEFINED(80,1565) /* TSet<ENavLinkType> */    __um(EnabledNavLinkTypes);                                  // 0x0048   (0x0050)  
	FMFVoxelNavGraphAStarFilterParam                   VoxelNavAStarFilterParam;                                   // 0x0098   (0x0068)  
};

/// Class /Script/MFNPCAI.NavigationQueryFilter_Diversity
/// Size: 0x00C0 (192 bytes) (0x000048 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNavigationQueryFilter_Diversity : public UNavigationQueryFilter
{ 
public:
	float                                              Threshold;                                                  // 0x0048   (0x0004)  
	float                                              LowValue;                                                   // 0x004C   (0x0004)  
	float                                              HighValue;                                                  // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FMFVoxelNavGraphAStarFilterParam                   VoxelNavAStarFilterParam;                                   // 0x0058   (0x0068)  
};

/// Struct /Script/MFNPCAI.NPCAINavPlatformBuildConfig
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNPCAINavPlatformBuildConfig
{ 
	FVector                                            FirstOffset;                                                // 0x0000   (0x000C)  
	FVector                                            AdjustOffset;                                               // 0x000C   (0x000C)  
	FVector                                            WrapBoxExtent;                                              // 0x0018   (0x000C)  
	float                                              CeilingHeight;                                              // 0x0024   (0x0004)  
	bool                                               AutoBuildLinkLine;                                          // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              LinkLineLengthDefault;                                      // 0x002C   (0x0004)  
	float                                              LinkPointMinIntervalDefault;                                // 0x0030   (0x0004)  
	float                                              LinkLineProjectHeightDefault;                               // 0x0034   (0x0004)  
	TArray<class UClass*>                              LinkLineHitIgnoreClassList;                                 // 0x0038   (0x0010)  
};

/// Struct /Script/MFNPCAI.NavLinkAcceptanceRadiusEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNavLinkAcceptanceRadiusEntry
{ 
	SDK_UNDEFINED(1,1566) /* ENavLinkType */           __um(LinkType);                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AdditionAcceptanceRadius;                                   // 0x0004   (0x0004)  
	float                                              AdditionAcceptanceRadiusEnd;                                // 0x0008   (0x0004)  
};

/// Class /Script/MFNPCAI.AINavGenerationSettings
/// Size: 0x01D8 (472 bytes) (0x000038 - 0x0001D8) align 8 MaxSize: 0x01D8
class UAINavGenerationSettings : public UDeveloperSettings
{ 
public:
	SDK_UNDEFINED(16,1567) /* TArray<TSoftObjectPtr<UClass*>> */ __um(NavLinkProxyGeneratorClasses);               // 0x0038   (0x0010)  
	FNPCAINavPlatformBuildConfig                       DefaultPlatformBuildConfig;                                 // 0x0048   (0x0048)  
	TMap<int32_t, FNPCAINavPlatformBuildConfig>        PlatformBuildConfigs;                                       // 0x0090   (0x0050)  
	FNPCAINavPlatformBuildData                         DefaultPlatformBuildData;                                   // 0x00E0   (0x0048)  
	TArray<FNavLinkAcceptanceRadiusEntry>              NavLinkAdditionAcceptanceRadius;                            // 0x0128   (0x0010)  
	SDK_UNDEFINED(80,1568) /* TSet<UClass*> */         __um(StopPathExtendAreas);                                  // 0x0138   (0x0050)  
	SDK_UNDEFINED(80,1569) /* TSet<ENavLinkType> */    __um(StopPathTurningLinkTypes);                             // 0x0188   (0x0050)  
};

/// Class /Script/MFNPCAI.NPCAINavUtilitySystem
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAINavUtilitySystem : public UNPCAINavSubsystemBase
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.ValidateTacticPointLocations
	// void ValidateTacticPointLocations(class UObject* WorldContextObject);                                                    // [0x602d4cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.RemoveUnreachableNavMeshes
	// void RemoveUnreachableNavMeshes(class UObject* WorldContextObject);                                                      // [0x602d360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, FVector& OriginalHitLocation, bool& bIsRaycastEndInCorridor); // [0x602cf48] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.IsDefaultNavArea
	// bool IsDefaultNavArea(class UObject* WorldContextObject, FVector Location, bool& bOnNavMesh, ENPCAIPerceptibleTile& NavMeshType); // [0x602cd9c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.GetNavPolyCentersInVolume
	// TArray<FVector> GetNavPolyCentersInVolume(class UObject* WorldContextObject, class AVolume* Volume, bool bIncludeHighCost, bool bShuffleCandidates, float KeepAwayDistance, int32_t MaxCount); // [0x602cb38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.FindDistanceToWall
	// bool FindDistanceToWall(class UObject* WorldContextObject, FVector& Location, float SearchRadius, FVector& OutClosestPointOnWall, float& OutDistanceToWall); // [0x602c740] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.EstimateLocationAfterSeconds
	// bool EstimateLocationAfterSeconds(class AActor* PawnOrController, float ExpectedSeconds, FVector& OutLocation, float& OutActualSeconds); // [0x602c574] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.DoesPathExist
	// bool DoesPathExist(class UObject* WorldContextObject, FVector& Start, FVector& End, float CostLimit, EPathExistenceTestMode TestMode); // [0x602c15c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAINavUtilitySystem.CalculatePathLengthToEachCoverPoint
	// TArray<FCoverPointPathLengthResult> CalculatePathLengthToEachCoverPoint(class UObject* WorldContextObject, FVector& Location, float MaxPathLength); // [0x602bb50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIPeekPointAsyncTask
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align 8 MaxSize: 0x0090
class UNPCAIPeekPointAsyncTask : public UNPCAIAsyncTaskBase
{ 
public:
	SDK_UNDEFINED(16,1570) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1571) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0050   (0x0010)  
	FVector                                            TargetPoint;                                                // 0x0060   (0x000C)  
	FVector                                            DangerPoint;                                                // 0x006C   (0x000C)  
	float                                              PeekLength;                                                 // 0x0078   (0x0004)  
	FVector                                            PeekPoint;                                                  // 0x007C   (0x000C)  
	bool                                               bWillExpose;                                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0089   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPeekPointAsyncTask.GetNavPath
	// void GetNavPath(TArray<FVector>& OutPath, int32_t& StartIndex);                                                          // [0x602c994] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIPeekPointAsyncTask.ExecuteTask
	// void ExecuteTask();                                                                                                      // [0x156ee74] Native|Public        
	// Function /Script/MFNPCAI.NPCAIPeekPointAsyncTask.AIPeekPoint
	// class UNPCAIPeekPointAsyncTask* AIPeekPoint(class AActor* Pawn, FVector& TargetPoint, FVector& DangerPoint, float PeekLength); // [0x602b738] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.AIGrassMapInfo
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FAIGrassMapInfo
{ 
	FString                                            MapName;                                                    // 0x0000   (0x0010)  
	float                                              MapTopX;                                                    // 0x0010   (0x0004)  
	float                                              MapTopY;                                                    // 0x0014   (0x0004)  
	float                                              MapSizeX;                                                   // 0x0018   (0x0004)  
	float                                              MapSizeY;                                                   // 0x001C   (0x0004)  
	int32_t                                            MapLandscapeGrassCellCountX;                                // 0x0020   (0x0004)  
	int32_t                                            MapLandscapeGrassCellCountY;                                // 0x0024   (0x0004)  
	float                                              LandscapeGrassCellSize;                                     // 0x0028   (0x0004)  
	int32_t                                            MinLandscapeGrassCountInCell;                               // 0x002C   (0x0004)  
	float                                              MinCellCoverPercent;                                        // 0x0030   (0x0004)  
	float                                              MinLandscapeGrassHeight;                                    // 0x0034   (0x0004)  
	float                                              LandscapeGrassZGapLimit;                                    // 0x0038   (0x0004)  
	float                                              MinGrassHeight;                                             // 0x003C   (0x0004)  
	float                                              AverageDensityLimit;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            IgnoreFoliageTags;                                          // 0x0048   (0x0010)  
	bool                                               bIsGenerateMeshGrass;                                       // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            MeshGrassTags;                                              // 0x0060   (0x0010)  
	FString                                            SaveLevelName;                                              // 0x0070   (0x0010)  
	bool                                               bShouldSkipMainLevel;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/MFNPCAI.AIFoliageGrassBlock
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FAIFoliageGrassBlock
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	FBox                                               Bounds;                                                     // 0x0004   (0x001C)  
	FVector                                            Location;                                                   // 0x0020   (0x000C)  
	float                                              RotatonYaw;                                                 // 0x002C   (0x0004)  
	char                                               Density;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              ScaleValue;                                                 // 0x0034   (0x0004)  
	bool                                               bSlowDownCharacter;                                         // 0x0038   (0x0001)  
	bool                                               bReduceAimingAccuracy;                                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x003A   (0x0002)  MISSED
};

/// Struct /Script/MFNPCAI.AILandscapeGrassBlock
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FAILandscapeGrassBlock
{ 
	FBox                                               Bounds;                                                     // 0x0000   (0x001C)  
	FVector                                            Location;                                                   // 0x001C   (0x000C)  
};

/// Struct /Script/MFNPCAI.AIGrassBox
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FAIGrassBox
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	FVector                                            Extent;                                                     // 0x000C   (0x000C)  
	float                                              Density;                                                    // 0x0018   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIGrassCylinder
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAIGrassCylinder
{ 
	float                                              ZCenter;                                                    // 0x0000   (0x0004)  
	float                                              HalfHeight;                                                 // 0x0004   (0x0004)  
	float                                              Radius;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       PartsDensities;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/MFNPCAI.AIGrassBlock
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
struct FAIGrassBlock : FAILandscapeGrassBlock
{ 
	FName                                              AIGrassName;                                                // 0x0028   (0x0008)  
	char                                               Density;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FAIGrassBox>                                GrassBoxList;                                               // 0x0038   (0x0010)  
	TArray<FAIGrassCylinder>                           GrassCylinderList;                                          // 0x0048   (0x0010)  
	bool                                               bSlowDownCharacter;                                         // 0x0058   (0x0001)  
	bool                                               bReduceAimingAccuracy;                                      // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x005A   (0x0006)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPerceptionAssistActor
/// Size: 0x03F0 (1008 bytes) (0x000318 - 0x0003F0) align 8 MaxSize: 0x03F0
class ANPCAIPerceptionAssistActor : public AActor
{ 
public:
	FAIGrassMapInfo                                    MapInfo;                                                    // 0x0318   (0x0088)  
	TArray<FAIFoliageGrassBlock>                       FoliageGrassBlockList;                                      // 0x03A0   (0x0010)  
	TArray<FAILandscapeGrassBlock>                     LandscapeGrassBlockList;                                    // 0x03B0   (0x0010)  
	TArray<FAIGrassBlock>                              GrassBlockAssets;                                           // 0x03C0   (0x0010)  
	bool                                               bIsDebugAIGrass;                                            // 0x03D0   (0x0001)  
	SDK_UNDEFINED(1,1572) /* EnumAIGrassDebugBox */    __um(DebugAIGrassBox);                                      // 0x03D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x03D2   (0x0016)  MISSED
	float                                              FindNearbyGrassRadiusBuffer;                                // 0x03E8   (0x0004)  
	float                                              SlowdownEdgePercent;                                        // 0x03EC   (0x0004)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPerceptionAssistActor.DebugShowAIGrassCluster
	// void DebugShowAIGrassCluster(EnumAIGrassDebugBox Type);                                                                  // [0x602bcd8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.AIGrassOctreeElement
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FAIGrassOctreeElement
{ 
	unsigned char                                      UnknownData00_2[0x24];                                      // 0x0000   (0x0024)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPerceptionComponent
/// Size: 0x02D0 (720 bytes) (0x0001D8 - 0x0002D0) align 8 MaxSize: 0x02D0
class UNPCAIPerceptionComponent : public UAIPerceptionComponent
{ 
public:
	bool                                               EnabledRecedeSightWhileRotate;                              // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01D9   (0x0003)  MISSED
	float                                              RateDrawLine;                                               // 0x01DC   (0x0004)  
	bool                                               bIsDebugSightRadius;                                        // 0x01E0   (0x0001)  
	bool                                               bIsLogShootPart;                                            // 0x01E1   (0x0001)  
	bool                                               bIsDebugFogRange;                                           // 0x01E2   (0x0001)  
	bool                                               bEnabledDebugCanSeePoint;                                   // 0x01E3   (0x0001)  
	float                                              LastTimeCheckFlashBlocks;                                   // 0x01E4   (0x0004)  
	FVector                                            FlashLightPos;                                              // 0x01E8   (0x000C)  
	float                                              CheckAutoLeanInterval;                                      // 0x01F4   (0x0004)  
	float                                              SightAngleScaleValue;                                       // 0x01F8   (0x0004)  
	float                                              SightRadiusScaleValue;                                      // 0x01FC   (0x0004)  
	float                                              HearRadiusScaleValue;                                       // 0x0200   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0204   (0x0008)  MISSED
	float                                              SightCheckInterval;                                         // 0x020C   (0x0004)  
	class ACharacter*                                  AIOwnerPawn;                                                // 0x0210   (0x0008)  
	SDK_UNDEFINED(1,1573) /* ENPCAISenseChannel */     __um(WeaponChannel);                                        // 0x0218   (0x0001)  
	SDK_UNDEFINED(1,1574) /* ENPCAISenseChannel */     __um(AISightChannel);                                       // 0x0219   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x021A   (0x0006)  MISSED
	class ANPCAIPerceptionAssistActor*                 PerceptionAssistActor;                                      // 0x0220   (0x0008)  
	class ANPCAIPerceptionDynamicActor*                PerceptionDynamicActor;                                     // 0x0228   (0x0008)  
	class UNPCAIMoverSystemComponent*                  OwnerMoverComponent;                                        // 0x0230   (0x0008)  
	class UNPCAIMemorySystemComponent*                 OwnerMemoryComponent;                                       // 0x0238   (0x0008)  
	class UNPCAIMultiTargetSystemComponent*            OwnerMultiTargetComponent;                                  // 0x0240   (0x0008)  
	class UNPCAIPropertyComponent_Shoot*               ShootProps;                                                 // 0x0248   (0x0008)  
	class UNPCAIPropertyComponent_Look*                LookProps;                                                  // 0x0250   (0x0008)  
	class UActorComponent*                             AIFireComponent;                                            // 0x0258   (0x0008)  
	class UActorComponent*                             AIStaticsComponent;                                         // 0x0260   (0x0008)  
	class UActorComponent*                             AIPoseComponent;                                            // 0x0268   (0x0008)  
	class UActorComponent*                             IKComponent;                                                // 0x0270   (0x0008)  
	class UActorComponent*                             AISenseAbilityComponent;                                    // 0x0278   (0x0008)  
	class UNPCAIGlobalSharedInfo*                      AISharedInfo;                                               // 0x0280   (0x0008)  
	class UActorComponent*                             AITurnComponent;                                            // 0x0288   (0x0008)  
	float                                              NextCheckLeanCanShootTime;                                  // 0x0290   (0x0004)  
	float                                              SelfIKFootOffsets;                                          // 0x0294   (0x0004)  
	float                                              TargetIKFootOffsets;                                        // 0x0298   (0x0004)  
	float                                              TurnSightWeakenScale;                                       // 0x029C   (0x0004)  
	float                                              LastTimeRecoverSight;                                       // 0x02A0   (0x0004)  
	SDK_UNDEFINED(1,1575) /* EAILeanType */            __um(AutoLeanType);                                         // 0x02A4   (0x0001)  
	SDK_UNDEFINED(1,1576) /* EAIPose */                __um(AIPoseType);                                           // 0x02A5   (0x0001)  
	SDK_UNDEFINED(1,1577) /* EAIPose */                __um(TargetPoseType);                                       // 0x02A6   (0x0001)  
	SDK_UNDEFINED(1,1578) /* EAILeanType */            __um(AILeanType);                                           // 0x02A7   (0x0001)  
	bool                                               bInitAIGrassElements;                                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x02A9   (0x0007)  MISSED
	TArray<FAIGrassOctreeElement>                      AIGrassElements;                                            // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x02C0   (0x0010)  MISSED
};

/// Struct /Script/MFNPCAI.AIBlockArea
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FAIBlockArea
{ 
	SDK_UNDEFINED(1,1579) /* ENPCAIPerceptibleTile */  __um(TileType);                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBox                                               BlockBox;                                                   // 0x0004   (0x001C)  
	FBox                                               EffectiveBox;                                               // 0x0020   (0x001C)  
	FVector                                            Center;                                                     // 0x003C   (0x000C)  
	float                                              Radius;                                                     // 0x0048   (0x0004)  
	float                                              Heigh;                                                      // 0x004C   (0x0004)  
	float                                              StartTime;                                                  // 0x0050   (0x0004)  
	float                                              EndTime;                                                    // 0x0054   (0x0004)  
	float                                              BlockStartTime;                                             // 0x0058   (0x0004)  
	float                                              BlockEndTime;                                               // 0x005C   (0x0004)  
	bool                                               bLifeTimeObject;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	class UObject*                                     OwnerObject;                                                // 0x0068   (0x0008)  
};

/// Struct /Script/MFNPCAI.AISenseFlashBlock
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FAISenseFlashBlock
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FVector                                            StartPos;                                                   // 0x0010   (0x000C)  
	FVector                                            Dir;                                                        // 0x001C   (0x000C)  
	float                                              FaceAngle;                                                  // 0x0028   (0x0004)  
	float                                              SevereDebuffDistance;                                       // 0x002C   (0x0004)  
	float                                              ModerateDebuffDistance;                                     // 0x0030   (0x0004)  
	float                                              MildDebuffDistance;                                         // 0x0034   (0x0004)  
	float                                              Height;                                                     // 0x0038   (0x0004)  
	float                                              MaxHeight;                                                  // 0x003C   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAIPerceptionDynamicActor
/// Size: 0x0350 (848 bytes) (0x000318 - 0x000350) align 8 MaxSize: 0x0350
class ANPCAIPerceptionDynamicActor : public AActor
{ 
public:
	TArray<FAIBlockArea>                               DynamicAreaList;                                            // 0x0318   (0x0010)  
	TArray<FAISenseFlashBlock>                         SenseFlashBlockList;                                        // 0x0328   (0x0010)  
	bool                                               bDebugBlock;                                                // 0x0338   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0339   (0x0003)  MISSED
	int32_t                                            IndexOfUpdateFlashBlock;                                    // 0x033C   (0x0004)  
	int32_t                                            IndexOfCheckEnemyFlashBlock;                                // 0x0340   (0x0004)  
	float                                              SevereLightBurnDistanceCoef;                                // 0x0344   (0x0004)  
	float                                              ModerateLightBurnDistanceCoef;                              // 0x0348   (0x0004)  
	float                                              MildLightBurnDistanceCoef;                                  // 0x034C   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAIPerceptionSystem
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 8 MaxSize: 0x0130
class UNPCAIPerceptionSystem : public UAIPerceptionSystem
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPerceptionSystem.OnSourceActorEndPlay
	// void OnSourceActorEndPlay(class AActor* InActor, TEnumAsByte<EEndPlayReason> InEndPlayReason);                           // [0x18ce590] Native|Public        
	// Function /Script/MFNPCAI.NPCAIPerceptionSystem.ModifySenseRangeInRuntime
	// bool ModifySenseRangeInRuntime(class AActor* InAIController, float InCatchRadiusScale, float InLossRadiusScale, EAISenseType InSenseType); // [0x602e6b4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIProfile
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIProfile : public UObject
{ 
public:
	class UClass*                                      FactionClass;                                               // 0x0028   (0x0008)  
	class UClass*                                      RoleClass;                                                  // 0x0030   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyProfile : public UNPCAIPropertyProfileBase
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent : public UNPCAIProfileBaseComponent
{ 
public:
};

/// Struct /Script/MFNPCAI.AIBodyPartAimingChoice
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAIBodyPartAimingChoice
{ 
	SDK_UNDEFINED(1,1580) /* EAIBodyPartType */        __um(BodyPart);                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIBodyBulkAimingChoice
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAIBodyBulkAimingChoice
{ 
	SDK_UNDEFINED(1,1581) /* EAIBodyBulkType */        __um(BodyBulk);                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0004   (0x0004)  
	TArray<FAIBodyPartAimingChoice>                    BodyParts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/MFNPCAI.RangeLimit
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRangeLimit
{ 
	int32_t                                            MinCount;                                                   // 0x0000   (0x0004)  
	int32_t                                            MaxCount;                                                   // 0x0004   (0x0004)  
};

/// Class /Script/MFNPCAI.AIPropertyAimingProfile
/// Size: 0x01B8 (440 bytes) (0x000038 - 0x0001B8) align 8 MaxSize: 0x01B8
class UAIPropertyAimingProfile : public UNPCAIPropertyProfile
{ 
public:
	float                                              UA_QUICK_AIM_OFFSET_DIS_RATE;                               // 0x0038   (0x0004)  
	float                                              UA_QUICK_AIM_UNDER_SEEN_TIME;                               // 0x003C   (0x0004)  
	float                                              UA_QUICK_AIM_TIME_CALC_COEF;                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UCurveFloat*                                 UA_AIM_TIME_TO_DIST_MULTIPLIER_CURVE;                       // 0x0048   (0x0008)  
	class UCurveFloat*                                 UA_SCATTERING_DIST_CURVE;                                   // 0x0050   (0x0008)  
	class UCurveFloat*                                 UA_FAKE_RANDOM_HIT_RATE_CURVE;                              // 0x0058   (0x0008)  
	TArray<float>                                      UA_SHOOT_HIT_RATES;                                         // 0x0060   (0x0010)  
	TArray<float>                                      UA_SHOOT_HIT_RATES_AI;                                      // 0x0070   (0x0010)  
	class UCurveFloat*                                 UA_SHOOT_HIT_RATE_DISTANCE_TO_PLAYER_CURVE;                 // 0x0080   (0x0008)  
	class UCurveFloat*                                 UA_SHOOT_HIT_RATE_DISTANCE_TO_AI_CURVE;                     // 0x0088   (0x0008)  
	class UCurveFloat*                                 UA_SHOOT_HIT_RATE_DISTANCE_NOT_ADS;                         // 0x0090   (0x0008)  
	float                                              UA_ADD_AIMING_TICK_WHEN_ANGLE_SMALLER_THAN;                 // 0x0098   (0x0004)  
	float                                              UA_ADD_AIMING_TICK_WHEN_ANGLE_SMALLER_THAN_COS;             // 0x009C   (0x0004)  
	bool                                               IS_USE_PREDESTINED_FAKE_RANDOM;                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              UA_SHOOT_HIT_RATE_IF_AIMOVE;                                // 0x00A4   (0x0004)  
	float                                              UA_SHOOT_HIT_RATE_IF_ENEMY_MOVE_SPEED;                      // 0x00A8   (0x0004)  
	float                                              UA_SHOOT_HIT_RATE_IF_ENEMY_MOVE;                            // 0x00AC   (0x0004)  
	float                                              UA_SHOOT_HIT_RATE_IF_ARM_BROKEN;                            // 0x00B0   (0x0004)  
	float                                              UA_SHOOT_HIT_RATE_IF_INCOVER_SAFE;                          // 0x00B4   (0x0004)  
	float                                              UA_SHOOT_HIT_RATE_IF_BE_HITED;                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	class UCurveFloat*                                 UA_SHOOT_HIT_RATE_IF_BATTLE_DURATION_CURVE;                 // 0x00C0   (0x0008)  
	class UCurveFloat*                                 UA_SHOOT_HIT_RATE_IF_WEAPON_ADSMOA_BIAS_CURVE;              // 0x00C8   (0x0008)  
	float                                              UA_SHOOT_HIT_RATE_IF_SHOOT_HEAD;                            // 0x00D0   (0x0004)  
	float                                              UA_SHOOT_HIT_RATE_IF_UNDER_FLASH_LIGHT;                     // 0x00D4   (0x0004)  
	float                                              UA_SHOOT_HEAD_FACE_RATE_IF_USE_PREDESTINED;                 // 0x00D8   (0x0004)  
	float                                              UA_SHOOT_HIT_LIMITED_TIME;                                  // 0x00DC   (0x0004)  
	float                                              MinAimDuration;                                             // 0x00E0   (0x0004)  
	float                                              MaxAimDuration;                                             // 0x00E4   (0x0004)  
	float                                              UA_SPREAD_OFFSET_XY_CLAMP;                                  // 0x00E8   (0x0004)  
	float                                              UA_SPREAD_OFFSET_MIN_Z_CLAMP;                               // 0x00EC   (0x0004)  
	float                                              UA_SPREAD_OFFSET_MAX_Z_CLAMP;                               // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	TArray<FAIBodyBulkAimingChoice>                    AIMING_BULK_FOR_PLAYER;                                     // 0x00F8   (0x0010)  
	TArray<FAIBodyBulkAimingChoice>                    AIMING_BULK_FOR_AI;                                         // 0x0108   (0x0010)  
	bool                                               IS_FILTER_NOT_SEEN_PART_TO_AIMING;                          // 0x0118   (0x0001)  
	SDK_UNDEFINED(1,1582) /* EAIAimingBodyPartTrend */ __um(AIMING_BODYPART_TREND);                                // 0x0119   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x011A   (0x0002)  MISSED
	float                                              ShootPartRandInterval;                                      // 0x011C   (0x0004)  
	float                                              ShootSpecifiedPartTime;                                     // 0x0120   (0x0004)  
	float                                              ReAimThreshold_Z;                                           // 0x0124   (0x0004)  
	float                                              ReAimThreshold_XY;                                          // 0x0128   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	int32_t                                            FireCountMin;                                               // 0x0130   (0x0004)  
	int32_t                                            FireCountMax;                                               // 0x0134   (0x0004)  
	float                                              AimTimeDelayByDamageProb;                                   // 0x0138   (0x0004)  
	float                                              AimTimeDelayByDamageMin;                                    // 0x013C   (0x0004)  
	float                                              AimTimeDelayByDamageMax;                                    // 0x0140   (0x0004)  
	float                                              AimTimeDelayByFirstShoot;                                   // 0x0144   (0x0004)  
	float                                              AimTimeDelayByFirstShootProb;                               // 0x0148   (0x0004)  
	float                                              AimTimeDelayByMove;                                         // 0x014C   (0x0004)  
	TMap<uint64_t, FRangeLimit>                        EffectiveCountPerBullet;                                    // 0x0150   (0x0050)  
	float                                              DeathSaveChance;                                            // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x01A4   (0x0004)  MISSED
	class UCurveFloat*                                 DeathSaveChanceCurve;                                       // 0x01A8   (0x0008)  
	class UCurveFloat*                                 DeathSaveDistanceDecreaseCurve;                             // 0x01B0   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Aiming
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNPCAIPropertyComponent_Aiming : public UNPCAIPropertyComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.SetMaxAimTime
	// float SetMaxAimTime(float Value);                                                                                        // [0x602eb1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.SetAimingBodyPartWeightInRuntime
	// void SetAimingBodyPartWeightInRuntime(EAIBodyPartType InBodyPart, float InWeight, bool bIsForPlayer);                    // [0x602e9dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.SetAimingBodyPartTrend
	// EAIAimingBodyPartTrend SetAimingBodyPartTrend(EAIAimingBodyPartTrend AimingTrend);                                       // [0x602e934] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.RemoveAimingTypeInRuntime
	// void RemoveAimingTypeInRuntime(EAIBodyBulkType InBulkType, bool bIsForPlayer);                                           // [0x602e848] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.IsUsePerdestinedFakeRandom
	// bool IsUsePerdestinedFakeRandom();                                                                                       // [0x602e690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.IsAimingChoicesContains
	// bool IsAimingChoicesContains(EAIBodyPartType InBodyPartType, bool bIsForPlayer);                                         // [0x602e594] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaSpreadOffsetXYClamp
	// float GetUaSpreadOffsetXYClamp();                                                                                        // [0x602e564] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaSpreadOffsetMinZClamp
	// float GetUaSpreadOffsetMinZClamp();                                                                                      // [0x602e534] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaSpreadOffsetMaxZClamp
	// float GetUaSpreadOffsetMaxZClamp();                                                                                      // [0x602e504] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaShootHitRatesAI
	// TArray<float> GetUaShootHitRatesAI();                                                                                    // [0x602e4d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaShootHitRates
	// TArray<float> GetUaShootHitRates();                                                                                      // [0x602e4ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfWeaponAdsMoaBias
	// float GetUAShootHitRateIfWeaponAdsMoaBias(float AdsMoaBias);                                                             // [0x602e194] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfUnderFlashLight
	// float GetUAShootHitRateIfUnderFlashLight();                                                                              // [0x602e16c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfShootHead
	// float GetUAShootHitRateIfShootHead();                                                                                    // [0x602e144] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfInCoverSafe
	// float GetUAShootHitRateIfInCoverSafe();                                                                                  // [0x602e11c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfEnemyMoveSpeed
	// float GetUAShootHitRateIfEnemyMoveSpeed();                                                                               // [0x602e0f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfEnemyMove
	// float GetUAShootHitRateIfEnemyMove();                                                                                    // [0x602e0cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfBeHited
	// float GetUAShootHitRateIfBeHited();                                                                                      // [0x602e0a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfBattleDuration
	// float GetUAShootHitRateIfBattleDuration(float BattleDurationTime);                                                       // [0x602dff8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfArmBroken
	// float GetUAShootHitRateIfArmBroken();                                                                                    // [0x602dfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateIfAIMove
	// float GetUAShootHitRateIfAIMove();                                                                                       // [0x602dfa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateForDistanceToPlayer
	// float GetUAShootHitRateForDistanceToPlayer(float InDistance);                                                            // [0x602defc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateForDistanceToAI
	// float GetUAShootHitRateForDistanceToAI(float InDistance);                                                                // [0x602de50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitRateForDistanceIfNotADS
	// float GetUAShootHitRateForDistanceIfNotADS(float InDistance);                                                            // [0x602dda4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHitLimitedTime
	// float GetUAShootHitLimitedTime();                                                                                        // [0x602dd7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUAShootHeadFaceRateIfUsedPredstined
	// float GetUAShootHeadFaceRateIfUsedPredstined();                                                                          // [0x602dd54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaScatteringByDist
	// float GetUaScatteringByDist(float Distance);                                                                             // [0x602e400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaQuickAimUnderSeenTime
	// float GetUaQuickAimUnderSeenTime();                                                                                      // [0x602e3d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaQuickAimTimeCalcCoef
	// float GetUaQuickAimTimeCalcCoef();                                                                                       // [0x602e3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaQuickAimOffsetDisRate
	// float GetUaQuickAimOffsetDisRate();                                                                                      // [0x602e388] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaMinAimTime
	// float GetUaMinAimTime();                                                                                                 // [0x602e360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaFakeRandomHitRate
	// float GetUaFakeRandomHitRate(float HitRate);                                                                             // [0x602e2b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaAimTime2DistMultiplierCurve
	// class UCurveFloat* GetUaAimTime2DistMultiplierCurve();                                                                   // [0x602e290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaAddAimingTickWhenAngleSmallerThan_Cos
	// float GetUaAddAimingTickWhenAngleSmallerThan_Cos();                                                                      // [0x602e268] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetUaAddAimingTickWhenAngleSmallerThan
	// float GetUaAddAimingTickWhenAngleSmallerThan();                                                                          // [0x602e240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetTimeCoefIfMove
	// float GetTimeCoefIfMove();                                                                                               // [0x602dd04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetShootToChangeRndPartDelta
	// float GetShootToChangeRndPartDelta();                                                                                    // [0x602dcdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetReclcZDist
	// float GetReclcZDist();                                                                                                   // [0x602dcb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetRecalcSqrDist
	// float GetRecalcSqrDist();                                                                                                // [0x602dc8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetRecalcMustTimeMin
	// int32_t GetRecalcMustTimeMin();                                                                                          // [0x602dc68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetRecalcMustTimeMax
	// int32_t GetRecalcMustTimeMax();                                                                                          // [0x602dc44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetRecalcDist
	// float GetRecalcDist();                                                                                                   // [0x602dc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetMinTimeDiscardAimSec
	// float GetMinTimeDiscardAimSec();                                                                                         // [0x602dbf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetMaxTimeDiscardAimSec
	// float GetMaxTimeDiscardAimSec();                                                                                         // [0x602dbcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetMaxAimTime
	// float GetMaxAimTime();                                                                                                   // [0x602dba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetIsFilterNotSeenPartToAiming
	// bool GetIsFilterNotSeenPartToAiming();                                                                                   // [0x602db4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetFirstContactAddSec
	// float GetFirstContactAddSec();                                                                                           // [0x602db24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetFirstContactAddChance100
	// float GetFirstContactAddChance100();                                                                                     // [0x602dafc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetDamageToDiscardAim0100
	// float GetDamageToDiscardAim0100();                                                                                       // [0x602dad4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetAnyPartShootTime
	// float GetAnyPartShootTime();                                                                                             // [0x602daac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimingTypeWeightInRuntime
	// float GetAimingTypeWeightInRuntime(EAIBodyBulkType InBulkType, bool bIsForPlayer);                                       // [0x602d9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimingBulks
	// TArray<FAIBodyBulkAimingChoice> GetAimingBulks(bool bIsForPlayer);                                                       // [0x602d8fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.GetAimingBodyPartTrend
	// EAIAimingBodyPartTrend GetAimingBodyPartTrend();                                                                         // [0x602d8d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Aiming.AddAimingTypeInRuntime
	// void AddAimingTypeInRuntime(EAIBodyBulkType InBulkType, float InWeight, bool bIsForPlayer);                              // [0x602d798] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.AIPropertyAITypeProfile
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAIPropertyAITypeProfile : public UNPCAIPropertyProfile
{ 
public:
	SDK_UNDEFINED(1,1583) /* ENPCAIJobType */          __um(AIJobType);                                            // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_AIType
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIPropertyComponent_AIType : public UNPCAIPropertyComponent
{ 
public:
	class UNPCAIModifierComponent_AIType*              Modifier_AIType;                                            // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_AIType.InitModifierComponents
	// bool InitModifierComponents();                                                                                           // [0x602fe58] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_AIType.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_AIType.GetAIMainType
	// EAIMainType GetAIMainType();                                                                                             // [0x602ec68] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_AIType.GetAIJobType
	// ENPCAIJobType GetAIJobType();                                                                                            // [0x602ec14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.AIPropertyBlockProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIPropertyBlockProfile : public UNPCAIPropertyProfile
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Block
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Block : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Block.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Block.GetAimTimeAfterTurn
	// float GetAimTimeAfterTurn(float Angle);                                                                                  // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyBossProfile
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAIPropertyBossProfile : public UNPCAIPropertyProfile
{ 
public:
	bool                                               ThreatenShootEnable;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              ThreatenShootDist;                                          // 0x003C   (0x0004)  
	float                                              ThreatenShootTime;                                          // 0x0040   (0x0004)  
	float                                              ThreatenShootCloseDist;                                     // 0x0044   (0x0004)  
	float                                              ThreatenShootEndDist;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Boss
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Boss : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Boss.IsThreatenShootEnable
	// bool IsThreatenShootEnable();                                                                                            // [0x602ff4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootTime
	// float GetThreatenShootTime();                                                                                            // [0x602fc1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootEndDist
	// float GetThreatenShootEndDist();                                                                                         // [0x602fbf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootDist
	// float GetThreatenShootDist();                                                                                            // [0x602fbcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Boss.GetThreatenShootCloseDist
	// float GetThreatenShootCloseDist();                                                                                       // [0x602fba4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Boss.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyCoreProfile
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UAIPropertyCoreProfile : public UNPCAIPropertyProfile
{ 
public:
	float                                              AccuratySpeed;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Core
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Core : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Core.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyCurveProfile
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UAIPropertyCurveProfile : public UNPCAIPropertyProfile
{ 
public:
	class UCurveFloat*                                 SightCurveDaytime;                                          // 0x0038   (0x0008)  
	class UCurveFloat*                                 SightCureOutLight;                                          // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.AIPropertyCurveProfile.GetSightCurveDaytime
	// class UCurveFloat* GetSightCurveDaytime();                                                                               // [0x602fa74] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.AIPropertyCurveProfile.GetSightCureOutLight
	// class UCurveFloat* GetSightCureOutLight();                                                                               // [0x602fa2c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Curve
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Curve : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Curve.GetSightCurveDaytime
	// class UCurveFloat* GetSightCurveDaytime();                                                                               // [0x602fa98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Curve.GetSightCureOutLight
	// class UCurveFloat* GetSightCureOutLight();                                                                               // [0x602fa50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Curve.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyDamageProfile
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UAIPropertyDamageProfile : public UNPCAIPropertyProfile
{ 
public:
	float                                              DamageScale;                                                // 0x0038   (0x0004)  
	float                                              ArmorDamageScale;                                           // 0x003C   (0x0004)  
	float                                              BulletArmorPenetrationNotHurt;                              // 0x0040   (0x0004)  
	bool                                               EnabledTeamGrenadeHarm;                                     // 0x0044   (0x0001)  
	bool                                               EnabledFactionGrenadeHarm;                                  // 0x0045   (0x0001)  
	bool                                               bDamageLimitEnabledForAI;                                   // 0x0046   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0047   (0x0001)  MISSED
	int32_t                                            DamageLimit;                                                // 0x0048   (0x0004)  
	float                                              DamageLimitTime;                                            // 0x004C   (0x0004)  
	float                                              DamageLimitPercentage;                                      // 0x0050   (0x0004)  
	float                                              DamageNoZeroHPValue;                                        // 0x0054   (0x0004)  
	SDK_UNDEFINED(16,1584) /* TArray<EAIBodyPartType> */ __um(DamageNoZeroHPParts);                                // 0x0058   (0x0010)  
	float                                              DamageBleedExtraProbability;                                // 0x0068   (0x0004)  
	bool                                               KillAlwaysDBNO;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              DBNODamageScale;                                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Damage
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIPropertyComponent_Damage : public UNPCAIPropertyComponent
{ 
public:
	bool                                               DamageLimitEnabledForAIModifier;                            // 0x0038   (0x0001)  
	bool                                               DamageLimitEnabledForAIModifierFlag;                        // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x003A   (0x0006)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageScale
	// void SetDamageScale(float Value);                                                                                        // [0x60301e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.SetDamageLimitEnabledForAI
	// void SetDamageLimitEnabledForAI(bool InValue);                                                                           // [0x6030150] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.SetArmorDamageScale
	// void SetArmorDamageScale(float Value);                                                                                   // [0x602ffdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.IsInDamageNoZeroHPPart
	// bool IsInDamageNoZeroHPPart(EAIBodyPartType& BodyPart);                                                                  // [0x602fea0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.IsDamageLimitEnabledForAI
	// bool IsDamageLimitEnabledForAI();                                                                                        // [0x602fe7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetTeamGrenadeHarmEnable
	// bool GetTeamGrenadeHarmEnable();                                                                                         // [0x602fb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetIsKillAlwaysDBNO
	// bool GetIsKillAlwaysDBNO();                                                                                              // [0x602f0b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetFactionGrenadeHarmEnable
	// bool GetFactionGrenadeHarmEnable();                                                                                      // [0x602ef54] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetDBNODamageScale
	// float GetDBNODamageScale();                                                                                              // [0x602edf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageScale
	// float GetDamageScale();                                                                                                  // [0x602eedc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageNoZeroHPValue
	// float GetDamageNoZeroHPValue();                                                                                          // [0x602eeb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageLimitTime
	// float GetDamageLimitTime();                                                                                              // [0x602ee8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageLimitPercentage
	// float GetDamageLimitPercentage();                                                                                        // [0x602ee64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageLimit
	// int32_t GetDamageLimit();                                                                                                // [0x602ee40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetDamageBleedExtraProbability
	// float GetDamageBleedExtraProbability();                                                                                  // [0x602ee18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetBulletArmorPenetrationNotHurt
	// float GetBulletArmorPenetrationNotHurt();                                                                                // [0x602ecd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetArmorDamageScale
	// float GetArmorDamageScale();                                                                                             // [0x602ec8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Damage.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyGlobalProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIPropertyGlobalProfile : public UNPCAIPropertyProfile
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Global
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Global : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Global.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyGrenadeProfile
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAIPropertyGrenadeProfile : public UNPCAIPropertyProfile
{ 
public:
	FVector                                            UA_THROW_POSITION_OFFSET_STAND;                             // 0x0038   (0x000C)  
	FVector                                            UA_THROW_POSITION_OFFSET_STAND_LLEAN;                       // 0x0044   (0x000C)  
	FVector                                            UA_THROW_POSITION_OFFSET_STAND_RLEAN;                       // 0x0050   (0x000C)  
	FVector                                            UA_THROW_POSITION_OFFSET_CROUCH;                            // 0x005C   (0x000C)  
	FVector                                            UA_THROW_POSITION_OFFSET_CROUCH_LLEAN;                      // 0x0068   (0x000C)  
	FVector                                            UA_THROW_POSITION_OFFSET_CROUCH_RLEAN;                      // 0x0074   (0x000C)  
	FVector                                            UA_THROW_POSITION_OFFSET_PRONE;                             // 0x0080   (0x000C)  
	float                                              EXTRA_PROJECTILE_PLAY_EFFECT_TIME;                          // 0x008C   (0x0004)  
	float                                              CLOSE_GRENADE_HIT_DISTANCE;                                 // 0x0090   (0x0004)  
	float                                              COMING_GRENADE_BE_KONW_IF_FALL_IN_DISTANCE;                 // 0x0094   (0x0004)  
	float                                              HOLDING_GRENADE_BE_KONW_IF_IN_DISTANCE;                     // 0x0098   (0x0004)  
	float                                              SELF_HOLDING_GRENADE_PROBABILITY;                           // 0x009C   (0x0004)  
	bool                                               NEVER_USE_UP_MASK;                                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FFloatRange                                        MASK_MIN_DURABILITY_PERCENT;                                // 0x00A4   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Grenade
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNPCAIPropertyComponent_Grenade : public UNPCAIPropertyComponent
{ 
public:
	float                                              MinMaskDurability;                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetUaThrowPositionOffsetByPosture
	// FVector GetUaThrowPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType, FRotator& Rotator);                    // [0x602fcfc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetUaThrowPositionOffset
	// FVector GetUaThrowPositionOffset(FRotator& Rotator);                                                                     // [0x602fc44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetSelfHoldingGrenadeProbability
	// float GetSelfHoldingGrenadeProbability();                                                                                // [0x602fa04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetMinMaskDurabilityPercent
	// float GetMinMaskDurabilityPercent();                                                                                     // [0x602f184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetHoldingGrenadeBeKonwIfInDistance
	// float GetHoldingGrenadeBeKonwIfInDistance();                                                                             // [0x602f090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetExtraProjectilePlayEffectTime
	// float GetExtraProjectilePlayEffectTime();                                                                                // [0x602ef2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetComingGrenadeBeKonwIfFallInDistance
	// float GetComingGrenadeBeKonwIfFallInDistance();                                                                          // [0x602edc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetCloseGrenadeHitDistance
	// float GetCloseGrenadeHitDistance();                                                                                      // [0x602ed28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Grenade.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyHealthProfile
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UAIPropertyHealthProfile : public UNPCAIPropertyProfile
{ 
public:
	float                                              HeadEnduranceMax;                                           // 0x0038   (0x0004)  
	float                                              ChestEnduranceMax;                                          // 0x003C   (0x0004)  
	float                                              StomachEnduranceMax;                                        // 0x0040   (0x0004)  
	float                                              LeftArmEnduranceMax;                                        // 0x0044   (0x0004)  
	float                                              RightArmEnduranceMax;                                       // 0x0048   (0x0004)  
	float                                              LeftLegEnduranceMax;                                        // 0x004C   (0x0004)  
	float                                              RightLegEnduranceMax;                                       // 0x0050   (0x0004)  
	float                                              MaxHealthAdjustment;                                        // 0x0054   (0x0004)  
	bool                                               bEnableDBNO;                                                // 0x0058   (0x0001)  
	bool                                               bEnableBroaderDBNO;                                         // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x005A   (0x0002)  MISSED
	float                                              DangerCoefOfDBNO;                                           // 0x005C   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Health
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Health : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.SetEnableDBNO
	// void SetEnableDBNO(bool InEnabled);                                                                                      // [0x603029c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetStomachEnduranceMax
	// float GetStomachEnduranceMax();                                                                                          // [0x602fabc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetRightLegEnduranceMax
	// float GetRightLegEnduranceMax();                                                                                         // [0x602f9dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetRightArmEnduranceMax
	// float GetRightArmEnduranceMax();                                                                                         // [0x602f9b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetMaxHealthAdjustment
	// float GetMaxHealthAdjustment();                                                                                          // [0x602f15c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetLeftLegEnduranceMax
	// float GetLeftLegEnduranceMax();                                                                                          // [0x602f134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetLeftArmEnduranceMax
	// float GetLeftArmEnduranceMax();                                                                                          // [0x602f10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetHeadEnduranceMax
	// float GetHeadEnduranceMax();                                                                                             // [0x602f040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetDangerCoefOfDBNO
	// float GetDangerCoefOfDBNO();                                                                                             // [0x602ef04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetChestEnduranceMax
	// float GetChestEnduranceMax();                                                                                            // [0x602ed00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Health.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MFNPCAI.AIHearingNoisePower
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FAIHearingNoisePower
{ 
	float                                              NOISE_POWER_SPRINT;                                         // 0x0000   (0x0004)  
	float                                              NOISE_POWER_PRONE;                                          // 0x0004   (0x0004)  
	float                                              NOISE_POWER_CROUCH;                                         // 0x0008   (0x0004)  
	float                                              NOISE_POWER_WALK;                                           // 0x000C   (0x0004)  
	float                                              NOISE_POWER_SLIENT_WALK;                                    // 0x0010   (0x0004)  
	float                                              NOISE_POWER_SLIENT_CROUCH;                                  // 0x0014   (0x0004)  
	float                                              NOISE_POWER_GUN_FIRE;                                       // 0x0018   (0x0004)  
	float                                              NOISE_POWER_SILENCED_FIRE;                                  // 0x001C   (0x0004)  
	float                                              NOISE_POWER_DOOR_OPEN;                                      // 0x0020   (0x0004)  
	float                                              NOISE_POWER_DOOR_WRECK;                                     // 0x0024   (0x0004)  
	float                                              NOISE_POWER_GRENADE_EXPLOSIVE;                              // 0x0028   (0x0004)  
	float                                              NOISE_POWER_FOOT_STEP_SOUNDER;                              // 0x002C   (0x0004)  
};

/// Class /Script/MFNPCAI.AIPropertyHearingProfile
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAIPropertyHearingProfile : public UNPCAIPropertyProfile
{ 
public:
	bool                                               AUTO_BE_ENEMY_IF_CREATE_DANAGE_NOISE;                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              NOISE_POWER_SPRINT;                                         // 0x003C   (0x0004)  
	float                                              NOISE_POWER_PRONE;                                          // 0x0040   (0x0004)  
	float                                              NOISE_POWER_CROUCH;                                         // 0x0044   (0x0004)  
	float                                              NOISE_POWER_WALK;                                           // 0x0048   (0x0004)  
	float                                              NOISE_POWER_SLIENT_WALK;                                    // 0x004C   (0x0004)  
	float                                              NOISE_POWER_SLIENT_CROUCH;                                  // 0x0050   (0x0004)  
	float                                              NOISE_POWER_GUN_FIRE;                                       // 0x0054   (0x0004)  
	float                                              NOISE_POWER_SILENCED_FIRE;                                  // 0x0058   (0x0004)  
	float                                              NOISE_POWER_DOOR_OPEN;                                      // 0x005C   (0x0004)  
	float                                              NOISE_POWER_DOOR_WRECK;                                     // 0x0060   (0x0004)  
	float                                              NOISE_POWER_GRENADE_EXPLOSIVE;                              // 0x0064   (0x0004)  
	float                                              NOISE_POWER_FOOT_STEP_SOUNDER;                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	SDK_UNDEFINED(80,1585) /* TMap<EWeatherType, FAIHearingNoisePower> */ __um(NoisePowerByWeather);               // 0x0070   (0x0050)  
	float                                              POWER_DANGER;                                               // 0x00C0   (0x0004)  
	float                                              HEARING_POWER_COEF;                                         // 0x00C4   (0x0004)  
	float                                              FOOT_STEP_FAR_DIST;                                         // 0x00C8   (0x0004)  
	float                                              GUN_FAR_DIST;                                               // 0x00CC   (0x0004)  
	float                                              GUN_HIT_CLOSE_DIST;                                         // 0x00D0   (0x0004)  
	float                                              GUN_BULLET_TRACK_FROM_ME_RADIUS;                            // 0x00D4   (0x0004)  
	float                                              GUN_BULLET_TRACK_CHECK_IN_FIRE_DISTANCE;                    // 0x00D8   (0x0004)  
	float                                              COEF_FOOTSTEP_SUSPECTED_POINT_OFFSET;                       // 0x00DC   (0x0004)  
	float                                              COEF_GUN_SUSPECTED_POINT_OFFSET;                            // 0x00E0   (0x0004)  
	float                                              COEF_SILENT_GUN_SUSPECTED_POINT_OFFSET;                     // 0x00E4   (0x0004)  
	float                                              SUSPECTED_POINT_ACCURACY_INCREASE_GAP_TIME;                 // 0x00E8   (0x0004)  
	float                                              SUSPECTED_POINT_ACCURACY_DAMPING_GAP_TIME;                  // 0x00EC   (0x0004)  
	int32_t                                            SUSPECTED_POINT_ACCURACY_MAX_NUM;                           // 0x00F0   (0x0004)  
	float                                              SUSPECTED_POINT_POS_UPDATE_INTERVAL;                        // 0x00F4   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Hearing
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Hearing : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.SetAutoBeEnemyIfCreateDanageNoise
	// void SetAutoBeEnemyIfCreateDanageNoise(bool bCanAutoBeEnemy);                                                            // [0x6030090] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointPosUpdateInterval
	// float GetSuspectedPointPosUpdateInterval();                                                                              // [0x602fb58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointAccuracyMaxNum
	// int32_t GetSuspectedPointAccuracyMaxNum();                                                                               // [0x602fb34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointAccuracyIncreaseGapTime
	// float GetSuspectedPointAccuracyIncreaseGapTime();                                                                        // [0x602fb0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetSuspectedPointAccuracyDampingGapTime
	// float GetSuspectedPointAccuracyDampingGapTime();                                                                         // [0x602fae4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetPowerDanger
	// float GetPowerDanger();                                                                                                  // [0x602f98c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerWalk
	// float GetNoisePowerWalk(EWeatherType InWeatherType);                                                                     // [0x602f8e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSprint
	// float GetNoisePowerSprint(EWeatherType InWeatherType);                                                                   // [0x602f83c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSlientWalk
	// float GetNoisePowerSlientWalk(EWeatherType InWeatherType);                                                               // [0x602f794] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSlientCrouch
	// float GetNoisePowerSlientCrouch(EWeatherType InWeatherType);                                                             // [0x602f6ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerSilencedFire
	// float GetNoisePowerSilencedFire(EWeatherType InWeatherType);                                                             // [0x602f644] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerProne
	// float GetNoisePowerProne(EWeatherType InWeatherType);                                                                    // [0x602f59c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerGunFire
	// float GetNoisePowerGunFire(EWeatherType InWeatherType);                                                                  // [0x602f4f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerGrenadeExplosive
	// float GetNoisePowerGrenadeExplosive(EWeatherType InWeatherType);                                                         // [0x602f44c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerFootStepSounder
	// float GetNoisePowerFootStepSounder(EWeatherType InWeatherType);                                                          // [0x602f3a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerDoorWreck
	// float GetNoisePowerDoorWreck(EWeatherType InWeatherType);                                                                // [0x602f2fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerDoorOpen
	// float GetNoisePowerDoorOpen(EWeatherType InWeatherType);                                                                 // [0x602f254] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetNoisePowerCrouch
	// float GetNoisePowerCrouch(EWeatherType InWeatherType);                                                                   // [0x602f1ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetHearingPowerCoef
	// float GetHearingPowerCoef();                                                                                             // [0x602f068] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunHitCloseDist
	// float GetGunHitCloseDist();                                                                                              // [0x602f018] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunFarDist
	// float GetGunFarDist();                                                                                                   // [0x602eff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunBulletTrackFromMeRadius
	// float GetGunBulletTrackFromMeRadius();                                                                                   // [0x602efc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetGunBulletTrackCheckInFireDistance
	// float GetGunBulletTrackCheckInFireDistance();                                                                            // [0x602efa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetFootStepFarDist
	// float GetFootStepFarDist();                                                                                              // [0x602ef78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetCoefSilentGunSuspectedPointOffset
	// float GetCoefSilentGunSuspectedPointOffset();                                                                            // [0x602eda0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetCoefGunSuspectedPointOffset
	// float GetCoefGunSuspectedPointOffset();                                                                                  // [0x602ed78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetCoefFootStepSuspectedPointOffset
	// float GetCoefFootStepSuspectedPointOffset();                                                                             // [0x602ed50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetAutoBeEnemyIfCreateDanageNoise
	// bool GetAutoBeEnemyIfCreateDanageNoise();                                                                                // [0x602ecb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Hearing.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyLayProfile
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UAIPropertyLayProfile : public UNPCAIPropertyProfile
{ 
public:
	float                                              ProneCooldown;                                              // 0x0038   (0x0004)  
	float                                              EndProneCooldown;                                           // 0x003C   (0x0004)  
	float                                              StandUpCooldown;                                            // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Lay
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Lay : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Lay.GetDeltaLayCheck
	// float GetDeltaLayCheck();                                                                                                // [0x60304c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Lay.GetDeltaGetup
	// float GetDeltaGetup();                                                                                                   // [0x6030498] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Lay.GetDeltaAfterGetup
	// float GetDeltaAfterGetup();                                                                                              // [0x6030470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Lay.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MFNPCAI.AISenseSightNormal
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FAISenseSightNormal
{ 
	float                                              Angle;                                                      // 0x0000   (0x0004)  
	float                                              VisionRadius;                                               // 0x0004   (0x0004)  
	float                                              LostVisionRadius;                                           // 0x0008   (0x0004)  
	float                                              AngleCos;                                                   // 0x000C   (0x0004)  
	float                                              VisionRadiusSqr;                                            // 0x0010   (0x0004)  
	float                                              LostVisionRadiusSqr;                                        // 0x0014   (0x0004)  
};

/// Class /Script/MFNPCAI.AIPropertyLookProfile
/// Size: 0x0158 (344 bytes) (0x000038 - 0x000158) align 8 MaxSize: 0x0158
class UAIPropertyLookProfile : public UNPCAIPropertyProfile
{ 
public:
	SDK_UNDEFINED(1,1586) /* ENPCAIPriority */         __um(SIGHT_PRIORITY);                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FAISenseSightNormal>                        VISION_NORMAL;                                              // 0x0040   (0x0010)  
	float                                              VISIBLE_ANG_NORMAL;                                         // 0x0050   (0x0004)  
	float                                              NORMAL_VISION_RADIUS;                                       // 0x0054   (0x0004)  
	float                                              NORMAL_VISION_RADIUS_LOST;                                  // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1587) /* TArray<EWeatherType> */  __um(WEATHER_WITH_IMPAIRED_VISION);                         // 0x0060   (0x0010)  
	class UCurveVector*                                FOG_VISION_CURVE;                                           // 0x0070   (0x0008)  
	float                                              FOG_DELAY_SEE_TIME_MAX;                                     // 0x0078   (0x0004)  
	float                                              FOG_SHOT_IN_TIME_CAN_IGNORE_FOGVISION;                      // 0x007C   (0x0004)  
	float                                              SMOKE_SIGHT_IGNORE_DISTANCE;                                // 0x0080   (0x0004)  
	float                                              GRASS_SIGHT_IGNORE_DISTANCE;                                // 0x0084   (0x0004)  
	float                                              LANDSCAPE_GRASS_SIGHT_IGNORE_ANGLE;                         // 0x0088   (0x0004)  
	float                                              GRASS_SIGHT_BLOCK_POWER;                                    // 0x008C   (0x0004)  
	float                                              GRASS_SIGHT_BLOCK_DENSITY100;                               // 0x0090   (0x0004)  
	float                                              RAINY_SIGHT_RADIUS_MIN;                                     // 0x0094   (0x0004)  
	float                                              RAINY_SIGHT_RADIUS_MAX;                                     // 0x0098   (0x0004)  
	float                                              INGORE_NOLIGHT_RADIUS;                                      // 0x009C   (0x0004)  
	float                                              DIST_NORMAL_SUSPECTED_POINT_INTERVAL;                       // 0x00A0   (0x0004)  
	float                                              DIST_DANGER_SUSPECTED_POINT_INTERVAL;                       // 0x00A4   (0x0004)  
	float                                              FAR_DISTANCE;                                               // 0x00A8   (0x0004)  
	float                                              MIDDLE_DIST;                                                // 0x00AC   (0x0004)  
	float                                              CLOSE_DIST;                                                 // 0x00B0   (0x0004)  
	float                                              InvisibleDelayTime;                                         // 0x00B4   (0x0004)  
	float                                              GOAL_NEED_TO_CALCULATE_FIRST_APPEAR_DISTANCE;               // 0x00B8   (0x0004)  
	float                                              GOAL_FIRST_APPEAR_CALCULATE_COEF;                           // 0x00BC   (0x0004)  
	float                                              GOAL_FIRST_APPEAR_ANGLE_CALCULATE_COEF;                     // 0x00C0   (0x0004)  
	float                                              GOAL_FIRST_APPEAR_MIN_TIME;                                 // 0x00C4   (0x0004)  
	float                                              GOAL_FIRST_APPEAR_MAX_TIME;                                 // 0x00C8   (0x0004)  
	float                                              TIME_CAN_SEE_ENEMY_IF_BEEN_SHOOT;                           // 0x00CC   (0x0004)  
	float                                              TIME_CAN_SEE_ENEMY_IF_FLASH_LIGHT;                          // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class UCurveFloat*                                 FLASH_LIGHT_BURN_LOSS_SIGHT_CURVE;                          // 0x00D8   (0x0008)  
	float                                              WEAKEN_VISION_RADIUS_SCALE_WHILE_ROTATE;                    // 0x00E0   (0x0004)  
	float                                              WEAKEN_VISION_RADIUS_SCALE_MAX_WHILE_ROTATE;                // 0x00E4   (0x0004)  
	float                                              RECOVER_VISION_RADIUS_SPEED_AFTER_WEAKEN;                   // 0x00E8   (0x0004)  
	float                                              DISTANCE_CHECK_IF_OUTSIDE_SIGHT_PIE;                        // 0x00EC   (0x0004)  
	float                                              TIME_CREATE_SUSPECTED_POINT_CHECK_IF_OUTSIDE_SIGHT_PIE;     // 0x00F0   (0x0004)  
	float                                              INTERVAL_CHECK_IF_OUTSIDE_SIGHT_PIE;                        // 0x00F4   (0x0004)  
	FVector                                            LOOK_POSITION_OFFSET_STAND;                                 // 0x00F8   (0x000C)  
	FVector                                            LOOK_POSITION_OFFSET_STAND_LLEAN;                           // 0x0104   (0x000C)  
	FVector                                            LOOK_POSITION_OFFSET_STAND_RLEAN;                           // 0x0110   (0x000C)  
	FVector                                            LOOK_POSITION_OFFSET_CROUCH;                                // 0x011C   (0x000C)  
	FVector                                            LOOK_POSITION_OFFSET_CROUCH_LLEAN;                          // 0x0128   (0x000C)  
	FVector                                            LOOK_POSITION_OFFSET_CROUCH_RLEAN;                          // 0x0134   (0x000C)  
	FVector                                            LOOK_POSITION_OFFSET_PRONE;                                 // 0x0140   (0x000C)  
	FVector                                            LEAN_CHECK_BLOCK_WALL_OFFSET;                               // 0x014C   (0x000C)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Look
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Look : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetWeakenVisionRadiusScaleWhileRotate
	// float GetWeakenVisionRadiusScaleWhileRotate();                                                                           // [0x603110c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetWeakenVisionRadiusScaleMaxWhileRotate
	// float GetWeakenVisionRadiusScaleMaxWhileRotate();                                                                        // [0x60310e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetVisibleAngNormal
	// float GetVisibleAngNormal();                                                                                             // [0x60310bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetVisibleAngCosNormal
	// float GetVisibleAngCosNormal(float DistanceSqr, bool bLastInSight);                                                      // [0x6030fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetTimeCreateSuspectedPointCheckIfOutSideSightPIE
	// float GetTimeCreateSuspectedPointCheckIfOutSideSightPIE();                                                               // [0x6030ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetTimeCanSeeEnemyIfFlashLight
	// float GetTimeCanSeeEnemyIfFlashLight();                                                                                  // [0x6030ea8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetTimeCanSeeEnemyIfBeenShoot
	// float GetTimeCanSeeEnemyIfBeenShoot();                                                                                   // [0x6030e80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetSmokeSightIgnoreDistance
	// float GetSmokeSightIgnoreDistance();                                                                                     // [0x6030e58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetSightPriority
	// ENPCAIPriority GetSightPriority();                                                                                       // [0x6030e34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetRecoverVisionRadiusSpeedAfterWeaken
	// float GetRecoverVisionRadiusSpeedAfterWeaken();                                                                          // [0x6030d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetRainySightRadiusMin
	// float GetRainySightRadiusMin();                                                                                          // [0x6030d44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetRainySightRadiusMax
	// float GetRainySightRadiusMax();                                                                                          // [0x6030d1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetNormalVisionRadiusLost
	// float GetNormalVisionRadiusLost();                                                                                       // [0x6030cec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetNormalVisionRadius
	// float GetNormalVisionRadius();                                                                                           // [0x6030cc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetMiddleDistance
	// float GetMiddleDistance();                                                                                               // [0x6030c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetLostSightRatioByFlashLightBurn
	// float GetLostSightRatioByFlashLightBurn(float FlashBurnValue);                                                           // [0x6030b54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetLookPositionOffsetByPosture
	// FVector GetLookPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType);                                          // [0x6030a48] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetLookPositionOffset
	// FVector GetLookPositionOffset();                                                                                         // [0x6030a14] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetLeanCheckBlockWallOffset
	// FVector GetLeanCheckBlockWallOffset();                                                                                   // [0x60309e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetLandscapeGrassSightIgnoreAngle
	// float GetLandscapeGrassSightIgnoreAngle();                                                                               // [0x60309b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetIntervalCheckIfOutSideSightPIE
	// float GetIntervalCheckIfOutSideSightPIE();                                                                               // [0x60308dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetIngoreNolightRadius
	// float GetIngoreNolightRadius();                                                                                          // [0x60308b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGrassSightIgnoreDistance
	// float GetGrassSightIgnoreDistance();                                                                                     // [0x6030864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGrassSightBlockPowner
	// float GetGrassSightBlockPowner();                                                                                        // [0x603083c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGrassSightBlockDensity100
	// float GetGrassSightBlockDensity100();                                                                                    // [0x6030814] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGoalToFullDissapear
	// float GetGoalToFullDissapear();                                                                                          // [0x60307ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGoalNeedToCalculateFirstAppearDistance
	// float GetGoalNeedToCalculateFirstAppearDistance();                                                                       // [0x60307c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearMinTime
	// float GetGoalFirstAppearMinTime();                                                                                       // [0x603079c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearMaxTime
	// float GetGoalFirstAppearMaxTime();                                                                                       // [0x6030774] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearCalculateCoef
	// float GetGoalFirstAppearCalculateCoef();                                                                                 // [0x603074c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetGoalFirstAppearAngleCalculateCoef
	// float GetGoalFirstAppearAngleCalculateCoef();                                                                            // [0x6030724] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetFogVisionInfo
	// void GetFogVisionInfo(EWeatherType InWeatherType, float& OutFogMin, float& OutFogMax);                                   // [0x60305d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetFogShotInTimeCanIgnoreFogVision
	// float GetFogShotInTimeCanIgnoreFogVision();                                                                              // [0x60305b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetFogDelayTimeToSeeMax
	// float GetFogDelayTimeToSeeMax();                                                                                         // [0x6030588] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetFarDistance
	// float GetFarDistance();                                                                                                  // [0x6030560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetDistNormalSuspectedPointInterval
	// float GetDistNormalSuspectedPointInterval();                                                                             // [0x6030510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetDistDangerSuspectedPointInterval
	// float GetDistDangerSuspectedPointInterval();                                                                             // [0x60304e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetDistanceCheckIfOutSideSightPIE
	// float GetDistanceCheckIfOutSideSightPIE();                                                                               // [0x6030538] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetCloseDistance
	// float GetCloseDistance();                                                                                                // [0x6030448] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Look.DoesWeatherImpairVision
	// bool DoesWeatherImpairVision(EWeatherType InWeatherType);                                                                // [0x6030350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/MFNPCAI.AIMindGoalEnemyAngleMultiple
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAIMindGoalEnemyAngleMultiple
{ 
	float                                              Angle;                                                      // 0x0000   (0x0004)  
	float                                              ScoreMultiple;                                              // 0x0004   (0x0004)  
	float                                              AngleCos;                                                   // 0x0008   (0x0004)  
};

/// Class /Script/MFNPCAI.AIPropertyMindProfile
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAIPropertyMindProfile : public UNPCAIPropertyProfile
{ 
public:
	SDK_UNDEFINED(1,1588) /* ENPCAIPriority */         __um(CALCULATE_GOAL_ENEMY_PRIORITY_INTERVAL);               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              HATRED_VALUE_TO_DIST;                                       // 0x003C   (0x0004)  
	float                                              SCORE_TO_DISTANCE_FOR_GOAL_ENEMY;                           // 0x0040   (0x0004)  
	float                                              TIME_OF_HIT_FOR_GOAL_ENEMY;                                 // 0x0044   (0x0004)  
	float                                              SCORE_CUT_OF_HIT_ME_FOR_GOAL_ENEMY;                         // 0x0048   (0x0004)  
	float                                              SCORE_CUT_OF_HIT_ALLY_FOR_GOAL_ENEMY;                       // 0x004C   (0x0004)  
	float                                              SCORE_CUT_OF_ZOOM_WEAPON_FOR_GOAL_ENEMY;                    // 0x0050   (0x0004)  
	float                                              CARE_TARGET_HAS_ZOOM_WEAPON_DSITANCE;                       // 0x0054   (0x0004)  
	TArray<FAIMindGoalEnemyAngleMultiple>              SCORE_MULTIPLE_FACE_ANGLE_FOR_GOAL_ENEMY;                   // 0x0058   (0x0010)  
	float                                              TIME_NOT_SEE_FOR_GOAL_ENEMY;                                // 0x0068   (0x0004)  
	float                                              TIME_TO_FORGOR_ABOUT_ENEMY_SEC;                             // 0x006C   (0x0004)  
	float                                              TIME_ENEMY_DEAD_PASS_CAN_CONFIRM;                           // 0x0070   (0x0004)  
	float                                              TIME_ENEMY_DEAD_PASS_CAN_DELETE;                            // 0x0074   (0x0004)  
	int32_t                                            ITEM_CHEAP_PRICE_CAN_DESTORY_WHEN_PICKUP;                   // 0x0078   (0x0004)  
	int32_t                                            ITEM_PICKUP_PRICE_THRESHOLD;                                // 0x007C   (0x0004)  
	int32_t                                            ITEM_PICKUP_PRICE_MAX;                                      // 0x0080   (0x0004)  
	int32_t                                            ITEM_PICKUP_RARITY_MIN;                                     // 0x0084   (0x0004)  
	int32_t                                            ITEM_PICKUP_PER_CONTAINER_MAX;                              // 0x0088   (0x0004)  
	float                                              NO_REPEAT_QRE_MYSELF_AT_DISTANCE;                           // 0x008C   (0x0004)  
	float                                              NO_REPEAT_QRE_ENEMY_AT_DISTANCE;                            // 0x0090   (0x0004)  
	int32_t                                            MOUSE_PIN_LIMIT_NUM;                                        // 0x0094   (0x0004)  
	float                                              MOUSE_PIN_LIFE_TIME;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1589) /* TArray<EAIMainType> */   __um(IgnoreAIEnemyTypes);                                   // 0x00A0   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Mind
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Mind : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.ShouldIgnoreAsEnemy
	// bool ShouldIgnoreAsEnemy(class ACharacter* InCharacter);                                                                 // [0x6031134] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeToForgorAboutEnemySec
	// float GetTimeToForgorAboutEnemySec();                                                                                    // [0x6030f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeOfHitForGoalEnemy
	// float GetTimeOfHitForGoalEnemy();                                                                                        // [0x6030f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeNotSeeForGoalEnemy
	// float GetTimeNotSeeForGoalEnemy();                                                                                       // [0x6030f48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeEnemyDeadPassCanDelete
	// float GetTimeEnemyDeadPassCanDelete();                                                                                   // [0x6030f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetTimeEnemyDeadPassCanConfirm
	// float GetTimeEnemyDeadPassCanConfirm();                                                                                  // [0x6030ef8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreToDistanceForGoalEnemy
	// float GetScoreToDistanceForGoalEnemy();                                                                                  // [0x6030e0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreCutOfZoomWeaponForGoalEnemy
	// float GetScoreCutOfZoomWeaponForGoalEnemy();                                                                             // [0x6030de4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreCutOfHitMeForGoalEnemy
	// float GetScoreCutOfHitMeForGoalEnemy();                                                                                  // [0x6030dbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetScoreCutOfHitAllyForGoalEnemy
	// float GetScoreCutOfHitAllyForGoalEnemy();                                                                                // [0x6030d94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetNoRepeatQREMyselfAtDistance
	// float GetNoRepeatQREMyselfAtDistance();                                                                                  // [0x6030c9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetNoRepeatQREEnemyAtDistance
	// float GetNoRepeatQREEnemyAtDistance();                                                                                   // [0x6030c74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetMousePinLimitNum
	// int32_t GetMousePinLimitNum();                                                                                           // [0x6030c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetMousePinLifeTime
	// float GetMousePinLifeTime();                                                                                             // [0x6030c28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetItemPickupRarityMin
	// int32_t GetItemPickupRarityMin();                                                                                        // [0x6030994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetItemPickupPriceThreshold
	// int32_t GetItemPickupPriceThreshold();                                                                                   // [0x6030970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetItemPickupPriceMax
	// int32_t GetItemPickupPriceMax();                                                                                         // [0x603094c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetItemPickupPerContainerMax
	// int32_t GetItemPickupPerContainerMax();                                                                                  // [0x6030928] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetItemCheapPriceCanDestoryWhenPickUp
	// int32_t GetItemCheapPriceCanDestoryWhenPickUp();                                                                         // [0x6030904] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetHatredValueToDist
	// float GetHatredValueToDist();                                                                                            // [0x603088c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetCareTargetHasZoomWeaponDistance
	// float GetCareTargetHasZoomWeaponDistance();                                                                              // [0x6030420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetCalculateGoalEnemyPriporityInterval
	// float GetCalculateGoalEnemyPriporityInterval();                                                                          // [0x60303f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Mind.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyMoveProfile
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UAIPropertyMoveProfile : public UNPCAIPropertyProfile
{ 
public:
	float                                              AcceptanceRadius;                                           // 0x0038   (0x0004)  
	float                                              AcceptanceRadiusZ;                                          // 0x003C   (0x0004)  
	float                                              MAX_SPRINT_DURATION;                                        // 0x0040   (0x0004)  
	float                                              MIN_REQUIRED_TIME_TO_SPRINT;                                // 0x0044   (0x0004)  
	float                                              MAX_REQUIRED_TIME_TO_RECOVER;                               // 0x0048   (0x0004)  
	float                                              RECOVER_POINT_PER_SECOND;                                   // 0x004C   (0x0004)  
	float                                              MIN_ROTATE_SPEED;                                           // 0x0050   (0x0004)  
	bool                                               ENABLED_USE_ROTATE_ANGLE_LIMIT;                             // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              MAX_ROTATE_ANGLE;                                           // 0x0058   (0x0004)  
	float                                              ROTATE_ANGLE_INTERVAL;                                      // 0x005C   (0x0004)  
	float                                              ROTATE_ANGLE_MIN_DEVIATION;                                 // 0x0060   (0x0004)  
	float                                              ROTATE_ANGLE_MAX_DEVIATION;                                 // 0x0064   (0x0004)  
	bool                                               ENABLED_QUICKLY_TURN_IN_PLACE;                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              CAN_MOVE_TEST_DISTANCE;                                     // 0x006C   (0x0004)  
	float                                              SOUND_DIFFUSION_LEVEL_FACTOR;                               // 0x0070   (0x0004)  
	float                                              SOUND_DIFFUSION_MAX_DISTANCE_FACTOR;                        // 0x0074   (0x0004)  
	float                                              WEAPON_SHOOTING_MOVING_SCALE;                               // 0x0078   (0x0004)  
	bool                                               ENABLE_AVOID_GUNLINE;                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              GUNLINE_EXPOSURE_COST_MULTIPLIER;                           // 0x0080   (0x0004)  
	float                                              MAX_GUNLINE_THREAT_DISTANCE;                                // 0x0084   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Move
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Move : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.IsEnabledQuicklyTurnInPlace
	// bool IsEnabledQuicklyTurnInPlace();                                                                                      // [0x6031b2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.IsEnableAvoidGunlinePathFinding
	// bool IsEnableAvoidGunlinePathFinding();                                                                                  // [0x6031ab4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetYApproximation
	// float GetYApproximation();                                                                                               // [0x6031a8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetWeaponShootingMovingScale
	// float GetWeaponShootingMovingScale();                                                                                    // [0x6031a64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetSoundDiffusionMaxDistanceFactor
	// float GetSoundDiffusionMaxDistanceFactor();                                                                              // [0x6031810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetSoundDiffusionLevelFactor
	// float GetSoundDiffusionLevelFactor();                                                                                    // [0x60317e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetRotateAngleMinDeviation
	// float GetRotateAngleMinDeviation();                                                                                      // [0x6031798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetRotateAngleMaxDeviation
	// float GetRotateAngleMaxDeviation();                                                                                      // [0x6031770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetRotateAngleInterval
	// float GetRotateAngleInterval();                                                                                          // [0x6031748] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetRecoverPointPerSecond
	// float GetRecoverPointPerSecond();                                                                                        // [0x6031720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetReachDist
	// float GetReachDist();                                                                                                    // [0x60316a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetMinRotateSpeed
	// float GetMinRotateSpeed();                                                                                               // [0x6031680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetMinRequiredTimeToSrpint
	// float GetMinRequiredTimeToSrpint();                                                                                      // [0x6031658] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetMaxSprintDuration
	// float GetMaxSprintDuration();                                                                                            // [0x6031630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetMaxRotateAngle
	// float GetMaxRotateAngle();                                                                                               // [0x6031608] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetMaxRequiredTimeToRecover
	// float GetMaxRequiredTimeToRecover();                                                                                     // [0x60315e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetMaxGunlineThreatDistance
	// float GetMaxGunlineThreatDistance();                                                                                     // [0x6031590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetGunlineExposureCostMultiplier
	// float GetGunlineExposureCostMultiplier();                                                                                // [0x6031484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetEnabledUseRotateAngleLimit
	// bool GetEnabledUseRotateAngleLimit();                                                                                    // [0x6031408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetCanMoveTestDistance
	// float GetCanMoveTestDistance();                                                                                          // [0x60312bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Move.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MFNPCAI.AIPropertyNavProfile_Clamp
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAIPropertyNavProfile_Clamp
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.AIPropertyNavProfile
/// Size: 0x0180 (384 bytes) (0x000038 - 0x000180) align 8 MaxSize: 0x0180
class UAIPropertyNavProfile : public UNPCAIPropertyProfile
{ 
public:
	bool                                               bEnableDiversity;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UClass*                                      DiversityNavQueryFilterClass;                               // 0x0040   (0x0008)  
	bool                                               bEnableNavLinkDiversity;                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(80,1590) /* TSet<ENavLinkType> */    __um(EnabledNavLinkTypes);                                  // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,1591) /* TMap<ENavLinkType, FAIPropertyNavProfile_Clamp> */ __um(NavLinkTypeCostScales);      // 0x00A0   (0x0050)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x00F0   (0x0050)  MISSED
	bool                                               bEnableDirectionDiversity;                                  // 0x0140   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0141   (0x0003)  MISSED
	FAIPropertyNavProfile_Clamp                        MaxValidRelAngle;                                           // 0x0144   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0150   (0x0004)  MISSED
	FAIPropertyNavProfile_Clamp                        PathSimilarAngle;                                           // 0x0154   (0x000C)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x0160   (0x0004)  MISSED
	FVector                                            PathSimilarDist;                                            // 0x0164   (0x000C)  
	FVector                                            LocMonitorExtent;                                           // 0x0170   (0x000C)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x017C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Nav
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Nav : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Nav.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyPlayerActionReactionProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIPropertyPlayerActionReactionProfile : public UNPCAIPropertyProfile
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_PlayerActionReaction
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_PlayerActionReaction : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_PlayerActionReaction.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyRequestRunProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIPropertyRequestRunProfile : public UNPCAIPropertyProfile
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_RequestRun
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_RequestRun : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_RequestRun.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyShootProfile
/// Size: 0x00E8 (232 bytes) (0x000038 - 0x0000E8) align 8 MaxSize: 0x00E8
class UAIPropertyShootProfile : public UNPCAIPropertyProfile
{ 
public:
	class UCurveFloat*                                 UA_Curve_ShootAccuracyByRecoil;                             // 0x0038   (0x0008)  
	float                                              RecoilRecoverTime;                                          // 0x0040   (0x0004)  
	float                                              RecoilRecoverTimeMax;                                       // 0x0044   (0x0004)  
	float                                              VerticalRecoilScale;                                        // 0x0048   (0x0004)  
	float                                              VerticalRecoilScaleMax;                                     // 0x004C   (0x0004)  
	float                                              UA_SHOOT_POSITION_ZOFFSET;                                  // 0x0050   (0x0004)  
	FVector                                            UA_SHOOT_POSITION_OFFSET_STAND;                             // 0x0054   (0x000C)  
	FVector                                            UA_SHOOT_POSITION_OFFSET_STAND_LLEAN;                       // 0x0060   (0x000C)  
	FVector                                            UA_SHOOT_POSITION_OFFSET_STAND_RLEAN;                       // 0x006C   (0x000C)  
	FVector                                            UA_SHOOT_POSITION_OFFSET_CROUCH;                            // 0x0078   (0x000C)  
	FVector                                            UA_SHOOT_POSITION_OFFSET_CROUCH_LLEAN;                      // 0x0084   (0x000C)  
	FVector                                            UA_SHOOT_POSITION_OFFSET_CROUCH_RLEAN;                      // 0x0090   (0x000C)  
	FVector                                            UA_SHOOT_POSITION_OFFSET_PRONE;                             // 0x009C   (0x000C)  
	float                                              HorizontalRecoilScale;                                      // 0x00A8   (0x0004)  
	int32_t                                            HORIZONT_RECOIL_STEP_SZIE_NUM;                              // 0x00AC   (0x0004)  
	bool                                               ENABLED_TRANSFTER_HIT_BETTER_PART;                          // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	int32_t                                            COUNT_IF_HIT_HEAD_TRANSFER_TO_OTHER;                        // 0x00B4   (0x0004)  
	int32_t                                            COUNT_IF_HIT_CHEST_TRANSFER_TO_OTHER;                       // 0x00B8   (0x0004)  
	float                                              INSTANT_BULLET_VAILD_DISTANCE;                              // 0x00BC   (0x0004)  
	float                                              TRY_LEAN_RAY_CHECK_DISTANCE;                                // 0x00C0   (0x0004)  
	float                                              TRY_LEAN_RAY_CHECK_DISTANCE_SQR;                            // 0x00C4   (0x0004)  
	float                                              STAND_SHOOT_Z_LOCATION;                                     // 0x00C8   (0x0004)  
	float                                              CROUCH_HEAD_TOP_Z_LOCATION;                                 // 0x00CC   (0x0004)  
	float                                              FACE_TO_TARGET_ANGLE_LIMIT_CAN_FIRE;                        // 0x00D0   (0x0004)  
	float                                              HIT_INTERVAL_RATE;                                          // 0x00D4   (0x0004)  
	int32_t                                            HIT_INTERVAL_INCREASE_BY_SHOOT;                             // 0x00D8   (0x0004)  
	int32_t                                            HIT_INTERVAL_COUNT_BASE;                                    // 0x00DC   (0x0004)  
	bool                                               ENABLED_HIT_INTERVAL_BY_GROUP;                              // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Shoot
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Shoot : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.SetHitIntervalRate
	// void SetHitIntervalRate(float Value);                                                                                    // [0x6031b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.IsEnabledHitIntervalByGroup
	// bool IsEnabledHitIntervalByGroup();                                                                                      // [0x6031b08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaShootPositionZOffset
	// float GetUaShootPositionZOffset();                                                                                       // [0x6031a3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaShootPositionOffsetByPosture
	// FVector GetUaShootPositionOffsetByPosture(EAIPose PoseType, EAILeanType LeanType);                                       // [0x6031930] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaShootPositionOffset
	// FVector GetUaShootPositionOffset();                                                                                      // [0x60318fc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaMaxRecoilTime
	// float GetUaMaxRecoilTime();                                                                                              // [0x60318d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetUaCurveShootAccuracyByRecoil
	// class UCurveFloat* GetUaCurveShootAccuracyByRecoil();                                                                    // [0x60318b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetTryLeanRayCheckDistanceSqr
	// float GetTryLeanRayCheckDistanceSqr();                                                                                   // [0x6031888] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetTryLeanRayCheckDistance
	// float GetTryLeanRayCheckDistance();                                                                                      // [0x6031860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetStandShootZLocation
	// float GetStandShootZLocation();                                                                                          // [0x6031838] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetRecoilTimeNormalize
	// float GetRecoilTimeNormalize();                                                                                          // [0x60316f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetRecoilPerMeter
	// float GetRecoilPerMeter();                                                                                               // [0x60316d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetMaxRecoilPerMeter
	// float GetMaxRecoilPerMeter();                                                                                            // [0x60315b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetInstantBulletVaildDistance
	// float GetInstantBulletVaildDistance();                                                                                   // [0x6031568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetHorizontRecoilStepSizeNum
	// int32_t GetHorizontRecoilStepSizeNum();                                                                                  // [0x6031544] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetHorizontRecoilCoef
	// float GetHorizontRecoilCoef();                                                                                           // [0x603151c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitIntervalRate
	// float GetHitIntervalRate();                                                                                              // [0x60314f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitIntervalIncreaseByShoot
	// int32_t GetHitIntervalIncreaseByShoot();                                                                                 // [0x60314d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetHitIntervalCountBase
	// int32_t GetHitIntervalCountBase();                                                                                       // [0x60314ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetFaceToTargetAngleLimitCanFire
	// float GetFaceToTargetAngleLimitCanFire();                                                                                // [0x603145c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetEnabledTransfterHitBetterPart
	// bool GetEnabledTransfterHitBetterPart();                                                                                 // [0x60313e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetCrouchHeadTopZLocation
	// float GetCrouchHeadTopZLocation();                                                                                       // [0x603132c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetCountIfHitHeadTransferToOther
	// int32_t GetCountIfHitHeadTransferToOther();                                                                              // [0x6031308] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetCountIfHitChestTransferToOther
	// int32_t GetCountIfHitChestTransferToOther();                                                                             // [0x60312e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Shoot.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertySmartProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIPropertySmartProfile : public UNPCAIPropertyProfile
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Smart
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Smart : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Smart.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertySoundProfile
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAIPropertySoundProfile : public UNPCAIPropertyProfile
{ 
public:
	class UDataTable*                                  DataTableOfAI;                                              // 0x0038   (0x0008)  
	float                                              SelfYellCD;                                                 // 0x0040   (0x0004)  
	float                                              AreaYellCD;                                                 // 0x0044   (0x0004)  
	float                                              AIVoiceRadius;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.AIPropertySoundProfile.GetDataTableOfAI
	// class UDataTable* GetDataTableOfAI();                                                                                    // [0x4ddff8c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Sound
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Sound : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Sound.GetSelfYellCD
	// float GetSelfYellCD();                                                                                                   // [0x60317c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Sound.GetDataTableOfAI
	// class UDataTable* GetDataTableOfAI();                                                                                    // [0x6031354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Sound.GetAreaYellCD
	// float GetAreaYellCD();                                                                                                   // [0x6031294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Sound.GetAIVoiceRadius
	// float GetAIVoiceRadius();                                                                                                // [0x603126c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Sound.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyStrategyProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIPropertyStrategyProfile : public UNPCAIPropertyProfile
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Strategy
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Strategy : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Strategy.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyTacticProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UAIPropertyTacticProfile : public UNPCAIPropertyProfile
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Tactic
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Tactic : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Tactic.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.AIPropertyWeaponProfile
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAIPropertyWeaponProfile : public UNPCAIPropertyProfile
{ 
public:
	float                                              WeaponBaseSpread;                                           // 0x0038   (0x0004)  
	float                                              WeaponBaseRecoil;                                           // 0x003C   (0x0004)  
	float                                              ReloadMinPercentage;                                        // 0x0040   (0x0004)  
	float                                              ReloadMaxPercentage;                                        // 0x0044   (0x0004)  
	float                                              MinFillBulletTime;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	int64_t                                            MeleeWeaponID;                                              // 0x0050   (0x0008)  
	FName                                              WeaponTorrBodyBoneName;                                     // 0x0058   (0x0008)  
	FVector                                            GunShieldPositionOffset_Stand;                              // 0x0060   (0x000C)  
	FVector                                            GunShieldPositionOffset_Crouch;                             // 0x006C   (0x000C)  
	FVector                                            GunShieldPositionOffset_Prone;                              // 0x0078   (0x000C)  
	FVector                                            GunShieldPositionOffset_LeftLean;                           // 0x0084   (0x000C)  
	FVector                                            GunShieldPositionOffset_RightLean;                          // 0x0090   (0x000C)  
	float                                              GunShieldSphereRadius;                                      // 0x009C   (0x0004)  
	float                                              GunShieldDistFromBody;                                      // 0x00A0   (0x0004)  
	float                                              ProbabilityFlashlightOn;                                    // 0x00A4   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAIPropertyComponent_Weapon
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIPropertyComponent_Weapon : public UNPCAIPropertyComponent
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetWeaponTorrBodyBoneName
	// FName GetWeaponTorrBodyBoneName();                                                                                       // [0x60373fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetWeaponBaseSpread
	// float GetWeaponBaseSpread();                                                                                             // [0x60373d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetWeaponBaseRecoil
	// float GetWeaponBaseRecoil();                                                                                             // [0x60373ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetReloadMinPercentage
	// float GetReloadMinPercentage();                                                                                          // [0x6036e84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetReloadMaxPercentage
	// float GetReloadMaxPercentage();                                                                                          // [0x6036e5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetProbabilityFlashlightOn
	// float GetProbabilityFlashlightOn();                                                                                      // [0x603698c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetMinFillBulletTime
	// float GetMinFillBulletTime();                                                                                            // [0x603679c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetMeleeWeaponID
	// int64_t GetMeleeWeaponID();                                                                                              // [0x603670c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetGunShieldSphereRadius
	// float GetGunShieldSphereRadius();                                                                                        // [0x6036178] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetGunShieldPositionOffset
	// FVector GetGunShieldPositionOffset(class ACharacter* Character, EAIPose AIPose, EAILeanType AILeanType);                 // [0x6036024] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetGunShieldDistFromBody
	// float GetGunShieldDistFromBody();                                                                                        // [0x6035ffc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAIPropertyComponent_Weapon.GetAIProfileType
	// EAIProfileType GetAIProfileType();                                                                                       // [0x490e100] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask
/// Size: 0x0078 (120 bytes) (0x000040 - 0x000078) align 8 MaxSize: 0x0078
class UNPCAIQueryRoundEnvironmentAsyncTask : public UNPCAIAsyncTaskBase
{ 
public:
	SDK_UNDEFINED(16,1592) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1593) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0050   (0x0010)  
	FVector                                            EnemyLocation;                                              // 0x0060   (0x000C)  
	float                                              LRDistance;                                                 // 0x006C   (0x0004)  
	float                                              FBDistance;                                                 // 0x0070   (0x0004)  
	bool                                               bCheckLRDefense;                                            // 0x0074   (0x0001)  
	bool                                               bCheckLRAttack;                                             // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0076   (0x0002)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask.ExecuteTask
	// void ExecuteTask();                                                                                                      // [0x156ee74] Native|Public        
	// Function /Script/MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask.CheckCanUseMemoryData
	// bool CheckCanUseMemoryData(class AActor* Pawn, FVector& EnemyLocation, FNPCAIQueryRoundEnvironmentResult& OutResult);    // [0x6033b74] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIQueryRoundEnvironmentAsyncTask.AIQueryRoundEnvironment
	// class UNPCAIQueryRoundEnvironmentAsyncTask* AIQueryRoundEnvironment(class AActor* Pawn, class AActor* EnemyPawn, float LRDistance, float FBDistance, bool bCheckLRDefense, bool bCheckLRAttack); // [0x6032b1c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.NPCAINavAreaBox
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FNPCAINavAreaBox
{ 
	FTransform                                         ActorTransform;                                             // 0x0000   (0x0030)  
	FBox                                               ReletiveBox;                                                // 0x0030   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIDynamicNavAreaData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAIDynamicNavAreaData
{ 
	TArray<FNPCAINavAreaBox>                           ReletiveBoxes;                                              // 0x0000   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCAIRecastNavMesh
/// Size: 0x0698 (1688 bytes) (0x0005E8 - 0x000698) align 8 MaxSize: 0x0698
class ANPCAIRecastNavMesh : public ARecastNavMesh
{ 
public:
	class ANPCAIHNavActor*                             HNavActor;                                                  // 0x05E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x05F0   (0x0008)  MISSED
	SDK_UNDEFINED(80,1594) /* TMap<TWeakObjectPtr<UObject*>, FNPCAIDynamicNavAreaData> */ __um(DynamicNavAreaDatas); // 0x05F8   (0x0050)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0648   (0x0050)  MISSED
};

/// Class /Script/MFNPCAI.NPCAIRecoilInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIRecoilInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.UpdatePressureWeaponPowerDirect
	// void UpdatePressureWeaponPowerDirect(float RecoverPowerZ, float RecoverPowerXY);                                         // [0x603e300] Native|Public        
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.UpdatePressureWeaponPower
	// void UpdatePressureWeaponPower(float HitRate, bool bNextHit);                                                            // [0x603e214] Native|Public        
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.SetExactAimingPoint
	// void SetExactAimingPoint(FVector& AimingPoint, float TurnTime);                                                          // [0x603ca7c] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.SetEnabledAIRecoilControl
	// void SetEnabledAIRecoilControl(bool Enabled);                                                                            // [0x603c9e0] Native|Public        
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.SetDimAimingPointContinual
	// void SetDimAimingPointContinual(FVector& DimAimingPoint, float TurnTime);                                                // [0x603c8ac] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.SetDimAimingPoint
	// void SetDimAimingPoint(FVector& DimAimingPoint, float TurnTime);                                                         // [0x603c778] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.Recoil
	// float Recoil(int32_t CurrentShotCount);                                                                                  // [0x603bb44] Native|Public        
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.LosingRecoil
	// void LosingRecoil(float DeltaTime);                                                                                      // [0x603a9b0] Native|Public        
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.IsInPressureWeapon
	// bool IsInPressureWeapon();                                                                                               // [0x60381a8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.GetRecoilRemainTime
	// float GetRecoilRemainTime();                                                                                             // [0x6036e34] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCAIRecoilInterface.GetRecoilOffset
	// FVector GetRecoilOffset();                                                                                               // [0x5e324b8] Native|Public|HasDefaults|Const 
};

/// Class /Script/MFNPCAI.NPCAIRLAgentComponentInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIRLAgentComponentInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIRLAgentComponentInterface.TestChangeRLMode
	// void TestChangeRLMode(char TragetRLMode);                                                                                // [0x603de44] Native|Public        
	// Function /Script/MFNPCAI.NPCAIRLAgentComponentInterface.IsAIRLActionReload
	// bool IsAIRLActionReload();                                                                                               // [0x5d83b74] Native|Public        
};

/// Class /Script/MFNPCAI.NPCAIRoleComponent
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
class UNPCAIRoleComponent : public UNPCAIActorComponent
{ 
public:
	TArray<class UNPCAIModifierProfile*>               PropertyProfiles;                                           // 0x0108   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCAIRoleModifierComponent
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIRoleModifierComponent : public UObject
{ 
public:
};

/// Struct /Script/MFNPCAI.NPCAIComingExplosionEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNPCAIComingExplosionEvent
{ 
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0000   (0x0004)  MISSED
	FVector                                            ExplosionLocation;                                          // 0x0004   (0x000C)  
	float                                              Damage;                                                     // 0x0010   (0x0004)  
	float                                              MaxRange;                                                   // 0x0014   (0x0004)  
	class AActor*                                      Instigator;                                                 // 0x0018   (0x0008)  
	FName                                              Tag;                                                        // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MFNPCAI.NPCAISense_ComingExplosion
/// Size: 0x00E8 (232 bytes) (0x000080 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNPCAISense_ComingExplosion : public UAISense
{ 
public:
	TArray<FNPCAIComingExplosionEvent>                 ExplosionEvents;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0090   (0x0058)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAISense_ComingExplosion.ReportComingExplosionEvent
	// void ReportComingExplosionEvent(class UObject* WorldContextObject, FVector NoiseLocation, float Damage, class AActor* Instigator, float MaxRange, FName Tag); // [0x603be6c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.NPCAIDamageEvent
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FNPCAIDamageEvent : FAIDamageEvent
{ 
};

/// Class /Script/MFNPCAI.NPCAISense_Damage
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UNPCAISense_Damage : public UAISense
{ 
public:
	TArray<FNPCAIDamageEvent>                          RegisteredEvents;                                           // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAISense_Damage.ReportDamageEvent
	// void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag); // [0x603c0a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISense_Damage.IsDamageStimulus
	// bool IsDamageStimulus(FAIStimulus& Stimulus);                                                                            // [0x60379ec] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.AINoiseMakerInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAINoiseMakerInfo
{ 
	float                                              lasttime_footstep;                                          // 0x0000   (0x0004)  
	float                                              lasttime_gunfire;                                           // 0x0004   (0x0004)  
	float                                              lasttime_bulletfire;                                        // 0x0008   (0x0004)  
	float                                              lasttime_bullethit;                                         // 0x000C   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAISense_Hearing
/// Size: 0x0140 (320 bytes) (0x0000E8 - 0x000140) align 8 MaxSize: 0x0140
class UNPCAISense_Hearing : public UAISense_Hearing
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00E8   (0x0008)  MISSED
	TMap<class AActor*, FAINoiseMakerInfo>             NoiseMakerMap;                                              // 0x00F0   (0x0050)  
};

/// Class /Script/MFNPCAI.NPCAISense_Sight
/// Size: 0x0198 (408 bytes) (0x000170 - 0x000198) align 8 MaxSize: 0x0198
class UNPCAISense_Sight : public UAISense_Sight
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0170   (0x0028)  MISSED
};

/// Class /Script/MFNPCAI.NPCAISenseConfig_ComingExplosion
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNPCAISenseConfig_ComingExplosion : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
	float                                              AwareRange;                                                 // 0x0050   (0x0004)  
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x0054   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCAISenseConfig_Damage
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
class UNPCAISenseConfig_Damage : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0048   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCAISenseConfig_Hearing
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
class UNPCAISenseConfig_Hearing : public UAISenseConfig_Hearing
{ 
public:
	bool                                               IsDebugHearingScope;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCAISenseConfig_Sight
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UNPCAISenseConfig_Sight : public UAISenseConfig_Sight
{ 
public:
	SDK_UNDEFINED(1,1595) /* ENPCAISenseChannel */     __um(AISightUseChannel);                                    // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,1596) /* ENPCAISenseChannel */     __um(WeaponUseChannel);                                     // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0072   (0x0006)  MISSED
};

/// Class /Script/MFNPCAI.NPCAISenseEvent_ComingExplosion
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UNPCAISenseEvent_ComingExplosion : public UAISenseEvent
{ 
public:
	FNPCAIComingExplosionEvent                         Event;                                                      // 0x0028   (0x0030)  
};

/// Class /Script/MFNPCAI.NPCAISenseEvent_Damage
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNPCAISenseEvent_Damage : public UAISenseEvent
{ 
public:
	FNPCAIDamageEvent                                  Event;                                                      // 0x0028   (0x0038)  
};

/// Class /Script/MFNPCAI.NPCAISenseSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAISenseSourceInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAISenseSourceInterface.GetAISenseSourceType
	// EAISenseSourceType GetAISenseSourceType();                                                                               // [0x5c5bd20] Native|Public        
};

/// Class /Script/MFNPCAI.NPCAISettingsComponent
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UNPCAISettingsComponent : public UActorComponent
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIStatics.VectorsIsClosed
	// bool VectorsIsClosed(FVector& A, FVector& B, float XYRange, float ZRange);                                               // [0x603ea20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.VectorClockwiseAngleR
	// float VectorClockwiseAngleR(FVector& A, FVector& B);                                                                     // [0x603e8bc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIStatics.VectorAngleR
	// float VectorAngleR(FVector& A, FVector& B, bool bDoNomalize);                                                            // [0x603e708] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIStatics.VectorAngleIsClockwise
	// bool VectorAngleIsClockwise(FVector& A, FVector& B);                                                                     // [0x603e5a4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIStatics.VectorAngleD
	// float VectorAngleD(FVector& A, FVector& B, bool bDoNomalize);                                                            // [0x603e3e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIStatics.UnProne
	// void UnProne(class ACharacter* AICharacter);                                                                             // [0x603dee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.UnCrouch
	// void UnCrouch(class ACharacter* AICharacter);                                                                            // [0x603dee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.TakeDamage
	// float TakeDamage(class AActor* Actor, float Damage, FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser); // [0x603d9a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.StopToTakeCover
	// void StopToTakeCover(class ACharacter* AICharacter);                                                                     // [0x603d6b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.StopMovementImmediately
	// void StopMovementImmediately(class ACharacter* AICharacter);                                                             // [0x603d624] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.StopActiveMovement
	// void StopActiveMovement(class ACharacter* AICharacter);                                                                  // [0x603d334] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.SortIntArraySelf
	// void SortIntArraySelf(TArray<int32_t>& InVal, bool bUpped);                                                              // [0x603d198] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.SortIntArrayCopy
	// void SortIntArrayCopy(TArray<int32_t>& InVal, TArray<int32_t>& out_ref, bool bUpped);                                    // [0x603cf58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.SortFloatArraySelf
	// void SortFloatArraySelf(TArray<float>& InVal, bool bUpped);                                                              // [0x603ce50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.SortFloatArrayCopy
	// void SortFloatArrayCopy(TArray<float>& InVal, TArray<float>& out_ref, bool bUpped);                                      // [0x603ccdc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.SetShootCountRnage
	// bool SetShootCountRnage(class ACharacter* AICharacter, int32_t MinRecalcCount, int32_t MaxRecalcCount);                  // [0x603cbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.SetCollisionByFBox
	// void SetCollisionByFBox(class UBoxComponent* BoxCollision, FBox& Box);                                                   // [0x603c47c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.RotateOnAngleUp
	// FVector RotateOnAngleUp(FVector& InVector, float InAngleDegree);                                                         // [0x603c33c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIStatics.RInterpTo
	// FRotator RInterpTo(FRotator& Current, FRotator& Target, float DeltaTime, float InterpSpeedV, float InterpSpeedH);        // [0x603b858] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStatics.RInterpConstantTo
	// FRotator RInterpConstantTo(FRotator& Current, FRotator& Target, float DeltaTime, float InterpSpeedV, float InterpSpeedH); // [0x603b654] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStatics.RemoveItemsFromVectors
	// void RemoveItemsFromVectors(TArray<FVector>& inArray, FVector& Location, float XYRange, float ZRange);                   // [0x603bc78] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.RegisterPawnToSenseSource
	// void RegisterPawnToSenseSource(class AActor* InAIPawn);                                                                  // [0x603bbf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.RandomNormal
	// float RandomNormal(float Min, float Max);                                                                                // [0x603ba5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.Prone
	// void Prone(class ACharacter* AICharacter);                                                                               // [0x603b324] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.PrintBTNodeExecuteMessageWithEventName
	// void PrintBTNodeExecuteMessageWithEventName(class AActor* InActor, class UBTNode* InNode, FString Tag, FString Message, bool bLogTime, FString FnName); // [0x603b0c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.PrintBTNodeExecuteMessage
	// void PrintBTNodeExecuteMessage(class AActor* InActor, class UBTNode* InNode, FString Tag, FString Message, bool bLogTime); // [0x603aed8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.PrintBPLog
	// void PrintBPLog(FString Content);                                                                                        // [0x603ae10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.PlayAISoundByType
	// void PlayAISoundByType(class ACharacter* AICharacter, EAISoundType CurrType);                                            // [0x603aad4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.OnAIBeginToRunBT
	// void OnAIBeginToRunBT(class AAIController* InAIController);                                                              // [0x603aa4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.LogBPEnumDefaultNames
	// void LogBPEnumDefaultNames(class UObject* BPEnum);                                                                       // [0x603a704] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.LineTraceIsHitWithResult
	// bool LineTraceIsHitWithResult(class UObject* WorldContext, FVector& StartPos, FVector& EndPos, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, FHitResult& HitResult); // [0x603a344] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.LineTraceIsHitFoliageOrSmoke
	// bool LineTraceIsHitFoliageOrSmoke(class AActor* AIPawn, FVector& StartPos, FVector& EndPos);                             // [0x603a004] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.LineTraceIsHit
	// bool LineTraceIsHit(class UObject* WorldContext, FVector& StartPos, FVector& EndPos, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, TArray<AActor*>& ActorsToIgnore); // [0x6039d30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.LineCylinderIntersection
	// bool LineCylinderIntersection(FVector& LineStartPoint, FVector& LineEndPoint, FVector& CylinderCenter, float& CylinderZExtent, float& CylinderRadius); // [0x6039a98] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStatics.IsZombieAICharacter
	// bool IsZombieAICharacter(class AActor* InAIPawn);                                                                        // [0x60399dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsVolumeEncompassesPoint
	// bool IsVolumeEncompassesPoint(class AVolume* Volume, FVector& Point, float SphereRadius, float& OutDistance);            // [0x60397f8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsValidLocation
	// bool IsValidLocation(FVector& Location);                                                                                 // [0x6039730] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStatics.IsTeamFriendly
	// bool IsTeamFriendly(class AActor* AIPawn, class AActor* InTarget);                                                       // [0x60393d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsTeamEnemy
	// bool IsTeamEnemy(class AActor* AIPawn, class AActor* InTarget);                                                          // [0x603906c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsTeamAlly
	// bool IsTeamAlly(class AActor* AIPawn, class AActor* InTarget);                                                           // [0x6038d10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsTeachingAI
	// bool IsTeachingAI(class AActor* InPawnOrCtrl);                                                                           // [0x6038c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsTargetDead
	// bool IsTargetDead(class AActor* AIPawn, class AActor* TargetPawn);                                                       // [0x6038b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsTakingCover
	// bool IsTakingCover(class ACharacter* AICharacter);                                                                       // [0x6038844] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsStandaloneTutorialGame
	// bool IsStandaloneTutorialGame(class UObject* WorldContext);                                                              // [0x60387ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsSameFrame
	// bool IsSameFrame(float T1, float T2);                                                                                    // [0x60386b4] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAIStatics.IsReady
	// bool IsReady(class AActor* Actor);                                                                                       // [0x60384fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsPMCAI
	// bool IsPMCAI(class AActor* InPawnOrCtrl);                                                                                // [0x1f9e938] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsPlayingAnimation
	// bool IsPlayingAnimation(class ACharacter* InAI);                                                                         // [0x6038464] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsNPCBoss
	// bool IsNPCBoss(class AActor* InAIPawn);                                                                                  // [0x5d1a62c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsNPCAIMakeNoiseEnabled
	// bool IsNPCAIMakeNoiseEnabled();                                                                                          // [0x603844c] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAIStatics.IsNPCAICharacter
	// bool IsNPCAICharacter(class AActor* InAIPawn);                                                                           // [0x60383b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsMoving
	// bool IsMoving(class ACharacter* Character);                                                                              // [0x5d243f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsLastMoveSuccess
	// bool IsLastMoveSuccess(class ACharacter* InAI);                                                                          // [0x60381cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsInGrass
	// bool IsInGrass(class ACharacter* InCharacter, class ANPCAIPerceptionAssistActor* PerceptionAssist);                      // [0x60380c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsInAbilityState
	// bool IsInAbilityState(class ACharacter* AIPawn, FName& GameplayTagName);                                                 // [0x6037d5c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsFacingTargetPoint
	// bool IsFacingTargetPoint(class AActor* AIPawn, FVector& ToPoint, float AngleDLimit, char UseCtrlROrActorR);              // [0x6037b98] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsEnemy
	// bool IsEnemy(class AActor* AIPawn, class AActor* InTarget);                                                              // [0x6037ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsEnabledBTNodeShared
	// bool IsEnabledBTNodeShared();                                                                                            // [0x6037a98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsEnabledBTNodeOptimize
	// bool IsEnabledBTNodeOptimize();                                                                                          // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsDead
	// bool IsDead(class AActor* Actor);                                                                                        // [0x19de7b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsAIReady
	// bool IsAIReady(class AActor* Actor);                                                                                     // [0x6037854] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsAIActive
	// bool IsAIActive(class AActor* Actor);                                                                                    // [0x60377bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.IsActive
	// bool IsActive(class AActor* Actor);                                                                                      // [0x6037954] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.HasAnyPlayerAround
	// bool HasAnyPlayerAround(class AActor* Actor);                                                                            // [0x6037724] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetWeaponUseTraceChannel
	// TEnumAsByte<ECollisionChannel> GetWeaponUseTraceChannel(class ACharacter* AICharacter);                                  // [0x6037428] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetTimeSeconds
	// float GetTimeSeconds(class UObject* WorldContext);                                                                       // [0x6037314] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAIStatics.GetTacticSystemActor
	// class ATacticSystemActor* GetTacticSystemActor(class UObject* WorldContext);                                             // [0x603727c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetSingleBodyPartLocation
	// FVector GetSingleBodyPartLocation(class ACharacter* InAICharacter, class ACharacter* InCheckTarget, EAIBodyPartType InBodyPartType); // [0x6036eac] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetRandomFoliageTree
	// bool GetRandomFoliageTree(class UObject* WorldContext, FVector& InCenter, FVector& OutLocation, FVector& OutExtent, float InRadiusScope, float TreeMinHeight, float TreeMaxHeight); // [0x60369b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetPerceptionAssistInWorld
	// class ANPCAIPerceptionAssistActor* GetPerceptionAssistInWorld(class UObject* WorldContext);                              // [0x60368f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetPerceptionAssistActor
	// class ANPCAIPerceptionAssistActor* GetPerceptionAssistActor(class UObject* WorldContext);                                // [0x603685c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetOrCreateGroupRequestController
	// class UNPCAIGroupRequestController* GetOrCreateGroupRequestController(class ACharacter* InAICharacter);                  // [0x60367c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetLookSightUseTraceChannel
	// TEnumAsByte<ECollisionChannel> GetLookSightUseTraceChannel(class ACharacter* AICharacter);                               // [0x6036410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetLocation
	// FVector GetLocation(class AActor* InAI);                                                                                 // [0x6036368] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetHierarchicalNavigation
	// class ANPCAIHNavActor* GetHierarchicalNavigation(class UObject* WorldContextObject);                                     // [0x60362d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetHealthMax
	// float GetHealthMax(class AActor* Actor);                                                                                 // [0x6036238] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetHealth
	// float GetHealth(class AActor* Actor);                                                                                    // [0x60361a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetGroupRequestController
	// class UNPCAIGroupRequestController* GetGroupRequestController(class ACharacter* InAICharacter);                          // [0x6035e08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetFBoxVertexs2D
	// void GetFBoxVertexs2D(FBox& Box, TArray<FVector2D>& Vertexs);                                                            // [0x6035ad0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStatics.GetFBoxVertexs
	// void GetFBoxVertexs(FBox& Box, TArray<FVector>& Vertexs);                                                                // [0x6035c6c] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStatics.GetEQSData
	// class UNPCAICoverEnvQueryData* GetEQSData(class AActor* AIPawn, int32_t QueryID);                                        // [0x60359ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetCurrentWeatherAIKnown
	// EWeatherType GetCurrentWeatherAIKnown(class AActor* AIPawn);                                                             // [0x6035954] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetCurrentFogDensity
	// float GetCurrentFogDensity(class UObject* WorldContext);                                                                 // [0x6035870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetCoverSystemActor
	// class ACoverSystemActor* GetCoverSystemActor(class UObject* WorldContext);                                               // [0x60357d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetBodyPartEndurace
	// float GetBodyPartEndurace(class AActor* InAIPawn, class AActor* InTargetPawn, EAIBodyPartType InBodyPart);               // [0x60353e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAngOfNormazedVectors
	// float GetAngOfNormazedVectors(FVector& v1, FVector& v2, bool ToAngle, bool ToAbs);                                       // [0x60351e8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAISGDoorManager
	// class UAISGDoorManager* GetAISGDoorManager(class UObject* WorldContext);                                                 // [0x60350b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAISceneEventsTriggerManager
	// class UAISceneEventsTriggerManager* GetAISceneEventsTriggerManager(class UObject* WorldContext);                         // [0x6035150] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAIPropertyComponentByClass
	// class UNPCAIPropertyComponent* GetAIPropertyComponentByClass(class AAIController* InAIController, class UClass* InPropertyClass); // [0x6034ccc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAIPerceptionDynamicActor
	// class ANPCAIPerceptionDynamicActor* GetAIPerceptionDynamicActor(class UObject* WorldContext);                            // [0x6034c34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAIMainType
	// EAIMainType GetAIMainType(class AActor* InPawnOrCtrl);                                                                   // [0x6034b9c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAIJobType
	// ENPCAIJobType GetAIJobType(class AActor* InPawn);                                                                        // [0x6034ae4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAIController
	// class AAIController* GetAIController(class AActor* InAI);                                                                // [0x6034950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAICharacter
	// class ACharacter* GetAICharacter(class AActor* InAI);                                                                    // [0x60347d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.GetAIBodyPartTypeByHitGroupType
	// EAIBodyPartType GetAIBodyPartTypeByHitGroupType(class AActor* InAIPawn, char HitGroupType);                              // [0x6034490] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.FindNearestFromVectors
	// bool FindNearestFromVectors(TArray<FVector>& inArray, FVector& Location, FVector& OutPoint, float& OutMinDistance);      // [0x60341c8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.Crouch
	// void Crouch(class ACharacter* AICharacter);                                                                              // [0x6033e98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.CreateSimpleUniqueID
	// int32_t CreateSimpleUniqueID();                                                                                          // [0x6033e70] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAIStatics.CreateRandom
	// float CreateRandom(float Value, float Fraction);                                                                         // [0x6033d1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.CalculateCharacterInLightValue
	// int32_t CalculateCharacterInLightValue(class ACharacter* InAICharacter, class ACharacter* InTarget);                     // [0x6033a8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.BoxMullerNormal
	// double BoxMullerNormal();                                                                                                // [0x6033a64] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAIStatics.BoxMuller
	// double BoxMuller(double Mean, double StdDev);                                                                            // [0x6033958] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAIStatics.BoardcastDrawDebugLine
	// void BoardcastDrawDebugLine(class AAIController* InAIController, int32_t InDrawID, FVector InStart, FVector InEnd, FColor InColor, float InTime, float InThickness); // [0x6033624] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.BeginToTakeCoverCrouch
	// void BeginToTakeCoverCrouch(class ACharacter* AICharacter);                                                              // [0x6033334] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.BeginToTakeCover
	// void BeginToTakeCover(class ACharacter* AICharacter);                                                                    // [0x6033044] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.AngleNormalized360
	// float AngleNormalized360(float& Value);                                                                                  // [0x6032fa4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIStatics.AIDebugPrintSingleMessage
	// void AIDebugPrintSingleMessage(class UObject* WorldContext, FString Tag, FString Content, bool ToScreen, bool ToLog, bool ToShippingLog, FLinearColor LinearColor, float Duration, class AActor* AIActor, bool bIsErrorLog); // [0x2523cc4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIStatics.AIDebugPrintMultiMessage
	// void AIDebugPrintMultiMessage(class UObject* WorldContext, FString Tag, TArray<FString>& Content, bool ToScreen, bool ToLog, bool ToShippingLog, FLinearColor LinearColor, float Duration, class AActor* AIActor); // [0x6032798] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIStaticsInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIStaticsInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.ModifyCurrentEndurance
	// bool ModifyCurrentEndurance(float MaxRatio);                                                                             // [0x60582f0] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsTeamFriendly
	// bool IsTeamFriendly(class AActor* InTarget);                                                                             // [0x6057398] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsTeamEnemy
	// bool IsTeamEnemy(class AActor* InTarget);                                                                                // [0x60572ec] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsTeamAlly
	// bool IsTeamAlly(class AActor* InTarget);                                                                                 // [0x6057240] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsTargetInGhost
	// bool IsTargetInGhost(class AActor* TargetPawn);                                                                          // [0x6057194] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsScavPlayer
	// bool IsScavPlayer(class ACharacter* InPawn);                                                                             // [0x6056dc4] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsInTransitionAnim
	// bool IsInTransitionAnim(class ACharacter* Character);                                                                    // [0x6055888] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsInTacticalSwitchWeapon
	// bool IsInTacticalSwitchWeapon();                                                                                         // [0x6055860] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsInGhost
	// bool IsInGhost();                                                                                                        // [0x5cb1d2c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsInAbilityState
	// bool IsInAbilityState(class ACharacter* InPawn, FName& GameplayTagName);                                                 // [0x60550e8] Native|Public|HasOutParms|Const 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsFriendlyFactionType
	// bool IsFriendlyFactionType(char RelationType);                                                                           // [0x60549dc] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsEnemyArmorCanProtected
	// bool IsEnemyArmorCanProtected(class AActor* InTarget);                                                                   // [0x6053fb8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsAIReady
	// bool IsAIReady(class AActor* TargetPawn);                                                                                // [0x6052aa4] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.IsAIActive
	// bool IsAIActive(class AActor* TargetPawn);                                                                               // [0x60520f0] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.InitAITrackLOGTemplateStr
	// void InitAITrackLOGTemplateStr(EAITrackLOGType LogType, FString& TemplateStr);                                           // [0x6051f8c] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetTargetBodyPartEnduranceRatios
	// void GetTargetBodyPartEnduranceRatios(class AActor* InTarget, TArray<float>& OutEnduranceRatios);                        // [0x604fe74] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetPawnViewLocationIfStand
	// FVector GetPawnViewLocationIfStand();                                                                                    // [0x604ecf0] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetPawnViewLocationIfCrouch
	// FVector GetPawnViewLocationIfCrouch();                                                                                   // [0x604ecb8] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetNearestPlayerList
	// void GetNearestPlayerList(float InRadius, bool InSight, TArray<AActor*>& PlayerList, char TeamType);                     // [0x604d66c] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetNearestPlayer
	// class AActor* GetNearestPlayer(float InRadius, bool InSight, char TeamType);                                             // [0x604d524] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetFootSounderThrower
	// class AActor* GetFootSounderThrower(class AActor* Projectile, bool& OutbAttractAI);                                      // [0x6049c10] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetFactionRelationTypeWithTarget
	// char GetFactionRelationTypeWithTarget(class ACharacter* TargetPawn);                                                     // [0x6049828] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetEQSData
	// class UNPCAICoverEnvQueryData* GetEQSData(int32_t QueryID);                                                              // [0x604942c] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetCurrentWeather
	// EWeatherType GetCurrentWeather();                                                                                        // [0x6048b84] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetCurrentWeaponZoomInTimes
	// float GetCurrentWeaponZoomInTimes(class AActor* TargetPawn);                                                             // [0x6048ad4] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetCurrentWeaponPenetrationLevel
	// int32_t GetCurrentWeaponPenetrationLevel();                                                                              // [0x6048aac] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetBulletArmorPenetrationNotHurt
	// float GetBulletArmorPenetrationNotHurt();                                                                                // [0x60485c0] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetBodyPartInArmorProtected
	// bool GetBodyPartInArmorProtected(class AActor* InTarget, TArray<EAIBodyPartType>& OutBodyParts);                         // [0x60484a8] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetBodyPartEndurace
	// float GetBodyPartEndurace(class AActor* InTarget, EAIBodyPartType InBodyPart);                                           // [0x60483a8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetAliveTeamMembers
	// void GetAliveTeamMembers(class ACharacter* Player, TArray<ACharacter*>& OutTeamMembers);                                 // [0x6047034] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetAIPathGroupID
	// int64_t GetAIPathGroupID();                                                                                              // [0x5cb05d8] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetAIMainType
	// EAIMainType GetAIMainType();                                                                                             // [0x6046598] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetAIJobType
	// ENPCAIJobType GetAIJobType();                                                                                            // [0x6046570] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetAIID
	// int64_t GetAIID();                                                                                                       // [0x5cb0538] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.GetAIBodyPartTypeByHitGroupType
	// EAIBodyPartType GetAIBodyPartTypeByHitGroupType(char HitGroupType);                                                      // [0x60462e4] Native|Public        
	// Function /Script/MFNPCAI.NPCAIStaticsInterface.ChangeAIProfileFaction
	// bool ChangeAIProfileFaction(TSoftObjectPtr<UClass*> FactionClass);                                                       // [0x6042e04] Native|Public        
};

/// Class /Script/MFNPCAI.NPCAISteepZoneRenderingComponent
/// Size: 0x04F0 (1264 bytes) (0x0004F0 - 0x0004F0) align 16 MaxSize: 0x04F0
class UNPCAISteepZoneRenderingComponent : public UNPCAITestingRenderingComponent
{ 
public:
};

/// Struct /Script/MFNPCAI.SteepZoneDeleteSettings
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FSteepZoneDeleteSettings
{ 
	FVector                                            NavQueryExtent;                                             // 0x0000   (0x000C)  
	bool                                               bHintProjection2D;                                          // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SampleSpacing;                                              // 0x0010   (0x0004)  
	float                                              TraceRadius;                                                // 0x0014   (0x0004)  
	float                                              IncludedAngleTolerance;                                     // 0x0018   (0x0004)  
	float                                              WalkableFloorAngle;                                         // 0x001C   (0x0004)  
	float                                              DensityQuerySize;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0024   (0x0008)  MISSED
	SDK_UNDEFINED(1,1597) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                 // 0x002C   (0x0001)  
	bool                                               bTraceComplex;                                              // 0x002D   (0x0001)  
	bool                                               bParallelCollectNavMeshPoly;                                // 0x002E   (0x0001)  
	bool                                               bParallelCalculatePolyNormal;                               // 0x002F   (0x0001)  
	bool                                               bParallelGenerateSamplePoint;                               // 0x0030   (0x0001)  
	bool                                               bParallelCalculatePointNormal;                              // 0x0031   (0x0001)  
	bool                                               bParallelCalculateSteepDensity;                             // 0x0032   (0x0001)  
	bool                                               bParallelModifyTileCache;                                   // 0x0033   (0x0001)  
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneDeleter
/// Size: 0x0180 (384 bytes) (0x000000 - 0x000180) align 16 MaxSize: 0x0180
struct FNPCAISteepZoneDeleter
{ 
	class UObject*                                     WorldContextObject;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0008   (0x0018)  MISSED
	class UWorld*                                      World;                                                      // 0x0020   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	class ARecastNavMesh*                              MainNavData;                                                // 0x0030   (0x0008)  
	class ANPCAINavMeshManager*                        NavMeshManager;                                             // 0x0038   (0x0008)  
	unsigned char                                      UnknownData02_7[0x140];                                     // 0x0040   (0x0140)  MISSED
};

/// Class /Script/MFNPCAI.NPCAISteepZoneTestingActor
/// Size: 0x0530 (1328 bytes) (0x000358 - 0x000530) align 16 MaxSize: 0x0530
class ANPCAISteepZoneTestingActor : public ANPCAITestingActor
{ 
public:
	FSteepZoneDeleteSettings                           Settings;                                                   // 0x0358   (0x0034)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x038C   (0x0004)  MISSED
	FNPCAISteepZoneDeleter                             Deleter;                                                    // 0x0390   (0x0180)  
	float                                              PolyZOffset;                                                // 0x0510   (0x0004)  
	float                                              NormalScaling;                                              // 0x0514   (0x0004)  
	float                                              NormalThickness;                                            // 0x0518   (0x0004)  
	float                                              PolyNormalIncludedAngleTolerance;                           // 0x051C   (0x0004)  
	float                                              PointNormalIncludedAngleTolerance;                          // 0x0520   (0x0004)  
	float                                              DisplayableSteepDensity;                                    // 0x0524   (0x0004)  
	bool                                               bDrawNavMeshPoly;                                           // 0x0528   (0x0001)  
	bool                                               bDrawDetailTriangle;                                        // 0x0529   (0x0001)  
	bool                                               bDrawDetailTriangleNormal;                                  // 0x052A   (0x0001)  
	bool                                               bDrawSamplePoint;                                           // 0x052B   (0x0001)  
	bool                                               bDrawSamplePointNormal;                                     // 0x052C   (0x0001)  
	bool                                               bDrawSteepZone;                                             // 0x052D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x052E   (0x0002)  MISSED
};

/// Class /Script/MFNPCAI.NPCAISteeringInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAISteeringInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAISubSystemStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAISubSystemStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.WantToReCalcGoalEnemy
	// void WantToReCalcGoalEnemy(class AActor* AIPawn);                                                                        // [0x6062190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.UpdateTargetInfoOnTakeDamage
	// void UpdateTargetInfoOnTakeDamage(class AActor* Casuer, class AActor* Taker, float DamageValue);                         // [0x6061fd8] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.UpdateTargetInfoOnCauseDamage
	// void UpdateTargetInfoOnCauseDamage(class AActor* Casuer, class AActor* Taker, float DamageValue);                        // [0x6061b1c] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.UpdatePersistentFireSetting
	// void UpdatePersistentFireSetting(class AActor* AIPawn, bool CalcShoot, bool CalcSight, class AActor* EnemyTarget, FVector& FireLocation, float FireInterval, bool bIgnoreAimingTime); // [0x60615b4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.UpdateNaturalFireSetting
	// void UpdateNaturalFireSetting(class AActor* AIPawn, FVector& FireLocation, bool bEnabledRecoilControl, bool bEnabledHitRateControl, bool bIgnoreAimingTime); // [0x606111c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.UpdateAIPeekCount
	// void UpdateAIPeekCount(class AActor* AIPawn, int32_t PeekCount);                                                         // [0x6060f14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.UnregisterSceneEvent
	// void UnregisterSceneEvent(class UObject* WorldContext, class UAISceneEventMessage* SceneEvent);                          // [0x6060e24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.UnLockGoalEnemy
	// void UnLockGoalEnemy(class AActor* AIPawn);                                                                              // [0x606099c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TryProne
	// bool TryProne(class AActor* AIOwner);                                                                                    // [0x60607b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TryLean
	// bool TryLean(class AActor* AIOwner, EAILeanType LeanType);                                                               // [0x60606cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TryJump
	// bool TryJump(class AActor* AIPawn, FVector JumpDirection, float JumpSpeed, bool bUseNowVelocity);                        // [0x6060288] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TryCrouchSliding
	// bool TryCrouchSliding(class AActor* AIOwner);                                                                            // [0x606009c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TryCrouch
	// bool TryCrouch(class AActor* AIOwner);                                                                                   // [0x6060004] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TryCasualStandingPose
	// bool TryCasualStandingPose(class AActor* AIOwner, bool bCasual);                                                         // [0x605ff1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TriggerSceneEventDIY
	// int32_t TriggerSceneEventDIY(class UObject* WorldContext, ENPCAISceneEventID eventId, FVector& Location, float ValidScope, float ValidTime, TArray<int64_t>& AIIDs, TArray<int64_t>& AIPathGroupIDs, float CoverRange); // [0x605fc3c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TriggerSceneEvent
	// int32_t TriggerSceneEvent(class UObject* WorldContext, ENPCAISceneEventID eventId, FVector& Location, float CoverRange); // [0x605faa0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.TestDir
	// bool TestDir(class UObject* WorldContextObject, FVector& HeadPosition, FVector& Direction, float Distance, FVector& OutPosition); // [0x605f810] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.Test4Sides
	// FVector Test4Sides(class UObject* WorldContextObject, FVector Direction, FVector& HeadPosition, float PATROL_MIN_LIGHT_DIST); // [0x605f550] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.StopRescueOtherDBNOTeammate
	// void StopRescueOtherDBNOTeammate(class AActor* InAIPawn);                                                                // [0x605f214] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.StopPickUpBoxContainer
	// void StopPickUpBoxContainer(class AActor* InAIPawn);                                                                     // [0x605ef24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.StopPersistentFire
	// void StopPersistentFire(class AActor* AIPawn);                                                                           // [0x605ec30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.StartPersistentFire
	// void StartPersistentFire(class AActor* AIPawn, float DurationTime);                                                      // [0x605e8e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.ShouldTriggerMine
	// bool ShouldTriggerMine(class AActor* AIPawnOrController);                                                                // [0x605e6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.ShortQueryPathToPoint
	// void ShortQueryPathToPoint(class AActor* AIPawn, FVector& InPointToGo, TArray<FVector>& PathPoints);                     // [0x605e474] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetZombieReplaceSpecialID
	// void SetZombieReplaceSpecialID(class UObject* WorldContextObject, int32_t AIID, char ReplaceID);                         // [0x605df44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetWantCalculateGoalEnemy
	// void SetWantCalculateGoalEnemy(class AActor* AIPawn, bool Wants);                                                        // [0x605de18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetupTearGasAreas
	// void SetupTearGasAreas(class UObject* WorldContextObject, FVector& Center, FVector& EffectExtent, bool bActiving);       // [0x605e27c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetupFlanking
	// void SetupFlanking(class AActor* InOwner, FVector& InDangerPoint, FVector& InDangerPointDirection, float InDangerPointEffectRange); // [0x605e088] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetSightWeakenTime
	// void SetSightWeakenTime(class AActor* AIPawn, float WeakenTime);                                                         // [0x605dd34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetOpenWeaponADS
	// void SetOpenWeaponADS(class AActor* AIPawn, bool bOpenOrClose);                                                          // [0x605d9e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetIsInTryLeanShoot
	// void SetIsInTryLeanShoot(class AActor* InAIPawn, bool bTryLean, float CheckInterval);                                    // [0x605d8a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetGroupEnemyHatredValue
	// void SetGroupEnemyHatredValue(class AActor* InAIOwner, class AActor* InEnemy, int32_t InHatredValue, float IndateTime, bool InbCalucateGoalEnemy); // [0x605d550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetEnemyHatredValue
	// void SetEnemyHatredValue(class AActor* InAIPawn, class AActor* InEnemy, int32_t InHatredValue, float IndateTime, bool bEffectGroup, bool InbCalucateGoalEnemy); // [0x605d040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetDamageLimitEnabledForAI
	// void SetDamageLimitEnabledForAI(class AActor* AIPawn, bool bIsEnabledForAI);                                             // [0x605cd88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetCurrentMoveType
	// void SetCurrentMoveType(class AActor* AIOwner, EAIMoveType InMoveType);                                                  // [0x605cc60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAvoidNavAreas
	// void SetAvoidNavAreas(class UObject* WorldContext, TArray<int64_t>& AvoidPolyRefs, bool bAvoid);                         // [0x605c8bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAITargetScoreBlueprintOverride
	// void SetAITargetScoreBlueprintOverride(class AActor* AIPawn, class UClass* OverrideScoreCalculator);                     // [0x605bdfc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAISprint
	// void SetAISprint(class AActor* AIPawn, bool bSprint);                                                                    // [0x605bc9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAIProtectTreasureBox
	// void SetAIProtectTreasureBox(class AActor* AIPawn, class AActor* TreasureBox);                                           // [0x605ba7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAimingPoint
	// void SetAimingPoint(class AActor* AIPawn, FVector& AimingPoint);                                                         // [0x605c548] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAimingBodyPartWeightInRuntime
	// void SetAimingBodyPartWeightInRuntime(class AActor* InAIPawn, EAIBodyPartType InBodyPart, float InWeight, bool bIsForPlayer); // [0x605c1d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAimingBodyPartTrend
	// void SetAimingBodyPartTrend(class AActor* AIPawn, EAIAimingBodyPartTrend AimingTrend);                                   // [0x605bf24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAIKnowEnemy
	// void SetAIKnowEnemy(class AActor* AIPawn, class AActor* EnemyPawn);                                                      // [0x605b484] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAICallUpResult
	// void SetAICallUpResult(class AActor* AIPawn, char Result);                                                               // [0x605b3a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SetAICallUpReason
	// void SetAICallUpReason(class AActor* AIPawn, char reason);                                                               // [0x605b198] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.SearchBehaviorService
	// class UBTService* SearchBehaviorService(class AAIController* InAIController, FString InNodeName);                        // [0x605abdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.ResumeAIBehaviorLogic
	// void ResumeAIBehaviorLogic(class AActor* AIPawn, FString reason);                                                        // [0x605a9a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.RescueDBNOAITeammate
	// bool RescueDBNOAITeammate(class AActor* InAIPawn, class AActor* InTarget);                                               // [0x605a5b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.RequestStopMovement
	// void RequestStopMovement(class AActor* InOwner);                                                                         // [0x605a4e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.RemoveSuspectedPoint
	// void RemoveSuspectedPoint(class AActor* AIPawn, class UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee);   // [0x605a394] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.RemoveEnemyInAllGroup
	// void RemoveEnemyInAllGroup(class AActor* InEnemy);                                                                       // [0x605a30c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.RemoveAimingTypeInRuntime
	// void RemoveAimingTypeInRuntime(class AActor* InAIPawn, EAIBodyBulkType InBodyBulk, bool bIsForPlayer);                   // [0x6059ff8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.RegisterSceneEvent
	// int32_t RegisterSceneEvent(class UObject* WorldContext, class UAISceneEventMessage* SceneEvent, FVector& Location, float CoverRange); // [0x6059e34] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.RefreshNavigationMainData
	// void RefreshNavigationMainData(class UObject* WorldContext);                                                             // [0x6059cd4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.QuitToDynamicGroup
	// void QuitToDynamicGroup(class AActor* InAIPawn);                                                                         // [0x6059ba8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.QueryPathLengthFromAIToPoint
	// float QueryPathLengthFromAIToPoint(class AActor* AIPawn, FVector& PointToGo, int64_t PointPolyRef);                      // [0x60598dc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.PointIsInMolotov
	// bool PointIsInMolotov(class AActor* InAIPawn, FVector InPoint);                                                          // [0x6059754] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.PointIsInBombRange
	// bool PointIsInBombRange(class UObject* WorldContext, FVector InPoint, ENPCAIPerceptibleTile InTile);                     // [0x6059570] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.PointIsAroundAI
	// bool PointIsAroundAI(class AActor* AIPawn, FVector& PointToGo, int64_t PointPolyRef);                                    // [0x605939c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.PickupInventory
	// bool PickupInventory(class AActor* InAIPawn, class AActor* Inventory, bool bCheckIsCanAdd, float WaitSeconds);           // [0x6058f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.PickUpBoxContainer
	// void PickUpBoxContainer(class AActor* InAIPawn, class AActor* BoxContainer, bool bCheckIsCanAdd, float InDelayStarttime, float InPickUpInterval); // [0x6058b08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.PauseAIBehaviorLogic
	// void PauseAIBehaviorLogic(class AActor* AIPawn, FString reason, float PauseTime);                                        // [0x6058840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.OpenDoor
	// void OpenDoor(class AActor* InAIPawn, class AActor* InDoor);                                                             // [0x605859c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.MultiJoinToDynamicGroup
	// void MultiJoinToDynamicGroup(int32_t DyGroupId, TArray<AActor*>& InAIPawns);                                             // [0x60583a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.ModifyAICurrentEndurance
	// bool ModifyAICurrentEndurance(class AActor* AIPawn, float MaxRatio);                                                     // [0x6057f48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.LookToPointImmimmediately
	// void LookToPointImmimmediately(class AActor* AIOwner, FVector InPoint);                                                  // [0x6057e54] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.LookToPoint
	// void LookToPoint(class AActor* AIOwner, FVector InPoint, float InRotateSpeedInDegree, float AcceleratedSpeedInDegree, bool bQuickly); // [0x6057c74] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.LookToMovingDirection
	// void LookToMovingDirection(class AActor* AIOwner, float RotateSpeedInDegree, float AcceleratedSpeedInDegree);            // [0x6057b48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.LockLookToPoint
	// void LockLookToPoint(class AActor* AIOwner, float LockTime);                                                             // [0x6057a64] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.LockGoalEnemy
	// class UNPCAITargetInfo* LockGoalEnemy(class AActor* AIPawn, class AActor* EnemyPawn);                                    // [0x605797c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.JoinToGroupTogetherForTest
	// void JoinToGroupTogetherForTest(TArray<AActor*>& AIPawns);                                                               // [0x60578d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.JoinToDynamicGroup
	// bool JoinToDynamicGroup(int32_t DyGroupId, class AActor* InAIPawn);                                                      // [0x6057750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsWaitingStartAiming
	// bool IsWaitingStartAiming(class AActor* AIPawn);                                                                         // [0x6057444] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsSightWeakenByFlashProjectile
	// void IsSightWeakenByFlashProjectile(class AActor* AIPawn, bool& IsWeaken, float& RemainTime);                            // [0x6057048] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsSightWeakenByFlashLight
	// bool IsSightWeakenByFlashLight(class AActor* AIPawn, float& SightWeaknScaleValue, FVector& LightLocation, class ACharacter*& LightOwnerCharacter); // [0x6056e74] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsRecentlyFire
	// bool IsRecentlyFire(class AActor* AIPawn, float InSeconds);                                                              // [0x6056a68] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsPersistentFiring
	// bool IsPersistentFiring(class AActor* AIPawn);                                                                           // [0x605675c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsOpeningDoor
	// bool IsOpeningDoor(class AActor* AIPawn);                                                                                // [0x6056450] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsNavPathFounded
	// bool IsNavPathFounded(FNPCAINavPathForBP& NavPath);                                                                      // [0x6056390] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsMovingToDestination
	// bool IsMovingToDestination(class AActor* InOwner);                                                                       // [0x60562f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsLODStatus
	// bool IsLODStatus(class AActor* AIPawn);                                                                                  // [0x6055c90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsLockingGoalEnemy
	// class UNPCAITargetInfo* IsLockingGoalEnemy(class AActor* AIPawn, bool& IsLocking);                                       // [0x6056094] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsLockDoor
	// bool IsLockDoor(class AActor* InAIPawn, class AActor* InDoor);                                                           // [0x6055d38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsJumping
	// bool IsJumping(class AActor* AIPawn);                                                                                    // [0x6055934] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsInPullBolt
	// bool IsInPullBolt(class AActor* AIPawn);                                                                                 // [0x6055550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsInOpenDoorStatus
	// bool IsInOpenDoorStatus(class AActor* InAIPawn);                                                                         // [0x6055498] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsInMolotovHurted
	// bool IsInMolotovHurted(class AActor* InAIPawn);                                                                          // [0x60553b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsInDynamicGroup
	// bool IsInDynamicGroup(class AActor* InAIPawn);                                                                           // [0x6055284] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsInCrossFireState
	// bool IsInCrossFireState(class AActor* AIPawn);                                                                           // [0x60551ec] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsImmuneTearGas
	// bool IsImmuneTearGas(class AActor* AIPawn);                                                                              // [0x6055050] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsGroupEnemy
	// bool IsGroupEnemy(class AActor* InAIOwner, class AActor* InTarget);                                                      // [0x6054e78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsGroupAlly
	// bool IsGroupAlly(class AActor* InAIOwner, class AActor* InTarget);                                                       // [0x6054cc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsGoalPositionReached
	// bool IsGoalPositionReached(class AActor* InOwner);                                                                       // [0x6054be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsGoalEnemyThreaten
	// bool IsGoalEnemyThreaten(class AActor* InAIPawn, float ThreatenDistance);                                                // [0x6054a8c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsFaceToPoint
	// bool IsFaceToPoint(class AActor* InAIPawn, FVector InPoint);                                                             // [0x60547b8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsEnoughAllyKillInRange
	// bool IsEnoughAllyKillInRange(class AActor* InAIPawn, FVector& InSearchCenter, float InSearchRange, float InSearchTime, int32_t InSearchCount); // [0x6054410] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsEnoughAllyDeathInRange
	// bool IsEnoughAllyDeathInRange(class AActor* InAIPawn, FVector& InSearchCenter, float InSearchRange, float InSearchTime, int32_t InSearchCount); // [0x6054068] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsEnabledAimingBodyPartLOGDebug
	// bool IsEnabledAimingBodyPartLOGDebug(class AActor* AIPawn);                                                              // [0x528f7d8] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsDynamicGroupExist
	// bool IsDynamicGroupExist(class AActor* InAIPawn, int32_t DyGroupId);                                                     // [0x6053e6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsDoorOpened
	// bool IsDoorOpened(class AActor* InAIPawn, class AActor* InDoor);                                                         // [0x6053b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsDoorInDirectionOfMe
	// class AActor* IsDoorInDirectionOfMe(class AActor* InAIPawn, FVector& InDirection, float InRange);                        // [0x6053708] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsDBNO
	// bool IsDBNO(class AActor* InAIPawn, class AActor* InTargetPawn);                                                         // [0x6053368] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsCrouchSliding
	// bool IsCrouchSliding(class AActor* AIOwner);                                                                             // [0x605317c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsCompletedPickUpBoxContainer
	// bool IsCompletedPickUpBoxContainer(class AActor* InAIPawn);                                                              // [0x6052e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsCloseToDestination
	// bool IsCloseToDestination(class AActor* InOwner, float InCloseRadius);                                                   // [0x6052d88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsBeingFireHited
	// bool IsBeingFireHited(class AActor* InAIPawn, float InTime, class AActor*& OutFirePawn);                                 // [0x6052c50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsAISprinting
	// bool IsAISprinting(class AActor* AIPawn);                                                                                // [0x6052b50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsAIRLAgentActionReload
	// bool IsAIRLAgentActionReload(class AAIController* AIController);                                                         // [0x605279c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsAIProtectingTreasureBox
	// bool IsAIProtectingTreasureBox(class AActor* AIPawn, class AActor*& TreaureBox);                                         // [0x6052588] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsAIInBombRange
	// bool IsAIInBombRange(class AActor* AIPawn);                                                                              // [0x60524f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.IsAIDBNO
	// bool IsAIDBNO(class AActor* InAIPawn);                                                                                   // [0x605219c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.HasPlacePickUpInventory
	// bool HasPlacePickUpInventory(class AActor* InAIPawn, class AActor* Inventory);                                           // [0x6051b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.HasOthersAllyInShootScope
	// bool HasOthersAllyInShootScope(class AActor* InAIPawn);                                                                  // [0x6051a64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.HasNoDBNOAllyInGroup
	// bool HasNoDBNOAllyInGroup(class AActor* InAIOwner);                                                                      // [0x605192c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GroupAllyDeathToDo
	// void GroupAllyDeathToDo(class AActor* InAIPawn, FVector& InKillerLocation);                                              // [0x6051814] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GoToPoint
	// void GoToPoint(class AActor* InOwner, FVector InPosition, TArray<AVolume*>& AvoidVolumes, bool bSlowAtTheEnd, float InReachDist, bool bShoudGetUp, bool bGetUpWithCheck, class AActor* CaredActor, float CaredActorEffectRadius, int32_t GoDecision, bool bInOverrideAvoidGunline, FNPCAIOverrideAvoidGunlineParam& InOvrrideAvoidGunlineParam); // [0x605138c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GoDirectly
	// void GoDirectly(class AActor* InOwner, FVector& Direction, float Seconds, FVector InBlendingVelocity);                   // [0x60511bc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GoAccordingToWayPoints
	// void GoAccordingToWayPoints(class AActor* InOwner, FNavSkeletonGraphFindResult& PathResult, FNavSkeletonMoveSettings& Settings); // [0x6051004] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GiveInventoryToAI
	// bool GiveInventoryToAI(class AActor* AIPawn, int64_t ItemId);                                                            // [0x6050ca4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetZoneGroupInfo
	// class UNPCAIZoneGroupInfo* GetZoneGroupInfo(class AActor* InAIOwner);                                                    // [0x6050c0c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetZoneGroupAllyTotalDeathNum
	// int32_t GetZoneGroupAllyTotalDeathNum(class AActor* AIPawn);                                                             // [0x6050ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetYoungestSuspectedPoint
	// class UNPCAIAttentionPoint* GetYoungestSuspectedPoint(class AActor* InCharacter, float InRadius, bool InPriorityDanger); // [0x60509ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetUp
	// void GetUp(class AActor* AIOwner, bool bWithCheck);                                                                      // [0x6050778] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetTargetInSightBodyPartsLocation
	// float GetTargetInSightBodyPartsLocation(class AActor* AIPawn, class AActor* TargetPawn, TArray<FVector>& BodyPartsLocation); // [0x6050418] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetTargetBodyPartEnduranceRatios
	// void GetTargetBodyPartEnduranceRatios(class AActor* AIPawn, class AActor* InTarget, TArray<float>& OutEnduranceRatios);  // [0x6050014] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetSightLookStartPointByPose
	// FVector GetSightLookStartPointByPose(class AActor* InAIPawn, EAIPose& AIPose, EAILeanType& AILean, class UNPCAIPropertyComponent_Look* InLookProps); // [0x604fa90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetSceneEventInfo
	// bool GetSceneEventInfo(class UObject* WorldContext, int32_t EvtUniqueId, FNPCAISceneEventInfo& OutEvent);                // [0x604f948] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetSceneEvent
	// class UAISceneEventMessage* GetSceneEvent(class UObject* WorldContext, int32_t EvtUniqueId);                             // [0x604f828] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetRandomReachablePointUseFilter
	// FVector GetRandomReachablePointUseFilter(class UObject* WorldContext, FVector InPoint, float InRadius, class UClass* FilterClass); // [0x604f57c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetRandomReachablePoint
	// FVector GetRandomReachablePoint(class AActor* InAIPawn, FVector InCenter, float InRadius);                               // [0x604f2fc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetRandomNavigationPoint
	// FVector GetRandomNavigationPoint(class AActor* InAIPawn, FVector InCenter, float InRadius);                              // [0x604f07c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetPoseType
	// EAIPose GetPoseType(class ACharacter* Character);                                                                        // [0x604ed28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetPathAcrossLastDoorInfo
	// bool GetPathAcrossLastDoorInfo(class AActor* AIPawn, FAISafetyOpenDoorResp& AcrossDoorInfo);                             // [0x604e908] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetOpenDoorSuitableLocation
	// FVector GetOpenDoorSuitableLocation(class AActor* InAIPawn, class AActor* InDoor);                                       // [0x604e558] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetOpenDoorSafetyPoints
	// void GetOpenDoorSafetyPoints(class AActor* AIPawn, class AActor* InDoor, FVector NavLinkPoint, TArray<FAIDoorSingleSafetyPoint>& SafetyPoints, int32_t& PointsNum); // [0x604e088] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNearReachablePointEscapeBombArea
	// FVector GetNearReachablePointEscapeBombArea(class UObject* WorldContext, FVector InPoint, float InRadius, TArray<ENPCAIPerceptibleTile>& EscapeTiles); // [0x604c094] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNearestScavPlayerList
	// void GetNearestScavPlayerList(class AActor* InAIPawn, TArray<AActor*>& ScavPlayerList, float InRadius, bool InSight);    // [0x604dc24] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNearestScavPlayer
	// class AActor* GetNearestScavPlayer(class AActor* InAIPawn, float InRadius, bool InSight);                                // [0x604d820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNearestPMCPlayer
	// class AActor* GetNearestPMCPlayer(class AActor* InAIPawn, float InRadius, bool InSight);                                 // [0x604d120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNearestInventoryCanPickUp
	// class AActor* GetNearestInventoryCanPickUp(class AActor* InAIPawn, float InRange, bool bIgnoreChecked, float PathLength); // [0x604cd04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNearestDBNOAITeammate
	// class AActor* GetNearestDBNOAITeammate(class AActor* InAIPawn, float InRange);                                           // [0x604c96c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNearbyDoor
	// class AActor* GetNearbyDoor(class AActor* InAIPawn, float InRadius, bool bWantNearest);                                  // [0x604c5ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetNavPathEndLoc
	// FVector GetNavPathEndLoc(FNPCAINavPathForBP& NavPath);                                                                   // [0x604bf98] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetLeanType
	// EAILeanType GetLeanType(class AActor* AIOwner);                                                                          // [0x604bf00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetLatestAllyDeathInfo
	// bool GetLatestAllyDeathInfo(class AActor* InAIPawn, FAIGroupAllyDeathInfo& OutDeathInfo);                                // [0x604bd78] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetLastMoveResult
	// ENPCAIMoveResult GetLastMoveResult(class AActor* AIOwner);                                                               // [0x604bc94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetLastBeHitedTime
	// float GetLastBeHitedTime(class AActor* InAIPawn);                                                                        // [0x604bbfc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetIsInTryLeanShoot
	// bool GetIsInTryLeanShoot(class AActor* InAIPawn);                                                                        // [0x604bb14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetInventorysCanPickUp
	// bool GetInventorysCanPickUp(class AActor* InAIPawn, float InRange, float PathLength, bool bIgnoreChecked, TArray<AActor*>& OutInventorys); // [0x604b674] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetIfOverlapOther
	// class ACharacter* GetIfOverlapOther(class AActor* InAIPawn, float InRadius);                                             // [0x604b58c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGunShootStartPointByPose
	// FVector GetGunShootStartPointByPose(class AActor* InAIPawn, EAIPose& AIPose, EAILeanType& AILean, class UNPCAIPropertyComponent_Shoot* InShootProps); // [0x604b1a8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGunShootStartPointAtLocation
	// FVector GetGunShootStartPointAtLocation(class AActor* InAIPawn, FVector& InActorLocation, EAIPose& AIPose, EAILeanType& AILean); // [0x604aa90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGunShootStartPoint
	// FVector GetGunShootStartPoint(class AActor* AIPawn);                                                                     // [0x604a9e8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGroupSharedEnemySingleInfoByTarget
	// class UNPCAIEnemyGroupSingleInfo* GetGroupSharedEnemySingleInfoByTarget(class AActor* InAIPawn, class AActor* InTargetPawn); // [0x604a7f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGroupSharedEnemySingleInfo
	// class UNPCAIEnemyGroupSingleInfo* GetGroupSharedEnemySingleInfo(class AActor* InAIOwner, class UNPCAITargetInfo* InEnemyInfo); // [0x604a55c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGroupEnemyHartedValue
	// int32_t GetGroupEnemyHartedValue(class AActor* InAIOwner, class AActor* InEnemy);                                        // [0x604a304] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGoalEnemyPerson
	// class ACharacter* GetGoalEnemyPerson(class AActor* InAIPawn);                                                            // [0x604a1c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetGoalEnemyInfo
	// class UNPCAITargetInfo* GetGoalEnemyInfo(class AActor* InAIPawn);                                                        // [0x604a0e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetFootSounderThrower
	// class AActor* GetFootSounderThrower(class AActor* AIPawn, class AActor* FootSounder, bool& OutbAttractAI);               // [0x6049d18] Final|Native|Static|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetFireHitEnemyLastTimeUsePredestined
	// float GetFireHitEnemyLastTimeUsePredestined(class AActor* InAIPawn);                                                     // [0x60498d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetEnemyHartedValue
	// int32_t GetEnemyHartedValue(class AActor* InAIPawn, class AActor* InEnemy);                                              // [0x60494d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetDynamicGroupRequestController
	// class UNPCAIGroupRequestController* GetDynamicGroupRequestController(int32_t DyGroupId, class UObject* InWorldContext);  // [0x60491e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetDynamicGroupInfo
	// class UNPCAIDynamicGroupInfo* GetDynamicGroupInfo(class AActor* InAIPawn);                                               // [0x604909c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetDSGetMuzzleFlashSocketLocation
	// FVector GetDSGetMuzzleFlashSocketLocation(class ACharacter* Character);                                                  // [0x6048efc] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetDestination
	// FVector GetDestination(class AActor* InOwner);                                                                           // [0x6048fa4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetDBNOBeRescureLocation
	// FVector GetDBNOBeRescureLocation(class AActor* InAIPawnWhoDBNO);                                                         // [0x6048bac] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetCurrentMoveType
	// EAIMoveType GetCurrentMoveType(class AActor* AIOwner);                                                                   // [0x60488c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetCurrentDynamicGroupId
	// int32_t GetCurrentDynamicGroupId(class AActor* InAIPawn);                                                                // [0x6048830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetCharactersIfOverlapOther
	// bool GetCharactersIfOverlapOther(class AActor* InAIPawn, float InRadius, TArray<AActor*>& OverlapCharacters);            // [0x60486d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetCanWarningScavPlayer
	// class ACharacter* GetCanWarningScavPlayer(class AActor* AIPawn);                                                         // [0x60485ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetBestInventoryCanPickUpWithMorality
	// class AActor* GetBestInventoryCanPickUpWithMorality(class AActor* InAIPawn, float InRange, bool bIgnoreChecked, float PathLength); // [0x6047f8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAllSceneEvents
	// void GetAllSceneEvents(class UObject* WorldContext, TArray<UAISceneEventMessage*>& SceneEvents);                         // [0x6047e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAllSceneEventInfoListWithAI
	// void GetAllSceneEventInfoListWithAI(class UObject* WorldContext, int64_t AIID, int64_t AIPathGroupID, FVector& AILocation, TArray<FNPCAISceneEventInfo>& OutEventInfos); // [0x6047c7c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAllInSightEnemysBySelf
	// TArray<AActor*> GetAllInSightEnemysBySelf(class AActor* InAIPawn);                                                       // [0x6047b74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAllInSightEnemysByGroup
	// TArray<AActor*> GetAllInSightEnemysByGroup(class AActor* InAIPawn);                                                      // [0x60479ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAllHadSeenEnemysBySelf
	// TArray<AActor*> GetAllHadSeenEnemysBySelf(class AActor* InAIPawn);                                                       // [0x60478e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAllHadSeenEnemysByGroup
	// TArray<AActor*> GetAllHadSeenEnemysByGroup(class AActor* InAIPawn);                                                      // [0x604775c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAllAllyDeathInfo
	// void GetAllAllyDeathInfo(class AActor* InAIPawn, TArray<FAIGroupAllyDeathInfo>& OutDeathInfoList);                       // [0x6047550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAliveTeamMembers
	// void GetAliveTeamMembers(class AActor* AIPawn, class AActor* Player, TArray<ACharacter*>& OutTeamMembers);               // [0x6047148] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAIPeekCount
	// int32_t GetAIPeekCount(class AActor* AIPawn);                                                                            // [0x60465c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAimingTypeWeightInRuntime
	// float GetAimingTypeWeightInRuntime(class AActor* InAIPawn, EAIBodyBulkType InBodyBulk, bool bIsForPlayer);               // [0x6046d0c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAimingPoint
	// FVector GetAimingPoint(class AActor* AIPawn);                                                                            // [0x60469e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAimingOffset
	// FVector GetAimingOffset(class AActor* AIPawn, float WeakenTime);                                                         // [0x6046658] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAIHatredList
	// TArray<UNPCAITargetInfo*> GetAIHatredList(class AActor* AIPawn);                                                         // [0x60464c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAICallUpResult
	// char GetAICallUpResult(class AActor* AIPawn);                                                                            // [0x6046428] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAICallUpReason
	// char GetAICallUpReason(class AActor* AIPawn);                                                                            // [0x6046390] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAIBeTakeDamageDetail
	// void GetAIBeTakeDamageDetail(class AActor* AIPawn, class ACharacter*& DamageCauser, FVector& CauserLocation, FVector& TakerLocation, float& DamageValue); // [0x6045f3c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAIBeenHitCount
	// int32_t GetAIBeenHitCount(class AActor* AIPawn);                                                                         // [0x604624c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.GetAIAcceptedSceneEventsInProgress
	// void GetAIAcceptedSceneEventsInProgress(class AActor* AIPawn, TArray<UAISceneEventMessage*>& SceneEvents);               // [0x6045d28] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.FindTargetInfo
	// class UNPCAITargetInfo* FindTargetInfo(class AActor* InAIPawn, class AActor* InTargetPawn);                              // [0x6045acc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.FindRushDangerCanStopPoint
	// bool FindRushDangerCanStopPoint(class AActor* InAIPawn, FVector& InCheckPoint, FVector& StopPoint, float InBackDist);    // [0x60457e4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.FindPathToPointAndLength
	// TArray<FVector> FindPathToPointAndLength(class UObject* WorldContext, class ACharacter* AIPawn, float& OutPathLength, float& OutPathCost, bool& bFind, FVector& InPointStart, FVector& InPointToGo, EPathExistenceTestMode TestMode); // [0x6045450] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.FindPathToPoint
	// TArray<FVector> FindPathToPoint(class AActor* InAIPawn, FVector& InPointStart, FVector& InPointToGo);                    // [0x604512c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.FindAmbushAgainstPoint
	// bool FindAmbushAgainstPoint(class AActor* InAIPawn, FVector InPointStart, FVector InPointToGo, FVector& OutPoint);       // [0x60448d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.DismissDynamicGroupById
	// void DismissDynamicGroupById(int32_t DyGroupId, class UObject* InWorldContext);                                          // [0x60447ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.DismissDynamicGroup
	// void DismissDynamicGroup(class AActor* InAIPawn);                                                                        // [0x604452c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.DisableFlanking
	// void DisableFlanking(class AActor* InOwner);                                                                             // [0x6044464] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CreateDynamicGroup
	// class UNPCAIDynamicGroupInfo* CreateDynamicGroup(class AActor* InAIPawn, class UClass* DynamicGroupClass);               // [0x6043fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CloseDoor
	// void CloseDoor(class AActor* InAIPawn, class AActor* InDoor);                                                            // [0x6043c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.ClearAITargetScoreBlueprintOverride
	// void ClearAITargetScoreBlueprintOverride(class AActor* AIPawn);                                                          // [0x6043b98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CheckFireCanHitPenetration
	// bool CheckFireCanHitPenetration(class AActor* InAIPawn, FHitResult& InHitResult);                                        // [0x60437c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CheckCanStackGun
	// bool CheckCanStackGun(class AActor* InAIPawn, class AActor* InTargetPawn, EAIPose& OutAIPose, EAILeanType& OutAILean, FVector& OutShotPoint, float InCheckTargetRadius); // [0x6043530] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CheckCanGotoPoint
	// bool CheckCanGotoPoint(class UObject* WorldContext, FVector& InPointStart, FVector& InPointToGo, float LimitLenght);     // [0x6043328] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CheckAIGroupDBNOWipeOut
	// void CheckAIGroupDBNOWipeOut(class AActor* InAIPawn);                                                                    // [0x6042ffc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CanTryProne
	// bool CanTryProne(class AActor* AIPawn);                                                                                  // [0x6042938] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CanShootPointIfOnStandPoint
	// bool CanShootPointIfOnStandPoint(class AActor* AIPawn, FVector& StandPoint, FVector& TargetPoint, class AActor* IgnoreActor, bool bIgnoreCharacters); // [0x60426c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CanShootPoint
	// bool CanShootPoint(class AActor* InAIPawn, FVector InShootPoint, class AActor* IgnoreActor, bool bIgnoreCharacters);     // [0x6042508] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CanSeePointIfOnStandPoint
	// bool CanSeePointIfOnStandPoint(class AActor* AIPawn, FVector& StandPoint, FVector& TargetPoint, class AActor* IgnoreActor, bool bIgnoreCharacters); // [0x6042290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CanSeePoint
	// bool CanSeePoint(class AActor* InAIPawn, FVector InPoint, class AActor* IgnoreActor, bool bIgnoreCharacters);            // [0x60420d8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CanOpenDoor
	// bool CanOpenDoor(class AActor* InAIPawn, class AActor* InDoor);                                                          // [0x6041e14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CancelPickUpInventory
	// void CancelPickUpInventory(class AActor* InAIPawn);                                                                      // [0x6042b14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CalculateRequiredAimingTime
	// float CalculateRequiredAimingTime(class AActor* AIPawn, FVector& AimingPoint);                                           // [0x6041a84] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CalculatePathLengthToPoint
	// float CalculatePathLengthToPoint(class UObject* WorldContext, FVector& InPointStart, FVector& InPointToGo);              // [0x6041818] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CalculateGroupMembersGoalEnemy
	// void CalculateGroupMembersGoalEnemy(class AActor* InAIOwner);                                                            // [0x6041590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.CalcPathToPoint
	// void CalcPathToPoint(class AActor* InOwner, FVector InPosition, FNPCAIMoveRequestCustomDataImpl& MoveRequestCustomData, FNPCAINavPathForBP& OutNavPath); // [0x6041394] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AIUseInventoryByClass
	// bool AIUseInventoryByClass(class AActor* InAIPawn, class UClass* InventoryClass);                                        // [0x60401c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AIStopFire
	// void AIStopFire(class AActor* AIPawn);                                                                                   // [0x603fed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AIStartFire
	// bool AIStartFire(class AActor* AIPawn);                                                                                  // [0x603fbc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AIGiveUpSceneEvent
	// void AIGiveUpSceneEvent(class AActor* AIPawn, class UAISceneEventMessage* SceneEvent);                                   // [0x603fa90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AICompleteSceneEvent
	// void AICompleteSceneEvent(class AActor* AIPawn, class UAISceneEventMessage* SceneEvent);                                 // [0x603f8e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AIAcceptSceneEvent
	// bool AIAcceptSceneEvent(class AActor* AIPawn, class UAISceneEventMessage* SceneEvent);                                   // [0x603f7fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AddToGroupEnemy
	// void AddToGroupEnemy(class AActor* InAIPawn, class AActor* InEnemy, bool IsTemporary, float TemporaryTime, bool IsLetOthersAllyKnow); // [0x6040f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AddToGroupAlly
	// void AddToGroupAlly(class AActor* InAIPawn, class AActor* InTargetPawn);                                                 // [0x6040c58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AddInventoryToIgnorePickUp
	// void AddInventoryToIgnorePickUp(class AActor* InAIPawn, class AActor* Inventory);                                        // [0x604088c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAISubSystemStatics.AddAimingTypeInRuntime
	// void AddAimingTypeInRuntime(class AActor* InAIPawn, EAIBodyBulkType InBodyBulk, float InWeight, bool bIsForPlayer);      // [0x604051c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAISystem
/// Size: 0x0150 (336 bytes) (0x000148 - 0x000150) align 8 MaxSize: 0x0150
class UNPCAISystem : public UAISystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/MFNPCAI.NPCAITacticSystemComponent
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
class UNPCAITacticSystemComponent : public UNPCAISubSystemComponent
{ 
public:
	int32_t                                            OccupyPointID;                                              // 0x0108   (0x0004)  
	float                                              TimeGetEnemyList;                                           // 0x010C   (0x0004)  
	class UCoverSystem*                                CoverSystem;                                                // 0x0110   (0x0008)  
	class ATacticSystemActor*                          TacticSystemActor;                                          // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.UnOccupyTacticPoint
	// bool UnOccupyTacticPoint(int32_t PointId);                                                                               // [0x60666d4] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.SetCurrentTacticPointID
	// void SetCurrentTacticPointID(int32_t PointId);                                                                           // [0x60661f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.PointIsOccupy
	// bool PointIsOccupy(int32_t PointId);                                                                                     // [0x6065edc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.OccupyTacticPoint
	// bool OccupyTacticPoint(int32_t PointId);                                                                                 // [0x6065e30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.IsSafeForOneEnemy
	// bool IsSafeForOneEnemy(FVector& InPointLocation, TArray<FActionPointRadianSafe>& InOrientRadianSafetys, FVector& InEnemyPos); // [0x6065b10] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.IsSafeForAllEnemy
	// bool IsSafeForAllEnemy(FVector& InPointLocation, TArray<FActionPointRadianSafe>& InOrientRadianSafetys);                 // [0x6065960] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetTotalTacticPointNum
	// int32_t GetTotalTacticPointNum();                                                                                        // [0x60656d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetTacticPointData
	// bool GetTacticPointData(int32_t PointId, FTacticPointData& PointData);                                                   // [0x6065510] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetPointOccupiedTaker
	// class AActor* GetPointOccupiedTaker(int32_t PointId);                                                                    // [0x6065450] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetKeyRoutePointDataByUniqueIndex
	// bool GetKeyRoutePointDataByUniqueIndex(int32_t PointUniqueIndex, FKeyRoutePointData& PointData);                         // [0x6065198] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetKeyRoutePointData
	// bool GetKeyRoutePointData(int32_t PointId, FKeyRoutePointData& PointData);                                               // [0x6065048] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetFarthestTacticPointInList
	// bool GetFarthestTacticPointInList(FVector InCenter, TArray<FTacticPointData>& InPointsList, FTacticPointData& OutPoint); // [0x6064b74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetCurrentTacticPointID
	// int32_t GetCurrentTacticPointID();                                                                                       // [0x5cb6e68] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetCurrentTacticPointData
	// bool GetCurrentTacticPointData(FTacticPointData& PointData);                                                             // [0x606495c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.GetClosestTacticPointInList
	// bool GetClosestTacticPointInList(FVector InCenter, TArray<FTacticPointData>& InPointsList, FTacticPointData& OutPoint);  // [0x60646a4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.FindTacticPointsInRadius
	// bool FindTacticPointsInRadius(FVector InCenter, float InRadius, TArray<FTacticPointData>& OutPoints, TArray<ETacticPointType>& InFindType, float ZLimit); // [0x6063e3c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.FindSafeToPointByKeyRoute
	// bool FindSafeToPointByKeyRoute(FVector& ToPoint, float InRadius, TArray<FKeyRoutePointData>& OutPaths, int32_t InDepth); // [0x6063c5c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.FindPathByKeyRoute
	// bool FindPathByKeyRoute(FKeyRoutePointData& FromPoint, FKeyRoutePointData& ToPoint, EAIKeyRouteQueryType QueryType, TArray<FKeyRoutePointData>& OutPaths); // [0x60639e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.FindNearestSingleTacticPoint
	// bool FindNearestSingleTacticPoint(FVector InCenter, float InRadius, FTacticPointData& OutPoint, TArray<ETacticPointType>& InFindType, float ZLimit); // [0x6063778] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.FindBestKeyRoutePoint
	// bool FindBestKeyRoutePoint(FVector& InCenter, float InRadius, FKeyRoutePointData& OutPointData, EAIKeyRouteQueryType QueryType); // [0x6063558] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CheckPointIsAvailable
	// bool CheckPointIsAvailable(int32_t PointId);                                                                             // [0x60634ac] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CheckPointIsActivationForAim
	// bool CheckPointIsActivationForAim(int32_t PointId, class AActor* ThreatTarget, FVector ThreatTargetLoc, FRotator& AimRot); // [0x6063300] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CheckActivation
	// bool CheckActivation(int32_t PointId);                                                                                   // [0x6063254] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CanShootToTarget
	// bool CanShootToTarget(int32_t PointId, class AActor* InEnemy);                                                           // [0x6063158] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CanOverWatch
	// bool CanOverWatch(int32_t PointId, class AActor* ThreatTarget, FVector InThreatTargetLocation, FRotator& OutAimRot);     // [0x6062f94] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CanEscape
	// bool CanEscape(int32_t PointId, FVector InPosition);                                                                     // [0x6062e88] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CalculateTacticPointIsSafeById
	// bool CalculateTacticPointIsSafeById(int32_t PointId);                                                                    // [0x6062de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CalculateTacticPointIsSafe
	// bool CalculateTacticPointIsSafe(FTacticPointData& PointData);                                                            // [0x6062c24] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CalculateKeyRouteSaftyInDepth
	// bool CalculateKeyRouteSaftyInDepth(FKeyRoutePointData& InKeyRoutePointData, TArray<int32_t>& OutPointsIndexs, int32_t InDepth, bool bSort); // [0x6062978] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITacticSystemComponent.CalculateKeyRoutePointIsSafe
	// bool CalculateKeyRoutePointIsSafe(FKeyRoutePointData& InKeyRoutePointData);                                              // [0x6062874] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAITargetInfo
/// Size: 0x0360 (864 bytes) (0x000060 - 0x000360) align 8 MaxSize: 0x0360
class UNPCAITargetInfo : public UNPCAITargetInfoBase
{ 
public:
	SDK_UNDEFINED(16,1598) /* TArray<EAIBodyPartType> */ __um(BodyPartsInArmor);                                   // 0x0060   (0x0010)  
	float                                              LastCalculateBodyPartsInArmorTime;                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x25C];                                     // 0x0074   (0x025C)  MISSED
	class AActor*                                      Person;                                                     // 0x02D0   (0x0008)  
	class AActor*                                      AIPawn;                                                     // 0x02D8   (0x0008)  
	class UNPCAIEnemyGroupSingleInfo*                  EnemyGroupSingleInfo;                                       // 0x02E0   (0x0008)  
	class UNPCAIPropertyComponent_Look*                LookProps;                                                  // 0x02E8   (0x0008)  
	class UNPCAIPropertyComponent_Aiming*              AimingProps;                                                // 0x02F0   (0x0008)  
	SDK_UNDEFINED(1,1599) /* EAIEnemyVisibilityType */ __um(VisibileOnlyBySense);                                  // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x67];                                      // 0x02F9   (0x0067)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAITargetInfo.ShallSeenEnemy
	// bool ShallSeenEnemy();                                                                                                   // [0x6066668] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.ShallKnowEnemy
	// bool ShallKnowEnemy();                                                                                                   // [0x6066644] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.SetVisibleFlashLight
	// void SetVisibleFlashLight(bool InVisible);                                                                               // [0x60665a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.SetVisible
	// void SetVisible(bool InVisible);                                                                                         // [0x6066504] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.SetEnemyGroupSingleInfo
	// void SetEnemyGroupSingleInfo(class UNPCAIEnemyGroupSingleInfo* Info);                                                    // [0x606628c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITargetInfo.SetCanShoot
	// void SetCanShoot(bool Value);                                                                                            // [0x606614c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.ResetCalculatePartInterval
	// void ResetCalculatePartInterval();                                                                                       // [0x6065fec] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITargetInfo.RandomUpperPartToShoot
	// void RandomUpperPartToShoot();                                                                                           // [0x6065fd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.RandomArmToShoot
	// void RandomArmToShoot();                                                                                                 // [0x6065f84] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsWantShootArmorPart
	// bool IsWantShootArmorPart();                                                                                             // [0x6065e18] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsVisibleFlashLight
	// bool IsVisibleFlashLight(float FlashLightSeeDuration);                                                                   // [0x6065d70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsVisible
	// bool IsVisible();                                                                                                        // [0x6065d4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsRealVisible
	// bool IsRealVisible();                                                                                                    // [0x6065940] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsPersonValid
	// bool IsPersonValid();                                                                                                    // [0x606591c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsInShotProtectedTime
	// bool IsInShotProtectedTime();                                                                                            // [0x60658f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsHideInGrassOrSmoke
	// bool IsHideInGrassOrSmoke();                                                                                             // [0x60658e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsFullDissapear
	// bool IsFullDissapear();                                                                                                  // [0x60658bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsDBNO
	// bool IsDBNO();                                                                                                           // [0x6065844] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.IsArmorCanProtected
	// bool IsArmorCanProtected(EAIBodyPartType PartType, bool bReCalculate);                                                   // [0x6065748] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.HaveSeenPerson
	// bool HaveSeenPerson();                                                                                                   // [0x6065724] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetVisibleOnlyBySense
	// EAIEnemyVisibilityType GetVisibleOnlyBySense();                                                                          // [0x5dac4f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetPersonDeadTime
	// float GetPersonDeadTime();                                                                                               // [0x5e82400] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetPersonActorLocation
	// FVector GetPersonActorLocation();                                                                                        // [0x606541c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetPerson
	// class AActor* GetPerson();                                                                                               // [0x6065404] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetPartTypeToShoot
	// EAIBodyPartType GetPartTypeToShoot();                                                                                    // [0x60653ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetPartToShootOfGrassRatio
	// float GetPartToShootOfGrassRatio();                                                                                      // [0x60653c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetPartToShootOfBarrier
	// ENPCAISenseBarrier GetPartToShootOfBarrier();                                                                            // [0x60653a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetPartToShoot
	// FVector GetPartToShoot();                                                                                                // [0x606536c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetLastHatredScore
	// float GetLastHatredScore();                                                                                              // [0x6065354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetLastFireTime
	// float GetLastFireTime();                                                                                                 // [0x606532c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetLastFireMeTime
	// float GetLastFireMeTime();                                                                                               // [0x6065314] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetLastFireMeDistance
	// float GetLastFireMeDistance();                                                                                           // [0x5db8fe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetInSightBodyPartsLocation
	// float GetInSightBodyPartsLocation(TArray<FVector>& BodyPartsLocation);                                                   // [0x6064efc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetHatredValue
	// int32_t GetHatredValue();                                                                                                // [0x6064ed8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetGroupSharedTimeLastSeen
	// float GetGroupSharedTimeLastSeen();                                                                                      // [0x6064eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetGroupSharedPositionLastSeen
	// FVector GetGroupSharedPositionLastSeen();                                                                                // [0x6064e24] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetGroupSharedPositionEstimate
	// FVector GetGroupSharedPositionEstimate();                                                                                // [0x6064d94] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetEnemyLastPosition
	// FVector GetEnemyLastPosition();                                                                                          // [0x6064b4c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetEnemyGroupSingleInfo
	// class UNPCAIEnemyGroupSingleInfo* GetEnemyGroupSingleInfo();                                                             // [0x6064b28] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetEnemyEstimatePosition
	// FVector GetEnemyEstimatePosition();                                                                                      // [0x5e9acfc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetDistance
	// float GetDistance();                                                                                                     // [0x6064b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetCurrentPositon
	// FVector GetCurrentPositon();                                                                                             // [0x6064928] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetCanShootBodyParts
	// void GetCanShootBodyParts(TMap<EAIBodyPartType, FVector>& BodyPartsLocation);                                            // [0x6064538] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetCanSeeBodyPartsNum
	// int32_t GetCanSeeBodyPartsNum();                                                                                         // [0x6064514] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetBodyPartVisibleInfo
	// bool GetBodyPartVisibleInfo(EAIBodyPartType InBodyPart, FAIBodyPartVisibilityInfo& OutInfo);                             // [0x6064404] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetBodyPartCanShoot
	// bool GetBodyPartCanShoot(EAIBodyPartType& InBodyPart);                                                                   // [0x6064324] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetBeenShootRecord
	// TArray<FAIBeenShootRecord> GetBeenShootRecord();                                                                         // [0x60642d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetAllBodyPartVisibleInfo
	// TArray<FAIBodyPartVisibilityInfo> GetAllBodyPartVisibleInfo();                                                           // [0x6064130] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.GetAlivePerson
	// class AActor* GetAlivePerson();                                                                                          // [0x606410c] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MFNPCAI.NPCAITargetInfo.ForceBodyPartForShoot
	// void ForceBodyPartForShoot(EAIBodyPartType BodyPart);                                                                    // [0x6064074] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITargetInfo.CanShoot
	// bool CanShoot();                                                                                                         // [0x6063140] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.CalculatePartToShoot
	// void CalculatePartToShoot(bool bIgnoreInterval);                                                                         // [0x6062b88] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITargetInfo.CalculateBodyPartForShoot
	// void CalculateBodyPartForShoot(bool InCanHead, bool InCanChest, bool InStomach, bool InCanLArm, bool InCanRArm, bool InCanLLeg, bool InCanRLeg); // [0x60625bc] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITargetInfo.CalculateBodyPartByEnemyArmor
	// void CalculateBodyPartByEnemyArmor();                                                                                    // [0x60625a8] Final|Native|Public  
};

/// Class /Script/MFNPCAI.NPCAITargetScoreBlueprintBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAITargetScoreBlueprintBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAITargetScoreBlueprintBase.CalculateTargetScore
	// float CalculateTargetScore(class ACharacter* SelfAIPawn, class UNPCAITargetInfo* Target);                                // [0x6067588] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/MFNPCAI.AIGroupAllyDeathInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FAIGroupAllyDeathInfo
{ 
	float                                              DeathTime;                                                  // 0x0000   (0x0004)  
	FVector                                            DeathLocation;                                              // 0x0004   (0x000C)  
	FVector                                            KillerLocation;                                             // 0x0010   (0x000C)  
};

/// Class /Script/MFNPCAI.NPCAITeam
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNPCAITeam : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	FAIShotCountStat                                   AllyBeHitCount;                                             // 0x0038   (0x0010)  
	TArray<class AActor*>                              AllyList;                                                   // 0x0048   (0x0010)  
	TArray<class AActor*>                              PlayerAllyList;                                             // 0x0058   (0x0010)  
	TArray<class UNPCAIEnemyGroupSingleInfo*>          EnemyInfoList;                                              // 0x0068   (0x0010)  
	TArray<class AActor*>                              NeutralList;                                                // 0x0078   (0x0010)  
	TArray<class UNPCAIAttentionPoint*>                SuspectedPoints;                                            // 0x0088   (0x0010)  
	TArray<FAIGroupAllyDeathInfo>                      AllyDeathList;                                              // 0x0098   (0x0010)  
	class UNPCAIGroupRequestController*                GroupRequestController;                                     // 0x00A8   (0x0008)  
	class UActorComponent*                             FactionComponent;                                           // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAITeam.UpdateTemporaryEnemyEndTime
	// void UpdateTemporaryEnemyEndTime(class AActor* InEnemy, float InEndTime);                                                // [0x606c874] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.UpdateGroupEnemyEstimatePosition
	// void UpdateGroupEnemyEstimatePosition(class AActor* InEnemy, FVector InPosition);                                        // [0x606c6cc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.UpdateEnemyVisibleInfo
	// void UpdateEnemyVisibleInfo(class AActor* InEnemy, FVector InLastSeenPosition, float InLastSeenTime);                    // [0x606c4d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.SwitchToEnemy
	// bool SwitchToEnemy(class AActor* InMember);                                                                              // [0x606c2dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.SwitchEnemyToNeutral
	// bool SwitchEnemyToNeutral(class AActor* InEnemy);                                                                        // [0x606c050] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.SwitchEnemyToAlly
	// bool SwitchEnemyToAlly(class AActor* InEnemy);                                                                           // [0x606bdd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.SetTemporaryEnemyInfo
	// void SetTemporaryEnemyInfo(class AActor* InEnemy, bool InIsTemporaryEnemy, float InEndTime, bool InIsFromAlly);          // [0x606bc3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.SetEnemyHartedValue
	// void SetEnemyHartedValue(class AActor* InEnemy, int32_t InHartedValue, float IndateTime);                                // [0x606ba30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveSuspectedPointByType
	// void RemoveSuspectedPointByType(ENPCPlaceForCheckType InPlaceType, class AActor* InCreator);                             // [0x606b948] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveSuspectedPoint
	// void RemoveSuspectedPoint(class ACharacter* AIPawn, class UNPCAIAttentionPoint* InAttentionPoint, bool bRemoveNearCanSee); // [0x606b3e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveNeutral
	// void RemoveNeutral(class AActor* InNeutral);                                                                             // [0x606b2fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveNearSuspectedPoint
	// void RemoveNearSuspectedPoint(class UObject* WorldContext, FVector& InLocation, float XYRange, float ZRange, float PointExistTime); // [0x606af7c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveFromTeam
	// bool RemoveFromTeam(class AActor* C, bool bRemoveAll);                                                                   // [0x606ae7c] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveEnemyInfo
	// void RemoveEnemyInfo(class UNPCAIEnemyGroupSingleInfo* SingleInfo);                                                      // [0x606acf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveEnemy
	// void RemoveEnemy(class AActor* InEnemy);                                                                                 // [0x606ab58] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.RemoveAlly
	// void RemoveAlly(class AActor* InAlly);                                                                                   // [0x606aabc] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.IsNeutral
	// bool IsNeutral(class AActor* InNeutral);                                                                                 // [0x606a488] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.IsGroupEnemy
	// bool IsGroupEnemy(class AActor* InEnemy);                                                                                // [0x606a3a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.IsEnoughAllyKillInRange
	// bool IsEnoughAllyKillInRange(class UObject* WorldContext, FVector& InSearchCenter, float& InSearchRange, float& InSearchTime, int32_t& InSearchCount); // [0x606a080] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAITeam.IsEnoughAllyDeathInRange
	// bool IsEnoughAllyDeathInRange(class UObject* WorldContext, FVector& InSearchCenter, float& InSearchRange, float& InSearchTime, int32_t& InSearchCount); // [0x6069d5c] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAITeam.IsAlly
	// bool IsAlly(class AActor* InAlly);                                                                                       // [0x6069cb0] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetYoungestSuspectedPoint
	// class UNPCAIAttentionPoint* GetYoungestSuspectedPoint(class AActor* InPawn, float InRadius, bool InPriorityDanger);      // [0x6069ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetValidPointsCount
	// int32_t GetValidPointsCount();                                                                                           // [0x6069a9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetTeamMembers
	// TArray<AActor*> GetTeamMembers();                                                                                        // [0x60698a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCAITeam.GetSuspectedPointsNum
	// int32_t GetSuspectedPointsNum();                                                                                         // [0x600eb68] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetSuspectedPoints
	// TArray<UNPCAIAttentionPoint*> GetSuspectedPoints();                                                                      // [0x6069758] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetPlayerAllyList
	// TArray<AActor*> GetPlayerAllyList();                                                                                     // [0x6069728] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITeam.GetNeutralsNum
	// int32_t GetNeutralsNum();                                                                                                // [0x6069710] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetNearestSuspectedPoint
	// class UNPCAIAttentionPoint* GetNearestSuspectedPoint(FVector& InLocation, float Range, float& OutMinDist);               // [0x6069588] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetNearEnemyNum
	// int32_t GetNearEnemyNum(FVector InCenter, float InRadius);                                                               // [0x6069384] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetLatestAllyDeathInfo
	// bool GetLatestAllyDeathInfo(FAIGroupAllyDeathInfo& OutDeathInfo);                                                        // [0x60692dc] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAITeam.GetGroupRequestController
	// class UNPCAIGroupRequestController* GetGroupRequestController();                                                         // [0x606920c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetGroupKnowEnemys
	// void GetGroupKnowEnemys(class AActor* AIPawn, float InRange, TArray<AActor*>& Enemys, int32_t& EnemysNum, bool bIncludeEnemys); // [0x6068db8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetFactionComp
	// class UActorComponent* GetFactionComp();                                                                                 // [0x606857c] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetEnemyNum
	// int32_t GetEnemyNum();                                                                                                   // [0x50ca388] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetEnemyInfoList
	// TArray<UNPCAIEnemyGroupSingleInfo*> GetEnemyInfoList();                                                                  // [0x6068528] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetEnemyInfo
	// class UNPCAIEnemyGroupSingleInfo* GetEnemyInfo(class AActor* InTarget);                                                  // [0x6068480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetEnemyHartedValue
	// int32_t GetEnemyHartedValue(class AActor* InEnemy);                                                                      // [0x606832c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.GetAllyTotalDeathNum
	// int32_t GetAllyTotalDeathNum();                                                                                          // [0x606801c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITeam.GetAllyList
	// TArray<AActor*> GetAllyList();                                                                                           // [0x600ea40] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCAITeam.GetAllInSightEnemys
	// void GetAllInSightEnemys(float InWorldTimeSeconds, TArray<AActor*>& InEnemys);                                           // [0x6067cbc] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAITeam.GetAllHadSeenEnemys
	// void GetAllHadSeenEnemys(float InWorldTimeSeconds, TArray<AActor*>& InEnemys);                                           // [0x6067ba8] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAITeam.GetAllAllyDeathInfo
	// void GetAllAllyDeathInfo(TArray<FAIGroupAllyDeathInfo>& OutDeathInfoList);                                               // [0x6067a44] Final|Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAITeam.FilterInValidTemporaryEnemys
	// void FilterInValidTemporaryEnemys(float InTimeSeconds);                                                                  // [0x606774c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITeam.FilterInValidSuspectedPoints
	// void FilterInValidSuspectedPoints();                                                                                     // [0x6067738] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITeam.FilterInValidEnemys
	// void FilterInValidEnemys(float DeleteInterval);                                                                          // [0x606769c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITeam.FilterInValidAllyAndNeutrals
	// void FilterInValidAllyAndNeutrals();                                                                                     // [0x6067688] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAITeam.AddToTeam
	// bool AddToTeam(class AActor* C);                                                                                         // [0x60674dc] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.AddPointToSearch
	// class UNPCAIAttentionPoint* AddPointToSearch(class AActor* InActor, FVector InPosition, ENPCPlaceForCheckType InPlaceType, class AActor* InCreator); // [0x6067334] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.AddNeutral
	// void AddNeutral(class AActor* InNeutral);                                                                                // [0x606720c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.AddEnemyForAllyKnow
	// void AddEnemyForAllyKnow(class AActor* InEnemy);                                                                         // [0x6066d08] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.AddEnemy
	// class UNPCAIEnemyGroupSingleInfo* AddEnemy(class AActor* InEnemy);                                                       // [0x6066bc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeam.AddAllyDeathInfo
	// void AddAllyDeathInfo(FVector& InDeathLocation, FVector& InKillerLocation, float InNowTime);                             // [0x6066a14] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAITeam.AddAlly
	// void AddAlly(class AActor* InAlly);                                                                                      // [0x6066978] Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAITeamInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAITeamInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAITeamInterface.RemoveAlly
	// void RemoveAlly(class AActor* InAlly);                                                                                   // [0x5c64eb0] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.IsAlly
	// bool IsAlly(class AActor* InAlly);                                                                                       // [0x6069c04] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.HasNoDBNOAlly
	// bool HasNoDBNOAlly(class AActor* InSelf);                                                                                // [0x6052aa4] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetNearestAlly
	// class AActor* GetNearestAlly(class AActor* AIPawn, float MaxRange);                                                      // [0x606948c] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetHealthyAllyNum
	// int32_t GetHealthyAllyNum(class AActor* IgnorePawn);                                                                     // [0x6069230] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetAllyNum
	// int32_t GetAllyNum();                                                                                                    // [0x6067ff8] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetAllyList
	// TArray<AActor*> GetAllyList();                                                                                           // [0x6067fcc] Native|Public        
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetAllyGoalEnemys
	// void GetAllyGoalEnemys(TArray<UNPCAITargetInfo*>& GoalEnemysList);                                                       // [0x6067ecc] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetAllyGoalEnemyNearest
	// class UNPCAITargetInfo* GetAllyGoalEnemyNearest(class AActor* AIPawn, float InRange);                                    // [0x6067dd0] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetAliveAllysNum
	// int32_t GetAliveAllysNum(class AActor* IgnorePawn, bool bContainDBNO);                                                   // [0x6067944] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.GetAliveAllys
	// void GetAliveAllys(class AActor* IgnorePawn, bool bContainDBNO, TArray<AActor*>& AliveAllys);                            // [0x60677e8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.FilterInValidAllys
	// void FilterInValidAllys();                                                                                               // [0x60081bc] Native|Public        
	// Function /Script/MFNPCAI.NPCAITeamInterface.AllyPostDied
	// void AllyPostDied(class AActor* InAlly);                                                                                 // [0x5dd24d4] Native|Public|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITeamInterface.AddAlly
	// void AddAlly(class AActor* InAlly);                                                                                      // [0x5c63ed0] Native|Public|BlueprintCallable 
};

/// Class /Script/MFNPCAI.NPCAIThrowSystem
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UNPCAIThrowSystem : public UWorldSubsystem
{ 
public:
	float                                              INVALID_THROW_ANGLE_BP;                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCAIThrowSystem.PretestGrenadeTrajectory
	// FHitResult PretestGrenadeTrajectory(class UObject* WorldContextObject, class AActor* AttackerActor, FVector& ThrowLocation, FVector& TargetLocation, float InitSpeed, float ThrowAngle, float& FlyingTime, FVector& OutLastReachablePoint, class AActor* TargetActor, float GrenadeRadius, class UClass* IgnoreClass); // [0x606a570] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIThrowSystem.GetThrowRotator
	// FRotator GetThrowRotator(FVector& ActorLocation, FVector& TargetLocation, float ThrowAngle);                             // [0x60698d4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIThrowSystem.GetFlyingTime
	// float GetFlyingTime(FVector& ThrowLocation, FVector& TargetLocation, float InitSpeed, float ThrowAngle);                 // [0x6068bc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIThrowSystem.GetFesiableGrenadeThrowAngle
	// float GetFesiableGrenadeThrowAngle(class UObject* WorldContextObject, class AActor* AttackerActor, FVector& ActorLocation, FVector& TargetLocation, float InitSpeed, EAIPose PoseType, EAILeanType LeanType, bool bMustThrow, bool bHigherFirst, float& FlyingTime, FVector& OutLastReachablePoint, class AActor* TargetActor, float GrenadeRadius, class UClass* IgnoreClass, bool bTryOnlyOneTrace); // [0x60685a8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAIThrowSystem.GetCandidateGrenadeThrowAngles
	// TArray<float> GetCandidateGrenadeThrowAngles(class UObject* WorldContextObject, FVector& ThrowLocation, FVector& TargetLocation, float InitSpeed); // [0x6068034] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/MFNPCAI.AITrackLOG
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAITrackLOG
{ 
	SDK_UNDEFINED(1,1600) /* EAITrackLOGType */        __um(LogType);                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	int64_t                                            LOGTime;                                                    // 0x0008   (0x0008)  
	FString                                            LOGKValues;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/MFNPCAI.AITrackLOGUnit
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UAITrackLOGUnit : public UObject
{ 
public:
	class AActor*                                      AIPawn;                                                     // 0x0028   (0x0008)  
	FString                                            AIName;                                                     // 0x0030   (0x0010)  
	TArray<FAITrackLOG>                                TrackLOGList;                                               // 0x0040   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCAITrackLogger
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAITrackLogger : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAITrackLogger.TrackLOG_Shoot
	// void TrackLOG_Shoot(class AActor* AIPawn, FString EnemyName, bool bUsePredestined, char PartWantToShoot, FVector& PositionWantToShoot, char PartActualShoot, FVector& PositionActualShoot); // [0x606e264] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCAITrackLogger.TrackLOG_AimingTime
	// void TrackLOG_AimingTime(class AActor* AIPawn, FString EnemyName, float ElapsedAimingTime, float RequiredAimingTime, float AimingProgress); // [0x606e0a8] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAITrackLogger.TrackLOG_AimingPredestined
	// void TrackLOG_AimingPredestined(class AActor* AIPawn, FString EnemyName, bool IsHit, float FinalRate, float RandomValue, float PredestinedRate, int32_t RepeatIndex, float ShotHeadRate, float AIMoveRate, float EnemyMoveRate, float ArmBrokenRate, int32_t ArmBrokenCount, float BattleDurationRate, float InCoverSafeRate, float BeHitedRate, float WeaponAdsMoaBiasRate, float GrassRate, float FlashLightRate); // [0x606db1c] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAITrackLogger.TrackLOG_AimingBodyPart
	// void TrackLOG_AimingBodyPart(class AActor* AIPawn, FString EnemyName, char PartAiming, int8_t bHeadCanSee, int8_t bChestCanSee, int8_t bStomachCanSee, int8_t bLArmCanSee, int8_t bRArmCanSee, int8_t bLLegCanSee, int8_t bRLegCanSee); // [0x606d7e0] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCAITrackLogger.TrackLOG
	// void TrackLOG(class AActor* AIPawn, EAITrackLOGType& LogType, TArray<FString>& KValues);                                 // [0x606d648] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFNPCAI.NPCAITrackLogger.ToTrackLOGString
	// FString ToTrackLOGString(FAITrackLOG& LOGData, FString TemplateStr, bool bIncludeTime);                                  // [0x606d3a8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCAITrackLogger.PrintTrackLOG
	// void PrintTrackLOG(class AActor* AIPawn, class UNPCAIGlobalSharedInfo* SharedVariables, EAITrackLOGType& LogType, TArray<FString>& KValues); // [0x606d1fc] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/MFNPCAI.AIPortraitBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAIPortraitBase : public UObject
{ 
public:
};

/// Class /Script/MFNPCAI.AIPortraitDefault
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAIPortraitDefault : public UAIPortraitBase
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIUALootSubAreaVolumeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIUALootSubAreaVolumeInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCAIUALootSubAreaVolumeInterface.GetBattleIntensityExpectation
	// int32_t GetBattleIntensityExpectation();                                                                                 // [0x606f114] Native|Public|Const  
};

/// Class /Script/MFNPCAI.NPCAIVolumeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAIVolumeInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.NPCAIZoneGroupInfo
/// Size: 0x00E8 (232 bytes) (0x0000C0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNPCAIZoneGroupInfo : public UNPCAITeam
{ 
public:
	int32_t                                            FactionType;                                                // 0x00C0   (0x0004)  
	int32_t                                            GroupType;                                                  // 0x00C4   (0x0004)  
	int32_t                                            SquadID;                                                    // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<class UNPCAIDynamicGroupInfo*>              DynamicGroupList;                                           // 0x00D0   (0x0010)  
	class UWorld*                                      WorldPrivate;                                               // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCAIZoneGroupInfo.GetDynamicGroupInfo
	// class UNPCAIDynamicGroupInfo* GetDynamicGroupInfo(int32_t GroupID);                                                      // [0x606f138] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIZoneGroupInfo.CreateDynamicGroup
	// class UNPCAIDynamicGroupInfo* CreateDynamicGroup(class AActor* InCreator, class UClass* DynamicGroupClass);              // [0x606e85c] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCAIZoneGroupInfo.BP_OnInitGroupMessage
	// void BP_OnInitGroupMessage(int32_t InGroupType);                                                                         // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIZoneGroupInfo.BP_OnAllyRemoved
	// void BP_OnAllyRemoved(class AActor* InAlly);                                                                             // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIZoneGroupInfo.BP_OnAllyDied
	// void BP_OnAllyDied(class AActor* InAlly);                                                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIZoneGroupInfo.BP_OnAllyAdded
	// void BP_OnAllyAdded(class AActor* InAlly);                                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCAIZoneGroupInfo.AutoReleaseDynamicGroup
	// void AutoReleaseDynamicGroup();                                                                                          // [0x606e848] Final|Native|Public  
};

/// Class /Script/MFNPCAI.NPCBehaviorLOD
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UNPCBehaviorLOD : public UObject
{ 
public:
	class ACharacter*                                  OwnerPawn;                                                  // 0x0028   (0x0008)  
	bool                                               bConsiderDistance;                                          // 0x0030   (0x0001)  
	bool                                               bConsiderVisible;                                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              MinDistance;                                                // 0x0034   (0x0004)  
	float                                              MaxDistance;                                                // 0x0038   (0x0004)  
	bool                                               bConsiderVisionAngle;                                       // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              VisionAngleInDegree;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<class UNPCBehaviorLODActionTick*>           Actions;                                                    // 0x0048   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBehaviorLODAction
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNPCBehaviorLODAction : public UObject
{ 
public:
	bool                                               bLoop;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              LoopInterval;                                               // 0x002C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0030   (0x0008)  MISSED
	class ACharacter*                                  OwnerPawn;                                                  // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCBehaviorLODAction.OnLoopActionTimer
	// void OnLoopActionTimer();                                                                                                // [0x1a9df80] Native|Protected     
};

/// Class /Script/MFNPCAI.NPCBehaviorLODActionTick
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNPCBehaviorLODActionTick : public UObject
{ 
public:
	class ACharacter*                                  OwnerPawn;                                                  // 0x0028   (0x0008)  
	class UNPCBehaviorLODSystemComponent*              LODSysComp;                                                 // 0x0030   (0x0008)  
	float                                              ControllerTickInterval;                                     // 0x0038   (0x0004)  
	float                                              CharacterTickInterval;                                      // 0x003C   (0x0004)  
};

/// Struct /Script/MFNPCAI.ComponentInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FComponentInfo
{ 
	class UActorComponent*                             Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/MFNPCAI.NPCBehaviorLODSystemComponent
/// Size: 0x0178 (376 bytes) (0x000108 - 0x000178) align 8 MaxSize: 0x0178
class UNPCBehaviorLODSystemComponent : public UNPCAISubSystemComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0108   (0x0008)  MISSED
	float                                              UpdateLODInterval;                                          // 0x0110   (0x0004)  
	bool                                               bPMCAIAsPlayer;                                             // 0x0114   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0115   (0x0003)  MISSED
	TArray<class UNPCBehaviorLOD*>                     LODs;                                                       // 0x0118   (0x0010)  
	float                                              EnemyLeaveTimeCanLODEnabled;                                // 0x0128   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	class UNPCBehaviorLOD*                             CurrLODCache;                                               // 0x0130   (0x0008)  
	bool                                               bIgnoreUpdate;                                              // 0x0138   (0x0001)  
	bool                                               bControllerOringinalTickEnabled;                            // 0x0139   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x013A   (0x0002)  MISSED
	float                                              ControllerOringinalTickInterval;                            // 0x013C   (0x0004)  
	bool                                               bCharacterOringinalTickEnabled;                             // 0x0140   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              CharacterOringinalTickInterval;                             // 0x0144   (0x0004)  
	TArray<FComponentInfo>                             CharacterCachedCompList;                                    // 0x0148   (0x0010)  
	TArray<FComponentInfo>                             ControllerCachedCompList;                                   // 0x0158   (0x0010)  
	bool                                               bHasAnyPlayerAround;                                        // 0x0168   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0169   (0x0007)  MISSED
	class UNPCAIMemorySystemComponent*                 MemroySystemComponent;                                      // 0x0170   (0x0008)  


	/// Functions
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.UpdateBehaviorLODTimer
	// void UpdateBehaviorLODTimer();                                                                                           // [0x19e39a0] Native|Protected     
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.ShouldRunLODTimer
	// bool ShouldRunLODTimer();                                                                                                // [0x606f3f0] Final|Native|Protected|Const 
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.RestoreTick
	// void RestoreTick();                                                                                                      // [0x606f3bc] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.OnAIBeginToRunBT
	// void OnAIBeginToRunBT();                                                                                                 // [0x606f3a8] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.HasAnyPlayerAround
	// bool HasAnyPlayerAround();                                                                                               // [0x606f288] Final|Native|Protected|Const 
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.EnableTick
	// void EnableTick();                                                                                                       // [0x606f100] Final|Native|Public  
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.EnableCharacterTick
	// void EnableCharacterTick(class ACharacter* Character);                                                                   // [0x606eee0] Final|Native|Static|Public 
	// Function /Script/MFNPCAI.NPCBehaviorLODSystemComponent.DisableCharacterTick
	// void DisableCharacterTick(class ACharacter* Character);                                                                  // [0x606ecc4] Final|Native|Static|Public 
};

/// Class /Script/MFNPCAI.NPCBTDecorator
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
class UNPCBTDecorator : public UBTDecorator
{ 
public:
	bool                                               bWithTime : 1;                                              // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            TagText;                                                    // 0x0070   (0x0010)  
	FString                                            Message;                                                    // 0x0080   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBTDecorator_AIPropertyComparison
/// Size: 0x00C8 (200 bytes) (0x000090 - 0x0000C8) align 8 MaxSize: 0x00C8
class UNPCBTDecorator_AIPropertyComparison : public UBTDecorator_BlackboardBase
{ 
public:
	class UClass*                                      AIPropertyComponent;                                        // 0x0090   (0x0008)  
	FString                                            ComponentFunctionName;                                      // 0x0098   (0x0010)  
	SDK_UNDEFINED(1,1601) /* TEnumAsByte<EBasicKeyOperation> */ __um(BoolOperation);                               // 0x00A8   (0x0001)  
	SDK_UNDEFINED(1,1602) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(ArithmeticOperation);                    // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              FloatValue;                                                 // 0x00AC   (0x0004)  
	int32_t                                            IntValue;                                                   // 0x00B0   (0x0004)  
	bool                                               bUseBlackboardValue;                                        // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FString                                            CachedDescription;                                          // 0x00B8   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBTDecorator_BBConditionBase
/// Size: 0x00E8 (232 bytes) (0x000090 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNPCBTDecorator_BBConditionBase : public UNPCBTDecorator
{ 
public:
	bool                                               bUseTargetValue;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FBlackboardKeySelector                             SourceBlackboardKey;                                        // 0x0098   (0x0028)  
	FBlackboardKeySelector                             TargetBlackboardKey;                                        // 0x00C0   (0x0028)  
};

/// Class /Script/MFNPCAI.NPCBTDecorator_BBConditionBool
/// Size: 0x00C0 (192 bytes) (0x000090 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNPCBTDecorator_BBConditionBool : public UNPCBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0090   (0x0028)  
	SDK_UNDEFINED(1,1603) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(ConditionType);                          // 0x00B8   (0x0001)  
	bool                                               TargetValue;                                                // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTDecorator_BBConditionFloat
/// Size: 0x00E8 (232 bytes) (0x000090 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNPCBTDecorator_BBConditionFloat : public UNPCBTDecorator
{ 
public:
	FBlackboardKeySelector                             SourceBlackboardKey;                                        // 0x0090   (0x0028)  
	FBlackboardKeySelector                             TargetBlackboardKey;                                        // 0x00B8   (0x0028)  
	float                                              TargetValue;                                                // 0x00E0   (0x0004)  
	bool                                               bUseBBTargetValue;                                          // 0x00E4   (0x0001)  
	SDK_UNDEFINED(1,1604) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(ConditionType);                          // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00E6   (0x0002)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTDecorator_BBConditionInt
/// Size: 0x00F0 (240 bytes) (0x0000E8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNPCBTDecorator_BBConditionInt : public UNPCBTDecorator_BBConditionBase
{ 
public:
	SDK_UNDEFINED(1,1605) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(OperationType);                          // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            TargetValue;                                                // 0x00EC   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCBTDecorator_BBConditionObject
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNPCBTDecorator_BBConditionObject : public UBTDecorator_CompareBBEntries
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTDecorator_BBConditionString
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
class UNPCBTDecorator_BBConditionString : public UNPCBTDecorator_BBConditionBase
{ 
public:
	SDK_UNDEFINED(1,1606) /* TEnumAsByte<ETextKeyOperation> */ __um(OperationType);                                // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FString                                            TargetValue;                                                // 0x00F0   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBTDecorator_BlueprintBase
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNPCBTDecorator_BlueprintBase : public UBTDecorator
{ 
public:
	bool                                               bAsSharedInstance;                                          // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)  
	TArray<FName>                                      ObservedKeyNames;                                           // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x0088   (0x0014)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x009C:0 (0x0001)  
	bool                                               bCheckConditionOnlyBlackBoardChanges : 1;                   // 0x009C:1 (0x0001)  
	bool                                               bIsObservingBB : 1;                                         // 0x009C:2 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x009D   (0x0003)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                    // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(class AActor* OwnerActor);                                                               // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                      // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(class AActor* OwnerActor);                                                                 // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(class AActor* OwnerActor);                                                                    // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                            // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(class AActor* OwnerActor);                                                                    // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                        // [0x606f338] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                       // [0x606f2ac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.GetOwnerPawn
	// class APawn* GetOwnerPawn();                                                                                             // [0x606f228] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFNPCAI.NPCBTDecorator_BlueprintBase.GetOwnerController
	// class AAIController* GetOwnerController();                                                                               // [0x606f1e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFNPCAI.NPCBTDecorator_HasSuspectPoints
/// Size: 0x00A8 (168 bytes) (0x000090 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTDecorator_HasSuspectPoints : public UNPCBTDecorator
{ 
public:
	float                                              Radius;                                                     // 0x0090   (0x0004)  
	float                                              HalfHeight;                                                 // 0x0094   (0x0004)  
	float                                              HalfAngle;                                                  // 0x0098   (0x0004)  
	FVector                                            Offset;                                                     // 0x009C   (0x000C)  
};

/// Class /Script/MFNPCAI.NPCBTDecorator_IsCloseEnough
/// Size: 0x0098 (152 bytes) (0x000090 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTDecorator_IsCloseEnough : public UNPCBTDecorator
{ 
public:
	float                                              CloseEnoughDistance;                                        // 0x0090   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTDecorator_ShouldWaitAtPathNode
/// Size: 0x0090 (144 bytes) (0x000090 - 0x000090) align 8 MaxSize: 0x0090
class UNPCBTDecorator_ShouldWaitAtPathNode : public UNPCBTDecorator
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTDecorator_SingletonBlueprintBase : public UBTDecorator
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0068   (0x0008)  
	TArray<FName>                                      ObservedKeyNames;                                           // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0080   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0090:0 (0x0001)  
	bool                                               bCheckConditionOnlyBlackBoardChanges : 1;                   // 0x0090:1 (0x0001)  
	bool                                               bIsObservingBB : 1;                                         // 0x0090:2 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                    // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(class AActor* OwnerActor);                                                               // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                      // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(class AActor* OwnerActor);                                                                 // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(class AActor* OwnerActor);                                                                    // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                            // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(class AActor* OwnerActor);                                                                    // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                        // [0x606f338] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAI.NPCBTDecorator_SingletonBlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                       // [0x606f2ac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAI.NPCBTDecorator_TickIntervalBase
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTDecorator_TickIntervalBase : public UNPCBTDecorator_BlueprintBase
{ 
public:
	float                                              Interval;                                                   // 0x00A0   (0x0004)  
	float                                              RandomDeviation;                                            // 0x00A4   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCBTDecorator_Wait
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UNPCBTDecorator_Wait : public UBTDecorator_Cooldown
{ 
public:
	bool                                               bWaitFirstTime;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTService
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTService : public UBTService
{ 
public:
	bool                                               bWithTime : 1;                                              // 0x0070:0 (0x0001)  
	bool                                               bOnActivation : 1;                                          // 0x0070:1 (0x0001)  
	bool                                               bOnDeactivation : 1;                                        // 0x0070:2 (0x0001)  
	bool                                               bOnTick : 1;                                                // 0x0070:3 (0x0001)  
	bool                                               bOnSearchStart : 1;                                         // 0x0070:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FString                                            TagText;                                                    // 0x0078   (0x0010)  
	FString                                            Message;                                                    // 0x0088   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBTService_FindRandomPosition
/// Size: 0x00F0 (240 bytes) (0x000098 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNPCBTService_FindRandomPosition : public UNPCBTService
{ 
public:
	FBlackboardKeySelector                             CenterTarget;                                               // 0x0098   (0x0028)  
	FBlackboardKeySelector                             RandomLocation;                                             // 0x00C0   (0x0028)  
	float                                              MinRange;                                                   // 0x00E8   (0x0004)  
	float                                              MaxRange;                                                   // 0x00EC   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCBTService_SetSenseRangeScale
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTService_SetSenseRangeScale : public UNPCBTService
{ 
public:
	float                                              CatchSenseScale;                                            // 0x0098   (0x0004)  
	float                                              LossSenseScale;                                             // 0x009C   (0x0004)  
	SDK_UNDEFINED(1,1607) /* EAISenseType */           __um(AISenseType);                                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTService_SetVisionHalfAngle
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNPCBTService_SetVisionHalfAngle : public UNPCBTService
{ 
public:
	float                                              LookAngleScale;                                             // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align 8 MaxSize: 0x0090
class UNPCBTService_SingletonBlueprintBase : public UBTService
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0088:0 (0x0001)  
	bool                                               bShowEventDetails : 1;                                      // 0x0088:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);               // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                          // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                            // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(class AActor* OwnerActor);                                                                       // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                           // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(class AActor* OwnerActor);                                                                      // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                             // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MFNPCAI.NPCBTService_SingletonBlueprintBase.ReceiveActivation
	// void ReceiveActivation(class AActor* OwnerActor);                                                                        // [0x182d6bc] Event|Protected|BlueprintEvent 
};

/// Class /Script/MFNPCAI.NPCBTTaskNode
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTTaskNode : public UBTTaskNode
{ 
public:
	bool                                               bWithTime : 1;                                              // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FString                                            TagText;                                                    // 0x0078   (0x0010)  
	FString                                            Message;                                                    // 0x0088   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBTTask_AttackEnemy
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTTask_AttackEnemy : public UNPCBTTaskNode
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTTask_CalcNextAttackPosition
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x0000B8) align 8 MaxSize: 0x00B8
class UNPCBTTask_CalcNextAttackPosition : public UNPCBTTaskNode
{ 
public:
	bool                                               bDebugMoveTrace;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	int32_t                                            MaxTryTimes;                                                // 0x009C   (0x0004)  
	float                                              MinMoveDistance;                                            // 0x00A0   (0x0004)  
	float                                              MaxMoveDistance;                                            // 0x00A4   (0x0004)  
	float                                              MoveDistanceThreshold;                                      // 0x00A8   (0x0004)  
	float                                              MinDistanceToPlayer;                                        // 0x00AC   (0x0004)  
	class UClass*                                      FilterClass;                                                // 0x00B0   (0x0008)  
};

/// Class /Script/MFNPCAI.NPCBTTask_CalcNextWanderPathNode
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTTask_CalcNextWanderPathNode : public UNPCBTTaskNode
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTTask_ClearFocalPoint
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTTask_ClearFocalPoint : public UNPCBTTaskNode
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTTask_DBNORescue
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UNPCBTTask_DBNORescue : public UNPCBTTask_BlueprintBase
{ 
public:
	FBlackboardKeySelector                             Tgt_DBNOTarget;                                             // 0x00A8   (0x0028)  
};

/// Class /Script/MFNPCAI.NPCBTTask_Decision
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTTask_Decision : public UNPCBTTask_BlueprintBase
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTTask_FireEnemy
/// Size: 0x0178 (376 bytes) (0x0000B0 - 0x000178) align 8 MaxSize: 0x0178
class UNPCBTTask_FireEnemy : public UNPCBTTask_LatenTaskBase
{ 
public:
	FBlackboardKeySelector                             FireTarget;                                                 // 0x00B0   (0x0028)  
	FBlackboardKeySelector                             MovementMultiplier;                                         // 0x00D8   (0x0028)  
	FBlackboardKeySelector                             AimingMultiplier;                                           // 0x0100   (0x0028)  
	FBlackboardKeySelector                             BurstMultiplier;                                            // 0x0128   (0x0028)  
	FBlackboardKeySelector                             TargetStateMultiplier;                                      // 0x0150   (0x0028)  
};

/// Class /Script/MFNPCAI.NPCBTTask_FireEnemyEx
/// Size: 0x00E8 (232 bytes) (0x0000B0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNPCBTTask_FireEnemyEx : public UNPCBTTask_LatenTaskBase
{ 
public:
	FBlackboardKeySelector                             FireTarget;                                                 // 0x00B0   (0x0028)  
	SDK_UNDEFINED(1,1608) /* EAISpecialFireType */     __um(FireType);                                             // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	float                                              MissRadiusMin;                                              // 0x00DC   (0x0004)  
	float                                              MissRadiusMax;                                              // 0x00E0   (0x0004)  
	float                                              SpeedThreshold;                                             // 0x00E4   (0x0004)  
};

/// Class /Script/MFNPCAI.NPCBTTask_FollowPathNode
/// Size: 0x00E8 (232 bytes) (0x000098 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNPCBTTask_FollowPathNode : public UNPCBTTaskNode
{ 
public:
	FBlackboardKeySelector                             WanderLocationKey;                                          // 0x0098   (0x0028)  
	FBlackboardKeySelector                             WaitTimeKey;                                                // 0x00C0   (0x0028)  
};

/// Class /Script/MFNPCAI.NPCBTTask_MeleeAttackEnemy
/// Size: 0x00F8 (248 bytes) (0x0000B0 - 0x0000F8) align 8 MaxSize: 0x00F8
class UNPCBTTask_MeleeAttackEnemy : public UNPCBTTask_LatenTaskBase
{ 
public:
	FBlackboardKeySelector                             FireTarget;                                                 // 0x00B0   (0x0028)  
	class ACharacter*                                  FireTargetPawn;                                             // 0x00D8   (0x0008)  
	FVector                                            FireTargetLoc;                                              // 0x00E0   (0x000C)  
	bool                                               IsShotEnemy;                                                // 0x00EC   (0x0001)  
	bool                                               bIsFiring;                                                  // 0x00ED   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00EE   (0x0002)  MISSED
	float                                              StartFireTimestamp;                                         // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTTask_MoveToEx
/// Size: 0x00E0 (224 bytes) (0x0000B0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UNPCBTTask_MoveToEx : public UBTTask_MoveTo
{ 
public:
	SDK_UNDEFINED(1,1609) /* EAIMoveType */            __um(MoveType);                                             // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              RandomReachableRadius;                                      // 0x00B4   (0x0004)  
	bool                                               bWithTime : 1;                                              // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	FString                                            TagText;                                                    // 0x00C0   (0x0010)  
	FString                                            Message;                                                    // 0x00D0   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBTTask_PlayAkSound
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTTask_PlayAkSound : public UNPCBTTaskNode
{ 
public:
	class UAkAudioEvent*                               SoundToPlay;                                                // 0x0098   (0x0008)  
	bool                                               bSoundAttached;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTTask_ResetTargetLocation
/// Size: 0x0098 (152 bytes) (0x000098 - 0x000098) align 8 MaxSize: 0x0098
class UNPCBTTask_ResetTargetLocation : public UNPCBTTaskNode
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTTask_SetAIPose
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNPCBTTask_SetAIPose : public UNPCBTTaskNode
{ 
public:
	SDK_UNDEFINED(1,1610) /* EAIPose */                __um(TargetAIPose);                                         // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTTask_SetBlackboardValue
/// Size: 0x00E8 (232 bytes) (0x000098 - 0x0000E8) align 8 MaxSize: 0x00E8
class UNPCBTTask_SetBlackboardValue : public UNPCBTTaskNode
{ 
public:
	FBlackboardKeySelector                             SourceValue;                                                // 0x0098   (0x0028)  
	FBlackboardKeySelector                             TargetValue;                                                // 0x00C0   (0x0028)  
};

/// Class /Script/MFNPCAI.NPCBTTask_SetFocalPoint
/// Size: 0x00C0 (192 bytes) (0x000098 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNPCBTTask_SetFocalPoint : public UBTTask_BlackboardBase
{ 
public:
	bool                                               bWithTime : 1;                                              // 0x0098:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            TagText;                                                    // 0x00A0   (0x0010)  
	FString                                            Message;                                                    // 0x00B0   (0x0010)  
};

/// Class /Script/MFNPCAI.NPCBTTask_SetMovementSpeed
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTTask_SetMovementSpeed : public UNPCBTTaskNode
{ 
public:
	float                                              BasicStandSpeed;                                            // 0x0098   (0x0004)  
	float                                              BasicCrouchSpeed;                                           // 0x009C   (0x0004)  
	float                                              BasicProneSpeed;                                            // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTTask_SetSenseRangeScale
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNPCBTTask_SetSenseRangeScale : public UNPCBTTaskNode
{ 
public:
	float                                              CatchSenseScale;                                            // 0x0098   (0x0004)  
	float                                              LossSenseScale;                                             // 0x009C   (0x0004)  
	SDK_UNDEFINED(1,1611) /* EAISenseType */           __um(AISenseType);                                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTTask_SetTargetHatred
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UNPCBTTask_SetTargetHatred : public UNPCBTTask_BlueprintBase
{ 
public:
	FBlackboardKeySelector                             EnemyTargetKey;                                             // 0x00A8   (0x0028)  
	int32_t                                            HatredValue;                                                // 0x00D0   (0x0004)  
	float                                              Hatred_IndateTime;                                          // 0x00D4   (0x0004)  
	bool                                               NeedToCalucateGoalEnemy;                                    // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTTask_SetVisionHalfAngle
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNPCBTTask_SetVisionHalfAngle : public UNPCBTTaskNode
{ 
public:
	float                                              VisionHalfAngle;                                            // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Class /Script/MFNPCAI.NPCBTTask_StartShoulderAimingTarget
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNPCBTTask_StartShoulderAimingTarget : public UNPCBTTask_LatenTaskBase
{ 
public:
};

/// Class /Script/MFNPCAI.NPCBTTask_StopShoulderAimingTarget
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNPCBTTask_StopShoulderAimingTarget : public UNPCBTTask_LatenTaskBase
{ 
public:
};

/// Class /Script/MFNPCAI.NPCCharacterAIDBNOInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIDBNOInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIDBNOInterface.IsTargetDBNO
	// bool IsTargetDBNO(class AActor* TargetPawn);                                                                             // [0x606fce4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIDBNOInterface.IsSelfDBNO
	// bool IsSelfDBNO();                                                                                                       // [0x5c5bd20] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIDBNOInterface.GetBeRescueLocation
	// FVector GetBeRescueLocation();                                                                                           // [0x606fba4] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIDBNOInterface.CheckAIGroupDBNOWipeOut
	// void CheckAIGroupDBNOWipeOut();                                                                                          // [0x5d76794] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIDeathInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIDeathInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIDeathInterface.IsDead
	// bool IsDead();                                                                                                           // [0x5c5bd20] Native|Public|Const  
};

/// Class /Script/MFNPCAI.NPCCharacterAIDebugInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIDebugInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIDebugInterface.BoardcastDrawDebugLine
	// void BoardcastDrawDebugLine(int32_t InDrawID, FVector InStart, FVector InEnd, FColor Color, float InTime, float InThickness); // [0x606ff78] Native|Public|HasDefaults 
};

/// Class /Script/MFNPCAI.NPCCharacterAIExplodeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIExplodeInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIExplodeInterface.SetExplodeParams
	// void SetExplodeParams(float InMinDamage, float InMaxDamage, float InDamageRange, bool bInExplodeAtDeath);                // [0x6071398] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIExplodeInterface.NetMulticastExplode
	// void NetMulticastExplode();                                                                                              // [0x118c580] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIFireInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIFireInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.UpdatePersistentFireSetting
	// void UpdatePersistentFireSetting(bool CalcShoot, bool CalcSight, class AActor* EnemyTarget, FVector& FireLocation, float FireInterval, bool bIgnoreAimingTime); // [0x6072218] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.UpdateNaturalFireSetting
	// void UpdateNaturalFireSetting(FVector& FireLocation, bool bEnabledRecoilControl, bool bEnabledHitRateControl, bool bIgnoreAimingTime); // [0x6072048] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.StopPersistentFire
	// void StopPersistentFire();                                                                                               // [0x6008b94] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.StopFireDirectly
	// void StopFireDirectly();                                                                                                 // [0x6071cc8] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.StopFire
	// void StopFire(int32_t FireMode);                                                                                         // [0x6071c30] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.StartPersistentFire
	// bool StartPersistentFire(float Duration);                                                                                // [0x6071b84] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.StartFireNextTick
	// void StartFireNextTick();                                                                                                // [0x6008178] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.StartFireDirectly
	// bool StartFireDirectly();                                                                                                // [0x6071b60] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.StartFire
	// void StartFire(int32_t FireMode);                                                                                        // [0x6071ac8] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.SetFireAimingPoint
	// void SetFireAimingPoint(FVector& AimingPoint);                                                                           // [0x6071520] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.PrepareToFire
	// EAIWorkResult PrepareToFire(FNPCAIFireSetting& FireSetting);                                                             // [0x607119c] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.IsRecentlyFire
	// bool IsRecentlyFire(float InSeconds);                                                                                    // [0x6070c68] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.IsPersistentFiring
	// bool IsPersistentFiring();                                                                                               // [0x6070c1c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.IsInFiringState
	// bool IsInFiringState();                                                                                                  // [0x6007fe0] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.GetWeaponUseTraceChannel
	// TEnumAsByte<ECollisionChannel> GetWeaponUseTraceChannel();                                                               // [0x6070324] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.GetSingleBodyPartLocation
	// FVector GetSingleBodyPartLocation(class ACharacter* InCharacter, EAIBodyPartType InBodyPartType);                        // [0x6070978] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.GetMuzzleFlashSocketLocation
	// FVector GetMuzzleFlashSocketLocation();                                                                                  // [0x60707fc] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.GetLookSightUseTraceChannel
	// TEnumAsByte<ECollisionChannel> GetLookSightUseTraceChannel();                                                            // [0x60707d4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.GetLastStopFireTime
	// float GetLastStopFireTime();                                                                                             // [0x6070578] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.GetLastFireTime
	// float GetLastFireTime();                                                                                                 // [0x60707a8] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.GetFireHitEnemyLastTimeUsePredestined
	// float GetFireHitEnemyLastTimeUsePredestined();                                                                           // [0x60705a4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.ForcePullBoltReady
	// void ForcePullBoltReady();                                                                                               // [0x5d76794] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.CheckFireCanHitPenetration
	// bool CheckFireCanHitPenetration(FHitResult& InHitResult);                                                                // [0x6070360] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.CanStartPersistentFire
	// bool CanStartPersistentFire();                                                                                           // [0x60381a8] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.CanMeleeFire
	// bool CanMeleeFire();                                                                                                     // [0x5d83b74] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIFireInterface.CanFire
	// bool CanFire();                                                                                                          // [0x5c5bd20] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIIKInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIIKInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIIKInterface.UpdateDSIKFootHighDiff
	// void UpdateDSIKFootHighDiff();                                                                                           // [0x118c580] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIIKInterface.ShouldDSEnableFootIK
	// bool ShouldDSEnableFootIK();                                                                                             // [0x5c92628] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIIKInterface.GetIKFootHighDiffValue
	// float GetIKFootHighDiffValue();                                                                                          // [0x6036e34] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIInventoryInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIInventoryInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIInventoryInterface.GiveInventoryToAI
	// bool GiveInventoryToAI(uint64_t ItemId);                                                                                 // [0x6070b4c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIInventoryInterface.AIUseInventoryByClass
	// bool AIUseInventoryByClass(class UClass* InventoryClass);                                                                // [0x600ef34] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIMoveInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIMoveInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.StopActiveMovement
	// void StopActiveMovement();                                                                                               // [0x479a844] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.SetValidNavMove
	// void SetValidNavMove(bool bInValid);                                                                                     // [0x6071a2c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.SetSprint
	// void SetSprint(bool bInSprint);                                                                                          // [0x5e75620] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.SetSilentWalk
	// void SetSilentWalk(bool bInSilentWalk);                                                                                  // [0x6071990] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.SetMovementSpeed
	// void SetMovementSpeed(float BasicStandSpeed, float BasicCrouchSpeed, float BasicProneSpeed);                             // [0x6071724] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.SetEnabledSliding
	// void SetEnabledSliding(bool bEnabled);                                                                                   // [0x60712fc] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.OnNavMoveCompleted
	// void OnNavMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x6070d18] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.IsSprinting
	// bool IsSprinting();                                                                                                      // [0x5c92604] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.IsInNavWalking
	// bool IsInNavWalking();                                                                                                   // [0x6008154] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.IsBraking
	// bool IsBraking();                                                                                                        // [0x5c5bd20] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.IsAnyLegBroken
	// bool IsAnyLegBroken();                                                                                                   // [0x5d83b74] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.GetSlidingDistance
	// float GetSlidingDistance();                                                                                              // [0x6070a88] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIMoveInterface.CanMove
	// bool CanMove();                                                                                                          // [0x6070300] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIPathNodeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIPathNodeInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIPathNodeInterface.ShouldWaitAtNode
	// bool ShouldWaitAtNode();                                                                                                 // [0x5d83b74] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPathNodeInterface.GetWaitTimeAtNode
	// float GetWaitTimeAtNode();                                                                                               // [0x6070a88] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPathNodeInterface.GetTargetWanderPathLocation
	// FVector GetTargetWanderPathLocation();                                                                                   // [0x606fba4] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIPathNodeInterface.CalcNextPathNode
	// bool CalcNextPathNode();                                                                                                 // [0x5c5bd20] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIPerceptionInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIPerceptionInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIPerceptionInterface.GetTouchConfig
	// class UAISenseConfig_Touch* GetTouchConfig();                                                                            // [0x4dddd6c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPerceptionInterface.GetSightConfig
	// class UAISenseConfig_Sight* GetSightConfig();                                                                            // [0x4ddd7b8] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPerceptionInterface.GetHearingConfig
	// class UAISenseConfig_Hearing* GetHearingConfig();                                                                        // [0x5cb0628] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPerceptionInterface.GetDamageConfig
	// class UAISenseConfig_Damage* GetDamageConfig();                                                                          // [0x220627c] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIPickUpInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIPickUpInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.StopPickUpBoxContainer
	// void StopPickUpBoxContainer();                                                                                           // [0x6071cdc] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.SetInventoryHasChecked
	// void SetInventoryHasChecked(class AActor* Inventory);                                                                    // [0x60715ec] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.PickupInventory
	// bool PickupInventory(class AActor* Inventory, bool bCheckIsCanAdd, float WaitSeconds, bool bFromBoxContainer, bool bIgnoreDistance); // [0x6070fa0] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.PickUpBoxContainer
	// void PickUpBoxContainer(class AActor* BoxContainer, bool bCheckIsCanAdd, float InDelayStarttime, float InPickUpInterval); // [0x6070e04] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.IsCompletedPickUpBoxContainer
	// bool IsCompletedPickUpBoxContainer();                                                                                    // [0x6070300] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.IsCanAddUnitInventory
	// bool IsCanAddUnitInventory();                                                                                            // [0x6070bf8] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.HasPlacePickUpInventoryIml
	// bool HasPlacePickUpInventoryIml(class AActor* Inventory);                                                                // [0x6057194] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.GetNearestInventoryCanPickUp
	// class AActor* GetNearestInventoryCanPickUp(float InRange, float PathLength, bool bIgnoreChecked);                        // [0x6070834] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.GetInventorysCanPickUp
	// bool GetInventorysCanPickUp(float InRange, float PathLength, bool bIgnoreChecked, TArray<AActor*>& OutInventorys);       // [0x60705d0] Native|Public|HasOutParms 
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.GetBestInventoryCanPickUpWithMorality
	// class AActor* GetBestInventoryCanPickUpWithMorality(float InRange, float PathLength, bool bIgnoreChecked);               // [0x6070434] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPickUpInterface.CancelPickUpInventory
	// void CancelPickUpInventory();                                                                                            // [0x607034c] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIPoseCacheInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIPoseCacheInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIPoseCacheInterface.GetPoseAIType
	// EAIPose GetPoseAIType();                                                                                                 // [0x5c5bd20] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseCacheInterface.GetLeanAIType
	// EAILeanType GetLeanAIType();                                                                                             // [0x5d83b74] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAIPoseInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAIPoseInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.UpdateDSPose
	// bool UpdateDSPose();                                                                                                     // [0x5c92628] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.UpdateDSLeanPose
	// bool UpdateDSLeanPose();                                                                                                 // [0x22acc30] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.TryProne
	// bool TryProne();                                                                                                         // [0x5cb1d2c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.TryLean
	// bool TryLean(EAILeanType NewLeanType, bool bCheckBlockByWall);                                                           // [0x6071f48] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.TryJump
	// bool TryJump(FVector& InJumpDirection, float InJumpSpeed, bool bUseNowVelocity);                                         // [0x6071dc0] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.TryCrouchSliding
	// bool TryCrouchSliding();                                                                                                 // [0x6071d9c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.TryCrouch
	// bool TryCrouch();                                                                                                        // [0x6070bf8] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.TryCasualStandingPose
	// bool TryCasualStandingPose(bool bCasual);                                                                                // [0x6071cf0] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.StopCrouchSliding
	// void StopCrouchSliding();                                                                                                // [0x60081a4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.SetPoseToProne
	// void SetPoseToProne(bool bNewProne);                                                                                     // [0x60718f4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.SetPoseToCrouch
	// void SetPoseToCrouch(bool bNewCrouch);                                                                                   // [0x6071858] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.SetIsCasual
	// void SetIsCasual(bool bCasual);                                                                                          // [0x6071688] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.SetAIPose
	// void SetAIPose(EAIPose InAIPose);                                                                                        // [0x6071260] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.IsJumping
	// bool IsJumping();                                                                                                        // [0x6046570] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.IsInTransitionAnimation
	// bool IsInTransitionAnimation();                                                                                          // [0x6070c40] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.IsCrouchSliding
	// bool IsCrouchSliding();                                                                                                  // [0x6070c1c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.GetUp
	// void GetUp(bool bWithCheck);                                                                                             // [0x6070ab0] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.GetLeanType
	// EAILeanType GetLeanType();                                                                                               // [0x60707d4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.GetIsCasual
	// bool GetIsCasual();                                                                                                      // [0x6070784] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.GetCrouchSlidingStartTime
	// float GetCrouchSlidingStartTime();                                                                                       // [0x6070578] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.GetAIPose
	// EAIPose GetAIPose();                                                                                                     // [0x5d83b74] Native|Public|Const  
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.CanProneInCurrentEnvironment
	// bool CanProneInCurrentEnvironment();                                                                                     // [0x6070324] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAIPoseInterface.CanJump
	// bool CanJump(FVector& InJumpDirection, float InJumpSpeed);                                                               // [0x60701c8] Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/MFNPCAI.NPCCharacterAISenseAbilityInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAISenseAbilityInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAISenseAbilityInterface.ResetFlashFlag
	// void ResetFlashFlag();                                                                                                   // [0x5c63d0c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAISenseAbilityInterface.ProcessOnEnterInventoryFlash
	// void ProcessOnEnterInventoryFlash(bool bInSevere, bool bInModerate, bool bInMild, float CharFaceAngleDegree, FVector SocketLoc); // [0x6072c64] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAISenseAbilityInterface.IsInGasArea
	// bool IsInGasArea();                                                                                                      // [0x5c5bd20] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAISenseAbilityInterface.IsImmuneTearGas
	// bool IsImmuneTearGas();                                                                                                  // [0x5d83b74] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAISenseAbilityInterface.GetFlashBurnValue
	// float GetFlashBurnValue();                                                                                               // [0x6070a88] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAISoundInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAISoundInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAISoundInterface.PlaySoundAtLocation
	// void PlaySoundAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AudioEvent, FVector Location, FRotator Rotation); // [0x6072ab4] Native|Public|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAISoundInterface.PlayAISoundByType
	// void PlayAISoundByType(EAISoundType CurrType);                                                                           // [0x6072a18] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAITakeCoverInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAITakeCoverInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAITakeCoverInterface.StopToTakeCover
	// void StopToTakeCover();                                                                                                  // [0x5d76794] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITakeCoverInterface.IsTakingCover
	// bool IsTakingCover();                                                                                                    // [0x22acc30] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITakeCoverInterface.BeginToTakeCoverCrouch
	// void BeginToTakeCoverCrouch();                                                                                           // [0x5e3286c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITakeCoverInterface.BeginToTakeCover
	// void BeginToTakeCover();                                                                                                 // [0x118c580] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAITeamRescueInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAITeamRescueInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAITeamRescueInterface.StopRescueTeammate
	// void StopRescueTeammate();                                                                                               // [0x5c63d0c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITeamRescueInterface.RescueDBNOTeammate
	// bool RescueDBNOTeammate(class AActor* InTarget);                                                                         // [0x606fce4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITeamRescueInterface.GetNearestDBNOTeammate
	// class AActor* GetNearestDBNOTeammate(float InRange);                                                                     // [0x607256c] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITeamRescueInterface.GetIsRescuingTeammate
	// bool GetIsRescuingTeammate();                                                                                            // [0x5c92628] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterAITurnInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterAITurnInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterAITurnInterface.LookToPointImmimmediately
	// void LookToPointImmimmediately(FVector& Point);                                                                          // [0x607294c] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAITurnInterface.LookToPoint
	// void LookToPoint(FVector& Point, float RotateSpeedInDegree, float AcceleratedSpeedInDegree, bool bQuickly);              // [0x607279c] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/MFNPCAI.NPCCharacterAITurnInterface.LookToMovingDirection
	// void LookToMovingDirection(float RotateSpeedInDegree, float AcceleratedSpeedInDegree);                                   // [0x60726b4] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITurnInterface.LockLookToPoint
	// void LockLookToPoint(float LockTime);                                                                                    // [0x6072618] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITurnInterface.IsTurning
	// bool IsTurning();                                                                                                        // [0x5c5bd20] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterAITurnInterface.GetActualActorTurnSpeed
	// float GetActualActorTurnSpeed();                                                                                         // [0x6036e34] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterHealthInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterHealthInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterHealthInterface.SetHealthMax
	// void SetHealthMax(float Value, class AActor* Instigator);                                                                // [0x6073168] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterHealthInterface.SetHealth
	// void SetHealth(float Value, class AActor* Instigator);                                                                   // [0x6073080] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterHealthInterface.GetHealthMax
	// float GetHealthMax();                                                                                                    // [0x6072544] Native|Public        
	// Function /Script/MFNPCAI.NPCCharacterHealthInterface.GetHealth
	// float GetHealth();                                                                                                       // [0x6036e34] Native|Public        
};

/// Class /Script/MFNPCAI.NPCCharacterTakeDamageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCCharacterTakeDamageInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.NPCCharacterTakeDamageInterface.TakeDamage
	// float TakeDamage(float DamageAmount, FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser); // [0x6073250] Native|Public|HasOutParms 
};

/// Class /Script/MFNPCAI.NPCGrassIdentificationVolume
/// Size: 0x0350 (848 bytes) (0x000350 - 0x000350) align 8 MaxSize: 0x0350
class ANPCGrassIdentificationVolume : public ATriggerVolume
{ 
public:
};

/// Class /Script/MFNPCAI.SGActorFactionCompInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USGActorFactionCompInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.SGAIStimuliSourceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USGAIStimuliSourceInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.SGAIStimuliSourceInterface.ProcessSenseByAI
	// void ProcessSenseByAI(class ACharacter* AICharacter, FAIStimulus& AIStimulus);                                           // [0x6072e78] Native|Public|HasOutParms 
};

/// Class /Script/MFNPCAI.SGFactionInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USGFactionInterface : public UInterface
{ 
public:
};

/// Class /Script/MFNPCAI.SGTeamInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USGTeamInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFNPCAI.SGTeamInterface.RemoveFromTeam
	// bool RemoveFromTeam(class AActor* C, bool bRemoveAll);                                                                   // [0x6072f80] Native|Public        
	// Function /Script/MFNPCAI.SGTeamInterface.GetTeamMembers
	// TArray<AActor*> GetTeamMembers();                                                                                        // [0x6067fcc] Native|Public|Const  
	// Function /Script/MFNPCAI.SGTeamInterface.GetFactionComp
	// class UActorComponent* GetFactionComp();                                                                                 // [0x5cb0628] Native|Public        
	// Function /Script/MFNPCAI.SGTeamInterface.FactionChanged
	// void FactionChanged(char NewFactionType);                                                                                // [0x60724a8] Native|Public        
	// Function /Script/MFNPCAI.SGTeamInterface.AddToTeam
	// bool AddToTeam(class AActor* C);                                                                                         // [0x606fce4] Native|Public        
};

/// Struct /Script/MFNPCAI.NavSkeletonGraphResultNode
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNavSkeletonGraphResultNode
{ 
	int32_t                                            PointId;                                                    // 0x0000   (0x0004)  
	int32_t                                            ParentID;                                                   // 0x0004   (0x0004)  
	float                                              PathLength;                                                 // 0x0008   (0x0004)  
	float                                              UnreachablePathLength;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/MFNPCAI.NavSkeletonGraphFindResult
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNavSkeletonGraphFindResult
{ 
	SDK_UNDEFINED(1,1612) /* EMFGraphAStarResult */    __um(status);                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FNavSkeletonGraphResultNode>                Nodes;                                                      // 0x0008   (0x0010)  
	TArray<int32_t>                                    DesiredNodeIndices;                                         // 0x0018   (0x0010)  
	TArray<int32_t>                                    DesiredPointIDs;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/MFNPCAI.NPCAIFindAmbushAgainstPointResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNPCAIFindAmbushAgainstPointResult
{ 
	FVector                                            AgainstPoint;                                               // 0x0000   (0x000C)  
	bool                                               bCanFind;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIFindPathByKeyRouteResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAIFindPathByKeyRouteResult
{ 
	TArray<FKeyRoutePointData>                         Path;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/MFNPCAI.NPCAIPeekPointResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNPCAIPeekPointResult
{ 
	FVector                                            PeekPoint;                                                  // 0x0000   (0x000C)  
	bool                                               bWillExpose;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAI.AIRoutePoint
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAIRoutePoint
{ 
	FVector                                            Point;                                                      // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Content;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/MFNPCAI.NPCAIActivityAIIDModifierTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FNPCAIActivityAIIDModifierTableRow : FTableRowBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	int64_t                                            ActivityID;                                                 // 0x0010   (0x0008)  
	int32_t                                            Priority;                                                   // 0x0018   (0x0004)  
	int32_t                                            SourceCategory;                                             // 0x001C   (0x0004)  
	int32_t                                            SourceCareer;                                               // 0x0020   (0x0004)  
	int32_t                                            SourceTendency;                                             // 0x0024   (0x0004)  
	int32_t                                            SourceDifficulty;                                           // 0x0028   (0x0004)  
	int32_t                                            TargetCategory;                                             // 0x002C   (0x0004)  
	int32_t                                            TargetCareer;                                               // 0x0030   (0x0004)  
	int32_t                                            TargetTendency;                                             // 0x0034   (0x0004)  
	int32_t                                            TargetDifficulty;                                           // 0x0038   (0x0004)  
	int32_t                                            TargetEquipPoolID;                                          // 0x003C   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIDataProviderFVectorValue
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
struct FAIDataProviderFVectorValue : FAIDataProviderTypedValue
{ 
	FVector                                            DefaultValue;                                               // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.AIDoorSingleSafetyPoint
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAIDoorSingleSafetyPoint
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	float                                              DangerValue;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/MFNPCAI.AISafetyOpenDoorResp
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAISafetyOpenDoorResp
{ 
	class AActor*                                      SGDoor;                                                     // 0x0000   (0x0008)  
	FVector                                            NavLinkPoint;                                               // 0x0008   (0x000C)  
	FVector                                            SafetyWaitPoint;                                            // 0x0014   (0x000C)  
};

/// Struct /Script/MFNPCAI.NPCAIProfileCoverTag
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNPCAIProfileCoverTag
{ 
	class UClass*                                      ProfileClass;                                               // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1613) /* EAIProfileType */         __um(ProfileType);                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              VarName;                                                    // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIIDModifierTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAIIDModifierTableRow : FTableRowBase
{ 
	int64_t                                            TargetAIID;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonBuildStage
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonBuildStage
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonAddRegionConnectionStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonAddRegionConnectionStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonBuilder
/// Size: 0x0490 (1168 bytes) (0x000000 - 0x000490) align 16 MaxSize: 0x0490
struct FNPCAINavSkeletonBuilder
{ 
	class UObject*                                     WorldContextObject;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x0008   (0x00B0)  MISSED
	class UWorld*                                      World;                                                      // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class ARecastNavMesh*                              MainNavData;                                                // 0x00C8   (0x0008)  
	class ANPCAINavMeshManager*                        NavMeshManager;                                             // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	TArray<class ANPCAINavLinkProxy*>                  LinkProxies;                                                // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x3A0];                                     // 0x00F0   (0x03A0)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateCoverageStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonCalculateCoverageStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateDivergenceStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonCalculateDivergenceStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateGradientStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonCalculateGradientStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateSymmetricAttributeStage
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FNPCAINavSkeletonCalculateSymmetricAttributeStage : FNPCAINavSkeletonBuildStage
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateMovingStage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
struct FNPCAINavSkeletonCalculateMovingStage : FNPCAINavSkeletonCalculateSymmetricAttributeStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateOutdoorsStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonCalculateOutdoorsStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateProtectionStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonCalculateProtectionStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateThrowingStage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
struct FNPCAINavSkeletonCalculateThrowingStage : FNPCAINavSkeletonCalculateSymmetricAttributeStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateVisibilityStage
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FNPCAINavSkeletonCalculateVisibilityStage : FNPCAINavSkeletonCalculateSymmetricAttributeStage
{ 
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0028   (0x0080)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCalculateWallDistanceStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonCalculateWallDistanceStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCheckEdgeOnNavMeshStage
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FNPCAINavSkeletonCheckEdgeOnNavMeshStage : FNPCAINavSkeletonBuildStage
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCollectConnectionInfoStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonCollectConnectionInfoStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonCollectNeighbourInfoStage
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FNPCAINavSkeletonCollectNeighbourInfoStage : FNPCAINavSkeletonBuildStage
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonFindPathForUnstableSegmentStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonFindPathForUnstableSegmentStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonFindWallsInNeighbourhoodStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonFindWallsInNeighbourhoodStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonGeneratePolylineStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonGeneratePolylineStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonGenerateRawPointStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonGenerateRawPointStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NavSkeletonPathFindingRequest
/// Size: 0x01B8 (440 bytes) (0x000000 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FNavSkeletonPathFindingRequest
{ 
	unsigned char                                      UnknownData00_2[0x1B8];                                     // 0x0000   (0x01B8)  MISSED
};

/// Struct /Script/MFNPCAI.NavSkeletonPathFindingQueue
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FNavSkeletonPathFindingQueue
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	SDK_UNDEFINED(80,1614) /* TMap<TWeakObjectPtr<UObject*>, FNavSkeletonPathFindingRequest> */ __um(QuerierToRequest); // 0x0018   (0x0050)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0068   (0x0020)  MISSED
};

/// Struct /Script/MFNPCAI.NavSkeletonGraphAStarFilter
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FNavSkeletonGraphAStarFilter
{ 
	TWeakObjectPtr<class UObject*>                     WeakOwner;                                                  // 0x0000   (0x0008)  
	int32_t                                            MaxSearchNodes;                                             // 0x0008   (0x0004)  
	float                                              CostLimit;                                                  // 0x000C   (0x0004)  
	float                                              MaxUnreachablePathCostLimit;                                // 0x0010   (0x0004)  
	float                                              TimeLimit;                                                  // 0x0014   (0x0004)  
	float                                              RadiusLimit;                                                // 0x0018   (0x0004)  
	bool                                               bShouldIncludeStartNodeInPath;                              // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	SDK_UNDEFINED(80,1615) /* TSet<int32_t> */         __um(UnreachablePointIDs);                                  // 0x0020   (0x0050)  
	bool                                               bOnTryBestToIncludePointIDs;                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	SDK_UNDEFINED(80,1616) /* TSet<int32_t> */         __um(TryBestToIncludePointIDs);                             // 0x0078   (0x0050)  
};

/// Struct /Script/MFNPCAI.NavSkeletonGraphCostType
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNavSkeletonGraphCostType
{ 
	float                                              PathCost;                                                   // 0x0000   (0x0004)  
	float                                              UnreachablePathCost;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonInitializePointExtraAttributeStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonInitializePointExtraAttributeStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonLabelNavMeshStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonLabelNavMeshStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonPrunePointStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonPrunePointStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonRemoveIsolatedPointStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonRemoveIsolatedPointStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonRemoveTriangleConnectionStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonRemoveTriangleConnectionStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonSavePointStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonSavePointStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonSetupPointBattleIntensityExpectation
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonSetupPointBattleIntensityExpectation : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonSetupPointBattleVolumeStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonSetupPointBattleVolumeStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonSetupPointKindStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonSetupPointKindStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAINavSkeletonSimplifyPolylineStage
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAINavSkeletonSimplifyPolylineStage : FNPCAINavSkeletonBuildStage
{ 
};

/// Struct /Script/MFNPCAI.NavSkeletonMoveSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNavSkeletonMoveSettings
{ 
	bool                                               bWantPathOptimization;                                      // 0x0000   (0x0001)  
};

/// Struct /Script/MFNPCAI.NavSkeletonPolyline
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNavSkeletonPolyline
{ 
	TArray<int32_t>                                    PointIDs;                                                   // 0x0000   (0x0010)  
	float                                              PolylineLength;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NavSkeletonSamplePoint
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNavSkeletonSamplePoint
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/MFNPCAI.NavSkeletonSamplePolyline
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNavSkeletonSamplePolyline
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIOverrideAvoidGunlineParam
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNPCAIOverrideAvoidGunlineParam
{ 
	bool                                               bEnableAvoidGunline;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxThreatDistance;                                          // 0x0004   (0x0004)  
	float                                              ExposureCostMultiplier;                                     // 0x0008   (0x0004)  
};

/// Struct /Script/MFNPCAI.NavCostModifier
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNavCostModifier
{ 
	SDK_UNDEFINED(1,1617) /* ENPCAIPerceptibleTile */  __um(Kind);                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	TWeakObjectPtr<class UObject*>                     Instigator;                                                 // 0x0004   (0x0008)  
	float                                              BeginTime;                                                  // 0x000C   (0x0004)  
	float                                              EndTime;                                                    // 0x0010   (0x0004)  
	FVector                                            Location;                                                   // 0x0014   (0x000C)  
	FBox                                               Boundary;                                                   // 0x0020   (0x001C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<uint64_t>                                   AffectedPolyRefs;                                           // 0x0040   (0x0010)  
	int32_t                                            LocalNavigationGridId;                                      // 0x0050   (0x0004)  
	bool                                               bMoving;                                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAINavPathForBP
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNPCAINavPathForBP
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIMoveRequestCustomDataImpl
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNPCAIMoveRequestCustomDataImpl
{ 
	SDK_UNDEFINED(1,1618) /* ENPCAIPathFindingMode */  __um(PathFindingMode);                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      NavFilterClass;                                             // 0x0008   (0x0008)  
	float                                              PathExtendLength;                                           // 0x0010   (0x0004)  
	float                                              MaxTurnAngleDeg;                                            // 0x0014   (0x0004)  
	bool                                               bSafetyDoor;                                                // 0x0018   (0x0001)  
	bool                                               bSwing;                                                     // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/MFNPCAI.MFNavMeshRegionMap
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FMFNavMeshRegionMap
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/MFNPCAI.MFNavMeshRegion
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMFNavMeshRegion
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/MFNPCAI.NavConnectivityInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNavConnectivityInfo
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/MFNPCAI.SoAStorage
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSoAStorage
{ 
	TArray<int32_t>                                    Offsets;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MFNPCAI.PortalEdgeStorage
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align 8 MaxSize: 0x0020
struct FPortalEdgeStorage : FSoAStorage
{ 
	TArray<FPortalEdge>                                Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MFNPCAI.UInt64Storage
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align 8 MaxSize: 0x0020
struct FUInt64Storage : FSoAStorage
{ 
	TArray<uint64_t>                                   Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MFNPCAI.Int32Storage
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align 8 MaxSize: 0x0020
struct FInt32Storage : FSoAStorage
{ 
	TArray<int32_t>                                    Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MFNPCAI.NavLinkInfo
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FNavLinkInfo
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	bool                                               bEnabled;                                                   // 0x0001   (0x0001)  
	char                                               Direction;                                                  // 0x0002   (0x0001)  
	SDK_UNDEFINED(1,1619) /* ENavLinkType */           __um(LinkType);                                             // 0x0003   (0x0001)  
	uint32_t                                           LinkId;                                                     // 0x0004   (0x0004)  
	int32_t                                            LinkIndex;                                                  // 0x0008   (0x0004)  
	int32_t                                            LeftIndex;                                                  // 0x000C   (0x0004)  
	int32_t                                            RightIndex;                                                 // 0x0010   (0x0004)  
	int32_t                                            LeftRegionIndex;                                            // 0x0014   (0x0004)  
	int32_t                                            RightRegionIndex;                                           // 0x0018   (0x0004)  
};

/// Struct /Script/MFNPCAI.CoverPointPathLengthResult
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCoverPointPathLengthResult
{ 
	int32_t                                            PointId;                                                    // 0x0000   (0x0004)  
	float                                              PathLength;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/MFNPCAI.AICandidateStandPosition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAICandidateStandPosition
{ 
	float                                              PathLength;                                                 // 0x0000   (0x0004)  
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
};

/// Struct /Script/MFNPCAI.AINearGrassBounds
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAINearGrassBounds
{ 
	FVector                                            Center;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	TArray<int32_t>                                    GrassIndexs;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/MFNPCAI.AIGrassClusterInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAIGrassClusterInfo
{ 
	FBox                                               Bounds;                                                     // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FBox>                                       BoxList;                                                    // 0x0020   (0x0010)  
};

/// Struct /Script/MFNPCAI.AIGrassGrayBMP
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAIGrassGrayBMP
{ 
	int32_t                                            BMPWidth;                                                   // 0x0000   (0x0004)  
	int32_t                                            BMPHeight;                                                  // 0x0004   (0x0004)  
	TArray<FColor>                                     Colors;                                                     // 0x0008   (0x0010)  
	FVector2D                                          ZeroPoint;                                                  // 0x0018   (0x0008)  
	float                                              ScaleValue;                                                 // 0x0020   (0x0004)  
	int32_t                                            MinLine;                                                    // 0x0024   (0x0004)  
	int32_t                                            MaxLine;                                                    // 0x0028   (0x0004)  
	int32_t                                            MinRow;                                                     // 0x002C   (0x0004)  
	int32_t                                            MaxRow;                                                     // 0x0030   (0x0004)  
	FBox                                               OriginBoundBox;                                             // 0x0034   (0x001C)  
};

/// Struct /Script/MFNPCAI.AIGrassEditorBlock
/// Size: 0x0068 (104 bytes) (0x000060 - 0x000068) align 8 MaxSize: 0x0068
struct FAIGrassEditorBlock : FAIGrassBlock
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0060   (0x0008)  
};

/// Struct /Script/MFNPCAI.NPCAIPortraitToIDTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FNPCAIPortraitToIDTableRow : FTableRowBase
{ 
	TSoftObjectPtr<class UClass*>                      PortraitClass;                                              // 0x0008   (0x0028)  
	int64_t                                            AIID;                                                       // 0x0030   (0x0008)  
};

/// Struct /Script/MFNPCAI.NPCAISceneEventInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNPCAISceneEventInfo
{ 
	int32_t                                            UniqueID;                                                   // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1620) /* ENPCAISceneEventID */     __um(eventId);                                              // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              StartTime;                                                  // 0x0008   (0x0004)  
	float                                              EndTime;                                                    // 0x000C   (0x0004)  
	float                                              ValidScope;                                                 // 0x0010   (0x0004)  
	FVector                                            TriggerLocation;                                            // 0x0014   (0x000C)  
	TArray<int64_t>                                    AIIDs;                                                      // 0x0020   (0x0010)  
	TArray<int64_t>                                    AIPathGroupIDs;                                             // 0x0030   (0x0010)  
};

/// Struct /Script/MFNPCAI.NPCAISceneEventTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FNPCAISceneEventTableRow : FTableRowBase
{ 
	SDK_UNDEFINED(1,1621) /* ENPCAISceneEventID */     __um(eventId);                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ValidTime;                                                  // 0x000C   (0x0004)  
	float                                              ValidScope;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<int64_t>                                    AIIDs;                                                      // 0x0018   (0x0010)  
	TArray<int64_t>                                    PathGroupIDs;                                               // 0x0028   (0x0010)  
	FString                                            Comments;                                                   // 0x0038   (0x0010)  
};

/// Struct /Script/MFNPCAI.NPCAINoiseEvent
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FNPCAINoiseEvent : FAINoiseEvent
{ 
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneDeleteStage
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneDeleteStage
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneCalculatePointNormalStage
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneCalculatePointNormalStage : FNPCAISteepZoneDeleteStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneCalculatePointSteepDensityStage
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneCalculatePointSteepDensityStage : FNPCAISteepZoneDeleteStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneCalculatePolyNormalStage
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneCalculatePolyNormalStage : FNPCAISteepZoneDeleteStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneCollectNavMeshPolyStage
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneCollectNavMeshPolyStage : FNPCAISteepZoneDeleteStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneGenerateSamplePointStage
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneGenerateSamplePointStage : FNPCAISteepZoneDeleteStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneModifyTileCacheStage
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneModifyTileCacheStage : FNPCAISteepZoneDeleteStage
{ 
};

/// Struct /Script/MFNPCAI.NPCAISteepZoneRebuildNavMeshStage
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FNPCAISteepZoneRebuildNavMeshStage : FNPCAISteepZoneDeleteStage
{ 
};

/// Struct /Script/MFNPCAI.SteepZoneSamplePoint
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FSteepZoneSamplePoint
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/MFNPCAI.SteepZoneNavMeshPoly
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FSteepZoneNavMeshPoly
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/MFNPCAI.SteepZoneDetailTriangle
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FSteepZoneDetailTriangle
{ 
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0000   (0x0070)  MISSED
};

/// Struct /Script/MFNPCAI.AITrackLOGTemplateForDataTable
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAITrackLOGTemplateForDataTable : FTableRowBase
{ 
	SDK_UNDEFINED(1,1622) /* EAITrackLOGType */        __um(LogType);                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            Template;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/MFNPCAI.AILocationRecord
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAILocationRecord
{ 
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/MFNPCAI.AIPathDebugInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAIPathDebugInfo
{ 
	TArray<FVector>                                    PathPoints;                                                 // 0x0000   (0x0010)  
	int32_t                                            SegmentStartIndex;                                          // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.AIDebugLineStruct
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FAIDebugLineStruct
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	FVector                                            StartLocation;                                              // 0x0004   (0x000C)  
	FVector                                            EndLocation;                                                // 0x0010   (0x000C)  
	FColor                                             Color;                                                      // 0x001C   (0x0004)  
	float                                              DurationTime;                                               // 0x0020   (0x0004)  
	float                                              EndTime;                                                    // 0x0024   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIDebugDrawSphereInfo
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FAIDebugDrawSphereInfo
{ 
	FVector                                            Loc;                                                        // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	FLinearColor                                       LineColor;                                                  // 0x0010   (0x0010)  
	float                                              Duration;                                                   // 0x0020   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIDebugDrawLineInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FAIDebugDrawLineInfo
{ 
	FVector                                            StartLoc;                                                   // 0x0000   (0x000C)  
	FVector                                            EndLoc;                                                     // 0x000C   (0x000C)  
	FLinearColor                                       LineColor;                                                  // 0x0018   (0x0010)  
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	float                                              Thickness;                                                  // 0x002C   (0x0004)  
};

/// Struct /Script/MFNPCAI.PMCAISpawnInfo_ForSearchPath
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPMCAISpawnInfo_ForSearchPath
{ 
	class AActor*                                      SourcePoint;                                                // 0x0000   (0x0008)  
	float                                              TotalCost;                                                  // 0x0008   (0x0004)  
	bool                                               Checked;                                                    // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAI.CheckCoverPointFinder
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCheckCoverPointFinder
{ 
	class AActor*                                      AIPawn;                                                     // 0x0000   (0x0008)  
	float                                              CheckPathLength;                                            // 0x0008   (0x0004)  
	int32_t                                            IndexFind;                                                  // 0x000C   (0x0004)  
	float                                              LastTimestamp;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FCoverPointOctreeElement>                   Elements;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/MFNPCAI.AICoverPointInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FAICoverPointInfo
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	bool                                               IsFree;                                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	class AActor*                                      OwnerActor;                                                 // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	FVector                                            ToWallVector;                                               // 0x001C   (0x000C)  
	SDK_UNDEFINED(1,1623) /* EAIPose */                __um(ProtectedStance);                                      // 0x0028   (0x0001)  
	bool                                               IsSafe;                                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              LastSpottedTime;                                            // 0x002C   (0x0004)  
	FVector                                            FirePosition;                                               // 0x0030   (0x000C)  
	SDK_UNDEFINED(1,1624) /* EAIPose */                __um(FireStance);                                           // 0x003C   (0x0001)  
	SDK_UNDEFINED(1,1625) /* EAILeanType */            __um(TiltType);                                             // 0x003D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	float                                              BaseWeight;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.AICharacterConfig
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAICharacterConfig
{ 
	float                                              FireInterval;                                               // 0x0000   (0x0004)  
	float                                              PerBurstReduce;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIIDSegInfoData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAIIDSegInfoData
{ 
	int64_t                                            Div;                                                        // 0x0000   (0x0008)  
	int64_t                                            Mod;                                                        // 0x0008   (0x0008)  
};

/// Struct /Script/MFNPCAI.AIIDSegInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FAIIDSegInfo
{ 
	FAIIDSegInfoData                                   MainCategory;                                               // 0x0000   (0x0010)  
	FAIIDSegInfoData                                   Career;                                                     // 0x0010   (0x0010)  
	FAIIDSegInfoData                                   Tendency;                                                   // 0x0020   (0x0010)  
	FAIIDSegInfoData                                   Difficulty;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MFNPCAI.AIBeenShootRecord
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAIBeenShootRecord
{ 
	class AActor*                                      Investigator;                                               // 0x0000   (0x0008)  
	bool                                               bIsHit;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ShootTimeSecond;                                            // 0x000C   (0x0004)  
	float                                              ShootDistance;                                              // 0x0010   (0x0004)  
	FVector                                            ShootLocation;                                              // 0x0014   (0x000C)  
	float                                              DamageDealt;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIRollDecisionStruct
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FNPCAIRollDecisionStruct : FTableRowBase
{ 
	SDK_UNDEFINED(1,1626) /* ENPCAIDecision */         __um(Decision);                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              BaseTendency;                                               // 0x000C   (0x0004)  
	float                                              BasePerceive;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIMoveRequest
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
struct FNPCAIMoveRequest : FAIMoveRequest
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIFireSetting
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNPCAIFireSetting
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AActor*                                      EnemyTarget;                                                // 0x0010   (0x0008)  
	bool                                               bCalcSight;                                                 // 0x0018   (0x0001)  
	bool                                               bCalcShoot;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FireInterval;                                               // 0x001C   (0x0004)  
	bool                                               bIgnoreAimingTime;                                          // 0x0020   (0x0001)  
	bool                                               bEnabledHitRateControl;                                     // 0x0021   (0x0001)  
	bool                                               bEnabledRecoilControl;                                      // 0x0022   (0x0001)  
	SDK_UNDEFINED(1,1627) /* EAIBodyPartType */        __um(ShootPartID);                                          // 0x0023   (0x0001)  
	SDK_UNDEFINED(1,1628) /* EAIBodyPartType */        __um(LastShootPartID);                                      // 0x0024   (0x0001)  
	SDK_UNDEFINED(1,1629) /* EAIBodyPartType */        __um(RealHitPartID);                                        // 0x0025   (0x0001)  
	bool                                               bPressureAim;                                               // 0x0026   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0027   (0x0001)  MISSED
	float                                              WaitEndtime;                                                // 0x0028   (0x0004)  
	FVector                                            LastFireLocation;                                           // 0x002C   (0x000C)  
	class UNPCAITargetInfo*                            EnemyInfo;                                                  // 0x0038   (0x0008)  
};

/// Struct /Script/MFNPCAI.NPCAIFireOrder
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNPCAIFireOrder
{ 
	bool                                               bValidOrder;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            FirePoint;                                                  // 0x0004   (0x000C)  
	SDK_UNDEFINED(1,1630) /* EAIBodyPartType */        __um(HitPart);                                              // 0x0010   (0x0001)  
	bool                                               IsUsingPredestined;                                         // 0x0011   (0x0001)  
	bool                                               IsHit;                                                      // 0x0012   (0x0001)  
	bool                                               bShotLimited;                                               // 0x0013   (0x0001)  
	bool                                               bFakeShot;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAI.AIBodyPartVisibilityInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAIBodyPartVisibilityInfo
{ 
	SDK_UNDEFINED(1,1631) /* EAIBodyPartType */        __um(BodyPartType);                                         // 0x0000   (0x0001)  
	bool                                               bIsVisible;                                                 // 0x0001   (0x0001)  
	bool                                               bCanShoot;                                                  // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              LastCanSeeTime;                                             // 0x0004   (0x0004)  
	int32_t                                            GrassWeight;                                                // 0x0008   (0x0004)  
	int32_t                                            ShootCalculateCount;                                        // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,1632) /* ENPCAISenseBarrier */     __um(Barrier);                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAI.AIBodyPartHitInfo
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FAIBodyPartHitInfo
{ 
	SDK_UNDEFINED(1,1633) /* EAIBodyPartType */        __um(BodyPartType);                                         // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HitDurationStartTime;                                       // 0x0004   (0x0004)  
	float                                              HitDurationValues;                                          // 0x0008   (0x0004)  
	float                                              FirstHitTime;                                               // 0x000C   (0x0004)  
	float                                              LastHitTime;                                                // 0x0010   (0x0004)  
};

/// Struct /Script/MFNPCAI.AIVisibleResult
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAIVisibleResult
{ 
	bool                                               IsVisible;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            BlockWeight;                                                // 0x0004   (0x0004)  
	SDK_UNDEFINED(1,1634) /* ENPCAISenseBarrier */     __um(Barrier);                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAI.NPCAIWeaponConfigTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FNPCAIWeaponConfigTableRow : FTableRowBase
{ 
	int64_t                                            WeaponId;                                                   // 0x0008   (0x0008)  
	float                                              FireIntervalMin;                                            // 0x0010   (0x0004)  
	float                                              FireIntervalMax;                                            // 0x0014   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UNPCBTService_BlueprintBase) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UNPCBTTask_BlueprintBase) == 0x00A8); // 168 bytes (0x000070 - 0x0000A8)
static_assert(sizeof(UNPCBTTask_LatenTaskBase) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UNPCAISubsystemBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(ANPCAISpawnPoint) == 0x0348); // 840 bytes (0x000340 - 0x000348)
static_assert(sizeof(UNPCAIPathFollowingComponent) == 0x03A0); // 928 bytes (0x000298 - 0x0003A0)
static_assert(sizeof(ANPCAINavModifierVolume) == 0x0388); // 904 bytes (0x000368 - 0x000388)
static_assert(sizeof(FAIRuntimeMonitorStatInfo) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(UAIRuntimeMonitor) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UAISceneEventMessage) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UAISceneEvent_SpawnAI) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(UAISceneEventsTriggerManager) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FAISGDoorUsed) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAISGDoorManager) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UBehaviorTreeTooler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANavLinkProxyGenerator) == 0x0378); // 888 bytes (0x000318 - 0x000378)
static_assert(sizeof(UNPCAIActorComponent) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(sizeof(UNPCAIAimingInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIAreaVolumeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIAsyncTaskBase) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FNPCAIAsyncTask) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNPCAIAsyncTaskSystem) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UNPCAIAttentionPoint) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UNPCAIBattleVolumeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIBehaviorHistoryDebugInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAICharacterInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIControllerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAICoverEnvQueryData) == 0x01D0); // 464 bytes (0x000028 - 0x0001D0)
static_assert(sizeof(UNPCAICoverEnvQueryGenerator) == 0x0218); // 536 bytes (0x000210 - 0x000218)
static_assert(sizeof(UNPCAICoverEnvQueryTest_CanAttackTo) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_CanContain) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_CloserRatio) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_CoverDist) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_DefenceAngle) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_DefenceRatio) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_DistanceToAllyCover) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_DistanceToHotPoint) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_IsFree) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_IsInCone) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_IsNear) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_IsSafe) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_IsSameSideToTarget) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UNPCAICoverEnvQueryTest_PathLength) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UNPCAICoverEnvQueryTest_Protection) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UNPCAICoverEnvQueryTest_ShootDistance) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UNPCAICoverSystemStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIDamageData) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNPCAIDoorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIDoorOpenInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIDynamicGroupInfo) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FAIShotCountStat) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNPCAITargetInfoBase) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UNPCAIEnemyGroupSingleInfo) == 0x00A8); // 168 bytes (0x000060 - 0x0000A8)
static_assert(sizeof(UNPCAIEnvQueryGenerator_BlueprintBase) == 0x00C0); // 192 bytes (0x000080 - 0x0000C0)
static_assert(sizeof(UNPCAIEnvQueryGenerator_OnPolyCenter) == 0x02F8); // 760 bytes (0x000210 - 0x0002F8)
static_assert(sizeof(UNPCAIEnvQueryInstanceBlueprintWrapper) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UNPCAIEnvQueryItemType_CoverPoint) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UNPCAIEnvQueryManager) == 0x0140); // 320 bytes (0x000140 - 0x000140)
static_assert(sizeof(UNPCAIEnvQueryTest_BlueprintBase) == 0x0218); // 536 bytes (0x0001F8 - 0x000218)
static_assert(sizeof(UNPCAIEnvQueryTest_PathfindingFromQuerier) == 0x0238); // 568 bytes (0x0001F8 - 0x000238)
static_assert(sizeof(UNPCAIEnvQueryTest_PointBase) == 0x0218); // 536 bytes (0x0001F8 - 0x000218)
static_assert(sizeof(UNPCAIEQSSystemStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIEventSubsystem) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNPCAIFactionComponent) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UNPCAIFactionPluginBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FNPCAIProfileCover) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UNPCAIFactionPlugin) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UNPCAIFindAmbushAgainstPointAsyncTask) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(UNPCAIFindPathByKeyRouteAsyncTask) == 0x0128); // 296 bytes (0x000040 - 0x000128)
static_assert(sizeof(UNPCAIGameStateDebugInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIGlobalManagerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAIGlobalCacheActors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAIEnemyInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAIAnalysisReport) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAIProtectTreasureBox) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UNPCAIGlobalSharedInfo) == 0x0300); // 768 bytes (0x000028 - 0x000300)
static_assert(sizeof(UNPCAIGoalTarget) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNPCAIGroupBaseRequest) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UNPCAIGroupAttackCloseRequest) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UNPCAIGroupCustomRequest) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UNPCAIGroupDoorOpenRequest) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UNPCAIGroupFollowMeRequest) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UNPCAIGroupGoToPointRequest) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UNPCAIGroupHideRequest) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UNPCAIGroupHoldRequest) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UNPCAISubSystemComponent) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(sizeof(UNPCAIGroupRequestComponent) == 0x0158); // 344 bytes (0x000108 - 0x000158)
static_assert(sizeof(UNPCAIGroupRequestController) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNPCAIGroupSusspressionFireRequest) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UNPCAIGroupThrowGrenadeRequest) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UNPCAIGroupWarnPlayerRequest) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(FMetisOptions) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHNavSettings) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FPortalEdge) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntraPath) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHNavGraph) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(FHNavSearchInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(ANPCAIHNavActor) == 0x04A8); // 1192 bytes (0x000318 - 0x0004A8)
static_assert(sizeof(ANPCAILaunchPad) == 0x0350); // 848 bytes (0x000318 - 0x000350)
static_assert(sizeof(UNPCAITestingRenderingComponent) == 0x04F0); // 1264 bytes (0x0004F0 - 0x0004F0)
static_assert(sizeof(UNPCAILocalNavigationRenderingComponent) == 0x04F0); // 1264 bytes (0x0004F0 - 0x0004F0)
static_assert(sizeof(UNPCAINavSubsystemBase) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAILocalNavigationSubsystem) == 0x00D0); // 208 bytes (0x000038 - 0x0000D0)
static_assert(sizeof(ANPCAITestingActor) == 0x0358); // 856 bytes (0x000318 - 0x000358)
static_assert(sizeof(ANPCAILocalNavigationTestingActor) == 0x03B8); // 952 bytes (0x000358 - 0x0003B8)
static_assert(sizeof(FAIBackUpCoverPointFinder) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FAIStackGunRecord) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FAIRoundPathFindingNodes) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FNPCAIQueryRoundEnvironmentResult) == 0x005C); // 92 bytes (0x000000 - 0x00005C)
static_assert(sizeof(UNPCAIMemorySystemComponent) == 0x0320); // 800 bytes (0x000108 - 0x000320)
static_assert(sizeof(UNPCAIPropertyProfileBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNPCAIModifierProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIModifierAITypeProfile) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNPCAIProfileBaseComponent) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNPCAIModifierComponent) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIModifierComponent_AIType) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FAIArmorAttributeModifier) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UAIModifierArmorProfile) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNPCAIModifierComponent_Armor) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAIModifierDamageProfile) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNPCAIModifierComponent_Damage) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FAILocationMonitor) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNPCAIMoverSystemComponent) == 0x02F8); // 760 bytes (0x000108 - 0x0002F8)
static_assert(sizeof(UNPCAIMultiTargetSystemComponent) == 0x01D0); // 464 bytes (0x000108 - 0x0001D0)
static_assert(sizeof(UNPCAIMultiTargetSelectorComponent) == 0x02D8); // 728 bytes (0x0001D0 - 0x0002D8)
static_assert(sizeof(UNPCAINavAreaComponent) == 0x0150); // 336 bytes (0x000128 - 0x000150)
static_assert(sizeof(UNPCAINavAreaInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANPCAINavAreaObstacleActor) == 0x03F8); // 1016 bytes (0x000318 - 0x0003F8)
static_assert(sizeof(UNPCAINavConnectivitySystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAINavCostSubsystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAINavDebugSystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAINavExperimentSystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAINavigationStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAINavigationSystem) == 0x1800); // 6144 bytes (0x0015F8 - 0x001800)
static_assert(sizeof(UNPCAINavigationSystemConfig) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(FNavSkeletonBuildSettings) == 0x008C); // 140 bytes (0x000000 - 0x00008C)
static_assert(sizeof(FNavSkeletonPoint) == 0x00A0); // 160 bytes (0x000010 - 0x0000A0)
static_assert(sizeof(FNavSkeletonPathPoint) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNavSkeletonPatchedPath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNavSkeletonData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNPCAINavPlatformBuildTemplate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNPCAINavPlatformNavMeshBoundsVolumeData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNPCAINavPlatformRegion) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FNPCAINavPlatformBuildData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNPCAINavPlatformPathInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNPCAINavPlatformLinkLine) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(ANPCAINavMeshManager) == 0x0720); // 1824 bytes (0x000318 - 0x000720)
static_assert(sizeof(UNPCAINavMeshRenderingComponent) == 0x04F0); // 1264 bytes (0x0004F0 - 0x0004F0)
static_assert(sizeof(ANPCAINavMeshTestingActor) == 0x0720); // 1824 bytes (0x000358 - 0x000720)
static_assert(sizeof(UNPCAINavPlatformComponent) == 0x0128); // 296 bytes (0x0000F8 - 0x000128)
static_assert(sizeof(UNPCAINavMovablePlatformComponent) == 0x0130); // 304 bytes (0x000128 - 0x000130)
static_assert(sizeof(UNPCAINavPlatformSystem) == 0x0340); // 832 bytes (0x000038 - 0x000340)
static_assert(sizeof(FNavCostDescriptor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNavPolyRefArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNavCostModifierSharedPointer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNPCAINavRuntimeSystem) == 0x03B8); // 952 bytes (0x000038 - 0x0003B8)
static_assert(sizeof(ANPCAINavSkeletonForcePoint) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UNPCAINavSkeletonSystem) == 0x0160); // 352 bytes (0x000038 - 0x000160)
static_assert(sizeof(UNPCAINavSteepZoneSystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNavArea_Burning) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_TearGas) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_TripMine) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Claymore) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Paradrop) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Vehicle) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_UnderPlatform) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Avoid) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Color0) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Color1) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Color2) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Color3) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Color4) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Color5) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Color6) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_Dynamic) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UNavArea_ClosedDoor) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UFloodSeedCollection) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(ANavPathPointActor) == 0x0348); // 840 bytes (0x000318 - 0x000348)
static_assert(sizeof(UNavigationQueryFilter_DontVault) == 0x0100); // 256 bytes (0x000048 - 0x000100)
static_assert(sizeof(UNavigationQueryFilter_Diversity) == 0x00C0); // 192 bytes (0x000048 - 0x0000C0)
static_assert(sizeof(FNPCAINavPlatformBuildConfig) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNavLinkAcceptanceRadiusEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAINavGenerationSettings) == 0x01D8); // 472 bytes (0x000038 - 0x0001D8)
static_assert(sizeof(UNPCAINavUtilitySystem) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPeekPointAsyncTask) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(FAIGrassMapInfo) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FAIFoliageGrassBlock) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FAILandscapeGrassBlock) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAIGrassBox) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FAIGrassCylinder) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAIGrassBlock) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ANPCAIPerceptionAssistActor) == 0x03F0); // 1008 bytes (0x000318 - 0x0003F0)
static_assert(sizeof(FAIGrassOctreeElement) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UNPCAIPerceptionComponent) == 0x02D0); // 720 bytes (0x0001D8 - 0x0002D0)
static_assert(sizeof(FAIBlockArea) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FAISenseFlashBlock) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(ANPCAIPerceptionDynamicActor) == 0x0350); // 848 bytes (0x000318 - 0x000350)
static_assert(sizeof(UNPCAIPerceptionSystem) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(UNPCAIProfile) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNPCAIPropertyProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FAIBodyPartAimingChoice) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAIBodyBulkAimingChoice) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRangeLimit) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UAIPropertyAimingProfile) == 0x01B8); // 440 bytes (0x000038 - 0x0001B8)
static_assert(sizeof(UNPCAIPropertyComponent_Aiming) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UAIPropertyAITypeProfile) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNPCAIPropertyComponent_AIType) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAIPropertyBlockProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent_Block) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyBossProfile) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNPCAIPropertyComponent_Boss) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyCoreProfile) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNPCAIPropertyComponent_Core) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyCurveProfile) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNPCAIPropertyComponent_Curve) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyDamageProfile) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UNPCAIPropertyComponent_Damage) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAIPropertyGlobalProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent_Global) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyGrenadeProfile) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(sizeof(UNPCAIPropertyComponent_Grenade) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UAIPropertyHealthProfile) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNPCAIPropertyComponent_Health) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FAIHearingNoisePower) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UAIPropertyHearingProfile) == 0x00F8); // 248 bytes (0x000038 - 0x0000F8)
static_assert(sizeof(UNPCAIPropertyComponent_Hearing) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyLayProfile) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNPCAIPropertyComponent_Lay) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FAISenseSightNormal) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAIPropertyLookProfile) == 0x0158); // 344 bytes (0x000038 - 0x000158)
static_assert(sizeof(UNPCAIPropertyComponent_Look) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FAIMindGoalEnemyAngleMultiple) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAIPropertyMindProfile) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UNPCAIPropertyComponent_Mind) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyMoveProfile) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(UNPCAIPropertyComponent_Move) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FAIPropertyNavProfile_Clamp) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAIPropertyNavProfile) == 0x0180); // 384 bytes (0x000038 - 0x000180)
static_assert(sizeof(UNPCAIPropertyComponent_Nav) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyPlayerActionReactionProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent_PlayerActionReaction) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyRequestRunProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent_RequestRun) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyShootProfile) == 0x00E8); // 232 bytes (0x000038 - 0x0000E8)
static_assert(sizeof(UNPCAIPropertyComponent_Shoot) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertySmartProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent_Smart) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertySoundProfile) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNPCAIPropertyComponent_Sound) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyStrategyProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent_Strategy) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyTacticProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIPropertyComponent_Tactic) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UAIPropertyWeaponProfile) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UNPCAIPropertyComponent_Weapon) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAIQueryRoundEnvironmentAsyncTask) == 0x0078); // 120 bytes (0x000040 - 0x000078)
static_assert(sizeof(FNPCAINavAreaBox) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNPCAIDynamicNavAreaData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(ANPCAIRecastNavMesh) == 0x0698); // 1688 bytes (0x0005E8 - 0x000698)
static_assert(sizeof(UNPCAIRecoilInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIRLAgentComponentInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIRoleComponent) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(UNPCAIRoleModifierComponent) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNPCAIComingExplosionEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UNPCAISense_ComingExplosion) == 0x00E8); // 232 bytes (0x000080 - 0x0000E8)
static_assert(sizeof(FNPCAIDamageEvent) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNPCAISense_Damage) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(FAINoiseMakerInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNPCAISense_Hearing) == 0x0140); // 320 bytes (0x0000E8 - 0x000140)
static_assert(sizeof(UNPCAISense_Sight) == 0x0198); // 408 bytes (0x000170 - 0x000198)
static_assert(sizeof(UNPCAISenseConfig_ComingExplosion) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNPCAISenseConfig_Damage) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(UNPCAISenseConfig_Hearing) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(UNPCAISenseConfig_Sight) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UNPCAISenseEvent_ComingExplosion) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UNPCAISenseEvent_Damage) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UNPCAISenseSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAISettingsComponent) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(UNPCAIStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIStaticsInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAISteepZoneRenderingComponent) == 0x04F0); // 1264 bytes (0x0004F0 - 0x0004F0)
static_assert(sizeof(FSteepZoneDeleteSettings) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FNPCAISteepZoneDeleter) == 0x0180); // 384 bytes (0x000000 - 0x000180)
static_assert(sizeof(ANPCAISteepZoneTestingActor) == 0x0530); // 1328 bytes (0x000358 - 0x000530)
static_assert(sizeof(UNPCAISteeringInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAISubSystemStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAISystem) == 0x0150); // 336 bytes (0x000148 - 0x000150)
static_assert(sizeof(UNPCAITacticSystemComponent) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(UNPCAITargetInfo) == 0x0360); // 864 bytes (0x000060 - 0x000360)
static_assert(sizeof(UNPCAITargetScoreBlueprintBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAIGroupAllyDeathInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(UNPCAITeam) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UNPCAITeamInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIThrowSystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FAITrackLOG) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAITrackLOGUnit) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UNPCAITrackLogger) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPortraitBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAIPortraitDefault) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIUALootSubAreaVolumeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIVolumeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCAIZoneGroupInfo) == 0x00E8); // 232 bytes (0x0000C0 - 0x0000E8)
static_assert(sizeof(UNPCBehaviorLOD) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UNPCBehaviorLODAction) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNPCBehaviorLODActionTick) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FComponentInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNPCBehaviorLODSystemComponent) == 0x0178); // 376 bytes (0x000108 - 0x000178)
static_assert(sizeof(UNPCBTDecorator) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(UNPCBTDecorator_AIPropertyComparison) == 0x00C8); // 200 bytes (0x000090 - 0x0000C8)
static_assert(sizeof(UNPCBTDecorator_BBConditionBase) == 0x00E8); // 232 bytes (0x000090 - 0x0000E8)
static_assert(sizeof(UNPCBTDecorator_BBConditionBool) == 0x00C0); // 192 bytes (0x000090 - 0x0000C0)
static_assert(sizeof(UNPCBTDecorator_BBConditionFloat) == 0x00E8); // 232 bytes (0x000090 - 0x0000E8)
static_assert(sizeof(UNPCBTDecorator_BBConditionInt) == 0x00F0); // 240 bytes (0x0000E8 - 0x0000F0)
static_assert(sizeof(UNPCBTDecorator_BBConditionObject) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UNPCBTDecorator_BBConditionString) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(UNPCBTDecorator_BlueprintBase) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UNPCBTDecorator_HasSuspectPoints) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UNPCBTDecorator_IsCloseEnough) == 0x0098); // 152 bytes (0x000090 - 0x000098)
static_assert(sizeof(UNPCBTDecorator_ShouldWaitAtPathNode) == 0x0090); // 144 bytes (0x000090 - 0x000090)
static_assert(sizeof(UNPCBTDecorator_SingletonBlueprintBase) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(UNPCBTDecorator_TickIntervalBase) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UNPCBTDecorator_Wait) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UNPCBTService) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UNPCBTService_FindRandomPosition) == 0x00F0); // 240 bytes (0x000098 - 0x0000F0)
static_assert(sizeof(UNPCBTService_SetSenseRangeScale) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UNPCBTService_SetVisionHalfAngle) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(UNPCBTService_SingletonBlueprintBase) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(UNPCBTTaskNode) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UNPCBTTask_AttackEnemy) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UNPCBTTask_CalcNextAttackPosition) == 0x00B8); // 184 bytes (0x000098 - 0x0000B8)
static_assert(sizeof(UNPCBTTask_CalcNextWanderPathNode) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UNPCBTTask_ClearFocalPoint) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UNPCBTTask_DBNORescue) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UNPCBTTask_Decision) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UNPCBTTask_FireEnemy) == 0x0178); // 376 bytes (0x0000B0 - 0x000178)
static_assert(sizeof(UNPCBTTask_FireEnemyEx) == 0x00E8); // 232 bytes (0x0000B0 - 0x0000E8)
static_assert(sizeof(UNPCBTTask_FollowPathNode) == 0x00E8); // 232 bytes (0x000098 - 0x0000E8)
static_assert(sizeof(UNPCBTTask_MeleeAttackEnemy) == 0x00F8); // 248 bytes (0x0000B0 - 0x0000F8)
static_assert(sizeof(UNPCBTTask_MoveToEx) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UNPCBTTask_PlayAkSound) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UNPCBTTask_ResetTargetLocation) == 0x0098); // 152 bytes (0x000098 - 0x000098)
static_assert(sizeof(UNPCBTTask_SetAIPose) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(UNPCBTTask_SetBlackboardValue) == 0x00E8); // 232 bytes (0x000098 - 0x0000E8)
static_assert(sizeof(UNPCBTTask_SetFocalPoint) == 0x00C0); // 192 bytes (0x000098 - 0x0000C0)
static_assert(sizeof(UNPCBTTask_SetMovementSpeed) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UNPCBTTask_SetSenseRangeScale) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UNPCBTTask_SetTargetHatred) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UNPCBTTask_SetVisionHalfAngle) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(UNPCBTTask_StartShoulderAimingTarget) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UNPCBTTask_StopShoulderAimingTarget) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UNPCCharacterAIDBNOInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIDeathInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIDebugInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIExplodeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIFireInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIIKInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIInventoryInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIMoveInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIPathNodeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIPerceptionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIPickUpInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIPoseCacheInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAIPoseInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAISenseAbilityInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAISoundInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAITakeCoverInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAITeamRescueInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterAITurnInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterHealthInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNPCCharacterTakeDamageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANPCGrassIdentificationVolume) == 0x0350); // 848 bytes (0x000350 - 0x000350)
static_assert(sizeof(USGActorFactionCompInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USGAIStimuliSourceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USGFactionInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USGTeamInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNavSkeletonGraphResultNode) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNavSkeletonGraphFindResult) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNPCAIFindAmbushAgainstPointResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNPCAIFindPathByKeyRouteResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNPCAIPeekPointResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAIRoutePoint) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNPCAIActivityAIIDModifierTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FAIDataProviderFVectorValue) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FAIDoorSingleSafetyPoint) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAISafetyOpenDoorResp) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNPCAIProfileCoverTag) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNPCAIIDModifierTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FNPCAINavSkeletonBuildStage) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonAddRegionConnectionStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonBuilder) == 0x0490); // 1168 bytes (0x000000 - 0x000490)
static_assert(sizeof(FNPCAINavSkeletonCalculateCoverageStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonCalculateDivergenceStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonCalculateGradientStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonCalculateSymmetricAttributeStage) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FNPCAINavSkeletonCalculateMovingStage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNPCAINavSkeletonCalculateOutdoorsStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonCalculateProtectionStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonCalculateThrowingStage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNPCAINavSkeletonCalculateVisibilityStage) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FNPCAINavSkeletonCalculateWallDistanceStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonCheckEdgeOnNavMeshStage) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FNPCAINavSkeletonCollectConnectionInfoStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonCollectNeighbourInfoStage) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FNPCAINavSkeletonFindPathForUnstableSegmentStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonFindWallsInNeighbourhoodStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonGeneratePolylineStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonGenerateRawPointStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNavSkeletonPathFindingRequest) == 0x01B8); // 440 bytes (0x000000 - 0x0001B8)
static_assert(sizeof(FNavSkeletonPathFindingQueue) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FNavSkeletonGraphAStarFilter) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FNavSkeletonGraphCostType) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNPCAINavSkeletonInitializePointExtraAttributeStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonLabelNavMeshStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonPrunePointStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonRemoveIsolatedPointStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonRemoveTriangleConnectionStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonSavePointStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonSetupPointBattleIntensityExpectation) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonSetupPointBattleVolumeStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonSetupPointKindStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNPCAINavSkeletonSimplifyPolylineStage) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FNavSkeletonMoveSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNavSkeletonPolyline) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNavSkeletonSamplePoint) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNavSkeletonSamplePolyline) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNPCAIOverrideAvoidGunlineParam) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNavCostModifier) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNPCAINavPathForBP) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNPCAIMoveRequestCustomDataImpl) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFNavMeshRegionMap) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FMFNavMeshRegion) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNavConnectivityInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FSoAStorage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPortalEdgeStorage) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FUInt64Storage) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FInt32Storage) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FNavLinkInfo) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCoverPointPathLengthResult) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAICandidateStandPosition) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAINearGrassBounds) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAIGrassClusterInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAIGrassGrayBMP) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAIGrassEditorBlock) == 0x0068); // 104 bytes (0x000060 - 0x000068)
static_assert(sizeof(FNPCAIPortraitToIDTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FNPCAISceneEventInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNPCAISceneEventTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FNPCAINoiseEvent) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FNPCAISteepZoneDeleteStage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNPCAISteepZoneCalculatePointNormalStage) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FNPCAISteepZoneCalculatePointSteepDensityStage) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FNPCAISteepZoneCalculatePolyNormalStage) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FNPCAISteepZoneCollectNavMeshPolyStage) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FNPCAISteepZoneGenerateSamplePointStage) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FNPCAISteepZoneModifyTileCacheStage) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FNPCAISteepZoneRebuildNavMeshStage) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FSteepZoneSamplePoint) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FSteepZoneNavMeshPoly) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSteepZoneDetailTriangle) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FAITrackLOGTemplateForDataTable) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAILocationRecord) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAIPathDebugInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAIDebugLineStruct) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAIDebugDrawSphereInfo) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FAIDebugDrawLineInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPMCAISpawnInfo_ForSearchPath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCheckCoverPointFinder) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAICoverPointInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAICharacterConfig) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAIIDSegInfoData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAIIDSegInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAIBeenShootRecord) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNPCAIRollDecisionStruct) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FNPCAIMoveRequest) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(FNPCAIFireSetting) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNPCAIFireOrder) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAIBodyPartVisibilityInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAIBodyPartHitInfo) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAIVisibleResult) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNPCAIWeaponConfigTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(offsetof(UNPCBTService_BlueprintBase, AIOwner) == 0x0078);
static_assert(offsetof(UNPCBTTask_BlueprintBase, AIOwner) == 0x0078);
static_assert(offsetof(UNPCBTTask_BlueprintBase, TickInterval) == 0x0080);
static_assert(offsetof(ANPCAINavModifierVolume, AffectedPolygons) == 0x0368);
static_assert(offsetof(ANPCAINavModifierVolume, AffectedNavLinks) == 0x0378);
static_assert(offsetof(UAIRuntimeMonitor, StatMap) == 0x0028);
static_assert(offsetof(UAISceneEventMessage, Tags) == 0x0030);
static_assert(offsetof(UAISceneEventMessage, ObjectParams) == 0x0040);
static_assert(offsetof(UAISceneEventMessage, TriggerLocation) == 0x005C);
static_assert(offsetof(UAISceneEventsTriggerManager, SceneEventsList) == 0x0028);
static_assert(offsetof(FAISGDoorUsed, SGDoor) == 0x0000);
static_assert(offsetof(FAISGDoorUsed, AIPawn) == 0x0008);
static_assert(offsetof(UAISGDoorManager, AISGDoorUsedList) == 0x0028);
static_assert(offsetof(ANavLinkProxyGenerator, CachedNavSys) == 0x0368);
static_assert(offsetof(ANavLinkProxyGenerator, CachedNavMeshData) == 0x0370);
static_assert(offsetof(UNPCAIActorComponent, PropertyComponents) == 0x00F8);
static_assert(offsetof(UNPCAIAsyncTaskBase, AIPawn) == 0x0038);
static_assert(offsetof(FNPCAIAsyncTask, AIPawn) == 0x0000);
static_assert(offsetof(FNPCAIAsyncTask, AsyncTask) == 0x0010);
static_assert(offsetof(UNPCAIAsyncTaskSystem, AsyncTasks) == 0x0030);
static_assert(offsetof(UNPCAIAttentionPoint, Creator) == 0x0030);
static_assert(offsetof(UNPCAIAttentionPoint, FootSounderSpawnCharacter) == 0x0040);
static_assert(offsetof(UNPCAIAttentionPoint, CheckingPlayer) == 0x0048);
static_assert(offsetof(UNPCAICoverEnvQueryData, Generator_Location) == 0x00D0);
static_assert(offsetof(UNPCAICoverEnvQueryData, Generator_BotZoneVolume) == 0x00E0);
static_assert(offsetof(UNPCAICoverEnvQueryData, IsNear_Location) == 0x00F0);
static_assert(offsetof(UNPCAICoverEnvQueryData, CloserRatio_Location) == 0x0104);
static_assert(offsetof(UNPCAICoverEnvQueryData, CanContain_TargetLocation) == 0x0114);
static_assert(offsetof(UNPCAICoverEnvQueryData, CanAttackTo_TargetLocation) == 0x012C);
static_assert(offsetof(UNPCAICoverEnvQueryData, CanAttackTo_IgnoredActors) == 0x0138);
static_assert(offsetof(UNPCAICoverEnvQueryData, PathLength_StartLocation) == 0x0148);
static_assert(offsetof(UNPCAICoverEnvQueryData, DistanceToHotPoint_Locations) == 0x0168);
static_assert(offsetof(UNPCAICoverEnvQueryData, DistanceToAllyCover_Location) == 0x0178);
static_assert(offsetof(UNPCAICoverEnvQueryData, IsSameSideToTarget_TargetLocation) == 0x0188);
static_assert(offsetof(UNPCAICoverEnvQueryData, IsSameSideToTarget_TargetDirection) == 0x0194);
static_assert(offsetof(UNPCAICoverEnvQueryData, IsInCone_Location) == 0x01A0);
static_assert(offsetof(UNPCAICoverEnvQueryData, IsInCone_Direction) == 0x01AC);
static_assert(offsetof(UNPCAICoverEnvQueryData, CoverDist_Location) == 0x01C0);
static_assert(offsetof(UNPCAICoverEnvQueryGenerator, CacheCoverSystem) == 0x0210);
static_assert(offsetof(UNPCAICoverEnvQueryTest_Protection, ProtectionFrom) == 0x01F8);
static_assert(offsetof(UNPCAICoverEnvQueryTest_ShootDistance, ShootDistanceTo) == 0x01F8);
static_assert(offsetof(UNPCAIDamageData, position) == 0x002C);
static_assert(offsetof(UNPCAIDynamicGroupInfo, AllyList) == 0x0040);
static_assert(offsetof(UNPCAIDynamicGroupInfo, WorldPrivate) == 0x0050);
static_assert(offsetof(UNPCAITargetInfoBase, BeFireCount) == 0x0030);
static_assert(offsetof(UNPCAITargetInfoBase, BeHitCount) == 0x0040);
static_assert(offsetof(UNPCAIEnemyGroupSingleInfo, EnemyLastSeenPosition) == 0x0068);
static_assert(offsetof(UNPCAIEnemyGroupSingleInfo, Person) == 0x0080);
static_assert(offsetof(UNPCAIEnemyGroupSingleInfo, EnemyLastEstimatePosition) == 0x009C);
static_assert(offsetof(UNPCAIEnvQueryGenerator_BlueprintBase, IntParam) == 0x0080);
static_assert(offsetof(UNPCAIEnvQueryGenerator_OnPolyCenter, OnlyCurrentRegion) == 0x0210);
static_assert(offsetof(UNPCAIEnvQueryGenerator_OnPolyCenter, IncludeNavMeshPolyCenters) == 0x0248);
static_assert(offsetof(UNPCAIEnvQueryGenerator_OnPolyCenter, IncludeNavMeshInternalEdges) == 0x0280);
static_assert(offsetof(UNPCAIEnvQueryGenerator_OnPolyCenter, IncludeNavMeshBoundaryEdges) == 0x02B8);
static_assert(offsetof(UNPCAIEnvQueryTest_BlueprintBase, Context) == 0x01F8);
static_assert(offsetof(UNPCAIEnvQueryTest_BlueprintBase, TestDescription) == 0x0200);
static_assert(offsetof(UNPCAIEnvQueryTest_PathfindingFromQuerier, SkipUnreachable) == 0x0200);
static_assert(offsetof(UNPCAIEnvQueryTest_PointBase, Context) == 0x01F8);
static_assert(offsetof(UNPCAIEnvQueryTest_PointBase, TestDescription) == 0x0200);
static_assert(offsetof(UNPCAIFactionComponent, PropertyProfiles) == 0x0110);
static_assert(offsetof(FNPCAIProfileCover, Ars) == 0x0000);
static_assert(offsetof(FNPCAIProfileCover, CoverName) == 0x0018);
static_assert(offsetof(UNPCAIFactionPlugin, ProfileCover) == 0x0088);
static_assert(offsetof(UNPCAIFindAmbushAgainstPointAsyncTask, PointStart) == 0x0060);
static_assert(offsetof(UNPCAIFindAmbushAgainstPointAsyncTask, PointToGo) == 0x006C);
static_assert(offsetof(UNPCAIFindPathByKeyRouteAsyncTask, FromPoint) == 0x0060);
static_assert(offsetof(UNPCAIFindPathByKeyRouteAsyncTask, ToPoint) == 0x00C0);
static_assert(offsetof(FAIEnemyInfo, FireLocation) == 0x0008);
static_assert(offsetof(FAIEnemyInfo, FireDirection) == 0x0014);
static_assert(offsetof(FAIProtectTreasureBox, BoxInstance) == 0x0000);
static_assert(offsetof(UNPCAIGlobalSharedInfo, CacheActorsInWorld) == 0x0030);
static_assert(offsetof(UNPCAIGlobalSharedInfo, AIEnemyInfos) == 0x0080);
static_assert(offsetof(UNPCAIGlobalSharedInfo, AITrackLOGData) == 0x00D8);
static_assert(offsetof(UNPCAIGlobalSharedInfo, AIAnalysisReport) == 0x0180);
static_assert(offsetof(UNPCAIGlobalSharedInfo, DSPoseUpdateWaitList) == 0x0188);
static_assert(offsetof(UNPCAIGlobalSharedInfo, DSLeanPoseUpdateWaitList) == 0x0198);
static_assert(offsetof(UNPCAIGlobalSharedInfo, DSPoseUpdateCharacter) == 0x01A8);
static_assert(offsetof(UNPCAIGlobalSharedInfo, DSIKUpdateWaitList) == 0x01B0);
static_assert(offsetof(UNPCAIGlobalSharedInfo, DSIKUpdateCharacter) == 0x01C0);
static_assert(offsetof(UNPCAIGlobalSharedInfo, TreasureBoxInfos) == 0x01C8);
static_assert(offsetof(UNPCAIGlobalSharedInfo, CachedInvIDLimitedAIPickUp) == 0x0228);
static_assert(offsetof(UNPCAIGlobalSharedInfo, ZombieReplaceSpecialIDMap) == 0x0278);
static_assert(offsetof(UNPCAIGlobalSharedInfo, LastBetrayPlayer) == 0x02C8);
static_assert(offsetof(UNPCAIGoalTarget, AttentionPoint) == 0x0028);
static_assert(offsetof(UNPCAIGoalTarget, AIOwner) == 0x0030);
static_assert(offsetof(UNPCAIGroupBaseRequest, Requester) == 0x0060);
static_assert(offsetof(UNPCAIGroupBaseRequest, WorldContext) == 0x0068);
static_assert(offsetof(UNPCAIGroupBaseRequest, ExecuterList) == 0x0070);
static_assert(offsetof(UNPCAIGroupBaseRequest, HistoryExecuterList) == 0x0080);
static_assert(offsetof(UNPCAIGroupBaseRequest, PossibleExecuterList) == 0x0090);
static_assert(offsetof(UNPCAIGroupDoorOpenRequest, Door) == 0x00A8);
static_assert(offsetof(UNPCAIGroupGoToPointRequest, PointToGo) == 0x00A8);
static_assert(offsetof(UNPCAIGroupHoldRequest, Direction) == 0x00A8);
static_assert(offsetof(UNPCAIGroupRequestComponent, CurrentRequest) == 0x0138);
static_assert(offsetof(UNPCAIGroupRequestComponent, CompletedRequestTypeList) == 0x0140);
static_assert(offsetof(UNPCAIGroupRequestComponent, GpRequestController) == 0x0150);
static_assert(offsetof(UNPCAIGroupRequestController, GroupRequestsList) == 0x0028);
static_assert(offsetof(UNPCAIGroupSusspressionFireRequest, EnemyTarget) == 0x00B0);
static_assert(offsetof(UNPCAIGroupSusspressionFireRequest, PointTarget) == 0x00B8);
static_assert(offsetof(UNPCAIGroupThrowGrenadeRequest, EnemyTarget) == 0x00A8);
static_assert(offsetof(UNPCAIGroupThrowGrenadeRequest, PointTarget) == 0x00B0);
static_assert(offsetof(UNPCAIGroupWarnPlayerRequest, WarnPlayer) == 0x00A8);
static_assert(offsetof(UNPCAIGroupWarnPlayerRequest, PointToShoot) == 0x00B8);
static_assert(offsetof(FHNavSettings, MetisOptions) == 0x001C);
static_assert(offsetof(FIntraPath, Nodes) == 0x0008);
static_assert(offsetof(FHNavGraph, ParentIndices) == 0x0010);
static_assert(offsetof(FHNavGraph, ChildIndexOffsets) == 0x0040);
static_assert(offsetof(FHNavGraph, ChildIndices) == 0x0050);
static_assert(offsetof(FHNavGraph, PortalEdgeOffsets) == 0x0060);
static_assert(offsetof(FHNavGraph, PortalEdges) == 0x0070);
static_assert(offsetof(FHNavGraph, IntraPathOffsets) == 0x0080);
static_assert(offsetof(FHNavGraph, IntraPaths) == 0x0090);
static_assert(offsetof(FHNavGraph, IntraPathSourceIndexOffsets) == 0x00A0);
static_assert(offsetof(FHNavGraph, IntraPathSourceIndices) == 0x00B0);
static_assert(offsetof(FHNavGraph, IntraPathTargetIndexOffsets) == 0x00C0);
static_assert(offsetof(FHNavGraph, IntraPathCounts) == 0x00E0);
static_assert(offsetof(FHNavGraph, IntraPathPolyRefOffsets) == 0x00F0);
static_assert(offsetof(FHNavGraph, IntraPathPolyRefs) == 0x0100);
static_assert(offsetof(FHNavGraph, IntraPathCosts) == 0x0110);
static_assert(offsetof(FHNavGraph, IntraPathLengths) == 0x0120);
static_assert(offsetof(ANPCAIHNavActor, Settings) == 0x0318);
static_assert(offsetof(ANPCAIHNavActor, Graphs) == 0x0358);
static_assert(offsetof(ANPCAIHNavActor, PortalNodeFlags) == 0x0370);
static_assert(offsetof(ANPCAIHNavActor, SearchedInfo) == 0x0440);
static_assert(offsetof(ANPCAILaunchPad, Root) == 0x0318);
static_assert(offsetof(ANPCAILaunchPad, Launchpad) == 0x0320);
static_assert(offsetof(ANPCAILaunchPad, TriggerVolume) == 0x0328);
static_assert(offsetof(ANPCAILaunchPad, NavLink) == 0x0330);
static_assert(offsetof(ANPCAILaunchPad, Target) == 0x0338);
static_assert(offsetof(ANPCAILaunchPad, LaunchedCharacter) == 0x0348);
static_assert(offsetof(ANPCAITestingActor, CapsuleComponent) == 0x0318);
static_assert(offsetof(ANPCAITestingActor, NavAgentProps) == 0x0320);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, EmptyCellColor) == 0x0358);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, BlockedCellColor) == 0x035C);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, CellTextOffset) == 0x0360);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, Destination) == 0x0370);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, PathPoints) == 0x0378);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, SelfSourceGridIds) == 0x0390);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, SelfGridSize) == 0x03A0);
static_assert(offsetof(ANPCAILocalNavigationTestingActor, SelfCoords) == 0x03AC);
static_assert(offsetof(FAIBackUpCoverPointFinder, AIPosistion) == 0x0000);
static_assert(offsetof(FAIBackUpCoverPointFinder, EnemyPosition) == 0x000C);
static_assert(offsetof(FAIStackGunRecord, MyPosition) == 0x0004);
static_assert(offsetof(FAIStackGunRecord, EnemyPosition) == 0x0010);
static_assert(offsetof(FAIStackGunRecord, GunPoint) == 0x0020);
static_assert(offsetof(FAIStackGunRecord, EeyPoint) == 0x002C);
static_assert(offsetof(FAIStackGunRecord, ShootPoint) == 0x0038);
static_assert(offsetof(FAIRoundPathFindingNodes, LastLocationCalcRoundPathNodes) == 0x0018);
static_assert(offsetof(FNPCAIQueryRoundEnvironmentResult, AILocation) == 0x0000);
static_assert(offsetof(FNPCAIQueryRoundEnvironmentResult, EnemyLocation) == 0x000C);
static_assert(offsetof(FNPCAIQueryRoundEnvironmentResult, LMovePoint) == 0x001C);
static_assert(offsetof(FNPCAIQueryRoundEnvironmentResult, RMovePoint) == 0x002C);
static_assert(offsetof(FNPCAIQueryRoundEnvironmentResult, FMovePoint) == 0x003C);
static_assert(offsetof(FNPCAIQueryRoundEnvironmentResult, BMovePoint) == 0x004C);
static_assert(offsetof(UNPCAIMemorySystemComponent, AIOwner) == 0x0108);
static_assert(offsetof(UNPCAIMemorySystemComponent, GoalEnemy) == 0x0128);
static_assert(offsetof(UNPCAIMemorySystemComponent, LastEnemy) == 0x0130);
static_assert(offsetof(UNPCAIMemorySystemComponent, MemoryServiceNodeName) == 0x0140);
static_assert(offsetof(UNPCAIMemorySystemComponent, GoalTarget) == 0x0150);
static_assert(offsetof(UNPCAIMemorySystemComponent, CheckCoverPointPosition) == 0x0158);
static_assert(offsetof(UNPCAIMemorySystemComponent, BackUpCoverPointFinder) == 0x0168);
static_assert(offsetof(UNPCAIMemorySystemComponent, StackGunRecord) == 0x01A0);
static_assert(offsetof(UNPCAIMemorySystemComponent, AcceptedSceneEvtUniqueIds) == 0x01E8);
static_assert(offsetof(UNPCAIMemorySystemComponent, RoundPathNodes) == 0x01F8);
static_assert(offsetof(UNPCAIMemorySystemComponent, TreasureBoxWantProtect) == 0x0278);
static_assert(offsetof(UNPCAIMemorySystemComponent, Cache_AmbushAgainstStartPoint) == 0x0280);
static_assert(offsetof(UNPCAIMemorySystemComponent, Cache_AmbushAgainstEndPoint) == 0x028C);
static_assert(offsetof(UNPCAIMemorySystemComponent, Cache_AmbushAgainstResultPoint) == 0x0298);
static_assert(offsetof(UNPCAIMemorySystemComponent, Cache_QREResult) == 0x02A4);
static_assert(offsetof(UNPCAIMemorySystemComponent, AIStaticComponent) == 0x0300);
static_assert(offsetof(UNPCAIMemorySystemComponent, AISceneEventsTriggerManager) == 0x0308);
static_assert(offsetof(UNPCAIMemorySystemComponent, CachedPerceptionComponent) == 0x0310);
static_assert(offsetof(UNPCAIMemorySystemComponent, MoverSystemComponent) == 0x0318);
static_assert(offsetof(UNPCAIPropertyProfileBase, PropertyComponentClass) == 0x0028);
static_assert(offsetof(UNPCAIProfileBaseComponent, PropertyProfile) == 0x0028);
static_assert(offsetof(UNPCAIProfileBaseComponent, Owner) == 0x0030);
static_assert(offsetof(UAIModifierArmorProfile, HeadArmor) == 0x0038);
static_assert(offsetof(UAIModifierArmorProfile, BodyArmor) == 0x004C);
static_assert(offsetof(FAILocationMonitor, Target) == 0x0000);
static_assert(offsetof(UNPCAIMoverSystemComponent, AvoidVolumes) == 0x0128);
static_assert(offsetof(UNPCAIMoverSystemComponent, DirCurPoint) == 0x0178);
static_assert(offsetof(UNPCAIMoverSystemComponent, MoveProperty) == 0x01A0);
static_assert(offsetof(UNPCAIMoverSystemComponent, LocationMonitor) == 0x01A8);
static_assert(offsetof(UNPCAIMoverSystemComponent, CaredActorWhenMoving) == 0x01FC);
static_assert(offsetof(UNPCAIMoverSystemComponent, BlendingVelocity) == 0x0208);
static_assert(offsetof(UNPCAIMoverSystemComponent, DangerPoint) == 0x024C);
static_assert(offsetof(UNPCAIMoverSystemComponent, DangerPointDirection) == 0x0258);
static_assert(offsetof(UNPCAIMoverSystemComponent, AIDoorOpenerComponent) == 0x0290);
static_assert(offsetof(UNPCAIMoverSystemComponent, AIPoseComponent) == 0x0298);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, ZoneGroupInfo) == 0x0118);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, AllTargetInfoList) == 0x0128);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, WarningScavPlayerPtr) == 0x0140);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, DefaultTargetScoreCalculateBlueprint) == 0x0158);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, TargetScoreCalculateOverrideBlueprint) == 0x0160);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, CachedHatredList) == 0x0168);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, MemoryComponent) == 0x0178);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, PerceptionComponent) == 0x0180);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, AIStaticComponent) == 0x0188);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, SharedInfo) == 0x0190);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, MindProps) == 0x0198);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, HearProps) == 0x01A0);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, AimingProps) == 0x01A8);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, HealthProps) == 0x01B0);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, GrenadeProps) == 0x01B8);
static_assert(offsetof(UNPCAIMultiTargetSystemComponent, DamageProps) == 0x01C0);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, PerceptionTag1) == 0x01D0);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, PerceptionTag2) == 0x01E0);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, PerceptionTag3) == 0x01F0);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, PerceptionActor) == 0x0208);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, PerceptionStimulus) == 0x0210);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, SounderThrower) == 0x0258);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, LastFireToMePerson) == 0x0280);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, LastShootMePerson) == 0x0290);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, LastShootMePersonLocation) == 0x0298);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, LastShootMeSelfLocation) == 0x02A4);
static_assert(offsetof(UNPCAIMultiTargetSelectorComponent, BeHitCount) == 0x02B8);
static_assert(offsetof(UNPCAINavAreaComponent, OverrideNavBounds) == 0x012C);
static_assert(offsetof(ANPCAINavAreaObstacleActor, NPCAINavAreaComponent) == 0x0320);
static_assert(offsetof(ANPCAINavAreaObstacleActor, IgnoredActors) == 0x0348);
static_assert(offsetof(ANPCAINavAreaObstacleActor, AdjustedActors) == 0x03A8);
static_assert(offsetof(FNavSkeletonBuildSettings, NavQueryExtent) == 0x0000);
static_assert(offsetof(FNavSkeletonPoint, ProtectionDirection) == 0x0028);
static_assert(offsetof(FNavSkeletonPoint, NeighbourIndices) == 0x0040);
static_assert(offsetof(FNavSkeletonPoint, NeighbourDistances) == 0x0050);
static_assert(offsetof(FNavSkeletonPoint, VisibleIndices) == 0x0060);
static_assert(offsetof(FNavSkeletonPoint, ThrowableIndices) == 0x0070);
static_assert(offsetof(FNavSkeletonPoint, MovableIndices) == 0x0080);
static_assert(offsetof(FNavSkeletonPoint, FriendIndices) == 0x0090);
static_assert(offsetof(FNavSkeletonPathPoint, Location) == 0x0000);
static_assert(offsetof(FNavSkeletonPathPoint, CustomNavLinkId) == 0x0020);
static_assert(offsetof(FNavSkeletonPatchedPath, PathPoints) == 0x0000);
static_assert(offsetof(FNavSkeletonData, Points) == 0x0000);
static_assert(offsetof(FNavSkeletonData, UnstableSegmentPatchPaths) == 0x0010);
static_assert(offsetof(FNPCAINavPlatformBuildTemplate, Platform) == 0x0000);
static_assert(offsetof(FNPCAINavPlatformNavMeshBoundsVolumeData, NavMeshBoundsVolume) == 0x0000);
static_assert(offsetof(FNPCAINavPlatformNavMeshBoundsVolumeData, Location) == 0x0008);
static_assert(offsetof(FNPCAINavPlatformNavMeshBoundsVolumeData, Extent) == 0x0014);
static_assert(offsetof(FNPCAINavPlatformNavMeshBoundsVolumeData, NewPlatformLoc) == 0x0020);
static_assert(offsetof(FNPCAINavPlatformRegion, LinkLineIDs) == 0x0000);
static_assert(offsetof(FNPCAINavPlatformBuildData, NavMeshBoundsVolumeData) == 0x0000);
static_assert(offsetof(FNPCAINavPlatformBuildData, PlatformRegions) == 0x0030);
static_assert(offsetof(FNPCAINavPlatformPathInfo, PathPoints) == 0x0000);
static_assert(offsetof(FNPCAINavPlatformPathInfo, PathPointPolyRefs) == 0x0010);
static_assert(offsetof(FNPCAINavPlatformPathInfo, PathCorridor) == 0x0028);
static_assert(offsetof(FNPCAINavPlatformPathInfo, PathCorridorCost) == 0x0038);
static_assert(offsetof(FNPCAINavPlatformLinkLine, LinkLineStart) == 0x0000);
static_assert(offsetof(FNPCAINavPlatformLinkLine, LinkLineEnd) == 0x000C);
static_assert(offsetof(FNPCAINavPlatformLinkLine, LinkLineDir) == 0x0018);
static_assert(offsetof(FNPCAINavPlatformLinkLine, PathInfos) == 0x0028);
static_assert(offsetof(ANPCAINavMeshManager, SkeletonBuildSettings) == 0x04B0);
static_assert(offsetof(ANPCAINavMeshManager, NavSkeletonPoints) == 0x0540);
static_assert(offsetof(ANPCAINavMeshManager, NavSkeletonData) == 0x0550);
static_assert(offsetof(ANPCAINavMeshManager, CachedNavLinkProxies) == 0x05B8);
static_assert(offsetof(ANPCAINavMeshManager, PlatformBuildTemplates) == 0x0618);
static_assert(offsetof(ANPCAINavMeshManager, PlatformBuildDatas) == 0x0668);
static_assert(offsetof(ANPCAINavMeshManager, LinkLines) == 0x06B8);
static_assert(offsetof(ANPCAINavMeshManager, PlatformOctreeOrigin) == 0x0708);
static_assert(offsetof(ANPCAINavMeshTestingActor, ClosestPointOnWall) == 0x03A8);
static_assert(offsetof(ANPCAINavMeshTestingActor, SamplePointCountStat) == 0x03D0);
static_assert(offsetof(ANPCAINavMeshTestingActor, WallStat) == 0x03E0);
static_assert(offsetof(ANPCAINavMeshTestingActor, DistanceStat) == 0x03F0);
static_assert(offsetof(ANPCAINavMeshTestingActor, DivergenceStat) == 0x0400);
static_assert(offsetof(ANPCAINavMeshTestingActor, FilteredDistanceStat) == 0x0410);
static_assert(offsetof(ANPCAINavMeshTestingActor, FilteredDivergenceStat) == 0x0420);
static_assert(offsetof(ANPCAINavMeshTestingActor, BuildSettings) == 0x047C);
static_assert(offsetof(ANPCAINavMeshTestingActor, NavSkeletonPoint) == 0x0510);
static_assert(offsetof(ANPCAINavMeshTestingActor, TargetNavSkeletonPoint) == 0x05B0);
static_assert(offsetof(ANPCAINavMeshTestingActor, FoundPointIDs) == 0x0650);
static_assert(offsetof(ANPCAINavMeshTestingActor, TargetDebugActor) == 0x0668);
static_assert(offsetof(UNPCAINavPlatformComponent, OriginLoc) == 0x0108);
static_assert(offsetof(UNPCAINavPlatformComponent, OriginRot) == 0x0114);
static_assert(offsetof(UNPCAINavPlatformSystem, Platforms) == 0x01B0);
static_assert(offsetof(UNPCAINavPlatformSystem, PlatformComponents) == 0x0280);
static_assert(offsetof(UNPCAINavPlatformSystem, PlatformComponentInfos) == 0x02D0);
static_assert(offsetof(UNPCAINavRuntimeSystem, BurningPolyRefs) == 0x0118);
static_assert(offsetof(UNPCAINavRuntimeSystem, TearGasPolyRefs) == 0x0168);
static_assert(offsetof(UNPCAINavRuntimeSystem, TripMinePolyRefs) == 0x01B8);
static_assert(offsetof(UNPCAINavRuntimeSystem, ClaymorePolyRefs) == 0x0208);
static_assert(offsetof(UNPCAINavRuntimeSystem, ParadropPolyRefs) == 0x0258);
static_assert(offsetof(UNPCAINavRuntimeSystem, ObjectToNavModifierVolume) == 0x02A8);
static_assert(offsetof(UNPCAINavRuntimeSystem, AvoidPolyRefs) == 0x0358);
static_assert(offsetof(UNPCAINavRuntimeSystem, CachedCoverSystem) == 0x03A8);
static_assert(offsetof(UNPCAINavRuntimeSystem, CachedNavMeshManager) == 0x03B0);
static_assert(offsetof(ANPCAINavSkeletonForcePoint, SceneComponent) == 0x0318);
static_assert(offsetof(UFloodSeedCollection, PlayerStarts) == 0x0028);
static_assert(offsetof(UFloodSeedCollection, AISpawnPoints) == 0x0038);
static_assert(offsetof(UFloodSeedCollection, DoorNavLinks) == 0x0048);
static_assert(offsetof(ANavPathPointActor, NodeLocation) == 0x0328);
static_assert(offsetof(ANavPathPointActor, NextPathPointArray) == 0x0338);
static_assert(offsetof(UNavigationQueryFilter_DontVault, VoxelNavAStarFilterParam) == 0x0098);
static_assert(offsetof(UNavigationQueryFilter_Diversity, VoxelNavAStarFilterParam) == 0x0058);
static_assert(offsetof(FNPCAINavPlatformBuildConfig, FirstOffset) == 0x0000);
static_assert(offsetof(FNPCAINavPlatformBuildConfig, AdjustOffset) == 0x000C);
static_assert(offsetof(FNPCAINavPlatformBuildConfig, WrapBoxExtent) == 0x0018);
static_assert(offsetof(FNPCAINavPlatformBuildConfig, LinkLineHitIgnoreClassList) == 0x0038);
static_assert(offsetof(UAINavGenerationSettings, DefaultPlatformBuildConfig) == 0x0048);
static_assert(offsetof(UAINavGenerationSettings, PlatformBuildConfigs) == 0x0090);
static_assert(offsetof(UAINavGenerationSettings, DefaultPlatformBuildData) == 0x00E0);
static_assert(offsetof(UAINavGenerationSettings, NavLinkAdditionAcceptanceRadius) == 0x0128);
static_assert(offsetof(UNPCAIPeekPointAsyncTask, TargetPoint) == 0x0060);
static_assert(offsetof(UNPCAIPeekPointAsyncTask, DangerPoint) == 0x006C);
static_assert(offsetof(UNPCAIPeekPointAsyncTask, PeekPoint) == 0x007C);
static_assert(offsetof(FAIGrassMapInfo, MapName) == 0x0000);
static_assert(offsetof(FAIGrassMapInfo, IgnoreFoliageTags) == 0x0048);
static_assert(offsetof(FAIGrassMapInfo, MeshGrassTags) == 0x0060);
static_assert(offsetof(FAIGrassMapInfo, SaveLevelName) == 0x0070);
static_assert(offsetof(FAIFoliageGrassBlock, Bounds) == 0x0004);
static_assert(offsetof(FAIFoliageGrassBlock, Location) == 0x0020);
static_assert(offsetof(FAILandscapeGrassBlock, Bounds) == 0x0000);
static_assert(offsetof(FAILandscapeGrassBlock, Location) == 0x001C);
static_assert(offsetof(FAIGrassBox, Center) == 0x0000);
static_assert(offsetof(FAIGrassBox, Extent) == 0x000C);
static_assert(offsetof(FAIGrassCylinder, PartsDensities) == 0x0010);
static_assert(offsetof(FAIGrassBlock, AIGrassName) == 0x0028);
static_assert(offsetof(FAIGrassBlock, GrassBoxList) == 0x0038);
static_assert(offsetof(FAIGrassBlock, GrassCylinderList) == 0x0048);
static_assert(offsetof(ANPCAIPerceptionAssistActor, MapInfo) == 0x0318);
static_assert(offsetof(ANPCAIPerceptionAssistActor, FoliageGrassBlockList) == 0x03A0);
static_assert(offsetof(ANPCAIPerceptionAssistActor, LandscapeGrassBlockList) == 0x03B0);
static_assert(offsetof(ANPCAIPerceptionAssistActor, GrassBlockAssets) == 0x03C0);
static_assert(offsetof(UNPCAIPerceptionComponent, FlashLightPos) == 0x01E8);
static_assert(offsetof(UNPCAIPerceptionComponent, AIOwnerPawn) == 0x0210);
static_assert(offsetof(UNPCAIPerceptionComponent, PerceptionAssistActor) == 0x0220);
static_assert(offsetof(UNPCAIPerceptionComponent, PerceptionDynamicActor) == 0x0228);
static_assert(offsetof(UNPCAIPerceptionComponent, OwnerMoverComponent) == 0x0230);
static_assert(offsetof(UNPCAIPerceptionComponent, OwnerMemoryComponent) == 0x0238);
static_assert(offsetof(UNPCAIPerceptionComponent, OwnerMultiTargetComponent) == 0x0240);
static_assert(offsetof(UNPCAIPerceptionComponent, ShootProps) == 0x0248);
static_assert(offsetof(UNPCAIPerceptionComponent, LookProps) == 0x0250);
static_assert(offsetof(UNPCAIPerceptionComponent, AIFireComponent) == 0x0258);
static_assert(offsetof(UNPCAIPerceptionComponent, AIStaticsComponent) == 0x0260);
static_assert(offsetof(UNPCAIPerceptionComponent, AIPoseComponent) == 0x0268);
static_assert(offsetof(UNPCAIPerceptionComponent, IKComponent) == 0x0270);
static_assert(offsetof(UNPCAIPerceptionComponent, AISenseAbilityComponent) == 0x0278);
static_assert(offsetof(UNPCAIPerceptionComponent, AISharedInfo) == 0x0280);
static_assert(offsetof(UNPCAIPerceptionComponent, AITurnComponent) == 0x0288);
static_assert(offsetof(UNPCAIPerceptionComponent, AIGrassElements) == 0x02B0);
static_assert(offsetof(FAIBlockArea, BlockBox) == 0x0004);
static_assert(offsetof(FAIBlockArea, EffectiveBox) == 0x0020);
static_assert(offsetof(FAIBlockArea, Center) == 0x003C);
static_assert(offsetof(FAIBlockArea, OwnerObject) == 0x0068);
static_assert(offsetof(FAISenseFlashBlock, StartPos) == 0x0010);
static_assert(offsetof(FAISenseFlashBlock, Dir) == 0x001C);
static_assert(offsetof(ANPCAIPerceptionDynamicActor, DynamicAreaList) == 0x0318);
static_assert(offsetof(ANPCAIPerceptionDynamicActor, SenseFlashBlockList) == 0x0328);
static_assert(offsetof(UNPCAIProfile, FactionClass) == 0x0028);
static_assert(offsetof(UNPCAIProfile, RoleClass) == 0x0030);
static_assert(offsetof(FAIBodyBulkAimingChoice, BodyParts) == 0x0008);
static_assert(offsetof(UAIPropertyAimingProfile, UA_AIM_TIME_TO_DIST_MULTIPLIER_CURVE) == 0x0048);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SCATTERING_DIST_CURVE) == 0x0050);
static_assert(offsetof(UAIPropertyAimingProfile, UA_FAKE_RANDOM_HIT_RATE_CURVE) == 0x0058);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SHOOT_HIT_RATES) == 0x0060);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SHOOT_HIT_RATES_AI) == 0x0070);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SHOOT_HIT_RATE_DISTANCE_TO_PLAYER_CURVE) == 0x0080);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SHOOT_HIT_RATE_DISTANCE_TO_AI_CURVE) == 0x0088);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SHOOT_HIT_RATE_DISTANCE_NOT_ADS) == 0x0090);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SHOOT_HIT_RATE_IF_BATTLE_DURATION_CURVE) == 0x00C0);
static_assert(offsetof(UAIPropertyAimingProfile, UA_SHOOT_HIT_RATE_IF_WEAPON_ADSMOA_BIAS_CURVE) == 0x00C8);
static_assert(offsetof(UAIPropertyAimingProfile, AIMING_BULK_FOR_PLAYER) == 0x00F8);
static_assert(offsetof(UAIPropertyAimingProfile, AIMING_BULK_FOR_AI) == 0x0108);
static_assert(offsetof(UAIPropertyAimingProfile, EffectiveCountPerBullet) == 0x0150);
static_assert(offsetof(UAIPropertyAimingProfile, DeathSaveChanceCurve) == 0x01A8);
static_assert(offsetof(UAIPropertyAimingProfile, DeathSaveDistanceDecreaseCurve) == 0x01B0);
static_assert(offsetof(UNPCAIPropertyComponent_AIType, Modifier_AIType) == 0x0038);
static_assert(offsetof(UAIPropertyCurveProfile, SightCurveDaytime) == 0x0038);
static_assert(offsetof(UAIPropertyCurveProfile, SightCureOutLight) == 0x0040);
static_assert(offsetof(UAIPropertyGrenadeProfile, UA_THROW_POSITION_OFFSET_STAND) == 0x0038);
static_assert(offsetof(UAIPropertyGrenadeProfile, UA_THROW_POSITION_OFFSET_STAND_LLEAN) == 0x0044);
static_assert(offsetof(UAIPropertyGrenadeProfile, UA_THROW_POSITION_OFFSET_STAND_RLEAN) == 0x0050);
static_assert(offsetof(UAIPropertyGrenadeProfile, UA_THROW_POSITION_OFFSET_CROUCH) == 0x005C);
static_assert(offsetof(UAIPropertyGrenadeProfile, UA_THROW_POSITION_OFFSET_CROUCH_LLEAN) == 0x0068);
static_assert(offsetof(UAIPropertyGrenadeProfile, UA_THROW_POSITION_OFFSET_CROUCH_RLEAN) == 0x0074);
static_assert(offsetof(UAIPropertyGrenadeProfile, UA_THROW_POSITION_OFFSET_PRONE) == 0x0080);
static_assert(offsetof(UAIPropertyGrenadeProfile, MASK_MIN_DURABILITY_PERCENT) == 0x00A4);
static_assert(offsetof(UAIPropertyLookProfile, VISION_NORMAL) == 0x0040);
static_assert(offsetof(UAIPropertyLookProfile, FOG_VISION_CURVE) == 0x0070);
static_assert(offsetof(UAIPropertyLookProfile, FLASH_LIGHT_BURN_LOSS_SIGHT_CURVE) == 0x00D8);
static_assert(offsetof(UAIPropertyLookProfile, LOOK_POSITION_OFFSET_STAND) == 0x00F8);
static_assert(offsetof(UAIPropertyLookProfile, LOOK_POSITION_OFFSET_STAND_LLEAN) == 0x0104);
static_assert(offsetof(UAIPropertyLookProfile, LOOK_POSITION_OFFSET_STAND_RLEAN) == 0x0110);
static_assert(offsetof(UAIPropertyLookProfile, LOOK_POSITION_OFFSET_CROUCH) == 0x011C);
static_assert(offsetof(UAIPropertyLookProfile, LOOK_POSITION_OFFSET_CROUCH_LLEAN) == 0x0128);
static_assert(offsetof(UAIPropertyLookProfile, LOOK_POSITION_OFFSET_CROUCH_RLEAN) == 0x0134);
static_assert(offsetof(UAIPropertyLookProfile, LOOK_POSITION_OFFSET_PRONE) == 0x0140);
static_assert(offsetof(UAIPropertyLookProfile, LEAN_CHECK_BLOCK_WALL_OFFSET) == 0x014C);
static_assert(offsetof(UAIPropertyMindProfile, SCORE_MULTIPLE_FACE_ANGLE_FOR_GOAL_ENEMY) == 0x0058);
static_assert(offsetof(UAIPropertyNavProfile, DiversityNavQueryFilterClass) == 0x0040);
static_assert(offsetof(UAIPropertyNavProfile, MaxValidRelAngle) == 0x0144);
static_assert(offsetof(UAIPropertyNavProfile, PathSimilarAngle) == 0x0154);
static_assert(offsetof(UAIPropertyNavProfile, PathSimilarDist) == 0x0164);
static_assert(offsetof(UAIPropertyNavProfile, LocMonitorExtent) == 0x0170);
static_assert(offsetof(UAIPropertyShootProfile, UA_Curve_ShootAccuracyByRecoil) == 0x0038);
static_assert(offsetof(UAIPropertyShootProfile, UA_SHOOT_POSITION_OFFSET_STAND) == 0x0054);
static_assert(offsetof(UAIPropertyShootProfile, UA_SHOOT_POSITION_OFFSET_STAND_LLEAN) == 0x0060);
static_assert(offsetof(UAIPropertyShootProfile, UA_SHOOT_POSITION_OFFSET_STAND_RLEAN) == 0x006C);
static_assert(offsetof(UAIPropertyShootProfile, UA_SHOOT_POSITION_OFFSET_CROUCH) == 0x0078);
static_assert(offsetof(UAIPropertyShootProfile, UA_SHOOT_POSITION_OFFSET_CROUCH_LLEAN) == 0x0084);
static_assert(offsetof(UAIPropertyShootProfile, UA_SHOOT_POSITION_OFFSET_CROUCH_RLEAN) == 0x0090);
static_assert(offsetof(UAIPropertyShootProfile, UA_SHOOT_POSITION_OFFSET_PRONE) == 0x009C);
static_assert(offsetof(UAIPropertySoundProfile, DataTableOfAI) == 0x0038);
static_assert(offsetof(UAIPropertyWeaponProfile, WeaponTorrBodyBoneName) == 0x0058);
static_assert(offsetof(UAIPropertyWeaponProfile, GunShieldPositionOffset_Stand) == 0x0060);
static_assert(offsetof(UAIPropertyWeaponProfile, GunShieldPositionOffset_Crouch) == 0x006C);
static_assert(offsetof(UAIPropertyWeaponProfile, GunShieldPositionOffset_Prone) == 0x0078);
static_assert(offsetof(UAIPropertyWeaponProfile, GunShieldPositionOffset_LeftLean) == 0x0084);
static_assert(offsetof(UAIPropertyWeaponProfile, GunShieldPositionOffset_RightLean) == 0x0090);
static_assert(offsetof(UNPCAIQueryRoundEnvironmentAsyncTask, EnemyLocation) == 0x0060);
static_assert(offsetof(FNPCAINavAreaBox, ActorTransform) == 0x0000);
static_assert(offsetof(FNPCAINavAreaBox, ReletiveBox) == 0x0030);
static_assert(offsetof(FNPCAIDynamicNavAreaData, ReletiveBoxes) == 0x0000);
static_assert(offsetof(ANPCAIRecastNavMesh, HNavActor) == 0x05E8);
static_assert(offsetof(UNPCAIRoleComponent, PropertyProfiles) == 0x0108);
static_assert(offsetof(FNPCAIComingExplosionEvent, ExplosionLocation) == 0x0004);
static_assert(offsetof(FNPCAIComingExplosionEvent, Instigator) == 0x0018);
static_assert(offsetof(FNPCAIComingExplosionEvent, Tag) == 0x0020);
static_assert(offsetof(UNPCAISense_ComingExplosion, ExplosionEvents) == 0x0080);
static_assert(offsetof(UNPCAISense_Damage, RegisteredEvents) == 0x0080);
static_assert(offsetof(UNPCAISense_Hearing, NoiseMakerMap) == 0x00F0);
static_assert(offsetof(UNPCAISenseConfig_ComingExplosion, Implementation) == 0x0048);
static_assert(offsetof(UNPCAISenseConfig_ComingExplosion, DetectionByAffiliation) == 0x0054);
static_assert(offsetof(UNPCAISenseConfig_Damage, Implementation) == 0x0048);
static_assert(offsetof(UNPCAISenseEvent_ComingExplosion, Event) == 0x0028);
static_assert(offsetof(UNPCAISenseEvent_Damage, Event) == 0x0028);
static_assert(offsetof(FSteepZoneDeleteSettings, NavQueryExtent) == 0x0000);
static_assert(offsetof(FNPCAISteepZoneDeleter, WorldContextObject) == 0x0000);
static_assert(offsetof(FNPCAISteepZoneDeleter, World) == 0x0020);
static_assert(offsetof(FNPCAISteepZoneDeleter, MainNavData) == 0x0030);
static_assert(offsetof(FNPCAISteepZoneDeleter, NavMeshManager) == 0x0038);
static_assert(offsetof(ANPCAISteepZoneTestingActor, Settings) == 0x0358);
static_assert(offsetof(ANPCAISteepZoneTestingActor, Deleter) == 0x0390);
static_assert(offsetof(UNPCAITacticSystemComponent, CoverSystem) == 0x0110);
static_assert(offsetof(UNPCAITacticSystemComponent, TacticSystemActor) == 0x0118);
static_assert(offsetof(UNPCAITargetInfo, Person) == 0x02D0);
static_assert(offsetof(UNPCAITargetInfo, AIPawn) == 0x02D8);
static_assert(offsetof(UNPCAITargetInfo, EnemyGroupSingleInfo) == 0x02E0);
static_assert(offsetof(UNPCAITargetInfo, LookProps) == 0x02E8);
static_assert(offsetof(UNPCAITargetInfo, AimingProps) == 0x02F0);
static_assert(offsetof(FAIGroupAllyDeathInfo, DeathLocation) == 0x0004);
static_assert(offsetof(FAIGroupAllyDeathInfo, KillerLocation) == 0x0010);
static_assert(offsetof(UNPCAITeam, AllyBeHitCount) == 0x0038);
static_assert(offsetof(UNPCAITeam, AllyList) == 0x0048);
static_assert(offsetof(UNPCAITeam, PlayerAllyList) == 0x0058);
static_assert(offsetof(UNPCAITeam, EnemyInfoList) == 0x0068);
static_assert(offsetof(UNPCAITeam, NeutralList) == 0x0078);
static_assert(offsetof(UNPCAITeam, SuspectedPoints) == 0x0088);
static_assert(offsetof(UNPCAITeam, AllyDeathList) == 0x0098);
static_assert(offsetof(UNPCAITeam, GroupRequestController) == 0x00A8);
static_assert(offsetof(UNPCAITeam, FactionComponent) == 0x00B0);
static_assert(offsetof(FAITrackLOG, LOGKValues) == 0x0010);
static_assert(offsetof(UAITrackLOGUnit, AIPawn) == 0x0028);
static_assert(offsetof(UAITrackLOGUnit, AIName) == 0x0030);
static_assert(offsetof(UAITrackLOGUnit, TrackLOGList) == 0x0040);
static_assert(offsetof(UNPCAIZoneGroupInfo, DynamicGroupList) == 0x00D0);
static_assert(offsetof(UNPCAIZoneGroupInfo, WorldPrivate) == 0x00E0);
static_assert(offsetof(UNPCBehaviorLOD, OwnerPawn) == 0x0028);
static_assert(offsetof(UNPCBehaviorLOD, Actions) == 0x0048);
static_assert(offsetof(UNPCBehaviorLODAction, OwnerPawn) == 0x0038);
static_assert(offsetof(UNPCBehaviorLODActionTick, OwnerPawn) == 0x0028);
static_assert(offsetof(UNPCBehaviorLODActionTick, LODSysComp) == 0x0030);
static_assert(offsetof(FComponentInfo, Component) == 0x0000);
static_assert(offsetof(UNPCBehaviorLODSystemComponent, LODs) == 0x0118);
static_assert(offsetof(UNPCBehaviorLODSystemComponent, CurrLODCache) == 0x0130);
static_assert(offsetof(UNPCBehaviorLODSystemComponent, CharacterCachedCompList) == 0x0148);
static_assert(offsetof(UNPCBehaviorLODSystemComponent, ControllerCachedCompList) == 0x0158);
static_assert(offsetof(UNPCBehaviorLODSystemComponent, MemroySystemComponent) == 0x0170);
static_assert(offsetof(UNPCBTDecorator, TagText) == 0x0070);
static_assert(offsetof(UNPCBTDecorator, Message) == 0x0080);
static_assert(offsetof(UNPCBTDecorator_AIPropertyComparison, AIPropertyComponent) == 0x0090);
static_assert(offsetof(UNPCBTDecorator_AIPropertyComparison, ComponentFunctionName) == 0x0098);
static_assert(offsetof(UNPCBTDecorator_AIPropertyComparison, CachedDescription) == 0x00B8);
static_assert(offsetof(UNPCBTDecorator_BBConditionBase, SourceBlackboardKey) == 0x0098);
static_assert(offsetof(UNPCBTDecorator_BBConditionBase, TargetBlackboardKey) == 0x00C0);
static_assert(offsetof(UNPCBTDecorator_BBConditionBool, BlackboardKey) == 0x0090);
static_assert(offsetof(UNPCBTDecorator_BBConditionFloat, SourceBlackboardKey) == 0x0090);
static_assert(offsetof(UNPCBTDecorator_BBConditionFloat, TargetBlackboardKey) == 0x00B8);
static_assert(offsetof(UNPCBTDecorator_BBConditionString, TargetValue) == 0x00F0);
static_assert(offsetof(UNPCBTDecorator_BlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UNPCBTDecorator_BlueprintBase, ObservedKeyNames) == 0x0078);
static_assert(offsetof(UNPCBTDecorator_HasSuspectPoints, Offset) == 0x009C);
static_assert(offsetof(UNPCBTDecorator_SingletonBlueprintBase, AIOwner) == 0x0068);
static_assert(offsetof(UNPCBTDecorator_SingletonBlueprintBase, ObservedKeyNames) == 0x0070);
static_assert(offsetof(UNPCBTService, TagText) == 0x0078);
static_assert(offsetof(UNPCBTService, Message) == 0x0088);
static_assert(offsetof(UNPCBTService_FindRandomPosition, CenterTarget) == 0x0098);
static_assert(offsetof(UNPCBTService_FindRandomPosition, RandomLocation) == 0x00C0);
static_assert(offsetof(UNPCBTService_SingletonBlueprintBase, AIOwner) == 0x0070);
static_assert(offsetof(UNPCBTTaskNode, TagText) == 0x0078);
static_assert(offsetof(UNPCBTTaskNode, Message) == 0x0088);
static_assert(offsetof(UNPCBTTask_CalcNextAttackPosition, FilterClass) == 0x00B0);
static_assert(offsetof(UNPCBTTask_DBNORescue, Tgt_DBNOTarget) == 0x00A8);
static_assert(offsetof(UNPCBTTask_FireEnemy, FireTarget) == 0x00B0);
static_assert(offsetof(UNPCBTTask_FireEnemy, MovementMultiplier) == 0x00D8);
static_assert(offsetof(UNPCBTTask_FireEnemy, AimingMultiplier) == 0x0100);
static_assert(offsetof(UNPCBTTask_FireEnemy, BurstMultiplier) == 0x0128);
static_assert(offsetof(UNPCBTTask_FireEnemy, TargetStateMultiplier) == 0x0150);
static_assert(offsetof(UNPCBTTask_FireEnemyEx, FireTarget) == 0x00B0);
static_assert(offsetof(UNPCBTTask_FollowPathNode, WanderLocationKey) == 0x0098);
static_assert(offsetof(UNPCBTTask_FollowPathNode, WaitTimeKey) == 0x00C0);
static_assert(offsetof(UNPCBTTask_MeleeAttackEnemy, FireTarget) == 0x00B0);
static_assert(offsetof(UNPCBTTask_MeleeAttackEnemy, FireTargetPawn) == 0x00D8);
static_assert(offsetof(UNPCBTTask_MeleeAttackEnemy, FireTargetLoc) == 0x00E0);
static_assert(offsetof(UNPCBTTask_MoveToEx, TagText) == 0x00C0);
static_assert(offsetof(UNPCBTTask_MoveToEx, Message) == 0x00D0);
static_assert(offsetof(UNPCBTTask_PlayAkSound, SoundToPlay) == 0x0098);
static_assert(offsetof(UNPCBTTask_SetBlackboardValue, SourceValue) == 0x0098);
static_assert(offsetof(UNPCBTTask_SetBlackboardValue, TargetValue) == 0x00C0);
static_assert(offsetof(UNPCBTTask_SetFocalPoint, TagText) == 0x00A0);
static_assert(offsetof(UNPCBTTask_SetFocalPoint, Message) == 0x00B0);
static_assert(offsetof(UNPCBTTask_SetTargetHatred, EnemyTargetKey) == 0x00A8);
static_assert(offsetof(FNavSkeletonGraphFindResult, Nodes) == 0x0008);
static_assert(offsetof(FNavSkeletonGraphFindResult, DesiredNodeIndices) == 0x0018);
static_assert(offsetof(FNavSkeletonGraphFindResult, DesiredPointIDs) == 0x0028);
static_assert(offsetof(FNPCAIFindAmbushAgainstPointResult, AgainstPoint) == 0x0000);
static_assert(offsetof(FNPCAIFindPathByKeyRouteResult, Path) == 0x0000);
static_assert(offsetof(FNPCAIPeekPointResult, PeekPoint) == 0x0000);
static_assert(offsetof(FAIRoutePoint, Point) == 0x0000);
static_assert(offsetof(FAIRoutePoint, Content) == 0x0010);
static_assert(offsetof(FAIDataProviderFVectorValue, DefaultValue) == 0x0030);
static_assert(offsetof(FAIDoorSingleSafetyPoint, Location) == 0x0000);
static_assert(offsetof(FAISafetyOpenDoorResp, SGDoor) == 0x0000);
static_assert(offsetof(FAISafetyOpenDoorResp, NavLinkPoint) == 0x0008);
static_assert(offsetof(FAISafetyOpenDoorResp, SafetyWaitPoint) == 0x0014);
static_assert(offsetof(FNPCAIProfileCoverTag, ProfileClass) == 0x0000);
static_assert(offsetof(FNPCAIProfileCoverTag, VarName) == 0x000C);
static_assert(offsetof(FNPCAINavSkeletonBuilder, WorldContextObject) == 0x0000);
static_assert(offsetof(FNPCAINavSkeletonBuilder, World) == 0x00B8);
static_assert(offsetof(FNPCAINavSkeletonBuilder, MainNavData) == 0x00C8);
static_assert(offsetof(FNPCAINavSkeletonBuilder, NavMeshManager) == 0x00D0);
static_assert(offsetof(FNPCAINavSkeletonBuilder, LinkProxies) == 0x00E0);
static_assert(offsetof(FNavSkeletonGraphAStarFilter, WeakOwner) == 0x0000);
static_assert(offsetof(FNavSkeletonPolyline, PointIDs) == 0x0000);
static_assert(offsetof(FNavCostModifier, Instigator) == 0x0004);
static_assert(offsetof(FNavCostModifier, Location) == 0x0014);
static_assert(offsetof(FNavCostModifier, Boundary) == 0x0020);
static_assert(offsetof(FNavCostModifier, AffectedPolyRefs) == 0x0040);
static_assert(offsetof(FNPCAIMoveRequestCustomDataImpl, NavFilterClass) == 0x0008);
static_assert(offsetof(FSoAStorage, Offsets) == 0x0000);
static_assert(offsetof(FPortalEdgeStorage, Items) == 0x0010);
static_assert(offsetof(FUInt64Storage, Items) == 0x0010);
static_assert(offsetof(FInt32Storage, Items) == 0x0010);
static_assert(offsetof(FAICandidateStandPosition, Location) == 0x0004);
static_assert(offsetof(FAINearGrassBounds, Center) == 0x0000);
static_assert(offsetof(FAINearGrassBounds, GrassIndexs) == 0x0010);
static_assert(offsetof(FAIGrassClusterInfo, Bounds) == 0x0000);
static_assert(offsetof(FAIGrassClusterInfo, BoxList) == 0x0020);
static_assert(offsetof(FAIGrassGrayBMP, Colors) == 0x0008);
static_assert(offsetof(FAIGrassGrayBMP, ZeroPoint) == 0x0018);
static_assert(offsetof(FAIGrassGrayBMP, OriginBoundBox) == 0x0034);
static_assert(offsetof(FAIGrassEditorBlock, StaticMesh) == 0x0060);
static_assert(offsetof(FNPCAIPortraitToIDTableRow, PortraitClass) == 0x0008);
static_assert(offsetof(FNPCAISceneEventInfo, TriggerLocation) == 0x0014);
static_assert(offsetof(FNPCAISceneEventInfo, AIIDs) == 0x0020);
static_assert(offsetof(FNPCAISceneEventInfo, AIPathGroupIDs) == 0x0030);
static_assert(offsetof(FNPCAISceneEventTableRow, AIIDs) == 0x0018);
static_assert(offsetof(FNPCAISceneEventTableRow, PathGroupIDs) == 0x0028);
static_assert(offsetof(FNPCAISceneEventTableRow, Comments) == 0x0038);
static_assert(offsetof(FAITrackLOGTemplateForDataTable, Template) == 0x0010);
static_assert(offsetof(FAIPathDebugInfo, PathPoints) == 0x0000);
static_assert(offsetof(FAIDebugLineStruct, StartLocation) == 0x0004);
static_assert(offsetof(FAIDebugLineStruct, EndLocation) == 0x0010);
static_assert(offsetof(FAIDebugLineStruct, Color) == 0x001C);
static_assert(offsetof(FAIDebugDrawSphereInfo, Loc) == 0x0000);
static_assert(offsetof(FAIDebugDrawSphereInfo, LineColor) == 0x0010);
static_assert(offsetof(FAIDebugDrawLineInfo, StartLoc) == 0x0000);
static_assert(offsetof(FAIDebugDrawLineInfo, EndLoc) == 0x000C);
static_assert(offsetof(FAIDebugDrawLineInfo, LineColor) == 0x0018);
static_assert(offsetof(FPMCAISpawnInfo_ForSearchPath, SourcePoint) == 0x0000);
static_assert(offsetof(FCheckCoverPointFinder, AIPawn) == 0x0000);
static_assert(offsetof(FCheckCoverPointFinder, Elements) == 0x0018);
static_assert(offsetof(FAICoverPointInfo, OwnerActor) == 0x0008);
static_assert(offsetof(FAICoverPointInfo, Location) == 0x0010);
static_assert(offsetof(FAICoverPointInfo, ToWallVector) == 0x001C);
static_assert(offsetof(FAICoverPointInfo, FirePosition) == 0x0030);
static_assert(offsetof(FAIIDSegInfo, MainCategory) == 0x0000);
static_assert(offsetof(FAIIDSegInfo, Career) == 0x0010);
static_assert(offsetof(FAIIDSegInfo, Tendency) == 0x0020);
static_assert(offsetof(FAIIDSegInfo, Difficulty) == 0x0030);
static_assert(offsetof(FAIBeenShootRecord, Investigator) == 0x0000);
static_assert(offsetof(FAIBeenShootRecord, ShootLocation) == 0x0014);
static_assert(offsetof(FNPCAIFireSetting, Location) == 0x0000);
static_assert(offsetof(FNPCAIFireSetting, EnemyTarget) == 0x0010);
static_assert(offsetof(FNPCAIFireSetting, LastFireLocation) == 0x002C);
static_assert(offsetof(FNPCAIFireSetting, EnemyInfo) == 0x0038);
static_assert(offsetof(FNPCAIFireOrder, FirePoint) == 0x0004);
