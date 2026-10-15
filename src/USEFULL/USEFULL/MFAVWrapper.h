// generated header

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/MFAVWrapper.VideoClipManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVideoClipManager : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFAVWrapper.VideoClipManager.Get
	// class UVideoClipManager* Get();                                                                                          // [0x50cc78c] Final|Native|Static|Public 
};

/// Class /Script/MFAVWrapper.VideoCaptureManager
/// Size: 0x0180 (384 bytes) (0x000028 - 0x000180) align 8 MaxSize: 0x0180
class UVideoCaptureManager : public UObject
{ 
public:
	uint32_t                                           ResolutionX;                                                // 0x0028   (0x0004)  
	uint32_t                                           ResolutionY;                                                // 0x002C   (0x0004)  
	uint32_t                                           CodeRate;                                                   // 0x0030   (0x0004)  
	SDK_UNDEFINED(1,5109) /* EMovieCaptureState */     __um(CaptureState);                                         // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x148];                                     // 0x0035   (0x0148)  MISSED
	bool                                               bForceStop;                                                 // 0x017D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x017E   (0x0002)  MISSED


	/// Functions
	// Function /Script/MFAVWrapper.VideoCaptureManager.StartVideoCapture
	// void StartVideoCapture(bool bLoop, bool bEnableAudioCapture);                                                            // [0x50cc850] Final|Native|Public  
	// Function /Script/MFAVWrapper.VideoCaptureManager.ShutDownVideoCapture
	// void ShutDownVideoCapture(int32_t inClipDuration);                                                                       // [0x50cc7bc] Final|Native|Public  
	// Function /Script/MFAVWrapper.VideoCaptureManager.Get
	// class UVideoCaptureManager* Get();                                                                                       // [0x50cc75c] Final|Native|Static|Public 
	// Function /Script/MFAVWrapper.VideoCaptureManager.FinishVideoCapture
	// void FinishVideoCapture();                                                                                               // [0x50cc72c] Final|Native|Public  
	// Function /Script/MFAVWrapper.VideoCaptureManager.FinishCapturePhase
	// void FinishCapturePhase();                                                                                               // [0x1e39048] Final|Native|Public  
};

#pragma pack(pop)


static_assert(sizeof(UVideoClipManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVideoCaptureManager) == 0x0180); // 384 bytes (0x000028 - 0x000180)
