// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UMovieSceneCaptureProtocolBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	SDK_UNDEFINED(1,5143) /* EMovieSceneCaptureProtocolState */ __um(State);                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	// bool IsCapturing();                                                                                                      // [0x76c9458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	// EMovieSceneCaptureProtocolState GetState();                                                                              // [0x4f66054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0090 (144 bytes) (0x000058 - 0x000090) align 8 MaxSize: 0x0090
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
	FString                                            Filename;                                                   // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0068   (0x0028)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCompositionGraphCapturePasses
{ 
	TArray<FString>                                    Value;                                                      // 0x0000   (0x0010)  
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x00C0 (192 bytes) (0x000058 - 0x0000C0) align 8 MaxSize: 0x00C0
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	FCompositionGraphCapturePasses                     IncludeRenderPasses;                                        // 0x0058   (0x0010)  
	bool                                               bCaptureFramesInHDR;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            HDRCompressionQuality;                                      // 0x006C   (0x0004)  
	SDK_UNDEFINED(1,5144) /* TEnumAsByte<EHDRCaptureGamut> */ __um(CaptureGamut);                                  // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
	FSoftObjectPath                                    PostProcessingMaterial;                                     // 0x0078   (0x0018)  
	bool                                               bDisableScreenPercentage;                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                  // 0x0098   (0x0008)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x00A0   (0x0020)  MISSED
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0068   (0x0070)  MISSED
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
public:
	int32_t                                            CompressionQuality;                                         // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x00D8 (216 bytes) (0x0000D8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
public:
	bool                                               bCompressed;                                                // 0x00D8   (0x0001)  
	SDK_UNDEFINED(1,5145) /* TEnumAsByte<EHDRCaptureGamut> */ __um(CaptureGamut);                                  // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x00DA   (0x000E)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneCaptureInterface : public UInterface
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCaptureResolution
{ 
	int32_t                                            ResX;                                                       // 0x0000   (0x0004)  
	int32_t                                            ResY;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FMovieSceneCaptureSettings
{ 
	FDirectoryPath                                     OutputDirectory;                                            // 0x0000   (0x0010)  
	class UClass*                                      GameModeOverride;                                           // 0x0010   (0x0008)  
	FString                                            OutputFormat;                                               // 0x0018   (0x0010)  
	bool                                               bOverwriteExisting;                                         // 0x0028   (0x0001)  
	bool                                               bUseRelativeFrameNumbers;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            HandleFrames;                                               // 0x002C   (0x0004)  
	FString                                            MovieExtension;                                             // 0x0030   (0x0010)  
	char                                               ZeroPadFrameNumbers;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0044   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         CustomFrameRate;                                            // 0x0050   (0x0008)  
	FCaptureResolution                                 Resolution;                                                 // 0x0058   (0x0008)  
	bool                                               bEnableTextureStreaming;                                    // 0x0060   (0x0001)  
	bool                                               bCinematicEngineScalability;                                // 0x0061   (0x0001)  
	bool                                               bCinematicMode;                                             // 0x0062   (0x0001)  
	bool                                               bAllowMovement;                                             // 0x0063   (0x0001)  
	bool                                               bAllowTurning;                                              // 0x0064   (0x0001)  
	bool                                               bShowPlayer;                                                // 0x0065   (0x0001)  
	bool                                               bShowHUD;                                                   // 0x0066   (0x0001)  
	bool                                               bUsePathTracer;                                             // 0x0067   (0x0001)  
	int32_t                                            PathTracerSamplePerPixel;                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x0228 (552 bytes) (0x000028 - 0x000228) align 8 MaxSize: 0x0228
class UMovieSceneCapture : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	FSoftClassPath                                     ImageCaptureProtocolType;                                   // 0x0038   (0x0018)  
	FSoftClassPath                                     AudioCaptureProtocolType;                                   // 0x0050   (0x0018)  
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                       // 0x0068   (0x0008)  
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                       // 0x0070   (0x0008)  
	FMovieSceneCaptureSettings                         Settings;                                                   // 0x0078   (0x0070)  
	bool                                               bUseSeparateProcess;                                        // 0x00E8   (0x0001)  
	bool                                               bCloseEditorWhenCaptureStarts;                              // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
	FString                                            AdditionalCommandLineArguments;                             // 0x00F0   (0x0010)  
	FString                                            InheritedCommandLineArguments;                              // 0x0100   (0x0010)  
	unsigned char                                      UnknownData02_7[0x118];                                     // 0x0110   (0x0118)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	// void SetImageCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x76c96e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	// void SetAudioCaptureProtocolType(class UClass* ProtocolType);                                                            // [0x76c9644] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();                                                         // [0x4b9fdec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();                                                         // [0x50ca5bc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0248 (584 bytes) (0x000228 - 0x000248) align 8 MaxSize: 0x0248
class ULevelCapture : public UMovieSceneCapture
{ 
public:
	bool                                               bAutoStartCapture;                                          // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0229   (0x000B)  MISSED
	FGuid                                              PrerequisiteActorId;                                        // 0x0234   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0244   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMovieSceneCaptureEnvironment : public UObject
{ 
public:


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	// bool IsCaptureInProgress();                                                                                              // [0x76c9424] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// int32_t GetCaptureFrameNumber();                                                                                         // [0x76c93c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// float GetCaptureElapsedTime();                                                                                           // [0x76c9398] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	// class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();                                                   // [0x76c8ea8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	// class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();                                                   // [0x76c8e44] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x00D8 (216 bytes) (0x000058 - 0x0000D8) align 8 MaxSize: 0x00D8
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	class UWorld*                                      World;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_7[0x78];                                      // 0x0060   (0x0078)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	// void StopCapturingFinalPixels();                                                                                         // [0x76c990c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	// void StartCapturingFinalPixels(FCapturedPixelsID& StreamID);                                                             // [0x76c977c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	// void ResolveBuffer(class UTexture* Buffer, FCapturedPixelsID& BufferID);                                                 // [0x76c9478] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	// void OnWarmUp();                                                                                                         // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	// void OnTick();                                                                                                           // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	// void OnStartCapture();                                                                                                   // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	// bool OnSetup();                                                                                                          // [0x683f4f0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	// void OnPreTick();                                                                                                        // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	// void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);                       // [0x182d6bc] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	// void OnPauseCapture();                                                                                                   // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	// void OnFinalize();                                                                                                       // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	// void OnCaptureFrame();                                                                                                   // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	// bool OnCanFinalize();                                                                                                    // [0x479887c] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	// void OnBeginFinalize();                                                                                                  // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	// FFrameMetrics GetCurrentFrameMetrics();                                                                                  // [0x76c940c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	// FString GenerateFilename(FFrameMetrics& InFrameMetrics);                                                                 // [0x76c8f0c] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
public:
	SDK_UNDEFINED(1,5146) /* EDesiredImageFormat */    __um(Format);                                               // 0x00D8   (0x0001)  
	bool                                               bEnableCompression;                                         // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00DA   (0x0002)  MISSED
	int32_t                                            CompressionQuality;                                         // 0x00DC   (0x0004)  


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	// void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& StreamID, FFrameMetrics& FrameMetrics, bool bCopyImageData); // [0x76c9920] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	// FString GenerateFilenameForCurrentFrame();                                                                               // [0x76c92a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	// FString GenerateFilenameForBuffer(class UTexture* Buffer, FCapturedPixelsID& StreamID);                                  // [0x76c9084] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
public:
	bool                                               bUseCompression;                                            // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              CompressionQuality;                                         // 0x006C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FFrameMetrics
{ 
	float                                              TotalElapsedTime;                                           // 0x0000   (0x0004)  
	float                                              FrameDelta;                                                 // 0x0004   (0x0004)  
	int32_t                                            FrameNumber;                                                // 0x0008   (0x0004)  
	int32_t                                            NumDroppedFrames;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCapturedPixels
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FCapturedPixelsID
{ 
	TMap<FName, FName>                                 Identifiers;                                                // 0x0000   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(UMovieSceneCaptureProtocolBase) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMovieSceneAudioCaptureProtocolBase) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UNullAudioCaptureProtocol) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UMasterAudioSubmixCaptureProtocol) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(UMovieSceneImageCaptureProtocolBase) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(FCompositionGraphCapturePasses) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UCompositionGraphCaptureProtocol) == 0x00C0); // 192 bytes (0x000058 - 0x0000C0)
static_assert(sizeof(UFrameGrabberProtocol) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UImageSequenceProtocol) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(UCompressedImageSequenceProtocol) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_BMP) == 0x00D8); // 216 bytes (0x0000D8 - 0x0000D8)
static_assert(sizeof(UImageSequenceProtocol_PNG) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_JPG) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(UImageSequenceProtocol_EXR) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UMovieSceneCaptureInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCaptureResolution) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneCaptureSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UMovieSceneCapture) == 0x0228); // 552 bytes (0x000028 - 0x000228)
static_assert(sizeof(ULevelCapture) == 0x0248); // 584 bytes (0x000228 - 0x000248)
static_assert(sizeof(UMovieSceneCaptureEnvironment) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UUserDefinedCaptureProtocol) == 0x00D8); // 216 bytes (0x000058 - 0x0000D8)
static_assert(sizeof(UUserDefinedImageCaptureProtocol) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UVideoCaptureProtocol) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FFrameMetrics) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCapturedPixels) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCapturedPixelsID) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(UMasterAudioSubmixCaptureProtocol, Filename) == 0x0058);
static_assert(offsetof(FCompositionGraphCapturePasses, Value) == 0x0000);
static_assert(offsetof(UCompositionGraphCaptureProtocol, IncludeRenderPasses) == 0x0058);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterial) == 0x0078);
static_assert(offsetof(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr) == 0x0098);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputDirectory) == 0x0000);
static_assert(offsetof(FMovieSceneCaptureSettings, GameModeOverride) == 0x0010);
static_assert(offsetof(FMovieSceneCaptureSettings, OutputFormat) == 0x0018);
static_assert(offsetof(FMovieSceneCaptureSettings, MovieExtension) == 0x0030);
static_assert(offsetof(FMovieSceneCaptureSettings, FrameRate) == 0x0044);
static_assert(offsetof(FMovieSceneCaptureSettings, CustomFrameRate) == 0x0050);
static_assert(offsetof(FMovieSceneCaptureSettings, Resolution) == 0x0058);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocolType) == 0x0038);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocolType) == 0x0050);
static_assert(offsetof(UMovieSceneCapture, ImageCaptureProtocol) == 0x0068);
static_assert(offsetof(UMovieSceneCapture, AudioCaptureProtocol) == 0x0070);
static_assert(offsetof(UMovieSceneCapture, Settings) == 0x0078);
static_assert(offsetof(UMovieSceneCapture, AdditionalCommandLineArguments) == 0x00F0);
static_assert(offsetof(UMovieSceneCapture, InheritedCommandLineArguments) == 0x0100);
static_assert(offsetof(ULevelCapture, PrerequisiteActorId) == 0x0234);
static_assert(offsetof(UUserDefinedCaptureProtocol, World) == 0x0058);
static_assert(offsetof(FCapturedPixelsID, Identifiers) == 0x0000);
