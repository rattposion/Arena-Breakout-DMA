// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Class /Script/FSR2TemporalUpscaling.FSR2Settings
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UFSR2Settings : public UDeveloperSettings
{ 
public:
	bool                                               bEnabled;                                                   // 0x0038   (0x0001)  
	bool                                               AutoExposure;                                               // 0x0039   (0x0001)  
	bool                                               EnabledInEditorViewport;                                    // 0x003A   (0x0001)  
	bool                                               UseSSRExperimentalDenoiser;                                 // 0x003B   (0x0001)  
	bool                                               UseNativeDX12;                                              // 0x003C   (0x0001)  
	bool                                               UseNativeVulkan;                                            // 0x003D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	SDK_UNDEFINED(4,4853) /* EFSR2QualityMode */       __um(QualityMode);                                          // 0x0040   (0x0004)  
	SDK_UNDEFINED(4,4854) /* EFSR2HistoryFormat */     __um(HistoryFormat);                                        // 0x0044   (0x0004)  
	float                                              Sharpness;                                                  // 0x0048   (0x0004)  
	bool                                               AdjustMipBias;                                              // 0x004C   (0x0001)  
	bool                                               ReactiveMask;                                               // 0x004D   (0x0001)  
	bool                                               ForceVertexDeformationOutputsVelocity;                      // 0x004E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x004F   (0x0001)  MISSED
	float                                              ReflectionScale;                                            // 0x0050   (0x0004)  
	float                                              ReflectionLuminanceBias;                                    // 0x0054   (0x0004)  
	float                                              RoughnessScale;                                             // 0x0058   (0x0004)  
	float                                              RoughnessBias;                                              // 0x005C   (0x0004)  
	float                                              RoughnessMaxDistance;                                       // 0x0060   (0x0004)  
	bool                                               ReactiveMaskRoughnessForceMaxDistance;                      // 0x0064   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              TranslucencyBias;                                           // 0x0068   (0x0004)  
	float                                              TranslucencyLuminanceBias;                                  // 0x006C   (0x0004)  
	float                                              TranslucencyMaxDistance;                                    // 0x0070   (0x0004)  
	float                                              PreDOFTranslucencyScale;                                    // 0x0074   (0x0004)  
	bool                                               PreDOFTranslucencyMax;                                      // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFSR2Settings) == 0x0080); // 128 bytes (0x000038 - 0x000080)
