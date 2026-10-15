// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/OpacityMicroMap.OpacityMicroMapUsageCount
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FOpacityMicroMapUsageCount
{ 
	uint32_t                                           Count;                                                      // 0x0000   (0x0004)  
	uint32_t                                           SubdivisionLevel;                                           // 0x0004   (0x0004)  
	uint32_t                                           Format;                                                     // 0x0008   (0x0004)  
};

/// Class /Script/OpacityMicroMap.OpacityMicroMapData
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UOpacityMicroMapData : public UObject
{ 
public:
	TArray<char>                                       ArrayData;                                                  // 0x0028   (0x0010)  
	TArray<char>                                       DescArrayData;                                              // 0x0038   (0x0010)  
	TArray<FOpacityMicroMapUsageCount>                 DescArrayHistogram;                                         // 0x0048   (0x0010)  
	TArray<char>                                       IndexBuffer;                                                // 0x0058   (0x0010)  
	bool                                               Is16BitIndexBuffer;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	TArray<FOpacityMicroMapUsageCount>                 IndexHistogram;                                             // 0x0070   (0x0010)  
	uint32_t                                           MaxSubdivisionLevel;                                        // 0x0080   (0x0004)  
	SDK_UNDEFINED(1,5147) /* EOpacityMicromapFlags */  __um(Flags);                                                // 0x0084   (0x0001)  
	bool                                               IsTwoState;                                                 // 0x0085   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0086   (0x0002)  MISSED
	uint64_t                                           VersionHash;                                                // 0x0088   (0x0008)  
};

/// Class /Script/OpacityMicroMap.OpacityMicroMapCollection
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UOpacityMicroMapCollection : public UObject
{ 
public:
	TMap<uint64_t, class UOpacityMicroMapData*>        Collection;                                                 // 0x0028   (0x0050)  
};

/// Class /Script/OpacityMicroMap.OpacityMicroMapAsset
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOpacityMicroMapAsset : public UAssetUserData
{ 
public:
	class UOpacityMicroMapCollection*                  Collection;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/OpacityMicroMap.OMMBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOMMBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpacityMicroMap.OMMBlueprintLibrary.RecreateStaticRaytracedMeshes
	// void RecreateStaticRaytracedMeshes(class UObject* WorldContextObject, bool ForceDisableOpacityMicromapsInput);           // [0x624f810] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OpacityMicroMap.OpacityMicromapPluginSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UOpacityMicromapPluginSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnableOpacityMicromaps;                                    // 0x0038   (0x0001)  
	bool                                               bUseOMMSDKBaker;                                            // 0x0039   (0x0001)  
	bool                                               bBuildOMMsOnUIChanges;                                      // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x003B   (0x0005)  MISSED
};

/// Struct /Script/OpacityMicroMap.OpacityMicromapDesc
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FOpacityMicromapDesc
{ 
	uint32_t                                           Offset;                                                     // 0x0000   (0x0004)  
	uint16_t                                           SubdivisionLevel;                                           // 0x0004   (0x0002)  
	uint16_t                                           Format;                                                     // 0x0006   (0x0002)  
};

#pragma pack(pop)


static_assert(sizeof(FOpacityMicroMapUsageCount) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UOpacityMicroMapData) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UOpacityMicroMapCollection) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UOpacityMicroMapAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOMMBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOpacityMicromapPluginSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FOpacityMicromapDesc) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UOpacityMicroMapData, ArrayData) == 0x0028);
static_assert(offsetof(UOpacityMicroMapData, DescArrayData) == 0x0038);
static_assert(offsetof(UOpacityMicroMapData, DescArrayHistogram) == 0x0048);
static_assert(offsetof(UOpacityMicroMapData, IndexBuffer) == 0x0058);
static_assert(offsetof(UOpacityMicroMapData, IndexHistogram) == 0x0070);
static_assert(offsetof(UOpacityMicroMapCollection, Collection) == 0x0028);
static_assert(offsetof(UOpacityMicroMapAsset, Collection) == 0x0028);
