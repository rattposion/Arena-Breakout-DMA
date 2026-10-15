// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/MFInputReplayTool.MFInputBaseComponent
/// Size: 0x0348 (840 bytes) (0x0000F8 - 0x000348) align 8 MaxSize: 0x0348
class UMFInputBaseComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0xF8];                                      // 0x00F8   (0x00F8)  MISSED
	class APlayerController*                           Controller;                                                 // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01F8   (0x0008)  MISSED
	class UMfInputControlGameInstanceSubsystem*        pGameInstanceSubsystem;                                     // 0x0200   (0x0008)  
	unsigned char                                      UnknownData02_6[0x130];                                     // 0x0208   (0x0130)  MISSED
	SDK_UNDEFINED(16,5113) /* FMulticastInlineDelegate */ __um(ComponentEventDelegate);                            // 0x0338   (0x0010)  


	/// Functions
	// Function /Script/MFInputReplayTool.MFInputBaseComponent.HandleInfoFromServer
	// void HandleInfoFromServer(FString RspContent);                                                                           // [0x540f7b8] Final|Native|Protected 
};

/// Class /Script/MFInputReplayTool.MfInputControlActor
/// Size: 0x0360 (864 bytes) (0x000318 - 0x000360) align 8 MaxSize: 0x0360
class AMfInputControlActor : public AActor
{ 
public:
	SDK_UNDEFINED(16,5114) /* FMulticastInlineDelegate */ __um(RecordEventDelegate);                               // 0x0318   (0x0010)  
	class UClass*                                      RecordReplayHudWidgetClass;                                 // 0x0328   (0x0008)  
	FSoftClassPath                                     SoftRecordReplayHudWidgetClassPath;                         // 0x0330   (0x0018)  
	class UUserWidget*                                 RecordReplayHudUserWidget;                                  // 0x0348   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0350   (0x0010)  MISSED


	/// Functions
	// Function /Script/MFInputReplayTool.MfInputControlActor.ProcessCommandSimple
	// void ProcessCommandSimple(FString Context);                                                                              // [0x54106cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputControlActor.ProcessCommand
	// void ProcessCommand(FString Type, FString arg, FString Arg2);                                                            // [0x5410528] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputControlActor.OnChangeRecordReplayState
	// void OnChangeRecordReplayState(FString Type);                                                                            // [0x5410480] Final|Native|Public  
};

/// Class /Script/MFInputReplayTool.MfInputControlGameInstanceSubsystem
/// Size: 0x00C0 (192 bytes) (0x000030 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMfInputControlGameInstanceSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0030   (0x0090)  MISSED
};

/// Class /Script/MFInputReplayTool.MfInputControlUtils
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMfInputControlUtils : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFInputReplayTool.MfInputControlUtils.GrabWidgetFeaturesFromTree
	// bool GrabWidgetFeaturesFromTree(FString& Ret);                                                                           // [0x540eddc] Final|Native|Public|HasOutParms 
	// Function /Script/MFInputReplayTool.MfInputControlUtils.GrabWidgetFeatures
	// bool GrabWidgetFeatures(FString& Ret);                                                                                   // [0x540ed08] Final|Native|Public|HasOutParms 
	// Function /Script/MFInputReplayTool.MfInputControlUtils.GetVersionDisplay
	// FString GetVersionDisplay();                                                                                             // [0x540ec1c] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputControlUtils.GetSimpleDeviceName
	// FString GetSimpleDeviceName();                                                                                           // [0x4dec008] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputControlUtils.GetDeviceName
	// FString GetDeviceName();                                                                                                 // [0x540eb5c] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputControlUtils.Get
	// class UMfInputControlUtils* Get();                                                                                       // [0x540eafc] Final|Native|Static|Public 
	// Function /Script/MFInputReplayTool.MfInputControlUtils.ExecDoString
	// FString ExecDoString(FString Funcparams);                                                                                // [0x540e820] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputControlUtils.CallGameInstance
	// FString CallGameInstance(FName& Funcname, FString Funcparams);                                                           // [0x540e600] Final|Native|Public|HasOutParms 
};

/// Class /Script/MFInputReplayTool.MfInputControlWorldSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMfInputControlWorldSubsystem : public UWorldSubsystem
{ 
public:
};

/// Class /Script/MFInputReplayTool.MfInputRecordComponent
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 8 MaxSize: 0x0350
class UMfInputRecordComponent : public UMFInputBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0348   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.StopRecord
	// void StopRecord();                                                                                                       // [0x5410e34] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.StartRecord
	// void StartRecord(FString _TestId, FString _DeviceId);                                                                    // [0x5410af8] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.RunUE4Command
	// bool RunUE4Command(FString Command);                                                                                     // [0x541087c] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.RunGrabUIFeature
	// bool RunGrabUIFeature(FString Command);                                                                                  // [0x5410774] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.HandleScrollEvent
	// void HandleScrollEvent(FString Type, FString Name, FVector2D& Pos, FVector2D& Size, FString OtherName, float Offset, float OffsetOfEnd); // [0x540fb64] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.HandlePureClickEvent
	// void HandlePureClickEvent(FString EventName, FString MoreValue);                                                         // [0x540fa34] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.HandleKeyBoardEvent
	// void HandleKeyBoardEvent(FString EventName, int32_t CharacterCode, int32_t KeyCode, FString MoreValue);                  // [0x540f86c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.HandleEndurance
	// void HandleEndurance();                                                                                                  // [0x540f7a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.HandleControllerEvent
	// void HandleControllerEvent(FString Type, FVector WorldDirection, float ScaleValue, bool bForce);                         // [0x540f48c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.HandleCharacterStateEvent
	// void HandleCharacterStateEvent(FVector& position, FRotator& Roation, FVector& Velocity, bool bSprint);                   // [0x540f26c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.HandleButtonEvent
	// void HandleButtonEvent(FString Type, FString Name, FVector2D& GeoPos, FVector2D& GeoSize, FVector2D& TouchPos, FString OtherName, FString MouseType); // [0x540eeec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.ExecDoString
	// bool ExecDoString(FString Command, FString& Ret);                                                                        // [0x540e9dc] Final|Native|Public|HasOutParms 
	// Function /Script/MFInputReplayTool.MfInputRecordComponent.AddTag
	// bool AddTag(FString Type, FString Value);                                                                                // [0x540e4e8] Final|Native|Public  
};

/// Class /Script/MFInputReplayTool.MfInputReplayComponent
/// Size: 0x0578 (1400 bytes) (0x000348 - 0x000578) align 8 MaxSize: 0x0578
class UMfInputReplayComponent : public UMFInputBaseComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x1E8];                                     // 0x0348   (0x01E8)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x0530   (0x0008)  
	FSoftClassPath                                     SoftHudWidgetClassPath;                                     // 0x0538   (0x0018)  
	class UUserWidget*                                 WidgetInstance;                                             // 0x0550   (0x0008)  
	class UCanvasPanelSlot*                            TouchCanvasPanelSlot;                                       // 0x0558   (0x0008)  
	class UImage*                                      TouchImage;                                                 // 0x0560   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0568   (0x0010)  MISSED


	/// Functions
	// Function /Script/MFInputReplayTool.MfInputReplayComponent.StopReplay2
	// void StopReplay2(int32_t Type);                                                                                          // [0x5410e48] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputReplayComponent.StopReplay
	// void StopReplay(int32_t Type);                                                                                           // [0x5410ee0] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputReplayComponent.StartReplay2
	// void StartReplay2(FString TestId, FString DeviceID);                                                                     // [0x5410c0c] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputReplayComponent.StartReplay
	// void StartReplay(FString TestId, FString DeviceID);                                                                      // [0x5410d20] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputReplayComponent.HandleStartReplayFromServer
	// void HandleStartReplayFromServer(FString RspContent);                                                                    // [0x540fea0] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputReplayComponent.HandleDownloadFromServer2
	// void HandleDownloadFromServer2(FString RspContent);                                                                      // [0x540f63c] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MfInputReplayComponent.HandleDownloadFromServer
	// void HandleDownloadFromServer(FString RspContent);                                                                       // [0x540f6f0] Final|Native|Public  
};

/// Class /Script/MFInputReplayTool.MftHttpTask
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMftHttpTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0028   (0x0080)  MISSED
	FString                                            ScreenNotifyName;                                           // 0x00A8   (0x0010)  
	FString                                            LuaNotifyName;                                              // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x00C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MFInputReplayTool.MftHttpTask.SendLogTask
	// void SendLogTask(FString URL, FString LogName, TMap<FString, FString>& Param);                                           // [0x5410930] Final|Native|Public|HasOutParms 
	// Function /Script/MFInputReplayTool.MftHttpTask.HttpUpLoadFileWithParams
	// bool HttpUpLoadFileWithParams(FString URL, FString FilePath, TMap<FString, FString> Params);                             // [0x541029c] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MftHttpTask.HttpUpLoadDelegate__DelegateSignature
	// void HttpUpLoadDelegate__DelegateSignature(FString RspContent);                                                          // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFInputReplayTool.MftHttpTask.HttpGetWithParams
	// void HttpGetWithParams(FString URL, TMap<FString, FString> Params);                                                      // [0x5410134] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MftHttpTask.HttpDownLoadRecordFileWithParams
	// void HttpDownLoadRecordFileWithParams(FString URL, FString Filename, TMap<FString, FString> Params);                     // [0x540ff54] Final|Native|Public  
	// Function /Script/MFInputReplayTool.MftHttpTask.Get
	// class UMftHttpTask* Get();                                                                                               // [0x540eb2c] Final|Native|Static|Public 
};

#pragma pack(pop)


static_assert(sizeof(UMFInputBaseComponent) == 0x0348); // 840 bytes (0x0000F8 - 0x000348)
static_assert(sizeof(AMfInputControlActor) == 0x0360); // 864 bytes (0x000318 - 0x000360)
static_assert(sizeof(UMfInputControlGameInstanceSubsystem) == 0x00C0); // 192 bytes (0x000030 - 0x0000C0)
static_assert(sizeof(UMfInputControlUtils) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMfInputControlWorldSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMfInputRecordComponent) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(UMfInputReplayComponent) == 0x0578); // 1400 bytes (0x000348 - 0x000578)
static_assert(sizeof(UMftHttpTask) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(offsetof(UMFInputBaseComponent, Controller) == 0x01F0);
static_assert(offsetof(UMFInputBaseComponent, pGameInstanceSubsystem) == 0x0200);
static_assert(offsetof(AMfInputControlActor, RecordReplayHudWidgetClass) == 0x0328);
static_assert(offsetof(AMfInputControlActor, SoftRecordReplayHudWidgetClassPath) == 0x0330);
static_assert(offsetof(AMfInputControlActor, RecordReplayHudUserWidget) == 0x0348);
static_assert(offsetof(UMfInputReplayComponent, WidgetClass) == 0x0530);
static_assert(offsetof(UMfInputReplayComponent, SoftHudWidgetClassPath) == 0x0538);
static_assert(offsetof(UMfInputReplayComponent, WidgetInstance) == 0x0550);
static_assert(offsetof(UMfInputReplayComponent, TouchCanvasPanelSlot) == 0x0558);
static_assert(offsetof(UMfInputReplayComponent, TouchImage) == 0x0560);
static_assert(offsetof(UMftHttpTask, ScreenNotifyName) == 0x00A8);
static_assert(offsetof(UMftHttpTask, LuaNotifyName) == 0x00B8);
