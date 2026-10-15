// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/GameJoyPlugin.BP_GameJoyPluginLibrary
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UBP_GameJoyPluginLibrary : public UBlueprintFunctionLibrary
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	SDK_UNDEFINED(16,4855) /* FMulticastInlineDelegate */ __um(onGameJoyEvent);                                    // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.UpdateRedDot
	// void UpdateRedDot(bool showRedDot);                                                                                      // [0x4deb878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.UnLockRecorderPosition
	// void UnLockRecorderPosition();                                                                                           // [0x4deb518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.StopRecorder
	// void StopRecorder();                                                                                                     // [0x4deb518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.StartRecorder
	// bool StartRecorder();                                                                                                    // [0x4ded80c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.ShowRecorderDialog
	// void ShowRecorderDialog(float X, float Y);                                                                               // [0x4ded730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.ShowConsole
	// void ShowConsole();                                                                                                      // [0x4deb518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetWwiseListenerStatus
	// void SetWwiseListenerStatus(bool isMultiple);                                                                            // [0x4deb878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetWatermark
	// void SetWatermark(FString Path, float X, float Y);                                                                       // [0x4ded5f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoResolution
	// void SetVideoResolution(int32_t Type, int32_t Resolution);                                                               // [0x4ded4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoQuality
	// void SetVideoQuality(int32_t quality);                                                                                   // [0x4ded578] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetVideoBitrate
	// void SetVideoBitrate(int32_t Type, int32_t bitrate);                                                                     // [0x4ded4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetMinAvailableSpaceMB
	// void SetMinAvailableSpaceMB(int32_t minAvailableSpaceMB);                                                                // [0x4ded578] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetFrameRate
	// void SetFrameRate(int32_t FrameRate);                                                                                    // [0x4ded578] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetCoverSize
	// void SetCoverSize(int32_t Width, int32_t Height);                                                                        // [0x4ded4a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetAutoProfileLevel
	// void SetAutoProfileLevel(bool Enabled);                                                                                  // [0x4deb878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.SetAlbumName
	// void SetAlbumName(FString albumName);                                                                                    // [0x4ded388] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.RequestSDKPermission
	// void RequestSDKPermission(int32_t eventId, FString Type);                                                                // [0x4dec6c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.PlayLocalVideo
	// void PlayLocalVideo(FString Path, int32_t Type);                                                                         // [0x4ded250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.NotifySpaceNotEnough
	// void NotifySpaceNotEnough();                                                                                             // [0x4deb518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.MoveVideoToAlbum
	// void MoveVideoToAlbum(int32_t eventId, FString albumName, FString srcPath);                                              // [0x4ded0e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFileToDocument
	// void MoveFileToDocument(FString fromPath, FString toSubPath);                                                            // [0x4decfc4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.MoveFile
	// bool MoveFile(FString& From, FString& dst);                                                                              // [0x4decde4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.MoveAlbumToLocal
	// void MoveAlbumToLocal(int32_t eventId, FString albumPath, FString localPath);                                            // [0x4decc78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.MergeVideoWithImageAndVideo
	// void MergeVideoWithImageAndVideo(int32_t eventId, FString videopath, FString headerVideo, FString ImagePath);            // [0x4deca9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.LockRecorderPosition
	// void LockRecorderPosition();                                                                                             // [0x4deb518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecording
	// bool IsRecording();                                                                                                      // [0x4deca78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.IsRecorderDialogShow
	// bool IsRecorderDialogShow();                                                                                             // [0x4deca78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.IsIOSFileExist
	// bool IsIOSFileExist(FString FilePath);                                                                                   // [0x4dec9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.IsFileExist
	// bool IsFileExist(FString FilePath);                                                                                      // [0x4dec8ec] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.IsDirExist
	// bool IsDirExist(FString Path);                                                                                           // [0x4dec7c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.InitGameJoyBPLib
	// void InitGameJoyBPLib();                                                                                                 // [0x4deb518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoMd5
	// void GetVideoMd5(int32_t eventId, FString videoPathJson);                                                                // [0x4dec6c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetVideoInfo
	// void GetVideoInfo(int32_t eventId, FString videoPathJson);                                                               // [0x4dec5e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeSeconds
	// int32_t GetTimeSeconds();                                                                                                // [0x4dec568] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetTimeMilliSeconds
	// int32_t GetTimeMilliSeconds();                                                                                           // [0x4dec4f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetSandboxPath
	// void GetSandboxPath(int32_t eventId);                                                                                    // [0x4dec47c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetPaths
	// FString GetPaths(int32_t pathType, bool relative);                                                                       // [0x4dec37c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetPathRelativeTo
	// FString GetPathRelativeTo(FString fromPath, FString RelativeTo);                                                         // [0x4dec238] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetOldVideoFromAlbumName
	// void GetOldVideoFromAlbumName(FString albumName);                                                                        // [0x4dec194] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetInstance
	// class UBP_GameJoyPluginLibrary* GetInstance();                                                                           // [0x4dec0fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetGFilePathBase
	// FString GetGFilePathBase();                                                                                              // [0x4dec008] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetFreeDiskSpace
	// int32_t GetFreeDiskSpace();                                                                                              // [0x4debfe4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesInDir
	// FString GetFilesInDir(FString Path);                                                                                     // [0x4debf18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilesFromPath
	// void GetFilesFromPath(int32_t eventId, FString Path, bool isIncludeChildren);                                            // [0x4debd7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetFilePathFromUri
	// FString GetFilePathFromUri(FString uriPath);                                                                             // [0x4debc7c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetFdFromUri
	// int32_t GetFdFromUri(FString Uri);                                                                                       // [0x4debb8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GetDeviceInfo
	// FString GetDeviceInfo();                                                                                                 // [0x4deba98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateVideoCover
	// void GenerateVideoCover(int32_t eventId, FString videopath);                                                             // [0x4deb99c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.GenerateMomentsVideo
	// void GenerateMomentsVideo(FString videoTimeStampListJson);                                                               // [0x4deb8f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.EnableInGameAudio
	// void EnableInGameAudio(bool enable);                                                                                     // [0x4deb878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.EnableBgmMix
	// void EnableBgmMix(bool mixing);                                                                                          // [0x4deb878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.DeleteVideoByAlbum
	// void DeleteVideoByAlbum(int32_t eventId, FString albumName, FString srcPath);                                            // [0x4deb70c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.CopyFile
	// bool CopyFile(FString& From, FString& dst);                                                                              // [0x4deb52c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.CloseRecorderDialog
	// void CloseRecorderDialog();                                                                                              // [0x4deb518] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.CloseFd
	// int32_t CloseFd(int32_t fd);                                                                                             // [0x4deb48c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.CheckSDKPermission
	// int32_t CheckSDKPermission(FString Type);                                                                                // [0x4deb3d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameJoyPlugin.BP_GameJoyPluginLibrary.CheckAlbumVideoExist
	// bool CheckAlbumVideoExist(FString Path);                                                                                 // [0x4deb340] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UBP_GameJoyPluginLibrary) == 0x0048); // 72 bytes (0x000028 - 0x000048)
