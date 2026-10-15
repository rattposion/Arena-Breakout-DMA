// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

#pragma pack(push, 0x1)

/// Class /Script/MFQuestSystem.MFQuestComponentBase
/// Size: 0x0100 (256 bytes) (0x0000F8 - 0x000100) align 8 MaxSize: 0x0100
class UMFQuestComponentBase : public UActorComponent
{ 
public:
	class AMFQuestBase*                                OwnerQuest;                                                 // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestComponentBase.InitializeQuestComponent
	// void InitializeQuestComponent(class AMFQuestBase* InOwner);                                                              // [0x5c6c0d8] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestComponentBase.DeactivateQuestComponent
	// void DeactivateQuestComponent(EQuestStatus InResult);                                                                    // [0x5c8edb0] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestComponentBase.ActivateQuestComponent
	// void ActivateQuestComponent();                                                                                           // [0x19e39a0] Native|Public        
};

/// Class /Script/MFQuestSystem.MFQuestActionComponentBase
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 8 MaxSize: 0x0100
class UMFQuestActionComponentBase : public UMFQuestComponentBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFBPQuestActionComponentBase
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 8 MaxSize: 0x0100
class UMFBPQuestActionComponentBase : public UMFQuestActionComponentBase
{ 
public:


	/// Functions
	// Function /Script/MFQuestSystem.MFBPQuestActionComponentBase.BP_InitializeQuestComponent
	// void BP_InitializeQuestComponent(class AMFQuestBase* InOwner);                                                           // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFQuestSystem.MFBPQuestActionComponentBase.BP_DeactivateQuestComponent
	// void BP_DeactivateQuestComponent(EQuestStatus InResult);                                                                 // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFQuestSystem.MFBPQuestActionComponentBase.BP_ActivateQuestComponentBP
	// void BP_ActivateQuestComponentBP();                                                                                      // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/MFQuestSystem.MFQuestActivationComponentBase
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 8 MaxSize: 0x0100
class UMFQuestActivationComponentBase : public UMFQuestComponentBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestActivationComp_TriggerVolume
/// Size: 0x0108 (264 bytes) (0x000100 - 0x000108) align 8 MaxSize: 0x0108
class UMFQuestActivationComp_TriggerVolume : public UMFQuestActivationComponentBase
{ 
public:
	class AVolume*                                     TriggerVolume;                                              // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestActivationComp_TriggerVolume.OnTrigger
	// void OnTrigger(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x60c4360] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFQuestSystem.MFQuestNode
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UMFQuestNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x22];                                      // 0x0028   (0x0022)  MISSED
	bool                                               bFailedWhenAndParallelNodeFailed;                           // 0x004A   (0x0001)  
	unsigned char                                      UnknownData01_6[0xA];                                       // 0x004B   (0x000A)  MISSED
	bool                                               bForceCheck;                                                // 0x0055   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2];                                       // 0x0056   (0x0002)  MISSED


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestNode.TickNode
	// EQuestNodeStatus TickNode();                                                                                             // [0x60103d4] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestNode.ShouldFailedWhenAndParallelNodeFailed
	// bool ShouldFailedWhenAndParallelNodeFailed();                                                                            // [0x60c6c08] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.SetupPrevConnections
	// void SetupPrevConnections(TArray<UMFQuestNode*>& InNodeList);                                                            // [0x60c67e0] Native|Public|HasOutParms 
	// Function /Script/MFQuestSystem.MFQuestNode.SetupNextConnection
	// void SetupNextConnection(class UMFQuestNode* InNode);                                                                    // [0x4de6cc4] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestNode.SetForceCheck
	// void SetForceCheck(bool State);                                                                                          // [0x60c69b4] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.IsMyQuest
	// bool IsMyQuest(class AMFQuestBase* InQuest);                                                                             // [0x60c669c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.InitQuestNode
	// void InitQuestNode(class AMFQuestBase* InQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed); // [0x60c6564] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestNode.HasPrevConnection
	// bool HasPrevConnection();                                                                                                // [0x60c654c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.GetQuestNodeType
	// EQuestNodeType GetQuestNodeType();                                                                                       // [0x4de8030] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFQuestSystem.MFQuestNode.GetPrevConnections
	// TArray<UMFQuestNode*> GetPrevConnections();                                                                              // [0x60c6180] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.GetNodeQuestStatus
	// EQuestStatus GetNodeQuestStatus(class UMFQuestNode* GetNode);                                                            // [0x60104f8] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestNode.GetNodeQuestCustomIndex
	// int32_t GetNodeQuestCustomIndex();                                                                                       // [0x60c6144] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.GetNextConnections
	// TArray<UMFQuestNode*> GetNextConnections();                                                                              // [0x60c6020] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.GetForceCheck
	// bool GetForceCheck();                                                                                                    // [0x4de801c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.GetConnectionType
	// EQuestNodeConnectionType GetConnectionType();                                                                            // [0x60c5fe4] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNode.DestroyNode
	// void DestroyNode();                                                                                                      // [0xc0600c] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestNode.DeactivateNode
	// void DeactivateNode(EQuestStatus InResult);                                                                              // [0x60c5de0] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestNode.CheckQuestNode
	// bool CheckQuestNode();                                                                                                   // [0x60c5240] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestNode.CheckPrevConnections
	// void CheckPrevConnections(bool& bFail, bool& bSuccess);                                                                  // [0x60c5138] Native|Public|HasOutParms 
	// Function /Script/MFQuestSystem.MFQuestNode.ActivateNode
	// void ActivateNode();                                                                                                     // [0x51312b8] Native|Public        
};

/// Class /Script/MFQuestSystem.MFQuestAffiliateNode
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMFQuestAffiliateNode : public UMFQuestNode
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestAssembleNode
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UMFQuestAssembleNode : public UMFQuestNode
{ 
public:
	TArray<class UMFQuestAffiliateNode*>               QuestAffiliateNodeArray;                                    // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestAssembleNode.GetAffiliateQuestNodes
	// void GetAffiliateQuestNodes(TArray<UMFQuestAffiliateNode*>& QuestAffiliateNodeArray);                                    // [0x60c3c3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFQuestSystem.MFQuestAssembleNode.AddAffiliateQuestNode
	// void AddAffiliateQuestNode(class UMFQuestAffiliateNode* QuestNode);                                                      // [0x60c38b0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFQuestSystem.QuestState
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FQuestState
{ 
	SDK_UNDEFINED(1,3876) /* EQuestStatus */           __um(CurrQuestStatus);                                      // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,3877) /* EQuestStatus */           __um(OldQuestStatus);                                       // 0x0001   (0x0001)  
};

/// Class /Script/MFQuestSystem.MFQuestBase
/// Size: 0x03F8 (1016 bytes) (0x000318 - 0x0003F8) align 8 MaxSize: 0x03F8
class AMFQuestBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0318   (0x0030)  MISSED
	SDK_UNDEFINED(16,3878) /* FMulticastInlineDelegate */ __um(OnQuestStateChange);                                // 0x0348   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0358   (0x0010)  MISSED
	TArray<class UMFQuestActionComponentBase*>         ActionComponents;                                           // 0x0368   (0x0010)  
	TArray<class UMFQuestActionComponentBase*>         LevelUnrelatedActionComponents;                             // 0x0378   (0x0010)  
	TArray<class UMFQuestActivationComponentBase*>     ActivationComponents;                                       // 0x0388   (0x0010)  
	bool                                               CanRunOnClient;                                             // 0x0398   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0399   (0x0007)  MISSED
	class UMFQuestObjectiveComponentBase*              ObjectiveComponent;                                         // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x03A8   (0x0008)  MISSED
	int32_t                                            CustomIndex;                                                // 0x03B0   (0x0004)  
	int32_t                                            GraphID;                                                    // 0x03B4   (0x0004)  
	FQuestState                                        QuestStatus;                                                // 0x03B8   (0x0002)  
	SDK_UNDEFINED(1,3879) /* EQuestFailedType */       __um(QuestFailedType);                                      // 0x03BA   (0x0001)  
	bool                                               IsAffiliateQuest;                                           // 0x03BB   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03BC   (0x0004)  MISSED
	TArray<int32_t>                                    AssembleCustomIndexList;                                    // 0x03C0   (0x0010)  
	TArray<int32_t>                                    QuestTemplateParams;                                        // 0x03D0   (0x0010)  
	bool                                               bIsTemplate;                                                // 0x03E0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x03E1   (0x0003)  MISSED
	float                                              ActivateTime;                                               // 0x03E4   (0x0004)  
	float                                              FinishTime;                                                 // 0x03E8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x03EC   (0x0004)  MISSED
	class ACharacter*                                  CacheCharacter;                                             // 0x03F0   (0x0008)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestBase.ShowLog
	// void ShowLog(FString LogStr, bool bImportant);                                                                           // [0x60c4bf4] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.SetQuestTemplateParams
	// void SetQuestTemplateParams(TArray<int32_t>& InQuestTemplateParams);                                                     // [0x60c4ab4] Native|Public|HasOutParms 
	// Function /Script/MFQuestSystem.MFQuestBase.SetQuestStatus
	// void SetQuestStatus(EQuestStatus InNewStatus);                                                                           // [0x60c4a18] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.SetQuestObjective
	// void SetQuestObjective(class UMFQuestObjectiveComponentBase* QuestObjective);                                            // [0x60c4980] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.SetQuestFailedType
	// void SetQuestFailedType(EQuestFailedType InFailedType);                                                                  // [0x60c48dc] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.SetMissionStatus
	// void SetMissionStatus(EQuestStatus InNewStatus);                                                                         // [0x60c4840] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.SetMissionCurProgress
	// void SetMissionCurProgress(int32_t CurProgress);                                                                         // [0x60c47a4] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.SetIsTemplateQuest
	// void SetIsTemplateQuest(bool bIsTemplateQuest);                                                                          // [0x5e9d718] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.SetInGraphID
	// void SetInGraphID(int32_t InGraphID);                                                                                    // [0x60c4708] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.SetCustomIndex
	// void SetCustomIndex(int32_t InIndex);                                                                                    // [0x60c466c] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.SetAffiliate
	// void SetAffiliate(bool Value);                                                                                           // [0x60c45cc] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.OnReq_QuestStatus
	// void OnReq_QuestStatus();                                                                                                // [0x2319bb8] Native|Protected     
	// Function /Script/MFQuestSystem.MFQuestBase.OnProgressChange
	// void OnProgressChange(int32_t AddProgress, int32_t CurrpProgress, int32_t MaxProgress);                                  // [0x60c4230] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.OnObjectiveStateChanged
	// void OnObjectiveStateChanged(EQuestStatus NewState, EQuestStatus OldState);                                              // [0x60c4144] Native|Protected     
	// Function /Script/MFQuestSystem.MFQuestBase.IsTemplateQuest
	// bool IsTemplateQuest();                                                                                                  // [0x5e9b8f4] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.IsAffiliate
	// bool IsAffiliate();                                                                                                      // [0x60c412c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.IsActive
	// bool IsActive();                                                                                                         // [0x60c4110] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.GetQuestTemplateParamByIndex
	// int32_t GetQuestTemplateParamByIndex(int32_t InParamIndex);                                                              // [0x60c4068] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetQuestStatus
	// EQuestStatus GetQuestStatus();                                                                                           // [0x60c4050] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetQuestState
	// FQuestState GetQuestState();                                                                                             // [0x60c4034] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetQuestObjectiveType
	// EQuestObjectiveType GetQuestObjectiveType();                                                                             // [0x60c3fd0] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.GetQuestObjective
	// class UMFQuestObjectiveComponentBase* GetQuestObjective();                                                               // [0x5ea2464] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetQuestInstigator
	// class UMFQuestInstigatorComponentBase* GetQuestInstigator();                                                             // [0x60c3fa8] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.GetQuestFailedType
	// EQuestFailedType GetQuestFailedType();                                                                                   // [0x60c3f90] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestBase.GetOldQuestStatus
	// int32_t GetOldQuestStatus();                                                                                             // [0x60c3f78] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetInstigatorCharacter
	// class ACharacter* GetInstigatorCharacter();                                                                              // [0x60c3ef4] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetInGraphID
	// int32_t GetInGraphID();                                                                                                  // [0x60c3edc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetFinishTime
	// float GetFinishTime();                                                                                                   // [0x60c3ec4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetCustomIndex
	// int32_t GetCustomIndex();                                                                                                // [0x5e95158] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetCurrQuestStatus
	// int32_t GetCurrQuestStatus();                                                                                            // [0x60c3eac] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetAssembleCustomIndexList
	// void GetAssembleCustomIndexList(TArray<int32_t>& OutList);                                                               // [0x60c3d70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetAffiliateMissionList
	// void GetAffiliateMissionList(TArray<FString>& OutList);                                                                  // [0x60c3b90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.GetActivateTime
	// float GetActivateTime();                                                                                                 // [0x5eaa6ec] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestBase.DeactivateQuest
	// void DeactivateQuest(EQuestStatus InResult);                                                                             // [0x60c3af4] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.ClientShowLog
	// void ClientShowLog(bool bImportant, FString LogStr);                                                                     // [0x60c39e8] Net|Native|Event|Public|NetClient 
	// Function /Script/MFQuestSystem.MFQuestBase.AssignQuestInstigator
	// void AssignQuestInstigator(class UMFQuestInstigatorComponentBase* InInstigator);                                         // [0x5d88384] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.AddAssembleCustomIndex
	// void AddAssembleCustomIndex(int32_t InCustomIndex);                                                                      // [0x60c394c] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestBase.ActivateQuest
	// void ActivateQuest();                                                                                                    // [0x231bb90] Native|Public        
};

/// Class /Script/MFQuestSystem.MFQuestCheckNode
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UMFQuestCheckNode : public UMFQuestNode
{ 
public:
	bool                                               bSuccessWhenParallelNodeSuccess;                            // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestCheckNode.InitCheckQuestNode
	// void InitCheckQuestNode(bool InSuccessWhenParallelNodeSuccess);                                                          // [0x5131218] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestCheckNode.GetSuccessWhenParallelNodeSuccess
	// bool GetSuccessWhenParallelNodeSuccess();                                                                                // [0x4de0b88] Final|Native|Public  
};

/// Class /Script/MFQuestSystem.CheckActorParamBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCheckActorParamBase : public UObject
{ 
public:
};

/// Class /Script/MFQuestSystem.CheckActorClass
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UCheckActorClass : public UCheckActorParamBase
{ 
public:
	TSoftObjectPtr<class UClass*>                      ParentClass;                                                // 0x0028   (0x0028)  
};

/// Class /Script/MFQuestSystem.CheckActorLocation
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UCheckActorLocation : public UCheckActorParamBase
{ 
public:
	FVector                                            Center;                                                     // 0x0028   (0x000C)  
	float                                              Radius;                                                     // 0x0034   (0x0004)  
};

/// Class /Script/MFQuestSystem.MFQuestConditionComponentBase
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UMFQuestConditionComponentBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,3880) /* FMulticastInlineDelegate */ __um(OnGenerateDebugInfo);                               // 0x0028   (0x0010)  
	class AMFQuestBase*                                OwnerQuest;                                                 // 0x0038   (0x0008)  
	bool                                               bAdvanceEdit;                                               // 0x0040   (0x0001)  
	SDK_UNDEFINED(1,3881) /* EQuestConditionType */    __um(ConditionType);                                        // 0x0041   (0x0001)  
	SDK_UNDEFINED(1,3882) /* EQuestConditionCheckType */ __um(CheckType);                                          // 0x0042   (0x0001)  
	bool                                               bExpectConditionResult;                                     // 0x0043   (0x0001)  
	float                                              CustomTickInterval;                                         // 0x0044   (0x0004)  
	FTimerHandle                                       CustomTickTimerHandle;                                      // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestConditionComponentBase.CustomTick
	// void CustomTick();                                                                                                       // [0x4de6e58] Native|Protected     
};

/// Class /Script/MFQuestSystem.MFQuestConditionComp_CheckActorProperty
/// Size: 0x0068 (104 bytes) (0x000050 - 0x000068) align 8 MaxSize: 0x0068
class UMFQuestConditionComp_CheckActorProperty : public UMFQuestConditionComponentBase
{ 
public:
	class UClass*                                      CheckTargetContextSource;                                   // 0x0050   (0x0008)  
	TArray<class UCheckActorParamBase*>                CheckParams;                                                // 0x0058   (0x0010)  
};

/// Class /Script/MFQuestSystem.CheckBlackboardBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCheckBlackboardBase : public UObject
{ 
public:
	class UClass*                                      TargetActor;                                                // 0x0028   (0x0008)  
};

/// Class /Script/MFQuestSystem.CheckIntMapValue
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCheckIntMapValue : public UCheckBlackboardBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0030   (0x0008)  
	SDK_UNDEFINED(1,3883) /* ENumberCompareType */     __um(CompareType);                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            Value1;                                                     // 0x003C   (0x0004)  
	int32_t                                            Value2;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.CheckIntArrayMapNum
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCheckIntArrayMapNum : public UCheckBlackboardBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0030   (0x0008)  
	SDK_UNDEFINED(1,3884) /* ENumberCompareType */     __um(CompareType);                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            Value1;                                                     // 0x003C   (0x0004)  
	int32_t                                            Value2;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.CheckObjectArrayMapNum
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCheckObjectArrayMapNum : public UCheckBlackboardBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0030   (0x0008)  
	SDK_UNDEFINED(1,3885) /* ENumberCompareType */     __um(CompareType);                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            Value1;                                                     // 0x003C   (0x0004)  
	int32_t                                            Value2;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.MFQuestConditionComp_CheckBlackboard
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UMFQuestConditionComp_CheckBlackboard : public UMFQuestConditionComponentBase
{ 
public:
	TArray<class UCheckBlackboardBase*>                CheckParams;                                                // 0x0050   (0x0010)  
};

/// Class /Script/MFQuestSystem.MFQuestConditionComp_Dist
/// Size: 0x0068 (104 bytes) (0x000050 - 0x000068) align 8 MaxSize: 0x0068
class UMFQuestConditionComp_Dist : public UMFQuestConditionComponentBase
{ 
public:
	class UClass*                                      SourceActorContextConfig;                                   // 0x0050   (0x0008)  
	class UClass*                                      DestActorContextConfig;                                     // 0x0058   (0x0008)  
	float                                              MinDist;                                                    // 0x0060   (0x0004)  
	float                                              MaxDist;                                                    // 0x0064   (0x0004)  
};

/// Class /Script/MFQuestSystem.MFQuestConditionComp_RandomProbability
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UMFQuestConditionComp_RandomProbability : public UMFQuestConditionComponentBase
{ 
public:
	float                                              ProbabilityPercent;                                         // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.MFQuestContextBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextBase : public UObject
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContext_Actor
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFQuestContext_Actor : public UMFQuestContextBase
{ 
public:
	class AActor*                                      ContextActor;                                               // 0x0028   (0x0008)  
};

/// Class /Script/MFQuestSystem.MFQuestContext_GameplayTag
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFQuestContext_GameplayTag : public UMFQuestContextBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MFQuestSystem.MFQuestContext_Number
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMFQuestContext_Number : public UMFQuestContextBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/MFQuestSystem.MFQuestContext_Object
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFQuestContext_Object : public UMFQuestContextBase
{ 
public:
	class UObject*                                     Object;                                                     // 0x0028   (0x0008)  
};

/// Class /Script/MFQuestSystem.MFQuestContextSourceBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSourceBase : public UObject
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContextSource_BlackboardKey
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSource_BlackboardKey : public UMFQuestContextSourceBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContextSource_BlackboardTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSource_BlackboardTarget : public UMFQuestContextSourceBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContextSource_CurrentValue
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSource_CurrentValue : public UMFQuestContextSourceBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContextSource_ObjectiveInstigator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSource_ObjectiveInstigator : public UMFQuestContextSourceBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContextSource_ObjectiveTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSource_ObjectiveTarget : public UMFQuestContextSourceBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContextSource_PreviousValue
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSource_PreviousValue : public UMFQuestContextSourceBase
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestContextSource_QuestDistributer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestContextSource_QuestDistributer : public UMFQuestContextSourceBase
{ 
public:
};

/// Class /Script/MFQuestSystem.QuestConditionEffectContainer
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UQuestConditionEffectContainer : public UObject
{ 
public:
	class AMFQuestDistributerBase*                     QuestDistributer;                                           // 0x0028   (0x0008)  
	class UMFQuestPrimaryConditionBase*                PrimaryCondition;                                           // 0x0030   (0x0008)  
	TArray<class UMFQuestConditionComponentBase*>      SubConditions;                                              // 0x0038   (0x0010)  
	TArray<class UMFQuestEffectBase*>                  QuestEffects;                                               // 0x0048   (0x0010)  
	TArray<class UMFQuestEffectBase*>                  FailQuestEffects;                                           // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/MFQuestSystem.QuestConditionEffectContainer.OnTriggerPrimaryCondition
	// void OnTriggerPrimaryCondition(TArray<FQuestContextPair>& QuestContextList);                                             // [0x60c67e0] Native|Public|HasOutParms 
};

/// Struct /Script/MFQuestSystem.NestedIntArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNestedIntArray
{ 
	TArray<int32_t>                                    IntArray;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/MFQuestSystem.NestedObjectArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNestedObjectArray
{ 
	TArray<class UObject*>                             ObjectArray;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/MFQuestSystem.QuestDistributerBlackboard
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align 8 MaxSize: 0x0140
struct FQuestDistributerBlackboard
{ 
	TMap<FGameplayTag, int32_t>                        IntMap;                                                     // 0x0000   (0x0050)  
	TMap<FGameplayTag, FNestedIntArray>                IntArrayMap;                                                // 0x0050   (0x0050)  
	TMap<FGameplayTag, FNestedObjectArray>             ObjectArrayMap;                                             // 0x00A0   (0x0050)  
	TMap<FGameplayTag, class UObject*>                 ObjectMap;                                                  // 0x00F0   (0x0050)  
};

/// Class /Script/MFQuestSystem.MFQuestDistributerBase
/// Size: 0x03B8 (952 bytes) (0x000318 - 0x0003B8) align 8 MaxSize: 0x03B8
class AMFQuestDistributerBase : public AActor
{ 
public:
	SDK_UNDEFINED(1,3886) /* EQuestType */             __um(QuestType);                                            // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0319   (0x0007)  MISSED
	TArray<class UQuestConditionEffectContainer*>      QuestConditionEffectContainers;                             // 0x0320   (0x0010)  
	TMap<class AActor*, FQuestDistributerBlackboard>   ActorBlackboards;                                           // 0x0330   (0x0050)  
	SDK_UNDEFINED(16,3887) /* FMulticastInlineDelegate */ __um(OnBlackboardIntMapChanged);                         // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,3888) /* FMulticastInlineDelegate */ __um(OnBlackboardIntArrayMapChanged);                    // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,3889) /* FMulticastInlineDelegate */ __um(OnBlackboardObjectArrayMapChanged);                 // 0x03A0   (0x0010)  
	class ACharacter*                                  LastTriggerCharacter;                                       // 0x03B0   (0x0008)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestDistributerBase.ShowLog
	// void ShowLog(FString LogStr, bool bImportant);                                                                           // [0x601f2fc] Final|Native|Public  
};

/// Class /Script/MFQuestSystem.BlackboardOperatorBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UBlackboardOperatorBase : public UObject
{ 
public:
	class UClass*                                      TargetActor;                                                // 0x0028   (0x0008)  
	bool                                               BTeamInfo;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MFQuestSystem.IntMapAddValue
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UIntMapAddValue : public UBlackboardOperatorBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0038   (0x0008)  
	class UClass*                                      ModifyValueSource;                                          // 0x0040   (0x0008)  
	int32_t                                            ModifyValue;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.IntMapSetValue
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UIntMapSetValue : public UBlackboardOperatorBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0038   (0x0008)  
	class UClass*                                      ValueSource;                                                // 0x0040   (0x0008)  
	int32_t                                            Value;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.IntArrayMapAddValue
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UIntArrayMapAddValue : public UBlackboardOperatorBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0038   (0x0008)  
	class UClass*                                      ModifyValueSource;                                          // 0x0040   (0x0008)  
	int32_t                                            ModifyValue;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.IntArrayMapRemoveValue
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UIntArrayMapRemoveValue : public UBlackboardOperatorBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0038   (0x0008)  
	int32_t                                            RemoveIndex;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.ObjectArrayMapAddUnique
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UObjectArrayMapAddUnique : public UBlackboardOperatorBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0038   (0x0008)  
	class UClass*                                      TargetContextSource;                                        // 0x0040   (0x0008)  
};

/// Class /Script/MFQuestSystem.ObjectArrayMapEmpty
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UObjectArrayMapEmpty : public UBlackboardOperatorBase
{ 
public:
	FGameplayTag                                       Key;                                                        // 0x0038   (0x0008)  
};

/// Class /Script/MFQuestSystem.MFQuestEffectBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMFQuestEffectBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,3890) /* FMulticastInlineDelegate */ __um(OnGenerateDebugInfo);                               // 0x0028   (0x0010)  
};

/// Class /Script/MFQuestSystem.MFQuestEffect_ModifyBlackboard
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UMFQuestEffect_ModifyBlackboard : public UMFQuestEffectBase
{ 
public:
	TArray<class UBlackboardOperatorBase*>             BlackboardOperators;                                        // 0x0038   (0x0010)  
};

/// Class /Script/MFQuestSystem.MFQuestEndNode
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UMFQuestEndNode : public UMFQuestNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestEndNode.GetFinalNodeQuestStatus
	// EQuestStatus GetFinalNodeQuestStatus();                                                                                  // [0x51305bc] Native|Public        
};

/// Class /Script/MFQuestSystem.MFQuestEventManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestEventManager : public UObject
{ 
public:
};

/// Class /Script/MFQuestSystem.MFQuestInstigatorComponentBase
/// Size: 0x0108 (264 bytes) (0x000100 - 0x000108) align 8 MaxSize: 0x0108
class UMFQuestInstigatorComponentBase : public UMFQuestComponentBase
{ 
public:
	bool                                               bLogToClient;                                               // 0x0100   (0x0001)  
	SDK_UNDEFINED(1,3891) /* EQuestInstigatorType */   __um(InstigatorType);                                       // 0x0101   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0102   (0x0006)  MISSED


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestInstigatorComponentBase.IsObjectiveInstigatorSupported
	// bool IsObjectiveInstigatorSupported(class AActor* InQuestInstigator);                                                    // [0x5c5aefc] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/MFQuestSystem.MFQuestInstigatorComponentBase.GetQuestInstigatorType
	// EQuestInstigatorType GetQuestInstigatorType();                                                                           // [0x21793e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFQuestSystem.MFQuestInstigatorComponentBase.ClientSetQuestDistInfos
	// void ClientSetQuestDistInfos(TArray<FString> Infos);                                                                     // [0x60c5268] Net|Native|Event|Public|NetClient 
};

/// Class /Script/MFQuestSystem.MFQuestManagerActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AMFQuestManagerActor : public AActor
{ 
public:
	TArray<class UMFQuestNodeGraph*>                   QuestGraphList;                                             // 0x0318   (0x0010)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestManagerActor.GetQuestNodeGraphFromPC
	// void GetQuestNodeGraphFromPC(class APlayerController* InOwnerPC, TArray<UMFQuestNodeGraph*>& InGraphList);               // [0x60c6438] Native|Public|HasOutParms 
	// Function /Script/MFQuestSystem.MFQuestManagerActor.CreateNewQuestGraph
	// class UMFQuestNodeGraph* CreateNewQuestGraph(class AController* InOwnerController);                                      // [0x60c5acc] Native|Public        
};

/// Class /Script/MFQuestSystem.MFQuestManagerComponent
/// Size: 0x0108 (264 bytes) (0x0000F8 - 0x000108) align 8 MaxSize: 0x0108
class UMFQuestManagerComponent : public UActorComponent
{ 
public:
	class UClass*                                      QuestManagerActorClass;                                     // 0x00F8   (0x0008)  
	class AMFQuestManagerActor*                        QuestManagerActor;                                          // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestManagerComponent.GetQuestManagerActor
	// class AMFQuestManagerActor* GetQuestManagerActor();                                                                      // [0x60c634c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestManagerComponent.CreateQuestManagerActor
	// class AMFQuestManagerActor* CreateQuestManagerActor();                                                                   // [0x60c5dbc] Final|Native|Private 
};

/// Class /Script/MFQuestSystem.MFQuestNodeGraph
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMFQuestNodeGraph : public UObject
{ 
public:
	SDK_UNDEFINED(16,3892) /* FMulticastInlineDelegate */ __um(OnGraphStatusChange);                               // 0x0028   (0x0010)  
	bool                                               bOwnedQuestStateChanged;                                    // 0x0038   (0x0001)  
	bool                                               bCompleteInOneBattle;                                       // 0x0039   (0x0001)  
	bool                                               bIsActTask;                                                 // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED
	TArray<class UMFQuestNode*>                        NodeList;                                                   // 0x0040   (0x0010)  
	TArray<class UMFQuestAffiliateNode*>               QuestAffiliateNodeList;                                     // 0x0050   (0x0010)  
	TArray<class AMFQuestBase*>                        QuestList;                                                  // 0x0060   (0x0010)  
	class UMFQuestStartNode*                           StartNode;                                                  // 0x0070   (0x0008)  
	class UMFQuestEndNode*                             EndNode;                                                    // 0x0078   (0x0008)  
	int32_t                                            CustomIndex;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	class AController*                                 OwnerController;                                            // 0x0088   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0090   (0x0008)  MISSED
	TArray<class UMFQuestNode*>                        CheckNodeArray;                                             // 0x0098   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.TickQuestNodeGraph
	// void TickQuestNodeGraph();                                                                                               // [0x60c6c1c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.SetOwnerController
	// void SetOwnerController(class AController* InPC);                                                                        // [0x60c6b70] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.SetIsCompleteInOneBattle
	// void SetIsCompleteInOneBattle(bool In);                                                                                  // [0x60c6adc] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.SetIsActTask
	// void SetIsActTask(bool In);                                                                                              // [0x60c6a48] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.SetCustomIndex
	// void SetCustomIndex(int32_t InIndex);                                                                                    // [0x60c6920] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.NodeGraphCheck
	// void NodeGraphCheck(class AMFQuestBase* QuestBase);                                                                      // [0x60c6744] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetQuestNodeFromNodeQuest
	// class UMFQuestNode* GetQuestNodeFromNodeQuest(class AMFQuestBase* InQuest);                                              // [0x60c6390] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetQuestFromCustomIndex
	// class AMFQuestBase* GetQuestFromCustomIndex(int32_t InIndex);                                                            // [0x60c62a4] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetOwnerController
	// class AController* GetOwnerController();                                                                                 // [0x60c6168] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetIsCompleteInOneBattle
	// bool GetIsCompleteInOneBattle();                                                                                         // [0x60c600c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetIsActTask
	// bool GetIsActTask();                                                                                                     // [0x60c5ff8] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetEndNode
	// class UMFQuestEndNode* GetEndNode();                                                                                     // [0x50ca5a4] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetCustomIndex
	// int32_t GetCustomIndex();                                                                                                // [0x6069710] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.GetAllQuest
	// void GetAllQuest(TArray<AMFQuestBase*>& InQuestList);                                                                    // [0x60c5ea8] Final|Native|Public|HasOutParms 
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.DestroyGraph
	// void DestroyGraph();                                                                                                     // [0x60c5e94] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.DeactivateQuestNodeGraph
	// void DeactivateQuestNodeGraph();                                                                                         // [0x60c5e7c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.CreateNewQuestNode
	// void CreateNewQuestNode(class AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed); // [0x60c5b7c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.CreateNewQuestCheckNode
	// void CreateNewQuestCheckNode(class AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed, bool InSuccessWhenParallelNodeSuccess); // [0x60c582c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.CreateNewQuestAssembleNode
	// void CreateNewQuestAssembleNode(class AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed); // [0x60c55ec] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.CreateNewQuestAffiliateNode
	// void CreateNewQuestAffiliateNode(class AMFQuestBase* InNewQuest, EQuestNodeConnectionType InType, bool InFailedWhenAndParallelNodeFailed); // [0x60c53ac] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.CompleteQuestNodeGraph
	// void CompleteQuestNodeGraph(EQuestNodeConnectionType InType);                                                            // [0x60c5314] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.BuildQuestNodeRelation
	// void BuildQuestNodeRelation(class AMFQuestBase* TargetNodeQuest, TArray<AMFQuestBase*> PrevNodeQuestList);               // [0x60c4f80] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.BeginGraph
	// void BeginGraph();                                                                                                       // [0x60c4f6c] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestNodeGraph.ActivateQuestNodeGraph
	// void ActivateQuestNodeGraph();                                                                                           // [0x60c4f54] Final|Native|Public  
};

/// Struct /Script/MFQuestSystem.QuestContextPairConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FQuestContextPairConfig
{ 
	class UClass*                                      ContextSourceClass;                                         // 0x0000   (0x0008)  
	class UClass*                                      ContextClass;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/MFQuestSystem.QuestContextPair
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FQuestContextPair
{ 
	class UMFQuestContextSourceBase*                   ContextSource;                                              // 0x0000   (0x0008)  
	class UMFQuestContextBase*                         Context;                                                    // 0x0008   (0x0008)  
};

/// Class /Script/MFQuestSystem.MFQuestObjectiveComponentBase
/// Size: 0x0168 (360 bytes) (0x000100 - 0x000168) align 8 MaxSize: 0x0168
class UMFQuestObjectiveComponentBase : public UMFQuestComponentBase
{ 
public:
	SDK_UNDEFINED(16,3893) /* FMulticastInlineDelegate */ __um(OnObjectiveStateChanged);                           // 0x0100   (0x0010)  
	TArray<FQuestContextPairConfig>                    QuestContextPairConfigList;                                 // 0x0110   (0x0010)  
	SDK_UNDEFINED(1,3894) /* EQuestObjectiveType */    __um(QuestObjectiveType);                                   // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	TArray<class UMFQuestConditionComponentBase*>      AndObjectiveConditionList;                                  // 0x0128   (0x0010)  
	TArray<class UMFQuestConditionComponentBase*>      OrObjectiveConditionList;                                   // 0x0138   (0x0010)  
	class UMFQuestProgressComponentBase*               QuestProgress;                                              // 0x0148   (0x0008)  
	bool                                               FailWhenAchieved;                                           // 0x0150   (0x0001)  
	SDK_UNDEFINED(1,3895) /* EQuestStatus */           __um(CurrQuestCompStatus);                                  // 0x0151   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0152   (0x0006)  MISSED
	TArray<FQuestContextPair>                          QuestContextList;                                           // 0x0158   (0x0010)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.SetQuestCompStatus
	// void SetQuestCompStatus(EQuestStatus InNewStatus);                                                                       // [0x60c84b8] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.SetObjectiveProgress
	// void SetObjectiveProgress(int32_t MaxCount, int32_t CurrCount);                                                          // [0x60c83cc] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.SetBringInObjectiveProgress
	// void SetBringInObjectiveProgress(int32_t MaxCount, int32_t CurrCount);                                                   // [0x60c82e0] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.OnQuestProgressedChanged
	// void OnQuestProgressedChanged(int32_t ProgressToAdd, int32_t CurrentProgress);                                           // [0x60c7f64] Final|Native|Protected 
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.IsQuestCompActive
	// bool IsQuestCompActive();                                                                                                // [0x5cd2124] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.IsFailWhenAchieved
	// bool IsFailWhenAchieved();                                                                                               // [0x5d90754] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetQuestObjectiveType
	// EQuestObjectiveType GetQuestObjectiveType();                                                                             // [0x50ca920] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetQuestCompStatus
	// EQuestStatus GetQuestCompStatus();                                                                                       // [0x5cd20fc] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetOrConditionList
	// TArray<UMFQuestConditionComponentBase*> GetOrConditionList();                                                            // [0x60c7874] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetObjectiveProgress
	// void GetObjectiveProgress(int32_t& Out_MaxCount, int32_t& Out_CurrCount);                                                // [0x60c7770] Native|Public|HasOutParms 
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetMaxObjectiveProgress
	// int32_t GetMaxObjectiveProgress();                                                                                       // [0x5ce2b58] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetBringInObjectiveProgress
	// int32_t GetBringInObjectiveProgress();                                                                                   // [0x60c75c8] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetAndConditionList
	// TArray<UMFQuestConditionComponentBase*> GetAndConditionList();                                                           // [0x60c7440] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.GetActivationTime
	// float GetActivationTime();                                                                                               // [0x29adcc8] Final|Native|Public  
	// Function /Script/MFQuestSystem.MFQuestObjectiveComponentBase.ClearCurrQuestProgress
	// void ClearCurrQuestProgress();                                                                                           // [0x60c7344] Final|Native|Public  
};

/// Class /Script/MFQuestSystem.MFQuestPrimaryConditionBase
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMFQuestPrimaryConditionBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,3896) /* FMulticastInlineDelegate */ __um(OnTriggerPrimaryCondition);                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3897) /* FMulticastInlineDelegate */ __um(OnGenerateDebugInfo);                               // 0x0038   (0x0010)  
	TArray<FQuestContextPairConfig>                    QuestContextPairConfigList;                                 // 0x0048   (0x0010)  
	class UQuestConditionEffectContainer*              ConditionEffectContainer;                                   // 0x0058   (0x0008)  
	class AMFQuestDistributerBase*                     QuestDistributer;                                           // 0x0060   (0x0008)  
	TArray<FQuestContextPair>                          QuestContextList;                                           // 0x0068   (0x0010)  


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestPrimaryConditionBase.RemoveEventListener
	// void RemoveEventListener();                                                                                              // [0x53745a8] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestPrimaryConditionBase.Initialize
	// void Initialize(class UQuestConditionEffectContainer* InConditionEffectContainer, class AMFQuestDistributerBase* InQuestDistributer); // [0x60c7b2c] Native|Public        
	// Function /Script/MFQuestSystem.MFQuestPrimaryConditionBase.AddEventListener
	// void AddEventListener();                                                                                                 // [0x1a9df80] Native|Public        
};

/// Class /Script/MFQuestSystem.MFQuestPrimaryCondition_IntMapChanged
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMFQuestPrimaryCondition_IntMapChanged : public UMFQuestPrimaryConditionBase
{ 
public:


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestPrimaryCondition_IntMapChanged.OnBlackboardIntMapChanged
	// void OnBlackboardIntMapChanged(class AActor* ObjectiveInstigator, class AActor* TargetActor, FGameplayTag& Key, int32_t CurrentValue, int32_t PreviousValue); // [0x60c7c18] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFQuestSystem.MFQuestPrimaryCondition_ObjArrMapChanged
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMFQuestPrimaryCondition_ObjArrMapChanged : public UMFQuestPrimaryConditionBase
{ 
public:


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestPrimaryCondition_ObjArrMapChanged.OnBlackboardObjectArrayMapChanged
	// void OnBlackboardObjectArrayMapChanged(class AActor* TargetActor, FGameplayTag& Key, TArray<UObject*>& ObjectArray);     // [0x60c7e08] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFQuestSystem.MFQuestProgressComponentBase
/// Size: 0x0118 (280 bytes) (0x000100 - 0x000118) align 8 MaxSize: 0x0118
class UMFQuestProgressComponentBase : public UMFQuestComponentBase
{ 
public:
	int32_t                                            BringInProgress;                                            // 0x0100   (0x0004)  
	int32_t                                            CurrProgress;                                               // 0x0104   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x0108   (0x0004)  
	int32_t                                            OldProgress;                                                // 0x010C   (0x0004)  
	bool                                               bClearWhenFail;                                             // 0x0110   (0x0001)  
	bool                                               bCanBringInProgress;                                        // 0x0111   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0112   (0x0006)  MISSED


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestProgressComponentBase.OnReq_MaxProgress
	// void OnReq_MaxProgress();                                                                                                // [0x5c5ee58] Native|Protected     
	// Function /Script/MFQuestSystem.MFQuestProgressComponentBase.OnReq_CurrProgress
	// void OnReq_CurrProgress();                                                                                               // [0x1f9a6e0] Native|Protected     
	// Function /Script/MFQuestSystem.MFQuestProgressComponentBase.IsQuestProgressFinished
	// bool IsQuestProgressFinished();                                                                                          // [0x5cb4138] Native|Public        
};

/// Class /Script/MFQuestSystem.MFQuestProgressComp_Count
/// Size: 0x0130 (304 bytes) (0x000118 - 0x000130) align 8 MaxSize: 0x0130
class UMFQuestProgressComp_Count : public UMFQuestProgressComponentBase
{ 
public:
	int32_t                                            ProgressUnit;                                               // 0x0118   (0x0004)  
	int32_t                                            CachedProgress;                                             // 0x011C   (0x0004)  
	bool                                               bReachMaxNotComplete;                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	int32_t                                            OneBattleMaxAddProgress;                                    // 0x0124   (0x0004)  
	int32_t                                            OneBattleAddedProgress;                                     // 0x0128   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Class /Script/MFQuestSystem.MFQuestStartNode
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UMFQuestStartNode : public UMFQuestNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/MFQuestSystem.MFQuestStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFQuestStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFQuestSystem.MFQuestStatics.RunQuest
	// void RunQuest(class AMFQuestBase* InQuest, class AActor* InInsitigator, bool bGiveUpOldQuest, FLatentActionInfo LatentInfo, ERunQuestResult& RunResult); // [0x60c80cc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFQuestSystem.MFQuestStatics.ResetQuest
	// void ResetQuest(class AMFQuestBase* InQuest);                                                                            // [0x60c8044] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFQuestSystem.MFQuestStatics.GetQuestManagerComponent
	// class UMFQuestManagerComponent* GetQuestManagerComponent(class UObject* WorldContextObject);                             // [0x60c7a94] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestStatics.GetQuestManagerActor
	// class AMFQuestManagerActor* GetQuestManagerActor(class UObject* WorldContextObject);                                     // [0x60c79fc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFQuestSystem.MFQuestStatics.GetCompareResult
	// bool GetCompareResult(int64_t CheckNum, ENumberCompareType CompareType, int64_t Value1, int64_t Value2);                 // [0x60c75f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFQuestSystem.MFQuestStatics.CreateNewQuestFromClass
	// class AMFQuestBase* CreateNewQuestFromClass(class UObject* WorldContextObject, class UClass* InQuestClass);              // [0x60c7358] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFQuestSystem.MFQuestStatics.AssignQuestInstigator
	// void AssignQuestInstigator(class AMFQuestBase* InQuest, class AActor* InInstigator, bool bGiveUpOldQuest);               // [0x60c711c] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MFQuestSystem.QuestGraphConnection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FQuestGraphConnection
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMFQuestComponentBase) == 0x0100); // 256 bytes (0x0000F8 - 0x000100)
static_assert(sizeof(UMFQuestActionComponentBase) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(UMFBPQuestActionComponentBase) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(UMFQuestActivationComponentBase) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(UMFQuestActivationComp_TriggerVolume) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(UMFQuestNode) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMFQuestAffiliateNode) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMFQuestAssembleNode) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(FQuestState) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(AMFQuestBase) == 0x03F8); // 1016 bytes (0x000318 - 0x0003F8)
static_assert(sizeof(UMFQuestCheckNode) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UCheckActorParamBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCheckActorClass) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UCheckActorLocation) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMFQuestConditionComponentBase) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMFQuestConditionComp_CheckActorProperty) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UCheckBlackboardBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCheckIntMapValue) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UCheckIntArrayMapNum) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UCheckObjectArrayMapNum) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UMFQuestConditionComp_CheckBlackboard) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMFQuestConditionComp_Dist) == 0x0068); // 104 bytes (0x000050 - 0x000068)
static_assert(sizeof(UMFQuestConditionComp_RandomProbability) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UMFQuestContextBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContext_Actor) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFQuestContext_GameplayTag) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFQuestContext_Number) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMFQuestContext_Object) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFQuestContextSourceBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContextSource_BlackboardKey) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContextSource_BlackboardTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContextSource_CurrentValue) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContextSource_ObjectiveInstigator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContextSource_ObjectiveTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContextSource_PreviousValue) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestContextSource_QuestDistributer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UQuestConditionEffectContainer) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FNestedIntArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNestedObjectArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FQuestDistributerBlackboard) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(AMFQuestDistributerBase) == 0x03B8); // 952 bytes (0x000318 - 0x0003B8)
static_assert(sizeof(UBlackboardOperatorBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UIntMapAddValue) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UIntMapSetValue) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UIntArrayMapAddValue) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UIntArrayMapRemoveValue) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UObjectArrayMapAddUnique) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UObjectArrayMapEmpty) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UMFQuestEffectBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMFQuestEffect_ModifyBlackboard) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UMFQuestEndNode) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UMFQuestEventManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFQuestInstigatorComponentBase) == 0x0108); // 264 bytes (0x000100 - 0x000108)
static_assert(sizeof(AMFQuestManagerActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(UMFQuestManagerComponent) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(sizeof(UMFQuestNodeGraph) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(FQuestContextPairConfig) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FQuestContextPair) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMFQuestObjectiveComponentBase) == 0x0168); // 360 bytes (0x000100 - 0x000168)
static_assert(sizeof(UMFQuestPrimaryConditionBase) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UMFQuestPrimaryCondition_IntMapChanged) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMFQuestPrimaryCondition_ObjArrMapChanged) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMFQuestProgressComponentBase) == 0x0118); // 280 bytes (0x000100 - 0x000118)
static_assert(sizeof(UMFQuestProgressComp_Count) == 0x0130); // 304 bytes (0x000118 - 0x000130)
static_assert(sizeof(UMFQuestStartNode) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UMFQuestStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FQuestGraphConnection) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UMFQuestComponentBase, OwnerQuest) == 0x00F8);
static_assert(offsetof(UMFQuestActivationComp_TriggerVolume, TriggerVolume) == 0x0100);
static_assert(offsetof(UMFQuestAssembleNode, QuestAffiliateNodeArray) == 0x0058);
static_assert(offsetof(AMFQuestBase, ActionComponents) == 0x0368);
static_assert(offsetof(AMFQuestBase, LevelUnrelatedActionComponents) == 0x0378);
static_assert(offsetof(AMFQuestBase, ActivationComponents) == 0x0388);
static_assert(offsetof(AMFQuestBase, ObjectiveComponent) == 0x03A0);
static_assert(offsetof(AMFQuestBase, QuestStatus) == 0x03B8);
static_assert(offsetof(AMFQuestBase, AssembleCustomIndexList) == 0x03C0);
static_assert(offsetof(AMFQuestBase, QuestTemplateParams) == 0x03D0);
static_assert(offsetof(AMFQuestBase, CacheCharacter) == 0x03F0);
static_assert(offsetof(UCheckActorClass, ParentClass) == 0x0028);
static_assert(offsetof(UCheckActorLocation, Center) == 0x0028);
static_assert(offsetof(UMFQuestConditionComponentBase, OwnerQuest) == 0x0038);
static_assert(offsetof(UMFQuestConditionComponentBase, CustomTickTimerHandle) == 0x0048);
static_assert(offsetof(UMFQuestConditionComp_CheckActorProperty, CheckTargetContextSource) == 0x0050);
static_assert(offsetof(UMFQuestConditionComp_CheckActorProperty, CheckParams) == 0x0058);
static_assert(offsetof(UCheckBlackboardBase, TargetActor) == 0x0028);
static_assert(offsetof(UCheckIntMapValue, Key) == 0x0030);
static_assert(offsetof(UCheckIntArrayMapNum, Key) == 0x0030);
static_assert(offsetof(UCheckObjectArrayMapNum, Key) == 0x0030);
static_assert(offsetof(UMFQuestConditionComp_CheckBlackboard, CheckParams) == 0x0050);
static_assert(offsetof(UMFQuestConditionComp_Dist, SourceActorContextConfig) == 0x0050);
static_assert(offsetof(UMFQuestConditionComp_Dist, DestActorContextConfig) == 0x0058);
static_assert(offsetof(UMFQuestContext_Actor, ContextActor) == 0x0028);
static_assert(offsetof(UMFQuestContext_Object, Object) == 0x0028);
static_assert(offsetof(UQuestConditionEffectContainer, QuestDistributer) == 0x0028);
static_assert(offsetof(UQuestConditionEffectContainer, PrimaryCondition) == 0x0030);
static_assert(offsetof(UQuestConditionEffectContainer, SubConditions) == 0x0038);
static_assert(offsetof(UQuestConditionEffectContainer, QuestEffects) == 0x0048);
static_assert(offsetof(UQuestConditionEffectContainer, FailQuestEffects) == 0x0058);
static_assert(offsetof(FNestedIntArray, IntArray) == 0x0000);
static_assert(offsetof(FNestedObjectArray, ObjectArray) == 0x0000);
static_assert(offsetof(FQuestDistributerBlackboard, IntMap) == 0x0000);
static_assert(offsetof(FQuestDistributerBlackboard, IntArrayMap) == 0x0050);
static_assert(offsetof(FQuestDistributerBlackboard, ObjectArrayMap) == 0x00A0);
static_assert(offsetof(FQuestDistributerBlackboard, ObjectMap) == 0x00F0);
static_assert(offsetof(AMFQuestDistributerBase, QuestConditionEffectContainers) == 0x0320);
static_assert(offsetof(AMFQuestDistributerBase, ActorBlackboards) == 0x0330);
static_assert(offsetof(AMFQuestDistributerBase, LastTriggerCharacter) == 0x03B0);
static_assert(offsetof(UBlackboardOperatorBase, TargetActor) == 0x0028);
static_assert(offsetof(UIntMapAddValue, Key) == 0x0038);
static_assert(offsetof(UIntMapAddValue, ModifyValueSource) == 0x0040);
static_assert(offsetof(UIntMapSetValue, Key) == 0x0038);
static_assert(offsetof(UIntMapSetValue, ValueSource) == 0x0040);
static_assert(offsetof(UIntArrayMapAddValue, Key) == 0x0038);
static_assert(offsetof(UIntArrayMapAddValue, ModifyValueSource) == 0x0040);
static_assert(offsetof(UIntArrayMapRemoveValue, Key) == 0x0038);
static_assert(offsetof(UObjectArrayMapAddUnique, Key) == 0x0038);
static_assert(offsetof(UObjectArrayMapAddUnique, TargetContextSource) == 0x0040);
static_assert(offsetof(UObjectArrayMapEmpty, Key) == 0x0038);
static_assert(offsetof(UMFQuestEffect_ModifyBlackboard, BlackboardOperators) == 0x0038);
static_assert(offsetof(AMFQuestManagerActor, QuestGraphList) == 0x0318);
static_assert(offsetof(UMFQuestManagerComponent, QuestManagerActorClass) == 0x00F8);
static_assert(offsetof(UMFQuestManagerComponent, QuestManagerActor) == 0x0100);
static_assert(offsetof(UMFQuestNodeGraph, NodeList) == 0x0040);
static_assert(offsetof(UMFQuestNodeGraph, QuestAffiliateNodeList) == 0x0050);
static_assert(offsetof(UMFQuestNodeGraph, QuestList) == 0x0060);
static_assert(offsetof(UMFQuestNodeGraph, StartNode) == 0x0070);
static_assert(offsetof(UMFQuestNodeGraph, EndNode) == 0x0078);
static_assert(offsetof(UMFQuestNodeGraph, OwnerController) == 0x0088);
static_assert(offsetof(UMFQuestNodeGraph, CheckNodeArray) == 0x0098);
static_assert(offsetof(FQuestContextPairConfig, ContextSourceClass) == 0x0000);
static_assert(offsetof(FQuestContextPairConfig, ContextClass) == 0x0008);
static_assert(offsetof(FQuestContextPair, ContextSource) == 0x0000);
static_assert(offsetof(FQuestContextPair, Context) == 0x0008);
static_assert(offsetof(UMFQuestObjectiveComponentBase, QuestContextPairConfigList) == 0x0110);
static_assert(offsetof(UMFQuestObjectiveComponentBase, AndObjectiveConditionList) == 0x0128);
static_assert(offsetof(UMFQuestObjectiveComponentBase, OrObjectiveConditionList) == 0x0138);
static_assert(offsetof(UMFQuestObjectiveComponentBase, QuestProgress) == 0x0148);
static_assert(offsetof(UMFQuestObjectiveComponentBase, QuestContextList) == 0x0158);
static_assert(offsetof(UMFQuestPrimaryConditionBase, QuestContextPairConfigList) == 0x0048);
static_assert(offsetof(UMFQuestPrimaryConditionBase, ConditionEffectContainer) == 0x0058);
static_assert(offsetof(UMFQuestPrimaryConditionBase, QuestDistributer) == 0x0060);
static_assert(offsetof(UMFQuestPrimaryConditionBase, QuestContextList) == 0x0068);
