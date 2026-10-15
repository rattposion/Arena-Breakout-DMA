// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFReplaySystem.MFPCLocalFileKillCamComponent
/// Size: 0x0140 (320 bytes) (0x0000F8 - 0x000140) align 8 MaxSize: 0x0140
class UMFPCLocalFileKillCamComponent : public UActorComponent
{ 
public:
	int32_t                                            ClientCapWhenDownLoad;                                      // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x44];                                      // 0x00FC   (0x0044)  MISSED


	/// Functions
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.ServerDownloadReplayData
	// void ServerDownloadReplayData();                                                                                         // [0x29c3668] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.ServerAckReplayData
	// void ServerAckReplayData(FString ReplayName, int64_t TotalSize);                                                         // [0x60fa21c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.OnStartReceiveFile
	// void OnStartReceiveFile(FString InReplayFileName);                                                                       // [0x60f8c80] Native|Protected     
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.OnDownloadReplayDataComplete
	// void OnDownloadReplayDataComplete(FString InReplayFileName);                                                             // [0x60f8bc8] Native|Protected     
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.DownloadReplayData
	// void DownloadReplayData();                                                                                               // [0x53bb7a0] Native|Public        
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.DownloadExternalDataChunk
	// void DownloadExternalDataChunk(float EndDemoTime);                                                                       // [0x60f76b8] Final|Native|Protected 
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.ClientRecieveReplayData
	// void ClientRecieveReplayData(FString ReplayName, int64_t TotalSize, uint32_t StartPos, TArray<char> Datas, bool bLastRPC, uint32_t ChunkEndTimeMS); // [0x60f6a00] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/MFReplaySystem.MFPCLocalFileKillCamComponent.ClientNotifyReplayDownloadFailed
	// void ClientNotifyReplayDownloadFailed(FString ReplayName, FString ErrorInfo);                                            // [0x60f68e8] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/MFReplaySystem.DeleteReplayObject
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UDeleteReplayObject : public UObject
{ 
public:
	SDK_UNDEFINED(16,1649) /* FMulticastInlineDelegate */ __um(OnDeleteComplete);                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Class /Script/MFReplaySystem.GetSavedReplaysObject
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGetSavedReplaysObject : public UObject
{ 
public:
	SDK_UNDEFINED(16,1650) /* FMulticastInlineDelegate */ __um(OnGetReplaysComplete);                              // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Class /Script/MFReplaySystem.GoToTimeObject
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGoToTimeObject : public UObject
{ 
public:
	SDK_UNDEFINED(16,1651) /* FMulticastInlineDelegate */ __um(OnGotoTimeComplete);                                // 0x0028   (0x0010)  
	class UObject*                                     WCO;                                                        // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/MFReplaySystem.MFReplaySystemBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFReplaySystemBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.StopSpectating
	// void StopSpectating(class UObject* WorldContextObject, FBlendSettings BlendSettings);                                    // [0x60fa8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.StopRecordingReplay
	// void StopRecordingReplay(class UObject* WorldContextObject);                                                             // [0x60fa7dc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.SpectateActor
	// void SpectateActor(class UObject* WorldContextObject, class AActor* Actor, FBlendSettings BlendSettings);                // [0x60fa5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.SetReplaySavePath
	// void SetReplaySavePath(class UObject* WorldContextObject, FString Path);                                                 // [0x60fa4ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.SetPlaybackSpeed
	// void SetPlaybackSpeed(class UObject* WorldContextObject, float Speed);                                                   // [0x60fa408] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.SetMaxRecordHz
	// void SetMaxRecordHz(class UObject* WorldContextObject, float Hz);                                                        // [0x60fa324] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.ResumePlayback
	// void ResumePlayback(class UObject* WorldContextObject);                                                                  // [0x60fa0d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.RestartReplayPlayback
	// class UGoToTimeObject* RestartReplayPlayback(class UObject* WorldContextObject);                                         // [0x60fa00c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.RequestActiveReplayEvents
	// class URequestEventsObject* RequestActiveReplayEvents(class UObject* WorldContextObject, FString Group, int32_t UserIndex); // [0x60f9cf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.RenameReplayFriendly
	// class URenameReplayObject* RenameReplayFriendly(class UObject* WorldContextObject, FString ReplayName, FString NewFriendlyReplayName, int32_t UserIndex); // [0x60f9b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.RenameReplay
	// class URenameReplayObject* RenameReplay(class UObject* WorldContextObject, FString ReplayName, FString NewReplayName, int32_t UserIndex); // [0x60f9930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.RecordReplay
	// void RecordReplay(class UObject* WorldContextObject, FString ReplayName, FString ReplayFriendlyName);                    // [0x60f8ec4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.PlayRecordedReplay
	// bool PlayRecordedReplay(class UObject* WorldContextObject, FString ReplayName);                                          // [0x60f8dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.PausePlayback
	// void PausePlayback(class UObject* WorldContextObject);                                                                   // [0x60f8d38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.MsToSeconds
	// float MsToSeconds(int32_t ms);                                                                                           // [0x60f8b28] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.MFReplaySystemSampleFunction
	// float MFReplaySystemSampleFunction(float Param);                                                                         // [0x60f8a98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.IsReplayPlaybackPaused
	// bool IsReplayPlaybackPaused(class UObject* WorldContextObject);                                                          // [0x60f88f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.IsRecordingReplay
	// bool IsRecordingReplay(class UObject* WorldContextObject);                                                               // [0x60f885c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.IsPlayingReplay
	// bool IsPlayingReplay(class UObject* WorldContextObject);                                                                 // [0x60f87c4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GoToSpecificTime
	// class UGoToTimeObject* GoToSpecificTime(class UObject* WorldContextObject, float TimeToGoTo, bool bRetainCurrentPauseState); // [0x60f8690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetSavedReplays
	// class UGetSavedReplaysObject* GetSavedReplays(class UObject* WorldContextObject);                                        // [0x60f81d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetReplaySavePath
	// FString GetReplaySavePath(class UObject* WorldContextObject);                                                            // [0x60f7fb8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetReplayLength
	// float GetReplayLength(class UObject* WorldContextObject);                                                                // [0x60f7f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetPlaybackSpeed
	// float GetPlaybackSpeed(class UObject* WorldContextObject);                                                               // [0x60f7e88] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetMaxRecordHz
	// float GetMaxRecordHz();                                                                                                  // [0x60f7d94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetDemoDriver
	// class UDemoNetDriver* GetDemoDriver(class UObject* WorldContextObject);                                                  // [0x60f7a3c] Final|Native|Static|Public 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetCurrentReplayTime
	// float GetCurrentReplayTime(class UObject* WorldContextObject);                                                           // [0x60f79a4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.GetActiveReplayName
	// FString GetActiveReplayName(class UObject* WorldContextObject);                                                          // [0x60f7754] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.DeleteReplay
	// class UDeleteReplayObject* DeleteReplay(class UObject* WorldContextObject, FString ReplayName);                          // [0x60f6c88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.CreateReplayDataObject
	// class UReplayDataObject* CreateReplayDataObject();                                                                       // [0x60f6c5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.MFReplaySystemBPLibrary.AddEventToActiveReplay
	// bool AddEventToActiveReplay(class UObject* WorldContextObject, FString EventName, FString Group, class UReplayDataObject* DataObject); // [0x60f5c68] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFReplaySystem.MFReplayTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFReplayTypes : public UObject
{ 
public:
};

/// Class /Script/MFReplaySystem.RenameReplayObject
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class URenameReplayObject : public UObject
{ 
public:
	SDK_UNDEFINED(16,1652) /* FMulticastInlineDelegate */ __um(OnRenameComplete);                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayBoolData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReplayBoolData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	bool                                               Value;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayByteData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FReplayByteData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	TArray<char>                                       Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MFReplaySystem.ReplayIntData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReplayIntData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayInt64Data
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReplayInt64Data
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int64_t                                            Value;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/MFReplaySystem.ReplayFloatData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReplayFloatData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayNameData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReplayNameData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FName                                              Value;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/MFReplaySystem.ReplayStringData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FReplayStringData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/MFReplaySystem.ReplayTextData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FReplayTextData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FText                                              Value;                                                      // 0x0010   (0x0018)  
};

/// Struct /Script/MFReplaySystem.ReplayVectorData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FReplayVectorData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FVector                                            Value;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayRotatorData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FReplayRotatorData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FRotator                                           Value;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayTransformData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FReplayTransformData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
};

/// Class /Script/MFReplaySystem.ReplayDataObject
/// Size: 0x0208 (520 bytes) (0x000028 - 0x000208) align 8 MaxSize: 0x0208
class UReplayDataObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x130];                                     // 0x0028   (0x0130)  MISSED
	TArray<FReplayBoolData>                            BoolData;                                                   // 0x0158   (0x0010)  
	TArray<FReplayByteData>                            byteData;                                                   // 0x0168   (0x0010)  
	TArray<FReplayIntData>                             IntData;                                                    // 0x0178   (0x0010)  
	TArray<FReplayInt64Data>                           int64Data;                                                  // 0x0188   (0x0010)  
	TArray<FReplayFloatData>                           FloatData;                                                  // 0x0198   (0x0010)  
	TArray<FReplayNameData>                            nameData;                                                   // 0x01A8   (0x0010)  
	TArray<FReplayStringData>                          stringData;                                                 // 0x01B8   (0x0010)  
	TArray<FReplayTextData>                            textData;                                                   // 0x01C8   (0x0010)  
	TArray<FReplayVectorData>                          vectorData;                                                 // 0x01D8   (0x0010)  
	TArray<FReplayRotatorData>                         rotatorData;                                                // 0x01E8   (0x0010)  
	TArray<FReplayTransformData>                       transformData;                                              // 0x01F8   (0x0010)  


	/// Functions
	// Function /Script/MFReplaySystem.ReplayDataObject.SaveReplayMetaDataToString
	// FString SaveReplayMetaDataToString();                                                                                    // [0x60fa15c] Final|Native|Public  
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveVectorData
	// void RemoveVectorData(FString Name);                                                                                     // [0x60f987c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveTransformData
	// void RemoveTransformData(FString Name);                                                                                  // [0x60f97c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveTextData
	// void RemoveTextData(FString Name);                                                                                       // [0x60f96a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveStringData
	// void RemoveStringData(FString Name);                                                                                     // [0x60f95ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveRotatorData
	// void RemoveRotatorData(FString Name);                                                                                    // [0x60f9538] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveNameData
	// void RemoveNameData(FString Name);                                                                                       // [0x60f9484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveIntegerData
	// void RemoveIntegerData(FString Name);                                                                                    // [0x60f93d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveInteger64Data
	// void RemoveInteger64Data(FString Name);                                                                                  // [0x60f931c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveFloatData
	// void RemoveFloatData(FString Name);                                                                                      // [0x60f9268] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveByteData
	// void RemoveByteData(FString Name);                                                                                       // [0x60f9140] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.RemoveBooleanData
	// void RemoveBooleanData(FString Name);                                                                                    // [0x60f9018] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.LoadReplayMetaDataFromString
	// bool LoadReplayMetaDataFromString(FString StringDataToParse);                                                            // [0x60f89d4] Final|Native|Public  
	// Function /Script/MFReplaySystem.ReplayDataObject.GetVectorData
	// FVector GetVectorData(FString Name);                                                                                     // [0x60f8548] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetTransformData
	// FTransform GetTransformData(FString Name);                                                                               // [0x60f846c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetTextData
	// FText GetTextData(FString Name);                                                                                         // [0x60f8378] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetStringData
	// FString GetStringData(FString Name);                                                                                     // [0x60f829c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetRotatorData
	// FRotator GetRotatorData(FString Name);                                                                                   // [0x60f8104] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetNameData
	// FName GetNameData(FString Name);                                                                                         // [0x60f7dbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetIntegerData
	// int32_t GetIntegerData(FString Name);                                                                                    // [0x60f7c5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetInteger64Data
	// int64_t GetInteger64Data(FString Name);                                                                                  // [0x60f7b98] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetFloatData
	// float GetFloatData(FString Name);                                                                                        // [0x60f7ad4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetByteData
	// TArray<char> GetByteData(FString Name);                                                                                  // [0x60f78c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.GetBooleanData
	// bool GetBooleanData(FString Name);                                                                                       // [0x60f7804] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesVectorDataExist
	// int32_t DoesVectorDataExist(FString Name);                                                                               // [0x60f7580] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesTransformDataExist
	// int32_t DoesTransformDataExist(FString Name);                                                                            // [0x60f74bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesTextDataExist
	// int32_t DoesTextDataExist(FString Name);                                                                                 // [0x60f73f8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesStringDataExist
	// int32_t DoesStringDataExist(FString Name);                                                                               // [0x60f7334] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesRotatorDataExist
	// int32_t DoesRotatorDataExist(FString Name);                                                                              // [0x60f7334] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesNameDataExist
	// int32_t DoesNameDataExist(FString Name);                                                                                 // [0x60f7270] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesIntegerDataExist
	// int32_t DoesIntegerDataExist(FString Name);                                                                              // [0x60f7168] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesInteger64DataExist
	// int32_t DoesInteger64DataExist(FString Name);                                                                            // [0x60f70a4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesFloatDataExist
	// int32_t DoesFloatDataExist(FString Name);                                                                                // [0x60f6fe0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesByteDataExist
	// int32_t DoesByteDataExist(FString Name);                                                                                 // [0x60f6f1c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.DoesBooleanDataExist
	// int32_t DoesBooleanDataExist(FString Name);                                                                              // [0x60f6de4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddVectorData
	// void AddVectorData(FString Name, FVector Data);                                                                          // [0x60f67c8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddTransformData
	// void AddTransformData(FString Name, FTransform Data);                                                                    // [0x60f6660] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddTextData
	// void AddTextData(FString Name, FText Data);                                                                              // [0x60f6530] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddStringData
	// void AddStringData(FString Name, FString Data);                                                                          // [0x60f6400] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddRotatorData
	// void AddRotatorData(FString Name, FRotator Data);                                                                        // [0x60f62e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddNameData
	// void AddNameData(FString Name, FName Data);                                                                              // [0x60f61d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddIntegerData
	// void AddIntegerData(FString Name, int32_t Data);                                                                         // [0x60f60d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddInteger64Data
	// void AddInteger64Data(FString Name, int64_t Data);                                                                       // [0x60f5fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddFloatData
	// void AddFloatData(FString Name, float Data);                                                                             // [0x60f5ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddByteData
	// void AddByteData(FString Name, TArray<char> Data);                                                                       // [0x60f5b24] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFReplaySystem.ReplayDataObject.AddBooleanData
	// void AddBooleanData(FString Name, bool Data);                                                                            // [0x60f5a1c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFReplaySystem.ReplayInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FReplayInfo
{ 
	FString                                            FriendlyName;                                               // 0x0000   (0x0010)  
	FString                                            ActualName;                                                 // 0x0010   (0x0010)  
	FDateTime                                          RecordDate;                                                 // 0x0020   (0x0008)  
	int32_t                                            LengthInMS;                                                 // 0x0028   (0x0004)  
	float                                              SizeInMb;                                                   // 0x002C   (0x0004)  
};

/// Class /Script/MFReplaySystem.ReplayObject
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UReplayObject : public UObject
{ 
public:
	class UWorld*                                      World;                                                      // 0x0028   (0x0008)  
	FReplayInfo                                        ReplayInfo;                                                 // 0x0030   (0x0030)  
	SDK_UNDEFINED(16,1653) /* FMulticastInlineDelegate */ __um(OnRequestEventsComplete);                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/MFReplaySystem.ReplayObject.RequestEvents
	// void RequestEvents(FString Group, int32_t UserIndex);                                                                    // [0x60f9e88] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFReplaySystem.ReplayPlayerController
/// Size: 0x0680 (1664 bytes) (0x000678 - 0x000680) align 8 MaxSize: 0x0680
class AReplayPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0678   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFReplaySystem.ReplayPlayerController.OnTogglePause
	// void OnTogglePause(bool PauseState);                                                                                     // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFReplaySystem.ReplayPlayerController.OnStopSpectateActor
	// void OnStopSpectateActor();                                                                                              // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFReplaySystem.ReplayPlayerController.OnSpectateActor
	// void OnSpectateActor(class AActor* Actor);                                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFReplaySystem.ReplayPlayerController.OnGoToTime
	// void OnGoToTime(float CurrentTime);                                                                                      // [0x182d6bc] Event|Public|BlueprintEvent 
};

/// Class /Script/MFReplaySystem.RequestEventsObject
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class URequestEventsObject : public UObject
{ 
public:
	SDK_UNDEFINED(16,1654) /* FMulticastInlineDelegate */ __um(OnRequestEventsComplete);                           // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FReplayEvent
{ 
	FString                                            eventId;                                                    // 0x0000   (0x0010)  
	FString                                            Group;                                                      // 0x0010   (0x0010)  
	int32_t                                            TimeInMs;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UReplayDataObject*                           Data;                                                       // 0x0028   (0x0008)  
};

/// Struct /Script/MFReplaySystem.ReplayFragmentServerSendInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FReplayFragmentServerSendInfo
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/MFReplaySystem.ReplayObjectData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FReplayObjectData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	class UObject*                                     Value;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/MFReplaySystem.BlendSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FBlendSettings
{ 
	float                                              BlendTime;                                                  // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1655) /* TEnumAsByte<EViewTargetBlendFunction> */ __um(BlendFunction);                         // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              BlendExponent;                                              // 0x0008   (0x0004)  
	bool                                               bLockOutgoing;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMFPCLocalFileKillCamComponent) == 0x0140); // 320 bytes (0x0000F8 - 0x000140)
static_assert(sizeof(UDeleteReplayObject) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGetSavedReplaysObject) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGoToTimeObject) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMFReplaySystemBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFReplayTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URenameReplayObject) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FReplayBoolData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FReplayByteData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FReplayIntData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FReplayInt64Data) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FReplayFloatData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FReplayNameData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FReplayStringData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FReplayTextData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FReplayVectorData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FReplayRotatorData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FReplayTransformData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UReplayDataObject) == 0x0208); // 520 bytes (0x000028 - 0x000208)
static_assert(sizeof(FReplayInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UReplayObject) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(AReplayPlayerController) == 0x0680); // 1664 bytes (0x000678 - 0x000680)
static_assert(sizeof(URequestEventsObject) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FReplayEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FReplayFragmentServerSendInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FReplayObjectData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBlendSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UGoToTimeObject, WCO) == 0x0038);
static_assert(offsetof(FReplayBoolData, Name) == 0x0000);
static_assert(offsetof(FReplayByteData, Name) == 0x0000);
static_assert(offsetof(FReplayByteData, Value) == 0x0010);
static_assert(offsetof(FReplayIntData, Name) == 0x0000);
static_assert(offsetof(FReplayInt64Data, Name) == 0x0000);
static_assert(offsetof(FReplayFloatData, Name) == 0x0000);
static_assert(offsetof(FReplayNameData, Name) == 0x0000);
static_assert(offsetof(FReplayNameData, Value) == 0x0010);
static_assert(offsetof(FReplayStringData, Name) == 0x0000);
static_assert(offsetof(FReplayStringData, Value) == 0x0010);
static_assert(offsetof(FReplayTextData, Name) == 0x0000);
static_assert(offsetof(FReplayTextData, Value) == 0x0010);
static_assert(offsetof(FReplayVectorData, Name) == 0x0000);
static_assert(offsetof(FReplayVectorData, Value) == 0x0010);
static_assert(offsetof(FReplayRotatorData, Name) == 0x0000);
static_assert(offsetof(FReplayRotatorData, Value) == 0x0010);
static_assert(offsetof(FReplayTransformData, Name) == 0x0000);
static_assert(offsetof(FReplayTransformData, Value) == 0x0010);
static_assert(offsetof(UReplayDataObject, BoolData) == 0x0158);
static_assert(offsetof(UReplayDataObject, byteData) == 0x0168);
static_assert(offsetof(UReplayDataObject, IntData) == 0x0178);
static_assert(offsetof(UReplayDataObject, int64Data) == 0x0188);
static_assert(offsetof(UReplayDataObject, FloatData) == 0x0198);
static_assert(offsetof(UReplayDataObject, nameData) == 0x01A8);
static_assert(offsetof(UReplayDataObject, stringData) == 0x01B8);
static_assert(offsetof(UReplayDataObject, textData) == 0x01C8);
static_assert(offsetof(UReplayDataObject, vectorData) == 0x01D8);
static_assert(offsetof(UReplayDataObject, rotatorData) == 0x01E8);
static_assert(offsetof(UReplayDataObject, transformData) == 0x01F8);
static_assert(offsetof(FReplayInfo, FriendlyName) == 0x0000);
static_assert(offsetof(FReplayInfo, ActualName) == 0x0010);
static_assert(offsetof(FReplayInfo, RecordDate) == 0x0020);
static_assert(offsetof(UReplayObject, World) == 0x0028);
static_assert(offsetof(UReplayObject, ReplayInfo) == 0x0030);
static_assert(offsetof(FReplayEvent, eventId) == 0x0000);
static_assert(offsetof(FReplayEvent, Group) == 0x0010);
static_assert(offsetof(FReplayEvent, Data) == 0x0028);
static_assert(offsetof(FReplayObjectData, Name) == 0x0000);
static_assert(offsetof(FReplayObjectData, Value) == 0x0010);
