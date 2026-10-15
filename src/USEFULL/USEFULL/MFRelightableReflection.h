// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFRelightableReflection.MFRelightableReflectionSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UMFRelightableReflectionSettings : public UDeveloperSettings
{ 
public:
	bool                                               CaptureDirectionalLight : 1;                                // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/MFRelightableReflection.RelightableData
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class URelightableData : public URelightableReflectionData
{ 
public:
	int32_t                                            CapturedCubeSize;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UTextureCube*                                CompressedAlbedo;                                           // 0x0030   (0x0008)  
	class UTextureCube*                                CompressedAmbient;                                          // 0x0038   (0x0008)  
	class UTextureCube*                                CompressedNormalAndSkyMask;                                 // 0x0040   (0x0008)  
	class UTextureCube*                                CompressedLocalLight;                                       // 0x0048   (0x0008)  
	TArray<FVector>                                    KeyedShadowDirections;                                      // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0060   (0x0050)  MISSED
	int32_t                                            ShadowMaskDataVersion;                                      // 0x00B0   (0x0004)  
	uint32_t                                           AmbientAndLocalLightNormalizeMask;                          // 0x00B4   (0x0004)  
};

/// Class /Script/MFRelightableReflection.RelightableReflectionBakeTimeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URelightableReflectionBakeTimeInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/MFRelightableReflection.RelightableReflectionBakeTimeInterface.StartBaking
	// void StartBaking();                                                                                                      // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFRelightableReflection.RelightableReflectionBakeTimeInterface.SetBakeTimeTo
	// void SetBakeTimeTo(int32_t KeyIndex, float NormalizedKey);                                                               // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/MFRelightableReflection.RelightableReflectionBakeTimeInterface.EndBaking
	// void EndBaking();                                                                                                        // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UMFRelightableReflectionSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(URelightableData) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(URelightableReflectionBakeTimeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(URelightableData, CompressedAlbedo) == 0x0030);
static_assert(offsetof(URelightableData, CompressedAmbient) == 0x0038);
static_assert(offsetof(URelightableData, CompressedNormalAndSkyMask) == 0x0040);
static_assert(offsetof(URelightableData, CompressedLocalLight) == 0x0048);
static_assert(offsetof(URelightableData, KeyedShadowDirections) == 0x0050);
