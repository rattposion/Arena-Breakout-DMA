// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/StreamlineBlueprint.StreamlineLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
	// EStreamlineFeatureSupport QueryStreamlineFeatureSupport(EStreamlineFeature Feature);                                     // [0x4f17b08] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
	// bool IsStreamlineFeatureSupported(EStreamlineFeature Feature);                                                           // [0x4f17a70] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
	// FStreamlineFeatureRequirements GetStreamlineFeatureInformation(EStreamlineFeature Feature);                              // [0x4f179b8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
	// void BreakStreamlineFeatureRequirements(EStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired); // [0x4f17730] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/StreamlineBlueprint.StreamlineVersion
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FStreamlineVersion
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
	int32_t                                            Build;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/StreamlineBlueprint.StreamlineFeatureRequirements
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FStreamlineFeatureRequirements
{ 
	SDK_UNDEFINED(1,5189) /* EStreamlineFeatureSupport */ __um(Support);                                           // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,5190) /* EStreamlineFeatureRequirementsFlags */ __um(Requirements);                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FStreamlineVersion                                 RequiredOperatingSystemVersion;                             // 0x0004   (0x000C)  
	FStreamlineVersion                                 DetectedOperatingSystemVersion;                             // 0x0010   (0x000C)  
	FStreamlineVersion                                 RequiredDriverVersion;                                      // 0x001C   (0x000C)  
	FStreamlineVersion                                 DetectedDriverVersion;                                      // 0x0028   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(UStreamlineLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FStreamlineVersion) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FStreamlineFeatureRequirements) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredOperatingSystemVersion) == 0x0004);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedOperatingSystemVersion) == 0x0010);
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredDriverVersion) == 0x001C);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedDriverVersion) == 0x0028);
