// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/MFAutoGPUTrace.CaptureSample
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FCaptureSample
{ 
	FVector                                            WorldPositionNoOriginOffset;                                // 0x0000   (0x000C)  
	FRotator                                           CameraRotation;                                             // 0x000C   (0x000C)  
};

/// Class /Script/MFAutoGPUTrace.GPUTraceCaptureActor
/// Size: 0x0348 (840 bytes) (0x000318 - 0x000348) align 8 MaxSize: 0x0348
class AGPUTraceCaptureActor : public AActor
{ 
public:
	TArray<FCaptureSample>                             CaptureSamples;                                             // 0x0318   (0x0010)  
	int32_t                                            NextCaptureIndex;                                           // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_7[0x1C];                                      // 0x032C   (0x001C)  MISSED


	/// Functions
	// Function /Script/MFAutoGPUTrace.GPUTraceCaptureActor.BeginTimedCapture
	// void BeginTimedCapture();                                                                                                // [0x50cc374] Final|Native|Public  
	// Function /Script/MFAutoGPUTrace.GPUTraceCaptureActor.BeginCapture
	// void BeginCapture();                                                                                                     // [0x50cc35c] Final|Native|Public  
	// Function /Script/MFAutoGPUTrace.GPUTraceCaptureActor.AddCurrentAsCaptureSample
	// void AddCurrentAsCaptureSample();                                                                                        // [0x1e39048] Final|Native|Public  
};

#pragma pack(pop)


static_assert(sizeof(FCaptureSample) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(AGPUTraceCaptureActor) == 0x0348); // 840 bytes (0x000318 - 0x000348)
static_assert(offsetof(FCaptureSample, WorldPositionNoOriginOffset) == 0x0000);
static_assert(offsetof(FCaptureSample, CameraRotation) == 0x000C);
static_assert(offsetof(AGPUTraceCaptureActor, CaptureSamples) == 0x0318);
