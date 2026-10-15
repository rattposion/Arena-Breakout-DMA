// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/DLSS.DLSSOverrideSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UDLSSOverrideSettings : public UObject
{ 
public:
	SDK_UNDEFINED(1,4773) /* EDLSSSettingOverride */   __um(EnableDLSSInEditorViewportsOverride);                  // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,4774) /* EDLSSSettingOverride */   __um(EnableScreenpercentageManipulationInDLSSEditorViewportsOverride); // 0x0029   (0x0001)  
	SDK_UNDEFINED(1,4775) /* EDLSSSettingOverride */   __um(EnableDLSSInPlayInEditorViewportsOverride);            // 0x002A   (0x0001)  
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x002B   (0x0001)  
	SDK_UNDEFINED(1,4776) /* EDLSSSettingOverride */   __um(ShowDLSSSDebugOnScreenMessages);                       // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/DLSS.DLSSSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UDLSSSettings : public UObject
{ 
public:
	bool                                               bEnableDLSSD3D12;                                           // 0x0028   (0x0001)  
	bool                                               bEnableDLSSD3D11;                                           // 0x0029   (0x0001)  
	bool                                               bEnableDLSSVulkan;                                          // 0x002A   (0x0001)  
	bool                                               bEnableDLSSInEditorViewports;                               // 0x002B   (0x0001)  
	bool                                               bEnableScreenpercentageManipulationInDLSSEditorViewports;   // 0x002C   (0x0001)  
	bool                                               bEnableDLSSInPlayInEditorViewports;                         // 0x002D   (0x0001)  
	bool                                               bShowDLSSSDebugOnScreenMessages;                            // 0x002E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002F   (0x0001)  MISSED
	FString                                            GenericDLSSBinaryPath;                                      // 0x0030   (0x0010)  
	bool                                               bGenericDLSSBinaryExists;                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	uint32_t                                           NVIDIANGXApplicationId;                                     // 0x0044   (0x0004)  
	FString                                            CustomDLSSBinaryPath;                                       // 0x0048   (0x0010)  
	bool                                               bCustomDLSSBinaryExists;                                    // 0x0058   (0x0001)  
	bool                                               bAllowOTAUpdate;                                            // 0x0059   (0x0001)  
	bool                                               bShowDLSSIncompatiblePluginsToolsWarnings;                  // 0x005A   (0x0001)  
	SDK_UNDEFINED(1,4777) /* EDLSSPreset */            __um(DLAAPreset);                                           // 0x005B   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x005C   (0x0001)  MISSED
	SDK_UNDEFINED(1,4778) /* EDLSSPreset */            __um(DLSSQualityPreset);                                    // 0x005D   (0x0001)  
	SDK_UNDEFINED(1,4779) /* EDLSSPreset */            __um(DLSSBalancedPreset);                                   // 0x005E   (0x0001)  
	SDK_UNDEFINED(1,4780) /* EDLSSPreset */            __um(DLSSPerformancePreset);                                // 0x005F   (0x0001)  
	SDK_UNDEFINED(1,4781) /* EDLSSPreset */            __um(DLSSUltraPerformancePreset);                           // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,4782) /* EDLSSRRPreset */          __um(DLAARRPreset);                                         // 0x0061   (0x0001)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x0062   (0x0001)  MISSED
	SDK_UNDEFINED(1,4783) /* EDLSSRRPreset */          __um(DLSSRRQualityPreset);                                  // 0x0063   (0x0001)  
	SDK_UNDEFINED(1,4784) /* EDLSSRRPreset */          __um(DLSSRRBalancedPreset);                                 // 0x0064   (0x0001)  
	SDK_UNDEFINED(1,4785) /* EDLSSRRPreset */          __um(DLSSRRPerformancePreset);                              // 0x0065   (0x0001)  
	SDK_UNDEFINED(1,4786) /* EDLSSRRPreset */          __um(DLSSRRUltraPerformancePreset);                         // 0x0066   (0x0001)  
	unsigned char                                      UnknownData04_7[0x1];                                       // 0x0067   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UDLSSOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UDLSSSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(offsetof(UDLSSSettings, GenericDLSSBinaryPath) == 0x0030);
static_assert(offsetof(UDLSSSettings, CustomDLSSBinaryPath) == 0x0048);
