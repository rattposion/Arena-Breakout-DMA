// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/Renderer.SmartGIBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USmartGIBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Renderer.SmartGIBlueprintLibrary.IsRayTracingInlineSupport
	// bool IsRayTracingInlineSupport();                                                                                        // [0x6f3b764] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/Renderer.ShadowCaptureParameters
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FShadowCaptureParameters
{ 
	float                                              ESMConstant;                                                // 0x0000   (0x0004)  
	float                                              ESMBlurSize;                                                // 0x0004   (0x0004)  
	float                                              KernelSigmaScale;                                           // 0x0008   (0x0004)  
	bool                                               bESMUseNoise;                                               // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              ESMNoiseFrequency;                                          // 0x0010   (0x0004)  
	bool                                               bESMUseOBB;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            ESMTextureFormat;                                           // 0x0018   (0x0004)  
	float                                              ESMFadeStartDistance;                                       // 0x001C   (0x0004)  
	float                                              ESMFadeEndDistance;                                         // 0x0020   (0x0004)  
	SDK_UNDEFINED(1,3906) /* EShadowCaptureMethod */   __um(Method);                                               // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Renderer.LightPropagationVolumeSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FLightPropagationVolumeSettings
{ 
	bool                                               bOverride_LPVIntensity : 1;                                 // 0x0000:0 (0x0001)  
	bool                                               bOverride_LPVDirectionalOcclusionIntensity : 1;             // 0x0000:1 (0x0001)  
	bool                                               bOverride_LPVDirectionalOcclusionRadius : 1;                // 0x0000:2 (0x0001)  
	bool                                               bOverride_LPVDiffuseOcclusionExponent : 1;                  // 0x0000:3 (0x0001)  
	bool                                               bOverride_LPVSpecularOcclusionExponent : 1;                 // 0x0000:4 (0x0001)  
	bool                                               bOverride_LPVDiffuseOcclusionIntensity : 1;                 // 0x0000:5 (0x0001)  
	bool                                               bOverride_LPVSpecularOcclusionIntensity : 1;                // 0x0000:6 (0x0001)  
	bool                                               bOverride_LPVSize : 1;                                      // 0x0000:7 (0x0001)  
	bool                                               bOverride_LPVSecondaryOcclusionIntensity : 1;               // 0x0001:0 (0x0001)  
	bool                                               bOverride_LPVSecondaryBounceIntensity : 1;                  // 0x0001:1 (0x0001)  
	bool                                               bOverride_LPVGeometryVolumeBias : 1;                        // 0x0001:2 (0x0001)  
	bool                                               bOverride_LPVVplInjectionBias : 1;                          // 0x0001:3 (0x0001)  
	bool                                               bOverride_LPVEmissiveInjectionIntensity : 1;                // 0x0001:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LPVIntensity;                                               // 0x0004   (0x0004)  
	float                                              LPVVplInjectionBias;                                        // 0x0008   (0x0004)  
	float                                              LPVSize;                                                    // 0x000C   (0x0004)  
	float                                              LPVSecondaryOcclusionIntensity;                             // 0x0010   (0x0004)  
	float                                              LPVSecondaryBounceIntensity;                                // 0x0014   (0x0004)  
	float                                              LPVGeometryVolumeBias;                                      // 0x0018   (0x0004)  
	float                                              LPVEmissiveInjectionIntensity;                              // 0x001C   (0x0004)  
	float                                              LPVDirectionalOcclusionIntensity;                           // 0x0020   (0x0004)  
	float                                              LPVDirectionalOcclusionRadius;                              // 0x0024   (0x0004)  
	float                                              LPVDiffuseOcclusionExponent;                                // 0x0028   (0x0004)  
	float                                              LPVSpecularOcclusionExponent;                               // 0x002C   (0x0004)  
	float                                              LPVDiffuseOcclusionIntensity;                               // 0x0030   (0x0004)  
	float                                              LPVSpecularOcclusionIntensity;                              // 0x0034   (0x0004)  
	float                                              LPVFadeRange;                                               // 0x0038   (0x0004)  
	float                                              LPVDirectionalOcclusionFadeRange;                           // 0x003C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(USmartGIBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FShadowCaptureParameters) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLightPropagationVolumeSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
