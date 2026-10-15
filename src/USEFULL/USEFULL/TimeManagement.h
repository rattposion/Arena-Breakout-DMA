// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{ 
public:
	FFrameRate                                         FixedFrameRate;                                             // 0x0028   (0x0008)  
};

/// Class /Script/TimeManagement.GenlockedCustomTimeStep
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{ 
public:
};

/// Class /Script/TimeManagement.GenlockedTimecodeProvider
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UGenlockedTimecodeProvider : public UTimecodeProvider
{ 
public:
	bool                                               bUseGenlockToCount;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x27];                                      // 0x0031   (0x0027)  MISSED
};

/// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.TransformTime
	// FFrameTime TransformTime(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& DestinationRate);                   // [0x745dabc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
	// FFrameNumber Subtract_FrameNumberInteger(FFrameNumber A, int32_t B);                                                     // [0x745d9e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
	// FFrameNumber Subtract_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                            // [0x745d904] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
	// FFrameTime SnapFrameTimeToRate(FFrameTime& SourceTime, FFrameRate& SourceRate, FFrameRate& SnapToRate);                  // [0x745d760] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
	// FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, FFrameRate& FrameRate);                                        // [0x745d658] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
	// FFrameNumber Multiply_FrameNumberInteger(FFrameNumber A, int32_t B);                                                     // [0x745d578] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
	// bool IsValid_MultipleOf(FFrameRate& InFrameRate, FFrameRate& OtherFramerate);                                            // [0x745d45c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
	// bool IsValid_Framerate(FFrameRate& InFrameRate);                                                                         // [0x745d3bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate
	// FFrameRate GetTimecodeFrameRate();                                                                                       // [0x745d394] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
	// FTimecode GetTimecode();                                                                                                 // [0x745d35c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
	// FFrameNumber Divide_FrameNumberInteger(FFrameNumber A, int32_t B);                                                       // [0x745d27c] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
	// FString Conv_TimecodeToString(FTimecode& InTimecode, bool bForceSignDisplay);                                            // [0x745d0bc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
	// float Conv_QualifiedFrameTimeToSeconds(FQualifiedFrameTime& InFrameTime);                                                // [0x745cfc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
	// float Conv_FrameRateToSeconds(FFrameRate& InFrameRate);                                                                  // [0x745cf08] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
	// int32_t Conv_FrameNumberToInteger(FFrameNumber& InFrameNumber);                                                          // [0x745ce70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
	// FFrameNumber Add_FrameNumberInteger(FFrameNumber A, int32_t B);                                                          // [0x745cd94] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
	// FFrameNumber Add_FrameNumberFrameNumber(FFrameNumber A, FFrameNumber B);                                                 // [0x745ccb8] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TimeManagement.TimeSynchronizationSource
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UTimeSynchronizationSource : public UObject
{ 
public:
	bool                                               bUseForSynchronization;                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            FrameOffset;                                                // 0x002C   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataInputEvaluationData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FTimedDataInputEvaluationData
{ 
	float                                              DistanceToNewestSampleSeconds;                              // 0x0000   (0x0004)  
	float                                              DistanceToOldestSampleSeconds;                              // 0x0004   (0x0004)  
};

/// Struct /Script/TimeManagement.TimedDataChannelSampleTime
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTimedDataChannelSampleTime
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFixedFrameRateCustomTimeStep) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGenlockedCustomTimeStep) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGenlockedTimecodeProvider) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UTimeManagementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTimeSynchronizationSource) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FTimedDataInputEvaluationData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTimedDataChannelSampleTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UFixedFrameRateCustomTimeStep, FixedFrameRate) == 0x0028);
