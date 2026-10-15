// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMaterialShaderQualitySettings : public UObject
{ 
public:
	TMap<FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                          // 0x0028   (0x0050)  
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x000E (14 bytes) (0x000000 - 0x00000E) align 1 MaxSize: 0x000E
struct FMaterialQualityOverrides
{ 
	bool                                               bDiscardQualityDuringCook;                                  // 0x0000   (0x0001)  
	bool                                               bEnableOverride;                                            // 0x0001   (0x0001)  
	bool                                               bForceFullyRough;                                           // 0x0002   (0x0001)  
	bool                                               bForceNonMetal;                                             // 0x0003   (0x0001)  
	bool                                               bForceDisableLMDirectionality;                              // 0x0004   (0x0001)  
	bool                                               bForceLQReflections;                                        // 0x0005   (0x0001)  
	bool                                               bForceDisablePreintegratedGF;                               // 0x0006   (0x0001)  
	bool                                               bDisableMaterialNormalCalculation;                          // 0x0007   (0x0001)  
	SDK_UNDEFINED(1,5029) /* EMobileShadowQuality */   __um(MobileShadowQuality);                                  // 0x0008   (0x0001)  
	bool                                               bDisableAdditiveReflection;                                 // 0x0009   (0x0001)  
	bool                                               bDisableMaterialPlanarReflection;                           // 0x000A   (0x0001)  
	bool                                               bCalcILCPerVertex;                                          // 0x000B   (0x0001)  
	bool                                               b1dSHForTransferTexture;                                    // 0x000C   (0x0001)  
	bool                                               bDisableGeometricSpecularAA;                                // 0x000D   (0x0001)  
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UShaderPlatformQualitySettings : public UObject
{ 
public:
	FMaterialQualityOverrides                          QualityOverrides[4];                                        // 0x0028   (0x0038)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMaterialShaderQualitySettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FMaterialQualityOverrides) == 0x000E); // 14 bytes (0x000000 - 0x00000E)
static_assert(sizeof(UShaderPlatformQualitySettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(offsetof(UMaterialShaderQualitySettings, ForwardSettingMap) == 0x0028);
static_assert(offsetof(UShaderPlatformQualitySettings, QualityOverrides) == 0x0028);
