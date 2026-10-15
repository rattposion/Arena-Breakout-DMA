// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/DLSSBlueprint.DLSSLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDLSSLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
	// void SetDLSSSharpness(float Sharpness);                                                                                  // [0x4d9a638] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.SetDLSSMode
	// void SetDLSSMode(class UObject* WorldContextObject, UDLSSMode DLSSMode);                                                 // [0x4d9a558] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
	// UDLSSSupport QueryDLSSSupport();                                                                                         // [0x4d9a534] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
	// UDLSSSupport QueryDLSSRRSupport();                                                                                       // [0x4d9a510] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsRayTracingAvailable
	// bool IsRayTracingAvailable();                                                                                            // [0x4d9a4f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSSupported
	// bool IsDLSSSupported();                                                                                                  // [0x4d9a4d4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
	// bool IsDLSSRRSupported();                                                                                                // [0x4d9a47c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
	// bool IsDLSSRREnabled();                                                                                                  // [0x4d9a458] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
	// bool IsDLSSModeSupported(UDLSSMode DLSSMode);                                                                            // [0x4d9a3c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
	// bool IsDLSSEnabled();                                                                                                    // [0x4d9a39c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
	// bool IsDLAAEnabled();                                                                                                    // [0x4d9a33c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
	// TArray<UDLSSMode> GetSupportedDLSSModes();                                                                               // [0x4d9a250] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
	// float GetDLSSSharpness();                                                                                                // [0x4d9a1d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
	// void GetDLSSScreenPercentageRange(float& MinScreenPercentage, float& MaxScreenPercentage);                               // [0x4d9a0e0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
	// void GetDLSSRRMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);                      // [0x4d99fc0] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
	// void GetDLSSModeInformation(UDLSSMode DLSSMode, FVector2D ScreenResolution, bool& bIsSupported, float& OptimalScreenPercentage, bool& bIsFixedScreenPercentage, float& MinScreenPercentage, float& MaxScreenPercentage, float& OptimalSharpness); // [0x4d99ca8] Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMode
	// UDLSSMode GetDLSSMode();                                                                                                 // [0x4d99c84] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
	// void GetDLSSMinimumDriverVersion(int32_t& MinDriverVersionMajor, int32_t& MinDriverVersionMinor);                        // [0x4d99b64] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
	// UDLSSMode GetDefaultDLSSMode();                                                                                          // [0x4d9a1f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSSRR
	// void EnableDLSSRR(bool bEnabled);                                                                                        // [0x4d99adc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLSS
	// void EnableDLSS(bool bEnabled);                                                                                          // [0x4d99a54] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/DLSSBlueprint.DLSSLibrary.EnableDLAA
	// void EnableDLAA(bool bEnabled);                                                                                          // [0x4d99980] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UDLSSLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
