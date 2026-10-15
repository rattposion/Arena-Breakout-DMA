// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/LuxVolume.LuxFallbackData
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULuxFallbackData : public UObject
{ 
public:
	FVector                                            VolumeMin;                                                  // 0x0028   (0x000C)  
	FVector                                            VolumeSize;                                                 // 0x0034   (0x000C)  
	float                                              VoxelSize;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UVolumeTexture*                              DirectionalDC;                                              // 0x0048   (0x0008)  
	class UVolumeTexture*                              DirectionalL1Luma;                                          // 0x0050   (0x0008)  
	class UVolumeTexture*                              SkyBentNormal;                                              // 0x0058   (0x0008)  
	class UVolumeTexture*                              InsideGeometryMask;                                         // 0x0060   (0x0008)  
};

/// Class /Script/LuxVolume.LuxHighDensityVolume
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class ALuxHighDensityVolume : public AActor
{ 
public:
	class UBoxComponent*                               VolumeBox;                                                  // 0x0318   (0x0008)  
};

/// Class /Script/LuxVolume.LuxStreamingChunkBlock
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class ULuxStreamingChunkBlock : public UObject
{ 
public:
	FIntPoint                                          ChunkCoord;                                                 // 0x0028   (0x0008)  
	uint32_t                                           BasisCornerStride;                                          // 0x0030   (0x0004)  
	uint32_t                                           BasisDataOffset;                                            // 0x0034   (0x0004)  
	uint32_t                                           NumHDVolumes;                                               // 0x0038   (0x0004)  
	uint32_t                                           HDDirectoryOffset;                                          // 0x003C   (0x0004)  
	int32_t                                            NumUnits;                                                   // 0x0040   (0x0004)  
	int32_t                                            Version;                                                    // 0x0044   (0x0004)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0048   (0x0028)  MISSED
};

/// Class /Script/LuxVolume.LuxVolumeBakeTimeInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULuxVolumeBakeTimeInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/LuxVolume.LuxVolumeBakeTimeInterface.LuxStartBaking
	// void LuxStartBaking();                                                                                                   // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/LuxVolume.LuxVolumeBakeTimeInterface.LuxSetBakeTimeTo
	// void LuxSetBakeTimeTo(int32_t KeyIndex, float NormalizedKey);                                                            // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/LuxVolume.LuxVolumeBakeTimeInterface.LuxGetNumTODs
	// int32_t LuxGetNumTODs();                                                                                                 // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/LuxVolume.LuxVolumeBakeTimeInterface.LuxEndBaking
	// void LuxEndBaking();                                                                                                     // [0x182d6bc] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/LuxVolume.LuxVolumeImportInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FLuxVolumeImportInfo
{ 
	FString                                            BakeMachineName;                                            // 0x0000   (0x0010)  
	FString                                            BakeQualityLevel;                                           // 0x0010   (0x0010)  
	FDateTime                                          BakeTimestamp;                                              // 0x0020   (0x0008)  
	double                                             BakeDurationSeconds;                                        // 0x0028   (0x0008)  
	FDateTime                                          ImportTimestamp;                                            // 0x0030   (0x0008)  
	FString                                            SourceFilePath;                                             // 0x0038   (0x0010)  
};

/// Class /Script/LuxVolume.LuxVolumeData
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class ULuxVolumeData : public UBaseLuxVolumeData
{ 
public:
	FVector                                            VolumeMin;                                                  // 0x0028   (0x000C)  
	FVector                                            VolumeSize;                                                 // 0x0034   (0x000C)  
	FIntVector                                         StreamingUnitsNum;                                          // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<class ULuxStreamingChunkBlock*>             ChunkData;                                                  // 0x0050   (0x0010)  
	float                                              CachedAvgHeaderBytesPerUnit;                                // 0x0060   (0x0004)  
	float                                              CachedAvgParentVisPerUnit;                                  // 0x0064   (0x0004)  
	float                                              CachedAvgProbesPerUnit;                                     // 0x0068   (0x0004)  
	float                                              CachedAvgRootProbesPerUnit;                                 // 0x006C   (0x0004)  
	int32_t                                            MBDNumBasis;                                                // 0x0070   (0x0004)  
	int32_t                                            NumTODs;                                                    // 0x0074   (0x0004)  
	TArray<FVector>                                    TODSunDirections;                                           // 0x0078   (0x0010)  
	TArray<FLinearColor>                               TODSunColors;                                               // 0x0088   (0x0010)  
	FLinearColor                                       BakedSkyLightColor;                                         // 0x0098   (0x0010)  
	int32_t                                            MBDNumFeatures;                                             // 0x00A8   (0x0004)  
	float                                              LTSNAlpha;                                                  // 0x00AC   (0x0004)  
	bool                                               bSHNormalization;                                           // 0x00B0   (0x0001)  
	bool                                               bMBDL2LumaOnly;                                             // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
	FLuxVolumeImportInfo                               ImportInfo;                                                 // 0x00B8   (0x0048)  
	class ULuxFallbackData*                            FallbackData;                                               // 0x0100   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(ULuxFallbackData) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(ALuxHighDensityVolume) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(ULuxStreamingChunkBlock) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(ULuxVolumeBakeTimeInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLuxVolumeImportInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(ULuxVolumeData) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(offsetof(ULuxFallbackData, VolumeMin) == 0x0028);
static_assert(offsetof(ULuxFallbackData, VolumeSize) == 0x0034);
static_assert(offsetof(ULuxFallbackData, DirectionalDC) == 0x0048);
static_assert(offsetof(ULuxFallbackData, DirectionalL1Luma) == 0x0050);
static_assert(offsetof(ULuxFallbackData, SkyBentNormal) == 0x0058);
static_assert(offsetof(ULuxFallbackData, InsideGeometryMask) == 0x0060);
static_assert(offsetof(ALuxHighDensityVolume, VolumeBox) == 0x0318);
static_assert(offsetof(ULuxStreamingChunkBlock, ChunkCoord) == 0x0028);
static_assert(offsetof(FLuxVolumeImportInfo, BakeMachineName) == 0x0000);
static_assert(offsetof(FLuxVolumeImportInfo, BakeQualityLevel) == 0x0010);
static_assert(offsetof(FLuxVolumeImportInfo, BakeTimestamp) == 0x0020);
static_assert(offsetof(FLuxVolumeImportInfo, ImportTimestamp) == 0x0030);
static_assert(offsetof(FLuxVolumeImportInfo, SourceFilePath) == 0x0038);
static_assert(offsetof(ULuxVolumeData, VolumeMin) == 0x0028);
static_assert(offsetof(ULuxVolumeData, VolumeSize) == 0x0034);
static_assert(offsetof(ULuxVolumeData, StreamingUnitsNum) == 0x0040);
static_assert(offsetof(ULuxVolumeData, ChunkData) == 0x0050);
static_assert(offsetof(ULuxVolumeData, TODSunDirections) == 0x0078);
static_assert(offsetof(ULuxVolumeData, TODSunColors) == 0x0088);
static_assert(offsetof(ULuxVolumeData, BakedSkyLightColor) == 0x0098);
static_assert(offsetof(ULuxVolumeData, ImportInfo) == 0x00B8);
static_assert(offsetof(ULuxVolumeData, FallbackData) == 0x0100);
