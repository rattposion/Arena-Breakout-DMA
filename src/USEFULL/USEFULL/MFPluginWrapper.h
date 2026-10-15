// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/MFPluginWrapper.HashChecker
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class UHashChecker : public UObject
{ 
public:
	SDK_UNDEFINED(16,1635) /* FMulticastInlineDelegate */ __um(OnHashCheckerEvent);                                // 0x0028   (0x0010)  
	TArray<FString>                                    RunningTasks;                                               // 0x0038   (0x0010)  
	TMap<FString, FString>                             CachedFileHash;                                             // 0x0048   (0x0050)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0098   (0x0030)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.HashChecker.XXHashString
	// FString XXHashString(FString InStr, int32_t InDisplayAsHex);                                                             // [0x512e670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.HashChecker.XorData
	// TArray<char> XorData(TArray<char>& InData, int32_t InKey);                                                               // [0x512e780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.HashChecker.SetHashDisplayMode
	// int32_t SetHashDisplayMode(int32_t InHexMode);                                                                           // [0x512e05c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.HashChecker.LoadXorFileToString
	// FString LoadXorFileToString(FString InFile, int32_t InKey);                                                              // [0x512b2f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.HashChecker.AsyncXXHashFileList
	// int32_t AsyncXXHashFileList(TArray<FString>& InFileList, FString InCustomParam);                                         // [0x5129b2c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFPWObject
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMFPWObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/MFPluginWrapper.MFPWPlugin
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFPWPlugin : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFACEPlugin
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFACEPlugin : public UMFPWPlugin
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFACEPlugin.ShouldForceQuit
	// bool ShouldForceQuit();                                                                                                  // [0x4de72dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFACEPlugin.LogOn
	// void LogOn(bool IsLoginSuccessful, FString PlayerId, int32_t ChannelID, FString ticket);                                 // [0x512b644] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFACEPlugin.LogOff
	// void LogOff();                                                                                                           // [0x512b60c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFACEPlugin.GetPlugin
	// class UMFACEPlugin* GetPlugin(class UObject* WorldContextObject);                                                        // [0x512a7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFACEPlugin.GetPbInitCode
	// int32_t GetPbInitCode();                                                                                                 // [0x29adc58] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudService
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudService : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFBoxService
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFBoxService : public UMFGCloudService
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFBoxService.OpenCommunity
	// bool OpenCommunity(FString URL);                                                                                         // [0x512c390] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFBoxService.OnBoxCallbackUnreal
	// void OnBoxCallbackUnreal(int32_t ClientType, FString Msg);                                                               // [0x512b9b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFBoxService.IsRunning
	// bool IsRunning();                                                                                                        // [0x21793e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFBoxService.InitCommunity
	// void InitCommunity(FString JsonString);                                                                                  // [0x512ab00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFComplianceService
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFComplianceService : public UMFGCloudService
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceSetUserProfile
	// bool ComplianceSetUserProfile(FString GameId, FString Openid, FString Token, int32_t ChannelID, FString Region);         // [0x512a26c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceSetParentCertificateStatus
	// void ComplianceSetParentCertificateStatus(int32_t status);                                                               // [0x512a1e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceSetEUAgreeStatus
	// void ComplianceSetEUAgreeStatus(int32_t status);                                                                         // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceSetAdulthood
	// void ComplianceSetAdulthood(int32_t status);                                                                             // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceSendEmail
	// void ComplianceSendEmail(FString Email, FString userName);                                                               // [0x4decfc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceQueryUserStatus
	// void ComplianceQueryUserStatus();                                                                                        // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceQueryIsEEA
	// void ComplianceQueryIsEEA(FString Region);                                                                               // [0x478e118] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFComplianceService.ComplianceCommitBirthday
	// void ComplianceCommitBirthday(int32_t BirthdayYear, int32_t BirthdayMonth, int32_t BirthdayDay);                         // [0x512a0c4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFCTIPayObserver
/// Size: 0x00E0 (224 bytes) (0x000040 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMFCTIPayObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0040   (0x00A0)  MISSED
};

/// Class /Script/MFPluginWrapper.MFCustomerService
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFCustomerService : public UMFGCloudService
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFCustomerService.LaunchCustomerUI
	// void LaunchCustomerUI(FString LangType, FString Sign, FString Openid, FString GameLevel, FString NickName);              // [0x512ac3c] Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudCommonStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFGCloudCommonStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudCommonStatics.IsEnableWeGameSDK
	// bool IsEnableWeGameSDK();                                                                                                // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCommonStatics.GetNetworkConnectionType
	// FString GetNetworkConnectionType();                                                                                      // [0x512a6cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCommonStatics.GetCarrier
	// FString GetCarrier();                                                                                                    // [0x512a5cc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudCrashObserver
/// Size: 0x0198 (408 bytes) (0x000040 - 0x000198) align 8 MaxSize: 0x0198
class UMFGCloudCrashObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x158];                                     // 0x0040   (0x0158)  MISSED
};

/// Class /Script/MFPluginWrapper.MFGCloudCrashService
/// Size: 0x0120 (288 bytes) (0x000040 - 0x000120) align 8 MaxSize: 0x0120
class UMFGCloudCrashService : public UMFGCloudService
{ 
public:
	class UMFGCloudCrashObserver*                      CrashObserver;                                              // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0xD8];                                      // 0x0048   (0x00D8)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.UACrastTest
	// void UACrastTest();                                                                                                      // [0x512e65c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.SetWaterMarkInfo
	// void SetWaterMarkInfo(FString Info);                                                                                     // [0x20fd204] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.SetUserValue
	// void SetUserValue(FString Key, FString Value);                                                                           // [0x2618788] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.SetUserId
	// void SetUserId(FString userId);                                                                                          // [0x512c1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.SetOpeningSystemWindows
	// void SetOpeningSystemWindows(bool bOpen);                                                                                // [0x512e100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.SetCustomAttachDir
	// void SetCustomAttachDir(FString AttachPath);                                                                             // [0x512de4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.ReportWithLogLua
	// void ReportWithLogLua(class UObject* WorldContextObject, FString Name, FString buf);                                     // [0x512caec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.ReportUserOperation
	// void ReportUserOperation(FString OperationKey, FString OperationValue);                                                  // [0x512c9e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.reportLastOutOfMemory
	// void reportLastOutOfMemory(int32_t Step);                                                                                // [0x4dec47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.ReportException
	// void ReportException(int32_t Type, FString ExceptionName, FString ExceptionMsg, FString ExceptionStack, TMap<FString, FString>& extInfo, int32_t repFlag, FString attachmentPath, bool bDeleteattachment); // [0x512c660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.recordGameNeed
	// void recordGameNeed(bool bRead, int32_t Index, int32_t Value, int32_t delVal, FString& reason);                          // [0x512e950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnStepToGameCall
	// void OnStepToGameCall();                                                                                                 // [0x2264ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelperDumplastRecord
	// void OnMatrixiOSHelperDumplastRecord(int32_t Param);                                                                     // [0x4dec47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelperCmd
	// void OnMatrixiOSHelperCmd(FString Cmd);                                                                                  // [0x512c1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_stopTrackCPU
	// void OnMatrixiOSHelper_stopTrackCPU();                                                                                   // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_stopDisplayLink
	// void OnMatrixiOSHelper_stopDisplayLink();                                                                                // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_stopBlockMonitor
	// void OnMatrixiOSHelper_stopBlockMonitor();                                                                               // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_startTrackCPU
	// void OnMatrixiOSHelper_startTrackCPU();                                                                                  // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_startDisplayLink
	// void OnMatrixiOSHelper_startDisplayLink(FString strSense);                                                               // [0x512c1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_startBlockMonitor
	// void OnMatrixiOSHelper_startBlockMonitor();                                                                              // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_setShouldSuspendAllThreads
	// void OnMatrixiOSHelper_setShouldSuspendAllThreads(bool shouldSuspendAllThreads);                                         // [0x4698e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_setRunloopThreshold
	// void OnMatrixiOSHelper_setRunloopThreshold(int32_t Seconds);                                                             // [0x4dec47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_setCustomInfo
	// void OnMatrixiOSHelper_setCustomInfo(int32_t Index, int32_t Value, int32_t Delete);                                      // [0x512a0c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_recoverRunloopThreshold
	// void OnMatrixiOSHelper_recoverRunloopThreshold();                                                                        // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_recoverCPUUsage
	// void OnMatrixiOSHelper_recoverCPUUsage();                                                                                // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_lowerRunloopThreshold
	// void OnMatrixiOSHelper_lowerRunloopThreshold();                                                                          // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_lowerCPUUsage
	// void OnMatrixiOSHelper_lowerCPUUsage();                                                                                  // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_isBackgroundCPUTooSmall
	// void OnMatrixiOSHelper_isBackgroundCPUTooSmall();                                                                        // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_Init
	// void OnMatrixiOSHelper_Init();                                                                                           // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_generateLiveReportWithDumpType
	// void OnMatrixiOSHelper_generateLiveReportWithDumpType(int32_t dumpType1, FString reason, bool bSelfDefined);             // [0x512c26c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.OnConsoleDumphitches
	// void OnConsoleDumphitches(int32_t From, bool bStart);                                                                    // [0x512bb24] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.LogMonitorInfo
	// void LogMonitorInfo(FString Info);                                                                                       // [0x512b558] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.LogInfo
	// void LogInfo(int32_t Level, FString Tag, FString Log);                                                                   // [0x512b404] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.IsLoadingMap
	// bool IsLoadingMap();                                                                                                     // [0x512ac28] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.is_RUNNING_WITH_ASAN
	// bool is_RUNNING_WITH_ASAN();                                                                                             // [0x21793e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.GetWaterMarkInfo
	// FString GetWaterMarkInfo();                                                                                              // [0x512a954] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.GetOpeningSystemWindows
	// bool GetOpeningSystemWindows();                                                                                          // [0x512a7b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudCrashService.ConsoleDumphitches
	// void ConsoleDumphitches(bool bStart);                                                                                    // [0x4698e20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudDolphinService
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMFGCloudDolphinService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0040   (0x0060)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.SetPreDownloadDir
	// void SetPreDownloadDir(FString InDir);                                                                                   // [0x512e188] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.SetGrayInfo
	// void SetGrayInfo(FString InUserID, FString InWorldID);                                                                   // [0x512df38] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnNoticeInstallApk
	// void OnNoticeInstallApk(FString InApkPath, bool InResult);                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnDolphinVersionInfoImplement
	// void OnDolphinVersionInfoImplement(bool isAppUpdating, bool isNeedUpdating, bool isForcedUpdating, FString InGameVersion, int64_t NeedDownloadSize, FString userDefineStr); // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnDolphinStageChanged
	// void OnDolphinStageChanged(int32_t InNewStage);                                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnDolphinRestart
	// void OnDolphinRestart();                                                                                                 // [0x512be9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnDolphinProgress
	// void OnDolphinProgress(int64_t TotalSize, int64_t currentSize);                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnDolphinCallBackSuccess
	// void OnDolphinCallBackSuccess();                                                                                         // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnDolphinCallBackError
	// void OnDolphinCallBackError(int32_t VersionStage, int32_t ErrorCode);                                                    // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnContinueDolphin
	// void OnContinueDolphin(bool bContinue);                                                                                  // [0x512bddc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.OnCancelDolphin
	// void OnCancelDolphin();                                                                                                  // [0x512bac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.InstallApk
	// bool InstallApk(FString InApkPath);                                                                                      // [0x4deb340] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.InAppInstalled
	// bool InAppInstalled(FString InPackageName);                                                                              // [0x512aa40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.GetPreDownloadDir
	// FString GetPreDownloadDir();                                                                                             // [0x512a868] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.GetCacheDir
	// FString GetCacheDir();                                                                                                   // [0x512a4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudDolphinService.CheckUpdate
	// void CheckUpdate(int32_t InUpdateType, int32_t InChannelId, FString InAppVersion, FString InAssetVersion, FString InRemoteURL, FString InUpdateDir, bool InFixupMode); // [0x5129dc8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudFriendObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudFriendObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGCloudFriendService
/// Size: 0x0108 (264 bytes) (0x000040 - 0x000108) align 8 MaxSize: 0x0108
class UMFGCloudFriendService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x0040   (0x00A0)  MISSED
	class UImage*                                      Image;                                                      // 0x00E0   (0x0008)  
	class UTexture2DDynamic*                           InDyTexture;                                                // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00F0   (0x0010)  MISSED
	class UMFGCloudFriendObserver*                     MFGCloudFriendObserver;                                     // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.ShareQQZone
	// void ShareQQZone(FString ThumbPath, FString Link);                                                                       // [0x512d3ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.ShareOversea
	// bool ShareOversea(FString Channel, int32_t shareType, FString Link, FString Img, FString desc);                          // [0x512e438] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.ShareMiniApp
	// void ShareMiniApp(FString ExtralJson, FString ThumbPath, FString Link, FString Title, FString desc);                     // [0x512e234] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.ShareLink
	// void ShareLink(FString Channel, FString Link, FString Thumb, FString Title, FString desc);                               // [0x512e234] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.ShareImgWeChat
	// void ShareImgWeChat(FString ImgPath);                                                                                    // [0x512dd6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.ShareImgQQ
	// void ShareImgQQ(FString ImgPath);                                                                                        // [0x512c1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendVLog
	// void SendVLog(FString MediaPath);                                                                                        // [0x512dd6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendText
	// void SendText(FString Channel, FString User, FString desc, FString extraJson);                                           // [0x512dbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendResultImg
	// void SendResultImg(int32_t Window, FString ThumbPath, FString Img);                                                      // [0x512da74] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendMiniApp
	// void SendMiniApp(FString extraJson, FString Channel, FString Thumb, FString Link, FString Title, FString desc, FString MediaPath, FString User); // [0x512d760] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendLink
	// void SendLink(FString Channel, FString User, FString Link, FString Thumb, FString Openid, FString Title, FString desc);  // [0x512d4a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendInviteSilent
	// void SendInviteSilent(FString ImgPath, FString User);                                                                    // [0x512d3ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendInvite
	// void SendInvite(FString ImgPath, int32_t Type, FString extraJson, FString Link, FString Channel, FString desc, FString User, FString Title); // [0x512d0a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendImgWeChat
	// void SendImgWeChat(FString ImgPath, FString User, FString ThumbPath);                                                    // [0x512c510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SendImgQQ
	// void SendImgQQ(FString ImgPath, FString User, FString ThumbPath);                                                        // [0x512c510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.ScreenShotEvent
	// void ScreenShotEvent(bool IsWindow, bool SavePhoto);                                                                     // [0x512cfa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.SaveResultImg
	// void SaveResultImg(int32_t X, int32_t Y, int32_t Width, int32_t Height, int32_t Window);                                 // [0x512cdfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.RobotOpen
	// void RobotOpen(bool IsOpen);                                                                                             // [0x512cd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.RequestStoragePermissions
	// void RequestStoragePermissions();                                                                                        // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.PullUpMiniApp
	// void PullUpMiniApp(FString MediaPath, FString ExtralJson, FString Channel);                                              // [0x512c510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnShare
	// void OnShare();                                                                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnScreenShotPanel
	// void OnScreenShotPanel();                                                                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnScreenShotPandora
	// void OnScreenShotPandora(FString ImgPath);                                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnLoadUrlFinish
	// void OnLoadUrlFinish(FString miniPath, FString bgPath, int32_t bErWeiMa, float Scale);                                   // [0x512c030] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnIOSPhotoPermissionsRequestReturn
	// void OnIOSPhotoPermissionsRequestReturn(bool status);                                                                    // [0x512bf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnIOSPhotoPermissionsCallback
	// void OnIOSPhotoPermissionsCallback(bool status);                                                                         // [0x512beb0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnImageFinish
	// void OnImageFinish(class UObject* Image1);                                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.OnAndroidExternalStagePermissionRequestReturn
	// void OnAndroidExternalStagePermissionRequestReturn(TArray<FString>& Permissions, TArray<bool>& GrantResults);            // [0x512b804] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.LoadLogoFinish
	// bool LoadLogoFinish(FString Path);                                                                                       // [0x512b158] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.LoadImageFromScreenShot
	// void LoadImageFromScreenShot(class UImage* Img, int32_t Type, bool specifyRect, int32_t minX, int32_t minY, int32_t maxX, int32_t maxY); // [0x512aec8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.GenerateLogoImg
	// bool GenerateLogoImg();                                                                                                  // [0x1bfc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.DestroyDynamicImage
	// void DestroyDynamicImage();                                                                                              // [0x512a4cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.CheckStoragePermission
	// int32_t CheckStoragePermission();                                                                                        // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.BindResult
	// void BindResult(int32_t RetCode);                                                                                        // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudFriendService.Bind
	// bool Bind(int32_t channelType, FString subChannel, FString extraJson);                                                   // [0x5129c58] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudGroupObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudGroupObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGCloudGroupService
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFGCloudGroupService : public UMFGCloudService
{ 
public:
	class UMFGCloudGroupObserver*                      MFGCloudGroupObserver;                                      // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.UnbindGroup
	// void UnbindGroup(FString Channel, FString unionID, FString unionName, FString ZoneId, FString RoleId, FString AreaID);   // [0x5130764] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.SendGroupMessage
	// void SendGroupMessage(FString Channel, FString unionID, FString Link, FString extraJson, FString AreaID, FString Title, FString desc); // [0x512d4a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.RemindToBindGroup
	// void RemindToBindGroup(FString unionID, FString ZoneId, FString RoleId, FString RoleName, FString leaderOpenID, FString leaderRoleID, FString AreaID); // [0x512d4a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.OnUnBindGroup
	// void OnUnBindGroup(int32_t status, int32_t ThirdCode, FString ThirdMsg);                                                 // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.OnRemindToBindGroup
	// void OnRemindToBindGroup(int32_t status, int32_t ThirdCode, FString ThirdMsg);                                           // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.OnJoinGroup
	// void OnJoinGroup(int32_t status, int32_t ThirdCode, FString ThirdMsg);                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.OnGetGroupState
	// void OnGetGroupState(int32_t status, FString GroupID);                                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.OnGetGroupRelation
	// void OnGetGroupRelation(int32_t status);                                                                                 // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.OnCreateGroup
	// void OnCreateGroup(int32_t status, int32_t ThirdCode, FString ThirdMsg);                                                 // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.JoinGroup
	// void JoinGroup(FString Channel, FString unionID, FString ZoneId, FString RoleId, FString GroupID, FString AreaID);       // [0x5130764] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.GetGroupState
	// void GetGroupState(FString Channel, FString unionID, FString ZoneId, FString AreaID);                                    // [0x512dbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.GetGroupRelation
	// void GetGroupRelation(FString Channel, FString groupIDOrUnionID, FString AreaID);                                        // [0x512c510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudGroupService.CreateGroup
	// void CreateGroup(FString Channel, FString unionID, FString unionName, FString RoleName, FString ZoneId, FString RoleId, FString AreaID); // [0x512d4a4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudLoginObserver
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMFGCloudLoginObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/MFPluginWrapper.MFGCloudLoginService
/// Size: 0x00B8 (184 bytes) (0x000040 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMFGCloudLoginService : public UMFGCloudService
{ 
public:
	class UMFGCloudLoginObserver*                      LoginObserver;                                              // 0x0040   (0x0008)  
	class UMFIntlLoginObserver*                        IntlLoginObserver;                                          // 0x0048   (0x0008)  
	SDK_UNDEFINED(16,1636) /* FMulticastInlineDelegate */ __um(HttpPostDelegate);                                  // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0060   (0x0058)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.SwitchUser
	// void SwitchUser(bool bSwitch);                                                                                           // [0x5131218] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.SetLoginServiceSubClass
	// bool SetLoginServiceSubClass(class UClass* InSubClass);                                                                  // [0x5131018] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.OnWakeUpProc
	// void OnWakeUpProc(int32_t RetCode, FString extraJson);                                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.OnLIEventCallback
	// void OnLIEventCallback(int32_t Event);                                                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.OnINTLAccountResult
	// void OnINTLAccountResult(int32_t RetCode, int32_t ThirdCode, int32_t methodId, FString userName, FString uid, int32_t isRegister, int32_t isReceiveEmail, int32_t isSetPassword); // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.OnAccountLoginProc
	// void OnAccountLoginProc(int32_t Result, int32_t ThirdCode, FString reason, int32_t channelType, FString strOpenID, FString strUserID, FString strTokenAccess, FString strTokenRefresh, FString strTokenPay, FString strPF, FString strPFKey, FString strSTKey, FString regChannel, int32_t FirstLogin, FString ChannelInfo, FString extraJson, int32_t DeleteAccountStatus); // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.Logout
	// void Logout();                                                                                                           // [0x512fda4] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.Login
	// bool Login(int32_t channelType, FString fakeOpenID, FString subChannel, FString extraJson);                              // [0x51309c8] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.LIAuthResult
	// void LIAuthResult(int32_t RetCode, int32_t ThirdCode);                                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.HttpPostRequest
	// void HttpPostRequest(FString URL, FString StrContent);                                                                   // [0x51305e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.HttpPostDelegate__DelegateSignature
	// void HttpPostDelegate__DelegateSignature(FString RspContent);                                                            // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.GetLoginRet
	// void GetLoginRet();                                                                                                      // [0xc0600c] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.GetCachedToken
	// FString GetCachedToken();                                                                                                // [0x5130014] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.GetCachedSigKey
	// FString GetCachedSigKey();                                                                                               // [0x512fef4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.GetCachedOpenID
	// FString GetCachedOpenID();                                                                                               // [0x4dde288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.GetCachedLoginChannel
	// int32_t GetCachedLoginChannel();                                                                                         // [0x512fedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.GetCachedHeadURL
	// FString GetCachedHeadURL();                                                                                              // [0x512fdbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.BindResult
	// void BindResult(int32_t RetCode);                                                                                        // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.Bind
	// bool Bind(int32_t channelType, FString subChannel, FString extraJson);                                                   // [0x512f5c0] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudLoginService.AutoLogin
	// void AutoLogin(FString fakeOpenID);                                                                                      // [0x512f494] Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudMessageHandler
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFGCloudMessageHandler : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.UnInitialize
	// void UnInitialize();                                                                                                     // [0x51312b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.Tick
	// void Tick(float DeltaSeconds);                                                                                           // [0x107a334] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.SetSendPkgHeaderZoneID
	// void SetSendPkgHeaderZoneID(FString ID);                                                                                 // [0x51310d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.SetDevUrl
	// void SetDevUrl(FString Ip, FString Port);                                                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.SetClientType
	// void SetClientType(int32_t ClientType);                                                                                  // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.RequestLogin
	// void RequestLogin(FString inPlayerName, bool isReconnected, float overTimeSeconds);                                      // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.RelayConnect
	// void RelayConnect();                                                                                                     // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnWaitingReliableNumChanged
	// void OnWaitingReliableNumChanged(int32_t NewWaitingReliableNum);                                                         // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnStateChangedProc
	// void OnStateChangedProc(int32_t connectorState, int32_t ErrorCode, int32_t extend1, int32_t extend2);                    // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnRelayConnectedProc
	// void OnRelayConnectedProc(int32_t ErrorCode);                                                                            // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnOverTime
	// void OnOverTime(int32_t MsgID, int32_t SerialID, int32_t overtimes, bool isShowError);                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnDisconnectProc
	// void OnDisconnectProc(int32_t ErrorCode);                                                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnDataRecvedProc
	// void OnDataRecvedProc(int32_t ErrorCode);                                                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnConnectorInvalid
	// void OnConnectorInvalid();                                                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnConnected
	// void OnConnected(int32_t ErrorCode);                                                                                     // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnAddictionNotify
	// void OnAddictionNotify(int32_t Messageid, FString Title, FString Content);                                               // [0x5130d3c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.OnAcquiredWeGameToken
	// void OnAcquiredWeGameToken(FString PlayerId, FString PlayerName, FString Token);                                         // [0x5130bc4] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.IsConnectedTest
	// bool IsConnectedTest();                                                                                                  // [0x513073c] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.IsConnected
	// bool IsConnected();                                                                                                      // [0x5130714] Native|Public        
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.HasAcquiredWeGameToken
	// bool HasAcquiredWeGameToken();                                                                                           // [0x51305bc] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.GetService
	// class UMFGCloudService* GetService();                                                                                    // [0x5130594] Native|Public        
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.GetIP
	// FString GetIP();                                                                                                         // [0x5130374] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.GetConnectInfo
	// FString GetConnectInfo();                                                                                                // [0x5130130] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.Disconnect
	// void Disconnect();                                                                                                       // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.DevConnect
	// bool DevConnect(int32_t Channel, FString uin, FString pwd, TArray<FString>& urlList, bool Clear);                        // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudMessageHandler.Connect
	// bool Connect(int32_t Channel, TArray<FString>& urlList, bool Clear, FString Openid, FString openKey, FString extInfo);   // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/MFPluginWrapper.MFGCloudMessageHandlerAce
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UMFGCloudMessageHandlerAce : public UMFGCloudMessageHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MFPluginWrapper.MFGCloudMessageHandlerChildTss
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMFGCloudMessageHandlerChildTss : public UMFGCloudMessageHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/MFPluginWrapper.MFGCloudMessageObserver
/// Size: 0x0180 (384 bytes) (0x000040 - 0x000180) align 8 MaxSize: 0x0180
class UMFGCloudMessageObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0040   (0x0040)  MISSED
	class UMFPWMessageHeader*                          SendPkgHeader;                                              // 0x0080   (0x0008)  
	class UMFPWMessageHeader*                          RecvPkgHeader;                                              // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x91];                                      // 0x0090   (0x0091)  MISSED
	bool                                               IsDebug;                                                    // 0x0121   (0x0001)  
	bool                                               IsNetworkOptimizationOn;                                    // 0x0122   (0x0001)  
	unsigned char                                      UnknownData02_7[0x5D];                                      // 0x0123   (0x005D)  MISSED
};

/// Class /Script/MFPluginWrapper.MFGCloudMessageService
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UMFGCloudMessageService : public UMFGCloudService
{ 
public:
	TArray<class UMFGCloudMessageHandler*>             MsgHandlerArr;                                              // 0x0040   (0x0010)  
	class UMFGCloudMessageObserver*                    ConnectorObserver;                                          // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.UnRegisterMessageHandlerByClass
	// bool UnRegisterMessageHandlerByClass(class UClass* InClass);                                                             // [0x51312d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.UnRegisterAllMessageHandler
	// void UnRegisterAllMessageHandler();                                                                                      // [0x226d260] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.SetRecvMessage
	// void SetRecvMessage(bool recvMsg);                                                                                       // [0x47994bc] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.SetKickOffState
	// void SetKickOffState(bool IsKickOff);                                                                                    // [0x5130f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.SetClientType
	// void SetClientType(int32_t ClientType);                                                                                  // [0x5130e98] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.RelayConnect
	// void RelayConnect();                                                                                                     // [0x1d62c3c] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.RegisterMessageHandlerByClass
	// class UMFGCloudMessageHandler* RegisterMessageHandlerByClass(class UClass* InClass);                                     // [0x1547ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.ManualReconnect
	// bool ManualReconnect();                                                                                                  // [0x51305bc] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.GetMsgHandlerByType
	// class UMFGCloudMessageHandler* GetMsgHandlerByType(class UClass* classType);                                             // [0x1547bac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.GetIP
	// FString GetIP();                                                                                                         // [0x51304a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.GetConnectorValid
	// bool GetConnectorValid();                                                                                                // [0x5130350] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.GetConnectInfo
	// FString GetConnectInfo();                                                                                                // [0x5130264] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.Disconnect
	// void Disconnect();                                                                                                       // [0x512fda4] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.DevConnect
	// bool DevConnect(int32_t Channel, FString uin, FString pwd, TArray<FString>& urlList, bool Clear);                        // [0x512fb58] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.Connect
	// bool Connect(int32_t Channel, TArray<FString>& urlList, FString TbusppGameID, bool Clear, FString Openid, FString openKey, FString extInfo); // [0x512f82c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.ClipPendingResponseArr
	// void ClipPendingResponseArr(bool IsReconnect);                                                                           // [0x512f748] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudMessageService.ClearAckID
	// void ClearAckID();                                                                                                       // [0x2273b00] Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudNetWorkStateObserver
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UMFGCloudNetWorkStateObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0040   (0x0018)  MISSED
};

/// Class /Script/MFPluginWrapper.MFGCloudNetWorkStateService
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFGCloudNetWorkStateService : public UMFGCloudService
{ 
public:
	class UMFGCloudNetWorkStateObserver*               NetworkObserver;                                            // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudNetWorkStateService.OnNetworkStateChanged
	// void OnNetworkStateChanged(int32_t State);                                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
};

/// Struct /Script/MFPluginWrapper.MSDKNoticeTextInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMSDKNoticeTextInfo
{ 
	FString                                            NoticeTitle;                                                // 0x0000   (0x0010)  
	FString                                            NoticeContent;                                              // 0x0010   (0x0010)  
	FString                                            NoticeRedirectUrl;                                          // 0x0020   (0x0010)  
};

/// Struct /Script/MFPluginWrapper.MSDKNoticePictureInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FMSDKNoticePictureInfo
{ 
	FString                                            NoticePicUrl;                                               // 0x0000   (0x0010)  
	FString                                            NoticePicHashcode;                                          // 0x0010   (0x0010)  
	FString                                            NoticePicTitle;                                             // 0x0020   (0x0010)  
	FString                                            NoticePicSize;                                              // 0x0030   (0x0010)  
	int32_t                                            ScreenDir;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/MFPluginWrapper.MSDKNoticeInfo
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FMSDKNoticeInfo
{ 
	int32_t                                            NoticeID;                                                   // 0x0000   (0x0004)  
	int32_t                                            NoticeType;                                                 // 0x0004   (0x0004)  
	FString                                            NoticeGroup;                                                // 0x0008   (0x0010)  
	int32_t                                            BeginTime;                                                  // 0x0018   (0x0004)  
	int32_t                                            EndTime;                                                    // 0x001C   (0x0004)  
	int32_t                                            UpdateTime;                                                 // 0x0020   (0x0004)  
	int32_t                                            Order;                                                      // 0x0024   (0x0004)  
	int32_t                                            ContentType;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            Language;                                                   // 0x0030   (0x0010)  
	FMSDKNoticeTextInfo                                TextInfo;                                                   // 0x0040   (0x0030)  
	TArray<FMSDKNoticePictureInfo>                     PicUrlList;                                                 // 0x0070   (0x0010)  
	FString                                            WebUrl;                                                     // 0x0080   (0x0010)  
	FString                                            extraJson;                                                  // 0x0090   (0x0010)  
};

/// Struct /Script/MFPluginWrapper.MSDKNoticeReturnData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMSDKNoticeReturnData
{ 
	int32_t                                            MethodNameID;                                               // 0x0000   (0x0004)  
	int32_t                                            RetCode;                                                    // 0x0004   (0x0004)  
	FString                                            RetMsg;                                                     // 0x0008   (0x0010)  
	int32_t                                            ThirdCode;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ThirdMsg;                                                   // 0x0020   (0x0010)  
	FString                                            extraJson;                                                  // 0x0030   (0x0010)  
	FString                                            RequestID;                                                  // 0x0040   (0x0010)  
	TArray<FMSDKNoticeInfo>                            NoticeInfoList;                                             // 0x0050   (0x0010)  
};

/// Class /Script/MFPluginWrapper.MFGCloudNotice
/// Size: 0x0100 (256 bytes) (0x000040 - 0x000100) align 8 MaxSize: 0x0100
class UMFGCloudNotice : public UMFGCloudService
{ 
public:
	SDK_UNDEFINED(16,1637) /* FDelegateProperty */     __um(OnLoadNoticeCompleted);                                // 0x0040   (0x0010)  
	FMSDKNoticeReturnData                              LastReturnData;                                             // 0x0050   (0x0060)  
	FString                                            CachedGroup;                                                // 0x00B0   (0x0010)  
	FString                                            CachedLanguage;                                             // 0x00C0   (0x0010)  
	FString                                            CachedRegion;                                               // 0x00D0   (0x0010)  
	FString                                            CachedPartition;                                            // 0x00E0   (0x0010)  
	FString                                            CachedExtra;                                                // 0x00F0   (0x0010)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudNotice.OnNotificationPermissionsGrantedDynamic
	// void OnNotificationPermissionsGrantedDynamic(bool status);                                                               // [0x51350e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudNotice.OnLoadNoticeCompleted__DelegateSignature
	// void OnLoadNoticeCompleted__DelegateSignature();                                                                         // [0x182d6bc] Public|Delegate      
	// Function /Script/MFPluginWrapper.MFGCloudNotice.LoadNotice
	// FString LoadNotice(FString InGroup, FString InLanguage, FString InRegion, FString InPartition, FString InExtra);         // [0x5134e80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudPlugin
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMFGCloudPlugin : public UMFPWPlugin
{ 
public:
	TMap<class UClass*, class UMFGCloudService*>       ServiceMap;                                                 // 0x0040   (0x0050)  
	TArray<class UClass*>                              GCloudServiceClasses;                                       // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudXGService
	// class UMFGCloudXGService* GetGCloudXGService();                                                                          // [0x1c2b780] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudToolsService
	// class UMFGCloudToolsService* GetGCloudToolsService();                                                                    // [0x1c2bf6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudPufferService
	// class UMFGCloudPufferService* GetGCloudPufferService();                                                                  // [0x51345c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudPlugin
	// class UMFGCloudPlugin* GetGCloudPlugin(class UObject* WorldContextObject);                                               // [0x213d328] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudNoticeService
	// class UMFGCloudNotice* GetGCloudNoticeService();                                                                         // [0x51345a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudMessageService
	// class UMFGCloudMessageService* GetGCloudMessageService();                                                                // [0x1548138] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudLoginService
	// class UMFGCloudLoginService* GetGCloudLoginService();                                                                    // [0x513457c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudGroupService
	// class UMFGCloudGroupService* GetGCloudGroupService();                                                                    // [0x5134558] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudFriendService
	// class UMFGCloudFriendService* GetGCloudFriendService();                                                                  // [0x5134534] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudDolphinService
	// class UMFGCloudDolphinService* GetGCloudDolphinService();                                                                // [0x1c2bf48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetGCloudCrashService
	// class UMFGCloudCrashService* GetGCloudCrashService();                                                                    // [0x1db9640] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.GetCustomerService
	// class UMFCustomerService* GetCustomerService();                                                                          // [0x5134118] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPlugin.AddServiceByClass
	// class UMFGCloudService* AddServiceByClass(class UClass* InClass);                                                        // [0x1db85c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudPufferService
/// Size: 0x01B8 (440 bytes) (0x000040 - 0x0001B8) align 8 MaxSize: 0x01B8
class UMFGCloudPufferService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_1[0x178];                                     // 0x0040   (0x0178)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.StartRestoreFiles
	// int64_t StartRestoreFiles(int32_t Priority);                                                                             // [0x5135b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.SetUseThreadPoll
	// void SetUseThreadPoll(int32_t InValue);                                                                                  // [0x5135a98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.SetTaskPriority
	// bool SetTaskPriority(int64_t TaskId, int32_t Priority);                                                                  // [0x513596c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.SetImmDLMaxTask
	// bool SetImmDLMaxTask(int32_t InTaskNum);                                                                                 // [0x51358a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.SetImmDLMaxSpeed
	// bool SetImmDLMaxSpeed(int32_t InMaxSpeed);                                                                               // [0x51357d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.SaveTaskProgress
	// void SaveTaskProgress(FString InTaskName, int64_t InNowSize, int64_t InTotalSize);                                       // [0x513568c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.ResumeTask
	// bool ResumeTask(int64_t TaskId);                                                                                         // [0x51355dc] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.ResumeAllTask
	// int32_t ResumeAllTask();                                                                                                 // [0x51355b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.RestartPuffer
	// bool RestartPuffer(int32_t InRestoreFlag);                                                                               // [0x51354cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.RemoveTask
	// bool RemoveTask(int64_t InTaskID);                                                                                       // [0x5135424] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.RemoveAllTask
	// int32_t RemoveAllTask();                                                                                                 // [0x5135400] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.ReceiveTick
	// void ReceiveTick(float InDeltaTime);                                                                                     // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.ReadCachedTotalSizeByName
	// int64_t ReadCachedTotalSizeByName(FString InTaskName);                                                                   // [0x5135348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.ReadCachedCurrentSizeByName
	// int64_t ReadCachedCurrentSizeByName(FString InTaskName);                                                                 // [0x513523c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.PauseTask
	// bool PauseTask(int64_t TaskId);                                                                                          // [0x513518c] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.PauseAllTask
	// int32_t PauseAllTask();                                                                                                  // [0x5135168] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnRestoreProgress
	// void OnRestoreProgress(int32_t Stage, int64_t NowSize, int64_t TotalSize);                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnPufferFileListItem
	// void OnPufferFileListItem(FString InFilename, int32_t inState);                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnPakSigFailed
	// void OnPakSigFailed(FString InPakName, int32_t InChunkIndex, FString InExpectedHash, FString InReceivedHash);            // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnInitReturn
	// void OnInitReturn(bool IsSuccess, int32_t ErrorCode);                                                                    // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnInitProgress
	// void OnInitProgress(int32_t Stage, int64_t NowSize, int64_t TotalSize);                                                  // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnDownloadReturn
	// void OnDownloadReturn(int64_t TaskId, int32_t fileID, bool IsSuccess, int32_t ErrorCode);                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnDownloadProgress
	// void OnDownloadProgress(int64_t TaskId, int64_t NowSize, int64_t TotalSize);                                             // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnDownloadIOSBackgroundDone
	// void OnDownloadIOSBackgroundDone();                                                                                      // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnDownloadBatchReturn
	// void OnDownloadBatchReturn(int64_t batchTaskId, int32_t fileID, bool IsSuccess, int32_t ErrorCode, int32_t batchType, FString strRet); // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnDownloadBatchProgress
	// void OnDownloadBatchProgress(int64_t batchTaskId, int64_t NowSize, int64_t TotalSize);                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.OnAsyncMountPakDone
	// void OnAsyncMountPakDone(TArray<FString>& InPakList, TArray<int32_t>& InResultList, FString InCustomParam);              // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.IsInitDone
	// bool IsInitDone();                                                                                                       // [0x5134e68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.IsFileReadyByName
	// bool IsFileReadyByName(FString InFile);                                                                                  // [0x5134db4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.IsFileReady
	// bool IsFileReady(int64_t InFileID);                                                                                      // [0x5134ce8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.IsBatchDirReady
	// bool IsBatchDirReady(FString Dir, bool blSubDir, int32_t& nTotal, int32_t& nReady, int32_t& nNotReady);                  // [0x5134ac0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.InitPufferConfig
	// bool InitPufferConfig(FPufferInitConfigData& InParam);                                                                   // [0x51349fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetTaskState
	// EPufferTaskState GetTaskState(int32_t InTaskID);                                                                         // [0x51348f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetTaskInfoByTaskName
	// FPufferTaskInfo GetTaskInfoByTaskName(FString InTaskName);                                                               // [0x5134820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetTaskInfoByTaskID
	// FPufferTaskInfo GetTaskInfoByTaskID(int32_t InTaskID);                                                                   // [0x5134760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetRestoreTaskName
	// FString GetRestoreTaskName();                                                                                            // [0x51345e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetRestoreTaskID
	// int32_t GetRestoreTaskID();                                                                                              // [0x512fedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetFileSizeCompressed
	// int64_t GetFileSizeCompressed(int64_t fileID);                                                                           // [0x5134484] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetFileMd5
	// FString GetFileMd5(FString InFileID);                                                                                    // [0x51342b8] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetFileId
	// int64_t GetFileId(FString InFile);                                                                                       // [0x5134200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetDownloadingTaskInfoList
	// TArray<FPufferTaskInfo> GetDownloadingTaskInfoList(bool bIncludePaused);                                                 // [0x513413c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetCurrentSpeed
	// float GetCurrentSpeed();                                                                                                 // [0x51340f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetCurrentDownloadingTaskNum
	// int32_t GetCurrentDownloadingTaskNum(bool bIncludePaused);                                                               // [0x5134048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetBatchDirSizeCompressed
	// int64_t GetBatchDirSizeCompressed(FString Dir, bool blSubDir);                                                           // [0x5133f28] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.GetBatchDirFileCount
	// int32_t GetBatchDirFileCount(FString Dir, bool blSubDir);                                                                // [0x5133e1c] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.DownloadFile
	// int64_t DownloadFile(FString InFile, bool InForceSync, int32_t InPriority, FString InTaskName);                          // [0x5133ba8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.DownloadBatchList
	// int64_t DownloadBatchList(FString InFileList, bool forceSync, int32_t Priority, FString InTaskName);                     // [0x5133934] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.DownloadBatchDir
	// int64_t DownloadBatchDir(FString Dir, bool blSubDir, bool forceSync, int32_t Priority, FString InTaskName);              // [0x5133710] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudPufferService.AsyncMountPakList
	// int32_t AsyncMountPakList(TArray<FString>& InPakList, TArray<int32_t> InMountOrders, FString InCustomParam);             // [0x5133564] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudRobotService
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudRobotService : public UMFGCloudService
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudRobotService.ShowRobot
	// bool ShowRobot(class UObject* InWorldContext, FString RoleId, FString Question, FString Scene, FString ext, int32_t isLandscape, int32_t newActivity); // [0x51398e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudRobotService.OnURLCallback
	// void OnURLCallback(FString InParam);                                                                                     // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudRobotService.OnShowCallback
	// void OnShowCallback();                                                                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudRobotService.OnCloseCallback
	// void OnCloseCallback();                                                                                                  // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudRobotService.GetDefault
	// class UMFGCloudRobotService* GetDefault();                                                                               // [0x5136af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudRobotService.CloseRobot
	// void CloseRobot();                                                                                                       // [0x1e39048] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudSetting
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class UMFGCloudSetting : public UObject
{ 
public:
	FString                                            TbusppProjectName;                                          // 0x0028   (0x0010)  
	FString                                            TbusppGameID;                                               // 0x0038   (0x0010)  
	FString                                            TbusppServiceName;                                          // 0x0048   (0x0010)  
	FString                                            GameId;                                                     // 0x0058   (0x0010)  
	FString                                            GameKey;                                                    // 0x0068   (0x0010)  
	FString                                            QQAppID;                                                    // 0x0078   (0x0010)  
	FString                                            QQAppKey;                                                   // 0x0088   (0x0010)  
	FString                                            WeiXinAppID;                                                // 0x0098   (0x0010)  
	FString                                            WeiXinAppKey;                                               // 0x00A8   (0x0010)  
	FString                                            MSDK_GAME_ID;                                               // 0x00B8   (0x0010)  
	FString                                            MSDK_SDK_Key;                                               // 0x00C8   (0x0010)  
	FString                                            ConnectorDHP;                                               // 0x00D8   (0x0010)  
	int32_t                                            Dumphitches;                                                // 0x00E8   (0x0004)  
	int32_t                                            TssSDKID;                                                   // 0x00EC   (0x0004)  
	int32_t                                            GRobotGameID;                                               // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FString                                            GRobotGameCode;                                             // 0x00F8   (0x0010)  
	bool                                               SkipAuth;                                                   // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FString                                            WeGameID;                                                   // 0x0110   (0x0010)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetWeiXinAppID
	// FString GetWeiXinAppID();                                                                                                // [0x51373e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetWeGameID
	// FString GetWeGameID();                                                                                                   // [0x51372a4] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetTssSDKID
	// int32_t GetTssSDKID();                                                                                                   // [0x5137260] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetTbusppProjectName
	// FString GetTbusppProjectName();                                                                                          // [0x5137174] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetQQAppID
	// FString GetQQAppID();                                                                                                    // [0x1db7f7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetMSDKSDKKey
	// FString GetMSDKSDKKey();                                                                                                 // [0x5136d94] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetMSDKGameID
	// FString GetMSDKGameID();                                                                                                 // [0x5136ca8] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetGameId
	// FString GetGameId();                                                                                                     // [0x5136bbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudSetting.GetAppID
	// FString GetAppID(int32_t channelType);                                                                                   // [0x2812aac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudTGPAObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudTGPAObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGCloudTGPAService
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFGCloudTGPAService : public UMFGCloudService
{ 
public:
	class UMFGCloudTGPAObserver*                       GCLoudTGPAObserver;                                         // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudTGPAService.OnNotifySystemInfo
	// void OnNotifySystemInfo(FString& Json);                                                                                  // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/MFPluginWrapper.MFGCloudToolsObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudToolsObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGCloudToolsService
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFGCloudToolsService : public UMFGCloudService
{ 
public:
	class UMFGCloudToolsObserver*                      ToolsObserver;                                              // 0x0040   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudToolsService.OpenPrajnaWebView
	// void OpenPrajnaWebView(FString jsonStr);                                                                                 // [0x5138cc0] Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudToolsService.IsAppInstall
	// bool IsAppInstall(FString Channel, FString Extra);                                                                       // [0x2298840] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudToolsService.GetConfigChannelID
	// FString GetConfigChannelID();                                                                                            // [0x5136998] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGCloudTssService
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudTssService : public UMFGCloudService
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGCloudWebViewObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudWebViewObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGCloudWebViewService
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMFGCloudWebViewService : public UMFGCloudService
{ 
public:
	class UMFGCloudWebViewObserver*                    WebViewObserver;                                            // 0x0040   (0x0008)  
	class UMFIntlWebViewObserver*                      IntlWebViewObserver;                                        // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudWebViewService.OnWebViewPreClose
	// void OnWebViewPreClose();                                                                                                // [0x1aa6c04] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudWebViewService.OnWebViewBackCall
	// void OnWebViewBackCall(int32_t methodId, int32_t MsgType, FString MsgJsonData);                                          // [0x5138b74] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGCloudWebViewService.OnCustomerServiceBackCall
	// void OnCustomerServiceBackCall(int32_t MsgType, FString MsgJsonData);                                                    // [0x5137a28] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MFPluginWrapper.MFGCloudXGObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGCloudXGObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGCloudXGService
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMFGCloudXGService : public UMFGCloudService
{ 
public:
	class UMFGCloudXGObserver*                         XGObserver;                                                 // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFGCloudXGService.UnregisterPush
	// void UnregisterPush(FString Channel);                                                                                    // [0x5139ba4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudXGService.SetTag
	// void SetTag(FString Channel, FString Tag);                                                                               // [0x513970c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudXGService.SetAccount
	// void SetAccount(FString Channel, FString Account);                                                                       // [0x512d3ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudXGService.RegisterPush
	// void RegisterPush(FString Channel, FString Account);                                                                     // [0x5138f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudXGService.DeleteTag
	// void DeleteTag(FString Channel, FString Tag);                                                                            // [0x5136510] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudXGService.DeleteAccount
	// void DeleteAccount(FString Channel, FString Account);                                                                    // [0x512d3ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGCloudXGService.AddLocalNotification
	// void AddLocalNotification(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Min, FString Title, FString Content, FString content_ios); // [0x5136134] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGMEObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFGMEObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFGMEService
/// Size: 0x00B0 (176 bytes) (0x000040 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMFGMEService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0040   (0x0020)  MISSED
	class UMFGMEObserver*                              gmeObserver;                                                // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0068   (0x0030)  MISSED
	FString                                            mRoomId;                                                    // 0x0098   (0x0010)  
	int32_t                                            mRoomQualityType;                                           // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00AC   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFGMEService.UploadRecordedFile
	// int32_t UploadRecordedFile(FString FilePath);                                                                            // [0x5136fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.UnInitMFVoiceEngine
	// int32_t UnInitMFVoiceEngine();                                                                                           // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.TestMic
	// int32_t TestMic();                                                                                                       // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.StopRecording
	// int32_t StopRecording();                                                                                                 // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.StopPlayFile
	// int32_t StopPlayFile();                                                                                                  // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.StartRecording
	// int32_t StartRecording(FString FilePath);                                                                                // [0x5136fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SpeechToText
	// int32_t SpeechToText(FString fileID, FString SpeechLanguage, FString TranslateLanguage);                                 // [0x51374a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetVoiceMode
	// int32_t SetVoiceMode(int32_t VoiceMode);                                                                                 // [0x5139864] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetSpeakerVolume
	// int32_t SetSpeakerVolume(int32_t Volume);                                                                                // [0x4deb48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetReportedPlayerInfo
	// int32_t SetReportedPlayerInfo(TArray<FString> cszOpenID, TArray<int32_t> nMemberID, int32_t nCount);                     // [0x51394f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetReportBufferTime
	// void SetReportBufferTime(int32_t nTimeSec);                                                                              // [0x4dec47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetPlayerVolume
	// int32_t SetPlayerVolume(FString PlayerId, int32_t vol);                                                                  // [0x513931c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetMicVolume
	// int32_t SetMicVolume(int32_t Volume);                                                                                    // [0x4deb48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetLogLevel
	// int32_t SetLogLevel(int32_t LevelWrite, int32_t LevelPrint);                                                             // [0x5139244] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.SetAppInfo
	// int32_t SetAppInfo(FString AppID, FString AppKey, FString Openid);                                                       // [0x51374a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.ReportPlayer
	// int32_t ReportPlayer(TArray<FString> cszOpenID, int32_t nCount, FString cszInfo);                                        // [0x51390c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.QuitRoom
	// int32_t QuitRoom(FString RoomName);                                                                                      // [0x5138dec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.QueryPermission
	// int32_t QueryPermission();                                                                                               // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.PlayRecordedFile
	// int32_t PlayRecordedFile(FString FilePath);                                                                              // [0x5136fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.OpenSpeaker
	// int32_t OpenSpeaker();                                                                                                   // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.OpenMic
	// int32_t OpenMic();                                                                                                       // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.OnVoiceRecording
	// void OnVoiceRecording();                                                                                                 // [0x20a82cc] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnUploadedFile
	// void OnUploadedFile(int32_t code, FString FilePath, FString fileID);                                                     // [0x5138a18] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnStreamSpeechToTextDone
	// void OnStreamSpeechToTextDone(int32_t code, int32_t Error, FString Result, FString voicePath);                           // [0x5138864] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnStatusUpdate
	// void OnStatusUpdate(int32_t status, FString RoomName, int32_t memberID);                                                 // [0x5138718] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnSpeechToTextDone
	// void OnSpeechToTextDone(int32_t code, FString fileID, FString Result);                                                   // [0x51385bc] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnRoomMemberInfo
	// void OnRoomMemberInfo(int32_t code, FString RoomName, int32_t memid, FString Openid);                                    // [0x5138408] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnQuitedRoom
	// void OnQuitedRoom(int32_t code, FString RoomName);                                                                       // [0x5138300] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnPlayedRecordedFile
	// void OnPlayedRecordedFile(int32_t code, FString FilePath);                                                               // [0x51381f8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnMultiRoomMemberVoice
	// void OnMultiRoomMemberVoice(FString RoomName, int32_t memid, int32_t status);                                            // [0x51380a8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnMemberVoice
	// void OnMemberVoice(int32_t memid, int32_t status);                                                                       // [0x5137fbc] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnJoinedRoom
	// void OnJoinedRoom(int32_t code, FString RoomName, int32_t memberID);                                                     // [0x5137e70] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnIOSPermissionRequestReturn
	// void OnIOSPermissionRequestReturn(bool status);                                                                          // [0x5137de8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.OnEvent
	// void OnEvent(int32_t Event, FString Info);                                                                               // [0x5137ce0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnDownloadedFile
	// void OnDownloadedFile(int32_t code, FString FilePath, FString fileID);                                                   // [0x5137b84] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnAppliedMessageKey
	// void OnAppliedMessageKey(int32_t code);                                                                                  // [0x513798c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.OnAndroidPermissionRequestReturn
	// void OnAndroidPermissionRequestReturn(TArray<FString>& Permissions, TArray<bool>& GrantResults);                         // [0x51377d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.JoinTeamRoom3
	// int32_t JoinTeamRoom3(FString RoomName, TArray<int32_t> authbuffer, int32_t Length);                                     // [0x5137648] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.JoinTeamRoom
	// int32_t JoinTeamRoom(FString RoomName);                                                                                  // [0x5136fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.JoinRangeRoom
	// int32_t JoinRangeRoom(FString RoomName);                                                                                 // [0x5136fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.JoinNationRoom
	// int32_t JoinNationRoom(FString RoomName);                                                                                // [0x5136fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.IsSpeaking
	// bool IsSpeaking();                                                                                                       // [0x1bfc3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFGMEService.IsRoomEntered
	// bool IsRoomEntered();                                                                                                    // [0x21793e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.InitMFVoiceEngine
	// int32_t InitMFVoiceEngine(FString AppID, FString AppKey, FString Openid);                                                // [0x51374a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetVoiceFileSize
	// int32_t GetVoiceFileSize(FString FilePath);                                                                              // [0x51370d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetVoiceFileDuration
	// int32_t GetVoiceFileDuration(FString FilePath);                                                                          // [0x51370d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetSpeakerState
	// int32_t GetSpeakerState();                                                                                               // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetSpeakerLevel
	// int32_t GetSpeakerLevel();                                                                                               // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetRoomMembers
	// int32_t GetRoomMembers(FString RoomName);                                                                                // [0x51370d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetRecvStreamLevel
	// int32_t GetRecvStreamLevel(FString Openid);                                                                              // [0x5136fd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetPlayerVolume
	// int32_t GetPlayerVolume(FString PlayerId);                                                                               // [0x5136e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetMicState
	// int32_t GetMicState();                                                                                                   // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetMicLevel
	// int32_t GetMicLevel(bool bFadeOut);                                                                                      // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetFileTime
	// float GetFileTime(FString FilePath);                                                                                     // [0x5136b08] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GetAudioDeviceConnectionState
	// int32_t GetAudioDeviceConnectionState();                                                                                 // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GameResume
	// int32_t GameResume();                                                                                                    // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.GamePause
	// int32_t GamePause();                                                                                                     // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableSpeakerOn
	// int32_t EnableSpeakerOn(bool bEnable);                                                                                   // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableRoomSpeaker
	// int32_t EnableRoomSpeaker(FString RoomName, bool enable);                                                                // [0x513683c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableRoomMicrophone
	// int32_t EnableRoomMicrophone(FString RoomName, bool enable);                                                             // [0x513683c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableReportALLAbroad
	// int32_t EnableReportALLAbroad(bool bEnable);                                                                             // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableReportALL
	// int32_t EnableReportALL(bool bEnable);                                                                                   // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableMultiRoom
	// int32_t EnableMultiRoom(bool enable);                                                                                    // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableLogCallBack
	// int32_t EnableLogCallBack(bool bEnable);                                                                                 // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableLog
	// void EnableLog(bool bEnable);                                                                                            // [0x4698e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableCivilVoice
	// int32_t EnableCivilVoice(bool bEnable);                                                                                  // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.EnableBluetoothSCO
	// int32_t EnableBluetoothSCO(bool bEnable);                                                                                // [0x5136798] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.DownloadRecordedFile
	// int32_t DownloadRecordedFile(FString fileID, FString DownloadFilePath);                                                  // [0x5136668] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.CloseSpeaker
	// int32_t CloseSpeaker();                                                                                                  // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.CloseMic
	// int32_t CloseMic();                                                                                                      // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.CheckPermission
	// int32_t CheckPermission();                                                                                               // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.CheckMicPermission
	// int32_t CheckMicPermission();                                                                                            // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.CaptureMicrophoneData
	// int32_t CaptureMicrophoneData(bool bCapture);                                                                            // [0x5136484] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.CancelRecording
	// int32_t CancelRecording();                                                                                               // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.ApplyPTTAuthbuffer
	// int32_t ApplyPTTAuthbuffer();                                                                                            // [0x5136470] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.ApplyMessageKey
	// int32_t ApplyMessageKey();                                                                                               // [0x5136438] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGMEService.ApplicationWillEnterBackground
	// void ApplicationWillEnterBackground();                                                                                   // [0x512fda4] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.ApplicationWillDeactivate
	// void ApplicationWillDeactivate();                                                                                        // [0x4de6e58] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.ApplicationHasReactivated
	// void ApplicationHasReactivated();                                                                                        // [0x156ee74] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFGMEService.ApplicationHasEnteredForeground
	// void ApplicationHasEnteredForeground();                                                                                  // [0x1aa6c04] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MFPluginWrapper.MFGPMAgent
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFGPMAgent : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFGPMAgent.WriteMpeFrameInterpolation
	// void WriteMpeFrameInterpolation(char bEnable);                                                                           // [0x513d55c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.WriteGraphicStyleQualityLevel
	// void WriteGraphicStyleQualityLevel(char InGraphicStyleQualityLevel);                                                     // [0x513d454] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.WriteGraphicsQualityLevel
	// void WriteGraphicsQualityLevel(char GraphicsQualityLevel);                                                               // [0x513d4d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.WriteFrameRateLevel
	// void WriteFrameRateLevel(char InFrameRateLevel);                                                                         // [0x513d3d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.WriteAntiAliasingState
	// void WriteAntiAliasingState(bool bOpen);                                                                                 // [0x513d348] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.UamSetFrameRateStrategy
	// void UamSetFrameRateStrategy(EUamDeviceRank InDeviceRank, EUAFrameRateLevel InTargetFrameRateLevel, bool bIsDisableGearTwoMpe); // [0x513d224] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.SetMpeFrameInterpolation
	// void SetMpeFrameInterpolation(char bEnable);                                                                             // [0x513cb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.SetGraphicStyleQualityLevel
	// void SetGraphicStyleQualityLevel(char GraphicStyleQualityLevel, class UWorld* World);                                    // [0x513c960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.SetGraphicsQualityLevel
	// void SetGraphicsQualityLevel(char InQuality, class UWorld* World);                                                       // [0x513ca40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.SetFrameRateLevel
	// void SetFrameRateLevel(char InFrameRateLevel, class UWorld* World);                                                      // [0x513c87c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.SetForceBlockFXAA
	// void SetForceBlockFXAA(bool bBlock, class UWorld* World);                                                                // [0x513c78c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.SetCurrentHapticPlayerType
	// void SetCurrentHapticPlayerType(int32_t PlayerType);                                                                     // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.SetAntiAliasingState
	// void SetAntiAliasingState(bool bOpen, class UWorld* World);                                                              // [0x513c5b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ReportNetworkReconnectTimes
	// void ReportNetworkReconnectTimes(int32_t ReconnectTimes);                                                                // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ReportMemInfo
	// void ReportMemInfo();                                                                                                    // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ReadMpeFrameInterpolation
	// char ReadMpeFrameInterpolation();                                                                                        // [0x513bf58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ReadGraphicStyleQualityLevel
	// char ReadGraphicStyleQualityLevel();                                                                                     // [0x513bf34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ReadGraphicsQualityLevel
	// char ReadGraphicsQualityLevel();                                                                                         // [0x2619ba4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ReadFrameRateLevel
	// char ReadFrameRateLevel();                                                                                               // [0x22e8568] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ReadAntiAliasingState
	// bool ReadAntiAliasingState();                                                                                            // [0x279e4ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.InitGraphicsQualityLevel
	// void InitGraphicsQualityLevel();                                                                                         // [0x513af08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.InitContext
	// void InitContext();                                                                                                      // [0x29b1f6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.HapticStop
	// void HapticStop();                                                                                                       // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.HapticPlayWithFile
	// void HapticPlayWithFile(FString heJson, int32_t Loop, int32_t Interval, int32_t Amplitude);                              // [0x513aa38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.HapticPlay
	// void HapticPlay(FString heJson, int32_t Loop, int32_t Interval, int32_t Amplitude);                                      // [0x513aa38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GPUMorphTargetsBlackListHit
	// void GPUMorphTargetsBlackListHit();                                                                                      // [0x513a320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetMinGraphicsQualityLevel
	// char GetMinGraphicsQualityLevel();                                                                                       // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetMaxGraphicsQualityLevel
	// char GetMaxGraphicsQualityLevel();                                                                                       // [0x513a82c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetGraphicStyleQualityLevel
	// char GetGraphicStyleQualityLevel();                                                                                      // [0x513a6b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetGraphicsQualityLevel
	// char GetGraphicsQualityLevel();                                                                                          // [0x513a6cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetFrameRateLevel
	// char GetFrameRateLevel();                                                                                                // [0x513a69c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetFrameRateFromFrameRateLevel
	// int32_t GetFrameRateFromFrameRateLevel(char InFrameRateLevel);                                                           // [0x2306528] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetForceBlockFXAA
	// bool GetForceBlockFXAA();                                                                                                // [0x513a684] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetDefaultGraphicsQualityLevel
	// char GetDefaultGraphicsQualityLevel();                                                                                   // [0x513a55c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetDefaultFrameRateLevel
	// char GetDefaultFrameRateLevel();                                                                                         // [0x513a548] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetCurrentMpeFrameInterpolation
	// char GetCurrentMpeFrameInterpolation();                                                                                  // [0x513a3ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetAntiAliasingState
	// bool GetAntiAliasingState();                                                                                             // [0x513a3d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GetAndroidGPUFamily
	// FString GetAndroidGPUFamily();                                                                                           // [0x4dec008] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.GameSwitchConfig
	// void GameSwitchConfig(class UWorld* World);                                                                              // [0x513a334] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.FPS90BlackListHit
	// void FPS90BlackListHit(int32_t TargetFrameLevel);                                                                        // [0x513a29c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.FPS120BlackListHit
	// void FPS120BlackListHit(int32_t TargetFrameLevel);                                                                       // [0x513a218] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ExecDefaultConfigConsoleVars
	// void ExecDefaultConfigConsoleVars();                                                                                     // [0x14108e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.ExecConfigConsoleVars
	// void ExecConfigConsoleVars();                                                                                            // [0x513a204] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.DeviceLevelToGraphicsQualityLevel
	// char DeviceLevelToGraphicsQualityLevel(int32_t DeviceLevel);                                                             // [0x513a0e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.CheckHapticPlayerSupport
	// int32_t CheckHapticPlayerSupport(int32_t HapticPlayerType);                                                              // [0x513a050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.CheckHapticAmplitudeSupport
	// int32_t CheckHapticAmplitudeSupport();                                                                                   // [0x513a038] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMAgent.BlackListHitReport
	// void BlackListHitReport();                                                                                               // [0x513a024] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFGPMHelperFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfoStringMap
	// void TGPAUpdateGameInfoStringMap(FString Key, TMap<FString, FString> mapData);                                           // [0x513d0c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfoIntString
	// void TGPAUpdateGameInfoIntString(int32_t Key, FString Value);                                                            // [0x513cfc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfo2String
	// void TGPAUpdateGameInfo2String(FString Key, FString Value);                                                              // [0x20aac18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfo2Int
	// void TGPAUpdateGameInfo2Int(int32_t Key, int32_t Value);                                                                 // [0x513cee8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.SetVersionIden
	// void SetVersionIden(FString versionName);                                                                                // [0x513cdfc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.SetSwitcher
	// void SetSwitcher(int32_t switcher, int32_t places);                                                                      // [0x513cd1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.SetServerInfo
	// void SetServerInfo(FString ZoneId, FString roomIp);                                                                      // [0x513b140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.SetQuality
	// void SetQuality(int32_t quality);                                                                                        // [0x513cc34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.SetOpenId
	// void SetOpenId(FString InOpenID);                                                                                        // [0x513cb9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.SetAppVersion
	// void SetAppVersion(FString AppVersion);                                                                                  // [0x513c6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.ReportPayStep
	// void ReportPayStep(int32_t Step, bool Result, int32_t ErrorCode, FString StepName, FString Key, FString Value, bool authorize, bool Finish); // [0x513c180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.ReportLoginStep
	// void ReportLoginStep(TMap<FString, FString> ParamsMap, int32_t Step, bool Result, int32_t ErrorCode, FString StepName, FString StepComment, FString Key, FString Value, bool authorize, bool Finish); // [0x11eab4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.ReportEvent
	// void ReportEvent(FString EventName, FString SpecialChannel, TMap<FString, FString> ParamsMap, FString extraJson);        // [0x513bf7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.ReleaseStepEventContext
	// void ReleaseStepEventContext();                                                                                          // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValueS
	// void PostValueS(FString Category, FString Key, FString InVal);                                                           // [0x1ee6894] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValueI
	// void PostValueI(FString Category, FString Key, int32_t A);                                                               // [0x107a1cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValueF
	// void PostValueF(FString Category, FString Key, float A);                                                                 // [0x513bde0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue3I
	// void PostValue3I(FString Category, FString Key, int32_t A, int32_t B, int32_t C);                                        // [0x513bbf8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue3F
	// void PostValue3F(FString Category, FString Key, float A, float B, float C);                                              // [0x513ba0c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue2I
	// void PostValue2I(FString Category, FString Key, int32_t A, int32_t B);                                                   // [0x513b878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue2F
	// void PostValue2F(FString Category, FString Key, float A, float B);                                                       // [0x513b6e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostStepEvent
	// void PostStepEvent(FString eventCategory, int32_t stepId, int32_t status, int32_t code, FString Msg, FString extraKey, TMap<FString, FString> ParamsMap, bool authorize, bool Finish); // [0x513b2e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostNTL
	// void PostNTL(int32_t latency);                                                                                           // [0x1cbf05c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostFrame
	// bool PostFrame(float DeltaTime);                                                                                         // [0x513b244] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostEventSS
	// void PostEventSS(FString Key, FString Value);                                                                            // [0x513b140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.PostEventIS
	// void PostEventIS(int32_t Key, FString Info);                                                                             // [0x222e58c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkStartUpFinish
	// void MarkStartUpFinish();                                                                                                // [0x513af34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkLevelLoadCompleted
	// void MarkLevelLoadCompleted();                                                                                           // [0x263bc34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkLevelLoad
	// void MarkLevelLoad(FString sceneName);                                                                                   // [0x220d0bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkLevelFin
	// void MarkLevelFin();                                                                                                     // [0x263bc6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.IsUseGPM
	// bool IsUseGPM();                                                                                                         // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.InitStepEventContext
	// void InitStepEventContext();                                                                                             // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.InitContext
	// int32_t InitContext(FString AppID);                                                                                      // [0x513aba8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetSDKVersion
	// FString GetSDKVersion();                                                                                                 // [0x513a94c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetRHITTime
	// float GetRHITTime();                                                                                                     // [0x1b65bbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetReportType
	// int32_t GetReportType();                                                                                                 // [0x513a934] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetRenderThreadTime
	// float GetRenderThreadTime();                                                                                             // [0x1b65b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetPrimsCount
	// int32_t GetPrimsCount();                                                                                                 // [0x1c0a808] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetGPUFrameTime
	// float GetGPUFrameTime();                                                                                                 // [0x1b0035c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetGameThreadTime
	// float GetGameThreadTime();                                                                                               // [0x1b65bf8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetDrawsCount
	// int32_t GetDrawsCount();                                                                                                 // [0x1c0a820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetDeviceLevel
	// int32_t GetDeviceLevel(FString ConfigName, FString FilePath);                                                            // [0x513a570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetDataFromTGPA
	// FString GetDataFromTGPA(FString Key, FString Value);                                                                     // [0x513a404] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.GetAPMQuality
	// int32_t GetAPMQuality();                                                                                                 // [0x513a3bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.EndTupleWrap
	// void EndTupleWrap();                                                                                                     // [0x513a1d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.EndTag
	// void EndTag();                                                                                                           // [0x513a19c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.EndExclude
	// void EndExclude();                                                                                                       // [0x513a16c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.detectInTimeout
	// void detectInTimeout();                                                                                                  // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.BeginTupleWrap
	// void BeginTupleWrap(FString Key);                                                                                        // [0x5139f8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.BeginTag
	// void BeginTag(FString TagName);                                                                                          // [0x5139ef4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.BeginExclude
	// void BeginExclude();                                                                                                     // [0x5139ec4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFGPMHelperFunctionLibrary.AddReportLoginStepParams
	// void AddReportLoginStepParams(FString eventCategory, TMap<FString, FString> ParamsMap);                                  // [0x5139d68] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFiCreatePlugin
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UMFiCreatePlugin : public UMFPWPlugin
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0040   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.SetExtraData
	// void SetExtraData(FString Data);                                                                                         // [0x513b09c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.SendGameEvents
	// bool SendGameEvents(FString Data);                                                                                       // [0x513c490] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.QueryLatestMoments
	// bool QueryLatestMoments();                                                                                               // [0x1bfc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.QueryCanRecord
	// bool QueryCanRecord();                                                                                                   // [0x1bfc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.OpenPage
	// void OpenPage(FString URL);                                                                                              // [0x513b09c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.NotifyUserChanged
	// void NotifyUserChanged(FString account_id, int32_t account_type, int32_t status);                                        // [0x513af64] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.IsEnableRecording
	// bool IsEnableRecording();                                                                                                // [0x513af1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.IsAvailable
	// bool IsAvailable();                                                                                                      // [0x21793e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.InitContext
	// void InitContext(int32_t client_type, FString AppVer, FString Language, FString Openid, int32_t account_type, bool islowend, int32_t env); // [0x513ac4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.GetPlugin
	// class UMFiCreatePlugin* GetPlugin(class UObject* WorldContextObject);                                                    // [0x513a840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFiCreatePlugin.GetLatestMoments
	// TArray<int64_t> GetLatestMoments();                                                                                      // [0x513a6e4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFIntlDiscordObserver
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMFIntlDiscordObserver : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MFPluginWrapper.MFIntlDiscordService
/// Size: 0x00E0 (224 bytes) (0x000040 - 0x0000E0) align 8 MaxSize: 0x00E0
class UMFIntlDiscordService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0040   (0x0070)  MISSED
	class UMFIntlDiscordObserver*                      DiscordObserver;                                            // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B8   (0x0004)  MISSED
	SDK_UNDEFINED(16,1638) /* FDelegateProperty */     __um(LoginDelegate);                                        // 0x00BC   (0x0010)  
	SDK_UNDEFINED(16,1639) /* FDelegateProperty */     __um(FriendQueryDelegate);                                  // 0x00CC   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.Unbind
	// bool Unbind();                                                                                                           // [0x5141914] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.SetFakeFriendCount
	// void SetFakeFriendCount(int32_t Count);                                                                                  // [0x514113c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.RequestLogin
	// void RequestLogin();                                                                                                     // [0x5140c4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.RequestFriendInfo
	// void RequestFriendInfo(int32_t PageNum, int32_t PageCount);                                                              // [0x5140b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.RequestCurrentUserInfo
	// void RequestCurrentUserInfo();                                                                                           // [0x5140aec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.OnUnbindResultBP
	// void OnUnbindResultBP(int32_t RetCode, int32_t ThirdCode);                                                               // [0x513fd6c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.OnQueryFriendResultBP
	// void OnQueryFriendResultBP(int32_t RetCode, TArray<FDiscordUserInfo>& FriendInfos, int32_t FriendCount);                 // [0x513fc18] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.OnLoginResultBP
	// void OnLoginResultBP(int32_t RetCode, int32_t ThirdCode);                                                                // [0x513f504] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.OnGetConnectedUserResultBP
	// void OnGetConnectedUserResultBP(int32_t RetCode, FDiscordUserInfo& UserInfo);                                            // [0x513f3e4] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.IsBound
	// bool IsBound();                                                                                                          // [0x513f1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.IsAvailable
	// bool IsAvailable();                                                                                                      // [0x513f1ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.IsAuthorized
	// bool IsAuthorized();                                                                                                     // [0x513f1ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.InitAuthStatusAfterLogin
	// void InitAuthStatusAfterLogin();                                                                                         // [0x513f160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.GetPlugin
	// class UMFIntlDiscordService* GetPlugin(class UObject* WorldContextObject);                                               // [0x513e9a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.GetLoginState
	// EDiscordLoginState GetLoginState();                                                                                      // [0x29c3198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFIntlDiscordService.GetFriendInfos
	// TArray<FDiscordUserInfo> GetFriendInfos();                                                                               // [0x513e7e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFIntlLBSObserver
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFIntlLBSObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/MFPluginWrapper.MFIntlLoginObserver
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class UMFIntlLoginObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Class /Script/MFPluginWrapper.MFIntlWebViewObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFIntlWebViewObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFIOSRuntimeHelper
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFIOSRuntimeHelper : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.RequestUserAgent
	// void RequestUserAgent();                                                                                                 // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.RequestASAAttribution
	// void RequestASAAttribution();                                                                                            // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.GetUserAgentError
	// FString GetUserAgentError();                                                                                             // [0x513ebb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.GetUserAgent
	// FString GetUserAgent();                                                                                                  // [0x513ea9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.GetUniversalLinkActivityID
	// int32_t GetUniversalLinkActivityID();                                                                                    // [0x4b95918] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.GetASAInfoError
	// FString GetASAInfoError();                                                                                               // [0x513e6b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.GetASAInfo
	// FString GetASAInfo();                                                                                                    // [0x513e5d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFIOSRuntimeHelper.ClearUniversalLinkActivityID
	// void ClearUniversalLinkActivityID();                                                                                     // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFLBSObserver
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMFLBSObserver : public UMFPWObject
{ 
public:
	SDK_UNDEFINED(16,1640) /* FMulticastInlineDelegate */ __um(OnAuthorizationStatusChanged);                      // 0x0040   (0x0010)  
};

/// Class /Script/MFPluginWrapper.MFLBSService
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMFLBSService : public UMFGCloudService
{ 
public:
	class UMFIntlLBSObserver*                          INTLLBSObserver;                                            // 0x0040   (0x0008)  
	class UMFLBSObserver*                              LBSObserver;                                                // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFLBSService.RequestIPInfo
	// void RequestIPInfo();                                                                                                    // [0x5140c38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFLBSService.QueryLocationPermission
	// void QueryLocationPermission();                                                                                          // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFLBSService.QueryLocation
	// void QueryLocation();                                                                                                    // [0x5140908] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFLBSService.OnIOSLocationPermissionRequestReturn
	// void OnIOSLocationPermissionRequestReturn(int32_t AuthorizationStatus);                                                  // [0x4dec47c] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFLBSService.OnAndroidLocationPermissionRequestReturn
	// void OnAndroidLocationPermissionRequestReturn(TArray<FString>& Permissions, TArray<bool>& GrantResults);                 // [0x513f260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFLBSService.CheckLocationServices
	// bool CheckLocationServices();                                                                                            // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFLBSService.CheckLocationPermission
	// int32_t CheckLocationPermission();                                                                                       // [0x4b95918] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFMidasObserver
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class UMFMidasObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Class /Script/MFPluginWrapper.MFMidasService
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000A0) align 16 MaxSize: 0x00A0
class UMFMidasService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0040   (0x0048)  MISSED
	class UMFMidasObserver*                            MFMidasObserver;                                            // 0x0088   (0x0008)  
	class UMFCTIPayObserver*                           MFCTIPayObserver;                                           // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0098   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFMidasService.PayMonthCard
	// void PayMonthCard(FString ProductId, int32_t Price, int32_t Time, FString callBackData, FString ServiceName, FString ServiceCode, bool bAutoPay); // [0x5140518] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMidasService.PayGoods
	// void PayGoods(FString GoodsTokenUrl, int32_t GoodsPrice, int32_t GoodsNum, FString callBackData, int32_t ZoneId, FString OfferId, FString Pf, FString PfExt, FString ChannelExtras); // [0x51401b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMidasService.PayCoin
	// void PayCoin(FString ProductId, bool IsSteam);                                                                           // [0x51400b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasReprovideFinished
	// void OnMidasReprovideFinished(int32_t RetCode, FString resultJson);                                                      // [0x513fb10] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasPayFinished
	// void OnMidasPayFinished(int32_t ResultCode, FString innerCode, FString resultMsg, FString callBackData);                 // [0x513f950] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasOvertime
	// void OnMidasOvertime(bool overtimeState);                                                                                // [0x512beb0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasLoginExpired
	// void OnMidasLoginExpired();                                                                                              // [0x29bf9b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasInitFinished
	// void OnMidasInitFinished(FString resultJson);                                                                            // [0x513f850] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasGetLocalPrice
	// void OnMidasGetLocalPrice(int32_t RetCode, FString Result);                                                              // [0x513f748] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasGetIntroPrice
	// void OnMidasGetIntroPrice(FString Result);                                                                               // [0x513f69c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.OnMidasGetInfoFinished
	// void OnMidasGetInfoFinished(FString Result);                                                                             // [0x513f5f0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMidasService.Init
	// bool Init(bool IsSandBox, FString InOfferId, FString InProvideOfferId, int32_t GoodsZoneId, int32_t InPayChannel, FString Openid, FString Token, FString Country, FString CurrencyType, FString IdcInfo); // [0x513ed24] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMidasService.GetLocalPriceInfo
	// void GetLocalPriceInfo(TArray<FString>& ProductIds, FString ProductType);                                                // [0x513e878] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMidasService.GetChargeInfo
	// void GetChargeInfo();                                                                                                    // [0x513e7cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFMNAService
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UMFMNAService : public UMFGCloudService
{ 
public:
	class UClass*                                      StartingWidgetClass;                                        // 0x0040   (0x0008)  
	class UUserWidget*                                 CurrentWidget;                                              // 0x0048   (0x0008)  


	/// Functions
	// Function /Script/MFPluginWrapper.MFMNAService.TransportInfo
	// void TransportInfo();                                                                                                    // [0x51418e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.StopMNA
	// void StopMNA();                                                                                                          // [0x51418b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.StartSpeedEnterMapLoading
	// void StartSpeedEnterMapLoading();                                                                                        // [0x5141884] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.StartSpeed
	// void StartSpeed(FString VipIP, int32_t VipPort);                                                                         // [0x5141718] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.SetZoneId
	// void SetZoneId(int32_t ZoneId);                                                                                          // [0x5141684] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.SetUserName
	// void SetUserName(int32_t channelType, FString Openid);                                                                   // [0x5141514] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.SetPvpSpeedIp
	// void SetPvpSpeedIp(FString VipIP, int32_t VipPort);                                                                      // [0x514130c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.SetObserver
	// void SetObserver(FString Tag, class UClass* InClass);                                                                    // [0x230ae98] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.SetGameIp
	// void SetGameIp();                                                                                                        // [0x51412dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.SetControlDomain
	// void SetControlDomain(FString ControlDomain, int64_t ControlPort);                                                       // [0x1b23b5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.QueryPreciseKartin
	// void QueryPreciseKartin(int64_t curServTime, int64_t pvpDurationTime, FString triggerDelay);                             // [0x5140938] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.QueryKartin
	// void QueryKartin(FString Tag);                                                                                           // [0x5140810] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.Ping
	// void Ping();                                                                                                             // [0x51407c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.OnWebViewBackCall
	// void OnWebViewBackCall(int32_t methodId, int32_t MsgType, FString MsgJsonData);                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMNAService.OnNetWorkTestCall
	// void OnNetWorkTestCall(int32_t flag, int32_t jump_network, int32_t jump_signal, int32_t jump_direct, int32_t direct_status, FString direct_desc, int32_t jump_export, int32_t export_status, FString export_desc, int32_t jump_terminal, int32_t terminal_status, FString terminal_desc, int32_t jump_router, int32_t router_status, FString router_desc); // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFMNAService.IsQOSWork
	// void IsQOSWork();                                                                                                        // [0x513f1f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.IsAnyVPNOpen
	// bool IsAnyVPNOpen();                                                                                                     // [0x513f174] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.Init
	// void Init(FString QQAppID);                                                                                              // [0x22bbe84] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.GoFront
	// void GoFront();                                                                                                          // [0x513ecf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.GoBack
	// void GoBack();                                                                                                           // [0x513ecc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.GetStaticMNAService
	// class UMFMNAService* GetStaticMNAService();                                                                              // [0x513ea3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.GetIpGroupDelays
	// void GetIpGroupDelays();                                                                                                 // [0x513e848] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.GetDelay
	// int32_t GetDelay();                                                                                                      // [0x513a934] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.EndSpeed
	// void EndSpeed();                                                                                                         // [0x513e5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.ChangeMenuWidget
	// void ChangeMenuWidget(class UClass* NewWidgetClass);                                                                     // [0x513e258] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFMNAService.AddServiceByClass
	// class UMFMNAService* AddServiceByClass(class UClass* InClass);                                                           // [0x20f8d0c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFPluginWrapper.BrushWrapperArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBrushWrapperArray
{ 
	TArray<class UObject*>                             Items;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/MFPluginWrapper.MFPandoraService
/// Size: 0x0098 (152 bytes) (0x000040 - 0x000098) align 8 MaxSize: 0x0098
class UMFPandoraService : public UMFGCloudService
{ 
public:
	TMap<FString, FBrushWrapperArray>                  BrushWrapperMap;                                            // 0x0040   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFPandoraService.ShowItemTips
	// void ShowItemTips(class UCanvasPanel* Anchor, FString ItemId);                                                           // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.ShowItemIcon
	// void ShowItemIcon(class UImage* Image, FString ItemId);                                                                  // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.ShowItemEx
	// void ShowItemEx(class UCanvasPanel* Anchor, FString ItemId, int32_t itemCnt);                                            // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.SetSDKVersion
	// void SetSDKVersion(int32_t InVersion);                                                                                   // [0x4dec47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.SetScriptExternalLoadDir
	// void SetScriptExternalLoadDir(FString InFilePath);                                                                       // [0x514144c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.SetFont
	// void SetFont(FString FontName, FString FontPath);                                                                        // [0x51411d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.ScreenShotWidgetToPNG
	// void ScreenShotWidgetToPNG(FString Filename, class UWidget* Widget, FVector2D& DrawSize, FVector2D& TextureSize, FVector2D InWindowOffset); // [0x5140c60] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/MFPluginWrapper.MFPandoraService.PlaySound
	// void PlaySound(FString ID);                                                                                              // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.PandoraLoadBrush
	// void PandoraLoadBrush(class UObject* Obj, FSlateBrush& Brush, FString InPath);                                           // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.PandoraCreateUWidget
	// class UWidget* PandoraCreateUWidget(FString InPath);                                                                     // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.OpenApp
	// void OpenApp(FString AppID, FString OpenArgs);                                                                           // [0x513ffac] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/MFPluginWrapper.MFPandoraService.Open
	// void Open(int32_t env, TMap<FString, FString>& UserData);                                                                // [0x513fe58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.OnViewCreated
	// void OnViewCreated(class UUserWidget* Widget, FString AppInfo);                                                          // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.OnViewAboutToDestroy
	// void OnViewAboutToDestroy(class UUserWidget* Widget, FString AppInfo);                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.OnSDKMessage
	// int32_t OnSDKMessage(FString Msg);                                                                                       // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.OnReportData
	// int32_t OnReportData(FString EventName, FString Data);                                                                   // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.OnRefreshUserdata
	// int32_t OnRefreshUserdata();                                                                                             // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.Jump
	// void Jump(FString Type, FString Content);                                                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.Init
	// bool Init();                                                                                                             // [0x27c3c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.GetCurrency
	// void GetCurrency(TMap<FString, FString>& Results);                                                                       // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.GetAccountToken
	// void GetAccountToken(TMap<FString, FString>& Results);                                                                   // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFPandoraService.DoCmdWithParams
	// void DoCmdWithParams(TMap<FString, FString>& Cmd);                                                                       // [0x513e444] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.DoCmd
	// void DoCmd(FString Cmd);                                                                                                 // [0x513e3ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.Close
	// bool Close();                                                                                                            // [0x513e378] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPandoraService.CallGameCmd
	// int32_t CallGameCmd(FString InCmd, int32_t Type);                                                                        // [0x182d6bc] Event|Public|BlueprintEvent 
};

/// Class /Script/MFPluginWrapper.MFPWGetPluginManagerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFPWGetPluginManagerInterface : public UInterface
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFPWMessageHeader
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UMFPWMessageHeader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/MFPluginWrapper.MFPWPluginManager
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMFPWPluginManager : public UObject
{ 
public:
	TMap<class UClass*, class UMFPWPlugin*>            PluginMap;                                                  // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0078   (0x0010)  MISSED
	TArray<class UClass*>                              PluginClasses;                                              // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0098   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceIF
	// FText TextFormatInterfaceIF(FString FormatString, FString Parm1, int32_t Parm2, FString Parm3, float Parm4);             // [0x514fd60] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI3
	// FText TextFormatInterfaceI3(FString FormatString, FString Parm1, int32_t Parm2, FString Parm3, int32_t Parm4, FString Parm5, int32_t Parm6); // [0x514f8a0] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI2f
	// FText TextFormatInterfaceI2f(FString FormatString, FString Parm1, int32_t Parm2, FString Parm3, int32_t Parm4, FString Parm5, float Parm6); // [0x514f584] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI2
	// FText TextFormatInterfaceI2(FString FormatString, FString Parm1, int32_t Parm2, FString Parm3, int32_t Parm4);           // [0x514f318] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI
	// FText TextFormatInterfaceI(FString FormatString, FString Parm1, int32_t Parm2);                                          // [0x514fbb8] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceFI
	// FText TextFormatInterfaceFI(FString FormatString, FString Parm1, float Parm2, FString Parm3, int32_t Parm4);             // [0x514f0ac] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF3
	// FText TextFormatInterfaceF3(FString FormatString, FString Parm1, float Parm2, FString Parm3, float Parm4, FString Parm5, float Parm6); // [0x514ebe4] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF2I
	// FText TextFormatInterfaceF2I(FString FormatString, FString Parm1, float Parm2, FString Parm3, float Parm4, FString Parm5, int32_t Parm6); // [0x514e8c8] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF2
	// FText TextFormatInterfaceF2(FString FormatString, FString Parm1, float Parm2, FString Parm3, float Parm4);               // [0x514e658] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF
	// FText TextFormatInterfaceF(FString FormatString, FString Parm1, float Parm2);                                            // [0x514ef04] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebViewWithRailEncode
	// void OpenWebViewWithRailEncode(FString URL);                                                                             // [0x5149484] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebViewWithoutEncode
	// void OpenWebViewWithoutEncode(FString URL);                                                                              // [0x5149584] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebViewWithEncodeDebug
	// void OpenWebViewWithEncodeDebug(FString URL, int32_t InOrientation);                                                     // [0x5149388] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebViewWithEncode
	// void OpenWebViewWithEncode(FString URL, int32_t InOrientation);                                                          // [0x514928c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebViewInterface
	// void OpenWebViewInterface(FString URL, int32_t InOrientation, bool IsEncode, bool ShowDebugUrl, bool IsEmbedWebView);    // [0x51490a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebViewEx
	// void OpenWebViewEx(FString URL, int32_t InOrientation, bool bEncodeUrl, bool bWegameBrowser);                            // [0x5148f1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebViewCustomerService
	// void OpenWebViewCustomerService(FString ScenceId, FString GameZone, FString ZoneName, FString RoleName, FString RoleId); // [0x5148ca8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenWebView
	// void OpenWebView(FString URL);                                                                                           // [0x5148c04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenRateWindow
	// void OpenRateWindow();                                                                                                   // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OpenGetIntelSDKVersion
	// FString OpenGetIntelSDKVersion();                                                                                        // [0x4dec008] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.OnTssServerLogin
	// void OnTssServerLogin(FString feature_name, int32_t feature_name_len, FString Data, int32_t data_len, int32_t data_crc); // [0x514877c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.NicoTest2
	// void NicoTest2(int32_t nParam, FString strParam, int32_t nParam2);                                                       // [0x51474e0] Final|Exec|Native|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.NicoTest
	// void NicoTest(int32_t nParam);                                                                                           // [0x5147634] Final|Exec|Native|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NTextToNormalNumberString
	// FString L10NTextToNormalNumberString(FText TextNumber);                                                                  // [0x5146f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NTextToInt
	// int64_t L10NTextToInt(FText TextNumber);                                                                                 // [0x5146ebc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NTextToFloat
	// float L10NTextToFloat(FText TextNumber);                                                                                 // [0x5146e08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NAsTimespan
	// FText L10NAsTimespan(FString Type, int32_t Hour, int32_t Minute, int32_t Second);                                        // [0x5146c40] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NAsTime
	// FText L10NAsTime(FString TimeZone, FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // [0x51468b4] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NAsNumberInt
	// FText L10NAsNumberInt(int64_t InputNumber);                                                                              // [0x1b23c44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NAsNumberFloat
	// FText L10NAsNumberFloat(double InputNumber);                                                                             // [0x51467e8] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NAsDateTime
	// FText L10NAsDateTime(FString TimeZone, FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // [0x514645c] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.L10NAsDate
	// FText L10NAsDate(FString TimeZone, FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond); // [0x51460d0] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.IsEmulator
	// bool IsEmulator();                                                                                                       // [0x5145d1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.GetMSDKEncodeUrl
	// FString GetMSDKEncodeUrl(FString URL);                                                                                   // [0x5145478] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.GetMFPWPluginByClass
	// class UMFPWPlugin* GetMFPWPluginByClass(class UObject* WorldContextObject, class UClass* InClass);                       // [0x5145390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.GetEmulatorName
	// FString GetEmulatorName();                                                                                               // [0x51451b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.GetDeviceId
	// void GetDeviceId();                                                                                                      // [0x51451a4] Final|Exec|Native|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.GetAdultType
	// FString GetAdultType();                                                                                                  // [0x5144e60] Final|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.GenerateGuid
	// FString GenerateGuid();                                                                                                  // [0x23237a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.CustomPostValueS
	// void CustomPostValueS(FString Category, FString Key, FString InVal);                                                     // [0x512c510] Final|Exec|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.CustomPostValueI
	// void CustomPostValueI(FString Category, FString Key, int32_t A);                                                         // [0x5143ccc] Final|Exec|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.CustomPostValueF
	// void CustomPostValueF(FString Category, FString Key, float A);                                                           // [0x5143b88] Final|Exec|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.CustomEndTupleWrap
	// void CustomEndTupleWrap();                                                                                               // [0x1e39048] Final|Exec|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.CustomBeginTupleWrap
	// void CustomBeginTupleWrap(FString Category);                                                                             // [0x512c1e0] Final|Exec|Native|Static|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.CppVMTest
	// void CppVMTest(int32_t nParam);                                                                                          // [0x5143864] Final|Exec|Native|Public 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.CloseWebView
	// void CloseWebView();                                                                                                     // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.ChangeWebView
	// void ChangeWebView(FString Json);                                                                                        // [0x514370c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFPWPluginManager.AddFriend
	// void AddFriend(FString Openid, class UObject* WorldContextObject, FString Channel);                                      // [0x514357c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFSteamPlugin
/// Size: 0x0120 (288 bytes) (0x000040 - 0x000120) align 8 MaxSize: 0x0120
class UMFSteamPlugin : public UMFPWPlugin
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0040   (0x00E0)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFSteamPlugin.QueryStats
	// void QueryStats();                                                                                                       // [0x5149784] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFSteamPlugin.OpenStorePage
	// bool OpenStorePage();                                                                                                    // [0x5148ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFSteamPlugin.IsSteamEnabled
	// bool IsSteamEnabled();                                                                                                   // [0x5145d78] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFSteamPlugin.GetSteamUID
	// int64_t GetSteamUID();                                                                                                   // [0x5145888] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFSteamPlugin.GetPlugin
	// class UMFSteamPlugin* GetPlugin(class UObject* WorldContextObject);                                                      // [0x5145650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFSteamPlugin.GetCachedStat
	// void GetCachedStat(FString StatName);                                                                                    // [0x5144f8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFSteamPlugin.FlushAchievementStatus
	// void FlushAchievementStatus();                                                                                           // [0x5144c50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFTDMService
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFTDMService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFTDMService.UploadMessage
	// void UploadMessage(int32_t SrcId, FString EventName);                                                                    // [0x5150658] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTDMService.SetRouter
	// void SetRouter(bool bTest, FString URL);                                                                                 // [0x23a29a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTDMService.InitTDM
	// bool InitTDM(FString& AppID, FString& AppChannel, FString& AppKey, bool bEnableReport, bool bEnableDeviceInfo);          // [0x223d1c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTDMService.Add
	// void Add(FString Key, FString Value, bool bIntKey);                                                                      // [0x5143404] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFTGALiveService
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFTGALiveService : public UMFGCloudService
{ 
public:


	/// Functions
	// Function /Script/MFPluginWrapper.MFTGALiveService.OnTGACallbackUnreal
	// void OnTGACallbackUnreal(int32_t ClientType, FString Msg);                                                               // [0x512b9b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFTGALiveService.MFTGALiveSDKUpdateUserInfo
	// void MFTGALiveSDKUpdateUserInfo(FString JsonString);                                                                     // [0x478e118] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTGALiveService.MFTGALiveSDKUpdateStartParams
	// void MFTGALiveSDKUpdateStartParams(FString JsonString);                                                                  // [0x514739c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTGALiveService.MFTGALiveSDKTVAvailable
	// bool MFTGALiveSDKTVAvailable(FString ProductId);                                                                         // [0x514713c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTGALiveService.MFTGALiveSDKStartTV
	// bool MFTGALiveSDKStartTV(FString ProductId, int32_t SourceType);                                                         // [0x5147240] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTGALiveService.MFTGALiveSDKQuitTGALiveSDK
	// bool MFTGALiveSDKQuitTGALiveSDK(FString JsonString);                                                                     // [0x514713c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTGALiveService.MFTGALiveSDKInitialize
	// void MFTGALiveSDKInitialize(FString JsonString);                                                                         // [0x514703c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFTGALiveService.MFTGALiveGetUrl
	// FString MFTGALiveGetUrl();                                                                                               // [0x4dec008] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFPluginWrapper.MFVoiceObserver
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMFVoiceObserver : public UMFPWObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0040   (0x0060)  MISSED
};

/// Class /Script/MFPluginWrapper.MFVoiceService
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align 8 MaxSize: 0x0070
class UMFVoiceService : public UMFGCloudService
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0040   (0x0020)  MISSED
	class UMFVoiceObserver*                            MFVoiceObserver;                                            // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0068   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFVoiceService.UploadRecordedFile
	// int32_t UploadRecordedFile(FString FilePath);                                                                            // [0x515075c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.UpdateCoordinate
	// int32_t UpdateCoordinate(FString RoomName, int64_t X, int64_t Y, int64_t Z, int64_t R);                                  // [0x5150450] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TextTranslate
	// int32_t TextTranslate(FString Text, int32_t srcLang, int32_t targetLang, int32_t nTimeoutMS);                            // [0x514b2c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TextToStreamSpeechStop
	// int32_t TextToStreamSpeechStop();                                                                                        // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TextToStreamSpeechStart
	// int32_t TextToStreamSpeechStart(FString Text, FString VoiceType, int32_t nTimeoutMS, FString FilePath);                  // [0x5150268] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TextToSpeechFile
	// int32_t TextToSpeechFile(FString Text, int32_t lang, FString FilePath, int32_t VoiceType, float voiceRate, float Volume, int32_t nTimeoutMS); // [0x514ffd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TextToSpeech
	// int32_t TextToSpeech(FString Text, int32_t lang, int32_t VoiceType, int32_t nTimeoutMS);                                 // [0x514b2c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestMic
	// int32_t TestMic();                                                                                                       // [0x514e610] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadReturnChild4
	// class UUserWidget* TestHotFixOverloadReturnChild4();                                                                     // [0x490e9a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadReturnChild2
	// TArray<int32_t> TestHotFixOverloadReturnChild2();                                                                        // [0x514e544] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadReturnChild1
	// int32_t TestHotFixOverloadReturnChild1();                                                                                // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParent
	// void TestHotFixOverloadParent(int32_t test1, bool test2, TArray<int32_t> test3, TMap<int32_t, FString> test4, TSet<FString> test5, FString test6, FMyHotfixStruct test7, FMyHotfixStruct& test8); // [0x514e110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild8
	// void TestHotFixOverloadParamChild8(class UMFVoiceService* test);                                                         // [0x514e094] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild7
	// void TestHotFixOverloadParamChild7(FMyHotfixStruct& test);                                                               // [0x514e020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild6
	// void TestHotFixOverloadParamChild6(FMyHotfixStruct test);                                                                // [0x514dfa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild5
	// void TestHotFixOverloadParamChild5(TArray<int32_t>& test);                                                               // [0x5060d14] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild4
	// void TestHotFixOverloadParamChild4(TArray<int32_t> test);                                                                // [0x514de88] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild3
	// void TestHotFixOverloadParamChild3(int32_t& test);                                                                       // [0x514de10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild2
	// void TestHotFixOverloadParamChild2(int32_t test);                                                                        // [0x4dec47c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFixOverloadParamChild1
	// void TestHotFixOverloadParamChild1();                                                                                    // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFix7
	// class UObject* TestHotFix7(int32_t test1, bool test2, TArray<int32_t> test3, TMap<int32_t, FString> test4, TSet<FString> test5, FString test6, FMyHotfixStruct test7, FMyHotfixStruct& test8, class UUserWidget* test9); // [0x514d93c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFix6
	// FMyHotfixStruct TestHotFix6(int32_t test1, bool test2, TArray<int32_t> test3, TMap<int32_t, FString> test4, TSet<FString> test5, FString test6, FMyHotfixStruct test7, FMyHotfixStruct& test8); // [0x514d4c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFix5
	// FString TestHotFix5(int32_t test1, bool test2, TArray<int32_t> test3, TMap<int32_t, FString> test4, TSet<FString> test5, FString test6, FMyHotfixStruct test7, FMyHotfixStruct& test8); // [0x514d060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFix4
	// TMap<int32_t, FString> TestHotFix4(int32_t test1, bool test2, TArray<int32_t> test3, TMap<int32_t, FString> test4, TSet<FString> test5, FString test6, FMyHotfixStruct test7, FMyHotfixStruct& test8); // [0x514cc00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFix3
	// TArray<int32_t> TestHotFix3(int32_t test1, bool test2, TArray<int32_t> test3, TMap<int32_t, FString> test4, TSet<FString> test5, FString test6, FMyHotfixStruct test7, FMyHotfixStruct& test8); // [0x514c79c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFix2
	// bool TestHotFix2(int32_t& test1, bool& test2, TArray<int32_t>& test3, TMap<int32_t, FString>& test4, TSet<FString>& test5, FString& test6, FMyHotfixStruct test7, FMyHotfixStruct& test8); // [0x514c260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.TestHotFix1
	// int32_t TestHotFix1(int32_t test1, bool test2, TArray<int32_t> test3, TMap<int32_t, FString> test4, TSet<FString> test5, FString test6, FMyHotfixStruct test7, FMyHotfixStruct& test8); // [0x514bdf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SwitchToVoiceOutputDeviceByIndex
	// void SwitchToVoiceOutputDeviceByIndex(int32_t Index);                                                                    // [0x514bd60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SwitchToVoiceInputDeviceByIndex
	// void SwitchToVoiceInputDeviceByIndex(int32_t Index);                                                                     // [0x514bccc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SwitchToVoiceInputDeviceByDeviceId
	// bool SwitchToVoiceInputDeviceByDeviceId(FString DeviceID);                                                               // [0x514bb94] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.StopRecording
	// int32_t StopRecording();                                                                                                 // [0x514bb4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.StopPlayFile
	// int32_t StopPlayFile();                                                                                                  // [0x514bb04] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.StartRecording
	// int32_t StartRecording(FString FilePath);                                                                                // [0x514ba40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SpeechTranslate
	// int32_t SpeechTranslate(FString fileID, int32_t srcLang, int32_t targetLang, int32_t transType, int32_t nTimeoutMS);     // [0x514b834] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SpeechToText
	// int32_t SpeechToText(FString fileID, EMFVoiceLanguage Language);                                                         // [0x514b724] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SpeechFileTranslate
	// int32_t SpeechFileTranslate(FString FilePath, int32_t srcLang, int32_t targetLang, int32_t VoiceType, float voiceRate, float Volume, int32_t nTimeoutMS); // [0x514b4b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SpeechFileToText
	// int32_t SpeechFileToText(FString FilePath, int32_t srcLang, int32_t targetLang, int32_t nTimeoutMS);                     // [0x514b2c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetVolumeForUseID
	// int32_t SetVolumeForUseID(FString RoomName, FString useid, int32_t vol);                                                 // [0x514b160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetVolumeForRoom
	// int32_t SetVolumeForRoom(FString RoomName, int32_t vol);                                                                 // [0x514b05c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetVoiceMode
	// int32_t SetVoiceMode(int32_t VoiceMode);                                                                                 // [0x29ba874] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetTransSecInfo
	// void SetTransSecInfo(FString secInfo);                                                                                   // [0x478e20c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetSpeakerVolume
	// int32_t SetSpeakerVolume(int32_t Volume);                                                                                // [0x514afa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetServerInfo
	// int32_t SetServerInfo(FString URL, FString defaultipsvr);                                                                // [0x514ae6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetRSTTServerInfo
	// int32_t SetRSTTServerInfo(FString RSTTUrl, FString httpDnsIPs, FString wxAppID);                                         // [0x514aa44] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetReportedPlayerInfo
	// int32_t SetReportedPlayerInfo(TArray<FString> cszOpenID, TArray<int32_t> nMemberID, int32_t nCount);                     // [0x514ac88] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetReportBufferTime
	// void SetReportBufferTime(int32_t nTimeSec);                                                                              // [0x514abe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetPlayerVolume
	// int32_t SetPlayerVolume(FString PlayerId, int32_t vol);                                                                  // [0x514a940] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetMicVolume
	// int32_t SetMicVolume(int32_t Volume);                                                                                    // [0x514a884] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetCivilBinPath
	// int32_t SetCivilBinPath(FString pPath);                                                                                  // [0x514a780] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetBitRate
	// int32_t SetBitRate(int32_t bitrate);                                                                                     // [0x5139864] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetAudience
	// int32_t SetAudience(TArray<int32_t> members, int32_t Count, FString RoomName);                                           // [0x514a5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.SetAppInfo
	// int32_t SetAppInfo(FString AppID, FString AppKey, FString Openid);                                                       // [0x514a448] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.Set3DUpward
	// int32_t Set3DUpward(float X, float Y, float Z);                                                                          // [0x514a308] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.Set3DPosition
	// int32_t Set3DPosition(float X, float Y, float Z);                                                                        // [0x514a1c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.Set3DForward
	// int32_t Set3DForward(float X, float Y, float Z);                                                                         // [0x514a088] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.Set3DDistProperties
	// int32_t Set3DDistProperties(int32_t attenuationModel, float minDis, float maxDis, float rollOff);                        // [0x5149ef4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.RSTSSpeechToText
	// int32_t RSTSSpeechToText(int32_t srcLang, TArray<int32_t> pTargetLangs, int32_t nTargetLangCnt, int32_t nTimeoutMS);     // [0x5149b54] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.RSTSSpeechToSpeech
	// int32_t RSTSSpeechToSpeech(int32_t srcLang, TArray<int32_t> pTargetLangs, int32_t nTargetLangCnt, FString dirPath, int32_t VoiceType, float voiceRate, float Volume, int32_t nTimeoutMS); // [0x514985c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.ReportPlayer
	// int32_t ReportPlayer(TArray<FString> cszOpenID, int32_t nCount, FString cszInfo);                                        // [0x5149d68] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.QuitRoom
	// int32_t QuitRoom(FString RoomName);                                                                                      // [0x5149798] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.QueryPermission
	// int32_t QueryPermission();                                                                                               // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.PrintCurrentVoiceOutputDeviceInfo
	// void PrintCurrentVoiceOutputDeviceInfo();                                                                                // [0x5149760] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.PlayRecordedFile
	// int32_t PlayRecordedFile(FString FilePath);                                                                              // [0x514969c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.OpenSpeaker
	// int32_t OpenSpeaker();                                                                                                   // [0x5148b58] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.OpenMic
	// int32_t OpenMic();                                                                                                       // [0x5148b24] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnVoiceRecording
	// void OnVoiceRecording();                                                                                                 // [0x5148b0c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnUploadedFile
	// void OnUploadedFile(int32_t code, FString FilePath, FString fileID);                                                     // [0x51489b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnStreamSpeechToTextDone
	// void OnStreamSpeechToTextDone(int32_t code, int32_t Error, FString Result, FString voicePath);                           // [0x51485c8] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnStatusUpdate
	// void OnStatusUpdate(int32_t status, FString RoomName, int32_t memberID);                                                 // [0x514847c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnSpeechToTextDone
	// void OnSpeechToTextDone(int32_t code, FString fileID, FString Result);                                                   // [0x5148320] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnRoomMemberInfo
	// void OnRoomMemberInfo(int32_t code, FString RoomName, int32_t memid, FString Openid);                                    // [0x514816c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnReportPlayer
	// void OnReportPlayer(int32_t code, FString cszInfo);                                                                      // [0x5137ce0] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnQuitedRoom
	// void OnQuitedRoom(int32_t code, FString RoomName);                                                                       // [0x5148064] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnPlayedRecordedFile
	// void OnPlayedRecordedFile(int32_t code, FString FilePath);                                                               // [0x5147f5c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnMultiRoomMemberVoice
	// void OnMultiRoomMemberVoice(FString RoomName, int32_t memid, int32_t status);                                            // [0x5147e0c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnMemberVoice
	// void OnMemberVoice(int32_t memid, int32_t status);                                                                       // [0x5147d20] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnJoinedRoom
	// void OnJoinedRoom(int32_t code, FString RoomName, int32_t memberID);                                                     // [0x5147bd4] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnIOSPermissionRequestReturn
	// void OnIOSPermissionRequestReturn(bool status);                                                                          // [0x5137de8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnEvent
	// void OnEvent(int32_t Event, FString Info);                                                                               // [0x5147a78] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnDownloadedFile
	// void OnDownloadedFile(int32_t code, FString FilePath, FString fileID);                                                   // [0x5138a18] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnDeviceEvent
	// void OnDeviceEvent(int32_t code, int32_t DeviceType, FString deviceinfo);                                                // [0x514792c] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnAppliedMessageKey
	// void OnAppliedMessageKey(int32_t code);                                                                                  // [0x5147890] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.OnAndroidPermissionRequestReturn
	// void OnAndroidPermissionRequestReturn(TArray<FString>& Permissions, TArray<bool>& GrantResults);                         // [0x51476dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.JoinTeamRoom
	// int32_t JoinTeamRoom(FString RoomName);                                                                                  // [0x5145f98] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.JoinRangeRoom
	// int32_t JoinRangeRoom(FString RoomName);                                                                                 // [0x5145e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.JoinNationalRoom
	// int32_t JoinNationalRoom(FString RoomName);                                                                              // [0x5145d9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.IsSpeaking
	// bool IsSpeaking();                                                                                                       // [0x5145d34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFPluginWrapper.MFVoiceService.invoke
	// int32_t invoke(int32_t Cmd, int32_t Param1, int32_t Param2, int32_t& Output);                                            // [0x5150894] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.InitMFVoiceEngineAsync
	// void InitMFVoiceEngineAsync(FString AppID, FString AppKey, FString Openid);                                              // [0x5145b78] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.InitMFVoiceEngine
	// int32_t InitMFVoiceEngine(FString AppID, FString AppKey, FString Openid);                                                // [0x51459d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetVoiceOutputDeviceNameList
	// TArray<FString> GetVoiceOutputDeviceNameList();                                                                          // [0x514593c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetVoiceInputDeviceNameList
	// TArray<FString> GetVoiceInputDeviceNameList();                                                                           // [0x51458ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetSpeakerState
	// int32_t GetSpeakerState();                                                                                               // [0x5145840] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetSpeakerLevel
	// int32_t GetSpeakerLevel();                                                                                               // [0x51457f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetRoomMembers
	// int32_t GetRoomMembers(FString RoomName);                                                                                // [0x5145744] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetPlayerVolume
	// int32_t GetPlayerVolume(FString PlayerId);                                                                               // [0x1ec5ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetMicState
	// int32_t GetMicState();                                                                                                   // [0x5145608] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetMicLevel
	// int32_t GetMicLevel(bool FadeOut);                                                                                       // [0x5145544] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetFileTime
	// float GetFileTime(FString FilePath);                                                                                     // [0x51452cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetCurrentVoiceOutputDeviceIndex
	// int32_t GetCurrentVoiceOutputDeviceIndex();                                                                              // [0x5145154] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetCurrentVoiceInputDeviceIndex
	// int32_t GetCurrentVoiceInputDeviceIndex();                                                                               // [0x5145100] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetCurrentVoiceInputDeviceIdByIndex
	// FString GetCurrentVoiceInputDeviceIdByIndex(int32_t Index);                                                              // [0x5145040] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GetAudioDeviceConnectionState
	// int32_t GetAudioDeviceConnectionState();                                                                                 // [0x5144f4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GameResume
	// int32_t GameResume();                                                                                                    // [0x5144e18] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.GamePause
	// int32_t GamePause();                                                                                                     // [0x5144dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.ForbidMemberVoice
	// int32_t ForbidMemberVoice(int32_t member, bool enable, FString RoomName);                                                // [0x5144c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableTranslate
	// int32_t EnableTranslate(FString RoomName, bool bEnable, int32_t myLang, int32_t transType);                              // [0x5144a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableSpeakerOn
	// int32_t EnableSpeakerOn(bool enable);                                                                                    // [0x51449a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableRoomSpeaker
	// int32_t EnableRoomSpeaker(FString RoomName, bool enable);                                                                // [0x5144888] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableRoomMicrophone
	// int32_t EnableRoomMicrophone(FString RoomName, bool enable);                                                             // [0x514476c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableReportALLAbroad
	// int32_t EnableReportALLAbroad(bool bEnable);                                                                             // [0x51446ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableReportALL
	// int32_t EnableReportALL(bool bEnable);                                                                                   // [0x51445ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableMultiRoom
	// int32_t EnableMultiRoom(bool enable);                                                                                    // [0x5144530] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableLoopRender
	// void EnableLoopRender(bool bEnabled);                                                                                    // [0x514448c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableLogCallBack
	// int32_t EnableLogCallBack(bool bEnable);                                                                                 // [0x51443cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableLog
	// void EnableLog(bool bEnable);                                                                                            // [0x5144328] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableCivilVoice
	// int32_t EnableCivilVoice(bool bEnable);                                                                                  // [0x5144268] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableCivilFile
	// int32_t EnableCivilFile(bool bEnable);                                                                                   // [0x51441e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.EnableBluetoothSCO
	// int32_t EnableBluetoothSCO(bool enable);                                                                                 // [0x5144120] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.Enable3DVoiceRoom
	// int32_t Enable3DVoiceRoom(FString RoomName, bool bEnable);                                                               // [0x5144004] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.Enable3DVoice
	// int32_t Enable3DVoice(bool bEnable);                                                                                     // [0x5143f44] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.DownloadRecordedFile
	// int32_t DownloadRecordedFile(FString fileID, FString DownloadFilePath);                                                  // [0x5143e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.CollectVoiceDeviceData
	// void CollectVoiceDeviceData();                                                                                           // [0x5143840] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.CloseSpeaker
	// int32_t CloseSpeaker();                                                                                                  // [0x51437f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.CloseMic
	// int32_t CloseMic();                                                                                                      // [0x51437b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.CheckPermission
	// int32_t CheckPermission();                                                                                               // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.ApplyMessageKey
	// int32_t ApplyMessageKey();                                                                                               // [0x51436c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFVoiceService.ApplicationWillEnterBackground
	// void ApplicationWillEnterBackground();                                                                                   // [0x512fda4] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.ApplicationWillDeactivate
	// void ApplicationWillDeactivate();                                                                                        // [0x4de6e58] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.ApplicationHasReactivated
	// void ApplicationHasReactivated();                                                                                        // [0x156ee74] Native|Event|Public|BlueprintEvent 
	// Function /Script/MFPluginWrapper.MFVoiceService.ApplicationHasEnteredForeground
	// void ApplicationHasEnteredForeground();                                                                                  // [0x1aa6c04] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/MFPluginWrapper.MFWeGameObserver
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UMFWeGameObserver : public UMFPWObject
{ 
public:
};

/// Class /Script/MFPluginWrapper.MFWeGamePlugin
/// Size: 0x0100 (256 bytes) (0x000040 - 0x000100) align 8 MaxSize: 0x0100
class UMFWeGamePlugin : public UMFPWPlugin
{ 
public:
	SDK_UNDEFINED(16,1641) /* FMulticastInlineDelegate */ __um(OnQueryExpansionPackListResult);                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1642) /* FMulticastInlineDelegate */ __um(OnInstallExpansionPackStart);                       // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1643) /* FMulticastInlineDelegate */ __um(OnInstallExpansionPackProgress);                    // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1644) /* FMulticastInlineDelegate */ __um(OnPauseInstallExpansionPack);                       // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1645) /* FMulticastInlineDelegate */ __um(OnResumeInstallExpansionPack);                      // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1646) /* FMulticastInlineDelegate */ __um(OnInstallExpansionPackResult);                      // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1647) /* FMulticastInlineDelegate */ __um(OnUninstallExpansionPackResult);                    // 0x00A0   (0x0010)  
	bool                                               bExpansionPackInited;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x00B1   (0x003F)  MISSED
	class UMFWeGameObserver*                           WeGameObserver;                                             // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.ReportPlayerGameAction
	// void ReportPlayerGameAction(FString Action, EWegameReportActionResult status, FString Json, int32_t ErrorCode);          // [0x110c858] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.ReportGameContentDamaged
	// void ReportGameContentDamaged();                                                                                         // [0x51537c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.RepairDamagedGameFiles
	// bool RepairDamagedGameFiles(TArray<FString>& GameFiles);                                                                 // [0x51535cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.NotifyPlatformExit
	// bool NotifyPlatformExit();                                                                                               // [0x5153554] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.MountPakList
	// int32_t MountPakList(FString PackageID, TArray<int32_t> InMountOrders, FString InCustomParam);                           // [0x51533bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.IsWeGameInited
	// bool IsWeGameInited();                                                                                                   // [0x2793b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.HandleUninstallExpansionPackResult
	// void HandleUninstallExpansionPackResult(int64_t ResultCode, FString PackId);                                             // [0x51532b0] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.HandleResumeInstallExpansionPack
	// void HandleResumeInstallExpansionPack(int64_t ResultCode, FString PackId);                                               // [0x5153180] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.HandleQueryExpansionPackListResult
	// void HandleQueryExpansionPackListResult(int64_t ResultCode, FString UserData);                                           // [0x5153008] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.HandlePauseInstallExpansionPack
	// void HandlePauseInstallExpansionPack(int64_t ResultCode, FString PackId);                                                // [0x5152f00] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.HandleInstallExpansionPackStart
	// void HandleInstallExpansionPackStart(int64_t ResultCode, FString PackId);                                                // [0x5152d80] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.HandleInstallExpansionPackResult
	// void HandleInstallExpansionPackResult(int64_t ResultCode, FString PackId, int64_t ErrorCode, FString ErrorMessage);      // [0x5152b98] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.HandleInstallExpansionPackProgress
	// void HandleInstallExpansionPackProgress(int64_t Progress, FString PackId, int64_t FinishedBytes, int64_t TotalBytes, int64_t Speed); // [0x5152980] Final|Native|Public  
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetUserEmail
	// FString GetUserEmail();                                                                                                  // [0x51526b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetSessionTicket
	// FString GetSessionTicket();                                                                                              // [0x5152598] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetRegionCode
	// FString GetRegionCode();                                                                                                 // [0x51524ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetPlugin
	// class UMFWeGamePlugin* GetPlugin(class UObject* WorldContextObject);                                                     // [0x1d2c520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetPlayerName
	// FString GetPlayerName();                                                                                                 // [0x4dec008] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetPlayerIDString
	// FString GetPlayerIDString();                                                                                             // [0x51523b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetPlayerAccountType
	// int32_t GetPlayerAccountType();                                                                                          // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetPlatformTypeString
	// FString GetPlatformTypeString();                                                                                         // [0x51522c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetPlatformType
	// int32_t GetPlatformType();                                                                                               // [0x229c68c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetPlatformLanguage
	// FString GetPlatformLanguage();                                                                                           // [0x515201c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetLoginChannelId
	// FString GetLoginChannelId();                                                                                             // [0x5151ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetLauncherVersion
	// FString GetLauncherVersion();                                                                                            // [0x5151ad8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetIsSteam
	// bool GetIsSteam();                                                                                                       // [0x5151aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetIsEpic
	// bool GetIsEpic();                                                                                                        // [0x5151a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetIsCollegeStudent
	// bool GetIsCollegeStudent();                                                                                              // [0x21793e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetInitErrorCode
	// int32_t GetInitErrorCode();                                                                                              // [0x5151a68] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetExpansionPackListFromConfig
	// void GetExpansionPackListFromConfig(TArray<FString>& PackageID);                                                         // [0x51519cc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetExpansionPackInfo
	// bool GetExpansionPackInfo(int32_t Index, FString& PackageID, FString& PackageName, FString& PackageDesc, int64_t& PackageInstallSize, int64_t& PackageDownloadSize, int64_t& PackageDownloadedSize, int64_t& InstallState); // [0x515170c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetExpansionPackCount
	// int64_t GetExpansionPackCount();                                                                                         // [0x490e9a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetDownloadMd5Code
	// FString GetDownloadMd5Code();                                                                                            // [0x5151480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetDistributeID
	// FString GetDistributeID();                                                                                               // [0x2268a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetCurrentServerName
	// FString GetCurrentServerName();                                                                                          // [0x5151250] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetCurrentServerAddress
	// FString GetCurrentServerAddress();                                                                                       // [0x5151190] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetCollegeName
	// FString GetCollegeName();                                                                                                // [0x4dec008] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetCertificateState
	// int32_t GetCertificateState();                                                                                           // [0x4b95918] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetAvatarUrl
	// FString GetAvatarUrl();                                                                                                  // [0x4dec008] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.GetAdultStatus
	// bool GetAdultStatus();                                                                                                   // [0x5151118] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.CloseWebView
	// void CloseWebView();                                                                                                     // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AsyncResumeInstallExpansionPack
	// bool AsyncResumeInstallExpansionPack(FString PackageID, FString UserData);                                               // [0x5150e2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AsyncRemoveExpansionPack
	// bool AsyncRemoveExpansionPack(FString PackageID, FString UserData);                                                      // [0x5150e2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AsyncQueryExpansionPackList
	// bool AsyncQueryExpansionPackList();                                                                                      // [0x1bfc3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AsyncPauseInstallExpansionPack
	// bool AsyncPauseInstallExpansionPack(FString PackageID, FString UserData);                                                // [0x5150e2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AsyncInstallExpansionPack
	// bool AsyncInstallExpansionPack(FString PackageID, FString UserData);                                                     // [0x5150e2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AsyncCreateBrowser
	// bool AsyncCreateBrowser(FString URL, int32_t Width, int32_t Height, bool bEncodeUrl, bool bWegameBrowser);               // [0x5150f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AsyncCancelInstallExpansionPack
	// bool AsyncCancelInstallExpansionPack(FString PackageID, FString UserData);                                               // [0x5150e2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AquireGameToken
	// void AquireGameToken();                                                                                                  // [0x5150e18] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFPluginWrapper.MFWeGamePlugin.AcquireGameTokenWithoutLoginFlow
	// void AcquireGameTokenWithoutLoginFlow();                                                                                 // [0x5150de8] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MFPluginWrapper.DiscordUserInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FDiscordUserInfo
{ 
	FString                                            uid;                                                        // 0x0000   (0x0010)  
	FString                                            avatarUrl;                                                  // 0x0010   (0x0010)  
	FString                                            userName;                                                   // 0x0020   (0x0010)  
	FString                                            DisplayName;                                                // 0x0030   (0x0010)  
	int32_t                                            status;                                                     // 0x0040   (0x0004)  
	int32_t                                            relationshipType;                                           // 0x0044   (0x0004)  
	int32_t                                            IsInGame;                                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            gid;                                                        // 0x0050   (0x0010)  
	FString                                            extraJson;                                                  // 0x0060   (0x0010)  
};

/// Struct /Script/MFPluginWrapper.PufferTaskInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPufferTaskInfo
{ 
	int32_t                                            TaskId;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            TaskName;                                                   // 0x0008   (0x0010)  
	SDK_UNDEFINED(1,1648) /* EPufferTaskState */       __um(TaskState);                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	int64_t                                            NowSize;                                                    // 0x0020   (0x0008)  
	int64_t                                            TotalSize;                                                  // 0x0028   (0x0008)  
	bool                                               bIsFileTask;                                                // 0x0030   (0x0001)  
	bool                                               bIsBatchTask;                                               // 0x0031   (0x0001)  
	bool                                               bIsRestoreTask;                                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData02_7[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Struct /Script/MFPluginWrapper.PufferInitConfigData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FPufferInitConfigData
{ 
	int32_t                                            MaxDownloadSpeed;                                           // 0x0000   (0x0004)  
	int32_t                                            MaxDownTask;                                                // 0x0004   (0x0004)  
	int32_t                                            MaxDownloadsPerTask;                                        // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            PufferProductId;                                            // 0x0010   (0x0008)  
	int32_t                                            NeedCheck;                                                  // 0x0018   (0x0004)  
	int32_t                                            NeedFileRestore;                                            // 0x001C   (0x0004)  
	int32_t                                            RemoveOldWhenUpdate;                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            StrSourceDir;                                               // 0x0028   (0x0010)  
	FString                                            StrPufferServerUrl;                                         // 0x0038   (0x0010)  
	FString                                            StrPufferGroupMarkId;                                       // 0x0048   (0x0010)  
	FString                                            strUserID;                                                  // 0x0058   (0x0010)  
	int64_t                                            PufferGameId;                                               // 0x0068   (0x0008)  
	int32_t                                            PufferUpdateType;                                           // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	int64_t                                            PufferDolphinProductId;                                     // 0x0078   (0x0008)  
	FString                                            StrDolphinAppVersion;                                       // 0x0080   (0x0010)  
	FString                                            StrDolphinResVersion;                                       // 0x0090   (0x0010)  
	int32_t                                            EnableIOSBGDownload;                                        // 0x00A0   (0x0004)  
	int32_t                                            ShowFileList;                                               // 0x00A4   (0x0004)  
};

/// Struct /Script/MFPluginWrapper.MyHotfixStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMyHotfixStruct
{ 
	int32_t                                            A;                                                          // 0x0000   (0x0004)  
	int32_t                                            B;                                                          // 0x0004   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UHashChecker) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UMFPWObject) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMFPWPlugin) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFACEPlugin) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMFGCloudService) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFBoxService) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFComplianceService) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFCTIPayObserver) == 0x00E0); // 224 bytes (0x000040 - 0x0000E0)
static_assert(sizeof(UMFCustomerService) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudCommonStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFGCloudCrashObserver) == 0x0198); // 408 bytes (0x000040 - 0x000198)
static_assert(sizeof(UMFGCloudCrashService) == 0x0120); // 288 bytes (0x000040 - 0x000120)
static_assert(sizeof(UMFGCloudDolphinService) == 0x00A0); // 160 bytes (0x000040 - 0x0000A0)
static_assert(sizeof(UMFGCloudFriendObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudFriendService) == 0x0108); // 264 bytes (0x000040 - 0x000108)
static_assert(sizeof(UMFGCloudGroupObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudGroupService) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMFGCloudLoginObserver) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMFGCloudLoginService) == 0x00B8); // 184 bytes (0x000040 - 0x0000B8)
static_assert(sizeof(UMFGCloudMessageHandler) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFGCloudMessageHandlerAce) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UMFGCloudMessageHandlerChildTss) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMFGCloudMessageObserver) == 0x0180); // 384 bytes (0x000040 - 0x000180)
static_assert(sizeof(UMFGCloudMessageService) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMFGCloudNetWorkStateObserver) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UMFGCloudNetWorkStateService) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FMSDKNoticeTextInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMSDKNoticePictureInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMSDKNoticeInfo) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FMSDKNoticeReturnData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UMFGCloudNotice) == 0x0100); // 256 bytes (0x000040 - 0x000100)
static_assert(sizeof(UMFGCloudPlugin) == 0x00A0); // 160 bytes (0x000040 - 0x0000A0)
static_assert(sizeof(UMFGCloudPufferService) == 0x01B8); // 440 bytes (0x000040 - 0x0001B8)
static_assert(sizeof(UMFGCloudRobotService) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudSetting) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UMFGCloudTGPAObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudTGPAService) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMFGCloudToolsObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudToolsService) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMFGCloudTssService) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudWebViewObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudWebViewService) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMFGCloudXGObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGCloudXGService) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMFGMEObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFGMEService) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UMFGPMAgent) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFGPMHelperFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFiCreatePlugin) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UMFIntlDiscordObserver) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFIntlDiscordService) == 0x00E0); // 224 bytes (0x000040 - 0x0000E0)
static_assert(sizeof(UMFIntlLBSObserver) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMFIntlLoginObserver) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMFIntlWebViewObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFIOSRuntimeHelper) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFLBSObserver) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMFLBSService) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UMFMidasObserver) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UMFMidasService) == 0x00A0); // 160 bytes (0x000040 - 0x0000A0)
static_assert(sizeof(UMFMNAService) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FBrushWrapperArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UMFPandoraService) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UMFPWGetPluginManagerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFPWMessageHeader) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMFPWPluginManager) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UMFSteamPlugin) == 0x0120); // 288 bytes (0x000040 - 0x000120)
static_assert(sizeof(UMFTDMService) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMFTGALiveService) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFVoiceObserver) == 0x00A0); // 160 bytes (0x000040 - 0x0000A0)
static_assert(sizeof(UMFVoiceService) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UMFWeGameObserver) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UMFWeGamePlugin) == 0x0100); // 256 bytes (0x000040 - 0x000100)
static_assert(sizeof(FDiscordUserInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPufferTaskInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPufferInitConfigData) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FMyHotfixStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UHashChecker, RunningTasks) == 0x0038);
static_assert(offsetof(UHashChecker, CachedFileHash) == 0x0048);
static_assert(offsetof(UMFGCloudCrashService, CrashObserver) == 0x0040);
static_assert(offsetof(UMFGCloudFriendService, Image) == 0x00E0);
static_assert(offsetof(UMFGCloudFriendService, InDyTexture) == 0x00E8);
static_assert(offsetof(UMFGCloudFriendService, MFGCloudFriendObserver) == 0x0100);
static_assert(offsetof(UMFGCloudGroupService, MFGCloudGroupObserver) == 0x0040);
static_assert(offsetof(UMFGCloudLoginService, LoginObserver) == 0x0040);
static_assert(offsetof(UMFGCloudLoginService, IntlLoginObserver) == 0x0048);
static_assert(offsetof(UMFGCloudMessageObserver, SendPkgHeader) == 0x0080);
static_assert(offsetof(UMFGCloudMessageObserver, RecvPkgHeader) == 0x0088);
static_assert(offsetof(UMFGCloudMessageService, MsgHandlerArr) == 0x0040);
static_assert(offsetof(UMFGCloudMessageService, ConnectorObserver) == 0x0050);
static_assert(offsetof(UMFGCloudNetWorkStateService, NetworkObserver) == 0x0040);
static_assert(offsetof(FMSDKNoticeTextInfo, NoticeTitle) == 0x0000);
static_assert(offsetof(FMSDKNoticeTextInfo, NoticeContent) == 0x0010);
static_assert(offsetof(FMSDKNoticeTextInfo, NoticeRedirectUrl) == 0x0020);
static_assert(offsetof(FMSDKNoticePictureInfo, NoticePicUrl) == 0x0000);
static_assert(offsetof(FMSDKNoticePictureInfo, NoticePicHashcode) == 0x0010);
static_assert(offsetof(FMSDKNoticePictureInfo, NoticePicTitle) == 0x0020);
static_assert(offsetof(FMSDKNoticePictureInfo, NoticePicSize) == 0x0030);
static_assert(offsetof(FMSDKNoticeInfo, NoticeGroup) == 0x0008);
static_assert(offsetof(FMSDKNoticeInfo, Language) == 0x0030);
static_assert(offsetof(FMSDKNoticeInfo, TextInfo) == 0x0040);
static_assert(offsetof(FMSDKNoticeInfo, PicUrlList) == 0x0070);
static_assert(offsetof(FMSDKNoticeInfo, WebUrl) == 0x0080);
static_assert(offsetof(FMSDKNoticeInfo, extraJson) == 0x0090);
static_assert(offsetof(FMSDKNoticeReturnData, RetMsg) == 0x0008);
static_assert(offsetof(FMSDKNoticeReturnData, ThirdMsg) == 0x0020);
static_assert(offsetof(FMSDKNoticeReturnData, extraJson) == 0x0030);
static_assert(offsetof(FMSDKNoticeReturnData, RequestID) == 0x0040);
static_assert(offsetof(FMSDKNoticeReturnData, NoticeInfoList) == 0x0050);
static_assert(offsetof(UMFGCloudNotice, LastReturnData) == 0x0050);
static_assert(offsetof(UMFGCloudNotice, CachedGroup) == 0x00B0);
static_assert(offsetof(UMFGCloudNotice, CachedLanguage) == 0x00C0);
static_assert(offsetof(UMFGCloudNotice, CachedRegion) == 0x00D0);
static_assert(offsetof(UMFGCloudNotice, CachedPartition) == 0x00E0);
static_assert(offsetof(UMFGCloudNotice, CachedExtra) == 0x00F0);
static_assert(offsetof(UMFGCloudPlugin, ServiceMap) == 0x0040);
static_assert(offsetof(UMFGCloudPlugin, GCloudServiceClasses) == 0x0090);
static_assert(offsetof(UMFGCloudSetting, TbusppProjectName) == 0x0028);
static_assert(offsetof(UMFGCloudSetting, TbusppGameID) == 0x0038);
static_assert(offsetof(UMFGCloudSetting, TbusppServiceName) == 0x0048);
static_assert(offsetof(UMFGCloudSetting, GameId) == 0x0058);
static_assert(offsetof(UMFGCloudSetting, GameKey) == 0x0068);
static_assert(offsetof(UMFGCloudSetting, QQAppID) == 0x0078);
static_assert(offsetof(UMFGCloudSetting, QQAppKey) == 0x0088);
static_assert(offsetof(UMFGCloudSetting, WeiXinAppID) == 0x0098);
static_assert(offsetof(UMFGCloudSetting, WeiXinAppKey) == 0x00A8);
static_assert(offsetof(UMFGCloudSetting, MSDK_GAME_ID) == 0x00B8);
static_assert(offsetof(UMFGCloudSetting, MSDK_SDK_Key) == 0x00C8);
static_assert(offsetof(UMFGCloudSetting, ConnectorDHP) == 0x00D8);
static_assert(offsetof(UMFGCloudSetting, GRobotGameCode) == 0x00F8);
static_assert(offsetof(UMFGCloudSetting, WeGameID) == 0x0110);
static_assert(offsetof(UMFGCloudTGPAService, GCLoudTGPAObserver) == 0x0040);
static_assert(offsetof(UMFGCloudToolsService, ToolsObserver) == 0x0040);
static_assert(offsetof(UMFGCloudWebViewService, WebViewObserver) == 0x0040);
static_assert(offsetof(UMFGCloudWebViewService, IntlWebViewObserver) == 0x0048);
static_assert(offsetof(UMFGCloudXGService, XGObserver) == 0x0040);
static_assert(offsetof(UMFGMEService, gmeObserver) == 0x0060);
static_assert(offsetof(UMFGMEService, mRoomId) == 0x0098);
static_assert(offsetof(UMFIntlDiscordService, DiscordObserver) == 0x00B0);
static_assert(offsetof(UMFLBSService, INTLLBSObserver) == 0x0040);
static_assert(offsetof(UMFLBSService, LBSObserver) == 0x0048);
static_assert(offsetof(UMFMidasService, MFMidasObserver) == 0x0088);
static_assert(offsetof(UMFMidasService, MFCTIPayObserver) == 0x0090);
static_assert(offsetof(UMFMNAService, StartingWidgetClass) == 0x0040);
static_assert(offsetof(UMFMNAService, CurrentWidget) == 0x0048);
static_assert(offsetof(FBrushWrapperArray, Items) == 0x0000);
static_assert(offsetof(UMFPandoraService, BrushWrapperMap) == 0x0040);
static_assert(offsetof(UMFPWPluginManager, PluginMap) == 0x0028);
static_assert(offsetof(UMFPWPluginManager, PluginClasses) == 0x0088);
static_assert(offsetof(UMFVoiceService, MFVoiceObserver) == 0x0060);
static_assert(offsetof(UMFWeGamePlugin, WeGameObserver) == 0x00F0);
static_assert(offsetof(FDiscordUserInfo, uid) == 0x0000);
static_assert(offsetof(FDiscordUserInfo, avatarUrl) == 0x0010);
static_assert(offsetof(FDiscordUserInfo, userName) == 0x0020);
static_assert(offsetof(FDiscordUserInfo, DisplayName) == 0x0030);
static_assert(offsetof(FDiscordUserInfo, gid) == 0x0050);
static_assert(offsetof(FDiscordUserInfo, extraJson) == 0x0060);
static_assert(offsetof(FPufferTaskInfo, TaskName) == 0x0008);
static_assert(offsetof(FPufferInitConfigData, StrSourceDir) == 0x0028);
static_assert(offsetof(FPufferInitConfigData, StrPufferServerUrl) == 0x0038);
static_assert(offsetof(FPufferInitConfigData, StrPufferGroupMarkId) == 0x0048);
static_assert(offsetof(FPufferInitConfigData, strUserID) == 0x0058);
static_assert(offsetof(FPufferInitConfigData, StrDolphinAppVersion) == 0x0080);
static_assert(offsetof(FPufferInitConfigData, StrDolphinResVersion) == 0x0090);
