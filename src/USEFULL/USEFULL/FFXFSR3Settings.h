// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Class /Script/FFXFSR3Settings.FFXFSR3Settings
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align 8 MaxSize: 0x00D8
class UFFXFSR3Settings : public UDeveloperSettings
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               bAutoExposure;                                              // 0x0039   (0x0001)  
	bool                                               bEnabledInEditorViewport;                                   // 0x003A   (0x0001)  
	bool                                               bUseSSRExperimentalDenoiser;                                // 0x003B   (0x0001)  
	bool                                               bRHIBackend;                                                // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            bD3D12Backend;                                              // 0x0040   (0x0004)  
	bool                                               bFrameGenEnabled;                                           // 0x0044   (0x0001)  
	bool                                               bCustomPresent;                                             // 0x0045   (0x0001)  
	bool                                               bCaptureDebugUI;                                            // 0x0046   (0x0001)  
	bool                                               bUpdateGlobalFrameTime;                                     // 0x0047   (0x0001)  
	bool                                               bModifySlateDeltaTime;                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	SDK_UNDEFINED(4,4835) /* EFFXFSR3FrameGenUIMode */ __um(UIMode);                                               // 0x004C   (0x0004)  
	bool                                               bUseDistortionTexture;                                      // 0x0050   (0x0001)  
	bool                                               bD3D12AsyncInterpolation;                                   // 0x0051   (0x0001)  
	bool                                               bD3D12AsyncPresent;                                         // 0x0052   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0053   (0x0001)  MISSED
	SDK_UNDEFINED(4,4836) /* EFFXFSR3PaceRHIFrameMode */ __um(PaceMode);                                           // 0x0054   (0x0004)  
	SDK_UNDEFINED(4,4837) /* EFFXFSR3QualityMode */    __um(QualityMode);                                          // 0x0058   (0x0004)  
	SDK_UNDEFINED(4,4838) /* EFFXFSR3HistoryFormat */  __um(HistoryFormat);                                        // 0x005C   (0x0004)  
	SDK_UNDEFINED(4,4839) /* EFFXFSR3DeDitherMode */   __um(DeDither);                                             // 0x0060   (0x0004)  
	float                                              Sharpness;                                                  // 0x0064   (0x0004)  
	bool                                               bAdjustMipBias;                                             // 0x0068   (0x0001)  
	bool                                               bForceVertexDeformationOutputsVelocity;                     // 0x0069   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	SDK_UNDEFINED(4,4840) /* EFFXFSR3LandscapeHISMMode */ __um(ForceLandscapeHISMMobility);                        // 0x006C   (0x0004)  
	float                                              VelocityFactor;                                             // 0x0070   (0x0004)  
	bool                                               bReactiveMask;                                              // 0x0074   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              ReflectionScale;                                            // 0x0078   (0x0004)  
	float                                              ReflectionLuminanceBias;                                    // 0x007C   (0x0004)  
	float                                              RoughnessScale;                                             // 0x0080   (0x0004)  
	float                                              RoughnessBias;                                              // 0x0084   (0x0004)  
	float                                              RoughnessMaxDistance;                                       // 0x0088   (0x0004)  
	bool                                               bReactiveMaskRoughnessForceMaxDistance;                     // 0x008C   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	float                                              TranslucencyBias;                                           // 0x0090   (0x0004)  
	float                                              TranslucencyLuminanceBias;                                  // 0x0094   (0x0004)  
	float                                              TranslucencyMaxDistance;                                    // 0x0098   (0x0004)  
	SDK_UNDEFINED(1,4841) /* TEnumAsByte<EMaterialShadingModel> */ __um(ReactiveShadingModelID);                   // 0x009C   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              ForceReactiveMaterialValue;                                 // 0x00A0   (0x0004)  
	float                                              ReactiveHistoryTranslucencyBias;                            // 0x00A4   (0x0004)  
	float                                              ReactiveHistoryTranslucencyLumaBias;                        // 0x00A8   (0x0004)  
	float                                              PreDOFTranslucencyScale;                                    // 0x00AC   (0x0004)  
	bool                                               bPreDOFTranslucencyMax;                                     // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              ReactiveMaskDeferredDecalScale;                             // 0x00B4   (0x0004)  
	float                                              ReactiveHistoryDeferredDecalScale;                          // 0x00B8   (0x0004)  
	float                                              ReactiveMaskTAAResponsiveValue;                             // 0x00BC   (0x0004)  
	float                                              ReactiveHistoryTAAResponsiveValue;                          // 0x00C0   (0x0004)  
	float                                              ReactiveMaskCustomStencilScale;                             // 0x00C4   (0x0004)  
	float                                              ReactiveHistoryCustomStencilScale;                          // 0x00C8   (0x0004)  
	int32_t                                            CustomStencilMask;                                          // 0x00CC   (0x0004)  
	int32_t                                            CustomStencilShift;                                         // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData08_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFFXFSR3Settings) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
