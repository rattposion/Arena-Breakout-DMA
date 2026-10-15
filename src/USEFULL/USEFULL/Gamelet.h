// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameletJsEnv
/// dependency: PixUI
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/Gamelet.Gamelet
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGamelet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED


	/// Functions
	// Function /Script/Gamelet.Gamelet.UpdateProductConfig
	// int32_t UpdateProductConfig();                                                                                           // [0x519038c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.StopTick
	// void StopTick();                                                                                                         // [0x29b1f18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.StartTick
	// void StartTick();                                                                                                        // [0x27c5554] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.SetTickIntervalSec
	// void SetTickIntervalSec(float TickIntervalSec);                                                                          // [0x519010c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.SetScriptExternalLoadDir
	// int32_t SetScriptExternalLoadDir(FString ExternalLoadDir);                                                               // [0x5190058] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.SetFont
	// int32_t SetFont(FString FontName, FString FontPath);                                                                     // [0x518fe88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.SetDefaultFont
	// int32_t SetDefaultFont(FString FontName);                                                                                // [0x518fd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.SetBuiltinResConfig
	// void SetBuiltinResConfig(FString ResConfig);                                                                             // [0x518fce8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/Gamelet.Gamelet.SetAppVisibility
	// int32_t SetAppVisibility(FString AppID, bool Visible);                                                                   // [0x518fbe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.SetAppPageVisibility
	// int32_t SetAppPageVisibility(FString AppID, FString AppPage, bool Visible);                                              // [0x518fa74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.SendMessageToSdk
	// int32_t SendMessageToSdk(FString Msg);                                                                                   // [0x518f96c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.SendMessageToApp
	// int32_t SendMessageToApp(FString AppID, FString Msg);                                                                    // [0x518f854] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.RefreshUserdata
	// int32_t RefreshUserdata(TMap<FString, FString>& UserData);                                                               // [0x518f2c4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.OpenBeforeLogin
	// int32_t OpenBeforeLogin(TEnumAsByte<EGameletEnvironment> Environment);                                                   // [0x518eac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.OpenApp
	// int32_t OpenApp(FString AppID, FString OpenArgs);                                                                        // [0x518e9a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.Open
	// int32_t Open(TEnumAsByte<EGameletEnvironment> Environment, TMap<FString, FString>& UserData);                            // [0x518e7d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.Initialize
	// int32_t Initialize(class UGameletSettings* Settings);                                                                    // [0x518d620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.GetProductConfig
	// FString GetProductConfig();                                                                                              // [0x518cd78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.GetGlobalSettings
	// class UGameletSettings* GetGlobalSettings();                                                                             // [0x518cac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.GetBackTrace
	// int32_t GetBackTrace(FString& TraceInfo);                                                                                // [0x518c604] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.Get
	// class UGamelet* Get();                                                                                                   // [0x518c598] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.ExecOnSDKMessage
	// int32_t ExecOnSDKMessage(FString Msg);                                                                                   // [0x518bf1c] Final|Native|Private 
	// Function /Script/Gamelet.Gamelet.ExecOnReportData
	// int32_t ExecOnReportData(FString EventName, FString Data);                                                               // [0x518bd4c] Final|Native|Private 
	// Function /Script/Gamelet.Gamelet.ExecOnRefreshUserdata
	// int32_t ExecOnRefreshUserdata();                                                                                         // [0x518bd28] Final|Native|Private 
	// Function /Script/Gamelet.Gamelet.EnableLog
	// void EnableLog(bool enable);                                                                                             // [0x518bca0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/Gamelet.Gamelet.Deinitialize
	// int32_t Deinitialize();                                                                                                  // [0x518b9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.CollectPixUILogOutput
	// void CollectPixUILogOutput(EPxLogGroups PixUILogType, EPxLogLevels PixUILogLevel, FString logContent);                   // [0x1549560] Final|Native|Private 
	// Function /Script/Gamelet.Gamelet.CloseAppPage
	// int32_t CloseAppPage(FString AppID, FString AppPage);                                                                    // [0x518b7c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.CloseApp
	// int32_t CloseApp(FString AppID);                                                                                         // [0x518b6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.Gamelet.Close
	// int32_t Close();                                                                                                         // [0x518b69c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Gamelet.Gamelet.AllAssetsGC
	// int32_t AllAssetsGC();                                                                                                   // [0x518b678] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Gamelet.GameletMatBrush
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGameletMatBrush : public UPixUIBrushWrapper
{ 
public:
	class UMaterialInstanceDynamic*                    MatInstance;                                                // 0x0038   (0x0008)  
};

/// Class /Script/Gamelet.GameletEnvMgr
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UGameletEnvMgr : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED


	/// Functions
	// Function /Script/Gamelet.GameletEnvMgr.OnEnvToGameMessage
	// int32_t OnEnvToGameMessage(FString Msg);                                                                                 // [0x518e210] Final|Native|Public  
	// Function /Script/Gamelet.GameletEnvMgr.OnEnvToEntryMessage
	// int32_t OnEnvToEntryMessage(FString Msg);                                                                                // [0x518e108] Final|Native|Public  
	// Function /Script/Gamelet.GameletEnvMgr.OnEnvReportData
	// int32_t OnEnvReportData(FString EventName, FString Data);                                                                // [0x518df64] Final|Native|Public|Const 
	// Function /Script/Gamelet.GameletEnvMgr.OnEnvRefreshUserdata
	// int32_t OnEnvRefreshUserdata();                                                                                          // [0x518df40] Final|Native|Public|Const 
	// Function /Script/Gamelet.GameletEnvMgr.OnEnvLoaded
	// void OnEnvLoaded(FString URL, int32_t ErrorCode);                                                                        // [0x518dcac] Final|Native|Public  
	// Function /Script/Gamelet.GameletEnvMgr.OnEnvInternalError
	// void OnEnvInternalError(int32_t ErrorCode, FString ErrorMsg);                                                            // [0x518dbb8] Final|Native|Public|Const 
	// Function /Script/Gamelet.GameletEnvMgr.GetBackTrace
	// FString GetBackTrace();                                                                                                  // [0x518c714] Final|Native|Public|Const 
};

/// Class /Script/Gamelet.GameletFile
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameletFile : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Gamelet.GameletFile.WriteFile
	// bool WriteFile(FString Path, FGameletArrayBuffer& ArrayBuffer);                                                          // [0x5190438] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Gamelet.GameletFile.SaveStringToFile
	// bool SaveStringToFile(FString Path, FString Content);                                                                    // [0x518f700] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.ReadFile
	// FGameletArrayBuffer ReadFile(FString Path);                                                                              // [0x518f1b8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.LoadFileToString
	// FString LoadFileToString(FString Path);                                                                                  // [0x518d7d8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.GetFileMd5
	// FString GetFileMd5(FString Path);                                                                                        // [0x518c908] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.FileSize
	// int64_t FileSize(FString Path);                                                                                          // [0x518c120] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.FileExists
	// bool FileExists(FString Path);                                                                                           // [0x518bff8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.DirectoryExists
	// bool DirectoryExists(FString Path);                                                                                      // [0x518bb74] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.DeleteFile
	// bool DeleteFile(FString Path);                                                                                           // [0x518baa4] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.DeleteDirectory
	// bool DeleteDirectory(FString Path);                                                                                      // [0x518b9d4] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletFile.CreateDirectory
	// bool CreateDirectory(FString Path);                                                                                      // [0x518b8e0] Final|Native|Static|Public 
};

/// Class /Script/Gamelet.GameletPaths
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameletPaths : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Gamelet.GameletPaths.ToAbsolutePathForWrite
	// FString ToAbsolutePathForWrite(FString Path);                                                                            // [0x51901a8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ToAbsolutePathForRead
	// FString ToAbsolutePathForRead(FString Path);                                                                             // [0x51901a8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.RootDir
	// FString RootDir();                                                                                                       // [0x518f614] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ProjectUserDir
	// FString ProjectUserDir();                                                                                                // [0x518f0cc] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ProjectSavedDir
	// FString ProjectSavedDir();                                                                                               // [0x518efd8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ProjectModsDir
	// FString ProjectModsDir();                                                                                                // [0x518eeec] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ProjectIntermediateDir
	// FString ProjectIntermediateDir();                                                                                        // [0x518ee00] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ProjectDir
	// FString ProjectDir();                                                                                                    // [0x518ed40] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ProjectContentDir
	// FString ProjectContentDir();                                                                                             // [0x518ec54] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.ProjectConfigDir
	// FString ProjectConfigDir();                                                                                              // [0x518eb68] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.LaunchDir
	// FString LaunchDir();                                                                                                     // [0x518d6ec] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GetPuertsScriptFolderName
	// FString GetPuertsScriptFolderName();                                                                                     // [0x518d084] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GetPuertsEntrancePath
	// FString GetPuertsEntrancePath(FString PakName);                                                                          // [0x518cfc8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GetPuertsAppScriptPath
	// FString GetPuertsAppScriptPath(FString AppFolderName);                                                                   // [0x518cf0c] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GetPuertsAppNameByPakName
	// FString GetPuertsAppNameByPakName(FString PakName);                                                                      // [0x518ce50] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GetPuertsAppIndexPath
	// FString GetPuertsAppIndexPath(FString AppFolderName);                                                                    // [0x518cd94] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GameletSavedRoot
	// FString GameletSavedRoot();                                                                                              // [0x518c4ac] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GameletFolderName
	// FString GameletFolderName();                                                                                             // [0x518c37c] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GameletContentRoot
	// FString GameletContentRoot();                                                                                            // [0x518c2bc] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPaths.GameletAppArchiveRoot
	// FString GameletAppArchiveRoot(FString AppID);                                                                            // [0x518c200] Final|Native|Static|Public 
};

/// Class /Script/Gamelet.GameletPuertsEnvMgr
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UGameletPuertsEnvMgr : public UObject
{ 
public:
	SDK_UNDEFINED(16,4906) /* FMulticastInlineDelegate */ __um(OnPostMessage);                                     // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0038   (0x0050)  MISSED


	/// Functions
	// Function /Script/Gamelet.GameletPuertsEnvMgr.OnEnvMessage
	// void OnEnvMessage(FString Msg);                                                                                          // [0x518dea0] Final|Native|Public  
	// Function /Script/Gamelet.GameletPuertsEnvMgr.OnEnvLoaded
	// void OnEnvLoaded(FString URL, bool IsSuccess);                                                                           // [0x518dda0] Final|Native|Public  
	// Function /Script/Gamelet.GameletPuertsEnvMgr.Get
	// class UGameletPuertsEnvMgr* Get();                                                                                       // [0x518c5bc] Final|Native|Static|Public 
};

/// Class /Script/Gamelet.GameletPuertsUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameletPuertsUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Gamelet.GameletPuertsUtilities.UpdateTextureResources
	// void UpdateTextureResources(class UTexture2D* Texture);                                                                  // [0x51903b0] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.UnmountPak
	// int32_t UnmountPak(FString PakPath);                                                                                     // [0x5190264] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.RemoveUserWidgetFromGame
	// void RemoveUserWidgetFromGame(class UUserWidget* UserWidget, FString PanelInfo);                                         // [0x518f4cc] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.ReleaseTextureResource
	// void ReleaseTextureResource(class UTexture2D* Texture);                                                                  // [0x518f448] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.MountPak
	// int32_t MountPak(FString PakPath);                                                                                       // [0x518db0c] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.LoadUI
	// class UUserWidget* LoadUI(FString Ref, class UObject* Obj);                                                              // [0x518da08] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.LoadImageToTexture2D
	// class UTexture2D* LoadImageToTexture2D(FString Path, TEnumAsByte<TextureGroup> LODGroup, char IsSRGB);                   // [0x518d8bc] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.IsWithEditor
	// bool IsWithEditor();                                                                                                     // [0x21793e8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.HelloWorld
	// void HelloWorld();                                                                                                       // [0x518d60c] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.GetWidgetAnimationByName
	// class UWidgetAnimation* GetWidgetAnimationByName(class UUserWidget* Widget, FString Name);                               // [0x518d2d4] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.GetSDKVersion
	// FString GetSDKVersion();                                                                                                 // [0x518d1c0] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.GetPlatformDesc
	// FString GetPlatformDesc();                                                                                               // [0x518cc40] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.GetNetworkType
	// char GetNetworkType();                                                                                                   // [0x21793e8] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.GetHardwareInfo
	// FString GetHardwareInfo();                                                                                               // [0x518cb54] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.GetEngineVersion
	// FString GetEngineVersion();                                                                                              // [0x518c800] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.FlushPuertsVMMessages
	// void FlushPuertsVMMessages();                                                                                            // [0x518c1ec] Final|Native|Static|Public 
	// Function /Script/Gamelet.GameletPuertsUtilities.AddUserWidgetToGame
	// void AddUserWidgetToGame(class UUserWidget* UserWidget, FString PanelInfo);                                              // [0x518b530] Final|Native|Static|Public 
};

/// Class /Script/Gamelet.GameletSettings
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UGameletSettings : public UObject
{ 
public:
	SDK_UNDEFINED(16,4907) /* FDelegateProperty */     __um(OnSDKMessage);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,4908) /* FDelegateProperty */     __um(OnRefreshUserdata);                                    // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,4909) /* FDelegateProperty */     __um(OnViewCreated);                                        // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,4910) /* FDelegateProperty */     __um(OnViewAboutToDestroy);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,4911) /* FDelegateProperty */     __um(OnReportData);                                         // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,4912) /* FDelegateProperty */     __um(OnProfileJSSDKMessage);                                // 0x0078   (0x0010)  
	bool                                               DisableJsErrReport;                                         // 0x0088   (0x0001)  
	bool                                               DisableGetBackTrace;                                        // 0x0089   (0x0001)  
	bool                                               DelayWndCallMsg;                                            // 0x008A   (0x0001)  
	bool                                               SupportUseEngineFont;                                       // 0x008B   (0x0001)  
	bool                                               UseSRGB;                                                    // 0x008C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x008D   (0x0003)  MISSED


	/// Functions
	// Function /Script/Gamelet.GameletSettings.IsValidSetting
	// bool IsValidSetting();                                                                                                   // [0x518d6c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Gamelet.GameletSettings.Get
	// class UGameletSettings* Get();                                                                                           // [0x518c5e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Gamelet.GameletWidget
/// Size: 0x0180 (384 bytes) (0x000158 - 0x000180) align 8 MaxSize: 0x0180
class UGameletWidget : public UCanvasPanel
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0158   (0x0028)  MISSED
};

/// Class /Script/Gamelet.GameletWindow
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class UGameletWindow : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0028   (0x0148)  MISSED


	/// Functions
	// Function /Script/Gamelet.GameletWindow.OnPxWidgetScriptStateInit
	// void OnPxWidgetScriptStateInit();                                                                                        // [0x518e7c0] Final|Native|Private 
	// Function /Script/Gamelet.GameletWindow.OnPxWidgetScriptStateDone
	// void OnPxWidgetScriptStateDone();                                                                                        // [0x518e7ac] Final|Native|Private 
	// Function /Script/Gamelet.GameletWindow.OnPxWidgetRequestOpen
	// bool OnPxWidgetRequestOpen(FString URL, FString Name, FString Features, bool bReplace);                                  // [0x518e5dc] Final|Native|Private|Const 
	// Function /Script/Gamelet.GameletWindow.OnPxWidgetMessage
	// void OnPxWidgetMessage(FString Msg);                                                                                     // [0x518e534] Final|Native|Private|Const 
	// Function /Script/Gamelet.GameletWindow.OnPxWidgetLoaded
	// void OnPxWidgetLoaded(FString URL, int32_t ErrorCode);                                                                   // [0x518e430] Final|Native|Private|Const 
	// Function /Script/Gamelet.GameletWindow.OnPxWidgetInternalError
	// void OnPxWidgetInternalError(int32_t ErrorCode, FString ErrorMsg);                                                       // [0x518e32c] Final|Native|Private|Const 
	// Function /Script/Gamelet.GameletWindow.OnPxWidgetClose
	// void OnPxWidgetClose();                                                                                                  // [0x518e318] Final|Native|Private|Const 
};

#pragma pack(pop)


static_assert(sizeof(UGamelet) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGameletMatBrush) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGameletEnvMgr) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UGameletFile) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameletPaths) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameletPuertsEnvMgr) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UGameletPuertsUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameletSettings) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UGameletWidget) == 0x0180); // 384 bytes (0x000158 - 0x000180)
static_assert(sizeof(UGameletWindow) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(offsetof(UGameletMatBrush, MatInstance) == 0x0038);
