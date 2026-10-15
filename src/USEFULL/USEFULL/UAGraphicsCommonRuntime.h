// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/UAGraphicsCommonRuntime.ScalarParameterSetting
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FScalarParameterSetting
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	float                                              ResetValue;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/UAGraphicsCommonRuntime.VectorParameterSetting
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FVectorParameterSetting
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FLinearColor                                       Value;                                                      // 0x0010   (0x0010)  
	FLinearColor                                       ResetValue;                                                 // 0x0020   (0x0010)  
};

/// Class /Script/UAGraphicsCommonRuntime.MFCSettingsComponent
/// Size: 0x0128 (296 bytes) (0x0000F8 - 0x000128) align 8 MaxSize: 0x0128
class UMFCSettingsComponent : public UActorComponent
{ 
public:
	class UMaterialParameterCollection*                TargetMFC;                                                  // 0x00F8   (0x0008)  
	TArray<FScalarParameterSetting>                    ScalarParameterSettings;                                    // 0x0100   (0x0010)  
	TArray<FVectorParameterSetting>                    VectorParameterSettings;                                    // 0x0110   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/UAGraphicsCommonRuntime.MFCSettingsComponent.UpdateMFCParamValues
	// void UpdateMFCParamValues(bool bUseResetValue);                                                                          // [0x61ebfe0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/UAGraphicsCommonRuntime.UASceneCheckComponent
/// Size: 0x0178 (376 bytes) (0x0000F8 - 0x000178) align 8 MaxSize: 0x0178
class UUASceneCheckComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x00F8   (0x0080)  MISSED


	/// Functions
	// Function /Script/UAGraphicsCommonRuntime.UASceneCheckComponent.RegisterSelfToSingleton
	// void RegisterSelfToSingleton();                                                                                          // [0x61ebfc4] Final|Native|Public  
};

/// Class /Script/UAGraphicsCommonRuntime.UAShadowSettingComponent
/// Size: 0x0290 (656 bytes) (0x000270 - 0x000290) align 16 MaxSize: 0x0290
class UUAShadowSettingComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(1,5201) /* TEnumAsByte<EShadowMode> */ __um(ShadowMode);                                         // 0x0270   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0271   (0x0003)  MISSED
	int32_t                                            CSMResolutionScale;                                         // 0x0274   (0x0004)  
	bool                                               bEnableCSMCache;                                            // 0x0278   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0279   (0x0003)  MISSED
	float                                              BoundsRadius;                                               // 0x027C   (0x0004)  
	class UDrawSphereComponent*                        PreviewInfluenceRadius;                                     // 0x0280   (0x0008)  
	class UDirectionalLightComponent*                  DirectionalLightComponent;                                  // 0x0288   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(FScalarParameterSetting) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FVectorParameterSetting) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMFCSettingsComponent) == 0x0128); // 296 bytes (0x0000F8 - 0x000128)
static_assert(sizeof(UUASceneCheckComponent) == 0x0178); // 376 bytes (0x0000F8 - 0x000178)
static_assert(sizeof(UUAShadowSettingComponent) == 0x0290); // 656 bytes (0x000270 - 0x000290)
static_assert(offsetof(FScalarParameterSetting, Name) == 0x0000);
static_assert(offsetof(FVectorParameterSetting, Name) == 0x0000);
static_assert(offsetof(FVectorParameterSetting, Value) == 0x0010);
static_assert(offsetof(FVectorParameterSetting, ResetValue) == 0x0020);
static_assert(offsetof(UMFCSettingsComponent, TargetMFC) == 0x00F8);
static_assert(offsetof(UMFCSettingsComponent, ScalarParameterSettings) == 0x0100);
static_assert(offsetof(UMFCSettingsComponent, VectorParameterSettings) == 0x0110);
static_assert(offsetof(UUAShadowSettingComponent, PreviewInfluenceRadius) == 0x0280);
static_assert(offsetof(UUAShadowSettingComponent, DirectionalLightComponent) == 0x0288);
