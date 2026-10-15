// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFBaseModule.MFBaseServices
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFBaseServices : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFBaseModule.MFBaseServices.ZipLogFile
	// bool ZipLogFile();                                                                                                       // [0x516b5c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.ZipLogDirectory
	// int32_t ZipLogDirectory(FString InZipName, int32_t IgnoreBigFile, int32_t MaxFileCount);                                 // [0x516b480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.ZipFilesEx
	// int32_t ZipFilesEx(FString InZipName, TArray<FString>& InFiles, bool InAppendMode);                                      // [0x516b30c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.ZipFilesCA
	// int32_t ZipFilesCA(FString InZipName, TArray<FString>& InFiles);                                                         // [0x516b1f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.ZipFiles
	// int32_t ZipFiles(FString InZipName, TArray<FString>& InFiles);                                                           // [0x516b07c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.SavePNGToDCIM_Android
	// bool SavePNGToDCIM_Android(FString InImagePath, FString InFolderName, FString InDisplayName);                            // [0x516ae38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.RestartApplication
	// bool RestartApplication();                                                                                               // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.MountPak
	// bool MountPak(FString InPakFile, int32_t InOrder, FString InMountPoint);                                                 // [0x516acc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.IsUAGameDebugMode
	// bool IsUAGameDebugMode();                                                                                                // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.IsEditorRuntime
	// bool IsEditorRuntime();                                                                                                  // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.IsEditor
	// bool IsEditor();                                                                                                         // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetScreenSize
	// FIntPoint GetScreenSize();                                                                                               // [0x516abf4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetPublishedVersionType
	// FString GetPublishedVersionType();                                                                                       // [0x2273e8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetPlatform
	// FString GetPlatform();                                                                                                   // [0x2274174] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetNetModeByWorldContextObject
	// FString GetNetModeByWorldContextObject(class UObject* WorldContextObject);                                               // [0x2101a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetNetMode
	// FString GetNetMode();                                                                                                    // [0x516ab08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetLogsToZip
	// TArray<FString> GetLogsToZip(int32_t IgnoreBigFile, int64_t TotalLogSize, int32_t MaxFileCount);                         // [0x516a8d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetLocalIPAddress
	// FString GetLocalIPAddress();                                                                                             // [0x516a7ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetGameUserSettings
	// class UGameUserSettings* GetGameUserSettings();                                                                          // [0x516a67c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetGameSceneTypeByMapName
	// EGameSceneType GetGameSceneTypeByMapName(FString InMapName);                                                             // [0x516a5c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetGameSceneType
	// EGameSceneType GetGameSceneType(class UWorld* InWorld);                                                                  // [0x516a530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetGameMode
	// EPlayGameMode GetGameMode();                                                                                             // [0x516a518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetGameMapName
	// FString GetGameMapName();                                                                                                // [0x516a404] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetExecutablePath
	// FString GetExecutablePath();                                                                                             // [0x516a214] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetEngine
	// class UEngine* GetEngine();                                                                                              // [0x516a1e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetDeviceModel
	// FString GetDeviceModel();                                                                                                // [0x516a0fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetCurrentGameSceneType
	// EGameSceneType GetCurrentGameSceneType();                                                                                // [0x516a0d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.GetAppVersionDisplay
	// FString GetAppVersionDisplay();                                                                                          // [0x5169fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.EncodeBase64
	// FString EncodeBase64(FString Source);                                                                                    // [0x5169ed8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.DownloadVersionPakPackage
	// void DownloadVersionPakPackage();                                                                                        // [0x5169ec4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.DownloadLuaFixPackage
	// void DownloadLuaFixPackage();                                                                                            // [0x5169eb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFBaseServices.CreateProc
	// void CreateProc(FString URL, FString Parms);                                                                             // [0x5169d90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFBaseModule.MFDeviceConsole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFDeviceConsole : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFBaseModule.MFDeviceConsole.InitDeviceConsoleConfig
	// void InitDeviceConsoleConfig();                                                                                          // [0x1a44e1c] Final|Native|Static|Public 
};

/// Class /Script/MFBaseModule.MFDeviceQualityScalability
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFDeviceQualityScalability : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFBaseModule.MFDeviceQualityScalability.SetDefaultDeviceLevel
	// void SetDefaultDeviceLevel(int32_t nDeviceLevel);                                                                        // [0x4dec47c] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFDeviceQualityScalability.InitQualitySettingConfig
	// void InitQualitySettingConfig();                                                                                         // [0x29b1f58] Final|Native|Static|Public 
};

/// Class /Script/MFBaseModule.MFMemoryScalability
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFMemoryScalability : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFBaseModule.MFMemoryScalability.SetSystemMemoryScalabilityIndex
	// void SetSystemMemoryScalabilityIndex(int32_t Index);                                                                     // [0x4dec47c] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.SetProcessWorkingSetSize
	// void SetProcessWorkingSetSize();                                                                                         // [0x516afdc] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.SetDedicatedVideoMemoryScalabilityIndex
	// void SetDedicatedVideoMemoryScalabilityIndex(int32_t Index);                                                             // [0x4dec47c] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.InitMemorySettingConfig
	// void InitMemorySettingConfig();                                                                                          // [0x1f75ba8] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.GetTotalMemoryInGB
	// int32_t GetTotalMemoryInGB();                                                                                            // [0x1f766ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFMemoryScalability.GetIntValue
	// int32_t GetIntValue(FString Key, int32_t DefaultValue);                                                                  // [0x110ca24] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.GetFloatValue
	// float GetFloatValue(FString Key, float DefaultValue);                                                                    // [0x516a300] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.ExecConsoleVarsInLobby
	// void ExecConsoleVarsInLobby();                                                                                           // [0x5169fbc] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.ExecConsoleVarsInBattle
	// void ExecConsoleVarsInBattle();                                                                                          // [0x5169fa8] Final|Native|Static|Public 
	// Function /Script/MFBaseModule.MFMemoryScalability.ExecConsoleVarsCommon
	// void ExecConsoleVarsCommon();                                                                                            // [0x5169f94] Final|Native|Static|Public 
};

/// Class /Script/MFBaseModule.MFPhoneModelLimitation
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFPhoneModelLimitation : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.UpdateMobileQCCConfig
	// void UpdateMobileQCCConfig();                                                                                            // [0x251d834] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.SetTargetDisplayRefreshRate
	// bool SetTargetDisplayRefreshRate(int32_t TargetFramerate);                                                               // [0x516aff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.NeedEnableAA
	// bool NeedEnableAA();                                                                                                     // [0x516ae20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.IsVeryVeryLowDevice
	// bool IsVeryVeryLowDevice();                                                                                              // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.IsVeryLowDevice
	// bool IsVeryLowDevice();                                                                                                  // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.IsLowPowerMode
	// bool IsLowPowerMode();                                                                                                   // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.IsFrameRateLevelSupported
	// bool IsFrameRateLevelSupported(int32_t TargetFramerate);                                                                 // [0x516ac34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.IsConfigLoaded
	// bool IsConfigLoaded();                                                                                                   // [0x516ac1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.IsAndroidLite
	// bool IsAndroidLite();                                                                                                    // [0x27ad9ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.IOSSetUpFrameRateCalculator
	// void IOSSetUpFrameRateCalculator();                                                                                      // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.InitMobileQCCConfig
	// void InitMobileQCCConfig();                                                                                              // [0x516ac08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetModelName
	// FString GetModelName();                                                                                                  // [0x516aa40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetMobileMaxFrameRate
	// int32_t GetMobileMaxFrameRate();                                                                                         // [0x516aa28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetMobileLimition
	// bool GetMobileLimition();                                                                                                // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetMobileDeviceLevel
	// int32_t GetMobileDeviceLevel();                                                                                          // [0x29addb4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetMobileCurrentFrameRate
	// int32_t GetMobileCurrentFrameRate();                                                                                     // [0x516aa28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetIsInMpeUse1cha1List
	// bool GetIsInMpeUse1cha1List();                                                                                           // [0x516a7c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetIsInHighFPSBlackList
	// bool GetIsInHighFPSBlackList();                                                                                          // [0x516a7a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetIsInFPS90WhiteList
	// bool GetIsInFPS90WhiteList();                                                                                            // [0x516a780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetIsInFPS144WhiteList
	// bool GetIsInFPS144WhiteList();                                                                                           // [0x516a70c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetIsInFPS120WhiteList
	// bool GetIsInFPS120WhiteList();                                                                                           // [0x516a6e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.GetCurrentFPS
	// int32_t GetCurrentFPS();                                                                                                 // [0x516a0bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFBaseModule.MFPhoneModelLimitation.CheckVulkanWhiteList
	// bool CheckVulkanWhiteList();                                                                                             // [0x5169d6c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFBaseModule.MFUObjectCheckTool
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFUObjectCheckTool : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFBaseModule.MFUObjectCheckTool.CheckUObjectLeak
	// TMap<FString, FString> CheckUObjectLeak(TArray<FString>& WhiteList);                                                     // [0x5169a7c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MFBaseModule.DeviceConsoleConfig
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FDeviceConsoleConfig
{ 
	unsigned char                                      UnknownData00_2[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Struct /Script/MFBaseModule.DeviceQualityConfig
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FDeviceQualityConfig
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/MFBaseModule.MemorySettingConfig
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FMemorySettingConfig
{ 
	unsigned char                                      UnknownData00_2[0xD0];                                      // 0x0000   (0x00D0)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMFBaseServices) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFDeviceConsole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFDeviceQualityScalability) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFMemoryScalability) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFPhoneModelLimitation) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFUObjectCheckTool) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FDeviceConsoleConfig) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FDeviceQualityConfig) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMemorySettingConfig) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
