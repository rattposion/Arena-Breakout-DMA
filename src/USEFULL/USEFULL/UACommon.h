// generated header

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: LevelSequence
/// dependency: Paper2D
/// dependency: SGFramework
/// dependency: SlateCore
/// dependency: UADataTableModule
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/UACommon.AsyncTaskCopyFile
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UAsyncTaskCopyFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,3907) /* FMulticastInlineDelegate */ __um(OnCompleted);                                       // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/UACommon.AsyncTaskCopyFile.CopyFileDelegate__DelegateSignature
	// void CopyFileDelegate__DelegateSignature(FString TargetPath, bool InResult);                                             // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.AsyncTaskCopyFile.CopyFile
	// class UAsyncTaskCopyFile* CopyFile(FString InSource, FString InDest, bool InPhysical);                                   // [0x63913bc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.AsyncTaskDownloadFile
/// Size: 0x00D8 (216 bytes) (0x000030 - 0x0000D8) align 8 MaxSize: 0x00D8
class UAsyncTaskDownloadFile : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,3908) /* FMulticastInlineDelegate */ __um(DownloadFileDelegate);                              // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x98];                                      // 0x0040   (0x0098)  MISSED


	/// Functions
	// Function /Script/UACommon.AsyncTaskDownloadFile.StartDownload
	// bool StartDownload();                                                                                                    // [0x63946d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.AsyncTaskDownloadFile.SetFileTotalSize
	// void SetFileTotalSize(int32_t InFileSize);                                                                               // [0x63944d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.AsyncTaskDownloadFile.ResumeTask
	// bool ResumeTask();                                                                                                       // [0x63944a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.AsyncTaskDownloadFile.RequestFileHead
	// void RequestFileHead(bool InDownloadOnSucceed);                                                                          // [0x639440c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.AsyncTaskDownloadFile.PauseTask
	// bool PauseTask();                                                                                                        // [0x6394394] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.AsyncTaskDownloadFile.GetTaskState
	// EDownloadFileState GetTaskState();                                                                                       // [0x6393bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.AsyncTaskDownloadFile.GetLastHttpCode
	// int32_t GetLastHttpCode();                                                                                               // [0x29add88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.AsyncTaskDownloadFile.GetFileURL
	// FString GetFileURL();                                                                                                    // [0x6392c2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.AsyncTaskDownloadFile.GetFileTotalSize
	// int32_t GetFileTotalSize();                                                                                              // [0x512fedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.AsyncTaskDownloadFile.GetFileName
	// FString GetFileName(bool bFullPath);                                                                                     // [0x6392acc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.AsyncTaskDownloadFile.GetDownloadedSize
	// int32_t GetDownloadedSize();                                                                                             // [0x6392870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.AsyncTaskDownloadFile.GetCurrentSize
	// int32_t GetCurrentSize();                                                                                                // [0x63927c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.AsyncTaskDownloadFile.DownloadFileDelegate__DelegateSignature
	// void DownloadFileDelegate__DelegateSignature(class UAsyncTaskDownloadFile* InObj, EDownloadFileState InEventID);         // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.AsyncTaskDownloadFile.CreateDownloadFileTask
	// class UAsyncTaskDownloadFile* CreateDownloadFileTask(FString URL, FString FileDirectory, bool InOverride);               // [0x6391a8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.AsyncTaskDownloadFile.CancelTask
	// bool CancelTask();                                                                                                       // [0x6391180] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.BFLPlatformFile
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBFLPlatformFile : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UACommon.BFLPlatformFile.UnmountPak
	// bool UnmountPak(FString InPakFile);                                                                                      // [0x6394bdc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.StatDirectorySize_Physical
	// int32_t StatDirectorySize_Physical(FString InDirectory, bool InWithSubDir, FString InExtName);                           // [0x639496c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.StatDirectorySize
	// int32_t StatDirectorySize(FString InDirectory, bool InWithSubDir, FString InExtName);                                    // [0x63946fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.SortStringArray
	// TArray<FString> SortStringArray(TArray<FString>& InVal, bool InReversed);                                                // [0x6394568] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.SaveStringToFile
	// bool SaveStringToFile(FString inString, FString InFilePath);                                                             // [0x22985c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.ReloadAssetRegistry
	// int32_t ReloadAssetRegistry();                                                                                           // [0x63943e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.MoveFile
	// bool MoveFile(FString InSourceFile, FString InDestFile);                                                                 // [0x63941e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.MountPak
	// bool MountPak(FString InPakFile, int32_t InOrder, FString InMountPoint);                                                 // [0x6393fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.MergeStringArrays
	// TArray<FString> MergeStringArrays(TArray<FString>& Array1, TArray<FString>& Array2);                                     // [0x6393e94] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.LoadFileToStringArray
	// TArray<FString> LoadFileToStringArray(FString InFilePath);                                                               // [0x6393bc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.LoadFileToString_Physical
	// FString LoadFileToString_Physical(FString InFilePath);                                                                   // [0x6393cd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.LoadFileToString
	// FString LoadFileToString(FString InFilePath);                                                                            // [0x229d5bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetStringFromIni
	// FString GetStringFromIni(FString InSection, FString InKey, FString InIniName);                                           // [0x6393830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetStringArrayFromIni
	// TArray<FString> GetStringArrayFromIni(FString InSection, FString InKey, FString InIniName);                              // [0x6393660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetShaderProgramBinaryPath
	// FString GetShaderProgramBinaryPath();                                                                                    // [0x6393574] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetProjectPathForExternalAppForWrite
	// FString GetProjectPathForExternalAppForWrite();                                                                          // [0xc1d46c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetPath
	// FString GetPath(FString InFilename);                                                                                     // [0x63933bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetMountedPakFilenames
	// TArray<FString> GetMountedPakFilenames();                                                                                // [0x1edd8e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetMountedFilesInPak
	// TArray<FString> GetMountedFilesInPak(FString InPakFile);                                                                 // [0x63932a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetIntFromIni
	// int32_t GetIntFromIni(FString InSection, FString InKey, FString InIniName);                                              // [0x6392ff4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetInstalledAPKPath
	// FString GetInstalledAPKPath();                                                                                           // [0x6392f04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetGraphicsRHI
	// FString GetGraphicsRHI();                                                                                                // [0x2303268] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetGlobalIniFlePath
	// FString GetGlobalIniFlePath(FString InIniName);                                                                          // [0x6392d48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetFileBaseName
	// FString GetFileBaseName(FString InFilename, bool InWithExt);                                                             // [0x6392888] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetDiskFreeSpace
	// int64_t GetDiskFreeSpace();                                                                                              // [0x63927e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.GetCurrentAdapterMinFeatureLevel
	// int32_t GetCurrentAdapterMinFeatureLevel();                                                                              // [0x63927b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.FindFiles_Physical
	// TArray<FString> FindFiles_Physical(FString InDirectory, FString InExtName, bool IncludeSubDir);                          // [0xc1d1d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.FindFiles
	// TArray<FString> FindFiles(FString InDirectory, FString InExtName, bool IncludeSubDir);                                   // [0x6392584] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.FileSizeInt64
	// int64_t FileSizeInt64(FString InFilePath);                                                                               // [0x6392364] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.FileSize_Physical
	// int32_t FileSize_Physical(FString InFilePath);                                                                           // [0x639248c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.FileSize
	// int32_t FileSize(FString InFilePath);                                                                                    // [0x226ff34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.FileExists_Physical
	// bool FileExists_Physical(FString InFilePath);                                                                            // [0x6392270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.FileExists
	// bool FileExists(FString InFilePath);                                                                                     // [0x226fdd8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.DumpIni
	// TArray<FString> DumpIni(FString InIniName);                                                                              // [0x639215c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.DirectoryExists_Physical
	// bool DirectoryExists_Physical(FString InDirectory);                                                                      // [0x6392064] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.DirectoryExists
	// bool DirectoryExists(FString InDirectory);                                                                               // [0x518bb74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.DeleteFilesbyType
	// int32_t DeleteFilesbyType(FString InDir, FString InType, bool InIncludeSub);                                             // [0x6391e4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.DeleteFile
	// bool DeleteFile(FString InFilePath);                                                                                     // [0xc1d640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.DeleteDirectoryTree
	// bool DeleteDirectoryTree(FString InDirectory);                                                                           // [0x6391d28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.DeleteDirectory
	// bool DeleteDirectory(FString InDirectory);                                                                               // [0x6391c04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.CreateDirectoryTree
	// bool CreateDirectoryTree(FString InDirectory);                                                                           // [0x6391994] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.CreateDirectory
	// bool CreateDirectory(FString InInDirectory);                                                                             // [0x6391870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.CopyFile_Physical
	// bool CopyFile_Physical(FString InSourceFile, FString InDestFile);                                                        // [0x63916ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.CopyFile
	// bool CopyFile(FString InSourceFile, FString InDestFile);                                                                 // [0x6391518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.ComputeStringMD5
	// FString ComputeStringMD5(FString inString, bool InLowerResult);                                                          // [0x63911a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.BFLPlatformFile.CheckAndroidRooted
	// int32_t CheckAndroidRooted();                                                                                            // [0x4b95918] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.CAButtonWidget
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class UCAButtonWidget : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,3909) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x0290   (0x0010)  
	class UButton*                                     _button;                                                    // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/UACommon.CAButtonWidget.SetButton
	// void SetButton(class UButton* Btn);                                                                                      // [0x2632ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CAButtonWidget.OnButtonClick
	// void OnButtonClick();                                                                                                    // [0x6394378] Final|Native|Public  
};

/// Class /Script/UACommon.CACustomFixedBorder
/// Size: 0x0280 (640 bytes) (0x000270 - 0x000280) align 8 MaxSize: 0x0280
class UCACustomFixedBorder : public UImage
{ 
public:
	int32_t                                            LeftSize;                                                   // 0x0270   (0x0004)  
	int32_t                                            RightSize;                                                  // 0x0274   (0x0004)  
	int32_t                                            TopSize;                                                    // 0x0278   (0x0004)  
	int32_t                                            BottomSize;                                                 // 0x027C   (0x0004)  
};

/// Class /Script/UACommon.CAImage
/// Size: 0x0280 (640 bytes) (0x000270 - 0x000280) align 8 MaxSize: 0x0280
class UCAImage : public UImage
{ 
public:
	class UMaterialInterface*                          TemplateMaterail;                                           // 0x0270   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicTemplateMaterial;                                    // 0x0278   (0x0008)  


	/// Functions
	// Function /Script/UACommon.CAImage.SetTemplateMaterail
	// void SetTemplateMaterail(class UMaterialInterface* Material);                                                            // [0x6397ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CAImage.GetTemplateMaterail
	// class UMaterialInstanceDynamic* GetTemplateMaterail();                                                                   // [0x6395cd4] Final|Native|Public  
};

/// Class /Script/UACommon.CASearchableComboBoxString
/// Size: 0x0ED0 (3792 bytes) (0x000130 - 0x000ED0) align 8 MaxSize: 0x0ED0
class UCASearchableComboBoxString : public UWidget
{ 
public:
	TArray<FString>                                    DefaultOptions;                                             // 0x0130   (0x0010)  
	FString                                            SelectedOption;                                             // 0x0140   (0x0010)  
	FComboBoxStyle                                     WidgetStyle;                                                // 0x0150   (0x0420)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x0570   (0x0838)  
	FMargin                                            ContentPadding;                                             // 0x0DA8   (0x0010)  
	float                                              MaxListHeight;                                              // 0x0DB8   (0x0004)  
	bool                                               HasDownArrow;                                               // 0x0DBC   (0x0001)  
	bool                                               EnableGamepadNavigationMode;                                // 0x0DBD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0DBE   (0x0002)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0DC0   (0x0060)  
	FSlateColor                                        ForegroundColor;                                            // 0x0E20   (0x0028)  
	bool                                               bIsFocusable;                                               // 0x0E48   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0E49   (0x0003)  MISSED
	SDK_UNDEFINED(16,3910) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x0E4C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0E5C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3911) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x0E60   (0x0010)  
	SDK_UNDEFINED(16,3912) /* FMulticastInlineDelegate */ __um(OnOpening);                                         // 0x0E70   (0x0010)  
	unsigned char                                      UnknownData03_7[0x50];                                      // 0x0E80   (0x0050)  MISSED


	/// Functions
	// Function /Script/UACommon.CASearchableComboBoxString.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                                  // [0x6397ec8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CASearchableComboBoxString.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index);                                                                                    // [0x6397e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CASearchableComboBoxString.RemoveOption
	// bool RemoveOption(FString Option);                                                                                       // [0x63972d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CASearchableComboBoxString.RefreshOptions
	// void RefreshOptions();                                                                                                   // [0x63972bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CASearchableComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);           // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.CASearchableComboBoxString.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                                // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.CASearchableComboBoxString.IsOpen
	// bool IsOpen();                                                                                                           // [0x6396b04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.CASearchableComboBoxString.GetSelectedOption
	// FString GetSelectedOption();                                                                                             // [0x6395ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.CASearchableComboBoxString.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x6395b84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.CASearchableComboBoxString.GetOptionCount
	// int32_t GetOptionCount();                                                                                                // [0x27b0924] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.CASearchableComboBoxString.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t Index);                                                                                 // [0x63959b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.CASearchableComboBoxString.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                                 // [0x639587c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.CASearchableComboBoxString.ClearSelection
	// void ClearSelection();                                                                                                   // [0x6395578] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CASearchableComboBoxString.ClearOptions
	// void ClearOptions();                                                                                                     // [0x6395538] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.CASearchableComboBoxString.AddOption
	// void AddOption(FString Option);                                                                                          // [0x63953f4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.GeoSensitiveWidget
/// Size: 0x02B8 (696 bytes) (0x000290 - 0x0002B8) align 8 MaxSize: 0x02B8
class UGeoSensitiveWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0290   (0x0008)  MISSED
	SDK_UNDEFINED(16,3913) /* FMulticastInlineDelegate */ __um(OnPaintSizeChange);                                 // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,3914) /* FMulticastInlineDelegate */ __um(OnViewportSizeChange);                              // 0x02A8   (0x0010)  
};

/// Class /Script/UACommon.HttpHelper
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UHttpHelper : public UObject
{ 
public:
	SDK_UNDEFINED(16,3915) /* FMulticastInlineDelegate */ __um(HttpHelperDelegate);                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/UACommon.HttpHelper.ProcessRequest
	// int32_t ProcessRequest();                                                                                                // [0x639727c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.HttpHelper.HttpHelperDelegate__DelegateSignature
	// void HttpHelperDelegate__DelegateSignature(class UHttpHelper* InObj, int32_t InHttpCode, FString InContent);             // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.HttpHelper.HashHmac
	// FString HashHmac(FString SignatureString, FString SecretKey);                                                            // [0x6396154] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.HttpHelper.CreateRequest
	// int32_t CreateRequest(FString InVerb, FString InURL, TMap<FString, FString>& InHeader, FString InContent);               // [0x63955b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.HttpHelper.CancelRequest
	// int32_t CancelRequest();                                                                                                 // [0x63954f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.HttpTask
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UHttpTask : public UObject
{ 
public:
	SDK_UNDEFINED(16,3916) /* FMulticastInlineDelegate */ __um(HttpResponseDelegate);                              // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3917) /* FMulticastInlineDelegate */ __um(HttpGetResponseDelegate);                           // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3918) /* FMulticastInlineDelegate */ __um(HttpGetThirdPartyChannelsFriendListDelegate);       // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,3919) /* FMulticastInlineDelegate */ __um(HttpGetSupperPlayerRedPoinStateDelegate);           // 0x0058   (0x0010)  
	FString                                            ScreenNotifyName;                                           // 0x0068   (0x0010)  
	FString                                            LuaNotifyName;                                              // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/UACommon.HttpTask.StartSuperPlayerRedPointHttpGetTask
	// void StartSuperPlayerRedPointHttpGetTask(FString PipelineUrl);                                                           // [0x6398364] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.StartHttpGetTask
	// void StartHttpGetTask(FString PipelineUrl);                                                                              // [0x63982b0] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.StartDevopsTask
	// void StartDevopsTask(FString PipelineUrl);                                                                               // [0x63981fc] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.StartCppvmDevopsTask
	// void StartCppvmDevopsTask(FString PipelineUrl);                                                                          // [0x6398148] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendScreenTask
	// void SendScreenTask(FString NotifyName);                                                                                 // [0x6397cb8] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendScreenExtranetTask
	// void SendScreenExtranetTask(FString NotifyName);                                                                         // [0x6397b90] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendProfileStat
	// void SendProfileStat(FString NotifyName);                                                                                // [0x6397a68] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendMemReport
	// void SendMemReport(FString NotifyName);                                                                                  // [0x63979b4] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendLogTask
	// void SendLogTask(FString NotifyName, FString URL, FString LogName);                                                      // [0x6397810] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendLogReportLoginError
	// void SendLogReportLoginError(FString NotifyName, FString URL, FString LogName);                                          // [0x639766c] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendLogExtranetTask
	// void SendLogExtranetTask(FString NotifyName, FString CosPath);                                                           // [0x639753c] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.SendGCloudLogTask
	// void SendGCloudLogTask(FString NotifyName, FString URL, FString LogName);                                                // [0x6397398] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.HttpUpLoadFileWithParams
	// bool HttpUpLoadFileWithParams(FString URL, FString FilePath, TMap<FString, FString> Params);                             // [0x6396830] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.HttpUpLoadDelegate__DelegateSignature
	// void HttpUpLoadDelegate__DelegateSignature(FString RspContent);                                                          // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.HttpTask.HttpPostRequest
	// void HttpPostRequest(FString URL, FString StrContent, FString AuthString);                                               // [0x639668c] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.HttpPostLandun
	// void HttpPostLandun(FString URL);                                                                                        // [0x6396590] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.HttpDownLoadLuaFile
	// void HttpDownLoadLuaFile(FString NotifyName, bool bFirstRequest);                                                        // [0x6396488] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.HttpDownLoadDebugFile
	// void HttpDownLoadDebugFile(FString NotifyName);                                                                          // [0x63963d4] Final|Native|Public  
	// Function /Script/UACommon.HttpTask.GetThirdPartyChannelsFriendList
	// void GetThirdPartyChannelsFriendList(FString InputChannelid, FString GameId, FString Os, FString Token, FString Openid); // [0x6395cf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.HttpTask.GetSaveLogDir
	// FString GetSaveLogDir();                                                                                                 // [0x6395a98] Final|Native|Static|Public 
	// Function /Script/UACommon.HttpTask.Get
	// class UHttpTask* Get();                                                                                                  // [0x6395984] Final|Native|Static|Public 
	// Function /Script/UACommon.HttpTask.DownloadRTXPakPackage
	// void DownloadRTXPakPackage(FString RTX);                                                                                 // [0x63957c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.ImageLoader
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class UImageLoader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	SDK_UNDEFINED(16,3920) /* FMulticastInlineDelegate */ __um(LoadCompleted);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3921) /* FMulticastInlineDelegate */ __um(LoadFailed);                                        // 0x0048   (0x0010)  
	class UTexture2DDynamic*                           Texture;                                                    // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0060   (0x0068)  MISSED


	/// Functions
	// Function /Script/UACommon.ImageLoader.OnImageLoadFailed__DelegateSignature
	// void OnImageLoadFailed__DelegateSignature();                                                                             // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.ImageLoader.OnImageLoadCompleted__DelegateSignature
	// void OnImageLoadCompleted__DelegateSignature(class UTexture2DDynamic* Texture);                                          // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.ImageLoader.LoadImageAsync
	// void LoadImageAsync(FString ImagePath);                                                                                  // [0x6396f3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.ImageLoader.CreateImageLoader
	// class UImageLoader* CreateImageLoader();                                                                                 // [0x639558c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.ImageLoader.ClearImageLoaderArray
	// void ClearImageLoaderArray();                                                                                            // [0x226cc00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.ImageLoader.Clear
	// void Clear();                                                                                                            // [0x6395524] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.InputUtilActor
/// Size: 0x0328 (808 bytes) (0x000318 - 0x000328) align 8 MaxSize: 0x0328
class AInputUtilActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0318   (0x0010)  MISSED
};

/// Class /Script/UACommon.LaunchHelper
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULaunchHelper : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.LaunchHelper.LaunchURL
	// FString LaunchURL(FString InURL, FString InParam);                                                                       // [0x6396dd4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.LaunchHelper.LaunchAndroidPackage
	// bool LaunchAndroidPackage(FString InPackageName, FString InParamName, FString InParamValue);                             // [0x6396b64] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.LaunchHelper.IsAndroidPackageInstalled
	// bool IsAndroidPackageInstalled(FString InPackageName);                                                                   // [0x6396a14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.LaunchHelper.GotoAndroidAppStore
	// bool GotoAndroidAppStore(FString InStorePkgName, FString InUri);                                                         // [0x6395f9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.LaunchHelper.GetLaunchParam
	// FString GetLaunchParam(FString InKey);                                                                                   // [0x22b1144] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.LoopedPanel
/// Size: 0x01B0 (432 bytes) (0x000158 - 0x0001B0) align 8 MaxSize: 0x01B0
class ULoopedPanel : public UCanvasPanel
{ 
public:
	int32_t                                            DefaultElementIndex;                                        // 0x0158   (0x0004)  
	int32_t                                            NextElementIndex;                                           // 0x015C   (0x0004)  
	FMargin                                            SlotPadding;                                                // 0x0160   (0x0010)  
	float                                              AnimTime;                                                   // 0x0170   (0x0004)  
	bool                                               EnableTouchEvent;                                           // 0x0174   (0x0001)  
	bool                                               bTestAnimation;                                             // 0x0175   (0x0001)  
	bool                                               bReverseAnim;                                               // 0x0176   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0177   (0x0001)  MISSED
	float                                              MinTouchDelta;                                              // 0x0178   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3922) /* FMulticastInlineDelegate */ __um(OnScrollEvent);                                     // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,3923) /* FMulticastInlineDelegate */ __um(OnAnimEndEvent);                                    // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,3924) /* FMulticastInlineDelegate */ __um(OnButtonClickedEvent);                              // 0x01A0   (0x0010)  


	/// Functions
	// Function /Script/UACommon.LoopedPanel.SyncProperties
	// void SyncProperties();                                                                                                   // [0x6398418] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.LoopedPanel.OnScrollEvent__DelegateSignature
	// void OnScrollEvent__DelegateSignature(float InValue);                                                                    // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.LoopedPanel.OnAnimEndEvent__DelegateSignature
	// void OnAnimEndEvent__DelegateSignature(int32_t InValue);                                                                 // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.LoopedPanel.MoveToPrevioudElement
	// void MoveToPrevioudElement(bool bUseAnim);                                                                               // [0x63971d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.LoopedPanel.MoveToNextElement
	// void MoveToNextElement(bool bUseAnim);                                                                                   // [0x6397134] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.LoopedPanel.MoveToElementByIndex
	// void MoveToElementByIndex(int32_t InIndex, bool bUseAnim);                                                               // [0x6397038] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.LoopedPanel.IsPlayAnim
	// bool IsPlayAnim();                                                                                                       // [0x6396b3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.LoopedPanel.GetViewElementIndex
	// int32_t GetViewElementIndex();                                                                                           // [0x6395f74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/UACommon.MapRuleConfig
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMapRuleConfig
{ 
	int32_t                                            RuleID;                                                     // 0x0000   (0x0004)  
	int32_t                                            MinCount;                                                   // 0x0004   (0x0004)  
	int32_t                                            MaxCount;                                                   // 0x0008   (0x0004)  
};

/// Class /Script/UACommon.LoosePointManager
/// Size: 0x0380 (896 bytes) (0x000318 - 0x000380) align 8 MaxSize: 0x0380
class ALoosePointManager : public AActor
{ 
public:
	class UDataTable*                                  LoosePointMapMessageTable;                                  // 0x0318   (0x0008)  
	class UDataTable*                                  AliasesTables;                                              // 0x0320   (0x0008)  
	class UDataTable*                                  MapLootTable;                                               // 0x0328   (0x0008)  
	class UDataTable*                                  LootDetailTable;                                            // 0x0330   (0x0008)  
	class UDataTable*                                  LoosePointsTable;                                           // 0x0338   (0x0008)  
	class UDataTable*                                  LoosePointsDetailTable;                                     // 0x0340   (0x0008)  
	class UDataTable*                                  StaticContainersTable;                                      // 0x0348   (0x0008)  
	int32_t                                            MapID;                                                      // 0x0350   (0x0004)  
	int32_t                                            RuleID;                                                     // 0x0354   (0x0004)  
	int32_t                                            TargetCount;                                                // 0x0358   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x035C   (0x0004)  MISSED
	TArray<FMapRuleConfig>                             LooseRuleConfig;                                            // 0x0360   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0370   (0x0010)  MISSED


	/// Functions
	// Function /Script/UACommon.LoosePointManager.SpawnRandomPointList
	// void SpawnRandomPointList(int32_t Num);                                                                                  // [0x63980b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.LoosePointManager.SpawnLootItem
	// void SpawnLootItem();                                                                                                    // [0x639809c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.LoosePointManager.SpawnItem
	// void SpawnItem();                                                                                                        // [0x6398088] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.LoosePointManager.GetRandomLoosePointCount
	// int32_t GetRandomLoosePointCount();                                                                                      // [0x6395a74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.PosSensitiveWidget
/// Size: 0x02B0 (688 bytes) (0x000290 - 0x0002B0) align 8 MaxSize: 0x02B0
class UPosSensitiveWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0290   (0x0010)  MISSED
	SDK_UNDEFINED(16,3925) /* FMulticastInlineDelegate */ __um(OnPaintPosChange);                                  // 0x02A0   (0x0010)  
};

/// Class /Script/UACommon.RichTextBlockInlineDecorator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URichTextBlockInlineDecorator : public URichTextBlockDecorator
{ 
public:
};

/// Class /Script/UACommon.ShowBtnOutlineHelper
/// Size: 0x0428 (1064 bytes) (0x000318 - 0x000428) align 8 MaxSize: 0x0428
class AShowBtnOutlineHelper : public AActor
{ 
public:
	class UMaterial*                                   TheOutlineMaterial;                                         // 0x0318   (0x0008)  
	int32_t                                            ButtonTempId;                                               // 0x0320   (0x0004)  
	unsigned char                                      UnknownData00_6[0x54];                                      // 0x0324   (0x0054)  MISSED
	TMap<class UButton*, FSlateBrush>                  BtnOriginFSlateBrush;                                       // 0x0378   (0x0050)  
	TMap<class UButton*, float>                        BtnOriginAlpha;                                             // 0x03C8   (0x0050)  
	float                                              RefreshTimerValue;                                          // 0x0418   (0x0004)  
	float                                              RefreshTimerThreshold;                                      // 0x041C   (0x0004)  
	bool                                               ShouldTransSize;                                            // 0x0420   (0x0001)  
	bool                                               IsAutomat;                                                  // 0x0421   (0x0001)  
	bool                                               IsOutlineOn;                                                // 0x0422   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0423   (0x0005)  MISSED


	/// Functions
	// Function /Script/UACommon.ShowBtnOutlineHelper.TransSizeToButtonMaterials
	// void TransSizeToButtonMaterials();                                                                                       // [0x6398480] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.ShowBtnOutlineHelper.SetOutlineOn
	// void SetOutlineOn();                                                                                                     // [0x6397e08] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.ShowBtnOutlineHelper.SetOutlineOff
	// void SetOutlineOff();                                                                                                    // [0x6397de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.ShowBtnOutlineHelper.RevertAllButtonOutline
	// void RevertAllButtonOutline();                                                                                           // [0x6397384] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UACommon.ShowBtnOutlineHelper.ActiveAllButtonOutline
	// void ActiveAllButtonOutline();                                                                                           // [0x63953e0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/UACommon.ShowTouch
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UShowTouch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0028   (0x0070)  MISSED


	/// Functions
	// Function /Script/UACommon.ShowTouch.StopShow
	// void StopShow();                                                                                                         // [0x1e39048] Final|Native|Static|Public 
	// Function /Script/UACommon.ShowTouch.StartShow
	// void StartShow();                                                                                                        // [0x1e39048] Final|Native|Static|Public 
	// Function /Script/UACommon.ShowTouch.SetIsPrintToScreen
	// void SetIsPrintToScreen(bool inState);                                                                                   // [0x4698e20] Final|Native|Static|Public 
};

/// Class /Script/UACommon.StatUMGWidget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStatUMGWidget : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.StatUMGWidget.ExecWidgetStat
	// void ExecWidgetStat(FString UMGName);                                                                                    // [0x639988c] Final|Native|Public  
	// Function /Script/UACommon.StatUMGWidget.DumpDetailWidgetInfo
	// void DumpDetailWidgetInfo(TArray<FString>& Results);                                                                     // [0x63997f0] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/UACommon.UASubmitBug
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UUASubmitBug : public UObject
{ 
public:
	SDK_UNDEFINED(16,3926) /* FMulticastInlineDelegate */ __um(ScreenShotEvent);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3927) /* FMulticastInlineDelegate */ __um(SubmitHttpResponseDelegate);                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/UACommon.UASubmitBug.SubmitHttpUpLoadDelegate__DelegateSignature
	// void SubmitHttpUpLoadDelegate__DelegateSignature(FString RspContent);                                                    // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.UASubmitBug.SubmitContent
	// void SubmitContent(FString BugContent);                                                                                  // [0x639c4fc] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.SubmitBug
	// FString SubmitBug(FString BugContent);                                                                                   // [0x639c318] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.StopVideoCapture
	// void StopVideoCapture(int32_t Duration);                                                                                 // [0x639c298] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.StartVideoCapture
	// void StartVideoCapture(bool bEnableAudio);                                                                               // [0x639c218] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.SetRTXName
	// void SetRTXName(FString InRTXName);                                                                                      // [0x478e20c] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.SetMftToken
	// void SetMftToken(FString InMftToken);                                                                                    // [0x639bdf4] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.SendVideo
	// void SendVideo(FString CosVideoPath);                                                                                    // [0x639bbf0] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.SendScreen
	// void SendScreen(FString CosScreenPath, FString CosBugContentPath);                                                       // [0x639ba14] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.SendLogAndVideo
	// void SendLogAndVideo(FString CosLogPath, FString CosVideoPath, FString CosScreenPath, FString CosBugContentPath);        // [0x639b804] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.SendLog
	// void SendLog(FString CosLogPath);                                                                                        // [0x639b6ec] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.ScreenCaptureDelegate__DelegateSignature
	// void ScreenCaptureDelegate__DelegateSignature();                                                                         // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/UACommon.UASubmitBug.IsVideoReady
	// bool IsVideoReady();                                                                                                     // [0x639a6ec] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.GetStoryList
	// FString GetStoryList(FString SearchStr);                                                                                 // [0x6399ef8] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.GetForceStop
	// bool GetForceStop();                                                                                                     // [0x6399bb8] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.GetCaptureTime
	// float GetCaptureTime();                                                                                                  // [0x6399b4c] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.GetCaptureState
	// bool GetCaptureState();                                                                                                  // [0x6399b18] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.GetBugField
	// FString GetBugField();                                                                                                   // [0x6399960] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.Get
	// class UUASubmitBug* Get();                                                                                               // [0x6399930] Final|Native|Static|Public 
	// Function /Script/UACommon.UASubmitBug.DragWidget
	// void DragWidget(class UUserWidget* panel, FGeometry& InGeometry, FPointerEvent& InMouseEvent);                           // [0x6399654] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UASubmitBug.DeleteLocalVideo
	// bool DeleteLocalVideo();                                                                                                 // [0x6399630] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.ClipVideo
	// bool ClipVideo();                                                                                                        // [0x1bfc3b0] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.CaptureScreen
	// void CaptureScreen();                                                                                                    // [0x6399078] Final|Native|Public  
	// Function /Script/UACommon.UASubmitBug.BindStory
	// void BindStory(FString BugId, FString StoryId);                                                                          // [0x6398f58] Final|Native|Public  
};

/// Class /Script/UACommon.TinyHotfixFile
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTinyHotfixFile : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.TinyHotfixFile.HotfixIniFile
	// int32_t HotfixIniFile(FString Filename);                                                                                 // [0x1eb31dc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.TutorialModeInputProcessor
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UTutorialModeInputProcessor : public UObject
{ 
public:
	SDK_UNDEFINED(16,3928) /* FDelegateProperty */     __um(OnPointerDownEvent);                                   // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3929) /* FDelegateProperty */     __um(OnPointerUpEvent);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3930) /* FDelegateProperty */     __um(OnScrollEvent);                                        // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0058   (0x0028)  MISSED


	/// Functions
	// Function /Script/UACommon.TutorialModeInputProcessor.UnhookInputProcessor
	// bool UnhookInputProcessor();                                                                                             // [0x639c614] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.TutorialModeInputProcessor.SetNextHookAreaRect
	// void SetNextHookAreaRect(FVector2D InLeftTop, FVector2D InRightBottom);                                                  // [0x639bf38] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.TutorialModeInputProcessor.SetContext
	// void SetContext(class UObject* InContext);                                                                               // [0x2297018] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.TutorialModeInputProcessor.ResumeHook
	// void ResumeHook();                                                                                                       // [0x639b238] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.TutorialModeInputProcessor.PauseHook
	// void PauseHook();                                                                                                        // [0x279d854] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.TutorialModeInputProcessor.HookInputProcessor
	// bool HookInputProcessor();                                                                                               // [0x1f0e354] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UABuglyHelper
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUABuglyHelper : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.UABuglyHelper.SaveUrl
	// void SaveUrl(FString Md5, FString URL);                                                                                  // [0x639b5cc] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.SaveTime
	// void SaveTime(FString Md5, FString Time);                                                                                // [0x639b4ac] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.SaveMd5
	// void SaveMd5(FString Md5);                                                                                               // [0x639b394] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.SaveGcloudBugly
	// void SaveGcloudBugly(FString URL);                                                                                       // [0x639b2f0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.SaveBugly
	// void SaveBugly(FString URL);                                                                                             // [0x639b24c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.RestartSend
	// void RestartSend();                                                                                                      // [0x252ae30] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.RemoveMd5
	// void RemoveMd5(FString Md5);                                                                                             // [0x639b098] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.IsContainMd5
	// bool IsContainMd5(FString Md5);                                                                                          // [0x639a5a8] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.InitLogTime
	// FString InitLogTime();                                                                                                   // [0x18571e4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.HasTimeInFile
	// bool HasTimeInFile(FString LOGTime, FString LogName);                                                                    // [0x639a0c4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.GetMd5Table
	// TArray<FString> GetMd5Table();                                                                                           // [0x6399ebc] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.GetMd5ByUrl
	// FString GetMd5ByUrl(FString URL);                                                                                        // [0x6399cd8] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.GetBuglyInfo
	// FBuglyData GetBuglyInfo(FString Md5);                                                                                    // [0x6399a4c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.CombineUrlKey
	// FString CombineUrlKey(FString Md5);                                                                                      // [0x639944c] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UABuglyHelper.CombineTimeKey
	// FString CombineTimeKey(FString Md5);                                                                                     // [0x6399268] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/UACommon.UAButtonWidget
/// Size: 0x0468 (1128 bytes) (0x000290 - 0x000468) align 8 MaxSize: 0x0468
class UUAButtonWidget : public UUserWidget
{ 
public:
	float                                              ClickTime;                                                  // 0x0290   (0x0004)  
	bool                                               BannedClick;                                                // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0295   (0x0003)  MISSED
	FLinearColor                                       normalTxtShowColor;                                         // 0x0298   (0x0010)  
	FLinearColor                                       pressTxtShowColor;                                          // 0x02A8   (0x0010)  
	FVector2D                                          normalShadowOffect;                                         // 0x02B8   (0x0008)  
	FVector2D                                          pressShadowOffect;                                          // 0x02C0   (0x0008)  
	bool                                               ForceUpper;                                                 // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02C9   (0x0003)  MISSED
	float                                              ImagePaddingLeft;                                           // 0x02CC   (0x0004)  
	float                                              ImagePaddingTop;                                            // 0x02D0   (0x0004)  
	float                                              ImagePaddingRight;                                          // 0x02D4   (0x0004)  
	float                                              ImagePaddingButtom;                                         // 0x02D8   (0x0004)  
	float                                              TxtPaddingLeft;                                             // 0x02DC   (0x0004)  
	float                                              TxtPaddingTop;                                              // 0x02E0   (0x0004)  
	float                                              TxtPaddingRight;                                            // 0x02E4   (0x0004)  
	float                                              TxtPaddingButtom;                                           // 0x02E8   (0x0004)  
	float                                              PressedPaddingLeft;                                         // 0x02EC   (0x0004)  
	float                                              PressedPaddingTop;                                          // 0x02F0   (0x0004)  
	float                                              PressedPaddingRight;                                        // 0x02F4   (0x0004)  
	float                                              PressedPaddingButtom;                                       // 0x02F8   (0x0004)  
	bool                                               isGray;                                                     // 0x02FC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02FD   (0x0003)  MISSED
	SDK_UNDEFINED(16,3931) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x0300   (0x0010)  
	SDK_UNDEFINED(16,3932) /* FMulticastInlineDelegate */ __um(OnPressed);                                         // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,3933) /* FMulticastInlineDelegate */ __um(OnReleased);                                        // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,3934) /* FMulticastInlineDelegate */ __um(OnHovered);                                         // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3935) /* FMulticastInlineDelegate */ __um(OnUnhovered);                                       // 0x0340   (0x0010)  
	bool                                               LastButtonIsPressed;                                        // 0x0350   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0351   (0x0007)  MISSED
	class UButton*                                     _button;                                                    // 0x0358   (0x0008)  
	class UImage*                                      _imageNormal;                                               // 0x0360   (0x0008)  
	class UImage*                                      _imagePress;                                                // 0x0368   (0x0008)  
	class UImage*                                      _imageHover;                                                // 0x0370   (0x0008)  
	class UImage*                                      _imageGray;                                                 // 0x0378   (0x0008)  
	class UTextBlock*                                  _textNormal;                                                // 0x0380   (0x0008)  
	class UTextBlock*                                  _textPress;                                                 // 0x0388   (0x0008)  
	class UTextBlock*                                  _textHover;                                                 // 0x0390   (0x0008)  
	class UTextBlock*                                  _textGray;                                                  // 0x0398   (0x0008)  
	class UOverlaySlot*                                _imageNormalSlot;                                           // 0x03A0   (0x0008)  
	class UOverlaySlot*                                _imagePressSlot;                                            // 0x03A8   (0x0008)  
	class UOverlaySlot*                                _imageHoverSlot;                                            // 0x03B0   (0x0008)  
	class UOverlaySlot*                                _imageGraySlot;                                             // 0x03B8   (0x0008)  
	class UOverlaySlot*                                _textNormalSlot;                                            // 0x03C0   (0x0008)  
	class UOverlaySlot*                                _textPressSlot;                                             // 0x03C8   (0x0008)  
	class UOverlaySlot*                                _textHoverSlot;                                             // 0x03D0   (0x0008)  
	class UOverlaySlot*                                _textGraySlot;                                              // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData04_7[0x88];                                      // 0x03E0   (0x0088)  MISSED


	/// Functions
	// Function /Script/UACommon.UAButtonWidget.SetGray
	// void SetGray(bool gray);                                                                                                 // [0x639bd54] Final|Native|Public  
	// Function /Script/UACommon.UAButtonWidget.OnRefreshPressState
	// void OnRefreshPressState(int32_t IsPressed);                                                                             // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/UACommon.UAButtonWidget.OnRefreshHoverState
	// void OnRefreshHoverState(int32_t isHover);                                                                               // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/UACommon.UAButtonWidget.OnButtonUnHovered
	// void OnButtonUnHovered();                                                                                                // [0x639a788] Final|Native|Public  
	// Function /Script/UACommon.UAButtonWidget.OnButtonReleased
	// void OnButtonReleased();                                                                                                 // [0x639a76c] Final|Native|Public  
	// Function /Script/UACommon.UAButtonWidget.OnButtonPress
	// void OnButtonPress();                                                                                                    // [0x639a750] Final|Native|Public  
	// Function /Script/UACommon.UAButtonWidget.OnButtonHovered
	// void OnButtonHovered();                                                                                                  // [0x639a73c] Final|Native|Public  
	// Function /Script/UACommon.UAButtonWidget.OnButtonClick
	// void OnButtonClick();                                                                                                    // [0x639a720] Final|Native|Public  
};

/// Class /Script/UACommon.UACharacterDefaultInventoryCompBase
/// Size: 0x02E0 (736 bytes) (0x000138 - 0x0002E0) align 8 MaxSize: 0x02E0
class UUACharacterDefaultInventoryCompBase : public USGCharacterDefaultInventoryComponent
{ 
public:
	bool                                               bOwnedByAI;                                                 // 0x0138   (0x0001)  
	bool                                               bUseSlicedInit;                                             // 0x0139   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x013A   (0x0002)  MISSED
	float                                              MaxSlicedinterval;                                          // 0x013C   (0x0004)  
	SDK_UNDEFINED(16,3936) /* TArray<TSoftObjectPtr<UClass*>> */ __um(FakeAvatar_Head);                            // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,3937) /* TArray<TSoftObjectPtr<UClass*>> */ __um(FakeAvatar_Torse);                           // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,3938) /* TArray<TSoftObjectPtr<UClass*>> */ __um(FakeAvatar_Gloves);                          // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,3939) /* TArray<TSoftObjectPtr<UClass*>> */ __um(FakeAvatar_Legs);                            // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,3940) /* TArray<TSoftObjectPtr<UClass*>> */ __um(FakeAvatar_Shoes);                           // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,3941) /* TArray<TSoftObjectPtr<UClass*>> */ __um(FakeAvatar_Watch);                           // 0x0190   (0x0010)  
	bool                                               bTestMultiAvatar;                                           // 0x01A0   (0x0001)  
	bool                                               bSpawnSecondMainWeapon;                                     // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
	TMap<uint64_t, class ASGInventory*>                PlayerItemIdtoInventoryMap;                                 // 0x01A8   (0x0050)  
	class USlicedInitParams*                           SlicedInitParams;                                           // 0x01F8   (0x0008)  
	class USGCharacterInventoryGiveComponent*          InventoryGiveComponent;                                     // 0x0200   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0208   (0x0018)  MISSED
	TArray<class USGPlayerItemInfoBase*>               CachedDropItems;                                            // 0x0220   (0x0010)  
	TMap<int64_t, int32_t>                             CacheInventoryValues;                                       // 0x0230   (0x0050)  
	SDK_UNDEFINED(16,3942) /* TArray<TSoftObjectPtr<UClass*>> */ __um(TestInventoryPool_Weapon);                   // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,3943) /* TArray<TSoftObjectPtr<UClass*>> */ __um(TestInventoryPool_MeleeWeapon);              // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,3944) /* TArray<TSoftObjectPtr<UClass*>> */ __um(TestInventoryPool_Bag);                      // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,3945) /* TArray<TSoftObjectPtr<UClass*>> */ __um(TestInventoryPool_VestBag);                  // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,3946) /* TArray<TSoftObjectPtr<UClass*>> */ __um(TestInventoryPool_Helmet);                   // 0x02C0   (0x0010)  
	SDK_UNDEFINED(16,3947) /* TArray<TSoftObjectPtr<UClass*>> */ __um(TestInventoryPool_Vest);                     // 0x02D0   (0x0010)  


	/// Functions
	// Function /Script/UACommon.UACharacterDefaultInventoryCompBase.MarkInHighRatio
	// void MarkInHighRatio();                                                                                                  // [0x22a95b8] Native|Public        
	// Function /Script/UACommon.UACharacterDefaultInventoryCompBase.IsInSlicedInit
	// bool IsInSlicedInit();                                                                                                   // [0x639a6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UACharacterDefaultInventoryCompBase.InitCharacterBadges
	// void InitCharacterBadges(TArray<FSGBadgeInfo>& BadgeItems);                                                              // [0x639a46c] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UACharacterDefaultInventoryCompBase.InitCharacterAvatarsWithStates
	// void InitCharacterAvatarsWithStates(TArray<FSGAvatarInfo>& InAvatarInfos);                                               // [0x639a330] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UACharacterDefaultInventoryCompBase.InitCharacterAvatars
	// void InitCharacterAvatars(TArray<uint64_t>& InAvatarItemIds);                                                            // [0x639a1f4] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UACharacterDefaultInventoryCompBase.GetCurLoadEquipmentProgress
	// float GetCurLoadEquipmentProgress();                                                                                     // [0x6399ba0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UACommon.ItemInfoForRand
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FItemInfoForRand
{ 
	TMap<int32_t, int32_t>                             SuitItemsInfo;                                              // 0x0000   (0x0050)  
	int32_t                                            Weight;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/UACommon.UACharacterAIRandomInventoryComponent
/// Size: 0x0388 (904 bytes) (0x0002E0 - 0x000388) align 8 MaxSize: 0x0388
class UUACharacterAIRandomInventoryComponent : public UUACharacterDefaultInventoryCompBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02E0   (0x0008)  MISSED
	int32_t                                            TryTimesBeforeUsingDefault;                                 // 0x02E8   (0x0004)  
	float                                              TryInterval;                                                // 0x02EC   (0x0004)  
	int32_t                                            TryTimesBeforeUsingDefault_WeaponConfig;                    // 0x02F0   (0x0004)  
	float                                              TryInterval_WeaponConfig;                                   // 0x02F4   (0x0004)  
	class ASGInventory*                                InitWeapon;                                                 // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0300   (0x0058)  MISSED
	TArray<FItemInfoForRand>                           SuitArray;                                                  // 0x0358   (0x0010)  
	TArray<FItemInfoForRand>                           SuitArrayNoRandomTest;                                      // 0x0368   (0x0010)  
	class ASGInventory*                                InventoryInUsing;                                           // 0x0378   (0x0008)  
	float                                              LastTimeUseInventory;                                       // 0x0380   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0384   (0x0004)  MISSED


	/// Functions
	// Function /Script/UACommon.UACharacterAIRandomInventoryComponent.GiveRandSuit
	// void GiveRandSuit();                                                                                                     // [0x639a0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UACharacterAIRandomInventoryComponent.GetGivenInventoryCountInfo
	// FString GetGivenInventoryCountInfo();                                                                                    // [0x6399bec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UACharacterDefaultInventoryComp
/// Size: 0x0300 (768 bytes) (0x0002E0 - 0x000300) align 8 MaxSize: 0x0300
class UUACharacterDefaultInventoryComp : public UUACharacterDefaultInventoryCompBase
{ 
public:
	bool                                               bForceGiveInventory;                                        // 0x02E0   (0x0001)  
	bool                                               bDelayBeginPlayOver;                                        // 0x02E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02E2   (0x0006)  MISSED
	TArray<int64_t>                                    StandAloneAvatarArray;                                      // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.SpawnRandomAwardsResultDoToast
	// void SpawnRandomAwardsResultDoToast(TArray<int32_t>& SpawnItemIDs, TArray<int32_t>& SpawnItemNums);                      // [0x639c01c] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.ServerSaveMinimumEquipInfo
	// void ServerSaveMinimumEquipInfo();                                                                                       // [0x639bd08] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.ResetEndurance
	// void ResetEndurance(class ASGPlayerState* PS);                                                                           // [0x639b1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.PostInit
	// void PostInit();                                                                                                         // [0x22c6f48] Native|Event|Public|BlueprintEvent 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.OnUsedInventory
	// void OnUsedInventory(class ACharacter* Character, class ASGInventory* Inventory);                                        // [0x639afac] Native|Protected     
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.OnPreAddInventory
	// void OnPreAddInventory(class ACharacter* Character, class ASGInventory* Inventory);                                      // [0x639ab9c] Final|Native|Public  
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.OnPlayerFinishGame
	// void OnPlayerFinishGame(class APlayerController* PlayerController, EPlayerEndGameType FinishType, class AActor* EscapeVolume); // [0x639aa00] Final|Native|Protected 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.OnDropItemsGiveHandle
	// void OnDropItemsGiveHandle(class ASGCharacter* Character, int32_t DropItemId, int32_t& OutResultCode);                   // [0x639a8dc] Final|Native|Protected|HasOutParms 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.OnCharacterPostDied
	// void OnCharacterPostDied(class ACharacter* DeadCharacter, class AController* Killer, class UDamageEventObject* DamageEventObject); // [0x639a79c] Final|Native|Public  
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.InitStandaloneCharacterAvatars
	// void InitStandaloneCharacterAvatars();                                                                                   // [0x5c5ee70] Native|Event|Public|BlueprintEvent 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.ClientReceiveSpawnRandomAwardsResult
	// void ClientReceiveSpawnRandomAwardsResult(TArray<int32_t> SpawnItemIDs, TArray<int32_t> SpawnItemNums);                  // [0x639908c] Net|Native|Event|Protected|NetClient 
	// Function /Script/UACommon.UACharacterDefaultInventoryComp.CheckisInTutorialLevel
	// bool CheckisInTutorialLevel();                                                                                           // [0x5cbb5c8] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/UACommon.InitInventoryParams
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInitInventoryParams
{ 
	class USGPlayerItemInfoBase*                       item;                                                       // 0x0000   (0x0008)  
	class AActor*                                      ParentInventory;                                            // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/UACommon.SlicedInitParams
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USlicedInitParams : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	TArray<FInitInventoryParams>                       InitEquipmentParamsList;                                    // 0x0040   (0x0010)  
	TArray<FInitInventoryParams>                       InitItemParamsList;                                         // 0x0050   (0x0010)  
};

/// Struct /Script/UACommon.SceneCaptureConfig
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FSceneCaptureConfig
{ 
	FTransform                                         CameraTransform;                                            // 0x0000   (0x0030)  
	float                                              FOV;                                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UTextureRenderTarget2D*                      TextureTarget;                                              // 0x0038   (0x0008)  
	bool                                               bIsCasual;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FString                                            Light_Rifle_Male;                                           // 0x0048   (0x0010)  
	FString                                            Light_Pistol_Male;                                          // 0x0058   (0x0010)  
	FString                                            Light_Melee_Male;                                           // 0x0068   (0x0010)  
	FString                                            Light_Rifle_Female;                                         // 0x0078   (0x0010)  
	FString                                            Light_Pistol_Female;                                        // 0x0088   (0x0010)  
	FString                                            Light_Melee_Female;                                         // 0x0098   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/UACommon.UACharacterPreviewComponent
/// Size: 0x0700 (1792 bytes) (0x0004B8 - 0x000700) align 16 MaxSize: 0x0700
class UUACharacterPreviewComponent : public USGCharacterPreviewComponent
{ 
public:
	class UMaterialParameterCollection*                CaptureMaterialParameterCollection;                         // 0x04B8   (0x0008)  
	FLinearColor                                       HairSpecularLight;                                          // 0x04C0   (0x0010)  
	TMap<FString, FSceneCaptureConfig>                 SceneCaptureConfigs;                                        // 0x04D0   (0x0050)  
	class UClass*                                      CaptureLightSets;                                           // 0x0520   (0x0008)  
	TMap<FString, FString>                             CaptureCharacterFacialSequenceName;                         // 0x0528   (0x0050)  
	TWeakObjectPtr<class USkeletalMesh*>               BadgeVelcroAsset;                                           // 0x0578   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0580   (0x0020)  MISSED
	TMap<FString, FString>                             CaptureCharacterSequenceName;                               // 0x05A0   (0x0050)  
	FName                                              PreviewCharacterFPTag;                                      // 0x05F0   (0x0008)  
	FName                                              BadgeVelcroAttachBoneTag;                                   // 0x05F8   (0x0008)  
	FName                                              BadgeAttachBoneTag;                                         // 0x0600   (0x0008)  
	FString                                            CurCaptureSceneName;                                        // 0x0608   (0x0010)  
	bool                                               bPistolGrip;                                                // 0x0618   (0x0001)  
	bool                                               IsStopCapture;                                              // 0x0619   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x061A   (0x0006)  MISSED
	class UAnimMontage*                                CacheGestureMontage;                                        // 0x0620   (0x0008)  
	bool                                               IsPlayingGestureTakeUpAnim;                                 // 0x0628   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0629   (0x000F)  MISSED
	class USkeletalMeshComponent*                      BadgeMeshComponent;                                         // 0x0638   (0x0008)  
	class USkeletalMeshComponent*                      BadgeVelcroMeshComponent;                                   // 0x0640   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0648   (0x0020)  MISSED
	class ASGCaptureCharacterLights*                   CaptureLight;                                               // 0x0668   (0x0008)  
	class UAnimNotify_CaptureCharacterConfig*          AnimNotifyConfig;                                           // 0x0670   (0x0008)  
	unsigned char                                      UnknownData04_7[0x88];                                      // 0x0678   (0x0088)  MISSED


	/// Functions
	// Function /Script/UACommon.UACharacterPreviewComponent.WaitAnimationUpdate
	// void WaitAnimationUpdate();                                                                                              // [0x63a1750] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.UpdateSceneCaptureTextureTargetSize
	// void UpdateSceneCaptureTextureTargetSize();                                                                              // [0x63a173c] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.UpdateCharacterSequence
	// void UpdateCharacterSequence();                                                                                          // [0x63a1728] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.SwitchCaptureCameraConfig
	// void SwitchCaptureCameraConfig();                                                                                        // [0x63a1714] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.StopCaptureEveryFrame
	// void StopCaptureEveryFrame();                                                                                            // [0x63a1700] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.SetTimerCheckMeshFullyStreamedIn
	// void SetTimerCheckMeshFullyStreamedIn(bool bStart);                                                                      // [0x63a15b0] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.SetAsyncLoadingTaskNum
	// void SetAsyncLoadingTaskNum(int32_t Num, bool bInventoryRemoved);                                                        // [0x63a14a0] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.SetAnimationLoaded
	// void SetAnimationLoaded();                                                                                               // [0x63a148c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UACharacterPreviewComponent.OnWeaponAllMeshLoaded
	// void OnWeaponAllMeshLoaded(class ASGWeapon* TargetWeapon);                                                               // [0x63a1194] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnUpdateInventoryTaskFinished
	// void OnUpdateInventoryTaskFinished(int32_t InAsyncId);                                                                   // [0x63a10fc] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnUpdateAvatarsFinish
	// void OnUpdateAvatarsFinish();                                                                                            // [0x63a10cc] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnUpdateAvatarsAddInventory
	// void OnUpdateAvatarsAddInventory(class ASGInventory* AvatarInventory);                                                   // [0x63a1030] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnSetCurrentWeapon
	// void OnSetCurrentWeapon(class ASGInventory* Weapon);                                                                     // [0x63a0f94] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnPreviewGestureEnded
	// void OnPreviewGestureEnded(class UAnimMontage* Montage, bool bInterrupted);                                              // [0x63a0ea8] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnPreviewGestureBlendingOut
	// void OnPreviewGestureBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                        // [0x63a0dbc] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnOwnerEquipSkeletalMeshLoadCompleted
	// void OnOwnerEquipSkeletalMeshLoadCompleted(class ASGInventory* Inv, class USkeletalMeshComponent* SkeletalMeshComp);     // [0x5c3f3b8] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnMeshDecideLoadSkeletalMesh
	// void OnMeshDecideLoadSkeletalMesh(class ASGInventory* AvatarInventory, bool& bUseGameMeshInLobby);                       // [0x63a0ccc] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UACharacterPreviewComponent.OnInvMeshDecideLoadAnimInstance
	// void OnInvMeshDecideLoadAnimInstance(class ASGInventory* Inventory, bool& bUseGameAnimInLobby);                          // [0x63a0b44] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UACharacterPreviewComponent.OnInventoryLoadComplete
	// void OnInventoryLoadComplete(int32_t TaskId);                                                                            // [0x63a0c34] Final|Native|Protected 
	// Function /Script/UACommon.UACharacterPreviewComponent.OnEquipMeshDecideLoadSkeletalMesh
	// void OnEquipMeshDecideLoadSkeletalMesh(class USGInventoryEquipMeshComponent* InventoryMeshComponent, bool& bUseGameMeshInLobby); // [0x63a0a54] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UACharacterPreviewComponent.OnDressPreviewCharacterStarted
	// void OnDressPreviewCharacterStarted(bool bUseInvisibleLoading, bool bForceUpateAnimation, float fTimeOut);               // [0x63a0904] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UACharacterPreviewComponent.OnCharacterStaticMeshLoaded
	// void OnCharacterStaticMeshLoaded(class UStaticMesh* StaticMesh);                                                         // [0x63a0554] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnCharacterSkeletalMeshLoaded
	// void OnCharacterSkeletalMeshLoaded(class USkeletalMesh* SkeletalMesh);                                                   // [0x63a018c] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnCharacterRemoveInventoryEvent
	// void OnCharacterRemoveInventoryEvent(class ACharacter* Character, class ASGInventory* Inventory);                        // [0x63a00a4] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnCharacterPreUpdateAvatars
	// void OnCharacterPreUpdateAvatars();                                                                                      // [0x63a0090] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnCharacterAvatarRemove
	// void OnCharacterAvatarRemove(class ASGInventory* Inv);                                                                   // [0x639fff4] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnCharacterAvatarMeshLoaded
	// void OnCharacterAvatarMeshLoaded(class UMeshComponent* MeshComp);                                                        // [0x639ff58] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnCharacterAllAvatarMeshLoaded
	// void OnCharacterAllAvatarMeshLoaded(int32_t AvatarCount);                                                                // [0x639fec0] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnAllMeshLoaded
	// void OnAllMeshLoaded();                                                                                                  // [0x639feac] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.OnAllAvatarsMeshLoadFinish
	// void OnAllAvatarsMeshLoadFinish(int32_t AvatarCount);                                                                    // [0x4dec47c] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.ListenTag
	// bool ListenTag(FName InputTag);                                                                                          // [0x639fce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UACharacterPreviewComponent.IsDuringDressingInventory
	// bool IsDuringDressingInventory();                                                                                        // [0x639fba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UACommon.UACharacterPreviewComponent.GetAsyncId
	// int32_t GetAsyncId();                                                                                                    // [0x639e87c] Final|Native|Public|Const 
	// Function /Script/UACommon.UACharacterPreviewComponent.DelayPreviewGesture
	// void DelayPreviewGesture();                                                                                              // [0x639cd3c] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.DelayCheckDressAvatarFinished
	// void DelayCheckDressAvatarFinished();                                                                                    // [0x639cd28] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.CheckDressAvatarFinished
	// void CheckDressAvatarFinished();                                                                                         // [0x639cad8] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.CheckCaptureMeshIsFullyStreamedIn
	// bool CheckCaptureMeshIsFullyStreamedIn();                                                                                // [0x639cab4] Final|Native|Protected 
	// Function /Script/UACommon.UACharacterPreviewComponent.CallLuaOnTimeOut
	// void CallLuaOnTimeOut();                                                                                                 // [0x639caa0] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.CallLuaOnDressAvatarCompleted
	// void CallLuaOnDressAvatarCompleted();                                                                                    // [0x639ca8c] Final|Native|Public  
	// Function /Script/UACommon.UACharacterPreviewComponent.AddInventoryItemInfo
	// bool AddInventoryItemInfo(class USGPlayerItemInfoBase* ItemInfoBase);                                                    // [0x528f7d8] Final|Native|Public  
};

/// Class /Script/UACommon.UAClipImageWidget
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class UUAClipImageWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/UACommon.UAClipImageWidget.OnTextureLoadCompleted
	// void OnTextureLoadCompleted(class UTexture* Tex);                                                                        // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/UACommon.UAClipImageWidget.AsyncLoadTexture
	// void AsyncLoadTexture(FString TexPath);                                                                                  // [0x639c964] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/UACommon.UACommonConfigStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUACommonConfigStatics : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.UACommonConfigStatics.SettLastCrashType
	// void SettLastCrashType(int32_t CrashType);                                                                               // [0x63a164c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.SetPSOPrecompileResult
	// void SetPSOPrecompileResult(bool bResult);                                                                               // [0x1b966e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.SetPSOPrecompileInt
	// void SetPSOPrecompileInt(FString Key, int32_t Value);                                                                    // [0x267b68c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.SetLastPSOPrecompileAppVersion
	// void SetLastPSOPrecompileAppVersion();                                                                                   // [0x63a159c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.SetLastPSOPrecompileAppHardwareInfo
	// void SetLastPSOPrecompileAppHardwareInfo();                                                                              // [0x63a1588] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.SavePSOPrecompileHardwareInfo
	// void SavePSOPrecompileHardwareInfo();                                                                                    // [0x1b94454] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.SavePSODriverCache
	// void SavePSODriverCache();                                                                                               // [0x27b7e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.SaveLoginDataConfig
	// void SaveLoginDataConfig();                                                                                              // [0x279e7ac] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonConfigStatics.ResetPreCompilePSOStateForNetbar
	// bool ResetPreCompilePSOStateForNetbar(bool bNeedPreCompileAllPSOForNetbar);                                              // [0x63a13b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.ReloadVersionIni
	// bool ReloadVersionIni(bool InForce);                                                                                     // [0x63a1328] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.PatchVersionIni
	// bool PatchVersionIni(FString InResVersion);                                                                              // [0x63a1230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.NeedPreCompileAllPSOForNetbar
	// bool NeedPreCompileAllPSOForNetbar();                                                                                    // [0x1b96648] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.LobbySetPing
	// bool LobbySetPing(class UWorld* WorldContext, char Ping);                                                                // [0x639fd88] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.LoadPSOReccord
	// void LoadPSOReccord();                                                                                                   // [0x29adb78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.LoadAssetCookIni
	// void LoadAssetCookIni();                                                                                                 // [0x5da7644] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsPackageWithPak
	// bool IsPackageWithPak();                                                                                                 // [0x2639d6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsOverWritePacket
	// bool IsOverWritePacket();                                                                                                // [0x639fc8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsOBClient
	// bool IsOBClient();                                                                                                       // [0x639fc04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsNetbar
	// bool IsNetbar();                                                                                                         // [0x1b72b3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsForDistribution
	// bool IsForDistribution();                                                                                                // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsFirstTimeLaunch
	// bool IsFirstTimeLaunch();                                                                                                // [0x639fbc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsExpClient
	// bool IsExpClient();                                                                                                      // [0x22aaad8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.IsCNWithOverseaUI
	// bool IsCNWithOverseaUI();                                                                                                // [0x639fb18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.InitPipedNetWorkReplayURL
	// void InitPipedNetWorkReplayURL(FString InURL);                                                                           // [0x639fa00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.InitConfigFiles
	// void InitConfigFiles();                                                                                                  // [0x21767c0] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonConfigStatics.GetWXAppID
	// FString GetWXAppID();                                                                                                    // [0x1db737c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetVGameAppId
	// int32_t GetVGameAppId();                                                                                                 // [0x639f8f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetVersionCode
	// FString GetVersionCode();                                                                                                // [0x639f914] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetVersionBuildTimestamp
	// FString GetVersionBuildTimestamp();                                                                                      // [0x22bc964] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetVersionBuildBranchNames
	// FString GetVersionBuildBranchNames();                                                                                    // [0x22bc9e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetUserAgreementURL
	// FString GetUserAgreementURL();                                                                                           // [0x639f804] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetUObjectLeakWhiteList
	// TArray<FString> GetUObjectLeakWhiteList();                                                                               // [0x639f79c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetUAMOLobbyIpListConfig
	// void GetUAMOLobbyIpListConfig(TArray<FString>& UAMOLobbyIpListArr);                                                      // [0x220345c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetTGALiveIsDebug
	// int32_t GetTGALiveIsDebug();                                                                                             // [0x639f74c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetSvnVersion
	// FString GetSvnVersion();                                                                                                 // [0x1633afc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetSteamId
	// int64_t GetSteamId();                                                                                                    // [0x639f728] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetSteamCnUserAgreementURL
	// FString GetSteamCnUserAgreementURL();                                                                                    // [0x639f6ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetSteamCnPrivacySDKURL
	// FString GetSteamCnPrivacySDKURL();                                                                                       // [0x639f6b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetSplashFlowTimeOutSeconds
	// int32_t GetSplashFlowTimeOutSeconds();                                                                                   // [0x639f664] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetServerIPConfig
	// void GetServerIPConfig(TArray<FString>& ServerIPArr);                                                                    // [0x2238de4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetRegisterFlowTimeOutSeconds
	// int32_t GetRegisterFlowTimeOutSeconds();                                                                                 // [0x639f618] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetQQWXLobbyIpListConfig
	// void GetQQWXLobbyIpListConfig(TArray<FString>& QQLobbyIpListArr, TArray<FString>& WXLobbyIpListArr);                     // [0x22034fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetQQAppID
	// FString GetQQAppID();                                                                                                    // [0x1db75a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPufferUpdateUrl
	// FString GetPufferUpdateUrl(bool InPrePuffer);                                                                            // [0x639f460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPufferProductID
	// int32_t GetPufferProductID();                                                                                            // [0x639f414] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPSOPrecompileInt
	// int32_t GetPSOPrecompileInt(FString Key);                                                                                // [0x228cda4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPrivacySDKURL
	// FString GetPrivacySDKURL();                                                                                              // [0x639f3d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPrivacyGuideURL
	// FString GetPrivacyGuideURL();                                                                                            // [0x639f39c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPrivacyGuideChildrenURL
	// FString GetPrivacyGuideChildrenURL();                                                                                    // [0x639f360] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPCServerIPConfig
	// void GetPCServerIPConfig(TArray<FString>& ServerIPArr);                                                                  // [0x22033bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetPackageVersion
	// FString GetPackageVersion();                                                                                             // [0x1feef08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetMSDKGameID
	// FString GetMSDKGameID();                                                                                                 // [0x639f274] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetMobileQQWXIpConfig
	// void GetMobileQQWXIpConfig(TArray<FString>& MobileQQLobbyUrlArr, TArray<FString>& MobileWXLobbyUrlArr, bool bPreRelease); // [0x22c5f7c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetMobileLoginIpConfig
	// void GetMobileLoginIpConfig(TArray<FString>& EditorMobileLobbyUrlArr, TArray<FString>& MobileLobbyUrlArr, bool bPreRelease); // [0x22c45fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetLoginIpConfig
	// void GetLoginIpConfig(TArray<FString>& EditorLobbyUrlArr, TArray<FString>& PCLobbyUrlArr);                               // [0x2203630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetLoginFlowTimeOutSeconds
	// int32_t GetLoginFlowTimeOutSeconds();                                                                                    // [0x639f228] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetLastPSOPrecompileResult
	// bool GetLastPSOPrecompileResult();                                                                                       // [0x1b96694] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetLastPSOPrecompileAppVersion
	// FString GetLastPSOPrecompileAppVersion();                                                                                // [0x639f104] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetLastProgramVersion
	// FString GetLastProgramVersion();                                                                                         // [0x639f140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetLastCrashType
	// int32_t GetLastCrashType();                                                                                              // [0x279e498] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetIsFullPkg
	// bool GetIsFullPkg();                                                                                                     // [0x26991e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetIntlUpdateReleaseID
	// int32_t GetIntlUpdateReleaseID();                                                                                        // [0x639f0b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetIntlUpdatePreReleaseID
	// int32_t GetIntlUpdatePreReleaseID();                                                                                     // [0x639f06c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetGuestAppID
	// FString GetGuestAppID();                                                                                                 // [0x1db6c6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetGMESDKGamekey
	// FString GetGMESDKGamekey();                                                                                              // [0x639ee48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetGMESDKGameID
	// FString GetGMESDKGameID();                                                                                               // [0x639ee0c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetGitVersion
	// FString GetGitVersion();                                                                                                 // [0x639f030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetGamekey
	// FString GetGamekey();                                                                                                    // [0x639ef44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetGameId
	// FString GetGameId();                                                                                                     // [0x639ee84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetFlowSettingNextOpenMapName_Startup_UAM
	// FString GetFlowSettingNextOpenMapName_Startup_UAM();                                                                     // [0x639edd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetFlowSettingNextOpenMapName_Startup_UA
	// FString GetFlowSettingNextOpenMapName_Startup_UA();                                                                      // [0x639ed94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetFlowSettingNextOpenMapName_Login
	// FString GetFlowSettingNextOpenMapName_Login();                                                                           // [0x639ed58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetEnableTestTextMark
	// bool GetEnableTestTextMark();                                                                                            // [0x22aa9f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetEnableFullWatermark
	// bool GetEnableFullWatermark();                                                                                           // [0x22aaa68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetDolphinUpdateUrl
	// FString GetDolphinUpdateUrl(bool InPreDolphin);                                                                          // [0x639ebcc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetDolphinResourceVersion
	// FString GetDolphinResourceVersion();                                                                                     // [0x639eae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetDolphinProgramVersion
	// FString GetDolphinProgramVersion();                                                                                      // [0x1feeecc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetDolphinChannelID
	// int32_t GetDolphinChannelID();                                                                                           // [0x639ea94] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetCookedMapList
	// void GetCookedMapList(TArray<FString>& CookMapList, TArray<FString>& TestMapList);                                       // [0x639e974] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetComplianceFlagC
	// bool GetComplianceFlagC();                                                                                               // [0x639e92c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetComplianceFlagB
	// bool GetComplianceFlagB();                                                                                               // [0x639e8e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetComplianceFlagA
	// bool GetComplianceFlagA();                                                                                               // [0x639e89c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetCDNUrl
	// FString GetCDNUrl();                                                                                                     // [0x2307c5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetAssetPathByKey
	// FString GetAssetPathByKey(FString Key);                                                                                  // [0x1a34b18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetAppVersionDisplayFromVersionID
	// FString GetAppVersionDisplayFromVersionID(uint64_t ClientVersionID);                                                     // [0x639e75c] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonConfigStatics.GetAppVersionDisplay
	// FString GetAppVersionDisplay();                                                                                          // [0x1633bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetAppVersion64
	// FString GetAppVersion64();                                                                                               // [0x267a288] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonConfigStatics.GetAppVersion
	// FString GetAppVersion();                                                                                                 // [0x27bafc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetAppLoginChannel
	// int32_t GetAppLoginChannel();                                                                                            // [0x639e738] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.GetAppHardwareHash
	// FString GetAppHardwareHash();                                                                                            // [0x639e64c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushTutorialTipsIndex
	// TArray<FString> FlushTutorialTipsIndex(bool bIsRead, TArray<FString> TutorialTipsIndexList);                             // [0x639e50c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushTutorialTimesInCareer
	// int32_t FlushTutorialTimesInCareer(bool bIsRead, FString TutorialName, int32_t TutorialTimesInCareer);                   // [0x639e3b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushTaskDoneList
	// TArray<FString> FlushTaskDoneList(bool isRead, TArray<FString> taskDoneIdList);                                          // [0x639e274] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushSZLobbyUrl
	// FString FlushSZLobbyUrl(bool bIsRead, FString SZLobbyUrl);                                                               // [0x218e7a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushSystemTriggerList
	// TArray<FString> FlushSystemTriggerList(bool bIsRead, TArray<FString> sysTriggerList);                                    // [0x639e134] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushSystemTriggerDoneList
	// TArray<FString> FlushSystemTriggerDoneList(bool bIsRead, TArray<FString> sysTriggerDoneList);                            // [0x639dff4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushSHLobbyUrl
	// FString FlushSHLobbyUrl(bool bIsRead, FString SHLobbyUrl);                                                               // [0x218eb00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushRegionCode
	// FString FlushRegionCode(bool bIsRead, FString code);                                                                     // [0x639ddb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushOpenPhoneLimitation
	// bool FlushOpenPhoneLimitation(bool bIsRead, bool bPhoneLimitationSetting);                                               // [0x2303840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushOpenBestLobbyUrlPC
	// bool FlushOpenBestLobbyUrlPC(bool bIsRead, bool bOpenBestLobbyUrlPC);                                                    // [0x20096a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushOpenBestLobbyUrl
	// bool FlushOpenBestLobbyUrl(bool bIsRead, bool bOpenBestLobbuUrl);                                                        // [0x20097d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushNeedAutoLogin
	// bool FlushNeedAutoLogin(bool bIsRead, bool needAutoLogin);                                                               // [0x2008e3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushMSDKUrl
	// FString FlushMSDKUrl(bool bIsRead, FString MSDKUrl);                                                                     // [0x218ee58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushMailReceiveList
	// TArray<FString> FlushMailReceiveList(bool isRead, TArray<FString> mailReceivedTypeList);                                 // [0x639dc70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushLastServerName
	// FString FlushLastServerName(bool bIsRead, FString LastServerIndex);                                                      // [0x639da2c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushLastNickName
	// FString FlushLastNickName(bool bIsRead, FString LastNickName);                                                           // [0x218f1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushLastLoginName
	// FString FlushLastLoginName(bool bIsRead, FString LastLoginName);                                                         // [0x2271a3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushLastCrashInfo
	// FString FlushLastCrashInfo(bool bIsRead, FString LastLastCrashInfo);                                                     // [0x639d7e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushLastChannelType
	// int32_t FlushLastChannelType(bool bIsRead, int32_t LastChannelNum);                                                      // [0x2009570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushItemPickList
	// TArray<FString> FlushItemPickList(bool isRead, TArray<FString> itemIDAndTypeList);                                       // [0x639d6a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushIsFirstOpenGame
	// bool FlushIsFirstOpenGame(bool bIsRead, bool bIsFirstOpenGame);                                                          // [0x2009430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushIsFinishCPoint
	// bool FlushIsFinishCPoint(bool bIsRead, bool isFinshCPoint);                                                              // [0x2008f6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushIsAgreeAuthorizationOversea
	// FString FlushIsAgreeAuthorizationOversea(bool bIsRead, FString AuthState);                                               // [0x2240e74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushIsAgreeAuthorization
	// bool FlushIsAgreeAuthorization(bool bIsRead, bool bIsAgreeAuthorization);                                                // [0x20092fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushFreeTrafficSystemEnable
	// bool FlushFreeTrafficSystemEnable(bool bIsRead, bool bFreeTrafficSystemEnable);                                          // [0x20091c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushFreeTrafficLobbyAddressInfo
	// void FlushFreeTrafficLobbyAddressInfo(bool bIsRead, TArray<FString>& InfoArr);                                           // [0x1cf4568] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushFreeTrafficBuyUrl
	// FString FlushFreeTrafficBuyUrl(bool bIsRead, FString FreeTrafficBuyUrl);                                                 // [0x218f508] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushFirstTimeToRange
	// bool FlushFirstTimeToRange(bool bIsRead, bool bFirstTimeToRange);                                                        // [0x639d574] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushEventTriggerList
	// TArray<FString> FlushEventTriggerList(bool bIsRead, TArray<FString> eventTriggerList);                                   // [0x639d434] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushEEAAgree
	// bool FlushEEAAgree(bool bIsRead, bool bAgree);                                                                           // [0x639d310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushCheckPointIndex
	// int32_t FlushCheckPointIndex(bool bIsRead, int32_t PointIndex);                                                          // [0x639d218] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushCheckIsFirstLose
	// bool FlushCheckIsFirstLose(bool isRead, bool isFirstLose);                                                               // [0x2009098] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushCheckIsDefaultGamepadSetting
	// bool FlushCheckIsDefaultGamepadSetting(bool bIsRead, bool bIsDefaultGamepadSetting);                                     // [0x639d0d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushCatchIPRegionCode
	// FString FlushCatchIPRegionCode(bool bIsRead, FString code);                                                              // [0x639ce90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.FlushBCheckDebuffEffect
	// TArray<FString> FlushBCheckDebuffEffect(bool bIsRead, TArray<FString> DebuffCheckArray);                                 // [0x639cd50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.ConvertToDolphinVersion
	// FString ConvertToDolphinVersion(FString InFiveNumVersion, bool InToAssetVersion);                                        // [0x639cb10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.CheckPSODriverCacheClean
	// bool CheckPSODriverCacheClean();                                                                                         // [0x639caec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonConfigStatics.CheckNeedPrecompilePSO
	// bool CheckNeedPrecompilePSO();                                                                                           // [0x1b94430] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UACommonStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUACommonStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UACommon.UACommonStatics.Wrapper_MPE_HasWorkloadBalance
	// bool Wrapper_MPE_HasWorkloadBalance();                                                                                   // [0x21793e8] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.WidgetToTextureNew
	// void WidgetToTextureNew(class UWidget* Widget, FVector2D& DrawSize, FString savePath, int32_t CompressionQuality, bool bSave, float Scale); // [0x63adff0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.WidgetToTexture
	// FString WidgetToTexture(class UWidget* Widget, FVector2D DrawSize, FString savePath, int32_t CompressionQuality, bool bSave, float Scale, FString PandoraImgName, bool bRT, class UTextureRenderTarget2D* NewTextureRenderTarget, bool bReverse); // [0x63adc08] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ValidateAvatars
	// bool ValidateAvatars(class ASGCharacter* Character, ECharacterSex InCharacterSex, TArray<int64_t>& AvatarItemIDs, TArray<int64_t>& InvalidAvatarItemIDs); // [0x63ad9dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UsrDebug
	// void UsrDebug();                                                                                                         // [0x63ad9c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UploadInnerCosFile
	// void UploadInnerCosFile(FString Cos, FString Str);                                                                       // [0x63ad708] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UploadCosFileStream
	// void UploadCosFileStream(FString cosFile, FString Content);                                                              // [0x63ad4d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UploadCosFile
	// void UploadCosFile(FString cosFile, FString srcFile);                                                                    // [0x63ad248] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UpdateItemSkin
	// void UpdateItemSkin(class ASGCharacter* Character, int64_t SkinID, bool bGiveItem);                                      // [0x63ad11c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UpdateInventoryNew
	// void UpdateInventoryNew(class ASGCharacter* PreviewCharacter, TArray<USGPlayerItemInfoBase*>& InventoryArray, bool bForceUpdateAnimation); // [0x63ace78] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UpdateBadge
	// void UpdateBadge(class ASGCharacter* Character, int64_t ItemId, ESGBadgeAttach AttachPos);                               // [0x63aca8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UpdateAvatarFromConsoleByString
	// void UpdateAvatarFromConsoleByString(class ASGCharacter* Character, ECharacterSex InCharacterSex, FString InAvatarsIdStr); // [0x63ac950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UpdateAvatarFromConsole
	// void UpdateAvatarFromConsole(class ASGCharacter* Character, ECharacterSex InCharacterSex, TArray<FSGAvatarData>& AvatarDatas, bool bRemainOldOnes); // [0x63ac598] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UpdateAvatar
	// void UpdateAvatar(class ASGCharacter* Character, ECharacterSex InCharacterSex, TArray<FSGAvatarData>& AvatarDatas, bool bForceChangeFriendlyDataInLobby, bool bForceChangeFriendlyDataInTraining); // [0x63ac0c4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UObjectHasAnyFlags
	// bool UObjectHasAnyFlags(class UObject* Obj, int32_t flag);                                                               // [0x63abfd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.UnloadWidgetRender
	// void UnloadWidgetRender();                                                                                               // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TurnOnOffSceneCapture2D
	// void TurnOnOffSceneCapture2D(class ASGCharacter* PreviewCharacter, bool bCapture);                                       // [0x63abe4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TryReportString
	// void TryReportString(FString InStr);                                                                                     // [0x63abd34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TryPerformanceReport
	// void TryPerformanceReport();                                                                                             // [0x63abd04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TryPerformanceRender
	// void TryPerformanceRender();                                                                                             // [0x63abc90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TryHotFix
	// void TryHotFix();                                                                                                        // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TryConditionReport
	// void TryConditionReport();                                                                                               // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TransformBy
	// FBoxSphereBounds TransformBy(FBoxSphereBounds OriginalBox, FTransform LocalToWorld);                                     // [0x63abb10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestReportCrash
	// void TestReportCrash(class UObject* World);                                                                              // [0x514e094] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestPakCrash
	// void TestPakCrash();                                                                                                     // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestNotifyMpe
	// void TestNotifyMpe(bool Condition);                                                                                      // [0x63aba90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestHotfix
	// void TestHotfix();                                                                                                       // [0x63aba7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestFatal
	// void TestFatal();                                                                                                        // [0x63aba68] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestEnsure
	// void TestEnsure();                                                                                                       // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestCrash
	// void TestCrash();                                                                                                        // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestAssert
	// void TestAssert();                                                                                                       // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestASanCrash
	// int32_t TestASanCrash();                                                                                                 // [0x4b95918] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.TestANR
	// void TestANR();                                                                                                          // [0x63aba4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SwitchShowButtonOutline
	// void SwitchShowButtonOutline(class UWorld* InWorld);                                                                     // [0x63ab9c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SwitchCopyText
	// void SwitchCopyText(class UWorld* InWorld);                                                                              // [0x514e094] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SupportTakeOff
	// bool SupportTakeOff(int64_t AvatarItemID, bool inIsForFriendlyDisplay);                                                  // [0x63ab8cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.StopLevelSequence
	// void StopLevelSequence(class UObject* World, FName Tag);                                                                 // [0x63ab7e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.StopHurryLoad
	// void StopHurryLoad(bool bStopLoadingFlow, bool bStopTeleport);                                                           // [0x63ab700] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.StartUploadCPPVM
	// void StartUploadCPPVM();                                                                                                 // [0x63ab6ec] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SpawnWeaponByID
	// void SpawnWeaponByID(class UObject* WorldContextObject, int32_t ItemId);                                                 // [0x63ab608] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SnapshotCustomTable
	// void SnapshotCustomTable(FString& Table, int32_t SearchMode);                                                            // [0x63ab504] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.Snapshot
	// void Snapshot();                                                                                                         // [0x63ab4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ShutdownShaderPipeline
	// bool ShutdownShaderPipeline();                                                                                           // [0x63ab4c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetWrapAtOfTextBlock
	// void SetWrapAtOfTextBlock(class UTextBlock* theTextBlock, float InWrapTextAt);                                           // [0x22d332c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetWidgetFPropertyMargin
	// void SetWidgetFPropertyMargin(FString PropertyName, FMargin& MarginTable, class UUserWidget* Widget);                    // [0x63ab270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetUseJavaIsPlayingMethod
	// void SetUseJavaIsPlayingMethod(bool Condition);                                                                          // [0x63ab1e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetUseJavaGetCurrentPosition
	// void SetUseJavaGetCurrentPosition(bool Condition);                                                                       // [0x63ab160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetTencentWebViewShown
	// void SetTencentWebViewShown(bool InFlag);                                                                                // [0x4698e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetScreenOrientationIOS
	// void SetScreenOrientationIOS(int32_t InValue);                                                                           // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetScreenOrientation
	// void SetScreenOrientation(int32_t InValue);                                                                              // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetSceneRenderingEnable
	// void SetSceneRenderingEnable(bool enable);                                                                               // [0x63ab0b8] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.SetNextBootFile
	// bool SetNextBootFile(int32_t Os, int32_t Step, FString Path);                                                            // [0x63aaf6c] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.SetMemberWidgetByName
	// void SetMemberWidgetByName(class UUserWidget* OwnerWidget, class UWidget* MemberWidget, FString MemberName);             // [0x63aad90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetMaterialTextureForImage
	// void SetMaterialTextureForImage(class UImage* Image, class UObject* NewTexture, FString ParamName);                      // [0x63aac10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetIsMediaPlaying
	// void SetIsMediaPlaying(bool Condition);                                                                                  // [0x4698e20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetEcoQoSMode
	// bool SetEcoQoSMode();                                                                                                    // [0x63aabd4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetDynamicLogLevel
	// void SetDynamicLogLevel(int32_t InLogLevel);                                                                             // [0x63aaaf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetCulture
	// bool SetCulture(FString culture);                                                                                        // [0x63aa9f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetCharacterType
	// void SetCharacterType(class ACharacter* PreviewCharacter, ECharacterType InCharacterType);                               // [0x63aa8e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SetCharacterMeleeWeaponHasCarving
	// void SetCharacterMeleeWeaponHasCarving(class ASGCharacter* Character, FString PlayerName);                               // [0x63aa7e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SaveWidgetTexture
	// bool SaveWidgetTexture(FString Path, class UTextureRenderTarget2D* TargetRT, int32_t CompressionQuality);                // [0x63aa68c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SaveStringArray
	// void SaveStringArray(TArray<FString> stringArr, FString Path);                                                           // [0x63aa510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SaveServiceTable
	// void SaveServiceTable(TArray<FServiceConfTableRow> serviceConfs);                                                        // [0x63aa414] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.SaveRenderTargetToFile
	// bool SaveRenderTargetToFile(class UTextureRenderTarget2D* rt, FString fileDestination);                                  // [0x63aa310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.SavePanelTable
	// void SavePanelTable(TArray<FPanelConfTableRow> panelConfs);                                                              // [0x63aa214] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.SaveModuleTable
	// void SaveModuleTable(TArray<FModuleConfTableRow> moduleConfs);                                                           // [0x63aa118] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.SaveImageFromTexture2DDy
	// void SaveImageFromTexture2DDy(class UTexture2DDynamic* InDyTex, FString DesPath);                                        // [0x63aa024] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RotateByQuaternion
	// FRotator RotateByQuaternion(FRotator AddRotator, FRotator OrigRotator);                                                  // [0x63a9f00] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ResetSlateBrush
	// void ResetSlateBrush(FSlateBrush& Brush, class UObject* icon);                                                           // [0x63a9de4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ResetPSOPrecompileMaxBatchSize
	// void ResetPSOPrecompileMaxBatchSize(int32_t InValue);                                                                    // [0x63a9d5c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ResetEcoQoSMode
	// bool ResetEcoQoSMode();                                                                                                  // [0x63a9d38] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RequestExit
	// void RequestExit(bool bInForce);                                                                                         // [0x63a9cb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RenderWidgetToUTexture2D
	// void RenderWidgetToUTexture2D(class UWidget* Widget, FVector2D& DrawSize, class UTextureRenderTarget2D* NewTextureRenderTarget); // [0x63a9a0c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RenderWidgetToRenderTarget
	// void RenderWidgetToRenderTarget(class UWidget* Widget, FVector2D& DrawSize, class UTextureRenderTarget2D* RenderTarget); // [0x63a97a4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RenderWidget
	// void RenderWidget(class UWidget* Widget, FVector2D& DrawSize);                                                           // [0x63a9600] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RemoveInventoryNew
	// void RemoveInventoryNew(class ASGCharacter* PreviewCharacter, class USGPlayerItemInfoBase* Inventory);                   // [0x63a94b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RemoveInventory
	// void RemoveInventory(class ASGCharacter* PreviewCharacter, int64_t InventoryID);                                         // [0x63a9370] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RemoveInventoriesNew
	// void RemoveInventoriesNew(class ASGCharacter* PreviewCharacter, TArray<USGPlayerItemInfoBase*>& InventoryList);          // [0x63a9170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RemoveInventories
	// void RemoveInventories(class ASGCharacter* PreviewCharacter, TArray<int64_t>& InventoryIdList);                          // [0x63a8f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RemoveAllInventories
	// void RemoveAllInventories(class ASGCharacter* PreviewCharacter);                                                         // [0x63a8e98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RegisterRHIEvents
	// void RegisterRHIEvents();                                                                                                // [0x63a8e84] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RefreshIconOfImage
	// void RefreshIconOfImage(class UImage* Image, class UObject* icon);                                                       // [0x226f8ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.RefreshAssembleTagItemIDMap
	// void RefreshAssembleTagItemIDMap();                                                                                      // [0x63a8e70] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.QueryAntiParamFromGameLoader
	// FString QueryAntiParamFromGameLoader();                                                                                  // [0x63a8d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.PreloadAvatars
	// void PreloadAvatars(class ASGCharacter* Character, TArray<int64_t>& AvatarItemIDs, ECharacterSex CharacterSex, int32_t MaxPreloadNum); // [0x63a8b9c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.PlayListViewAnimOfPanel
	// void PlayListViewAnimOfPanel(class UUserWidget* UserWidget);                                                             // [0x63a8b14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.PlayLevelSequenceReverse
	// void PlayLevelSequenceReverse(class UObject* World, FName Tag);                                                          // [0x63a8a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.PlayLevelSequence
	// void PlayLevelSequence(class UObject* World, FName Tag);                                                                 // [0x63a894c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.PlayInitAnimation
	// void PlayInitAnimation(class UUserWidget* UserWidget);                                                                   // [0x63a88c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.OpenShaderCodeLibrary
	// bool OpenShaderCodeLibrary(FString InName, FString InDir);                                                               // [0x63a87b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.OpenPipelineFileCache
	// bool OpenPipelineFileCache(FString InName);                                                                              // [0x230b128] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.OpenAnimationEndBroadcast
	// void OpenAnimationEndBroadcast(class UObject* InWorldContextObject, FString AnimationName);                              // [0x63a85b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.OnOpenAnimationBegin
	// void OnOpenAnimationBegin(class UUserWidget* UserWidget);                                                                // [0x1b29dfc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.NumPrecompilesRemaining
	// int32_t NumPrecompilesRemaining();                                                                                       // [0x20acec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.NumPrecompilesReallyCompleted
	// int32_t NumPrecompilesReallyCompleted();                                                                                 // [0x22f0380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.NumPrecompilesDispatched
	// int32_t NumPrecompilesDispatched();                                                                                      // [0x22f03ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.LogAssetLoadingInfo
	// void LogAssetLoadingInfo();                                                                                              // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.LoadImageToTexture2DDy
	// class UObject* LoadImageToTexture2DDy(FString ImagePath);                                                                // [0x63a850c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.LoadImageToTexture2D
	// class UObject* LoadImageToTexture2D(FString ImagePath);                                                                  // [0x63a8468] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.LoadCppPatch
	// void LoadCppPatch();                                                                                                     // [0x1e39048] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.KillParticlesForced
	// void KillParticlesForced(class UParticleSystemComponent* ParticleSystemComponent);                                       // [0x63a83e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.IsWorldInDsMode
	// bool IsWorldInDsMode(class UWorld* TheWorld);                                                                            // [0x27afa20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.IsVRSSupported
	// bool IsVRSSupported();                                                                                                   // [0x63a83bc] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.IsUNSTABLECPU
	// bool IsUNSTABLECPU();                                                                                                    // [0x261ce60] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.IsMeleeWeaponCanCarving
	// bool IsMeleeWeaponCanCarving(class UObject* WorldContextObject, int64_t ItemId);                                         // [0x63a82d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.IsIntegratedGPU
	// bool IsIntegratedGPU();                                                                                                  // [0x63a82bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.IsDebuggerPresent
	// bool IsDebuggerPresent();                                                                                                // [0x21793e8] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.IsBadgeByInventoryId
	// bool IsBadgeByInventoryId(class UWorld* World, int64_t InventoryID);                                                     // [0x63a8148] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.is_RUNNING_WITH_ASAN_DS
	// bool is_RUNNING_WITH_ASAN_DS();                                                                                          // [0x29adb48] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.InitFourTapUploadFeature
	// void InitFourTapUploadFeature();                                                                                         // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.HideAvatar
	// void HideAvatar(class ASGCharacter* Character, ESGAvatarType AvatarType, bool bHide);                                    // [0x63a7fbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.HackPrecompilesRemaining
	// void HackPrecompilesRemaining(int32_t InValue);                                                                          // [0x274b074] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GoToTrainLevelWithWeapon
	// void GoToTrainLevelWithWeapon(class UObject* World, class ASGCharacter* PreviewCharacter, TArray<USGPlayerItemInfoBase*>& InventoryArray); // [0x63a7e7c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GlobalLockUiEvents
	// void GlobalLockUiEvents(bool isLock);                                                                                    // [0x1f0e0cc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveItemToOneAI
	// bool GiveItemToOneAI(class ASGAICharacter* SGCharacter, int64_t ItemId, int32_t Num, bool bAmmoAutoLoad, bool bBagFullDestroyItem); // [0x63a7cbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveItemToNearestAI
	// bool GiveItemToNearestAI(class UObject* WorldContextObject, int64_t ItemId, int32_t Num, bool bAmmoAutoLoad, bool bBagFullDestroyItem); // [0x63a7cbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveItemToAllAI
	// bool GiveItemToAllAI(class UObject* WorldContextObject, int64_t ItemId, int32_t Num, bool bAmmoAutoLoad, bool bBagFullDestroyItem); // [0x63a7cbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveItem
	// bool GiveItem(class ACharacter* SGCharacter, int64_t ItemId, int32_t Num, bool bAmmoAutoLoad, bool bBagFullDestroyItem, int32_t SkinID, int32_t InDurability); // [0x63a7a30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveInventoryNew
	// void GiveInventoryNew(class ASGCharacter* PreviewCharacter, class USGPlayerItemInfoBase* Inventory);                     // [0x63a78e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveInventory
	// void GiveInventory(class ASGCharacter* PreviewCharacter, int64_t InventoryID);                                           // [0x63a77a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveInventoriesNew
	// void GiveInventoriesNew(class ASGCharacter* PreviewCharacter, TArray<USGPlayerItemInfoBase*>& InventoryList);            // [0x63a75a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GiveInventories
	// void GiveInventories(class ASGCharacter* PreviewCharacter, TArray<int64_t>& InventoryIdList);                            // [0x63a73a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetWigdetHierarchyInfo
	// FString GetWigdetHierarchyInfo(class UWidget* InWidget);                                                                 // [0x63a7254] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.GetWidgetGeometrySync
	// FGeometry GetWidgetGeometrySync(FGeometry ParentGeomtry, class UWidget* ParentWidget, class UWidget* TargetWidget);      // [0x63a7098] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetWidgetGeometryScale
	// float GetWidgetGeometryScale(class UWidget* Widget);                                                                     // [0x63a6ff4] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetUserWidgetByName
	// class UUserWidget* GetUserWidgetByName(class UUserWidget* UserWidget, FName WidgetName);                                 // [0x63a6ed4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetUIMode
	// EUAUIMode GetUIMode(class UObject* InWorldContextObject);                                                                // [0x63a6df0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetTextureResolution
	// FVector2D GetTextureResolution(class UTexture2DDynamic* Tex);                                                            // [0x63a6d28] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetTextureMemorySize
	// int32_t GetTextureMemorySize(class UTexture2DDynamic* Tex, TEnumAsByte<ETextureMipCount> Enum);                          // [0x63a6c34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetSystemBootTime
	// FString GetSystemBootTime();                                                                                             // [0x22b6b30] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetSharedVideoMemoryUsage
	// float GetSharedVideoMemoryUsage();                                                                                       // [0x63a6c0c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetSharedVideoMemoryBudget
	// float GetSharedVideoMemoryBudget();                                                                                      // [0x63a6be4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetSharedVideoMemeorySize
	// float GetSharedVideoMemeorySize();                                                                                       // [0x63a6bbc] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.GetServiceTable
	// TArray<FServiceConfTableRow> GetServiceTable();                                                                          // [0x63a6b80] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.GetSequenceTrackStopLocation
	// FVector GetSequenceTrackStopLocation(class ALevelSequenceActor* SequenceActor, FString TrackName);                       // [0x63a6a68] Final|Native|Static|Public|HasDefaults 
	// Function /Script/UACommon.UACommonStatics.GetRootWeaponItemID
	// int64_t GetRootWeaponItemID(FWeaponAssembleConfTableRow Row);                                                            // [0x63a6964] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetResourceObjectFromImage
	// class UObject* GetResourceObjectFromImage(class UImage* Image);                                                          // [0x267bee8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetRefCanvasPanelSlotPosition
	// void GetRefCanvasPanelSlotPosition(class UCanvasPanelSlot* Slot, FVector2D& postion);                                    // [0x63a6840] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UACommon.UACommonStatics.GetPrimaryGPUBrand
	// FString GetPrimaryGPUBrand();                                                                                            // [0x63a6754] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetPlatformDeviceId
	// FString GetPlatformDeviceId();                                                                                           // [0x6392f04] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetPipedSvrAddress
	// FString GetPipedSvrAddress();                                                                                            // [0x21736f4] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetPersistentDownloadDir
	// FString GetPersistentDownloadDir();                                                                                      // [0x63a6668] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetPanelTable
	// TArray<FPanelConfTableRow> GetPanelTable();                                                                              // [0x231a3e4] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.GetPackageDependencies
	// TArray<FString> GetPackageDependencies(FString InPackage);                                                               // [0x63a65ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetOSVersions
	// void GetOSVersions(TArray<FString>& OSVersionList);                                                                      // [0x63a6390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetOSVersion
	// FString GetOSVersion();                                                                                                  // [0x63a62a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetObjPathName
	// FString GetObjPathName(class UObject* InObj);                                                                            // [0x63a64ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetObjFullName
	// FString GetObjFullName(class UObject* InObj);                                                                            // [0x63a642c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetOACAID
	// FString GetOACAID();                                                                                                     // [0x63a4c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetNowMillisecondParty
	// int32_t GetNowMillisecondParty();                                                                                        // [0x63a6234] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetNetworkConnectionType
	// int32_t GetNetworkConnectionType();                                                                                      // [0x4b95918] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetMotionEventRotation
	// FVector GetMotionEventRotation(FMotionEvent InMotionEvent);                                                              // [0x63a613c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetModuleTable
	// TArray<FModuleConfTableRow> GetModuleTable();                                                                            // [0x1bdfd48] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.GetMeleeWeaponCarvingMaterialIndex
	// int32_t GetMeleeWeaponCarvingMaterialIndex(class UObject* WorldContextObject, int64_t ItemId);                           // [0x63a6054] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetMediaServerErrorCode
	// int32_t GetMediaServerErrorCode();                                                                                       // [0x4b95918] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetLocalSizeByPaintGeo
	// FVector2D GetLocalSizeByPaintGeo(class UUserWidget* UserWidget);                                                         // [0x63a5f8c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetLocalSize
	// FVector4 GetLocalSize(class AActor* Actor, FVector Origin, FVector xDir, FVector yDir);                                  // [0x63a5dc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetLocalHeight
	// float GetLocalHeight(class AActor* Actor, FVector Origin, FVector zDir);                                                 // [0x63a5c88] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetLevelScriptActor
	// class ALevelScriptActor* GetLevelScriptActor(class UObject* WorldContextObject, FString InLevelName);                    // [0x63a5a08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetItemSkinConfigMap
	// TMap<int32_t, int32_t> GetItemSkinConfigMap();                                                                           // [0x63a5828] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetIsUserWidget
	// bool GetIsUserWidget(class UWidget* Widget);                                                                             // [0x63a5784] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetIPString
	// FString GetIPString();                                                                                                   // [0x63a5190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetIPAddress
	// FString GetIPAddress();                                                                                                  // [0x63a50d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetInventoryById
	// class ASGInventory* GetInventoryById(class UObject* WorldContextObject, int64_t ItemId);                                 // [0x63a5380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetImageResolution
	// FVector2D GetImageResolution(FString ImagePath);                                                                         // [0x63a527c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetGraphicMemeorySize
	// float GetGraphicMemeorySize();                                                                                           // [0x63a50a8] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetGPUFamily
	// FString GetGPUFamily();                                                                                                  // [0x4dec008] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetGPUDriverVersion
	// FString GetGPUDriverVersion();                                                                                           // [0x63a4f54] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetGLVersion
	// FString GetGLVersion();                                                                                                  // [0x4dec008] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetFDateTimeTick
	// int64_t GetFDateTimeTick(FDateTime Time);                                                                                // [0x27a050c] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetFDateTime
	// FDateTime GetFDateTime(int64_t Tick);                                                                                    // [0x5d04210] Final|Native|Static|Private|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetEnableCPPVM
	// bool GetEnableCPPVM();                                                                                                   // [0x21793e8] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDynamicLogLevel
	// int32_t GetDynamicLogLevel();                                                                                            // [0x63a4f3c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDeviceMake
	// FString GetDeviceMake();                                                                                                 // [0x20abb78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDeviceInfo
	// FString GetDeviceInfo(FString strDeviceName);                                                                            // [0x63a4d7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDeviceId
	// FString GetDeviceId();                                                                                                   // [0x63a4c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDeskDefaultFreeSpace
	// bool GetDeskDefaultFreeSpace(FString InPath, int64_t& TotalnumberOfBytes, int64_t& NumberOfFreeBytes);                   // [0x63a4ad4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDefaultDeviceProfileName
	// FString GetDefaultDeviceProfileName();                                                                                   // [0x63a49d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDedicatedVideoMemoryUsage
	// float GetDedicatedVideoMemoryUsage();                                                                                    // [0x63a49ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDedicatedVideoMemoryBudget
	// float GetDedicatedVideoMemoryBudget();                                                                                   // [0x63a4984] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetDedicatedVideoMemeorySize
	// float GetDedicatedVideoMemeorySize();                                                                                    // [0x63a495c] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.GetCulture
	// FString GetCulture();                                                                                                    // [0x63a4870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetCpuInfo
	// FString GetCpuInfo();                                                                                                    // [0x63a4784] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetCPUBrand
	// FString GetCPUBrand();                                                                                                   // [0x5ed0fd4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetCoveredGrids
	// TArray<FVector2D> GetCoveredGrids(class AActor* Actor, FVector Origin, FVector xDir, FVector yDir, float Len);           // [0x63a40b4] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetCosUploadURL
	// FString GetCosUploadURL();                                                                                               // [0x63a4078] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetContainerConfSizes
	// FString GetContainerConfSizes(FName ItemId);                                                                             // [0x63a3fc8] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetClassDefaultObject
	// class UObject* GetClassDefaultObject(class UClass* InClass);                                                             // [0x63a3f24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetCharacter
	// class ASGCharacter* GetCharacter(class UObject* InWorldContextObject);                                                   // [0xe94fbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetCarrier
	// FString GetCarrier();                                                                                                    // [0x4dec008] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetBulletItemIdsByAssembleTag
	// TArray<uint32_t> GetBulletItemIdsByAssembleTag(FString AssembleTag);                                                     // [0x63a3e58] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.GetBuildConfiguration
	// FString GetBuildConfiguration();                                                                                         // [0x1439930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetAvatarTypeByInventoryId
	// ESGAvatarType GetAvatarTypeByInventoryId(class UWorld* World, int64_t InventoryID);                                      // [0x63a3d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetAvatarItemConfigMap
	// TMap<int32_t, FAvatarItemCfgTableRow> GetAvatarItemConfigMap();                                                          // [0x63a3afc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetAnimationByName
	// class UWidgetAnimation* GetAnimationByName(class UUserWidget* UserWidget, FName AnimationName);                          // [0x63a399c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UACommon.UACommonStatics.GetAdapterSharedVideoMemoryUsage
	// float GetAdapterSharedVideoMemoryUsage();                                                                                // [0x63a3974] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetAdapterDedicatedVideoMemoryUsage
	// float GetAdapterDedicatedVideoMemoryUsage();                                                                             // [0x63a394c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.GetAccountBanStringByKey
	// FText GetAccountBanStringByKey(FString InBanKey);                                                                        // [0x63a3878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ForceReleaseVolumetricLightmaps
	// void ForceReleaseVolumetricLightmaps();                                                                                  // [0x63a3864] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ForceInputBoxTop
	// void ForceInputBoxTop(int32_t InValue);                                                                                  // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ForceFlushRHIResource
	// void ForceFlushRHIResource();                                                                                            // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.FixAndroidWindowSize
	// void FixAndroidWindowSize(int32_t InValue);                                                                              // [0x276fa08] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.EnableSensor
	// void EnableSensor();                                                                                                     // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.DumpFName
	// void DumpFName();                                                                                                        // [0x63a3808] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.DoLineTraceMultiAtScreenPositionWithChannels
	// bool DoLineTraceMultiAtScreenPositionWithChannels(class UWorld* InWorld, class APlayerController* Player, FVector2D ScreenPosition, float HitResultTraceDistance, bool bTraceComplex, TArray<AActor*> InActorsToIgnore, TArray<FHitResult>& HitResultList, TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes); // [0x63a34b8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.DoLineTraceMultiAtScreenPosition
	// bool DoLineTraceMultiAtScreenPosition(class UWorld* InWorld, class APlayerController* Player, FVector2D ScreenPosition, float HitResultTraceDistance, bool bTraceComplex, TArray<AActor*> InActorsToIgnore, TArray<FHitResult>& HitResultList); // [0x63a31cc] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.DisableSensor
	// void DisableSensor();                                                                                                    // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.DeactivateParticleSystem
	// void DeactivateParticleSystem(class UParticleSystemComponent* ParticleSystemComponent);                                  // [0x63a3144] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CreateUImage
	// class UImage* CreateUImage();                                                                                            // [0x63a3118] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.CreateCurrentWordWidgetInstance
	// class UUserWidget* CreateCurrentWordWidgetInstance(class UWorld* World, class UClass* UserWidgetClass, FName WidgetName); // [0x63a2fe8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ContainsAvatarAndReturnID
	// int64_t ContainsAvatarAndReturnID(int64_t AvatarItemID, ESGAvatarType AvatarType);                                       // [0x63a2f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ContainsAvatar
	// bool ContainsAvatar(int64_t AvatarItemID, ESGAvatarType AvatarType);                                                     // [0x63a2e1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CloseShaderCodeLibrary
	// void CloseShaderCodeLibrary(FString InName);                                                                             // [0x63a2d28] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ClosePipelineFileCache
	// void ClosePipelineFileCache();                                                                                           // [0x63a2d14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ClearPreloadAvatars
	// void ClearPreloadAvatars(class ASGCharacter* Character);                                                                 // [0x63a2c8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CleanAllFontCache
	// void CleanAllFontCache();                                                                                                // [0x63a2c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CheckMedicine_DestroyAndEnergy
	// void CheckMedicine_DestroyAndEnergy(bool& destroy, bool& Energy, TArray<FName> item_ids);                                // [0x63a2a8c] Final|Native|Static|Private|HasOutParms 
	// Function /Script/UACommon.UACommonStatics.CheckIsValidUint64FromString
	// bool CheckIsValidUint64FromString(FString Str);                                                                          // [0x63a2964] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.CheckIconValid
	// bool CheckIconValid(class UObject* ResourceObject);                                                                      // [0x63a28ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CheckEquipmentHiddenConflict
	// void CheckEquipmentHiddenConflict(class UObject* WorldContextObject, int64_t ItemId, TArray<int64_t>& AvatarItemIDs, TArray<int64_t>& ConflictItemIdList); // [0x63a26f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CaptureScreen
	// void CaptureScreen(FString Path);                                                                                        // [0x63a25a4] Final|Native|Static|Public 
	// Function /Script/UACommon.UACommonStatics.CanAttachBadge
	// bool CanAttachBadge(class ACharacter* Character, int64_t ItemId, ESGBadgeAttach AttachPos);                              // [0x63a2000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CalcTimeBetweenMarkedFrameInSequence
	// float CalcTimeBetweenMarkedFrameInSequence(class UObject* World, FName Tag, FString MarkedFrame1, FString MarkedFrame2); // [0x63a1e38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.CacuContainerSizeByItemId
	// int32_t CacuContainerSizeByItemId(FName ItemId);                                                                         // [0x63a1da0] Final|Native|Static|Private 
	// Function /Script/UACommon.UACommonStatics.BuildSGPlayerItemTree
	// void BuildSGPlayerItemTree(TArray<USGPlayerItemInfoBase*> InSGPlayerItems, TArray<USGPlayerItemInfoBase*>& InResultList, int64_t InCharacterParentId); // [0x63a1c10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.BenchMandelbrot
	// int64_t BenchMandelbrot(int32_t Size);                                                                                   // [0x63a1b78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.BenchGameTick
	// void BenchGameTick(int32_t N, float& OutX, float& OutY);                                                                 // [0x63a1a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UACommonStatics.ActivateParticleSystem
	// void ActivateParticleSystem(class UParticleSystemComponent* ParticleSystemComponent, bool bReset);                       // [0x63a1948] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UADataTableManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUADataTableManager : public USGConfigUtil
{ 
public:


	/// Functions
	// Function /Script/UACommon.UADataTableManager.GetMapDetailTableRowBPProxy
	// FMapDetailTableRowBPProxy GetMapDetailTableRowBPProxy(FMapDetailTableRow MapDetailTableRow);                             // [0x63be4f4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UADataTableManager.GetLootDropTableRowBPProxy
	// FLootDropTableRowBPProxy GetLootDropTableRowBPProxy(FLootDropTableRow LootDropTableRow);                                 // [0x63be344] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UADataTableManager.GetItemConfTableRowBPProxy
	// FItemConfTableRowBPProxy GetItemConfTableRowBPProxy(FItemConfTableRow ItemConfTableRow);                                 // [0x63be028] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UADataTableManager.Get
	// class UUADataTableManager* Get();                                                                                        // [0x63b8440] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UAEditableTextBox
/// Size: 0x0AE8 (2792 bytes) (0x000AD8 - 0x000AE8) align 8 MaxSize: 0x0AE8
class UUAEditableTextBox : public UEditableTextBox
{ 
public:
	SDK_UNDEFINED(16,3948) /* FDelegateProperty */     __um(OnContextMenuOpeningDelegate);                         // 0x0AD8   (0x0010)  


	/// Functions
	// Function /Script/UACommon.UAEditableTextBox.OnContextMenuOpeningDelegate__DelegateSignature
	// void OnContextMenuOpeningDelegate__DelegateSignature();                                                                  // [0x182d6bc] Public|Delegate      
	// Function /Script/UACommon.UAEditableTextBox.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x63bea00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UAFontMeasure
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UUAFontMeasure : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	bool                                               bSingleMode;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	uint32_t                                           SelectIndex;                                                // 0x003C   (0x0004)  
	FString                                            ExtraInfo;                                                  // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/UACommon.UAFontMeasure.SubmitBugTask
	// void SubmitBugTask(FString Content, FString Path);                                                                       // [0x63c2c2c] Final|Native|Public  
	// Function /Script/UACommon.UAFontMeasure.GetTextJustification
	// TEnumAsByte<ETextJustify> GetTextJustification(class UTextLayoutWidget* LayoutWidget);                                   // [0x63bed68] Final|Native|Public  
	// Function /Script/UACommon.UAFontMeasure.GetTextAndImageWidgets
	// void GetTextAndImageWidgets(class UWidget* Widget, TArray<UWidget*>& TextWidgets, TArray<UWidget*>& ImageWidgets, bool bCliping); // [0x63beb98] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UAFontMeasure.GetCurrentPanel
	// class UUserWidget* GetCurrentPanel(class UUserWidget* RootCanvasPanel);                                                  // [0x63ba19c] Final|Native|Public  
	// Function /Script/UACommon.UAFontMeasure.Get
	// class UUAFontMeasure* Get();                                                                                             // [0x63b8470] Final|Native|Static|Public 
	// Function /Script/UACommon.UAFontMeasure.DrawFontMeasure
	// void DrawFontMeasure(FPaintContext& Context, class UWidgetTree* WidgetTree);                                             // [0x63b817c] Final|Native|Public|HasOutParms 
	// Function /Script/UACommon.UAFontMeasure.DragWidget
	// void DragWidget(class UUserWidget* panel, FGeometry& InGeometry, FPointerEvent& InMouseEvent);                           // [0x63b7ff0] Final|Native|Public|HasOutParms 
};

/// Class /Script/UACommon.UAGridScroll
/// Size: 0x0940 (2368 bytes) (0x000920 - 0x000940) align 8 MaxSize: 0x0940
class UUAGridScroll : public UScrollBox
{ 
public:
	SDK_UNDEFINED(16,3949) /* FMulticastInlineDelegate */ __um(OnContentSizeChange);                               // 0x0920   (0x0010)  
	SDK_UNDEFINED(16,3950) /* FMulticastInlineDelegate */ __um(ScrollWidgetAnimationEnd2);                         // 0x0930   (0x0010)  


	/// Functions
	// Function /Script/UACommon.UAGridScroll.OnScrollWidgetAnimationEnd
	// void OnScrollWidgetAnimationEnd();                                                                                       // [0x63c1768] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UAInventoryStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUAInventoryStatics : public USGInventoryStatics
{ 
public:


	/// Functions
	// Function /Script/UACommon.UAInventoryStatics.UpdateInventories
	// void UpdateInventories(TArray<USGPlayerItemInfoBase*>& InventoryArray, class ACharacter* Character);                     // [0x63c2fbc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.TransformCachedInvToTargetInv
	// class ASGInventory* TransformCachedInvToTargetInv(class USGPlayerItemInfoBase* item, class ACharacter* Character, class ASGAssembleBase* AssembleObj, int32_t& TaskId, class ASGInventory* CachedInv); // [0x63c2dec] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.SpawnItemByID
	// class ASGInventory* SpawnItemByID(class UObject* WorldContextObject, int64_t ItemId, bool bWithSkin);                    // [0x63c2af8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.SpawnInventoryByItemID
	// class ASGInventory* SpawnInventoryByItemID(class UObject* WorldContextObject, int32_t ItemId, int32_t ItemNum, FVector Location, FRotator Rotator, ESGInventorySpawnSourceType SpawnSource); // [0x63c28b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.RemoveSpecificInventory
	// void RemoveSpecificInventory(class ASGInventory* TargetInventory, class ACharacter* Character);                          // [0x63c2744] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.RemoveInventory
	// void RemoveInventory(class USGPlayerItemInfoBase* item, class ACharacter* Character);                                    // [0x63c2558] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.RefreshInvMap
	// void RefreshInvMap(TMap<ASGInventory*, int32_t>& InvMap, TMap<int64_t, bool>& bIsInspectedMap, class ASGCharacter* SGCharacter); // [0x63c180c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.RefreshInventory
	// void RefreshInventory(class USGPlayerItemInfoBase* item, class ACharacter* Character, class ASGInventory* Inventory);    // [0x63c19d4] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.ParsePendantItemInfo
	// void ParsePendantItemInfo(class USGPlayerItemInfoBase* PlayerItemInfoBase);                                              // [0x63c1784] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.OnInventoryLoadCompleteNotify
	// void OnInventoryLoadCompleteNotify(int32_t InTaskID);                                                                    // [0x63c16e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.NotifyOpenEvent
	// void NotifyOpenEvent(class AActor* CharacterActor, class AActor* InventoryActor);                                        // [0x63c1500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.NeedWaitBoxOpenOnLoot
	// bool NeedWaitBoxOpenOnLoot(class AActor* InventoryActor);                                                                // [0x63c13c8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UACommon.UAInventoryStatics.MergeInv
	// void MergeInv(TMap<ASGInventory*, int32_t>& InvMap, TMap<int64_t, bool>& bIsInspectedMap, TArray<AActor*> InvArray);     // [0x63c11ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.LoadInventoryMeshAssetByClass
	// void LoadInventoryMeshAssetByClass(class UObject* WorldContextObject, class UClass* InventoryClass, bool bLobby, class USkeletalMesh*& OutSkeletalMesh, class UStaticMesh*& OutStaticMesh); // [0x63c0f44] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.IsCharHasInventoryByAttachPosition
	// bool IsCharHasInventoryByAttachPosition(class ASGCharacter* SGCharacter, EAttachPosition AttachPosition, class ASGInventory* Inventory); // [0x63c0e14] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UACommon.UAInventoryStatics.GiveWeaponToPlayerByWeaponActor
	// void GiveWeaponToPlayerByWeaponActor(class ASGInventory* Weapon, class ACharacter* Character);                           // [0x63c0aa4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GiveWeaponToPlayer
	// void GiveWeaponToPlayer(class USGPlayerItemInfoBase* item, class ACharacter* Character);                                 // [0x63c09c0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GiveWeaponBP
	// void GiveWeaponBP(class ACharacter* Character, int64_t ItemId, EAttachPosition AttachPosition);                          // [0x63c0894] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GiveWeapon
	// void GiveWeapon(class ACharacter* Character, uint64_t ItemId, EAttachPosition AttachPosition);                           // [0x63c0768] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GiveMagaWithAmmoBP
	// void GiveMagaWithAmmoBP(class ACharacter* Character, int64_t MagaId);                                                    // [0x63c0684] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GiveItemToContainer
	// class ASGInventory* GiveItemToContainer(class ASGInventory* ContainerInv, int32_t ItemId, int32_t ItemNum);              // [0x63c0558] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GiveItem
	// void GiveItem(class ACharacter* Character, int64_t ItemId, FInvGiveExtraParams InInvGiveExtraParams, int32_t Num, bool bAmmoAutoLoad, ESGGiveInventoryByClassType GiveInventoryReason); // [0x63bfdb4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GiveCharacterByInventoryList
	// void GiveCharacterByInventoryList(class ACharacter* Character, TArray<UClass*> InventoryList);                           // [0x63bfca0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GiveAndGetItem
	// class ASGInventory* GiveAndGetItem(class ACharacter* Character, int64_t ItemId, FInvGiveExtraParams InInvGiveExtraParams, int32_t Num, bool bAmmoAutoLoad, ESGGiveInventoryByClassType GiveInventoryReason); // [0x63bf9fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GiveAndEquipWeaponBP
	// void GiveAndEquipWeaponBP(class ACharacter* Character, int64_t WeaponId, char WeaponSlot);                               // [0x63bf8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetWeaponZeroDropDistance
	// float GetWeaponZeroDropDistance(class ASGInventory* InWeapon, bool bWithBulletModifier);                                 // [0x63bf578] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetWeaponSocketsAndAmmoCapacity
	// uint32_t GetWeaponSocketsAndAmmoCapacity(uint64_t ItemId, TArray<FWeaponSocket>& InSockets);                             // [0x63bf46c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetWeaponMovementSpeedScale
	// float GetWeaponMovementSpeedScale(class ASGInventory* Inventory);                                                        // [0x63bf318] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UACommon.UAInventoryStatics.GetWeaponContainerCompInfo
	// void GetWeaponContainerCompInfo(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo);           // [0x63bf234] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetWeaponBoreCompInfo
	// void GetWeaponBoreCompInfo(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo, bool InGameStyle); // [0x63bf108] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetUseSound
	// FString GetUseSound(class ASGInventory* Inventory);                                                                      // [0x63bee98] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UACommon.UAInventoryStatics.GetTotalValueOfCharacter
	// uint32_t GetTotalValueOfCharacter(class ASGCharacter* Character);                                                        // [0x63bee00] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetTestPlayerItemInfoBase
	// class USGPlayerItemInfoBase* GetTestPlayerItemInfoBase(uint64_t ParentID, uint64_t ChildID);                             // [0x63beab0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetSecondMainWeaponValue
	// uint32_t GetSecondMainWeaponValue(class ASGCharacter* Character);                                                        // [0x63be91c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetRuningInventoryStaticsTaskById
	// class UObject* GetRuningInventoryStaticsTaskById(int32_t ID);                                                            // [0x63be850] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetPlayerItemInfoBaseFormInstID
	// class USGPlayerItemInfoBase* GetPlayerItemInfoBaseFormInstID(class ACharacter* Character, uint64_t InstId);              // [0x63be6b8] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetOneInventoryByAttachPosition
	// class ASGInventory* GetOneInventoryByAttachPosition(class ASGCharacter* SGCharacter, EAttachPosition AttachPosition);    // [0x63be5d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UACommon.UAInventoryStatics.GetLoseValueOfCharacter
	// uint32_t GetLoseValueOfCharacter(class ASGCharacter* SGCharacter);                                                       // [0x63be45c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetItemValueParamsByPlayerItemInfoBase
	// FItemValueParams GetItemValueParamsByPlayerItemInfoBase(class USGPlayerItemInfoBase* ItemInfo);                          // [0x63be294] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetItemInstIdModded
	// int32_t GetItemInstIdModded(class ASGInventory* SGInventory, int32_t Mod);                                               // [0x63be19c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetItemInstId
	// uint64_t GetItemInstId(class ASGInventory* SGInventory);                                                                 // [0x63be104] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryValuePropagateTrade
	// void GetInventoryValuePropagateTrade(class ASGInventory* Inventory, int32_t& OutValue, bool bIncludeSelf, bool bIncludeChild, bool bIncludeBullet); // [0x63bd8d0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryValuePropagate
	// void GetInventoryValuePropagate(class ASGInventory* Inventory, int32_t& OutValue, bool bIncludeSelf, bool bIncludeChild, bool bIncludeBullet); // [0x63bd8d0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryValue
	// int32_t GetInventoryValue(class ASGInventory* Inventory);                                                                // [0x63bd528] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryTypeTotalCount
	// int32_t GetInventoryTypeTotalCount(class ACharacter* Character, int32_t typeId, TArray<EAttachPosition> PositionArr);    // [0x63bd3c0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryTotalCount
	// int32_t GetInventoryTotalCount(class ACharacter* Character, int64_t InventoryID, TArray<EAttachPosition> PositionArr);   // [0x63bd258] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryStackMaxFromCommonItemTable
	// int32_t GetInventoryStackMaxFromCommonItemTable(uint64_t item_id);                                                       // [0x63bd1c0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventorysFromWeaponAssembleTable
	// TArray<UClass*> GetInventorysFromWeaponAssembleTable(class UObject* WorldContextObject, uint64_t QueryID);               // [0x63bdf28] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventorySellPrice
	// int32_t GetInventorySellPrice(class ASGInventory* Inventory);                                                            // [0x63bcea8] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventorySelfInfo
	// void GetInventorySelfInfo(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo, bool bAttachedOnWeaponInv); // [0x63bcd7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryNameFromCommonItemTable
	// FString GetInventoryNameFromCommonItemTable(uint64_t ItemId);                                                            // [0x63bcccc] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryDynamicValue
	// uint32_t GetInventoryDynamicValue(class ASGInventory* Inv);                                                              // [0x63bcc34] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryCountPropagate
	// void GetInventoryCountPropagate(class ASGInventory* Inventory, int32_t& OutValue, bool bIncludeSelf, bool bIncludeChild); // [0x63bc838] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryCached
	// class ASGInventory* GetInventoryCached(class ASGAssembleBase* AssembleObj);                                              // [0x63bc79c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryAsync
	// int32_t GetInventoryAsync(class USGPlayerItemInfoBase* item, class ACharacter* Character, class AActor* ParentActor, int32_t InContainerIndex); // [0x63bbe08] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoryAssembleTagByClass
	// FGameplayTag GetInventoryAssembleTagByClass(class UClass* InventoryClass);                                               // [0x63bbb6c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetInventory
	// class ASGInventory* GetInventory(class USGPlayerItemInfoBase* item, class ACharacter* Character, class AActor* ParentActor, int32_t InContainerIndex); // [0x63bb4b8] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoriesByGameplayTagList
	// TArray<uint64_t> GetInventoriesByGameplayTagList(TArray<FString>& TagList);                                              // [0x63bb314] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoriesByGameplayTagContainer
	// TArray<uint64_t> GetInventoriesByGameplayTagContainer(FGameplayTagContainer TagContainer);                               // [0x63bb028] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInventoriesByAttachPosition
	// TArray<uint64_t> GetInventoriesByAttachPosition(EAttachPosition position);                                               // [0x63baf78] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetInGameInventoryInfoInGame
	// void GetInGameInventoryInfoInGame(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo, bool bAttachedOnWeaponInv); // [0x63bae4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetInGameInventoryInfo
	// void GetInGameInventoryInfo(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo, bool bAttachedOnWeaponInv); // [0x63bad20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetIconPathTryReadFromTable
	// FString GetIconPathTryReadFromTable(class ASGInventory* Inventory, bool bReadFromTableIfFailed);                         // [0x63bac20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UACommon.UAInventoryStatics.GetHelmetSoundMaxDistanceInfluenceFactor
	// float GetHelmetSoundMaxDistanceInfluenceFactor(uint64_t ItemId);                                                         // [0x63bab88] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetHelmetSoundLevelInfluenceFactor
	// float GetHelmetSoundLevelInfluenceFactor(uint64_t ItemId);                                                               // [0x63baaf0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetHelmetSoundIndicatorMaxDistanceInfluenceFactor
	// float GetHelmetSoundIndicatorMaxDistanceInfluenceFactor(uint64_t ItemId);                                                // [0x63baa58] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetHelmetSoundIndicatorLevelInfluence
	// float GetHelmetSoundIndicatorLevelInfluence(uint64_t ItemId);                                                            // [0x63ba9c0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetHelmetSoundBlockLevelFromDetailConfTable
	// int32_t GetHelmetSoundBlockLevelFromDetailConfTable(uint64_t ItemId);                                                    // [0x63ba928] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetGridInfoByItemID
	// FItemGridInfo GetGridInfoByItemID(int64_t ItemId);                                                                       // [0x63ba884] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetFullWeaponValueTrade
	// int32_t GetFullWeaponValueTrade(class UObject* WorldContextObject, uint64_t WeaponAssembleID);                           // [0x63ba79c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetFullWeaponValue
	// int32_t GetFullWeaponValue(uint64_t WeaponAssembleID);                                                                   // [0x63ba704] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetFirstMainWeaponValue
	// uint32_t GetFirstMainWeaponValue(class ASGCharacter* Character);                                                         // [0x63ba66c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetEquipAttachPositionById
	// EAttachPosition GetEquipAttachPositionById(uint64_t ItemId);                                                             // [0x63ba5d4] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetDrugValue
	// uint32_t GetDrugValue(class ASGCharacter* Character);                                                                    // [0x63ba53c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetCurWeaponValue
	// uint32_t GetCurWeaponValue(class ASGCharacter* Character);                                                               // [0x63b9f94] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetCurInventory
	// class ASGInventory* GetCurInventory(class ACharacter* Character);                                                        // [0x63b9efc] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetContainerMgrCompInfo
	// void GetContainerMgrCompInfo(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo, bool InGameStyle); // [0x63b9dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetCommonItemValueByID
	// int32_t GetCommonItemValueByID(int64_t ItemId, int32_t Count);                                                           // [0x63b9cec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetCommonItemSellPrice
	// int32_t GetCommonItemSellPrice(uint64_t ItemId, int32_t Count);                                                          // [0x63b9c08] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetCommonItemDynamicValue
	// int32_t GetCommonItemDynamicValue(uint64_t ItemId, int32_t Count);                                                       // [0x5df600c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetChildrenInfoInGame
	// void GetChildrenInfoInGame(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo);                // [0x63b9af8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetChildrenInfo
	// void GetChildrenInfo(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo);                      // [0x63b99e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetCaseValue
	// uint32_t GetCaseValue(class ASGCharacter* Character);                                                                    // [0x63b9950] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetCachedInventoryAsync
	// class ASGInventory* GetCachedInventoryAsync(class USGPlayerItemInfoBase* item, class ACharacter* Character, class ASGAssembleBase* AssembleObj, int32_t& TaskId); // [0x63b97c8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetCachedInventory
	// class ASGInventory* GetCachedInventory(class USGPlayerItemInfoBase* item, class ACharacter* Character, class ASGAssembleBase* AssembleObj); // [0x63b8e64] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetBulletValue
	// uint32_t GetBulletValue(class ASGCharacter* Character);                                                                  // [0x63b8dcc] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetBossTokenItemIDFromGroupID
	// uint32_t GetBossTokenItemIDFromGroupID(FName& GroupIDName);                                                              // [0x63b8d30] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetAssistWeaponValue
	// uint32_t GetAssistWeaponValue(class ASGCharacter* Character);                                                            // [0x63b8c4c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetAssembleInventoryValue
	// void GetAssembleInventoryValue(class ASGInventory* Inventory, int32_t& OutValue, bool bIncludeChild);                    // [0x63b8b08] Final|Native|Static|Public|HasOutParms 
	// Function /Script/UACommon.UAInventoryStatics.GetAssembleInventoryRootItemID
	// uint64_t GetAssembleInventoryRootItemID(uint64_t AssembleInvID);                                                         // [0x63b8a70] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetAssembleCompInfo
	// void GetAssembleCompInfo(class ASGInventory* SGInventory, class USGPlayerItemInfoBase* PlayerItemInfo, bool InGameStyle); // [0x63b8944] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.GetArmorValue
	// uint32_t GetArmorValue(class ASGCharacter* Character);                                                                   // [0x63b88ac] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetArmorLevelFromDetailConfTable
	// int32_t GetArmorLevelFromDetailConfTable(uint64_t ItemId);                                                               // [0x63b8814] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetAllSafeBoxValue
	// uint32_t GetAllSafeBoxValue(class ASGCharacter* Character);                                                              // [0x63b877c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetAllEquipmentValue
	// uint32_t GetAllEquipmentValue(class ASGCharacter* Character);                                                            // [0x63b86e4] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.GetAllEquipArmorValue
	// int32_t GetAllEquipArmorValue(class ASGCharacter* Character);                                                            // [0x63b84a0] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.FindItemIDByInventoryClass
	// uint64_t FindItemIDByInventoryClass(class UClass* SGInventory);                                                          // [0x5dfac9c] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.FindItemIDByDataTable
	// uint64_t FindItemIDByDataTable(class ASGInventory* SGInventory);                                                         // [0x1f74fe4] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.FindInventoryFromGID
	// class ASGInventory* FindInventoryFromGID(uint64_t InventoryGid, class ACharacter* Character);                            // [0x63b8280] Final|Native|Static|Public 
	// Function /Script/UACommon.UAInventoryStatics.AsyncLoadMeshByItemInfo
	// void AsyncLoadMeshByItemInfo(class USGPlayerItemInfoBase* ItemInfo, class ACharacter* Character, int64_t InWeaponStainSkinID, bool bUseGameMesh); // [0x63b7e74] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAInventoryStatics.AsyncLoadMeshByItemID
	// bool AsyncLoadMeshByItemID(class UObject* WorldContextObject, int32_t ItemId, class ACharacter* Character, bool bLobby); // [0x63b7cf4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UAListView
/// Size: 0x0960 (2400 bytes) (0x000900 - 0x000960) align 16 MaxSize: 0x0960
class UUAListView : public UListView
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0900   (0x0008)  MISSED
	TArray<class UAkAudioEvent*>                       ClickAudioEvents;                                           // 0x0908   (0x0010)  
	bool                                               bScrollable;                                                // 0x0918   (0x0001)  
	SDK_UNDEFINED(1,3951) /* ESlateVisibility */       __um(ScrollBarVisibility);                                  // 0x0919   (0x0001)  
	bool                                               CanRightClickScrolling;                                     // 0x091A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x091B   (0x0001)  MISSED
	float                                              AnimationDelay;                                             // 0x091C   (0x0004)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0920   (0x0040)  MISSED


	/// Functions
	// Function /Script/UACommon.UAListView.StopDelayAnimation
	// void StopDelayAnimation();                                                                                               // [0x63c6764] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UAListView.SetPlayAnimationInitIndex
	// void SetPlayAnimationInitIndex(int32_t Index);                                                                           // [0x63c66c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UAListView.PlayDelayAnimation
	// void PlayDelayAnimation();                                                                                               // [0x63c66b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UAListView.OnListEntryInitialized
	// void OnListEntryInitialized(class UObject* item, class UUserWidget* Widget);                                             // [0x63c6338] Final|Native|Private 
};

/// Class /Script/UACommon.UALocalizationStatic
/// Size: 0x0358 (856 bytes) (0x000028 - 0x000358) align 8 MaxSize: 0x0358
class UUALocalizationStatic : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x330];                                     // 0x0028   (0x0330)  MISSED


	/// Functions
	// Function /Script/UACommon.UALocalizationStatic.SetLocalizationCulture
	// void SetLocalizationCulture(FString& culture);                                                                           // [0x195b348] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.ReloadTextLocalization
	// void ReloadTextLocalization();                                                                                           // [0x195af10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.PreviewLocalizationCulture
	// void PreviewLocalizationCulture(FString& culture);                                                                       // [0x5d6ef74] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.PatchTextLocalization
	// int32_t PatchTextLocalization(FString InPatchFile);                                                                      // [0x63c6610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.ParseJsonDataMerage
	// void ParseJsonDataMerage(FString JsonString, FString TextpatchJsonString);                                               // [0x63c650c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.ParseJsonData
	// void ParseJsonData(FString JsonString);                                                                                  // [0x63c6420] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.LoadLocalization
	// void LoadLocalization();                                                                                                 // [0x18dddd4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.IsOverseasPackage
	// bool IsOverseasPackage();                                                                                                // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.GetValue
	// FText GetValue(FString Key);                                                                                             // [0x1b405f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.GetLocalizationCulture
	// FString GetLocalizationCulture();                                                                                        // [0x63c624c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.GetLocalizationBP
	// class UUALocalizationStatic* GetLocalizationBP();                                                                        // [0x1d27af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.GetImageLocalization
	// bool GetImageLocalization(class UImage* Image);                                                                          // [0x63c61b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.GetDisplayString
	// FString GetDisplayString(FString InNamespace, FString InKey);                                                            // [0x63c5f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UALocalizationStatic.CanShowLanguagSetting
	// bool CanShowLanguagSetting();                                                                                            // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UAMultiLineEditableTextBox
/// Size: 0x0D68 (3432 bytes) (0x000D58 - 0x000D68) align 8 MaxSize: 0x0D68
class UUAMultiLineEditableTextBox : public UMultiLineEditableTextBox
{ 
public:
	SDK_UNDEFINED(16,3952) /* FDelegateProperty */     __um(OnContextMenuOpeningDelegate);                         // 0x0D58   (0x0010)  


	/// Functions
	// Function /Script/UACommon.UAMultiLineEditableTextBox.SetSelectionStartAndCursorInfoWByCache
	// void SetSelectionStartAndCursorInfoWByCache();                                                                           // [0x63c753c] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UAMultiLineEditableTextBox.PasteTextFromClipboard
	// void PasteTextFromClipboard();                                                                                           // [0x63c7330] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UAMultiLineEditableTextBox.OnContextMenuOpeningDelegate__DelegateSignature
	// void OnContextMenuOpeningDelegate__DelegateSignature();                                                                  // [0x182d6bc] Public|Delegate      
	// Function /Script/UACommon.UAMultiLineEditableTextBox.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x63c7280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UACommon.UAMultiLineEditableTextBox.CacheSelectionStartAndCursorInfo
	// void CacheSelectionStartAndCursorInfo();                                                                                 // [0x63c6cc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UAOverlay
/// Size: 0x0158 (344 bytes) (0x000158 - 0x000158) align 8 MaxSize: 0x0158
class UUAOverlay : public UOverlay
{ 
public:
};

/// Class /Script/UACommon.UAOverlaySlot
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UUAOverlaySlot : public UOverlaySlot
{ 
public:
	int32_t                                            ZOrder;                                                     // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/UACommon.UAPanelProfiler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUAPanelProfiler : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.UAPanelProfiler.ResetProfileDepth
	// void ResetProfileDepth();                                                                                                // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAPanelProfiler.PrintProfileInfo
	// void PrintProfileInfo(FString panelName);                                                                                // [0x2148488] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAPanelProfiler.IsTestOrShipping
	// bool IsTestOrShipping();                                                                                                 // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAPanelProfiler.EndProfiler
	// int32_t EndProfiler(FString panelName, FString phaseName, int32_t animStandardTime);                                     // [0x1c11e54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAPanelProfiler.BeginProfiler
	// void BeginProfiler(FString panelName, FString phaseName);                                                                // [0x1c11c2c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UAPhotoTakerCommon
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUAPhotoTakerCommon : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.UAPhotoTakerCommon.TakePhoto
	// FString TakePhoto();                                                                                                     // [0x63c75a4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAPhotoTakerCommon.ReleaseLoadedPhotos
	// void ReleaseLoadedPhotos();                                                                                              // [0x63c7528] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAPhotoTakerCommon.GetPhotoSavePath
	// FString GetPhotoSavePath();                                                                                              // [0x63c7194] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UACommon.UAPhotoTakerCommon.AsyncLoadPhoto
	// void AsyncLoadPhoto(FString InPhotoName, class UImage* Image);                                                           // [0x63c6bcc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UARedPointWidget
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class UUARedPointWidget : public UUserWidget
{ 
public:
	FString                                            RedPointType;                                               // 0x0290   (0x0010)  
	bool                                               AutoRegist;                                                 // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02A1   (0x0007)  MISSED
};

/// Struct /Script/UACommon.HyperlinkClickCallLuaEventData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FHyperlinkClickCallLuaEventData
{ 
	FString                                            ModuleName;                                                 // 0x0000   (0x0010)  
	FString                                            EventName;                                                  // 0x0010   (0x0010)  
};

/// Class /Script/UACommon.UARichTextBlockHyperLinkDecorator
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UUARichTextBlockHyperLinkDecorator : public URichTextBlockDecorator
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UDataTable*                                  HyperlinkSet;                                               // 0x0038   (0x0008)  
	TArray<FHyperlinkClickCallLuaEventData>            LuaEventDataArray;                                          // 0x0040   (0x0010)  
	FName                                              LuaEventDataId;                                             // 0x0050   (0x0008)  


	/// Functions
	// Function /Script/UACommon.UARichTextBlockHyperLinkDecorator.ClickCallLuaFunc
	// void ClickCallLuaFunc(FString ModuleName, FString EventName, FString Content, FString URL);                              // [0x63c6d28] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UACommon.UATileView
/// Size: 0x0940 (2368 bytes) (0x000930 - 0x000940) align 8 MaxSize: 0x0940
class UUATileView : public UTileView
{ 
public:
	TArray<class UAkAudioEvent*>                       ClickAudioEvents;                                           // 0x0930   (0x0010)  
};

/// Class /Script/UACommon.UATreeView
/// Size: 0x0968 (2408 bytes) (0x000958 - 0x000968) align 8 MaxSize: 0x0968
class UUATreeView : public UTreeView
{ 
public:
	TArray<class UAkAudioEvent*>                       ClickAudioEvents;                                           // 0x0958   (0x0010)  
};

/// Class /Script/UACommon.UAWareHouseComponent
/// Size: 0x0108 (264 bytes) (0x0000F8 - 0x000108) align 8 MaxSize: 0x0108
class UUAWareHouseComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00F8   (0x0008)  MISSED
	class UClass*                                      DefaulWareHouseInventory;                                   // 0x0100   (0x0008)  
};

/// Class /Script/UACommon.UMGHelperLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUMGHelperLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UACommon.UMGHelperLibrary.FindWidgetByName
	// class UWidget* FindWidgetByName(class UUserWidget* InUMGWidget, FName Name);                                             // [0x63c7058] Final|BlueprintAuthorityOnly|Native|Static|Public 
	// Function /Script/UACommon.UMGHelperLibrary.CreateUserWidgetWithName
	// class UUserWidget* CreateUserWidgetWithName(class APlayerController* OwnerPC, class UClass* UserWidgetClass, FName WidgetName); // [0x63c6f28] Final|BlueprintAuthorityOnly|Native|Static|Public 
};

/// Class /Script/UACommon.VideoManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVideoManager : public UObject
{ 
public:


	/// Functions
	// Function /Script/UACommon.VideoManager.StopRecorder
	// void StopRecorder();                                                                                                     // [0x1e39048] Final|Native|Public  
	// Function /Script/UACommon.VideoManager.StartRecorder
	// bool StartRecorder();                                                                                                    // [0x21793e8] Final|Native|Public  
	// Function /Script/UACommon.VideoManager.RecordNotify
	// void RecordNotify(int32_t eventId, int32_t ErrorCode, FString Info);                                                     // [0x63c7368] Final|Native|Public  
	// Function /Script/UACommon.VideoManager.IsRecording
	// bool IsRecording();                                                                                                      // [0x21793e8] Final|Native|Public  
	// Function /Script/UACommon.VideoManager.Init
	// void Init();                                                                                                             // [0x1e39048] Final|Native|Public  
	// Function /Script/UACommon.VideoManager.Get
	// class UVideoManager* Get();                                                                                              // [0x63c7150] Final|Native|Static|Public 
};

/// Struct /Script/UACommon.TaskDescription
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTaskDescription
{ 
	FString                                            ETag;                                                       // 0x0000   (0x0010)  
	int32_t                                            FileSize;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UACommon.KeyInputBlockingConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FKeyInputBlockingConfTableRow : FTableRowBase
{ 
	SDK_UNDEFINED(1,3953) /* EPCInputButton */         __um(ActionName);                                           // 0x0008   (0x0001)  
	bool                                               FrontEnd;                                                   // 0x0009   (0x0001)  
	bool                                               InBattle;                                                   // 0x000A   (0x0001)  
	bool                                               notBagOpen;                                                 // 0x000B   (0x0001)  
	bool                                               notMapOpen;                                                 // 0x000C   (0x0001)  
	bool                                               notGamesettingOpen;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/UACommon.CommonActionKeyNameConfTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FCommonActionKeyNameConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              ActionName;                                                 // 0x0010   (0x0018)  
	FText                                              OperationName;                                              // 0x0028   (0x0018)  
	int32_t                                            Scale;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              KeyDescribeName;                                            // 0x0048   (0x0018)  
	int32_t                                            typeId;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FText                                              KeyTypeName;                                                // 0x0068   (0x0018)  
	int32_t                                            subTypeId;                                                  // 0x0080   (0x0004)  
	int32_t                                            RelationCounts;                                             // 0x0084   (0x0004)  
	TArray<int32_t>                                    ShowModeList;                                               // 0x0088   (0x0010)  
	TArray<int32_t>                                    HideModeList;                                               // 0x0098   (0x0010)  
	int32_t                                            MinLevel;                                                   // 0x00A8   (0x0004)  
	int32_t                                            MaxLevel;                                                   // 0x00AC   (0x0004)  
};

/// Struct /Script/UACommon.OperationSettingVersionTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FOperationSettingVersionTableRow : FTableRowBase
{ 
	int32_t                                            VersionId;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              VersionUpgradeTip;                                          // 0x0010   (0x0018)  
};

/// Struct /Script/UACommon.IconReferenceTable
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FIconReferenceTable : FTableRowBase
{ 
	TWeakObjectPtr<class UObject*>                     IconRef;                                                    // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Struct /Script/UACommon.WidgetReferenceTable
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FWidgetReferenceTable : FTableRowBase
{ 
	TSoftObjectPtr<class UClass*>                      WidgetClass;                                                // 0x0008   (0x0028)  
};

/// Struct /Script/UACommon.AuctionIconScaleOverrideConfTable
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FAuctionIconScaleOverrideConfTable : FTableRowBase
{ 
	int32_t                                            item_id;                                                    // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/UACommon.MagazineIconConfTable
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FMagazineIconConfTable : FTableRowBase
{ 
	int32_t                                            item_id;                                                    // 0x0008   (0x0004)  
	int32_t                                            min_num;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/UACommon.ItemIntervalTable
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FItemIntervalTable : FTableRowBase
{ 
	int32_t                                            Item_type;                                                  // 0x0008   (0x0004)  
	float                                              Interval;                                                   // 0x000C   (0x0004)  
	TMap<int32_t, float>                               item_id_interval_map;                                       // 0x0010   (0x0050)  
};

/// Struct /Script/UACommon.SystemUnlockTable
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSystemUnlockTable : FTableRowBase
{ 
	int32_t                                            sys_id;                                                     // 0x0008   (0x0004)  
	bool                                               NeedUnlockAnim;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/UACommon.NumDistribute
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FNumDistribute : FTableRowBase
{ 
	int32_t                                            Distribution;                                               // 0x0008   (0x0004)  
	int32_t                                            Num;                                                        // 0x000C   (0x0004)  
};

/// Struct /Script/UACommon.LoosePoint
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FLoosePoint : FTableRowBase
{ 
	int32_t                                            Distribution;                                               // 0x0008   (0x0004)  
	int32_t                                            ItemId;                                                     // 0x000C   (0x0004)  
	int32_t                                            MinCount;                                                   // 0x0010   (0x0004)  
	int32_t                                            MaxCount;                                                   // 0x0014   (0x0004)  
};

/// Struct /Script/UACommon.ActiveLoosePoint
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FActiveLoosePoint : FTableRowBase
{ 
	FLoosePoint                                        LoosePoint;                                                 // 0x0008   (0x0018)  
	int32_t                                            ActiveId;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UACommon.LootDetailTable
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FLootDetailTable : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNumDistribute>                             Count;                                                      // 0x0010   (0x0010)  
	TArray<FLoosePoint>                                LoosePoints;                                                // 0x0020   (0x0010)  
	TArray<FLoosePoint>                                FixedLoosePoints;                                           // 0x0030   (0x0010)  
	TArray<FActiveLoosePoint>                          ActivateLoosePoints;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/UACommon.LootStaticPointDetailTable
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FLootStaticPointDetailTable : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            desc;                                                       // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,3954) /* TMap<ELevelDifficult, FLootDetailTable> */ __um(LootDetail);                         // 0x0020   (0x0050)  
};

/// Struct /Script/UACommon.MapStaticPointTable
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FMapStaticPointTable : FTableRowBase
{ 
	int32_t                                            MapID;                                                      // 0x0008   (0x0004)  
	int32_t                                            RuleID;                                                     // 0x000C   (0x0004)  
	SDK_UNDEFINED(1,3955) /* ELevelDifficult */        __um(LevelDifficult);                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            PointName;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	int32_t                                            LootPointType;                                              // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	class UClass*                                      InvClass;                                                   // 0x0068   (0x0008)  
	int32_t                                            LinkStaticPointDetailId;                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            Comments;                                                   // 0x0078   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/UACommon.RookieTipTable
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRookieTipTable : FTableRowBase
{ 
	int32_t                                            tip_id;                                                     // 0x0008   (0x0004)  
	SDK_UNDEFINED(1,3956) /* ERookieTipType */         __um(Type);                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FText                                              Text;                                                       // 0x0010   (0x0018)  
	FString                                            listen_action;                                              // 0x0028   (0x0010)  
	TArray<int32_t>                                    next_ids;                                                   // 0x0038   (0x0010)  
	bool                                               is_key;                                                     // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            talkcharacter;                                              // 0x004C   (0x0004)  
	FString                                            sound_name;                                                 // 0x0050   (0x0010)  
	float                                              remain_time;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<FString>                                    exec_action;                                                // 0x0068   (0x0010)  
	TArray<int32_t>                                    face_paint_ids;                                             // 0x0078   (0x0010)  
	bool                                               delete_on_finish;                                           // 0x0088   (0x0001)  
	bool                                               add_to_top;                                                 // 0x0089   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Struct /Script/UACommon.RookieLimitTable
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRookieLimitTable : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TMap<int32_t, bool>                                sys_id_changes;                                             // 0x0010   (0x0050)  
};

/// Struct /Script/UACommon.RicochetTable
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRicochetTable : FTableRowBase
{ 
	float                                              armor_ricochetangle;                                        // 0x0008   (0x0004)  
	float                                              armor_ricochetprobabilitymin;                               // 0x000C   (0x0004)  
	float                                              armor_ricochetprobabilitymax;                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UACommon.Aliases
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAliases
{ 
	float                                              Rate;                                                       // 0x0000   (0x0004)  
	int32_t                                            Idx;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UACommon.AliasesTableMessage
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FAliasesTableMessage
{ 
	TMap<int32_t, FAliases>                            AliasesTable;                                               // 0x0000   (0x0050)  
	TArray<FLoosePoint>                                LoosePointMessages;                                         // 0x0050   (0x0010)  
};

/// Struct /Script/UACommon.LoosePointAliasesTable
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FLoosePointAliasesTable : FTableRowBase
{ 
	FName                                              LinkLoosePointDetailID;                                     // 0x0008   (0x0008)  
	FAliasesTableMessage                               AliasesTableMessage;                                        // 0x0010   (0x0060)  
};

/// Struct /Script/UACommon.MapLoosePoint
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FMapLoosePoint : FTableRowBase
{ 
	int32_t                                            MapID;                                                      // 0x0008   (0x0004)  
	int32_t                                            RuleID;                                                     // 0x000C   (0x0004)  
	FString                                            PointName;                                                  // 0x0010   (0x0010)  
	FTransform                                         Root;                                                       // 0x0020   (0x0030)  
	SDK_UNDEFINED(1,3957) /* ELoosePointType */        __um(LoosePointType);                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            Comments;                                                   // 0x0058   (0x0010)  
	TArray<FTransform>                                 RandomPos;                                                  // 0x0068   (0x0010)  
	FName                                              LinkLoosePointDetailID;                                     // 0x0078   (0x0008)  
	int32_t                                            Distributed;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/UACommon.LoosePointMapMessage
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLoosePointMapMessage : FTableRowBase
{ 
	int32_t                                            MapID;                                                      // 0x0008   (0x0004)  
	int32_t                                            TotalWeight;                                                // 0x000C   (0x0004)  
	TArray<FMapLoosePoint>                             SortLoosePoints;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/UACommon.LoosePointDetail
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FLoosePointDetail : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            desc;                                                       // 0x0010   (0x0010)  
	TArray<FLoosePoint>                                LoosePoints;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/UACommon.ItemRenderShowSizeOverrideConf
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FItemRenderShowSizeOverrideConf : FTableRowBase
{ 
	int32_t                                            ItemType;                                                   // 0x0008   (0x0004)  
	float                                              Multiplier;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/UACommon.ItemCamOffsetOverrideConf
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FItemCamOffsetOverrideConf : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	FVector                                            Offset;                                                     // 0x000C   (0x000C)  
	bool                                               bOverrideRotator;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRotator                                           overrideRotator;                                            // 0x001C   (0x000C)  
};

/// Struct /Script/UACommon.ItemCornerIconConf
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FItemCornerIconConf : FTableRowBase
{ 
	FString                                            TypeName;                                                   // 0x0008   (0x0010)  
	class UPaperSprite*                                icon;                                                       // 0x0018   (0x0008)  
};

/// Struct /Script/UACommon.ItemColorConf
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FItemColorConf : FTableRowBase
{ 
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	TArray<uint32_t>                                   SupportTypes;                                               // 0x0018   (0x0010)  
	TArray<uint32_t>                                   IgnoreTypes;                                                // 0x0028   (0x0010)  
	TArray<int32_t>                                    Rarity;                                                     // 0x0038   (0x0010)  
};

/// Struct /Script/UACommon.ActionTip
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FActionTip
{ 
	FString                                            ActionTip;                                                  // 0x0000   (0x0010)  
	FString                                            ActionName;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UACommon.IniFileBackup
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 8 MaxSize: 0x0160
struct FIniFileBackup
{ 
	FString                                            IniName;                                                    // 0x0000   (0x0010)  
	TArray<FString>                                    ClassesReloaded;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x140];                                     // 0x0020   (0x0140)  MISSED
};

/// Struct /Script/UACommon.BuglyData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBuglyData
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
	FString                                            Time;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/UACommon.UAGameBigMapTraceConfigTable
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FUAGameBigMapTraceConfigTable : FTableRowBase
{ 
	int32_t                                            Handle;                                                     // 0x0008   (0x0004)  
	int32_t                                            ConfigID;                                                   // 0x000C   (0x0004)  
	FVector2D                                          WorldLocation;                                              // 0x0010   (0x0008)  
	int32_t                                            AreaID;                                                     // 0x0018   (0x0004)  
	int32_t                                            Layer;                                                      // 0x001C   (0x0004)  
};

/// Struct /Script/UACommon.UABiohazardHonorTitleConfig
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FUABiohazardHonorTitleConfig : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            HonorTitleName;                                             // 0x0010   (0x0010)  
	FString                                            HonorTitleDescription;                                      // 0x0020   (0x0010)  
	SDK_UNDEFINED(1,3958) /* EHonorTitleType */        __um(HonorTitleType);                                       // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,3959) /* EValueCompareType */      __um(HonorLimitType);                                       // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            HonorTitleLimit;                                            // 0x0034   (0x0004)  
	FString                                            PropertyName;                                               // 0x0038   (0x0010)  
};

/// Struct /Script/UACommon.UATacticalGearADSIconConfig
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FUATacticalGearADSIconConfig : FTableRowBase
{ 
	FString                                            NormalIconKey;                                              // 0x0008   (0x0010)  
	FString                                            ClickIconKey;                                               // 0x0018   (0x0010)  
	FString                                            DisableIconKey;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/UACommon.SteamCommentConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FSteamCommentConfTableRow : FTableRowBase
{ 
	uint32_t                                           sys_id;                                                     // 0x0008   (0x0004)  
	uint32_t                                           Value;                                                      // 0x000C   (0x0004)  
	FString                                            desc;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/UACommon.CARuleTypeNameTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCARuleTypeNameTableRow : FTableRowBase
{ 
	FText                                              Describe;                                                   // 0x0008   (0x0018)  
};

/// Struct /Script/UACommon.UAInventoryIconTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FUAInventoryIconTableRow : FTableRowBase
{ 
	FString                                            Describe;                                                   // 0x0008   (0x0010)  
	int32_t                                            ItemId;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSoftObjectPath                                    SketchIconPath;                                             // 0x0020   (0x0018)  
	FSoftObjectPath                                    HeroIconPath;                                               // 0x0038   (0x0018)  
};

/// Struct /Script/UACommon.UAFrontEndStageTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FUAFrontEndStageTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            CameraTag;                                                  // 0x0010   (0x0010)  
	FString                                            SequenceTag;                                                // 0x0020   (0x0010)  
	bool                                               bReversePlay;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FString                                            CameraStartFocus;                                           // 0x0038   (0x0010)  
	FString                                            CameraEndFocus;                                             // 0x0048   (0x0010)  
	float                                              CameraMoveSpeed;                                            // 0x0058   (0x0004)  
	bool                                               bNeedSfx;                                                   // 0x005C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FString                                            Comment;                                                    // 0x0060   (0x0010)  
};

/// Struct /Script/UACommon.UAHeroTemplateTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FUAHeroTemplateTableRow : FTableRowBase
{ 
	int32_t                                            HeroID;                                                     // 0x0008   (0x0004)  
	int32_t                                            InvPackageID;                                               // 0x000C   (0x0004)  
	TArray<int32_t>                                    OptionalInvPackageIDs;                                      // 0x0010   (0x0010)  
	TArray<int32_t>                                    PerkList;                                                   // 0x0020   (0x0010)  
	SDK_UNDEFINED(1,3960) /* ECharacterSex */          __um(HeroSex);                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	int64_t                                            HeroAvatarSuitID;                                           // 0x0038   (0x0008)  
	bool                                               bExpandState;                                               // 0x0040   (0x0001)  
	bool                                               bInSwitchAvatarSet;                                         // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	FSoftObjectPath                                    HeroIconPath;                                               // 0x0048   (0x0018)  
};

/// Struct /Script/UACommon.UAGamePadVisibilityTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FUAGamePadVisibilityTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            WidgetName;                                                 // 0x0010   (0x0010)  
	FString                                            SettingKey;                                                 // 0x0020   (0x0010)  
	bool                                               bHideOnBagOpen;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(80,3961) /* TMap<FName, EWidgetVisibilityMode> */ __um(UIStateVisiblity);                        // 0x0038   (0x0050)  
};

/// Struct /Script/UACommon.UATutorialEventTable
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FUATutorialEventTable : FTableRowBase
{ 
	FString                                            EventName;                                                  // 0x0008   (0x0010)  
	int32_t                                            MaxTimesInGame;                                             // 0x0018   (0x0004)  
	int32_t                                            MaxTimesInCareer;                                           // 0x001C   (0x0004)  
	int32_t                                            NotTriggerTimesInCareer;                                    // 0x0020   (0x0004)  
	int32_t                                            CD;                                                         // 0x0024   (0x0004)  
	FString                                            ExtraParaText1;                                             // 0x0028   (0x0010)  
	int32_t                                            ExtraPara1;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            ExtraParaText2;                                             // 0x0040   (0x0010)  
	int32_t                                            ExtraPara2;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            ExtraParaText3;                                             // 0x0058   (0x0010)  
	int32_t                                            ExtraPara3;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UAAdviseInvPriorityTable
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FUAAdviseInvPriorityTable : FTableRowBase
{ 
	FString                                            characterState;                                             // 0x0008   (0x0010)  
	FString                                            AdviseInvType1;                                             // 0x0018   (0x0010)  
	FString                                            AdviseInvType2;                                             // 0x0028   (0x0010)  
	FString                                            AdviseInvType3;                                             // 0x0038   (0x0010)  
	FString                                            AdviseInvType4;                                             // 0x0048   (0x0010)  
	FString                                            AdviseInvType5;                                             // 0x0058   (0x0010)  
	FString                                            AdviseInvType6;                                             // 0x0068   (0x0010)  
	FString                                            AdviseInvType7;                                             // 0x0078   (0x0010)  
	FString                                            AdviseInvType8;                                             // 0x0088   (0x0010)  
	FString                                            AdviseInvType9;                                             // 0x0098   (0x0010)  
	FString                                            AdviseInvType10;                                            // 0x00A8   (0x0010)  
	FString                                            AdviseInvTypeEnd;                                           // 0x00B8   (0x0010)  
};

/// Struct /Script/UACommon.UAAIUniqueItemInfoTable
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FUAAIUniqueItemInfoTable : FTableRowBase
{ 
	int32_t                                            ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UAFactionMappingTable
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FUAFactionMappingTable : FTableRowBase
{ 
	int32_t                                            FactionID;                                                  // 0x0008   (0x0004)  
	SDK_UNDEFINED(1,3962) /* EFactionType */           __um(FactionType);                                          // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/UACommon.UAFactionRelationTable
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FUAFactionRelationTable : FTableRowBase
{ 
	SDK_UNDEFINED(1,3963) /* EFactionRelationType */   __um(NormalPMC);                                            // 0x0008   (0x0001)  
	SDK_UNDEFINED(1,3964) /* EFactionRelationType */   __um(NormalScav);                                           // 0x0009   (0x0001)  
	SDK_UNDEFINED(1,3965) /* EFactionRelationType */   __um(PlayerScav);                                           // 0x000A   (0x0001)  
	SDK_UNDEFINED(1,3966) /* EFactionRelationType */   __um(RebelFaction);                                         // 0x000B   (0x0001)  
	SDK_UNDEFINED(1,3967) /* EFactionRelationType */   __um(LakeFaction);                                          // 0x000C   (0x0001)  
	SDK_UNDEFINED(1,3968) /* EFactionRelationType */   __um(GangsterFaction);                                      // 0x000D   (0x0001)  
	SDK_UNDEFINED(1,3969) /* EFactionRelationType */   __um(KurtTeam);                                             // 0x000E   (0x0001)  
	SDK_UNDEFINED(1,3970) /* EFactionRelationType */   __um(NavyFaction);                                          // 0x000F   (0x0001)  
	SDK_UNDEFINED(1,3971) /* EFactionRelationType */   __um(Blackgold);                                            // 0x0010   (0x0001)  
	SDK_UNDEFINED(1,3972) /* EFactionRelationType */   __um(Gnesk);                                                // 0x0011   (0x0001)  
	SDK_UNDEFINED(1,3973) /* EFactionRelationType */   __um(MadDog);                                               // 0x0012   (0x0001)  
	SDK_UNDEFINED(1,3974) /* EFactionRelationType */   __um(RoleplayA);                                            // 0x0013   (0x0001)  
	SDK_UNDEFINED(1,3975) /* EFactionRelationType */   __um(RoleplayB);                                            // 0x0014   (0x0001)  
	SDK_UNDEFINED(1,3976) /* EFactionRelationType */   __um(Cleaner);                                              // 0x0015   (0x0001)  
	SDK_UNDEFINED(1,3977) /* EFactionRelationType */   __um(Kamona);                                               // 0x0016   (0x0001)  
	SDK_UNDEFINED(1,3978) /* EFactionRelationType */   __um(Abyss);                                                // 0x0017   (0x0001)  
};

/// Struct /Script/UACommon.UAMultiModeWidgetTable
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FUAMultiModeWidgetTable : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FString                                            sysIds;                                                     // 0x0028   (0x0010)  
	bool                                               isShowMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            use_ticket;                                                 // 0x003C   (0x0004)  
	int32_t                                            need_take_in_threshold;                                     // 0x0040   (0x0004)  
	int32_t                                            default_avatar_set_id;                                      // 0x0044   (0x0004)  
};

/// Struct /Script/UACommon.UATraceStyleTable
/// Size: 0x01F0 (496 bytes) (0x000008 - 0x0001F0) align 8 MaxSize: 0x01F0
struct FUATraceStyleTable : FTableRowBase
{ 
	int32_t                                            StyleID;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Annotation;                                                 // 0x0010   (0x0010)  
	TSoftObjectPtr<class UClass*>                      TemplateUMG_Resource;                                       // 0x0020   (0x0028)  
	int32_t                                            ZOrder;                                                     // 0x0048   (0x0004)  
	float                                              EffectDistance;                                             // 0x004C   (0x0004)  
	float                                              OpacityOnVisible;                                           // 0x0050   (0x0004)  
	float                                              OpacityOnInvisible;                                         // 0x0054   (0x0004)  
	FSlateColor                                        Image_Circle_Color_Normal;                                  // 0x0058   (0x0028)  
	FSlateColor                                        Image_Circle_Color_Teamate;                                 // 0x0080   (0x0028)  
	FSlateColor                                        Image_Circle_Color_Enemy;                                   // 0x00A8   (0x0028)  
	FString                                            Image_BG_Path;                                              // 0x00D0   (0x0010)  
	FSlateColor                                        Image_BG_Color_Normal;                                      // 0x00E0   (0x0028)  
	FSlateColor                                        Image_BG_Color_Teamate;                                     // 0x0108   (0x0028)  
	FSlateColor                                        Image_BG_Color_Enemy;                                       // 0x0130   (0x0028)  
	FString                                            Image_Icon_Path;                                            // 0x0158   (0x0010)  
	FSlateColor                                        Image_Icon_Color_Normal;                                    // 0x0168   (0x0028)  
	FSlateColor                                        Image_Icon_Color_Teamate;                                   // 0x0190   (0x0028)  
	FSlateColor                                        Image_Icon_Color_Enemy;                                     // 0x01B8   (0x0028)  
	TArray<FString>                                    Params;                                                     // 0x01E0   (0x0010)  
};

/// Struct /Script/UACommon.UATraceSceneStyleParams
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FUATraceSceneStyleParams
{ 
	TSoftObjectPtr<class UClass*>                      SceneUMGType;                                               // 0x0000   (0x0028)  
	float                                              OpactiyInVision;                                            // 0x0028   (0x0004)  
	float                                              OpactiyNotInVision;                                         // 0x002C   (0x0004)  
	float                                              OpacityOutofDistance;                                       // 0x0030   (0x0004)  
	float                                              ShortShowDistance;                                          // 0x0034   (0x0004)  
	float                                              HideDistance;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x003C   (0x001C)  MISSED
	TArray<FString>                                    Params;                                                     // 0x0058   (0x0010)  
};

/// Struct /Script/UACommon.UATraceNewMapStyleParams
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FUATraceNewMapStyleParams
{ 
	TSoftObjectPtr<class UClass*>                      UMGType;                                                    // 0x0000   (0x0028)  
	int32_t                                            ZOrder;                                                     // 0x0028   (0x0004)  
	bool                                               bShowArea;                                                  // 0x002C   (0x0001)  
	SDK_UNDEFINED(1,3979) /* EUATraceNewMapShowAreaType */ __um(ShowAreaType);                                     // 0x002D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002E   (0x0002)  MISSED
	FLinearColor                                       AreaColor;                                                  // 0x0030   (0x0010)  
	float                                              AreaRadius;                                                 // 0x0040   (0x0004)  
	bool                                               bEnableHover;                                               // 0x0044   (0x0001)  
	bool                                               bEnableMark;                                                // 0x0045   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	FString                                            DetailBoardType;                                            // 0x0048   (0x0010)  
	bool                                               bHideOnDiffLayer;                                           // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              IconScale;                                                  // 0x005C   (0x0004)  
	TMap<FString, FString>                             Params;                                                     // 0x0060   (0x0050)  
};

/// Struct /Script/UACommon.UATraceDirectionalBarStyleParams
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FUATraceDirectionalBarStyleParams
{ 
	FString                                            HighlightAniName;                                           // 0x0000   (0x0010)  
	int32_t                                            AniLoopTimes;                                               // 0x0010   (0x0004)  
	bool                                               bIsAlwaysShow;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	TArray<FString>                                    Params;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UANewTraceStyleTable
/// Size: 0x01D8 (472 bytes) (0x000008 - 0x0001D8) align 8 MaxSize: 0x01D8
struct FUANewTraceStyleTable : FTableRowBase
{ 
	FString                                            Annotation;                                                 // 0x0008   (0x0010)  
	FSlateColor                                        Color;                                                      // 0x0018   (0x0028)  
	FSoftObjectPath                                    MarkIconResource;                                           // 0x0040   (0x0018)  
	FSoftObjectPath                                    BackgroundResource;                                         // 0x0058   (0x0018)  
	TSoftObjectPtr<class UClass*>                      SubUMGType;                                                 // 0x0070   (0x0028)  
	FUATraceSceneStyleParams                           SceneStyleParams;                                           // 0x0098   (0x0068)  
	FUATraceNewMapStyleParams                          NewMapStyleParams;                                          // 0x0100   (0x00B0)  
	FUATraceDirectionalBarStyleParams                  DirectionalBarStyleParams;                                  // 0x01B0   (0x0028)  
};

/// Struct /Script/UACommon.UATraceSceneRuleParams
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FUATraceSceneRuleParams
{ 
	bool                                               bCanShow;                                                   // 0x0000   (0x0001)  
	bool                                               bActiveCanShow;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              ShowDistance;                                               // 0x0004   (0x0004)  
	float                                              DrawInverval;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/UACommon.UATraceNewMapRuleParams
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FUATraceNewMapRuleParams
{ 
	bool                                               bCanShow;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ShowDistance;                                               // 0x0004   (0x0004)  
	float                                              DrawInverval;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/UACommon.UATraceDirectionalBarRuleParams
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FUATraceDirectionalBarRuleParams
{ 
	bool                                               bCanShow;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ShowDistance;                                               // 0x0004   (0x0004)  
	float                                              DrawInverval;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/UACommon.UANewTraceRuleTable
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FUANewTraceRuleTable : FTableRowBase
{ 
	SDK_UNDEFINED(1,3980) /* ENewTraceSyncRule */      __um(SyncRule);                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FUATraceSceneRuleParams                            SceneRuleParams;                                            // 0x000C   (0x000C)  
	FUATraceNewMapRuleParams                           NewMapRuleParams;                                           // 0x0018   (0x000C)  
	FUATraceDirectionalBarRuleParams                   DirectionalBarRuleParams;                                   // 0x0024   (0x000C)  
};

/// Struct /Script/UACommon.UAScanDeviceUIConfig
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FUAScanDeviceUIConfig : FTableRowBase
{ 
	FVector2D                                          UISize;                                                     // 0x0008   (0x0008)  
	FVector2D                                          UIOffset;                                                   // 0x0010   (0x0008)  
	float                                              RotateAngle;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UANewTraceConfigTable
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FUANewTraceConfigTable : FTableRowBase
{ 
	SDK_UNDEFINED(1,3981) /* ENewTraceableMarkType */  __um(MarkType);                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            TraceRuleRowName;                                           // 0x0010   (0x0010)  
	int32_t                                            TraceStyleID;                                               // 0x0020   (0x0004)  
	float                                              DataSyncInverval;                                           // 0x0024   (0x0004)  
	bool                                               CanInteract;                                                // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,3982) /* ETraceableMarkInitMode */ __um(TraceInfoInitMode);                                    // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	FText                                              TraceTitle;                                                 // 0x0030   (0x0018)  
	FText                                              TraceDesc;                                                  // 0x0048   (0x0018)  
	FText                                              TargetTitle;                                                // 0x0060   (0x0018)  
	FText                                              TargetDesc;                                                 // 0x0078   (0x0018)  
	bool                                               bShowInTacticalMap;                                         // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/UACommon.UATraceTargetTable
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FUATraceTargetTable : FTableRowBase
{ 
	int32_t                                            TargetId;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              TargetTitle;                                                // 0x0010   (0x0018)  
	FText                                              TargetDesc;                                                 // 0x0028   (0x0018)  
	bool                                               bShowTrace;                                                 // 0x0040   (0x0001)  
	bool                                               bIsClick;                                                   // 0x0041   (0x0001)  
	bool                                               bIsAutoSelect;                                              // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x0043   (0x0005)  MISSED
	FText                                              TraceTitle;                                                 // 0x0048   (0x0018)  
	FText                                              TraceDesc;                                                  // 0x0060   (0x0018)  
	FString                                            AnimName;                                                   // 0x0078   (0x0010)  
	int32_t                                            StyleID;                                                    // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UALootDataInfosTable
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FUALootDataInfosTable : FTableRowBase
{ 
	int32_t                                            LootDataInfoID;                                             // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Description;                                                // 0x0010   (0x0010)  
	int32_t                                            LootPointType;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UPaperSprite*                                LootPointIcon;                                              // 0x0028   (0x0008)  
};

/// Struct /Script/UACommon.UABrilliantTimeReplayTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FUABrilliantTimeReplayTableRow : FTableRowBase
{ 
	int32_t                                            typeId;                                                     // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TWeakObjectPtr<class UMFMissionFlow*>              MissionFlow;                                                // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0018   (0x0020)  MISSED
	int32_t                                            MinCountToSubmit;                                           // 0x0038   (0x0004)  
	bool                                               NeedEscapeAliveToSubmit;                                    // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/UACommon.UASubTitleTextTable
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FUASubTitleTextTable : FTableRowBase
{ 
	int32_t                                            TextMessageId;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Text;                                                       // 0x0010   (0x0018)  
	int32_t                                            GameHUDTypeID;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UASubTitleVOTable
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FUASubTitleVOTable : FTableRowBase
{ 
	int32_t                                            Messageid;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            SoundResource;                                              // 0x0010   (0x0010)  
	int32_t                                            TextMessageId;                                              // 0x0020   (0x0004)  
	FName                                              SoundType;                                                  // 0x0024   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.ItemConfTableRowBPProxy
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FItemConfTableRowBPProxy : FTableRowBase
{ 
	int32_t                                            ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            ShortName;                                                  // 0x0020   (0x0010)  
	uint32_t                                           IconId;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            Describe;                                                   // 0x0038   (0x0010)  
	int32_t                                            SizeX;                                                      // 0x0048   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x004C   (0x0004)  
	float                                              Weight;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            pickup_sound;                                               // 0x0058   (0x0010)  
	FString                                            use_sound;                                                  // 0x0068   (0x0010)  
	FString                                            drop_sound;                                                 // 0x0078   (0x0010)  
	int32_t                                            sell_price;                                                 // 0x0088   (0x0004)  
	uint32_t                                           can_sell;                                                   // 0x008C   (0x0004)  
	int32_t                                            standard_price;                                             // 0x0090   (0x0004)  
	uint32_t                                           StackMax;                                                   // 0x0094   (0x0004)  
	uint32_t                                           not_discard;                                                // 0x0098   (0x0004)  
	uint32_t                                           Bind;                                                       // 0x009C   (0x0004)  
	uint32_t                                           Rarity;                                                     // 0x00A0   (0x0004)  
	uint32_t                                           Durability;                                                 // 0x00A4   (0x0004)  
	uint32_t                                           UseExp;                                                     // 0x00A8   (0x0004)  
	int32_t                                            LootExp;                                                    // 0x00AC   (0x0004)  
	TArray<char>                                       RejectSlot;                                                 // 0x00B0   (0x0010)  
	uint32_t                                           sort;                                                       // 0x00C0   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x00C4   (0x0004)  
	uint32_t                                           RarityColorIndex;                                           // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/UACommon.LootDropTableRowBPProxy
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FLootDropTableRowBPProxy : FTableRowBase
{ 
	int64_t                                            ID;                                                         // 0x0008   (0x0008)  
	FString                                            desc;                                                       // 0x0010   (0x0010)  
	char                                               ItemType;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	int64_t                                            ItemId;                                                     // 0x0028   (0x0008)  
	TArray<int32_t>                                    ItemNum;                                                    // 0x0030   (0x0010)  
	TArray<int64_t>                                    SubItemTable;                                               // 0x0040   (0x0010)  
	int32_t                                            Weight;                                                     // 0x0050   (0x0004)  
	float                                              Percent;                                                    // 0x0054   (0x0004)  
	float                                              RandTimes;                                                  // 0x0058   (0x0004)  
	char                                               OperationType;                                              // 0x005C   (0x0001)  
	char                                               IsPermanent;                                                // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	uint32_t                                           ActID;                                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<uint64_t>                                   LootPointWhite;                                             // 0x0068   (0x0010)  
	TArray<uint64_t>                                   LootPointBlack;                                             // 0x0078   (0x0010)  
	FString                                            Describe;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/UACommon.MapDetailTableRowBPProxy
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FMapDetailTableRowBPProxy : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            map_level;                                                  // 0x0010   (0x0010)  
	FString                                            mobile_map_level;                                           // 0x0020   (0x0010)  
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	FString                                            level_path;                                                 // 0x0040   (0x0010)  
	FString                                            Picture;                                                    // 0x0050   (0x0010)  
	FString                                            desc;                                                       // 0x0060   (0x0010)  
	FVector2D                                          MapSize;                                                    // 0x0070   (0x0008)  
	TArray<FVector2D>                                  SampleScenePoints;                                          // 0x0078   (0x0010)  
	TArray<FVector2D>                                  SampleMapPoints;                                            // 0x0088   (0x0010)  
};

/// Struct /Script/UACommon.UACaptureTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FUACaptureTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            X;                                                          // 0x000C   (0x0004)  
	int32_t                                            Y;                                                          // 0x0010   (0x0004)  
	int32_t                                            Z;                                                          // 0x0014   (0x0004)  
};

/// Struct /Script/UACommon.UAEscapeInteractTextTable
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUAEscapeInteractTextTable : FTableRowBase
{ 
	int32_t                                            EscapeInteractID;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              InteractText;                                               // 0x0010   (0x0018)  
};

/// Struct /Script/UACommon.UAPlayerEscapeShowRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUAPlayerEscapeShowRow : FTableRowBase
{ 
	bool                                               enable;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            EscapePointID;                                              // 0x000C   (0x0004)  
	int32_t                                            MaxPlayerNum;                                               // 0x0010   (0x0004)  
	float                                              PlayTime;                                                   // 0x0014   (0x0004)  
	TArray<class APlayerController*>                   PCArr;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UAEscapeTextTableRow
/// Size: 0x0178 (376 bytes) (0x000008 - 0x000178) align 8 MaxSize: 0x0178
struct FUAEscapeTextTableRow : FTableRowBase
{ 
	int32_t                                            EscapePointID;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              EscapeName;                                                 // 0x0010   (0x0018)  
	FText                                              ConditionDescription;                                       // 0x0028   (0x0018)  
	FText                                              ConditionDescShort;                                         // 0x0040   (0x0018)  
	FText                                              ConditionPassText;                                          // 0x0058   (0x0018)  
	FText                                              EscapeDescription;                                          // 0x0070   (0x0018)  
	FText                                              RemainTimeText;                                             // 0x0088   (0x0018)  
	FText                                              AlreadyFailText;                                            // 0x00A0   (0x0018)  
	int32_t                                            EscapeReportID;                                             // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FText                                              PersonHitContent;                                           // 0x00C0   (0x0018)  
	FText                                              GlobalHitContent;                                           // 0x00D8   (0x0018)  
	FText                                              GlobalCloseHitContent;                                      // 0x00F0   (0x0018)  
	FVector                                            Location;                                                   // 0x0108   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	FText                                              GlobalLeftTimeHitContent_OpenEscape;                        // 0x0118   (0x0018)  
	FText                                              GlobalLeftTimeHitContent_CloseEscape;                       // 0x0130   (0x0018)  
	bool                                               bPreConditionCheck;                                         // 0x0148   (0x0001)  
	bool                                               bNotifyOnEscapeAvailable;                                   // 0x0149   (0x0001)  
	bool                                               bOverrideCostInventory;                                     // 0x014A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x014B   (0x0005)  MISSED
	FInteractInventoryInfo                             CostInventoryInfo;                                          // 0x0150   (0x0028)  
};

/// Struct /Script/UACommon.PanelLayerTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FPanelLayerTableRow : FTableRowBase
{ 
	FString                                            LayerName;                                                  // 0x0008   (0x0010)  
	uint32_t                                           StartZOrder;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.PanelConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FPanelConfTableRow : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            OwnerModule;                                                // 0x0018   (0x0010)  
	FString                                            AssetMobileName;                                            // 0x0028   (0x0010)  
	FString                                            LayerName;                                                  // 0x0038   (0x0010)  
	TArray<FString>                                    OwnerPanel;                                                 // 0x0048   (0x0010)  
};

/// Struct /Script/UACommon.ServiceConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FServiceConfTableRow : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            InitContext;                                                // 0x0018   (0x0010)  
	FString                                            ResetContext;                                               // 0x0028   (0x0010)  
	FString                                            desc;                                                       // 0x0038   (0x0010)  
	FString                                            ServiceType;                                                // 0x0048   (0x0010)  
};

/// Struct /Script/UACommon.ModuleContextConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FModuleContextConfTableRow : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            LevelPath;                                                  // 0x0018   (0x0010)  
	FString                                            desc;                                                       // 0x0028   (0x0010)  
};

/// Struct /Script/UACommon.ModuleConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FModuleConfTableRow : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            Context;                                                    // 0x0018   (0x0010)  
	FString                                            desc;                                                       // 0x0028   (0x0010)  
};

/// Struct /Script/UACommon.UAGameBigMapModuleModeTable
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FUAGameBigMapModuleModeTable : FTableRowBase
{ 
	TSoftObjectPtr<class UClass*>                      BigMapModule;                                               // 0x0008   (0x0028)  
	FText                                              DisplayName;                                                // 0x0030   (0x0018)  
	bool                                               enable;                                                     // 0x0048   (0x0001)  
	bool                                               Switchable;                                                 // 0x0049   (0x0001)  
	bool                                               DefaultState;                                               // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Struct /Script/UACommon.LandMarkGuide
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FLandMarkGuide
{ 
	TArray<FSoftObjectPath>                            GuideImages;                                                // 0x0000   (0x0010)  
	TArray<FText>                                      GuideDescription;                                           // 0x0010   (0x0010)  
	TWeakObjectPtr<class UObject*>                     MediaSource;                                                // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0028   (0x0020)  MISSED
	int32_t                                            AudioCallbackTypes;                                         // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FString                                            AdditionalInfoURL;                                          // 0x0050   (0x0010)  
	FString                                            AdditionalInfoURLOverseas;                                  // 0x0060   (0x0010)  
};

/// Struct /Script/UACommon.UAGameLandmarkTable
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FUAGameLandmarkTable : FTableRowBase
{ 
	int32_t                                            MapID;                                                      // 0x0008   (0x0004)  
	int32_t                                            LandMarkID;                                                 // 0x000C   (0x0004)  
	FText                                              LandMarkName;                                               // 0x0010   (0x0018)  
	FVector2D                                          WorldLocation;                                              // 0x0028   (0x0008)  
	FLandMarkGuide                                     LandMarkGuide;                                              // 0x0030   (0x0070)  
};

/// Struct /Script/UACommon.UAGameBigMapEffectTable
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FUAGameBigMapEffectTable : FTableRowBase
{ 
	int32_t                                            Messageid;                                                  // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	int32_t                                            LandMarkID;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TSoftObjectPtr<class UClass*>                      TemplateUMG_Resource;                                       // 0x0018   (0x0028)  
	float                                              StartAtScale;                                               // 0x0040   (0x0004)  
	float                                              EndAtScale;                                                 // 0x0044   (0x0004)  
	bool                                               ShowAtInit;                                                 // 0x0048   (0x0001)  
	bool                                               DynamicSize;                                                // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x004A   (0x0002)  MISSED
	int32_t                                            InitSize;                                                   // 0x004C   (0x0004)  
	TArray<int32_t>                                    AreaIDs;                                                    // 0x0050   (0x0010)  
};

/// Struct /Script/UACommon.UALootPointInfo
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FUALootPointInfo : FTableRowBase
{ 
	int32_t                                            MapID;                                                      // 0x0008   (0x0004)  
	int32_t                                            LootPointID;                                                // 0x000C   (0x0004)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              AreaName;                                                   // 0x0020   (0x0018)  
	int32_t                                            AreaID;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            LevelPath;                                                  // 0x0040   (0x0010)  
	FString                                            LabelName;                                                  // 0x0050   (0x0010)  
	int32_t                                            LootPointType;                                              // 0x0060   (0x0004)  
	int32_t                                            InBigMapAreaID;                                             // 0x0064   (0x0004)  
	int32_t                                            CustomIndex;                                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            InPickupGroup;                                              // 0x0070   (0x0010)  
	float                                              ActivePropInPickupGroup;                                    // 0x0080   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UABattleQuickChat
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FUABattleQuickChat : FTableRowBase
{ 
	int32_t                                            Messageid;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ChatType;                                                   // 0x0010   (0x0010)  
	FText                                              ListName;                                                   // 0x0020   (0x0018)  
	FText                                              ChatContent;                                                // 0x0038   (0x0018)  
	FText                                              ChatSound;                                                  // 0x0050   (0x0018)  
};

/// Struct /Script/UACommon.UAGamePadMessageTable
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FUAGamePadMessageTable : FTableRowBase
{ 
	int32_t                                            Messageid;                                                  // 0x0008   (0x0004)  
	SDK_UNDEFINED(1,3983) /* EUAGamePadTable */        __um(GamePadWidgets);                                       // 0x000C   (0x0001)  
	bool                                               GamePadWidgetVisibility;                                    // 0x000D   (0x0001)  
	SDK_UNDEFINED(1,3984) /* EGamePadEffectTable */    __um(GamePadEffectWidgets);                                 // 0x000E   (0x0001)  
	bool                                               GamePadEffectWidgetVisibility;                              // 0x000F   (0x0001)  
};

/// Struct /Script/UACommon.UAGameHUDTable
/// Size: 0x00E8 (232 bytes) (0x000008 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FUAGameHUDTable : FTableRowBase
{ 
	int32_t                                            Messageid;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TSoftObjectPtr<class UClass*>                      TemplateUMG_Resource;                                       // 0x0010   (0x0028)  
	SDK_UNDEFINED(1,3985) /* EUAHUDPreInstallLoc */    __um(Location_Type);                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TWeakObjectPtr<class UObject*>                     background_img;                                             // 0x0040   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	TWeakObjectPtr<class UObject*>                     Content_Img;                                                // 0x0068   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0070   (0x0020)  MISSED
	bool                                               bUseContent_Img_Color;                                      // 0x0090   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FSlateColor                                        Content_Img_Color;                                          // 0x0098   (0x0028)  
	FText                                              Normal_Text;                                                // 0x00C0   (0x0018)  
	int32_t                                            RemainTime;                                                 // 0x00D8   (0x0004)  
	bool                                               bWaitWidgetFinish;                                          // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UAkAudioEvent*                               AudioEvent;                                                 // 0x00E0   (0x0008)  
};

/// Struct /Script/UACommon.UATaskTypeTable
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FUATaskTypeTable : FTableRowBase
{ 
	uint32_t                                           Type;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              TypeDesc;                                                   // 0x0010   (0x0018)  
	FString                                            IconPath;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/UACommon.UASettleFilter
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FUASettleFilter
{ 
	FString                                            ArgName;                                                    // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,3986) /* EUASettleFilterType */    __um(FilterType);                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<int32_t>                                    Values;                                                     // 0x0018   (0x0010)  
	int32_t                                            MinValue;                                                   // 0x0028   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x002C   (0x0004)  
};

/// Struct /Script/UACommon.UASettleTipsConfigTable
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FUASettleTipsConfigTable : FTableRowBase
{ 
	FString                                            Describe;                                                   // 0x0008   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FUASettleFilter>                            Filters;                                                    // 0x0020   (0x0010)  
	TArray<FString>                                    TipKeys;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/UACommon.UASettleBGMConfig
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FUASettleBGMConfig
{ 
	FString                                            EventName;                                                  // 0x0000   (0x0010)  
	FString                                            StateGroupName;                                             // 0x0010   (0x0010)  
	FString                                            StateName;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/UACommon.UASettleUIConfigTable
/// Size: 0x00E8 (232 bytes) (0x000008 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FUASettleUIConfigTable : FTableRowBase
{ 
	FString                                            Describe;                                                   // 0x0008   (0x0010)  
	int32_t                                            Priority;                                                   // 0x0018   (0x0004)  
	SDK_UNDEFINED(1,3987) /* EUASettleUIType */        __um(UiType);                                               // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	TArray<FUASettleFilter>                            Filters;                                                    // 0x0020   (0x0010)  
	SDK_UNDEFINED(80,3988) /* TSet<FString> */         __um(WidgetNames);                                          // 0x0030   (0x0050)  
	SDK_UNDEFINED(1,3989) /* EUASettleUIAlignment */   __um(BottomButtonAlign);                                    // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FUASettleBGMConfig                                 VictoryBGM;                                                 // 0x0088   (0x0030)  
	FUASettleBGMConfig                                 LoseBGM;                                                    // 0x00B8   (0x0030)  
};

/// Struct /Script/UACommon.UABattleEventPoint
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FUABattleEventPoint
{ 
	uint32_t                                           eventId;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Timestamp;                                                  // 0x0004   (0x0004)  
	FVector                                            position;                                                   // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	int64_t                                            Value;                                                      // 0x0018   (0x0008)  
	TArray<FString>                                    Params;                                                     // 0x0020   (0x0010)  
	FString                                            Describe;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/UACommon.UABattleEventPointsTable
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUABattleEventPointsTable : FTableRowBase
{ 
	FString                                            Describe;                                                   // 0x0008   (0x0010)  
	TArray<FUABattleEventPoint>                        BattleEventPoints;                                          // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UAStatisParamInfo
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FUAStatisParamInfo : FTableRowBase
{ 
	SDK_UNDEFINED(1,3990) /* EUAStatisParamFilterType */ __um(CompareType);                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	int64_t                                            CompareValue;                                               // 0x0010   (0x0008)  
	int64_t                                            CompareValueExt;                                            // 0x0018   (0x0008)  
	bool                                               Detail;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<int64_t>                                    ValueList;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/UACommon.UACutTrendArgs
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FUACutTrendArgs : FTableRowBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              N;                                                          // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UADescribeWordArgs
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FUADescribeWordArgs : FTableRowBase
{ 
	FString                                            arg;                                                        // 0x0008   (0x0010)  
	SDK_UNDEFINED(1,3991) /* EUAArgResolveMethod */    __um(ResolveMethod);                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/UACommon.UABattleEventTable
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FUABattleEventTable : FTableRowBase
{ 
	FString                                            Describe;                                                   // 0x0008   (0x0010)  
	bool                                               Enabled;                                                    // 0x0018   (0x0001)  
	SDK_UNDEFINED(1,3992) /* EUAStatisMethod */        __um(StatisMethod);                                         // 0x0019   (0x0001)  
	bool                                               ExcludeSameTeam;                                            // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x001B   (0x0005)  MISSED
	TArray<FUAStatisParamInfo>                         Params;                                                     // 0x0020   (0x0010)  
	int32_t                                            MaxTimesInSecond;                                           // 0x0030   (0x0004)  
	int32_t                                            CutGroup;                                                   // 0x0034   (0x0004)  
	bool                                               ShouldCombine;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            Weight;                                                     // 0x003C   (0x0004)  
	float                                              CutTrendArgsOnConstant;                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FUACutTrendArgs>                            CutTrendArgsOnDistance;                                     // 0x0048   (0x0010)  
	TArray<FUACutTrendArgs>                            CutTrendArgsOnDeltaTime;                                    // 0x0058   (0x0010)  
	TArray<FUACutTrendArgs>                            CutTrendArgsOnEventValue;                                   // 0x0068   (0x0010)  
	FString                                            DescribeWord;                                               // 0x0078   (0x0010)  
	TArray<FUADescribeWordArgs>                        DescribeWordArgsList;                                       // 0x0088   (0x0010)  
	FString                                            CombinedDescribeWord;                                       // 0x0098   (0x0010)  
	TArray<FUADescribeWordArgs>                        CombinedDescribeWordArgsList;                               // 0x00A8   (0x0010)  
};

/// Struct /Script/UACommon.UAStatisTable
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FUAStatisTable : FTableRowBase
{ 
	FString                                            Describe;                                                   // 0x0008   (0x0010)  
	SDK_UNDEFINED(1,3993) /* EUAStatisMethod */        __um(StatisMethod);                                         // 0x0018   (0x0001)  
	bool                                               ExcludeSameTeam;                                            // 0x0019   (0x0001)  
	bool                                               ExcludeSameInst;                                            // 0x001A   (0x0001)  
	bool                                               RecordEvent;                                                // 0x001B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FUAStatisParamInfo>                         Params;                                                     // 0x0020   (0x0010)  
	int32_t                                            EventCount;                                                 // 0x0030   (0x0004)  
	bool                                               bNeedInit;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/UACommon.UAServiceTable
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUAServiceTable : FTableRowBase
{ 
	FString                                            InitContext;                                                // 0x0008   (0x0010)  
	FString                                            ResetContext;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UAModuleTable
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUAModuleTable : FTableRowBase
{ 
	FString                                            Context;                                                    // 0x0008   (0x0010)  
	FString                                            DefaultPanel;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UAModuleContextTable
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUAModuleContextTable : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            LevelPath;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UAGachaMapTable
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FUAGachaMapTable : FTableRowBase
{ 
	uint64_t                                           ItemId;                                                     // 0x0008   (0x0008)  
	uint32_t                                           WeaponId;                                                   // 0x0010   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0014   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UAVestBagGridTable
/// Size: 0x0110 (272 bytes) (0x000008 - 0x000110) align 8 MaxSize: 0x0110
struct FUAVestBagGridTable : FTableRowBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	uint32_t                                           Seperated;                                                  // 0x0018   (0x0004)  
	uint32_t                                           SizeX;                                                      // 0x001C   (0x0004)  
	uint32_t                                           SizeY;                                                      // 0x0020   (0x0004)  
	float                                              PosX;                                                       // 0x0024   (0x0004)  
	float                                              PosY;                                                       // 0x0028   (0x0004)  
	uint32_t                                           SizeX0;                                                     // 0x002C   (0x0004)  
	uint32_t                                           SizeY1;                                                     // 0x0030   (0x0004)  
	float                                              PosX2;                                                      // 0x0034   (0x0004)  
	float                                              PosY3;                                                      // 0x0038   (0x0004)  
	uint32_t                                           SizeX4;                                                     // 0x003C   (0x0004)  
	uint32_t                                           SizeY5;                                                     // 0x0040   (0x0004)  
	float                                              PosX6;                                                      // 0x0044   (0x0004)  
	float                                              PosY7;                                                      // 0x0048   (0x0004)  
	uint32_t                                           SizeX8;                                                     // 0x004C   (0x0004)  
	uint32_t                                           SizeY9;                                                     // 0x0050   (0x0004)  
	float                                              PosX10;                                                     // 0x0054   (0x0004)  
	float                                              PosY11;                                                     // 0x0058   (0x0004)  
	uint32_t                                           SizeX12;                                                    // 0x005C   (0x0004)  
	uint32_t                                           SizeY13;                                                    // 0x0060   (0x0004)  
	float                                              PosX14;                                                     // 0x0064   (0x0004)  
	float                                              PosY15;                                                     // 0x0068   (0x0004)  
	uint32_t                                           SizeX16;                                                    // 0x006C   (0x0004)  
	uint32_t                                           SizeY17;                                                    // 0x0070   (0x0004)  
	float                                              PosX18;                                                     // 0x0074   (0x0004)  
	float                                              PosY19;                                                     // 0x0078   (0x0004)  
	uint32_t                                           SizeX20;                                                    // 0x007C   (0x0004)  
	uint32_t                                           SizeY21;                                                    // 0x0080   (0x0004)  
	float                                              PosX22;                                                     // 0x0084   (0x0004)  
	float                                              PosY23;                                                     // 0x0088   (0x0004)  
	uint32_t                                           SizeX24;                                                    // 0x008C   (0x0004)  
	uint32_t                                           SizeY25;                                                    // 0x0090   (0x0004)  
	float                                              PosX26;                                                     // 0x0094   (0x0004)  
	float                                              PosY27;                                                     // 0x0098   (0x0004)  
	uint32_t                                           SizeX28;                                                    // 0x009C   (0x0004)  
	uint32_t                                           SizeY29;                                                    // 0x00A0   (0x0004)  
	float                                              PosX30;                                                     // 0x00A4   (0x0004)  
	float                                              PosY31;                                                     // 0x00A8   (0x0004)  
	uint32_t                                           SizeX32;                                                    // 0x00AC   (0x0004)  
	uint32_t                                           SizeY33;                                                    // 0x00B0   (0x0004)  
	float                                              PosX34;                                                     // 0x00B4   (0x0004)  
	float                                              PosY35;                                                     // 0x00B8   (0x0004)  
	uint32_t                                           SizeX36;                                                    // 0x00BC   (0x0004)  
	uint32_t                                           SizeY37;                                                    // 0x00C0   (0x0004)  
	float                                              PosX38;                                                     // 0x00C4   (0x0004)  
	float                                              PosY39;                                                     // 0x00C8   (0x0004)  
	uint32_t                                           SizeX40;                                                    // 0x00CC   (0x0004)  
	uint32_t                                           SizeY41;                                                    // 0x00D0   (0x0004)  
	float                                              PosX42;                                                     // 0x00D4   (0x0004)  
	float                                              PosY43;                                                     // 0x00D8   (0x0004)  
	uint32_t                                           SizeX44;                                                    // 0x00DC   (0x0004)  
	uint32_t                                           SizeY45;                                                    // 0x00E0   (0x0004)  
	float                                              PosX46;                                                     // 0x00E4   (0x0004)  
	float                                              PosY47;                                                     // 0x00E8   (0x0004)  
	uint32_t                                           SizeX48;                                                    // 0x00EC   (0x0004)  
	uint32_t                                           SizeY49;                                                    // 0x00F0   (0x0004)  
	float                                              PosX50;                                                     // 0x00F4   (0x0004)  
	float                                              PosY51;                                                     // 0x00F8   (0x0004)  
	uint32_t                                           SizeX52;                                                    // 0x00FC   (0x0004)  
	uint32_t                                           SizeY53;                                                    // 0x0100   (0x0004)  
	float                                              PosX54;                                                     // 0x0104   (0x0004)  
	float                                              PosY55;                                                     // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UABattleMapTable
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FUABattleMapTable : FTableRowBase
{ 
	FString                                            MapLevel;                                                   // 0x0008   (0x0010)  
	FString                                            MobileMapLevel;                                             // 0x0018   (0x0010)  
	uint32_t                                           ShowIndex;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0030   (0x0010)  
	FString                                            Picture;                                                    // 0x0040   (0x0010)  
	FString                                            desc;                                                       // 0x0050   (0x0010)  
	uint32_t                                           Time;                                                       // 0x0060   (0x0004)  
	uint32_t                                           DayStartTime;                                               // 0x0064   (0x0004)  
	uint32_t                                           MinPMC;                                                     // 0x0068   (0x0004)  
	uint32_t                                           MaxPMC;                                                     // 0x006C   (0x0004)  
	uint32_t                                           IsScavJoin;                                                 // 0x0070   (0x0004)  
	uint32_t                                           ScavJoinTimeBegin;                                          // 0x0074   (0x0004)  
	uint32_t                                           ScavJoinTimeEnd;                                            // 0x0078   (0x0004)  
	uint32_t                                           NormalBeginTime;                                            // 0x007C   (0x0004)  
	uint32_t                                           NormalBeginPersonNum;                                       // 0x0080   (0x0004)  
	uint32_t                                           LongTimeBeginTime;                                          // 0x0084   (0x0004)  
	uint32_t                                           LongTimeBeginPersonNum;                                     // 0x0088   (0x0004)  
	uint32_t                                           TimeoutTime;                                                // 0x008C   (0x0004)  
	uint32_t                                           SpawnAIPersonNum;                                           // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UAGlobalNumTable
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUAGlobalNumTable : FTableRowBase
{ 
	FText                                              Name;                                                       // 0x0008   (0x0018)  
	float                                              Val;                                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UABattleresultTable
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FUABattleresultTable : FTableRowBase
{ 
	uint32_t                                           DataID;                                                     // 0x0008   (0x0004)  
	uint32_t                                           AttributeType;                                              // 0x000C   (0x0004)  
	uint32_t                                           Proportion;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Describe;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UAItemContextMenuTable
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FUAItemContextMenuTable : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	uint32_t                                           DisplayIconID;                                              // 0x0020   (0x0004)  
	uint32_t                                           ShowIndex;                                                  // 0x0024   (0x0004)  
	FString                                            UseTip;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/UACommon.TextLocalizationPatch
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FTextLocalizationPatch
{ 
	FString                                            NativeCulture;                                              // 0x0000   (0x0010)  
	FString                                            Namespace;                                                  // 0x0010   (0x0010)  
	FString                                            Key;                                                        // 0x0020   (0x0010)  
	FString                                            NativeString;                                               // 0x0030   (0x0010)  
	TMap<FString, FString>                             LocalizedStrings;                                           // 0x0040   (0x0050)  
};

/// Struct /Script/UACommon.UAGunBoxConfig
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FUAGunBoxConfig
{ 
	int32_t                                            WeaponAssebleItemID;                                        // 0x0000   (0x0004)  
	int32_t                                            MagazineItemID;                                             // 0x0004   (0x0004)  
	int32_t                                            AmmoItemID;                                                 // 0x0008   (0x0004)  
	int32_t                                            AmmoNum;                                                    // 0x000C   (0x0004)  
	int32_t                                            Weight;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/UACommon.UAGunBoxTable
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000030) align 8 MaxSize: 0x0030
struct FUAGunBoxTable : FModeTableRowBase
{ 
	TArray<FUAGunBoxConfig>                            WeaponAsseblePool;                                          // 0x0020   (0x0010)  
};

/// Struct /Script/UACommon.UAPuppetOpenInventorySpawnConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUAPuppetOpenInventorySpawnConfig
{ 
	class UClass*                                      InventoryClass;                                             // 0x0000   (0x0008)  
	float                                              SpawnProbability;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UAPuppetOpenInventorySpawnConfigList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUAPuppetOpenInventorySpawnConfigList
{ 
	TArray<FUAPuppetOpenInventorySpawnConfig>          ConfigArray;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/UACommon.UAPuppetConfigTable
/// Size: 0x0080 (128 bytes) (0x000020 - 0x000080) align 8 MaxSize: 0x0080
struct FUAPuppetConfigTable : FModeTableRowBase
{ 
	float                                              ActivateDelayMin;                                           // 0x0020   (0x0004)  
	float                                              ActivateDelayMax;                                           // 0x0024   (0x0004)  
	int32_t                                            MaxLockNum;                                                 // 0x0028   (0x0004)  
	int32_t                                            MaxHitPoint;                                                // 0x002C   (0x0004)  
	TMap<int32_t, FUAPuppetOpenInventorySpawnConfigList> SpawnChance;                                              // 0x0030   (0x0050)  
};

/// Struct /Script/UACommon.UABloodstoneRewardConfig
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUABloodstoneRewardConfig
{ 
	int32_t                                            BloodCount;                                                 // 0x0000   (0x0004)  
	int32_t                                            AnnouncementID;                                             // 0x0004   (0x0004)  
};

/// Struct /Script/UACommon.UABloodstoneRewardTable
/// Size: 0x0038 (56 bytes) (0x000020 - 0x000038) align 8 MaxSize: 0x0038
struct FUABloodstoneRewardTable : FModeTableRowBase
{ 
	int32_t                                            MaxCharacterInteractCount;                                  // 0x0020   (0x0004)  
	float                                              InitAngle;                                                  // 0x0024   (0x0004)  
	TArray<FUABloodstoneRewardConfig>                  BloodCounts;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/UACommon.MissionClassConfigBase
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMissionClassConfigBase
{ 
	TArray<int32_t>                                    EnableSpecialIDs;                                           // 0x0000   (0x0010)  
	TArray<int32_t>                                    DisableSpecialIDs;                                          // 0x0010   (0x0010)  
	TArray<int32_t>                                    EnableDifficulties;                                         // 0x0020   (0x0010)  
	TArray<int32_t>                                    DisableDifficulties;                                        // 0x0030   (0x0010)  
};

/// Struct /Script/UACommon.MissionClassProbabilityConfig
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align 8 MaxSize: 0x0070
struct FMissionClassProbabilityConfig : FMissionClassConfigBase
{ 
	TWeakObjectPtr<class UMFMissionFlow*>              MissionFlowAsset;                                           // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	float                                              Probability;                                                // 0x0068   (0x0004)  
	bool                                               bIgnoreActivitiy;                                           // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/UACommon.ActivityResidentMissionConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FActivityResidentMissionConfig
{ 
	TArray<FMissionClassProbabilityConfig>             MissionList;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/UACommon.MissionClassWeightConfig
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align 8 MaxSize: 0x0070
struct FMissionClassWeightConfig : FMissionClassConfigBase
{ 
	TWeakObjectPtr<class UMFMissionFlow*>              MissionFlowAsset;                                           // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	int32_t                                            Weight;                                                     // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.ActivityRandomMissionConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FActivityRandomMissionConfig
{ 
	float                                              Probability;                                                // 0x0000   (0x0004)  
	int32_t                                            RandomTimes;                                                // 0x0004   (0x0004)  
	TArray<FMissionClassWeightConfig>                  MissionList;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/UACommon.ActivityMissionConfig
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align 8 MaxSize: 0x0090
struct FActivityMissionConfig : FMissionClassConfigBase
{ 
	FString                                            LevelName;                                                  // 0x0040   (0x0010)  
	FActivityResidentMissionConfig                     ResidentMission;                                            // 0x0050   (0x0010)  
	FActivityRandomMissionConfig                       RandomMission;                                              // 0x0060   (0x0018)  
	int32_t                                            MaxActivityTaskNum;                                         // 0x0078   (0x0004)  
	bool                                               bCloseDynamicMission;                                       // 0x007C   (0x0001)  
	bool                                               bCloseOtherActivities;                                      // 0x007D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	TArray<int32_t>                                    CloseOtherActivityIDs;                                      // 0x0080   (0x0010)  
};

/// Struct /Script/UACommon.UAModeActivityMissionTable
/// Size: 0x0070 (112 bytes) (0x000020 - 0x000070) align 8 MaxSize: 0x0070
struct FUAModeActivityMissionTable : FModeTableRowBase
{ 
	TMap<int32_t, FActivityMissionConfig>              ActivityMissionMap;                                         // 0x0020   (0x0050)  
};

/// Struct /Script/UACommon.DynamicResidentMissionConfig
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FDynamicResidentMissionConfig
{ 
	TArray<FMissionClassProbabilityConfig>             MissionList;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/UACommon.DynamicRandomMissionConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FDynamicRandomMissionConfig
{ 
	float                                              Probability;                                                // 0x0000   (0x0004)  
	int32_t                                            RandomTimes;                                                // 0x0004   (0x0004)  
	TArray<FMissionClassWeightConfig>                  MissionList;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/UACommon.GroupedDynamicRandomMissionConfigItem
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGroupedDynamicRandomMissionConfigItem
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	int32_t                                            RandomTimes;                                                // 0x0004   (0x0004)  
	TArray<FMissionClassWeightConfig>                  MissionList;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/UACommon.GroupedDynamicRandomMissionConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGroupedDynamicRandomMissionConfig
{ 
	float                                              Probability;                                                // 0x0000   (0x0004)  
	int32_t                                            RandomTimes;                                                // 0x0004   (0x0004)  
	TArray<FGroupedDynamicRandomMissionConfigItem>     GroupList;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/UACommon.UAModeDynamicMissionTable
/// Size: 0x0078 (120 bytes) (0x000020 - 0x000078) align 8 MaxSize: 0x0078
struct FUAModeDynamicMissionTable : FModeTableRowBase
{ 
	FString                                            LevelName;                                                  // 0x0020   (0x0010)  
	FDynamicResidentMissionConfig                      ResidentMission;                                            // 0x0030   (0x0010)  
	FDynamicRandomMissionConfig                        RandomMission;                                              // 0x0040   (0x0018)  
	FGroupedDynamicRandomMissionConfig                 GroupedRandomMission;                                       // 0x0058   (0x0018)  
	int32_t                                            MaxDynamicTaskNum;                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UALimitAreaPointConfigTable
/// Size: 0x0068 (104 bytes) (0x000020 - 0x000068) align 8 MaxSize: 0x0068
struct FUALimitAreaPointConfigTable : FModeTableRowBase
{ 
	FString                                            Name;                                                       // 0x0020   (0x0010)  
	bool                                               bForceFirstAreaUseSpecialCenter;                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FVector                                            SpecialCenter;                                              // 0x0034   (0x000C)  
	TArray<FRandomAreaPointStructData>                 RandomAreaPointWavePickArray;                               // 0x0040   (0x0010)  
	bool                                               bForceUseDefaultAreaPointArray;                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FVector>                                    DefaultAreaPointArray;                                      // 0x0058   (0x0010)  
};

/// Struct /Script/UACommon.QuestDistributerClassWithWeight
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FQuestDistributerClassWithWeight
{ 
	TSoftObjectPtr<class UClass*>                      QuestDistributerClass;                                      // 0x0000   (0x0028)  
	int32_t                                            Weight;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UACommon.ActivityQuestDistributer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FActivityQuestDistributer
{ 
	TArray<FQuestDistributerClassWithWeight>           ActivityQuestDistributers;                                  // 0x0000   (0x0010)  
};

/// Struct /Script/UACommon.UAModeQuestDistributerConfigTable
/// Size: 0x0098 (152 bytes) (0x000020 - 0x000098) align 8 MaxSize: 0x0098
struct FUAModeQuestDistributerConfigTable : FModeTableRowBase
{ 
	float                                              LoadDistributerProbability;                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FQuestDistributerClassWithWeight>           NeedLoadQuestDistributer;                                   // 0x0028   (0x0010)  
	int32_t                                            RandomTimes;                                                // 0x0038   (0x0004)  
	float                                              ActivityLoadDistributerProbability;                         // 0x003C   (0x0004)  
	TMap<int32_t, FActivityQuestDistributer>           ActivityNeedLoadQuestDistributer;                           // 0x0040   (0x0050)  
	int32_t                                            ActivityRandomTimes;                                        // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UAModeBigMapModuleConfigTable
/// Size: 0x0040 (64 bytes) (0x000020 - 0x000040) align 8 MaxSize: 0x0040
struct FUAModeBigMapModuleConfigTable : FModeTableRowBase
{ 
	SDK_UNDEFINED(16,3994) /* TArray<TSoftObjectPtr<UClass*>> */ __um(AdditionModules);                            // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,3995) /* TArray<TSoftObjectPtr<UClass*>> */ __um(RemoveModules);                              // 0x0030   (0x0010)  
};

/// Struct /Script/UACommon.UAScriptLevelTable
/// Size: 0x0040 (64 bytes) (0x000020 - 0x000040) align 8 MaxSize: 0x0040
struct FUAScriptLevelTable : FModeTableRowBase
{ 
	TArray<FString>                                    ScriptMaps;                                                 // 0x0020   (0x0010)  
	TArray<FString>                                    AdditionIgnores;                                            // 0x0030   (0x0010)  
};

/// Struct /Script/UACommon.UAModeLootConfigTable
/// Size: 0x0070 (112 bytes) (0x000020 - 0x000070) align 8 MaxSize: 0x0070
struct FUAModeLootConfigTable : FModeTableRowBase
{ 
	int32_t                                            LootID;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TWeakObjectPtr<class UDataTable*>                  LootDropSubTable;                                           // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	TArray<FString>                                    LootMaps;                                                   // 0x0050   (0x0010)  
	float                                              RoughSearchModifyScale;                                     // 0x0060   (0x0004)  
	float                                              DetailSearchModifyScale;                                    // 0x0064   (0x0004)  
	int32_t                                            AdditionalFastRecycleCount;                                 // 0x0068   (0x0004)  
	int32_t                                            AdditionalGashaCoinCount;                                   // 0x006C   (0x0004)  
};

/// Struct /Script/UACommon.UAPlayerStartGroupData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FUAPlayerStartGroupData
{ 
	int32_t                                            GroupIndex;                                                 // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,3996) /* EPlayerTeamType */        __um(StartPointType);                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	int32_t                                            BigGroup;                                                   // 0x0008   (0x0004)  
	int32_t                                            BigGroupPriority;                                           // 0x000C   (0x0004)  
	int32_t                                            SecondGroup;                                                // 0x0010   (0x0004)  
	int32_t                                            Priority;                                                   // 0x0014   (0x0004)  
	int32_t                                            Weight;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            EscapePreset;                                               // 0x0020   (0x0010)  
	int32_t                                            ExclusiveGroup;                                             // 0x0030   (0x0004)  
	int32_t                                            ExclusiveGroupWeight;                                       // 0x0034   (0x0004)  
};

/// Struct /Script/UACommon.UAAIStartGroupData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUAAIStartGroupData
{ 
	int32_t                                            GroupIndex;                                                 // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,3997) /* EPlayerTeamType */        __um(StartPointType);                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/UACommon.UAEscapeRandomWeightStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUAEscapeRandomWeightStruct
{ 
	int32_t                                            EscapePointID;                                              // 0x0000   (0x0004)  
	int32_t                                            Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/UACommon.UAEscapeRandomStruct
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FUAEscapeRandomStruct
{ 
	TArray<FUAEscapeRandomWeightStruct>                EscapePointIDs;                                             // 0x0000   (0x0010)  
	int32_t                                            RandomNum;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UACommon.UADelayedEvacuationStruct
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUADelayedEvacuationStruct
{ 
	int32_t                                            GameSeconds;                                                // 0x0000   (0x0004)  
	int32_t                                            Probability;                                                // 0x0004   (0x0004)  
	TArray<FUAEscapeRandomWeightStruct>                EscapePointIDs;                                             // 0x0008   (0x0010)  
	int32_t                                            RandomNum;                                                  // 0x0018   (0x0004)  
	int32_t                                            ReportID;                                                   // 0x001C   (0x0004)  
};

/// Struct /Script/UACommon.EscapePreset
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FEscapePreset
{ 
	int32_t                                            PresetIndex;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    ConstantEscapePointIDs;                                     // 0x0008   (0x0010)  
	TArray<int32_t>                                    RandomEscapePointIDs;                                       // 0x0018   (0x0010)  
	int32_t                                            RandomNum;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FUAEscapeRandomStruct>                      RandomArr;                                                  // 0x0030   (0x0010)  
	FUADelayedEvacuationStruct                         DelayedEvacuation;                                          // 0x0040   (0x0020)  
};

/// Struct /Script/UACommon.EscapeProbabilityReset
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FEscapeProbabilityReset
{ 
	float                                              OpenProbability;                                            // 0x0000   (0x0004)  
	float                                              ShowProbability;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/UACommon.AnomalyCountInGroup
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAnomalyCountInGroup
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x0008)  
	int32_t                                            MinCount;                                                   // 0x0008   (0x0004)  
	int32_t                                            MaxCount;                                                   // 0x000C   (0x0004)  
};

/// Struct /Script/UACommon.AnomalyWaveConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAnomalyWaveConfig
{ 
	float                                              WaveTimeStamp;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FAnomalyCountInGroup>                       AnomalyGroups;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/UACommon.EscapePointWaveConfig
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FEscapePointWaveConfig
{ 
	float                                              WaveTimeStamp;                                              // 0x0000   (0x0004)  
	bool                                               bOpenOrClose;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              MinDelaySeconds;                                            // 0x0008   (0x0004)  
	float                                              MaxDelaySeconds;                                            // 0x000C   (0x0004)  
	int32_t                                            MinSelectCount;                                             // 0x0010   (0x0004)  
	int32_t                                            MaxSelectCount;                                             // 0x0014   (0x0004)  
	TArray<int32_t>                                    EscapePointIDs;                                             // 0x0018   (0x0010)  
};

/// Struct /Script/UACommon.UAModeStartAndEscapeTable
/// Size: 0x01E0 (480 bytes) (0x000020 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FUAModeStartAndEscapeTable : FModeTableRowBase
{ 
	FString                                            LevelName;                                                  // 0x0020   (0x0010)  
	TArray<FString>                                    AdditionLevelName;                                          // 0x0030   (0x0010)  
	TArray<FUAPlayerStartGroupData>                    PlayerStart;                                                // 0x0040   (0x0010)  
	TArray<FUAAIStartGroupData>                        AIStartAddition;                                            // 0x0050   (0x0010)  
	TMap<FString, FEscapePreset>                       EscapePresetMap;                                            // 0x0060   (0x0050)  
	TArray<int32_t>                                    GlobalRandomEscapePointIDs;                                 // 0x00B0   (0x0010)  
	TMap<int32_t, int32_t>                             GlobalEscapePointProbabilityMap;                            // 0x00C0   (0x0050)  
	TMap<int32_t, FEscapeProbabilityReset>             EscapeProbabilityResetMap;                                  // 0x0110   (0x0050)  
	TMap<int32_t, int32_t>                             EscapeVolumeRemapping;                                      // 0x0160   (0x0050)  
	float                                              PMCCheckRadius;                                             // 0x01B0   (0x0004)  
	float                                              EnemyCheckRadius;                                           // 0x01B4   (0x0004)  
	float                                              SecondEnemyCheckRadius;                                     // 0x01B8   (0x0004)  
	float                                              TeamCheckRadius;                                            // 0x01BC   (0x0004)  
	TArray<FAnomalyWaveConfig>                         AnomalyWaveConfigs;                                         // 0x01C0   (0x0010)  
	TArray<FEscapePointWaveConfig>                     EscapeWaveConfigs;                                          // 0x01D0   (0x0010)  
};

/// Struct /Script/UACommon.UAGameModeTableRow
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FUAGameModeTableRow : FTableRowBase
{ 
	uint32_t                                           Index;                                                      // 0x0008   (0x0004)  
	uint32_t                                           MainModeID;                                                 // 0x000C   (0x0004)  
	FText                                              MainModeName;                                               // 0x0010   (0x0018)  
	uint32_t                                           SubModeID;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              SubModeName;                                                // 0x0030   (0x0018)  
	SDK_UNDEFINED(1,3998) /* EGameModeName */          __um(GameModeName);                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	TSoftObjectPtr<class UClass*>                      GameModeClass;                                              // 0x0050   (0x0028)  
	TSoftObjectPtr<class UClass*>                      GameStateClass;                                             // 0x0078   (0x0028)  
	bool                                               bShowKillCamBtn;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Struct /Script/UACommon.PanelProfilerStack
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPanelProfilerStack
{ 
	TArray<double>                                     theStack;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/UACommon.RichHyperlinkStyleRow
/// Size: 0x0548 (1352 bytes) (0x000008 - 0x000548) align 8 MaxSize: 0x0548
struct FRichHyperlinkStyleRow : FTableRowBase
{ 
	FHyperlinkStyle                                    LinkStyle;                                                  // 0x0008   (0x0540)  
};

#pragma pack(pop)


static_assert(sizeof(UAsyncTaskCopyFile) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAsyncTaskDownloadFile) == 0x00D8); // 216 bytes (0x000030 - 0x0000D8)
static_assert(sizeof(UBFLPlatformFile) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCAButtonWidget) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(UCACustomFixedBorder) == 0x0280); // 640 bytes (0x000270 - 0x000280)
static_assert(sizeof(UCAImage) == 0x0280); // 640 bytes (0x000270 - 0x000280)
static_assert(sizeof(UCASearchableComboBoxString) == 0x0ED0); // 3792 bytes (0x000130 - 0x000ED0)
static_assert(sizeof(UGeoSensitiveWidget) == 0x02B8); // 696 bytes (0x000290 - 0x0002B8)
static_assert(sizeof(UHttpHelper) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UHttpTask) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UImageLoader) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(AInputUtilActor) == 0x0328); // 808 bytes (0x000318 - 0x000328)
static_assert(sizeof(ULaunchHelper) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULoopedPanel) == 0x01B0); // 432 bytes (0x000158 - 0x0001B0)
static_assert(sizeof(FMapRuleConfig) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ALoosePointManager) == 0x0380); // 896 bytes (0x000318 - 0x000380)
static_assert(sizeof(UPosSensitiveWidget) == 0x02B0); // 688 bytes (0x000290 - 0x0002B0)
static_assert(sizeof(URichTextBlockInlineDecorator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AShowBtnOutlineHelper) == 0x0428); // 1064 bytes (0x000318 - 0x000428)
static_assert(sizeof(UShowTouch) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UStatUMGWidget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUASubmitBug) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UTinyHotfixFile) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTutorialModeInputProcessor) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UUABuglyHelper) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUAButtonWidget) == 0x0468); // 1128 bytes (0x000290 - 0x000468)
static_assert(sizeof(UUACharacterDefaultInventoryCompBase) == 0x02E0); // 736 bytes (0x000138 - 0x0002E0)
static_assert(sizeof(FItemInfoForRand) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UUACharacterAIRandomInventoryComponent) == 0x0388); // 904 bytes (0x0002E0 - 0x000388)
static_assert(sizeof(UUACharacterDefaultInventoryComp) == 0x0300); // 768 bytes (0x0002E0 - 0x000300)
static_assert(sizeof(FInitInventoryParams) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(USlicedInitParams) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FSceneCaptureConfig) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(UUACharacterPreviewComponent) == 0x0700); // 1792 bytes (0x0004B8 - 0x000700)
static_assert(sizeof(UUAClipImageWidget) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UUACommonConfigStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUACommonStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUADataTableManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUAEditableTextBox) == 0x0AE8); // 2792 bytes (0x000AD8 - 0x000AE8)
static_assert(sizeof(UUAFontMeasure) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UUAGridScroll) == 0x0940); // 2368 bytes (0x000920 - 0x000940)
static_assert(sizeof(UUAInventoryStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUAListView) == 0x0960); // 2400 bytes (0x000900 - 0x000960)
static_assert(sizeof(UUALocalizationStatic) == 0x0358); // 856 bytes (0x000028 - 0x000358)
static_assert(sizeof(UUAMultiLineEditableTextBox) == 0x0D68); // 3432 bytes (0x000D58 - 0x000D68)
static_assert(sizeof(UUAOverlay) == 0x0158); // 344 bytes (0x000158 - 0x000158)
static_assert(sizeof(UUAOverlaySlot) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UUAPanelProfiler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUAPhotoTakerCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUARedPointWidget) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(FHyperlinkClickCallLuaEventData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UUARichTextBlockHyperLinkDecorator) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UUATileView) == 0x0940); // 2368 bytes (0x000930 - 0x000940)
static_assert(sizeof(UUATreeView) == 0x0968); // 2408 bytes (0x000958 - 0x000968)
static_assert(sizeof(UUAWareHouseComponent) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(sizeof(UUMGHelperLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVideoManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FTaskDescription) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FKeyInputBlockingConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FCommonActionKeyNameConfTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FOperationSettingVersionTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FIconReferenceTable) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FWidgetReferenceTable) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FAuctionIconScaleOverrideConfTable) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FMagazineIconConfTable) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FItemIntervalTable) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FSystemUnlockTable) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FNumDistribute) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FLoosePoint) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FActiveLoosePoint) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FLootDetailTable) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FLootStaticPointDetailTable) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FMapStaticPointTable) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRookieTipTable) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRookieLimitTable) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRicochetTable) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FAliases) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAliasesTableMessage) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FLoosePointAliasesTable) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FMapLoosePoint) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FLoosePointMapMessage) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FLoosePointDetail) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FItemRenderShowSizeOverrideConf) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FItemCamOffsetOverrideConf) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FItemCornerIconConf) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FItemColorConf) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FActionTip) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FIniFileBackup) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FBuglyData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUAGameBigMapTraceConfigTable) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FUABiohazardHonorTitleConfig) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FUATacticalGearADSIconConfig) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FSteamCommentConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCARuleTypeNameTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FUAInventoryIconTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FUAFrontEndStageTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FUAHeroTemplateTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FUAGamePadVisibilityTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FUATutorialEventTable) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FUAAdviseInvPriorityTable) == 0x00C8); // 200 bytes (0x000008 - 0x0000C8)
static_assert(sizeof(FUAAIUniqueItemInfoTable) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FUAFactionMappingTable) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FUAFactionRelationTable) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FUAMultiModeWidgetTable) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FUATraceStyleTable) == 0x01F0); // 496 bytes (0x000008 - 0x0001F0)
static_assert(sizeof(FUATraceSceneStyleParams) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FUATraceNewMapStyleParams) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FUATraceDirectionalBarStyleParams) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FUANewTraceStyleTable) == 0x01D8); // 472 bytes (0x000008 - 0x0001D8)
static_assert(sizeof(FUATraceSceneRuleParams) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FUATraceNewMapRuleParams) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FUATraceDirectionalBarRuleParams) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FUANewTraceRuleTable) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FUAScanDeviceUIConfig) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FUANewTraceConfigTable) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FUATraceTargetTable) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FUALootDataInfosTable) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FUABrilliantTimeReplayTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FUASubTitleTextTable) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FUASubTitleVOTable) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FItemConfTableRowBPProxy) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FLootDropTableRowBPProxy) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FMapDetailTableRowBPProxy) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FUACaptureTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FUAEscapeInteractTextTable) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUAPlayerEscapeShowRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUAEscapeTextTableRow) == 0x0178); // 376 bytes (0x000008 - 0x000178)
static_assert(sizeof(FPanelLayerTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FPanelConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FServiceConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FModuleContextConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FModuleConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FUAGameBigMapModuleModeTable) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FLandMarkGuide) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FUAGameLandmarkTable) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FUAGameBigMapEffectTable) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FUALootPointInfo) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FUABattleQuickChat) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FUAGamePadMessageTable) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FUAGameHUDTable) == 0x00E8); // 232 bytes (0x000008 - 0x0000E8)
static_assert(sizeof(FUATaskTypeTable) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FUASettleFilter) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FUASettleTipsConfigTable) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FUASettleBGMConfig) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FUASettleUIConfigTable) == 0x00E8); // 232 bytes (0x000008 - 0x0000E8)
static_assert(sizeof(FUABattleEventPoint) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FUABattleEventPointsTable) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUAStatisParamInfo) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FUACutTrendArgs) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FUADescribeWordArgs) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FUABattleEventTable) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FUAStatisTable) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FUAServiceTable) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUAModuleTable) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUAModuleContextTable) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUAGachaMapTable) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FUAVestBagGridTable) == 0x0110); // 272 bytes (0x000008 - 0x000110)
static_assert(sizeof(FUABattleMapTable) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FUAGlobalNumTable) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUABattleresultTable) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUAItemContextMenuTable) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FTextLocalizationPatch) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FUAGunBoxConfig) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FUAGunBoxTable) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FUAPuppetOpenInventorySpawnConfig) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUAPuppetOpenInventorySpawnConfigList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUAPuppetConfigTable) == 0x0080); // 128 bytes (0x000020 - 0x000080)
static_assert(sizeof(FUABloodstoneRewardConfig) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUABloodstoneRewardTable) == 0x0038); // 56 bytes (0x000020 - 0x000038)
static_assert(sizeof(FMissionClassConfigBase) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMissionClassProbabilityConfig) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(FActivityResidentMissionConfig) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMissionClassWeightConfig) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(FActivityRandomMissionConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FActivityMissionConfig) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(FUAModeActivityMissionTable) == 0x0070); // 112 bytes (0x000020 - 0x000070)
static_assert(sizeof(FDynamicResidentMissionConfig) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDynamicRandomMissionConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGroupedDynamicRandomMissionConfigItem) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGroupedDynamicRandomMissionConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUAModeDynamicMissionTable) == 0x0078); // 120 bytes (0x000020 - 0x000078)
static_assert(sizeof(FUALimitAreaPointConfigTable) == 0x0068); // 104 bytes (0x000020 - 0x000068)
static_assert(sizeof(FQuestDistributerClassWithWeight) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FActivityQuestDistributer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUAModeQuestDistributerConfigTable) == 0x0098); // 152 bytes (0x000020 - 0x000098)
static_assert(sizeof(FUAModeBigMapModuleConfigTable) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FUAScriptLevelTable) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FUAModeLootConfigTable) == 0x0070); // 112 bytes (0x000020 - 0x000070)
static_assert(sizeof(FUAPlayerStartGroupData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FUAAIStartGroupData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUAEscapeRandomWeightStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUAEscapeRandomStruct) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUADelayedEvacuationStruct) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEscapePreset) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FEscapeProbabilityReset) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnomalyCountInGroup) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnomalyWaveConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEscapePointWaveConfig) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FUAModeStartAndEscapeTable) == 0x01E0); // 480 bytes (0x000020 - 0x0001E0)
static_assert(sizeof(FUAGameModeTableRow) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(FPanelProfilerStack) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRichHyperlinkStyleRow) == 0x0548); // 1352 bytes (0x000008 - 0x000548)
static_assert(offsetof(UCAButtonWidget, _button) == 0x02A0);
static_assert(offsetof(UCAImage, TemplateMaterail) == 0x0270);
static_assert(offsetof(UCAImage, DynamicTemplateMaterial) == 0x0278);
static_assert(offsetof(UCASearchableComboBoxString, DefaultOptions) == 0x0130);
static_assert(offsetof(UCASearchableComboBoxString, SelectedOption) == 0x0140);
static_assert(offsetof(UCASearchableComboBoxString, WidgetStyle) == 0x0150);
static_assert(offsetof(UCASearchableComboBoxString, ItemStyle) == 0x0570);
static_assert(offsetof(UCASearchableComboBoxString, ContentPadding) == 0x0DA8);
static_assert(offsetof(UCASearchableComboBoxString, Font) == 0x0DC0);
static_assert(offsetof(UCASearchableComboBoxString, ForegroundColor) == 0x0E20);
static_assert(offsetof(UHttpTask, ScreenNotifyName) == 0x0068);
static_assert(offsetof(UHttpTask, LuaNotifyName) == 0x0078);
static_assert(offsetof(UImageLoader, Texture) == 0x0058);
static_assert(offsetof(ULoopedPanel, SlotPadding) == 0x0160);
static_assert(offsetof(ALoosePointManager, LoosePointMapMessageTable) == 0x0318);
static_assert(offsetof(ALoosePointManager, AliasesTables) == 0x0320);
static_assert(offsetof(ALoosePointManager, MapLootTable) == 0x0328);
static_assert(offsetof(ALoosePointManager, LootDetailTable) == 0x0330);
static_assert(offsetof(ALoosePointManager, LoosePointsTable) == 0x0338);
static_assert(offsetof(ALoosePointManager, LoosePointsDetailTable) == 0x0340);
static_assert(offsetof(ALoosePointManager, StaticContainersTable) == 0x0348);
static_assert(offsetof(ALoosePointManager, LooseRuleConfig) == 0x0360);
static_assert(offsetof(AShowBtnOutlineHelper, TheOutlineMaterial) == 0x0318);
static_assert(offsetof(AShowBtnOutlineHelper, BtnOriginFSlateBrush) == 0x0378);
static_assert(offsetof(AShowBtnOutlineHelper, BtnOriginAlpha) == 0x03C8);
static_assert(offsetof(UUAButtonWidget, normalTxtShowColor) == 0x0298);
static_assert(offsetof(UUAButtonWidget, pressTxtShowColor) == 0x02A8);
static_assert(offsetof(UUAButtonWidget, normalShadowOffect) == 0x02B8);
static_assert(offsetof(UUAButtonWidget, pressShadowOffect) == 0x02C0);
static_assert(offsetof(UUAButtonWidget, _button) == 0x0358);
static_assert(offsetof(UUAButtonWidget, _imageNormal) == 0x0360);
static_assert(offsetof(UUAButtonWidget, _imagePress) == 0x0368);
static_assert(offsetof(UUAButtonWidget, _imageHover) == 0x0370);
static_assert(offsetof(UUAButtonWidget, _imageGray) == 0x0378);
static_assert(offsetof(UUAButtonWidget, _textNormal) == 0x0380);
static_assert(offsetof(UUAButtonWidget, _textPress) == 0x0388);
static_assert(offsetof(UUAButtonWidget, _textHover) == 0x0390);
static_assert(offsetof(UUAButtonWidget, _textGray) == 0x0398);
static_assert(offsetof(UUAButtonWidget, _imageNormalSlot) == 0x03A0);
static_assert(offsetof(UUAButtonWidget, _imagePressSlot) == 0x03A8);
static_assert(offsetof(UUAButtonWidget, _imageHoverSlot) == 0x03B0);
static_assert(offsetof(UUAButtonWidget, _imageGraySlot) == 0x03B8);
static_assert(offsetof(UUAButtonWidget, _textNormalSlot) == 0x03C0);
static_assert(offsetof(UUAButtonWidget, _textPressSlot) == 0x03C8);
static_assert(offsetof(UUAButtonWidget, _textHoverSlot) == 0x03D0);
static_assert(offsetof(UUAButtonWidget, _textGraySlot) == 0x03D8);
static_assert(offsetof(UUACharacterDefaultInventoryCompBase, PlayerItemIdtoInventoryMap) == 0x01A8);
static_assert(offsetof(UUACharacterDefaultInventoryCompBase, SlicedInitParams) == 0x01F8);
static_assert(offsetof(UUACharacterDefaultInventoryCompBase, InventoryGiveComponent) == 0x0200);
static_assert(offsetof(UUACharacterDefaultInventoryCompBase, CachedDropItems) == 0x0220);
static_assert(offsetof(UUACharacterDefaultInventoryCompBase, CacheInventoryValues) == 0x0230);
static_assert(offsetof(FItemInfoForRand, SuitItemsInfo) == 0x0000);
static_assert(offsetof(UUACharacterAIRandomInventoryComponent, InitWeapon) == 0x02F8);
static_assert(offsetof(UUACharacterAIRandomInventoryComponent, SuitArray) == 0x0358);
static_assert(offsetof(UUACharacterAIRandomInventoryComponent, SuitArrayNoRandomTest) == 0x0368);
static_assert(offsetof(UUACharacterAIRandomInventoryComponent, InventoryInUsing) == 0x0378);
static_assert(offsetof(UUACharacterDefaultInventoryComp, StandAloneAvatarArray) == 0x02E8);
static_assert(offsetof(FInitInventoryParams, item) == 0x0000);
static_assert(offsetof(FInitInventoryParams, ParentInventory) == 0x0008);
static_assert(offsetof(USlicedInitParams, InitEquipmentParamsList) == 0x0040);
static_assert(offsetof(USlicedInitParams, InitItemParamsList) == 0x0050);
static_assert(offsetof(FSceneCaptureConfig, CameraTransform) == 0x0000);
static_assert(offsetof(FSceneCaptureConfig, TextureTarget) == 0x0038);
static_assert(offsetof(FSceneCaptureConfig, Light_Rifle_Male) == 0x0048);
static_assert(offsetof(FSceneCaptureConfig, Light_Pistol_Male) == 0x0058);
static_assert(offsetof(FSceneCaptureConfig, Light_Melee_Male) == 0x0068);
static_assert(offsetof(FSceneCaptureConfig, Light_Rifle_Female) == 0x0078);
static_assert(offsetof(FSceneCaptureConfig, Light_Pistol_Female) == 0x0088);
static_assert(offsetof(FSceneCaptureConfig, Light_Melee_Female) == 0x0098);
static_assert(offsetof(UUACharacterPreviewComponent, CaptureMaterialParameterCollection) == 0x04B8);
static_assert(offsetof(UUACharacterPreviewComponent, HairSpecularLight) == 0x04C0);
static_assert(offsetof(UUACharacterPreviewComponent, SceneCaptureConfigs) == 0x04D0);
static_assert(offsetof(UUACharacterPreviewComponent, CaptureLightSets) == 0x0520);
static_assert(offsetof(UUACharacterPreviewComponent, CaptureCharacterFacialSequenceName) == 0x0528);
static_assert(offsetof(UUACharacterPreviewComponent, BadgeVelcroAsset) == 0x0578);
static_assert(offsetof(UUACharacterPreviewComponent, CaptureCharacterSequenceName) == 0x05A0);
static_assert(offsetof(UUACharacterPreviewComponent, PreviewCharacterFPTag) == 0x05F0);
static_assert(offsetof(UUACharacterPreviewComponent, BadgeVelcroAttachBoneTag) == 0x05F8);
static_assert(offsetof(UUACharacterPreviewComponent, BadgeAttachBoneTag) == 0x0600);
static_assert(offsetof(UUACharacterPreviewComponent, CurCaptureSceneName) == 0x0608);
static_assert(offsetof(UUACharacterPreviewComponent, CacheGestureMontage) == 0x0620);
static_assert(offsetof(UUACharacterPreviewComponent, BadgeMeshComponent) == 0x0638);
static_assert(offsetof(UUACharacterPreviewComponent, BadgeVelcroMeshComponent) == 0x0640);
static_assert(offsetof(UUACharacterPreviewComponent, CaptureLight) == 0x0668);
static_assert(offsetof(UUACharacterPreviewComponent, AnimNotifyConfig) == 0x0670);
static_assert(offsetof(UUAFontMeasure, ExtraInfo) == 0x0040);
static_assert(offsetof(UUAListView, ClickAudioEvents) == 0x0908);
static_assert(offsetof(UUARedPointWidget, RedPointType) == 0x0290);
static_assert(offsetof(FHyperlinkClickCallLuaEventData, ModuleName) == 0x0000);
static_assert(offsetof(FHyperlinkClickCallLuaEventData, EventName) == 0x0010);
static_assert(offsetof(UUARichTextBlockHyperLinkDecorator, HyperlinkSet) == 0x0038);
static_assert(offsetof(UUARichTextBlockHyperLinkDecorator, LuaEventDataArray) == 0x0040);
static_assert(offsetof(UUARichTextBlockHyperLinkDecorator, LuaEventDataId) == 0x0050);
static_assert(offsetof(UUATileView, ClickAudioEvents) == 0x0930);
static_assert(offsetof(UUATreeView, ClickAudioEvents) == 0x0958);
static_assert(offsetof(UUAWareHouseComponent, DefaulWareHouseInventory) == 0x0100);
static_assert(offsetof(FTaskDescription, ETag) == 0x0000);
static_assert(offsetof(FCommonActionKeyNameConfTableRow, ActionName) == 0x0010);
static_assert(offsetof(FCommonActionKeyNameConfTableRow, OperationName) == 0x0028);
static_assert(offsetof(FCommonActionKeyNameConfTableRow, KeyDescribeName) == 0x0048);
static_assert(offsetof(FCommonActionKeyNameConfTableRow, KeyTypeName) == 0x0068);
static_assert(offsetof(FCommonActionKeyNameConfTableRow, ShowModeList) == 0x0088);
static_assert(offsetof(FCommonActionKeyNameConfTableRow, HideModeList) == 0x0098);
static_assert(offsetof(FOperationSettingVersionTableRow, VersionUpgradeTip) == 0x0010);
static_assert(offsetof(FIconReferenceTable, IconRef) == 0x0008);
static_assert(offsetof(FWidgetReferenceTable, WidgetClass) == 0x0008);
static_assert(offsetof(FItemIntervalTable, item_id_interval_map) == 0x0010);
static_assert(offsetof(FActiveLoosePoint, LoosePoint) == 0x0008);
static_assert(offsetof(FLootDetailTable, Count) == 0x0010);
static_assert(offsetof(FLootDetailTable, LoosePoints) == 0x0020);
static_assert(offsetof(FLootDetailTable, FixedLoosePoints) == 0x0030);
static_assert(offsetof(FLootDetailTable, ActivateLoosePoints) == 0x0040);
static_assert(offsetof(FLootStaticPointDetailTable, desc) == 0x0010);
static_assert(offsetof(FMapStaticPointTable, PointName) == 0x0018);
static_assert(offsetof(FMapStaticPointTable, Transform) == 0x0030);
static_assert(offsetof(FMapStaticPointTable, InvClass) == 0x0068);
static_assert(offsetof(FMapStaticPointTable, Comments) == 0x0078);
static_assert(offsetof(FRookieTipTable, Text) == 0x0010);
static_assert(offsetof(FRookieTipTable, listen_action) == 0x0028);
static_assert(offsetof(FRookieTipTable, next_ids) == 0x0038);
static_assert(offsetof(FRookieTipTable, sound_name) == 0x0050);
static_assert(offsetof(FRookieTipTable, exec_action) == 0x0068);
static_assert(offsetof(FRookieTipTable, face_paint_ids) == 0x0078);
static_assert(offsetof(FRookieLimitTable, sys_id_changes) == 0x0010);
static_assert(offsetof(FAliasesTableMessage, AliasesTable) == 0x0000);
static_assert(offsetof(FAliasesTableMessage, LoosePointMessages) == 0x0050);
static_assert(offsetof(FLoosePointAliasesTable, LinkLoosePointDetailID) == 0x0008);
static_assert(offsetof(FLoosePointAliasesTable, AliasesTableMessage) == 0x0010);
static_assert(offsetof(FMapLoosePoint, PointName) == 0x0010);
static_assert(offsetof(FMapLoosePoint, Root) == 0x0020);
static_assert(offsetof(FMapLoosePoint, Comments) == 0x0058);
static_assert(offsetof(FMapLoosePoint, RandomPos) == 0x0068);
static_assert(offsetof(FMapLoosePoint, LinkLoosePointDetailID) == 0x0078);
static_assert(offsetof(FLoosePointMapMessage, SortLoosePoints) == 0x0010);
static_assert(offsetof(FLoosePointDetail, desc) == 0x0010);
static_assert(offsetof(FLoosePointDetail, LoosePoints) == 0x0020);
static_assert(offsetof(FItemCamOffsetOverrideConf, Offset) == 0x000C);
static_assert(offsetof(FItemCamOffsetOverrideConf, overrideRotator) == 0x001C);
static_assert(offsetof(FItemCornerIconConf, TypeName) == 0x0008);
static_assert(offsetof(FItemCornerIconConf, icon) == 0x0018);
static_assert(offsetof(FItemColorConf, Color) == 0x0008);
static_assert(offsetof(FItemColorConf, SupportTypes) == 0x0018);
static_assert(offsetof(FItemColorConf, IgnoreTypes) == 0x0028);
static_assert(offsetof(FItemColorConf, Rarity) == 0x0038);
static_assert(offsetof(FActionTip, ActionTip) == 0x0000);
static_assert(offsetof(FActionTip, ActionName) == 0x0010);
static_assert(offsetof(FIniFileBackup, IniName) == 0x0000);
static_assert(offsetof(FIniFileBackup, ClassesReloaded) == 0x0010);
static_assert(offsetof(FBuglyData, URL) == 0x0000);
static_assert(offsetof(FBuglyData, Time) == 0x0010);
static_assert(offsetof(FUAGameBigMapTraceConfigTable, WorldLocation) == 0x0010);
static_assert(offsetof(FUABiohazardHonorTitleConfig, HonorTitleName) == 0x0010);
static_assert(offsetof(FUABiohazardHonorTitleConfig, HonorTitleDescription) == 0x0020);
static_assert(offsetof(FUABiohazardHonorTitleConfig, PropertyName) == 0x0038);
static_assert(offsetof(FUATacticalGearADSIconConfig, NormalIconKey) == 0x0008);
static_assert(offsetof(FUATacticalGearADSIconConfig, ClickIconKey) == 0x0018);
static_assert(offsetof(FUATacticalGearADSIconConfig, DisableIconKey) == 0x0028);
static_assert(offsetof(FSteamCommentConfTableRow, desc) == 0x0010);
static_assert(offsetof(FCARuleTypeNameTableRow, Describe) == 0x0008);
static_assert(offsetof(FUAInventoryIconTableRow, Describe) == 0x0008);
static_assert(offsetof(FUAInventoryIconTableRow, SketchIconPath) == 0x0020);
static_assert(offsetof(FUAInventoryIconTableRow, HeroIconPath) == 0x0038);
static_assert(offsetof(FUAFrontEndStageTableRow, CameraTag) == 0x0010);
static_assert(offsetof(FUAFrontEndStageTableRow, SequenceTag) == 0x0020);
static_assert(offsetof(FUAFrontEndStageTableRow, CameraStartFocus) == 0x0038);
static_assert(offsetof(FUAFrontEndStageTableRow, CameraEndFocus) == 0x0048);
static_assert(offsetof(FUAFrontEndStageTableRow, Comment) == 0x0060);
static_assert(offsetof(FUAHeroTemplateTableRow, OptionalInvPackageIDs) == 0x0010);
static_assert(offsetof(FUAHeroTemplateTableRow, PerkList) == 0x0020);
static_assert(offsetof(FUAHeroTemplateTableRow, HeroIconPath) == 0x0048);
static_assert(offsetof(FUAGamePadVisibilityTableRow, WidgetName) == 0x0010);
static_assert(offsetof(FUAGamePadVisibilityTableRow, SettingKey) == 0x0020);
static_assert(offsetof(FUATutorialEventTable, EventName) == 0x0008);
static_assert(offsetof(FUATutorialEventTable, ExtraParaText1) == 0x0028);
static_assert(offsetof(FUATutorialEventTable, ExtraParaText2) == 0x0040);
static_assert(offsetof(FUATutorialEventTable, ExtraParaText3) == 0x0058);
static_assert(offsetof(FUAAdviseInvPriorityTable, characterState) == 0x0008);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType1) == 0x0018);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType2) == 0x0028);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType3) == 0x0038);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType4) == 0x0048);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType5) == 0x0058);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType6) == 0x0068);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType7) == 0x0078);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType8) == 0x0088);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType9) == 0x0098);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvType10) == 0x00A8);
static_assert(offsetof(FUAAdviseInvPriorityTable, AdviseInvTypeEnd) == 0x00B8);
static_assert(offsetof(FUAMultiModeWidgetTable, Name) == 0x0010);
static_assert(offsetof(FUAMultiModeWidgetTable, sysIds) == 0x0028);
static_assert(offsetof(FUATraceStyleTable, Annotation) == 0x0010);
static_assert(offsetof(FUATraceStyleTable, TemplateUMG_Resource) == 0x0020);
static_assert(offsetof(FUATraceStyleTable, Image_Circle_Color_Normal) == 0x0058);
static_assert(offsetof(FUATraceStyleTable, Image_Circle_Color_Teamate) == 0x0080);
static_assert(offsetof(FUATraceStyleTable, Image_Circle_Color_Enemy) == 0x00A8);
static_assert(offsetof(FUATraceStyleTable, Image_BG_Path) == 0x00D0);
static_assert(offsetof(FUATraceStyleTable, Image_BG_Color_Normal) == 0x00E0);
static_assert(offsetof(FUATraceStyleTable, Image_BG_Color_Teamate) == 0x0108);
static_assert(offsetof(FUATraceStyleTable, Image_BG_Color_Enemy) == 0x0130);
static_assert(offsetof(FUATraceStyleTable, Image_Icon_Path) == 0x0158);
static_assert(offsetof(FUATraceStyleTable, Image_Icon_Color_Normal) == 0x0168);
static_assert(offsetof(FUATraceStyleTable, Image_Icon_Color_Teamate) == 0x0190);
static_assert(offsetof(FUATraceStyleTable, Image_Icon_Color_Enemy) == 0x01B8);
static_assert(offsetof(FUATraceStyleTable, Params) == 0x01E0);
static_assert(offsetof(FUATraceSceneStyleParams, SceneUMGType) == 0x0000);
static_assert(offsetof(FUATraceSceneStyleParams, Params) == 0x0058);
static_assert(offsetof(FUATraceNewMapStyleParams, UMGType) == 0x0000);
static_assert(offsetof(FUATraceNewMapStyleParams, AreaColor) == 0x0030);
static_assert(offsetof(FUATraceNewMapStyleParams, DetailBoardType) == 0x0048);
static_assert(offsetof(FUATraceNewMapStyleParams, Params) == 0x0060);
static_assert(offsetof(FUATraceDirectionalBarStyleParams, HighlightAniName) == 0x0000);
static_assert(offsetof(FUATraceDirectionalBarStyleParams, Params) == 0x0018);
static_assert(offsetof(FUANewTraceStyleTable, Annotation) == 0x0008);
static_assert(offsetof(FUANewTraceStyleTable, Color) == 0x0018);
static_assert(offsetof(FUANewTraceStyleTable, MarkIconResource) == 0x0040);
static_assert(offsetof(FUANewTraceStyleTable, BackgroundResource) == 0x0058);
static_assert(offsetof(FUANewTraceStyleTable, SubUMGType) == 0x0070);
static_assert(offsetof(FUANewTraceStyleTable, SceneStyleParams) == 0x0098);
static_assert(offsetof(FUANewTraceStyleTable, NewMapStyleParams) == 0x0100);
static_assert(offsetof(FUANewTraceStyleTable, DirectionalBarStyleParams) == 0x01B0);
static_assert(offsetof(FUANewTraceRuleTable, SceneRuleParams) == 0x000C);
static_assert(offsetof(FUANewTraceRuleTable, NewMapRuleParams) == 0x0018);
static_assert(offsetof(FUANewTraceRuleTable, DirectionalBarRuleParams) == 0x0024);
static_assert(offsetof(FUAScanDeviceUIConfig, UISize) == 0x0008);
static_assert(offsetof(FUAScanDeviceUIConfig, UIOffset) == 0x0010);
static_assert(offsetof(FUANewTraceConfigTable, TraceRuleRowName) == 0x0010);
static_assert(offsetof(FUANewTraceConfigTable, TraceTitle) == 0x0030);
static_assert(offsetof(FUANewTraceConfigTable, TraceDesc) == 0x0048);
static_assert(offsetof(FUANewTraceConfigTable, TargetTitle) == 0x0060);
static_assert(offsetof(FUANewTraceConfigTable, TargetDesc) == 0x0078);
static_assert(offsetof(FUATraceTargetTable, TargetTitle) == 0x0010);
static_assert(offsetof(FUATraceTargetTable, TargetDesc) == 0x0028);
static_assert(offsetof(FUATraceTargetTable, TraceTitle) == 0x0048);
static_assert(offsetof(FUATraceTargetTable, TraceDesc) == 0x0060);
static_assert(offsetof(FUATraceTargetTable, AnimName) == 0x0078);
static_assert(offsetof(FUALootDataInfosTable, Description) == 0x0010);
static_assert(offsetof(FUALootDataInfosTable, LootPointIcon) == 0x0028);
static_assert(offsetof(FUABrilliantTimeReplayTableRow, MissionFlow) == 0x0010);
static_assert(offsetof(FUASubTitleTextTable, Text) == 0x0010);
static_assert(offsetof(FUASubTitleVOTable, SoundResource) == 0x0010);
static_assert(offsetof(FUASubTitleVOTable, SoundType) == 0x0024);
static_assert(offsetof(FItemConfTableRowBPProxy, Name) == 0x0010);
static_assert(offsetof(FItemConfTableRowBPProxy, ShortName) == 0x0020);
static_assert(offsetof(FItemConfTableRowBPProxy, Describe) == 0x0038);
static_assert(offsetof(FItemConfTableRowBPProxy, pickup_sound) == 0x0058);
static_assert(offsetof(FItemConfTableRowBPProxy, use_sound) == 0x0068);
static_assert(offsetof(FItemConfTableRowBPProxy, drop_sound) == 0x0078);
static_assert(offsetof(FItemConfTableRowBPProxy, RejectSlot) == 0x00B0);
static_assert(offsetof(FLootDropTableRowBPProxy, desc) == 0x0010);
static_assert(offsetof(FLootDropTableRowBPProxy, ItemNum) == 0x0030);
static_assert(offsetof(FLootDropTableRowBPProxy, SubItemTable) == 0x0040);
static_assert(offsetof(FLootDropTableRowBPProxy, LootPointWhite) == 0x0068);
static_assert(offsetof(FLootDropTableRowBPProxy, LootPointBlack) == 0x0078);
static_assert(offsetof(FLootDropTableRowBPProxy, Describe) == 0x0088);
static_assert(offsetof(FMapDetailTableRowBPProxy, map_level) == 0x0010);
static_assert(offsetof(FMapDetailTableRowBPProxy, mobile_map_level) == 0x0020);
static_assert(offsetof(FMapDetailTableRowBPProxy, Name) == 0x0030);
static_assert(offsetof(FMapDetailTableRowBPProxy, level_path) == 0x0040);
static_assert(offsetof(FMapDetailTableRowBPProxy, Picture) == 0x0050);
static_assert(offsetof(FMapDetailTableRowBPProxy, desc) == 0x0060);
static_assert(offsetof(FMapDetailTableRowBPProxy, MapSize) == 0x0070);
static_assert(offsetof(FMapDetailTableRowBPProxy, SampleScenePoints) == 0x0078);
static_assert(offsetof(FMapDetailTableRowBPProxy, SampleMapPoints) == 0x0088);
static_assert(offsetof(FUAEscapeInteractTextTable, InteractText) == 0x0010);
static_assert(offsetof(FUAPlayerEscapeShowRow, PCArr) == 0x0018);
static_assert(offsetof(FUAEscapeTextTableRow, EscapeName) == 0x0010);
static_assert(offsetof(FUAEscapeTextTableRow, ConditionDescription) == 0x0028);
static_assert(offsetof(FUAEscapeTextTableRow, ConditionDescShort) == 0x0040);
static_assert(offsetof(FUAEscapeTextTableRow, ConditionPassText) == 0x0058);
static_assert(offsetof(FUAEscapeTextTableRow, EscapeDescription) == 0x0070);
static_assert(offsetof(FUAEscapeTextTableRow, RemainTimeText) == 0x0088);
static_assert(offsetof(FUAEscapeTextTableRow, AlreadyFailText) == 0x00A0);
static_assert(offsetof(FUAEscapeTextTableRow, PersonHitContent) == 0x00C0);
static_assert(offsetof(FUAEscapeTextTableRow, GlobalHitContent) == 0x00D8);
static_assert(offsetof(FUAEscapeTextTableRow, GlobalCloseHitContent) == 0x00F0);
static_assert(offsetof(FUAEscapeTextTableRow, Location) == 0x0108);
static_assert(offsetof(FUAEscapeTextTableRow, GlobalLeftTimeHitContent_OpenEscape) == 0x0118);
static_assert(offsetof(FUAEscapeTextTableRow, GlobalLeftTimeHitContent_CloseEscape) == 0x0130);
static_assert(offsetof(FUAEscapeTextTableRow, CostInventoryInfo) == 0x0150);
static_assert(offsetof(FPanelLayerTableRow, LayerName) == 0x0008);
static_assert(offsetof(FPanelConfTableRow, Name) == 0x0008);
static_assert(offsetof(FPanelConfTableRow, OwnerModule) == 0x0018);
static_assert(offsetof(FPanelConfTableRow, AssetMobileName) == 0x0028);
static_assert(offsetof(FPanelConfTableRow, LayerName) == 0x0038);
static_assert(offsetof(FPanelConfTableRow, OwnerPanel) == 0x0048);
static_assert(offsetof(FServiceConfTableRow, Name) == 0x0008);
static_assert(offsetof(FServiceConfTableRow, InitContext) == 0x0018);
static_assert(offsetof(FServiceConfTableRow, ResetContext) == 0x0028);
static_assert(offsetof(FServiceConfTableRow, desc) == 0x0038);
static_assert(offsetof(FServiceConfTableRow, ServiceType) == 0x0048);
static_assert(offsetof(FModuleContextConfTableRow, Name) == 0x0008);
static_assert(offsetof(FModuleContextConfTableRow, LevelPath) == 0x0018);
static_assert(offsetof(FModuleContextConfTableRow, desc) == 0x0028);
static_assert(offsetof(FModuleConfTableRow, Name) == 0x0008);
static_assert(offsetof(FModuleConfTableRow, Context) == 0x0018);
static_assert(offsetof(FModuleConfTableRow, desc) == 0x0028);
static_assert(offsetof(FUAGameBigMapModuleModeTable, BigMapModule) == 0x0008);
static_assert(offsetof(FUAGameBigMapModuleModeTable, DisplayName) == 0x0030);
static_assert(offsetof(FLandMarkGuide, GuideImages) == 0x0000);
static_assert(offsetof(FLandMarkGuide, GuideDescription) == 0x0010);
static_assert(offsetof(FLandMarkGuide, MediaSource) == 0x0020);
static_assert(offsetof(FLandMarkGuide, AdditionalInfoURL) == 0x0050);
static_assert(offsetof(FLandMarkGuide, AdditionalInfoURLOverseas) == 0x0060);
static_assert(offsetof(FUAGameLandmarkTable, LandMarkName) == 0x0010);
static_assert(offsetof(FUAGameLandmarkTable, WorldLocation) == 0x0028);
static_assert(offsetof(FUAGameLandmarkTable, LandMarkGuide) == 0x0030);
static_assert(offsetof(FUAGameBigMapEffectTable, TemplateUMG_Resource) == 0x0018);
static_assert(offsetof(FUAGameBigMapEffectTable, AreaIDs) == 0x0050);
static_assert(offsetof(FUALootPointInfo, Location) == 0x0010);
static_assert(offsetof(FUALootPointInfo, AreaName) == 0x0020);
static_assert(offsetof(FUALootPointInfo, LevelPath) == 0x0040);
static_assert(offsetof(FUALootPointInfo, LabelName) == 0x0050);
static_assert(offsetof(FUALootPointInfo, InPickupGroup) == 0x0070);
static_assert(offsetof(FUABattleQuickChat, ChatType) == 0x0010);
static_assert(offsetof(FUABattleQuickChat, ListName) == 0x0020);
static_assert(offsetof(FUABattleQuickChat, ChatContent) == 0x0038);
static_assert(offsetof(FUABattleQuickChat, ChatSound) == 0x0050);
static_assert(offsetof(FUAGameHUDTable, TemplateUMG_Resource) == 0x0010);
static_assert(offsetof(FUAGameHUDTable, background_img) == 0x0040);
static_assert(offsetof(FUAGameHUDTable, Content_Img) == 0x0068);
static_assert(offsetof(FUAGameHUDTable, Content_Img_Color) == 0x0098);
static_assert(offsetof(FUAGameHUDTable, Normal_Text) == 0x00C0);
static_assert(offsetof(FUAGameHUDTable, AudioEvent) == 0x00E0);
static_assert(offsetof(FUATaskTypeTable, TypeDesc) == 0x0010);
static_assert(offsetof(FUATaskTypeTable, IconPath) == 0x0028);
static_assert(offsetof(FUASettleFilter, ArgName) == 0x0000);
static_assert(offsetof(FUASettleFilter, Values) == 0x0018);
static_assert(offsetof(FUASettleTipsConfigTable, Describe) == 0x0008);
static_assert(offsetof(FUASettleTipsConfigTable, Filters) == 0x0020);
static_assert(offsetof(FUASettleTipsConfigTable, TipKeys) == 0x0030);
static_assert(offsetof(FUASettleBGMConfig, EventName) == 0x0000);
static_assert(offsetof(FUASettleBGMConfig, StateGroupName) == 0x0010);
static_assert(offsetof(FUASettleBGMConfig, StateName) == 0x0020);
static_assert(offsetof(FUASettleUIConfigTable, Describe) == 0x0008);
static_assert(offsetof(FUASettleUIConfigTable, Filters) == 0x0020);
static_assert(offsetof(FUASettleUIConfigTable, VictoryBGM) == 0x0088);
static_assert(offsetof(FUASettleUIConfigTable, LoseBGM) == 0x00B8);
static_assert(offsetof(FUABattleEventPoint, position) == 0x0008);
static_assert(offsetof(FUABattleEventPoint, Params) == 0x0020);
static_assert(offsetof(FUABattleEventPoint, Describe) == 0x0030);
static_assert(offsetof(FUABattleEventPointsTable, Describe) == 0x0008);
static_assert(offsetof(FUABattleEventPointsTable, BattleEventPoints) == 0x0018);
static_assert(offsetof(FUAStatisParamInfo, ValueList) == 0x0028);
static_assert(offsetof(FUADescribeWordArgs, arg) == 0x0008);
static_assert(offsetof(FUABattleEventTable, Describe) == 0x0008);
static_assert(offsetof(FUABattleEventTable, Params) == 0x0020);
static_assert(offsetof(FUABattleEventTable, CutTrendArgsOnDistance) == 0x0048);
static_assert(offsetof(FUABattleEventTable, CutTrendArgsOnDeltaTime) == 0x0058);
static_assert(offsetof(FUABattleEventTable, CutTrendArgsOnEventValue) == 0x0068);
static_assert(offsetof(FUABattleEventTable, DescribeWord) == 0x0078);
static_assert(offsetof(FUABattleEventTable, DescribeWordArgsList) == 0x0088);
static_assert(offsetof(FUABattleEventTable, CombinedDescribeWord) == 0x0098);
static_assert(offsetof(FUABattleEventTable, CombinedDescribeWordArgsList) == 0x00A8);
static_assert(offsetof(FUAStatisTable, Describe) == 0x0008);
static_assert(offsetof(FUAStatisTable, Params) == 0x0020);
static_assert(offsetof(FUAServiceTable, InitContext) == 0x0008);
static_assert(offsetof(FUAServiceTable, ResetContext) == 0x0018);
static_assert(offsetof(FUAModuleTable, Context) == 0x0008);
static_assert(offsetof(FUAModuleTable, DefaultPanel) == 0x0018);
static_assert(offsetof(FUAModuleContextTable, Name) == 0x0008);
static_assert(offsetof(FUAModuleContextTable, LevelPath) == 0x0018);
static_assert(offsetof(FUAVestBagGridTable, Name) == 0x0008);
static_assert(offsetof(FUABattleMapTable, MapLevel) == 0x0008);
static_assert(offsetof(FUABattleMapTable, MobileMapLevel) == 0x0018);
static_assert(offsetof(FUABattleMapTable, Name) == 0x0030);
static_assert(offsetof(FUABattleMapTable, Picture) == 0x0040);
static_assert(offsetof(FUABattleMapTable, desc) == 0x0050);
static_assert(offsetof(FUAGlobalNumTable, Name) == 0x0008);
static_assert(offsetof(FUABattleresultTable, Describe) == 0x0018);
static_assert(offsetof(FUAItemContextMenuTable, DisplayName) == 0x0008);
static_assert(offsetof(FUAItemContextMenuTable, UseTip) == 0x0028);
static_assert(offsetof(FTextLocalizationPatch, NativeCulture) == 0x0000);
static_assert(offsetof(FTextLocalizationPatch, Namespace) == 0x0010);
static_assert(offsetof(FTextLocalizationPatch, Key) == 0x0020);
static_assert(offsetof(FTextLocalizationPatch, NativeString) == 0x0030);
static_assert(offsetof(FTextLocalizationPatch, LocalizedStrings) == 0x0040);
static_assert(offsetof(FUAGunBoxTable, WeaponAsseblePool) == 0x0020);
static_assert(offsetof(FUAPuppetOpenInventorySpawnConfig, InventoryClass) == 0x0000);
static_assert(offsetof(FUAPuppetOpenInventorySpawnConfigList, ConfigArray) == 0x0000);
static_assert(offsetof(FUAPuppetConfigTable, SpawnChance) == 0x0030);
static_assert(offsetof(FUABloodstoneRewardTable, BloodCounts) == 0x0028);
static_assert(offsetof(FMissionClassConfigBase, EnableSpecialIDs) == 0x0000);
static_assert(offsetof(FMissionClassConfigBase, DisableSpecialIDs) == 0x0010);
static_assert(offsetof(FMissionClassConfigBase, EnableDifficulties) == 0x0020);
static_assert(offsetof(FMissionClassConfigBase, DisableDifficulties) == 0x0030);
static_assert(offsetof(FMissionClassProbabilityConfig, MissionFlowAsset) == 0x0040);
static_assert(offsetof(FActivityResidentMissionConfig, MissionList) == 0x0000);
static_assert(offsetof(FMissionClassWeightConfig, MissionFlowAsset) == 0x0040);
static_assert(offsetof(FActivityRandomMissionConfig, MissionList) == 0x0008);
static_assert(offsetof(FActivityMissionConfig, LevelName) == 0x0040);
static_assert(offsetof(FActivityMissionConfig, ResidentMission) == 0x0050);
static_assert(offsetof(FActivityMissionConfig, RandomMission) == 0x0060);
static_assert(offsetof(FActivityMissionConfig, CloseOtherActivityIDs) == 0x0080);
static_assert(offsetof(FUAModeActivityMissionTable, ActivityMissionMap) == 0x0020);
static_assert(offsetof(FDynamicResidentMissionConfig, MissionList) == 0x0000);
static_assert(offsetof(FDynamicRandomMissionConfig, MissionList) == 0x0008);
static_assert(offsetof(FGroupedDynamicRandomMissionConfigItem, MissionList) == 0x0008);
static_assert(offsetof(FGroupedDynamicRandomMissionConfig, GroupList) == 0x0008);
static_assert(offsetof(FUAModeDynamicMissionTable, LevelName) == 0x0020);
static_assert(offsetof(FUAModeDynamicMissionTable, ResidentMission) == 0x0030);
static_assert(offsetof(FUAModeDynamicMissionTable, RandomMission) == 0x0040);
static_assert(offsetof(FUAModeDynamicMissionTable, GroupedRandomMission) == 0x0058);
static_assert(offsetof(FUALimitAreaPointConfigTable, Name) == 0x0020);
static_assert(offsetof(FUALimitAreaPointConfigTable, SpecialCenter) == 0x0034);
static_assert(offsetof(FUALimitAreaPointConfigTable, RandomAreaPointWavePickArray) == 0x0040);
static_assert(offsetof(FUALimitAreaPointConfigTable, DefaultAreaPointArray) == 0x0058);
static_assert(offsetof(FQuestDistributerClassWithWeight, QuestDistributerClass) == 0x0000);
static_assert(offsetof(FActivityQuestDistributer, ActivityQuestDistributers) == 0x0000);
static_assert(offsetof(FUAModeQuestDistributerConfigTable, NeedLoadQuestDistributer) == 0x0028);
static_assert(offsetof(FUAModeQuestDistributerConfigTable, ActivityNeedLoadQuestDistributer) == 0x0040);
static_assert(offsetof(FUAScriptLevelTable, ScriptMaps) == 0x0020);
static_assert(offsetof(FUAScriptLevelTable, AdditionIgnores) == 0x0030);
static_assert(offsetof(FUAModeLootConfigTable, LootDropSubTable) == 0x0028);
static_assert(offsetof(FUAModeLootConfigTable, LootMaps) == 0x0050);
static_assert(offsetof(FUAPlayerStartGroupData, EscapePreset) == 0x0020);
static_assert(offsetof(FUAEscapeRandomStruct, EscapePointIDs) == 0x0000);
static_assert(offsetof(FUADelayedEvacuationStruct, EscapePointIDs) == 0x0008);
static_assert(offsetof(FEscapePreset, ConstantEscapePointIDs) == 0x0008);
static_assert(offsetof(FEscapePreset, RandomEscapePointIDs) == 0x0018);
static_assert(offsetof(FEscapePreset, RandomArr) == 0x0030);
static_assert(offsetof(FEscapePreset, DelayedEvacuation) == 0x0040);
static_assert(offsetof(FAnomalyCountInGroup, GroupName) == 0x0000);
static_assert(offsetof(FAnomalyWaveConfig, AnomalyGroups) == 0x0008);
static_assert(offsetof(FEscapePointWaveConfig, EscapePointIDs) == 0x0018);
static_assert(offsetof(FUAModeStartAndEscapeTable, LevelName) == 0x0020);
static_assert(offsetof(FUAModeStartAndEscapeTable, AdditionLevelName) == 0x0030);
static_assert(offsetof(FUAModeStartAndEscapeTable, PlayerStart) == 0x0040);
static_assert(offsetof(FUAModeStartAndEscapeTable, AIStartAddition) == 0x0050);
static_assert(offsetof(FUAModeStartAndEscapeTable, EscapePresetMap) == 0x0060);
static_assert(offsetof(FUAModeStartAndEscapeTable, GlobalRandomEscapePointIDs) == 0x00B0);
static_assert(offsetof(FUAModeStartAndEscapeTable, GlobalEscapePointProbabilityMap) == 0x00C0);
static_assert(offsetof(FUAModeStartAndEscapeTable, EscapeProbabilityResetMap) == 0x0110);
static_assert(offsetof(FUAModeStartAndEscapeTable, EscapeVolumeRemapping) == 0x0160);
static_assert(offsetof(FUAModeStartAndEscapeTable, AnomalyWaveConfigs) == 0x01C0);
static_assert(offsetof(FUAModeStartAndEscapeTable, EscapeWaveConfigs) == 0x01D0);
static_assert(offsetof(FUAGameModeTableRow, MainModeName) == 0x0010);
static_assert(offsetof(FUAGameModeTableRow, SubModeName) == 0x0030);
static_assert(offsetof(FUAGameModeTableRow, GameModeClass) == 0x0050);
static_assert(offsetof(FUAGameModeTableRow, GameStateClass) == 0x0078);
static_assert(offsetof(FPanelProfilerStack, theStack) == 0x0000);
static_assert(offsetof(FRichHyperlinkStyleRow, LinkStyle) == 0x0008);
