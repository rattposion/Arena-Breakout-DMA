// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MFGlobalEventParameterTags

#pragma pack(push, 0x1)

/// Class /Script/MFMission.MFMission
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFMission : public UObject
{ 
public:
	class UMFMissionObjective*                         Objective;                                                  // 0x0028   (0x0008)  
};

/// Class /Script/MFMission.MFMissionNode
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMFMissionNode : public UObject
{ 
public:
	class UMFMissionFlowNode*                          MissionFlowNode;                                            // 0x0028   (0x0008)  
	FMFGlobalEventParameterTag                         InstigatorTag;                                              // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/MFMission.MFMissionNode.ShowLog
	// void ShowLog(FString LogStr, bool bImportant);                                                                           // [0x4de8354] Final|Native|Public  
	// Function /Script/MFMission.MFMissionNode.OnMissionStatusChanged
	// void OnMissionStatusChanged(class UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus); // [0x4de818c] Native|Public        
	// Function /Script/MFMission.MFMissionNode.OnMissionProgressChanged
	// void OnMissionProgressChanged(class UMFMissionFlowComponent* InInstigator, int32_t NewProgress, int32_t OldProgress);    // [0x4de8058] Native|Public        
	// Function /Script/MFMission.MFMissionNode.InitializeNode
	// void InitializeNode(class UMFMissionFlowNode* InNode);                                                                   // [0x4de7f54] Native|Public        
	// Function /Script/MFMission.MFMissionNode.GetMissionName
	// FString GetMissionName();                                                                                                // [0x4de7e2c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionNode.GetMissionIndex
	// int32_t GetMissionIndex();                                                                                               // [0x4de7e08] Final|Native|Public  
	// Function /Script/MFMission.MFMissionNode.GetMissionFlowNodeInfo
	// FString GetMissionFlowNodeInfo();                                                                                        // [0x4de7d1c] Final|Native|Public|Const 
	// Function /Script/MFMission.MFMissionNode.GetMissionFlowNode
	// class UMFMissionFlowNode* GetMissionFlowNode();                                                                          // [0x4c1f12c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionNode.GetMissionFlowName
	// FString GetMissionFlowName();                                                                                            // [0x4de7c5c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionNode.GetMissionFlowIndex
	// int32_t GetMissionFlowIndex();                                                                                           // [0x4de7c38] Final|Native|Public  
	// Function /Script/MFMission.MFMissionNode.GetMissionFlow
	// class UMFMissionFlow* GetMissionFlow();                                                                                  // [0x4de7b7c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionNode.ExecuteNode
	// void ExecuteNode(class UMFMissionFlowComponent* InInstigator);                                                           // [0x4de6e70] Native|Public        
	// Function /Script/MFMission.MFMissionNode.DestroyNode
	// void DestroyNode();                                                                                                      // [0x4de6e58] Native|Public        
	// Function /Script/MFMission.MFMissionNode.DeactivateNode
	// void DeactivateNode(class UMFMissionFlowComponent* InInstigator, EMissionStatus& InStatus);                              // [0x4de6d64] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionNode.ActivateNode
	// void ActivateNode(class UMFMissionFlowComponent* InInstigator);                                                          // [0x4de6cc4] Native|Public        
};

/// Class /Script/MFMission.MFMissionAction
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UMFMissionAction : public UMFMissionNode
{ 
public:
	class UMFMissionObjective*                         Objective;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/MFMission.MFMissionCondition
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UMFMissionCondition : public UMFMissionNode
{ 
public:
	class UMFMissionObjective*                         Objective;                                                  // 0x0038   (0x0008)  
	bool                                               bEqualCondition;                                            // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/MFMission.MFMissionFlowInstanceData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMFMissionFlowInstanceData
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
	class UMFMissionFlow*                              MissionFlow;                                                // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1489) /* EMissionStatus */         __um(MissionFlowStatus);                                    // 0x0010   (0x0001)  
	bool                                               bBeforeState;                                               // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
	class ACharacter*                                  LastTriggerCharacter;                                       // 0x0018   (0x0008)  
	int32_t                                            LoopCount;                                                  // 0x0020   (0x0004)  
	bool                                               bLoopExit;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/MFMission.MFMissionFlowNodeInstanceData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMFMissionFlowNodeInstanceData
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
	class UMFMissionFlowNode*                          MissionFlowNode;                                            // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1490) /* EMissionFlowNodeStatus */ __um(NodeStatus);                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UMFMissionObjective*                         Objective;                                                  // 0x0018   (0x0008)  
	SDK_UNDEFINED(1,1491) /* EMissionStatus */         __um(MissionStatus);                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            InitialProgress;                                            // 0x0024   (0x0004)  
	int32_t                                            OldProgress;                                                // 0x0028   (0x0004)  
	int32_t                                            CurProgress;                                                // 0x002C   (0x0004)  
	int32_t                                            BeginProgress;                                              // 0x0030   (0x0004)  
	int32_t                                            EndProgress;                                                // 0x0034   (0x0004)  
	int32_t                                            CachedProgress;                                             // 0x0038   (0x0004)  
	int32_t                                            OneBattleAddedProgress;                                     // 0x003C   (0x0004)  
	float                                              ActivationTime;                                             // 0x0040   (0x0004)  
	float                                              FinishTime;                                                 // 0x0044   (0x0004)  
	float                                              RemainTime;                                                 // 0x0048   (0x0004)  
	float                                              RemainTimeUpdateServerTime;                                 // 0x004C   (0x0004)  
	bool                                               bHasTryInteract;                                            // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1492) /* EMissionFailedType */     __um(FailedType);                                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x0052   (0x0006)  MISSED
};

/// Struct /Script/MFMission.MFMissionFlowReplicateData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFMissionFlowReplicateData
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
	FString                                            MissionFlowName;                                            // 0x0008   (0x0010)  
	SDK_UNDEFINED(1,1493) /* EMissionStatus */         __um(MissionFlowStatus);                                    // 0x0018   (0x0001)  
	SDK_UNDEFINED(1,1494) /* EMissionStatus */         __um(OldMissionFlowStatus);                                 // 0x0019   (0x0001)  
	bool                                               bBeforeState;                                               // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001B   (0x0001)  MISSED
	float                                              StatusChangeTime;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/MFMission.MFMissionReplicateData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMFMissionReplicateData
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
	FString                                            MissionName;                                                // 0x0008   (0x0010)  
	FString                                            MissionFlowName;                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(1,1495) /* EMissionStatus */         __um(MissionStatus);                                        // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,1496) /* EMissionStatus */         __um(OldMissionStatus);                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            OldProgress;                                                // 0x002C   (0x0004)  
	int32_t                                            CurProgress;                                                // 0x0030   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x0034   (0x0004)  
	float                                              RemainTime;                                                 // 0x0038   (0x0004)  
	float                                              RemainTimeUpdateServerTime;                                 // 0x003C   (0x0004)  
	bool                                               bFailWhenAchieved;                                          // 0x0040   (0x0001)  
	bool                                               bNeedReport;                                                // 0x0041   (0x0001)  
	bool                                               bNeedReportProgress;                                        // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0043   (0x0005)  MISSED
	TArray<FString>                                    AffiliateMissionList;                                       // 0x0048   (0x0010)  
	bool                                               bValid;                                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            ConfigID;                                                   // 0x005C   (0x0004)  
};

/// Struct /Script/MFMission.MFMissionFlowVariableInstanceData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMFMissionFlowVariableInstanceData
{ 
	class UMFMissionDataComponent*                     DataComp;                                                   // 0x0000   (0x0008)  
	class UMFMissionFlow*                              MissionFlow;                                                // 0x0008   (0x0008)  
	class UMFMissionFlowVariableData*                  VariableAsset;                                              // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0018   (0x0020)  MISSED
	TArray<class UMFMissionFlowVariableKeyType*>       KeyInstances;                                               // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x70];                                      // 0x0048   (0x0070)  MISSED
};

/// Class /Script/MFMission.MFMissionDataComponent
/// Size: 0x0208 (520 bytes) (0x0000F8 - 0x000208) align 8 MaxSize: 0x0208
class UMFMissionDataComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,1497) /* TMap<TWeakObjectPtr<UMFMissionFlow*>, FMFMissionFlowInstanceData> */ __um(MissionFlowInstanceDataMap); // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,1498) /* TMap<TWeakObjectPtr<UMFMissionFlowNode*>, FMFMissionFlowNodeInstanceData> */ __um(NodeInstanceDataMap); // 0x0148   (0x0050)  
	TArray<FMFMissionFlowReplicateData>                MissionFlowReplicateDatas;                                  // 0x0198   (0x0010)  
	TArray<FMFMissionReplicateData>                    MissionReplicateDatas;                                      // 0x01A8   (0x0010)  
	SDK_UNDEFINED(80,1499) /* TMap<TWeakObjectPtr<UMFMissionFlow*>, FMFMissionFlowVariableInstanceData> */ __um(VariableInstanceDataMap); // 0x01B8   (0x0050)  


	/// Functions
	// Function /Script/MFMission.MFMissionDataComponent.SetMissionReplicateValid
	// void SetMissionReplicateValid(FString InMissionName, bool bValid);                                                       // [0x4de38b4] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.SetMissionReplicateStatus
	// void SetMissionReplicateStatus(FString InMissionName, int32_t InNewStatus, int32_t InOldStatus);                         // [0x4de3764] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.SetMissionReplicateRemainTime
	// void SetMissionReplicateRemainTime(FString InMissionName, float InRemainTime, float InRemainTimeUpdateServerTime);       // [0x4de3614] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.SetMissionReplicateCurProgress
	// void SetMissionReplicateCurProgress(FString InMissionName, int32_t InPorgress);                                          // [0x4de350c] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.SetMissionFlowReplicateStatusChangeTime
	// void SetMissionFlowReplicateStatusChangeTime(FString InMissionFlowName, int32_t InTime);                                 // [0x4de31e0] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.SetMissionFlowReplicateStatus
	// void SetMissionFlowReplicateStatus(FString InMissionFlowName, int32_t InStatus);                                         // [0x4de30d8] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.SetMissionFlowReplicateBeforeState
	// void SetMissionFlowReplicateBeforeState(FString InMissionFlowName, bool bBeforeState);                                   // [0x4de2fcc] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.ResetMissionReplicateData
	// void ResetMissionReplicateData(class UMFMissionFlowNode* InMissionFlowNode);                                             // [0x4de20bc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.ResetMissionFlowReplicateData
	// void ResetMissionFlowReplicateData(class UMFMissionFlow* InMissionFlow);                                                 // [0x4de1d08] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.ResetMissionFlowNodeInstanceData
	// void ResetMissionFlowNodeInstanceData(class UMFMissionFlowNode* InMissionFlowNode);                                      // [0x4de1c68] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.ResetMissionFlowInstanceData
	// void ResetMissionFlowInstanceData(class UMFMissionFlow* InMissionFlow);                                                  // [0x4de1bc8] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.OnRep_MissionReplicateDatas
	// void OnRep_MissionReplicateDatas();                                                                                      // [0x4de19d0] Native|Protected     
	// Function /Script/MFMission.MFMissionDataComponent.OnRep_MissionFlowReplicateDatas
	// void OnRep_MissionFlowReplicateDatas();                                                                                  // [0x4de19b8] Native|Protected     
	// Function /Script/MFMission.MFMissionDataComponent.NotifyMissionReplicateDataChanged
	// void NotifyMissionReplicateDataChanged(EMFMissionDataChangeType InChangeType, FMFMissionReplicateData InMissionReplicateData, class ACharacter* InSharerCharacter); // [0x4de140c] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.NotifyMissionInstanceDataChanged
	// void NotifyMissionInstanceDataChanged(EMFMissionDataChangeType InChangeType, FMFMissionFlowNodeInstanceData InMissionInstanceData); // [0x4de12b8] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.NotifyMissionFlowReplicateDataChanged
	// void NotifyMissionFlowReplicateDataChanged(EMFMissionDataChangeType InChangeType, FMFMissionFlowReplicateData InMissionFlowReplicateData); // [0x4de116c] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.MulticastMissionReplicateDataChanged
	// void MulticastMissionReplicateDataChanged(EMFMissionDataChangeType InChangeType, FMFMissionReplicateData InMissionReplicateData, class ACharacter* InSharerCharacter); // [0x4de0f70] Net|Native|Event|NetMulticast|Public 
	// Function /Script/MFMission.MFMissionDataComponent.MulticastMissionFlowReplicateDataChanged
	// void MulticastMissionFlowReplicateDataChanged(EMFMissionDataChangeType InChangeType, FMFMissionFlowReplicateData InMissionFlowReplicateData, TArray<FMFMissionReplicateData> InMissionReplicateDataList); // [0x4de0dc8] Net|Native|Event|NetMulticast|Public 
	// Function /Script/MFMission.MFMissionDataComponent.InitQuestReplicateData
	// void InitQuestReplicateData(FString InMissionName, int32_t InCurPorgress);                                               // [0x4de09ec] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.InitMissionReplicateData
	// void InitMissionReplicateData(class UMFMissionFlowNode* InMissionFlowNode, FMFMissionFlowNodeInstanceData& NodeInstanceData); // [0x4de02e0] Final|Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionDataComponent.InitMissionFlowReplicateData
	// void InitMissionFlowReplicateData(class UMFMissionFlow* InMissionFlow, FMFMissionFlowInstanceData& MissionFlowInstanceData); // [0x4de01d0] Final|Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionDataComponent.GetRefMissionReplicateData
	// FMFMissionReplicateData GetRefMissionReplicateData(class UMFMissionFlowNode* InMissionFlowNode);                         // [0x4ddfaf4] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.GetRefMissionFlowReplicateDataByName
	// FMFMissionFlowReplicateData GetRefMissionFlowReplicateDataByName(FString InMissionFlowName);                             // [0x4ddf950] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.GetRefMissionFlowReplicateData
	// FMFMissionFlowReplicateData GetRefMissionFlowReplicateData(class UMFMissionFlow* InMissionFlow);                         // [0x4ddf6cc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.GetRefMissionFlowNodeInstanceData
	// FMFMissionFlowNodeInstanceData GetRefMissionFlowNodeInstanceData(class UMFMissionFlowNode* InMissionFlowNode);           // [0x4ddf5f0] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.GetRefMissionFlowInstanceData
	// FMFMissionFlowInstanceData GetRefMissionFlowInstanceData(class UMFMissionFlow* InMissionFlow);                           // [0x4ddf52c] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.GetMissionReplicateDatasByStatus
	// void GetMissionReplicateDatasByStatus(FString InMissionFlowName, TArray<EMissionStatus>& InStatusList, TArray<FMFMissionReplicateData>& OutDataList); // [0x4ddef68] Final|Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionDataComponent.GetMissionReplicateDatas
	// void GetMissionReplicateDatas(FString InMissionFlowName, TArray<FMFMissionReplicateData>& OutDataList);                  // [0x4ddeca8] Final|Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionDataComponent.GetMissionReplicateData
	// FMFMissionReplicateData GetMissionReplicateData(FString InMissionName);                                                  // [0x4ddeafc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.GetMissionFlowReplicateData
	// FMFMissionFlowReplicateData GetMissionFlowReplicateData(FString InMissionFlowName);                                      // [0x4dde794] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.GetMissionFlowNodeInstanceData
	// FMFMissionFlowNodeInstanceData GetMissionFlowNodeInstanceData(class UMFMissionFlowNode* InMissionFlowNode);              // [0x4dde45c] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.GetMissionFlowInstanceData
	// FMFMissionFlowInstanceData GetMissionFlowInstanceData(class UMFMissionFlow* InMissionFlow);                              // [0x4dde068] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.GetAllMissionFlowReplicateDatas
	// TArray<FMFMissionFlowReplicateData> GetAllMissionFlowReplicateDatas();                                                   // [0x4ddda6c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionDataComponent.ClientNotifyMissionReplicateDataChanged
	// void ClientNotifyMissionReplicateDataChanged(EMFMissionDataChangeType InChangeType, FMFMissionReplicateData InMissionReplicateData, class ACharacter* InSharerCharacter); // [0x4ddd5bc] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/MFMission.MFMissionDataComponent.ClientNotifyMissionFlowReplicateDataChanged
	// void ClientNotifyMissionFlowReplicateDataChanged(EMFMissionDataChangeType InChangeType, FMFMissionFlowReplicateData InMissionFlowReplicateData, TArray<FMFMissionReplicateData> InMissionReplicateDataList); // [0x4ddd414] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/MFMission.MFMissionDataComponent.AddMissionReplicateData
	// void AddMissionReplicateData(FMFMissionReplicateData& InData);                                                           // [0x4ddcedc] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionDataComponent.AddMissionReplicateAffiliateIndex
	// void AddMissionReplicateAffiliateIndex(FString InAssembleMissionName, FString InAffiliateMissionName);                   // [0x4ddcdc4] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.AddMissionFlowReplicateData
	// void AddMissionFlowReplicateData(FMFMissionFlowReplicateData& InData);                                                   // [0x4ddcc6c] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionDataComponent.Add_GetRefMissionFlowNodeInstanceData
	// FMFMissionFlowNodeInstanceData Add_GetRefMissionFlowNodeInstanceData(class UMFMissionFlowNode* InMissionFlowNode);       // [0x4ddd1dc] Native|Public        
	// Function /Script/MFMission.MFMissionDataComponent.Add_GetRefMissionFlowInstanceData
	// FMFMissionFlowInstanceData Add_GetRefMissionFlowInstanceData(class UMFMissionFlow* InMissionFlow);                       // [0x4ddd118] Native|Public        
};

/// Class /Script/MFMission.MFMissionDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFMissionDataInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFMission.MFMissionDataInterface.GetMissionDataComponent
	// class UMFMissionDataComponent* GetMissionDataComponent();                                                                // [0x4dddd6c] Native|Public        
	// Function /Script/MFMission.MFMissionDataInterface.CreateMissionDataComponent
	// class UMFMissionDataComponent* CreateMissionDataComponent();                                                             // [0x4ddd7b8] Native|Public        
};

/// Struct /Script/MFMission.MissionTaskID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMissionTaskID
{ 
	int32_t                                            PlayID;                                                     // 0x0000   (0x0004)  
	int32_t                                            MissionTaskID;                                              // 0x0004   (0x0004)  
};

/// Class /Script/MFMission.MFMissionFlow
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMFMissionFlow : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UWorld*                                      WorldPrivate;                                               // 0x0030   (0x0008)  
	class UMFMissionFlowNode_Start*                    StartNode;                                                  // 0x0038   (0x0008)  
	class UMFMissionFlowNode_End*                      EndNode;                                                    // 0x0040   (0x0008)  
	TArray<class UMFMissionFlowNode*>                  NodeList;                                                   // 0x0048   (0x0010)  
	bool                                               bCustomName;                                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            MissionFlowName;                                            // 0x0060   (0x0010)  
	SDK_UNDEFINED(1,1500) /* EMissionDataType */       __um(DataType);                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            LoopTimes;                                                  // 0x0074   (0x0004)  
	bool                                               bFailedLoopEnable;                                          // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	class UMFMissionFlowVariableData*                  VariableAsset;                                              // 0x0080   (0x0008)  
	TArray<FMissionTaskID>                             MissionTaskIDs;                                             // 0x0088   (0x0010)  
	FText                                              MissionDesc;                                                // 0x0098   (0x0018)  
	bool                                               bTotalTimeMode;                                             // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	uint32_t                                           MissionTotalTime;                                           // 0x00B4   (0x0004)  


	/// Functions
	// Function /Script/MFMission.MFMissionFlow.SetVariableAsset
	// void SetVariableAsset(class UMFMissionFlowVariableData* NewAsset);                                                       // [0x4de3b40] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.SetStartNode
	// void SetStartNode(class UMFMissionFlowNode_Start* InStartNode);                                                          // [0x4de3aac] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.SetMissionFlowName
	// void SetMissionFlowName(FString InName);                                                                                 // [0x4de2f24] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.SetEndNode
	// void SetEndNode(class UMFMissionFlowNode_End* InEndNode);                                                                // [0x4de24c4] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.SetDataType
	// void SetDataType(EMissionDataType InType);                                                                               // [0x4de2430] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.SetCustomName
	// void SetCustomName(bool bFlag);                                                                                          // [0x4de239c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.ResetNodeList
	// void ResetNodeList();                                                                                                    // [0x4de2364] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.OnMissionFlowStatusChange
	// void OnMissionFlowStatusChange(class UMFMissionFlowComponent* InInstigator, EMissionStatus InStatus);                    // [0x4de1608] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.IsValidMissionFlow
	// bool IsValidMissionFlow();                                                                                               // [0x4de0da4] Final|Native|Public|Const 
	// Function /Script/MFMission.MFMissionFlow.IsCustomName
	// bool IsCustomName();                                                                                                     // [0x4de0b88] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.InitializeMissionFlow
	// void InitializeMissionFlow(class UWorld* InWorld);                                                                       // [0x4de0af4] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.GetVariableAsset
	// class UMFMissionFlowVariableData* GetVariableAsset();                                                                    // [0x4ddffa4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFMission.MFMissionFlow.GetStartNode
	// class UMFMissionFlowNode_Start* GetStartNode();                                                                          // [0x4ddff8c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.GetNodeList
	// TArray<UMFMissionFlowNode*> GetNodeList();                                                                               // [0x4ddf32c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.GetMissionFlowNode
	// class UMFMissionFlowNode* GetMissionFlowNode(FString InName);                                                            // [0x4dde3a4] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.GetMissionFlowName
	// FString GetMissionFlowName();                                                                                            // [0x4dde288] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.GetLoopTimes
	// int32_t GetLoopTimes();                                                                                                  // [0x4dddbf8] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.GetEndNode
	// class UMFMissionFlowNode_End* GetEndNode();                                                                              // [0x4dddbe0] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.GetDataType
	// EMissionDataType GetDataType();                                                                                          // [0x4dddbcc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.DestroyFlow
	// void DestroyFlow();                                                                                                      // [0x4ddd9b8] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlow.AddNode
	// void AddNode(class UMFMissionFlowNode* InNode);                                                                          // [0x4ddcfd0] Final|Native|Public  
};

/// Struct /Script/MFMission.MFMissionFlowExecutingNodeConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMFMissionFlowExecutingNodeConfig
{ 
	bool                                               bExecutingFlow;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<class UMFMissionFlowNode*>                  NodeList;                                                   // 0x0008   (0x0010)  
};

/// Class /Script/MFMission.MFMissionFlowComponent
/// Size: 0x0240 (576 bytes) (0x0000F8 - 0x000240) align 8 MaxSize: 0x0240
class UMFMissionFlowComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(1,1501) /* EMissionDataType */       __um(InstigatorType);                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TMap<FString, class UMFMissionFlow*>               MissionFlowMap;                                             // 0x0100   (0x0050)  
	SDK_UNDEFINED(80,1502) /* TMap<EMissionDataType, class UMFMissionDataComponent*> */ __um(DataComponentMap);    // 0x0150   (0x0050)  
	SDK_UNDEFINED(80,1503) /* TMap<EMissionDataType, class UMFMissionFlowComponent*> */ __um(AccessibleComponents); // 0x01A0   (0x0050)  
	TMap<class UMFMissionFlow*, FMFMissionFlowExecutingNodeConfig> MissionFlowExecutingNodes;                      // 0x01F0   (0x0050)  


	/// Functions
	// Function /Script/MFMission.MFMissionFlowComponent.UpdateLastTriggerCharacter
	// void UpdateLastTriggerCharacter(class UMFMissionFlowNode* InMissionFlowNode, class ACharacter* InCharacter);             // [0x4de3c78] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.StopMissionFlow
	// void StopMissionFlow(class UMFMissionFlow* InMissionFlow);                                                               // [0x4de3bd8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.StartMissionFlow
	// void StartMissionFlow(class UMFMissionFlow* InMissionFlow);                                                              // [0x4de1bc8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetNodeStatus
	// void SetNodeStatus(class UMFMissionFlowNode* InMissionFlowNode, EMissionFlowNodeStatus InStatus);                        // [0x4de39c0] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionRemainTime
	// void SetMissionRemainTime(class UMFMissionFlowNode* InMissionFlowNode, float InRemainTime, float InRemainTimeUpdateServerTime); // [0x4de33d8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionHasTryInteract
	// void SetMissionHasTryInteract(class UMFMissionFlowNode* InMissionFlowNode, bool bHasTry);                                // [0x4de32e8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionFlowLoopExit
	// void SetMissionFlowLoopExit(class UMFMissionFlow* InMissionFlow, bool bLoopExit);                                        // [0x4de2e38] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionFlowLoopCount
	// void SetMissionFlowLoopCount(class UMFMissionFlow* InMissionFlow, int32_t InLoopCount);                                  // [0x4de2d50] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionFlowLastTriggerCharacter
	// void SetMissionFlowLastTriggerCharacter(class UMFMissionFlow* InMissionFlow, class ACharacter* InCharacter);             // [0x4de2c64] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionFlowBeforeState
	// void SetMissionFlowBeforeState(class UMFMissionFlow* InMissionFlow, bool bBeforeState);                                  // [0x4de2818] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionFinishTime
	// void SetMissionFinishTime(class UMFMissionFlowNode* InMissionFlowNode);                                                  // [0x4de2778] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionFailedType
	// void SetMissionFailedType(class UMFMissionFlowNode* InMissionFlowNode, EMissionFailedType FailedType);                   // [0x4de268c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetMissionActivationTime
	// void SetMissionActivationTime(class UMFMissionFlowNode* InMissionFlowNode);                                              // [0x4de25ec] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.SetInstigatorType
	// void SetInstigatorType(EMissionDataType InType);                                                                         // [0x4de2558] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowComponent.ResetMissionProgress
	// int32_t ResetMissionProgress(class UMFMissionFlowNode* InMissionFlowNode, class ACharacter* InSharerCharacter);          // [0x4de1fbc] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.ResetMissionFlow
	// void ResetMissionFlow(class UMFMissionFlow* InMissionFlow, bool bStartImmediately);                                      // [0x4de1ad8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.RegisterMissionFlow
	// void RegisterMissionFlow(class UMFMissionFlow* InMissionFlow, bool bReplicate);                                          // [0x4de19e8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.OnMissionFlowStatusChange
	// void OnMissionFlowStatusChange(class UMFMissionFlow* InMissionFlow, EMissionStatus InStatus);                            // [0x4de18cc] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.IsReachEndNotComplete
	// bool IsReachEndNotComplete(class UMFMissionFlowNode* InMissionFlowNode);                                                 // [0x4de0cf4] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.IsMissionFlowLoopExit
	// bool IsMissionFlowLoopExit(class UMFMissionFlow* InMissionFlow);                                                         // [0x4de0c4c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowComponent.IsFailWhenAchieved
	// bool IsFailWhenAchieved(class UMFMissionFlowNode* InMissionFlowNode);                                                    // [0x4de0b9c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.InitMissionEndProgress
	// int32_t InitMissionEndProgress(class UMFMissionFlowNode* InMissionFlowNode, int32_t InPorgress);                         // [0x4de00d0] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.InitMissionCurProgress
	// int32_t InitMissionCurProgress(class UMFMissionFlowNode* InMissionFlowNode, int32_t InPorgress);                         // [0x4ddffd0] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetNodeStatus
	// EMissionFlowNodeStatus GetNodeStatus(class UMFMissionFlowNode* InMissionFlowNode);                                       // [0x4ddf47c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionStatus
	// EMissionStatus GetMissionStatus(class UMFMissionFlowNode* InMissionFlowNode);                                            // [0x4ddf27c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionReplicateDatasByStatus
	// void GetMissionReplicateDatasByStatus(FString InMissionFlowName, TArray<EMissionStatus>& InStatusList, TArray<FMFMissionReplicateData>& OutDataList); // [0x4ddf0f0] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionReplicateDatas
	// void GetMissionReplicateDatas(FString InMissionFlowName, TArray<FMFMissionReplicateData>& OutDataList);                  // [0x4ddedf0] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionReplicateData
	// FMFMissionReplicateData GetMissionReplicateData(FString InMissionName);                                                  // [0x4ddebd0] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowStatusByName
	// bool GetMissionFlowStatusByName(FString InMissionFlowName, EMissionStatus& OutStatus);                                   // [0x4dde9e8] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowStatus
	// EMissionStatus GetMissionFlowStatus(class UMFMissionFlow* InMissionFlow);                                                // [0x4dde938] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowReplicateData
	// FMFMissionFlowReplicateData GetMissionFlowReplicateData(FString InMissionFlowName);                                      // [0x4dde864] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowNodeInstanceDataByName
	// FMFMissionFlowNodeInstanceData GetMissionFlowNodeInstanceDataByName(FString InMissionFlowName, FString InNodeName);      // [0x4dde63c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowNodeInstanceData
	// FMFMissionFlowNodeInstanceData GetMissionFlowNodeInstanceData(class UMFMissionFlowNode* InMissionFlowNode);              // [0x4dde54c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowLoopCount
	// int32_t GetMissionFlowLoopCount(class UMFMissionFlow* InMissionFlow);                                                    // [0x4dde1e0] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowLastTriggerCharacter
	// class ACharacter* GetMissionFlowLastTriggerCharacter(class UMFMissionFlow* InMissionFlow);                               // [0x4dde130] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowComponent
	// class UMFMissionFlowComponent* GetMissionFlowComponent(EMissionDataType& InDataType);                                    // [0x4dddfb4] Native|Public|HasOutParms|Const 
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFlowByName
	// class UMFMissionFlow* GetMissionFlowByName(FString InMissionFlowName);                                                   // [0x4dddef8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionFinisTime
	// float GetMissionFinisTime(class UMFMissionFlowNode* InMissionFlowNode);                                                  // [0x4ddde48] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionDataComponent
	// class UMFMissionDataComponent* GetMissionDataComponent(EMissionDataType& InDataType);                                    // [0x4dddd94] Native|Public|HasOutParms|Const 
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionCurProgress
	// int32_t GetMissionCurProgress(class UMFMissionFlowNode* InMissionFlowNode);                                              // [0x4dddcbc] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetMissionActivationTime
	// float GetMissionActivationTime(class UMFMissionFlowNode* InMissionFlowNode);                                             // [0x4dddc0c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.GetInstigatorType
	// EMissionDataType GetInstigatorType();                                                                                    // [0x2793b40] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowComponent.GetAllMissionFlowReplicateDatas
	// void GetAllMissionFlowReplicateDatas(TArray<FMFMissionFlowReplicateData>& OutDataList);                                  // [0x4dddb1c] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowComponent.ExecuteNode
	// void ExecuteNode(class UMFMissionFlowNode* InMissionFlowNode);                                                           // [0x4ddd9cc] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.DeactivatePrevNode
	// void DeactivatePrevNode(class UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus);                           // [0x4ddd8cc] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.DeactivateNode
	// void DeactivateNode(class UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus);                               // [0x4ddd7e0] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.ClientDebugInfos
	// void ClientDebugInfos(TArray<FString> InInfos);                                                                          // [0x4ddd368] Net|Native|Event|Public|NetClient 
	// Function /Script/MFMission.MFMissionFlowComponent.CheckMissionAchieved
	// bool CheckMissionAchieved(class UMFMissionFlowNode* InMissionFlowNode);                                                  // [0x4ddd2b8] Native|Public        
	// Function /Script/MFMission.MFMissionFlowComponent.ActivateNode
	// void ActivateNode(class UMFMissionFlowNode* InMissionFlowNode, EMissionStatus InStatus);                                 // [0x4ddcb80] Native|Public        
};

/// Class /Script/MFMission.MFMissionFlowInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFMissionFlowInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFMission.MFMissionFlowInterface.GetMissionFlowComponent
	// class UMFMissionFlowComponent* GetMissionFlowComponent();                                                                // [0x4dddd6c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowInterface.CreateMissionFlowComponent
	// class UMFMissionFlowComponent* CreateMissionFlowComponent();                                                             // [0x4ddd7b8] Native|Public        
};

/// Struct /Script/MFMission.MissionFlowConnection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FMissionFlowConnection
{ 
	class UMFMissionFlowNode*                          ConnectNode;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/MFMission.MissionFlowPrevConnection
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FMissionFlowPrevConnection : FMissionFlowConnection
{ 
	SDK_UNDEFINED(1,1504) /* EMissionFlowConnectionType */ __um(PrevConnectionType);                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/MFMission.MissionFlowConnections
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMissionFlowConnections
{ 
	TArray<FMissionFlowConnection>                     Connections;                                                // 0x0000   (0x0010)  
};

/// Class /Script/MFMission.MFMissionFlowNode
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode : public UObject
{ 
public:
	class UMFMissionFlow*                              MissionFlowAsset;                                           // 0x0028   (0x0008)  
	TWeakObjectPtr<class UMFMissionFlowNode*>          ParentNode;                                                 // 0x0030   (0x0008)  
	TArray<FMissionFlowPrevConnection>                 PrevConnections;                                            // 0x0038   (0x0010)  
	TMap<char, FMissionFlowConnections>                NextConnectionsMap;                                         // 0x0048   (0x0050)  
	bool                                               bCustomName;                                                // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FString                                            MissionName;                                                // 0x00A0   (0x0010)  
	class UMFMissionObjective*                         Objective;                                                  // 0x00B0   (0x0008)  
	SDK_UNDEFINED(1,1505) /* EMissionFlowNodeType */   __um(NodeType);                                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	FString                                            NodeName;                                                   // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFMission.MFMissionFlowNode.UnRegisterInstigator
	// void UnRegisterInstigator(class UMFMissionFlowComponent* InInstigator);                                                  // [0x4de6384] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.ShowLog
	// void ShowLog(FString LogStr, bool bImportant);                                                                           // [0x4de627c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.SetParentNode
	// void SetParentNode(class UMFMissionFlowNode* InParentNode);                                                              // [0x4de616c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.SetObjective
	// void SetObjective(class UMFMissionObjective* InObjective);                                                               // [0x4de60d4] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.SetMissionName
	// void SetMissionName(FString InName);                                                                                     // [0x4de5fcc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.SetCustomName
	// void SetCustomName(bool bFlag);                                                                                          // [0x4de5e9c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.RegisterInstigator
	// void RegisterInstigator(class UMFMissionFlowComponent* InInstigator, bool bReplicate);                                   // [0x4de5dac] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.OnMissionStatusChanged
	// void OnMissionStatusChanged(class UMFMissionFlowComponent* InInstigator, EMissionStatus NewStatus, EMissionStatus OldStatus); // [0x4de5c78] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.IsValidMission
	// bool IsValidMission();                                                                                                   // [0x4de5c54] Final|Native|Public|Const 
	// Function /Script/MFMission.MFMissionFlowNode.IsCustomName
	// bool IsCustomName();                                                                                                     // [0x4de5c3c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.HasPrevConnection
	// bool HasPrevConnection();                                                                                                // [0x4de5a10] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetVariableOwnedMissionFlow
	// class UMFMissionFlow* GetVariableOwnedMissionFlow();                                                                     // [0x4de59ec] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetSucceedConnections
	// TArray<UMFMissionFlowNode*> GetSucceedConnections();                                                                     // [0x4de58c8] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetPrevConnections
	// TArray<UMFMissionFlowNode*> GetPrevConnections();                                                                        // [0x4de559c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetParentNode
	// class UMFMissionFlowNode* GetParentNode();                                                                               // [0x4de550c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetOwnMissionFlow
	// class UMFMissionFlow* GetOwnMissionFlow();                                                                               // [0x4de54e4] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.GetObjective
	// class UMFMissionObjective* GetObjective();                                                                               // [0x4de54cc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetNodeMissionStatus
	// EMissionStatus GetNodeMissionStatus(class UMFMissionFlowComponent* InInstigator);                                        // [0x4de541c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.GetMissionName
	// FString GetMissionName();                                                                                                // [0x4de5330] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetMissionFlowNodeInfo
	// FString GetMissionFlowNodeInfo();                                                                                        // [0x4de5244] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetMissionFlowName
	// FString GetMissionFlowName();                                                                                            // [0x4de5158] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetMissionFlow
	// class UMFMissionFlow* GetMissionFlow();                                                                                  // [0x4c1f12c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetFailedConnections
	// TArray<UMFMissionFlowNode*> GetFailedConnections();                                                                      // [0x4de5034] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.GetDataType
	// EMissionDataType GetDataType();                                                                                          // [0x4de5014] Final|Native|Public|Const 
	// Function /Script/MFMission.MFMissionFlowNode.ExecuteNode
	// bool ExecuteNode(class UMFMissionFlowComponent* InInstigator);                                                           // [0x4de4dac] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.EnableDeactivatePrev
	// bool EnableDeactivatePrev(class UMFMissionFlowComponent* InInstigator);                                                  // [0x4de4cfc] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.EnableActivate
	// bool EnableActivate(class UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus);                        // [0x4de4bfc] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.DestroyNode
	// void DestroyNode();                                                                                                      // [0x2273b00] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.DeactivatePrevNode
	// void DeactivatePrevNode(class UMFMissionFlowComponent* InInstigator, EMissionStatus& InMissionStatus);                   // [0x4de4b08] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowNode.DeactivatePrevConnections
	// void DeactivatePrevConnections(class UMFMissionFlowComponent* InInstigator, EMissionStatus& InMissionStatus, TArray<UMFMissionFlowNode*>& PrevNodeList); // [0x4de49a8] Native|Protected|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowNode.DeactivateNode
	// void DeactivateNode(class UMFMissionFlowComponent* InInstigator, EMissionStatus& InMissionStatus);                       // [0x4de48b4] Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowNode.DeactivateNextConnections
	// void DeactivateNextConnections(class UMFMissionFlowComponent* InInstigator, EMissionStatus& InMissionStatus, TArray<UMFMissionFlowNode*>& NextNodeList); // [0x4de46bc] Native|Protected|HasOutParms 
	// Function /Script/MFMission.MFMissionFlowNode.AddPrevConnection
	// void AddPrevConnection(class UMFMissionFlowNode* InNode, char InConnectionType);                                         // [0x4de4510] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.AddNextConnection
	// void AddNextConnection(class UMFMissionFlowNode* InNode, char InConnectionType);                                         // [0x4de436c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode.ActivateNode
	// void ActivateNode(class UMFMissionFlowComponent* InInstigator, EMissionStatus ActivatorStatus);                          // [0x4de418c] Native|Public        
	// Function /Script/MFMission.MFMissionFlowNode.ActivateNextConnections
	// void ActivateNextConnections(class UMFMissionFlowComponent* InInstigator, EMissionStatus& InMissionStatus, TArray<UMFMissionFlowNode*>& NextNodeList); // [0x4de402c] Native|Protected|HasOutParms 
};

/// Class /Script/MFMission.MFMissionFlowNode_Affiliate
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_Affiliate : public UMFMissionFlowNode
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_Composite
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_Composite : public UMFMissionFlowNode
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_And
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_And : public UMFMissionFlowNode_Composite
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_Assemble
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UMFMissionFlowNode_Assemble : public UMFMissionFlowNode
{ 
public:
	TArray<class UMFMissionFlowNode_Affiliate*>        AffiliateNodeList;                                          // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/MFMission.MFMissionFlowNode_Assemble.GetAffiliateNodes
	// void GetAffiliateNodes(TArray<UMFMissionFlowNode_Affiliate*>& OutAffiliateNodeList);                                     // [0x4de4eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFMission.MFMissionFlowNode_Assemble.GetAffiliateNodeList
	// TArray<UMFMissionFlowNode_Affiliate*> GetAffiliateNodeList();                                                            // [0x4de4e5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMission.MFMissionFlowNode_Assemble.AddAffiliateNode
	// void AddAffiliateNode(class UMFMissionFlowNode_Affiliate* InMissionFlowNode);                                            // [0x4de4278] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFMission.MFMissionFlowNode_End
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_End : public UMFMissionFlowNode
{ 
public:
};

/// Struct /Script/MFMission.MFMissionFlowVariableKeySelector
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMFMissionFlowVariableKeySelector
{ 
	TArray<class UMFMissionFlowVariableKeyType*>       AllowedTypes;                                               // 0x0000   (0x0010)  
	FName                                              SelectedKeyName;                                            // 0x0010   (0x0008)  
	class UClass*                                      SelectedKeyType;                                            // 0x0018   (0x0008)  
	char                                               SelectedKeyID;                                              // 0x0020   (0x0001)  
	bool                                               bNoneIsAllowedValue;                                        // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Class /Script/MFMission.MFMissionFlowNode_Variable
/// Size: 0x0138 (312 bytes) (0x0000D8 - 0x000138) align 8 MaxSize: 0x0138
class UMFMissionFlowNode_Variable : public UMFMissionFlowNode
{ 
public:
	FMemberReference                                   VariableReference;                                          // 0x00D8   (0x0038)  
	FMFMissionFlowVariableKeySelector                  VariableKey;                                                // 0x0110   (0x0028)  
};

/// Class /Script/MFMission.MFMissionFlowNode_IntVariable
/// Size: 0x0140 (320 bytes) (0x000138 - 0x000140) align 8 MaxSize: 0x0140
class UMFMissionFlowNode_IntVariable : public UMFMissionFlowNode_Variable
{ 
public:
	int64_t                                            Value;                                                      // 0x0138   (0x0008)  
};

/// Class /Script/MFMission.MFMissionFlowNode_MakeContainer
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_MakeContainer : public UMFMissionFlowNode
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_MakeArray
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_MakeArray : public UMFMissionFlowNode_MakeContainer
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_Mission
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_Mission : public UMFMissionFlowNode
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_MissionFlow
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMFMissionFlowNode_MissionFlow : public UMFMissionFlowNode
{ 
public:
	class UMFMissionFlow*                              OwnMissionFlow;                                             // 0x00D8   (0x0008)  
};

/// Class /Script/MFMission.MFMissionFlowNode_MultipleGates
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMFMissionFlowNode_MultipleGates : public UMFMissionFlowNode_Composite
{ 
public:
	bool                                               bOnlySuccessedCanOpenGate;                                  // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            SuccessedNumToOpen;                                         // 0x00DC   (0x0004)  
};

/// Class /Script/MFMission.MFMissionFlowNode_ObjectVariable
/// Size: 0x0140 (320 bytes) (0x000138 - 0x000140) align 8 MaxSize: 0x0140
class UMFMissionFlowNode_ObjectVariable : public UMFMissionFlowNode_Variable
{ 
public:
	class UObject*                                     Value;                                                      // 0x0138   (0x0008)  
};

/// Class /Script/MFMission.MFMissionFlowNode_Or
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_Or : public UMFMissionFlowNode_Composite
{ 
public:
};

/// Struct /Script/MFMission.MissionFlowConnectionWeight
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMissionFlowConnectionWeight
{ 
	char                                               Index;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Weight;                                                     // 0x0004   (0x0004)  
};

/// Class /Script/MFMission.MFMissionFlowNode_Random
/// Size: 0x00F0 (240 bytes) (0x0000D8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UMFMissionFlowNode_Random : public UMFMissionFlowNode
{ 
public:
	TArray<FMissionFlowConnectionWeight>               NextConnectionWeights;                                      // 0x00D8   (0x0010)  
	char                                               RandomTimes;                                                // 0x00E8   (0x0001)  
	char                                               MaxRandomTimes;                                             // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00EA   (0x0006)  MISSED


	/// Functions
	// Function /Script/MFMission.MFMissionFlowNode_Random.SetDebugIndex
	// void SetDebugIndex(int32_t Index);                                                                                       // [0x4de5f34] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode_Random.InsertNextConnection
	// void InsertNextConnection(char InIndex, class UMFMissionFlowNode* InNode);                                               // [0x4de5a28] Final|Native|Public  
	// Function /Script/MFMission.MFMissionFlowNode_Random.GetRandomConnections
	// TArray<UMFMissionFlowNode*> GetRandomConnections(FMissionFlowConnections& InConnections);                                // [0x4de56c0] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFMission.MFMissionFlowNode_RotatorVariable
/// Size: 0x0148 (328 bytes) (0x000138 - 0x000148) align 8 MaxSize: 0x0148
class UMFMissionFlowNode_RotatorVariable : public UMFMissionFlowNode_Variable
{ 
public:
	FRotator                                           Value;                                                      // 0x0138   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Class /Script/MFMission.MFMissionFlowNode_Start
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMFMissionFlowNode_Start : public UMFMissionFlowNode
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_StringVariable
/// Size: 0x0148 (328 bytes) (0x000138 - 0x000148) align 8 MaxSize: 0x0148
class UMFMissionFlowNode_StringVariable : public UMFMissionFlowNode_Variable
{ 
public:
	FString                                            Value;                                                      // 0x0138   (0x0010)  
};

/// Class /Script/MFMission.MFMissionFlowNode_VariableGet
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UMFMissionFlowNode_VariableGet : public UMFMissionFlowNode_Variable
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_VariableSet
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UMFMissionFlowNode_VariableSet : public UMFMissionFlowNode_Variable
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowNode_VectorVariable
/// Size: 0x0148 (328 bytes) (0x000138 - 0x000148) align 8 MaxSize: 0x0148
class UMFMissionFlowNode_VectorVariable : public UMFMissionFlowNode_Variable
{ 
public:
	FVector                                            Value;                                                      // 0x0138   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Class /Script/MFMission.MFMissionFlowVariableAssetProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFMissionFlowVariableAssetProvider : public UInterface
{ 
public:
};

/// Struct /Script/MFMission.MFMissionFlowVariableEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFMissionFlowVariableEntry
{ 
	FName                                              EntryName;                                                  // 0x0000   (0x0008)  
	class UMFMissionFlowVariableKeyType*               KeyType;                                                    // 0x0008   (0x0008)  
	bool                                               bInstanceSynced : 1;                                        // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              Category;                                                   // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/MFMission.MFMissionFlowVariableData
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UMFMissionFlowVariableData : public UDataAsset
{ 
public:
	class UMFMissionFlowVariableData*                  Parent;                                                     // 0x0030   (0x0008)  
	TArray<FMFMissionFlowVariableEntry>                Keys;                                                       // 0x0038   (0x0010)  
	bool                                               bHasSynchronizedKeys : 1;                                   // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/MFMission.MFMissionFlowVariableKeyType
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFMissionFlowVariableKeyType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MFMission.MFMissionVariableWriteBase
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UMFMissionVariableWriteBase : public UObject
{ 
public:
	FMFMissionFlowVariableKeySelector                  Key;                                                        // 0x0028   (0x0028)  


	/// Functions
	// Function /Script/MFMission.MFMissionVariableWriteBase.Write
	// void Write(class UMFMissionFlowComponent* Instigator);                                                                   // [0x4de845c] Native|Public        
	// Function /Script/MFMission.MFMissionVariableWriteBase.GetOuterNode
	// class UMFMissionFlowNode* GetOuterNode();                                                                                // [0x4de7f18] Final|Native|Public  
};

/// Class /Script/MFMission.MFMissionFlowVariableKeyType_Int
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UMFMissionFlowVariableKeyType_Int : public UMFMissionFlowVariableKeyType
{ 
public:
	int32_t                                            DefaultValue;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/MFMission.MFMissionVariableWrite_Int
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UMFMissionVariableWrite_Int : public UMFMissionVariableWriteBase
{ 
public:
	int32_t                                            Value;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/MFMission.MFMissionFlowVariableKeyType_Object
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UMFMissionFlowVariableKeyType_Object : public UMFMissionFlowVariableKeyType
{ 
public:
	class UClass*                                      BaseClass;                                                  // 0x0030   (0x0008)  
	class UObject*                                     DefaultValue;                                               // 0x0038   (0x0008)  
};

/// Class /Script/MFMission.MFMissionVariableWrite_Object
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UMFMissionVariableWrite_Object : public UMFMissionVariableWriteBase
{ 
public:
	class UObject*                                     Value;                                                      // 0x0050   (0x0008)  
};

/// Class /Script/MFMission.MFMissionFlowVariableKeyType_Rotator
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMFMissionFlowVariableKeyType_Rotator : public UMFMissionFlowVariableKeyType
{ 
public:
};

/// Class /Script/MFMission.MFMissionVariableWrite_Rotator
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UMFMissionVariableWrite_Rotator : public UMFMissionVariableWriteBase
{ 
public:
	FRotator                                           Value;                                                      // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/MFMission.MFMissionFlowVariableKeyType_String
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UMFMissionFlowVariableKeyType_String : public UMFMissionFlowVariableKeyType
{ 
public:
	FString                                            DefaultValue;                                               // 0x0030   (0x0010)  
	FString                                            StringValue;                                                // 0x0040   (0x0010)  
};

/// Class /Script/MFMission.MFMissionVariableWrite_String
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UMFMissionVariableWrite_String : public UMFMissionVariableWriteBase
{ 
public:
	FString                                            Value;                                                      // 0x0050   (0x0010)  
};

/// Class /Script/MFMission.MFMissionFlowVariableKeyType_StringArray
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UMFMissionFlowVariableKeyType_StringArray : public UMFMissionFlowVariableKeyType
{ 
public:
	TArray<FString>                                    DefaultValue;                                               // 0x0030   (0x0010)  
	TArray<FString>                                    StringValues;                                               // 0x0040   (0x0010)  
};

/// Class /Script/MFMission.MFMissionVariableWrite_StringArray
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UMFMissionVariableWrite_StringArray : public UMFMissionVariableWriteBase
{ 
public:
};

/// Class /Script/MFMission.MFMissionFlowVariableKeyType_Vector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMFMissionFlowVariableKeyType_Vector : public UMFMissionFlowVariableKeyType
{ 
public:
};

/// Class /Script/MFMission.MFMissionVariableWrite_Vector
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UMFMissionVariableWrite_Vector : public UMFMissionVariableWriteBase
{ 
public:
	FVector                                            Value;                                                      // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/MFMission.MissionObjectiveConditionContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMissionObjectiveConditionContainer
{ 
	SDK_UNDEFINED(1,1506) /* EMissionObjectiveConditionCheckType */ __um(CheckType);                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<class UMFMissionCondition*>                 Conditions;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/MFMission.MissionObjectiveCheckConditions
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMissionObjectiveCheckConditions
{ 
	SDK_UNDEFINED(1,1507) /* EMissionHelpType */       __um(HelpType);                                             // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1508) /* EMissionCompareType */    __um(CompareType);                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            BeginProgress;                                              // 0x0004   (0x0004)  
	int32_t                                            EndProgress;                                                // 0x0008   (0x0004)  
	int32_t                                            ProgressUnit;                                               // 0x000C   (0x0004)  
	int32_t                                            ProgressFactor;                                             // 0x0010   (0x0004)  
	bool                                               bNeedReportProgress;                                        // 0x0014   (0x0001)  
	bool                                               bNeedReport;                                                // 0x0015   (0x0001)  
	bool                                               bReachEndNotComplete;                                       // 0x0016   (0x0001)  
	bool                                               bActivateReachEndComplete;                                  // 0x0017   (0x0001)  
	int32_t                                            OneBattleMaxAddProgress;                                    // 0x0018   (0x0004)  
	bool                                               bFailWhenAchieved;                                          // 0x001C   (0x0001)  
	SDK_UNDEFINED(1,1509) /* EMissionObjectiveConditionCheckType */ __um(CheckType);                               // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001E   (0x0002)  MISSED
	TArray<FMissionObjectiveConditionContainer>        ConditionContainers;                                        // 0x0020   (0x0010)  
	TArray<class UMFMissionAction*>                    ProgressActions;                                            // 0x0030   (0x0010)  
	TArray<class UMFMissionAction*>                    SuccessActions;                                             // 0x0040   (0x0010)  
	TArray<class UMFMissionAction*>                    FailedActions;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/MFMission.MissionObjectivePreConditions
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMissionObjectivePreConditions
{ 
	SDK_UNDEFINED(1,1510) /* EMissionObjectiveConditionCheckType */ __um(CheckType);                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FMissionObjectiveConditionContainer>        ConditionContainers;                                        // 0x0008   (0x0010)  
	TArray<class UMFMissionAction*>                    ActivateActions;                                            // 0x0018   (0x0010)  
};

/// Class /Script/MFMission.MFMissionObjective
/// Size: 0x0118 (280 bytes) (0x000038 - 0x000118) align 8 MaxSize: 0x0118
class UMFMissionObjective : public UMFMissionNode
{ 
public:
	SDK_UNDEFINED(1,1511) /* EMissionDataType */       __um(InstigatorType);                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FMissionObjectiveCheckConditions                   CheckConditions;                                            // 0x0040   (0x0060)  
	FMissionObjectivePreConditions                     PreConditions;                                              // 0x00A0   (0x0028)  
	SDK_UNDEFINED(80,1512) /* TMap<TWeakObjectPtr<UMFMissionFlowComponent*>, EMissionStatus> */ __um(InstigatorStatus); // 0x00C8   (0x0050)  


	/// Functions
	// Function /Script/MFMission.MFMissionObjective.SetHelpType
	// void SetHelpType(EMissionHelpType InHelpType);                                                                           // [0x4de82c0] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.IsReachEndNotComplete
	// bool IsReachEndNotComplete();                                                                                            // [0x4de8044] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.IsNeedReportProgress
	// bool IsNeedReportProgress();                                                                                             // [0x4de8030] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.IsNeedReport
	// bool IsNeedReport();                                                                                                     // [0x4de801c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.IsFailWhenAchieved
	// bool IsFailWhenAchieved();                                                                                               // [0x4de8008] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.IsActivateReachEndComplete
	// bool IsActivateReachEndComplete();                                                                                       // [0x4de7ff4] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.GetProgressUnit
	// int32_t GetProgressUnit();                                                                                               // [0x29adf78] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.GetProgressFactor
	// int32_t GetProgressFactor();                                                                                             // [0x29adc9c] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.GetOneBattleMaxAddProgress
	// int32_t GetOneBattleMaxAddProgress();                                                                                    // [0x29adbb8] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.GetHelpType
	// EMissionHelpType GetHelpType();                                                                                          // [0x4de7ad0] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.GetEndProgress
	// int32_t GetEndProgress();                                                                                                // [0x29adbcc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.GetCompareType
	// EMissionCompareType GetCompareType();                                                                                    // [0x4de72dc] Final|Native|Public  
	// Function /Script/MFMission.MFMissionObjective.GetBeginProgress
	// int32_t GetBeginProgress();                                                                                              // [0x29adc58] Final|Native|Public  
};

/// Class /Script/MFMission.MFMissionStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFMissionStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFMission.MFMissionStatics.GetMissionFlowComponent
	// class UMFMissionFlowComponent* GetMissionFlowComponent(class AActor* Actor);                                             // [0x4de7ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFMission.MFMissionStatics.GetMissionDataComponent
	// class UMFMissionDataComponent* GetMissionDataComponent(class AActor* Actor);                                             // [0x4de7ae4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFMission.MFMissionStatics.GetCompareResultExp
	// bool GetCompareResultExp(EMissionCompareType CompareType, int64_t CheckNum, int64_t Value1, int64_t Value2, int64_t Value3); // [0x4de7090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFMission.MFMissionStatics.GetCompareResult
	// bool GetCompareResult(EMissionCompareType CompareType, int64_t CheckNum, int64_t Value1, int64_t Value2);                // [0x4de6f10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFMission.MFMissionSubsystem
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UMFMissionSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(80,1513) /* TMap<TWeakObjectPtr<UMFMissionFlow*>, class UMFMissionFlow*> */ __um(MissionFlowObjectMap); // 0x0038   (0x0050)  


	/// Functions
	// Function /Script/MFMission.MFMissionSubsystem.TestMissionFlowEvent__DelegateSignature
	// void TestMissionFlowEvent__DelegateSignature(FString MissionFlowName);                                                   // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFMission.MFMissionSubsystem.GetDebugMissionFlowNodeInfos
	// void GetDebugMissionFlowNodeInfos(class UMFMissionFlowComponent* InMissionFlowComponent, class UMFMissionFlowNode* InMissionFlowNode, FMFMissionFlowNodeInstanceData& NodeInstanceData, FString& OutMissionFlowInfo); // [0x4de78e0] Final|Native|Public|HasOutParms 
	// Function /Script/MFMission.MFMissionSubsystem.GetDebugMissionFlowInfo
	// void GetDebugMissionFlowInfo(class UMFMissionFlowComponent* InMissionFlowComponent, class UMFMissionFlow* InMissionFlow, FString& OutMissionFlowInfo, bool bShowNodeInfo); // [0x4de72f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFMission.MissionFlowTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMissionFlowTypes : public UObject
{ 
public:
};

/// Struct /Script/MFMission.MissionFlowData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMissionFlowData
{ 
	FString                                            MissionFlowName;                                            // 0x0000   (0x0010)  
	FText                                              MissionDesc;                                                // 0x0010   (0x0018)  
	TArray<FMissionTaskID>                             MissionTaskIDs;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/MFMission.MFMissionVariableReadBase
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMFMissionVariableReadBase
{ 
	FMFMissionFlowVariableKeySelector                  Key;                                                        // 0x0000   (0x0028)  
};

/// Struct /Script/MFMission.MFMissionVariableRead_Int
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FMFMissionVariableRead_Int : FMFMissionVariableReadBase
{ 
	int32_t                                            ConfigValue;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/MFMission.MFMissionVariableRead_Object
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FMFMissionVariableRead_Object : FMFMissionVariableReadBase
{ 
	class UObject*                                     ConfigValue;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/MFMission.MFMissionVariableRead_Rotator
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FMFMissionVariableRead_Rotator : FMFMissionVariableReadBase
{ 
	FRotator                                           ConfigValue;                                                // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/MFMission.MFMissionVariableRead_String
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FMFMissionVariableRead_String : FMFMissionVariableReadBase
{ 
	FString                                            ConfigValue;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/MFMission.MFMissionVariableRead_StringArray
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FMFMissionVariableRead_StringArray : FMFMissionVariableReadBase
{ 
	TArray<FString>                                    ConfigValue;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/MFMission.MFMissionVariableRead_Vector
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FMFMissionVariableRead_Vector : FMFMissionVariableReadBase
{ 
	FVector                                            ConfigValue;                                                // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/MFMission.MissionInstigatorInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMissionInstigatorInfo
{ 
	TArray<class UObject*>                             Instigators;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/MFMission.MFGlobalEventMessage_MissionSuccess
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FMFGlobalEventMessage_MissionSuccess
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/MFMission.MFGlobalEventMessage_MissionFailed
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FMFGlobalEventMessage_MissionFailed
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
};

/// Struct /Script/MFMission.MFGlobalEventMessage_MissionActivate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FMFGlobalEventMessage_MissionActivate
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UMFMission) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFMissionNode) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMFMissionAction) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UMFMissionCondition) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FMFMissionFlowInstanceData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMFMissionFlowNodeInstanceData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FMFMissionFlowReplicateData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFMissionReplicateData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMFMissionFlowVariableInstanceData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(UMFMissionDataComponent) == 0x0208); // 520 bytes (0x0000F8 - 0x000208)
static_assert(sizeof(UMFMissionDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMissionTaskID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UMFMissionFlow) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(FMFMissionFlowExecutingNodeConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UMFMissionFlowComponent) == 0x0240); // 576 bytes (0x0000F8 - 0x000240)
static_assert(sizeof(UMFMissionFlowInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMissionFlowConnection) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMissionFlowPrevConnection) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FMissionFlowConnections) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMFMissionFlowNode) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_Affiliate) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_Composite) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_And) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_Assemble) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UMFMissionFlowNode_End) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(FMFMissionFlowVariableKeySelector) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMFMissionFlowNode_Variable) == 0x0138); // 312 bytes (0x0000D8 - 0x000138)
static_assert(sizeof(UMFMissionFlowNode_IntVariable) == 0x0140); // 320 bytes (0x000138 - 0x000140)
static_assert(sizeof(UMFMissionFlowNode_MakeContainer) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_MakeArray) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_Mission) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_MissionFlow) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UMFMissionFlowNode_MultipleGates) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UMFMissionFlowNode_ObjectVariable) == 0x0140); // 320 bytes (0x000138 - 0x000140)
static_assert(sizeof(UMFMissionFlowNode_Or) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(FMissionFlowConnectionWeight) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UMFMissionFlowNode_Random) == 0x00F0); // 240 bytes (0x0000D8 - 0x0000F0)
static_assert(sizeof(UMFMissionFlowNode_RotatorVariable) == 0x0148); // 328 bytes (0x000138 - 0x000148)
static_assert(sizeof(UMFMissionFlowNode_Start) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UMFMissionFlowNode_StringVariable) == 0x0148); // 328 bytes (0x000138 - 0x000148)
static_assert(sizeof(UMFMissionFlowNode_VariableGet) == 0x0138); // 312 bytes (0x000138 - 0x000138)
static_assert(sizeof(UMFMissionFlowNode_VariableSet) == 0x0138); // 312 bytes (0x000138 - 0x000138)
static_assert(sizeof(UMFMissionFlowNode_VectorVariable) == 0x0148); // 328 bytes (0x000138 - 0x000148)
static_assert(sizeof(UMFMissionFlowVariableAssetProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMFMissionFlowVariableEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMFMissionFlowVariableData) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UMFMissionFlowVariableKeyType) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFMissionVariableWriteBase) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMFMissionFlowVariableKeyType_Int) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UMFMissionVariableWrite_Int) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UMFMissionFlowVariableKeyType_Object) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UMFMissionVariableWrite_Object) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UMFMissionFlowVariableKeyType_Rotator) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMFMissionVariableWrite_Rotator) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMFMissionFlowVariableKeyType_String) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UMFMissionVariableWrite_String) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UMFMissionFlowVariableKeyType_StringArray) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UMFMissionVariableWrite_StringArray) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UMFMissionFlowVariableKeyType_Vector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMFMissionVariableWrite_Vector) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FMissionObjectiveConditionContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMissionObjectiveCheckConditions) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FMissionObjectivePreConditions) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMFMissionObjective) == 0x0118); // 280 bytes (0x000038 - 0x000118)
static_assert(sizeof(UMFMissionStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFMissionSubsystem) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UMissionFlowTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMissionFlowData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMFMissionVariableReadBase) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMFMissionVariableRead_Int) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FMFMissionVariableRead_Object) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FMFMissionVariableRead_Rotator) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMFMissionVariableRead_String) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMFMissionVariableRead_StringArray) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMFMissionVariableRead_Vector) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FMissionInstigatorInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMFGlobalEventMessage_MissionSuccess) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMFGlobalEventMessage_MissionFailed) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMFGlobalEventMessage_MissionActivate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UMFMission, Objective) == 0x0028);
static_assert(offsetof(UMFMissionNode, MissionFlowNode) == 0x0028);
static_assert(offsetof(UMFMissionNode, InstigatorTag) == 0x0030);
static_assert(offsetof(UMFMissionAction, Objective) == 0x0038);
static_assert(offsetof(UMFMissionCondition, Objective) == 0x0038);
static_assert(offsetof(FMFMissionFlowInstanceData, Instigator) == 0x0000);
static_assert(offsetof(FMFMissionFlowInstanceData, MissionFlow) == 0x0008);
static_assert(offsetof(FMFMissionFlowInstanceData, LastTriggerCharacter) == 0x0018);
static_assert(offsetof(FMFMissionFlowNodeInstanceData, Instigator) == 0x0000);
static_assert(offsetof(FMFMissionFlowNodeInstanceData, MissionFlowNode) == 0x0008);
static_assert(offsetof(FMFMissionFlowNodeInstanceData, Objective) == 0x0018);
static_assert(offsetof(FMFMissionFlowReplicateData, Instigator) == 0x0000);
static_assert(offsetof(FMFMissionFlowReplicateData, MissionFlowName) == 0x0008);
static_assert(offsetof(FMFMissionReplicateData, Instigator) == 0x0000);
static_assert(offsetof(FMFMissionReplicateData, MissionName) == 0x0008);
static_assert(offsetof(FMFMissionReplicateData, MissionFlowName) == 0x0018);
static_assert(offsetof(FMFMissionReplicateData, AffiliateMissionList) == 0x0048);
static_assert(offsetof(FMFMissionFlowVariableInstanceData, DataComp) == 0x0000);
static_assert(offsetof(FMFMissionFlowVariableInstanceData, MissionFlow) == 0x0008);
static_assert(offsetof(FMFMissionFlowVariableInstanceData, VariableAsset) == 0x0010);
static_assert(offsetof(FMFMissionFlowVariableInstanceData, KeyInstances) == 0x0038);
static_assert(offsetof(UMFMissionDataComponent, MissionFlowReplicateDatas) == 0x0198);
static_assert(offsetof(UMFMissionDataComponent, MissionReplicateDatas) == 0x01A8);
static_assert(offsetof(UMFMissionFlow, WorldPrivate) == 0x0030);
static_assert(offsetof(UMFMissionFlow, StartNode) == 0x0038);
static_assert(offsetof(UMFMissionFlow, EndNode) == 0x0040);
static_assert(offsetof(UMFMissionFlow, NodeList) == 0x0048);
static_assert(offsetof(UMFMissionFlow, MissionFlowName) == 0x0060);
static_assert(offsetof(UMFMissionFlow, VariableAsset) == 0x0080);
static_assert(offsetof(UMFMissionFlow, MissionTaskIDs) == 0x0088);
static_assert(offsetof(UMFMissionFlow, MissionDesc) == 0x0098);
static_assert(offsetof(FMFMissionFlowExecutingNodeConfig, NodeList) == 0x0008);
static_assert(offsetof(UMFMissionFlowComponent, MissionFlowMap) == 0x0100);
static_assert(offsetof(UMFMissionFlowComponent, MissionFlowExecutingNodes) == 0x01F0);
static_assert(offsetof(FMissionFlowConnection, ConnectNode) == 0x0000);
static_assert(offsetof(FMissionFlowConnections, Connections) == 0x0000);
static_assert(offsetof(UMFMissionFlowNode, MissionFlowAsset) == 0x0028);
static_assert(offsetof(UMFMissionFlowNode, ParentNode) == 0x0030);
static_assert(offsetof(UMFMissionFlowNode, PrevConnections) == 0x0038);
static_assert(offsetof(UMFMissionFlowNode, NextConnectionsMap) == 0x0048);
static_assert(offsetof(UMFMissionFlowNode, MissionName) == 0x00A0);
static_assert(offsetof(UMFMissionFlowNode, Objective) == 0x00B0);
static_assert(offsetof(UMFMissionFlowNode, NodeName) == 0x00C0);
static_assert(offsetof(UMFMissionFlowNode_Assemble, AffiliateNodeList) == 0x00D8);
static_assert(offsetof(FMFMissionFlowVariableKeySelector, AllowedTypes) == 0x0000);
static_assert(offsetof(FMFMissionFlowVariableKeySelector, SelectedKeyName) == 0x0010);
static_assert(offsetof(FMFMissionFlowVariableKeySelector, SelectedKeyType) == 0x0018);
static_assert(offsetof(UMFMissionFlowNode_Variable, VariableReference) == 0x00D8);
static_assert(offsetof(UMFMissionFlowNode_Variable, VariableKey) == 0x0110);
static_assert(offsetof(UMFMissionFlowNode_MissionFlow, OwnMissionFlow) == 0x00D8);
static_assert(offsetof(UMFMissionFlowNode_ObjectVariable, Value) == 0x0138);
static_assert(offsetof(UMFMissionFlowNode_Random, NextConnectionWeights) == 0x00D8);
static_assert(offsetof(UMFMissionFlowNode_RotatorVariable, Value) == 0x0138);
static_assert(offsetof(UMFMissionFlowNode_StringVariable, Value) == 0x0138);
static_assert(offsetof(UMFMissionFlowNode_VectorVariable, Value) == 0x0138);
static_assert(offsetof(FMFMissionFlowVariableEntry, EntryName) == 0x0000);
static_assert(offsetof(FMFMissionFlowVariableEntry, KeyType) == 0x0008);
static_assert(offsetof(FMFMissionFlowVariableEntry, Category) == 0x0014);
static_assert(offsetof(UMFMissionFlowVariableData, Parent) == 0x0030);
static_assert(offsetof(UMFMissionFlowVariableData, Keys) == 0x0038);
static_assert(offsetof(UMFMissionVariableWriteBase, Key) == 0x0028);
static_assert(offsetof(UMFMissionFlowVariableKeyType_Object, BaseClass) == 0x0030);
static_assert(offsetof(UMFMissionFlowVariableKeyType_Object, DefaultValue) == 0x0038);
static_assert(offsetof(UMFMissionVariableWrite_Object, Value) == 0x0050);
static_assert(offsetof(UMFMissionVariableWrite_Rotator, Value) == 0x0050);
static_assert(offsetof(UMFMissionFlowVariableKeyType_String, DefaultValue) == 0x0030);
static_assert(offsetof(UMFMissionFlowVariableKeyType_String, StringValue) == 0x0040);
static_assert(offsetof(UMFMissionVariableWrite_String, Value) == 0x0050);
static_assert(offsetof(UMFMissionFlowVariableKeyType_StringArray, DefaultValue) == 0x0030);
static_assert(offsetof(UMFMissionFlowVariableKeyType_StringArray, StringValues) == 0x0040);
static_assert(offsetof(UMFMissionVariableWrite_Vector, Value) == 0x0050);
static_assert(offsetof(FMissionObjectiveConditionContainer, Conditions) == 0x0008);
static_assert(offsetof(FMissionObjectiveCheckConditions, ConditionContainers) == 0x0020);
static_assert(offsetof(FMissionObjectiveCheckConditions, ProgressActions) == 0x0030);
static_assert(offsetof(FMissionObjectiveCheckConditions, SuccessActions) == 0x0040);
static_assert(offsetof(FMissionObjectiveCheckConditions, FailedActions) == 0x0050);
static_assert(offsetof(FMissionObjectivePreConditions, ConditionContainers) == 0x0008);
static_assert(offsetof(FMissionObjectivePreConditions, ActivateActions) == 0x0018);
static_assert(offsetof(UMFMissionObjective, CheckConditions) == 0x0040);
static_assert(offsetof(UMFMissionObjective, PreConditions) == 0x00A0);
static_assert(offsetof(FMissionFlowData, MissionFlowName) == 0x0000);
static_assert(offsetof(FMissionFlowData, MissionDesc) == 0x0010);
static_assert(offsetof(FMissionFlowData, MissionTaskIDs) == 0x0028);
static_assert(offsetof(FMFMissionVariableReadBase, Key) == 0x0000);
static_assert(offsetof(FMFMissionVariableRead_Object, ConfigValue) == 0x0028);
static_assert(offsetof(FMFMissionVariableRead_Rotator, ConfigValue) == 0x0028);
static_assert(offsetof(FMFMissionVariableRead_String, ConfigValue) == 0x0028);
static_assert(offsetof(FMFMissionVariableRead_StringArray, ConfigValue) == 0x0028);
static_assert(offsetof(FMFMissionVariableRead_Vector, ConfigValue) == 0x0028);
static_assert(offsetof(FMissionInstigatorInfo, Instigators) == 0x0000);
static_assert(offsetof(FMFGlobalEventMessage_MissionSuccess, Instigator) == 0x0000);
static_assert(offsetof(FMFGlobalEventMessage_MissionFailed, Instigator) == 0x0000);
static_assert(offsetof(FMFGlobalEventMessage_MissionActivate, Instigator) == 0x0000);
