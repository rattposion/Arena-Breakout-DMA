// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/XeSSBlueprint.XeSSBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UXeSSBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	// void SetXeSSQualityMode(EXeSSQualityMode QualityMode);                                                                   // [0x4ef9d44] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	// bool IsXeSSSupported();                                                                                                  // [0x4ef9cf8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	// bool GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);                               // [0x4ef9c0c] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	// EXeSSQualityMode GetXeSSQualityMode();                                                                                   // [0x4ef9be8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	// TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();                                                                 // [0x4ef9afc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	// EXeSSQualityMode GetDefaultXeSSQualityMode(FIntPoint ScreenResolution);                                                  // [0x4ef9a60] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UXeSSBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
