// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/PixUI.PixUIBrushWrapper
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPixUIBrushWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/PixUI.PixUIBPLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPixUIBPLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_Version
	// FString PixUI_Version();                                                                                                 // [0x5265f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_Tick
	// void PixUI_Tick(float fDeltaTime);                                                                                       // [0x5265ee8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_StartupEx
	// bool PixUI_StartupEx(FString strCachePathForWrite, bool bSupportAsyncModel);                                             // [0x5265de4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_Startup
	// bool PixUI_Startup(FString strCachePathForWrite);                                                                        // [0x5265ce4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_Shutdown
	// bool PixUI_Shutdown();                                                                                                   // [0x5265cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetTickIntervalSec
	// void PixUI_SetTickIntervalSec(float fTickIntervalSec);                                                                   // [0x519010c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetSupportTextShape
	// void PixUI_SetSupportTextShape(bool beSupportTextShape);                                                                 // [0x5265c38] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetSupportEngineFont
	// void PixUI_SetSupportEngineFont(bool bSupportEngineFont);                                                                // [0x5265bb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetSecretKey
	// void PixUI_SetSecretKey(FString strSecretKey);                                                                           // [0x5265a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetPxLibDefaultVersionTag
	// void PixUI_SetPxLibDefaultVersionTag(int32_t nNewPxLibVersionTag);                                                       // [0x5265988] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxLayerId
	// void PixUI_SetPixUIMaxLayerId(int32_t nMaxLayerId);                                                                      // [0x5265900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureTotalSize
	// void PixUI_SetPixUIMaxDynamicTextureTotalSize(int32_t nMaxDynamicTextureTotalSize);                                      // [0x5265878] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCSize
	// void PixUI_SetPixUIMaxDynamicTextureGCSize(int32_t nMaxDynamicTextureGCSize);                                            // [0x52657f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetPixUIMaxDynamicTextureGCRate
	// void PixUI_SetPixUIMaxDynamicTextureGCRate(float fMaxGCRate);                                                            // [0x5265768] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetMobileUseTouchEvent
	// void PixUI_SetMobileUseTouchEvent(bool bUseTouchEvent);                                                                  // [0x52656e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetMatRootPath
	// void PixUI_SetMatRootPath(FString strMatRootPath);                                                                       // [0x5265648] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetMatBasePath
	// void PixUI_SetMatBasePath(FString strMatBasePath);                                                                       // [0x52655b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetMatAsyncLoad
	// void PixUI_SetMatAsyncLoad(bool bMatAsyncLoad);                                                                          // [0x5265528] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetFontTypeFaceName
	// void PixUI_SetFontTypeFaceName(FString strFontName, EPxFontFaceType ePxFontTypeFace, FString strFontTypeFaceName);       // [0x526537c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetExternalInterface
	// void PixUI_SetExternalInterface(TScriptInterface<Class> scriptInterfaceExternal);                                        // [0x52652d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetExtBpCallSupportThrowException
	// void PixUI_SetExtBpCallSupportThrowException(bool bSupportThrowExceptio);                                                // [0x526524c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureUpdateMode
	// void PixUI_SetDynamicTextureUpdateMode(EPxDynamicTextureUpdateMode eUpdateMode);                                         // [0x52651c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetDynamicTextureFilter
	// void PixUI_SetDynamicTextureFilter(TEnumAsByte<TextureFilter> eTextureFilter);                                           // [0x526513c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetDynamicFixFontSize
	// void PixUI_SetDynamicFixFontSize(bool bOpenDynamicFix);                                                                  // [0x5265068] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetDrawEffectNoPixelSnapping
	// void PixUI_SetDrawEffectNoPixelSnapping(bool bNoPixelSnapping);                                                          // [0x5264fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetDefaultFontSize
	// void PixUI_SetDefaultFontSize(int32_t nFontSize);                                                                        // [0x5264f18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetDefaultFont
	// void PixUI_SetDefaultFont(FString strFontName);                                                                          // [0x5264e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetCoreTickDuration
	// void PixUI_SetCoreTickDuration(int32_t nDurationCount);                                                                  // [0x5264df8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetAutoTick
	// void PixUI_SetAutoTick(bool bAutoTick);                                                                                  // [0x5264d70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetAsyncMode
	// void PixUI_SetAsyncMode(bool beRunAsyncMode);                                                                            // [0x5264ca8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_SetAsyncBpCallWaitOutTime
	// void PixUI_SetAsyncBpCallWaitOutTime(float fTimeOutSecond);                                                              // [0x5264c18] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_RHIShaderPlatform
	// int32_t PixUI_RHIShaderPlatform();                                                                                       // [0x5264acc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_RHIShaderLevel
	// int32_t PixUI_RHIShaderLevel();                                                                                          // [0x5264ab4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_RemoveSystemFont
	// void PixUI_RemoveSystemFont(FString strFontName);                                                                        // [0x5264ae4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_PrintProfilerInfo
	// void PixUI_PrintProfilerInfo();                                                                                          // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_PlatformOSVersionCode
	// float PixUI_PlatformOSVersionCode();                                                                                     // [0x5264a8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_PlatformOSVersion
	// FString PixUI_PlatformOSVersion();                                                                                       // [0x52649a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_PlatformCode
	// int32_t PixUI_PlatformCode();                                                                                            // [0x4b95918] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_Platform
	// FString PixUI_Platform();                                                                                                // [0x526485c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsSupportTextShape
	// bool PixUI_IsSupportTextShape();                                                                                         // [0x5264844] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsStartUp
	// bool PixUI_IsStartUp();                                                                                                  // [0x5264820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsRHIShaderVulkan
	// bool PixUI_IsRHIShaderVulkan();                                                                                          // [0x52647fc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGLES2
	// bool PixUI_IsRHIShaderOpenGLES2();                                                                                       // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsRHIShaderOpenGL
	// bool PixUI_IsRHIShaderOpenGL();                                                                                          // [0x52647d8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsRHIShaderMetal
	// bool PixUI_IsRHIShaderMetal();                                                                                           // [0x52647b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsRHIShaderDX
	// bool PixUI_IsRHIShaderDX();                                                                                              // [0x5264790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsOsBit64
	// bool PixUI_IsOsBit64();                                                                                                  // [0x1bfc3b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsOsBit32
	// bool PixUI_IsOsBit32();                                                                                                  // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsMobileUseTouchEvent
	// bool PixUI_IsMobileUseTouchEvent();                                                                                      // [0x5264778] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsDynamicFixFontSize
	// bool PixUI_IsDynamicFixFontSize();                                                                                       // [0x5264754] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_IsAutoTick
	// bool PixUI_IsAutoTick();                                                                                                 // [0x526473c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetWindowSlotObject
	// class UObject* PixUI_GetWindowSlotObject(int32_t nWindowID, FString strTagId);                                           // [0x5264608] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetTotalFontCount
	// int32_t PixUI_GetTotalFontCount();                                                                                       // [0x52645e4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetTickIntervalSec
	// float PixUI_GetTickIntervalSec();                                                                                        // [0x52645c8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetSupportPxLibVersionTagArray
	// void PixUI_GetSupportPxLibVersionTagArray(TArray<int32_t>& arraySupportPxLibVersionTag);                                 // [0x526449c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetSupportEngineFont
	// bool PixUI_GetSupportEngineFont();                                                                                       // [0x5264478] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetPxLibDefaultVersionTag
	// int32_t PixUI_GetPxLibDefaultVersionTag();                                                                               // [0x5264454] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetSlotObject
	// class UObject* PixUI_GetPixUIWidgetSlotObject(int32_t nPxWidgetID, FString strSlotTagId);                                // [0x5264350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetPixUIWidgetByID
	// class UPixUIWidget* PixUI_GetPixUIWidgetByID(int32_t nPxWidgetID);                                                       // [0x52642b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxLayerId
	// int32_t PixUI_GetPixUIMaxLayerId();                                                                                      // [0x52642a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureTotalSize
	// int32_t PixUI_GetPixUIMaxDynamicTextureTotalSize();                                                                      // [0x5264288] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCSize
	// int32_t PixUI_GetPixUIMaxDynamicTextureGCSize();                                                                         // [0x5264270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetPixUIMaxDynamicTextureGCRate
	// float PixUI_GetPixUIMaxDynamicTextureGCRate();                                                                           // [0x5264254] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetMatRootPath
	// FString PixUI_GetMatRootPath();                                                                                          // [0x5264168] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetMatBasePath
	// FString PixUI_GetMatBasePath();                                                                                          // [0x526407c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetMatAsyncLoad
	// bool PixUI_GetMatAsyncLoad();                                                                                            // [0x5264064] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetFontTypeFaceName
	// FString PixUI_GetFontTypeFaceName(FString strFontName, EPxFontFaceType ePxFontTypeFace);                                 // [0x5263f54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetFontPathByIndex
	// FString PixUI_GetFontPathByIndex(int32_t nIndex);                                                                        // [0x5263ea8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetFontPath
	// bool PixUI_GetFontPath(FString strFontName, FString& strOutFontPath);                                                    // [0x5263d3c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetFontNameByIndex
	// FString PixUI_GetFontNameByIndex(int32_t nIndex);                                                                        // [0x5263c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetExtBpCallSupportThrowException
	// bool PixUI_GetExtBpCallSupportThrowException();                                                                          // [0x5263c78] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureUpdateMode
	// EPxDynamicTextureUpdateMode PixUI_GetDynamicTextureUpdateMode();                                                         // [0x5263c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetDynamicTextureFilter
	// TEnumAsByte<TextureFilter> PixUI_GetDynamicTextureFilter();                                                              // [0x5263c48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetDrawEffectNoPixelSnapping
	// bool PixUI_GetDrawEffectNoPixelSnapping();                                                                               // [0x5263c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetDefaultFontSize
	// void PixUI_GetDefaultFontSize(int32_t& nOutFontSize);                                                                    // [0x5263b58] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetDefaultFont
	// void PixUI_GetDefaultFont(FString& strFontName);                                                                         // [0x5263a64] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetCoreTickDuration
	// int32_t PixUI_GetCoreTickDuration();                                                                                     // [0x5263a4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetCachePath
	// void PixUI_GetCachePath(FString& strOutCachePath);                                                                       // [0x5263958] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetAsyncMode
	// bool PixUI_GetAsyncMode();                                                                                               // [0x5263940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_GetAsyncBpCallWaitOutTime
	// float PixUI_GetAsyncBpCallWaitOutTime();                                                                                 // [0x5263920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_FindByWindowID
	// class UPixUIWidget* PixUI_FindByWindowID(int32_t nWindowID);                                                             // [0x5263888] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_DebugInfoSwitch
	// void PixUI_DebugInfoSwitch(EPxDebugInfo EPxDebugInfo, bool bOpen);                                                       // [0x5263798] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CreateWidget
	// class UPixUIWidget* PixUI_CreateWidget();                                                                                // [0x5263774] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CreateViewPortWidget
	// class UPixUIViewPortWidget* PixUI_CreateViewPortWidget();                                                                // [0x5263750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvasEx
	// class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvasEx(class UCanvasPanel* pParentCanvas);                        // [0x5263698] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CreateViewPortAddToCanvas
	// class UPixUIViewPortWidget* PixUI_CreateViewPortAddToCanvas(class UCanvasPanel* pParentCanvas, FAnchors& Anchors, FMargin& Margin); // [0x5263534] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CreateScriptVM
	// class UPixUIScriptVM* PixUI_CreateScriptVM();                                                                            // [0x5263510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvasEx
	// class UPixUIWidget* PixUI_CreateAddToCanvasEx(class UCanvasPanel* pParentCanvas);                                        // [0x5263458] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CreateAddToCanvas
	// class UPixUIWidget* PixUI_CreateAddToCanvas(class UCanvasPanel* p_ParentCanvas, FAnchors& Anchors, FMargin& Margin);     // [0x52632f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_ClearCacheFile
	// void PixUI_ClearCacheFile();                                                                                             // [0x52632e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_CallPixUIAssetGC
	// bool PixUI_CallPixUIAssetGC(int32_t nViewId);                                                                            // [0x526324c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_BeDebugInfoOpen
	// bool PixUI_BeDebugInfoOpen(EPxDebugInfo EPxDebugInfo);                                                                   // [0x52631a8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIBPLibrary.PixUI_AddSystemFont
	// void PixUI_AddSystemFont(FString strFontName, FString strFontPath);                                                      // [0x5262ff8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PixUIExternalInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPixUIExternalInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/PixUI.PixUIExternalInterface.OnWidgetLoad
	// class UWidget* OnWidgetLoad(FString strWidgetPath, FString strWidgetTag);                                                // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/PixUI.PixUIExternalInterface.OnSlateBrushLoad
	// class UPixUIBrushWrapper* OnSlateBrushLoad(FString strBrushPath);                                                        // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/PixUI.PixUIExternalInterface.OnFileLoad
	// bool OnFileLoad(FString strFilePath, FDelegateProperty& callDelegate);                                                   // [0x182d6bc] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/PixUI.PixUIInput
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UPixUIInput : public UObject
{ 
public:
	SDK_UNDEFINED(16,4856) /* FDelegateProperty */     __um(DelegateActivateInput);                                // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,4857) /* FDelegateProperty */     __um(DelegateDeactivateInput);                              // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/PixUI.PixUIInput.OnInputText
	// void OnInputText(FString strInsert, bool bEndInput, bool bLostFocus, bool bReplace);                                     // [0x5268630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIInput.Get
	// class UPixUIInput* Get();                                                                                                // [0x5266bf4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PixUIRenderTarget
/// Size: 0x0158 (344 bytes) (0x000028 - 0x000158) align 8 MaxSize: 0x0158
class UPixUIRenderTarget : public UObject
{ 
public:
	SDK_UNDEFINED(16,4858) /* FMulticastInlineDelegate */ __um(DelegateOnCreate);                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,4859) /* FMulticastInlineDelegate */ __um(DelegateOnClose);                                   // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,4860) /* FMulticastInlineDelegate */ __um(DelegateOnDestroy);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,4861) /* FMulticastInlineDelegate */ __um(DelegateOnLoaded);                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,4862) /* FMulticastInlineDelegate */ __um(DelegateOnScriptStateInit);                         // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,4863) /* FMulticastInlineDelegate */ __um(DelegateOnScriptStateDone);                         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,4864) /* FMulticastInlineDelegate */ __um(DelegateOnInternalError);                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,4865) /* FDelegateProperty */     __um(DelegateOnExternalOpen);                               // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,4866) /* FMulticastInlineDelegate */ __um(DelegateOnExternalClose);                           // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,4867) /* FMulticastInlineDelegate */ __um(DelegateOnMessage);                                 // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4868) /* FMulticastInlineDelegate */ __um(DelegateOnAlert);                                   // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4869) /* FDelegateProperty */     __um(DelegateOnConfirm);                                    // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,4870) /* FDelegateProperty */     __um(DelegateOnPrompt);                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,4871) /* FMulticastInlineDelegate */ __um(DelegateOnAppForeground);                           // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,4872) /* FMulticastInlineDelegate */ __um(DelegateOnAppBackground);                           // 0x0108   (0x0010)  
	int32_t                                            pxLibVersionTag;                                            // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_7[0x3C];                                      // 0x011C   (0x003C)  MISSED


	/// Functions
	// Function /Script/PixUI.PixUIRenderTarget.SetExternalRenderTarget2D
	// void SetExternalRenderTarget2D(class UTextureRenderTarget2D* pTextureRenderTarget);                                      // [0x5269974] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.SetBeSupportEventCallNested
	// void SetBeSupportEventCallNested(bool bSupportEventCallNested);                                                          // [0x5269810] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.SetBeDelayCallMessage
	// void SetBeDelayCallMessage(bool bDelayMessage);                                                                          // [0x52696bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.SendPxMessage
	// FString SendPxMessage(FString strMessage);                                                                               // [0x5269394] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.Resize
	// void Resize(int32_t nNewWidth, int32_t nNewHeight);                                                                      // [0x526915c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.ReScale
	// void ReScale(float fScale);                                                                                              // [0x52690c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.PostPxMessage
	// int32_t PostPxMessage(FString strMessage);                                                                               // [0x5268d14] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.OnExternalTouchEvent
	// void OnExternalTouchEvent(FVector2D& v2dPosTouch, int32_t nPointerIndex, EPxTouchType ETouchType);                       // [0x52684ac] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.OnExternalTextInput
	// void OnExternalTextInput(FString strNewInput, bool beEndInput, bool beLostFocus, bool beReplace);                        // [0x52682f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.OnExternalMouseEvent
	// void OnExternalMouseEvent(FVector2D& v2dPosMouse, FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent); // [0x52680fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.OnExternalKeyBoardEvent
	// void OnExternalKeyBoardEvent(FKeyEvent& KeyEvent, EPxKeyEventType eEventType);                                           // [0x5267f54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.LoadPageFromUrl
	// int32_t LoadPageFromUrl(FString strUrl);                                                                                 // [0x5267900] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.LoadPageFromGameAssetPath
	// int32_t LoadPageFromGameAssetPath(FString strAssetPath);                                                                 // [0x5267798] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.LoadPageFromData
	// int32_t LoadPageFromData(TArray<char>& ArrayData, FString strBasePath);                                                  // [0x5267540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.IsPxViewValid
	// bool IsPxViewValid();                                                                                                    // [0x52674d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.HistoryGo
	// void HistoryGo(int32_t nStep);                                                                                           // [0x5267408] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.GetRenderTarget2DWidth
	// int32_t GetRenderTarget2DWidth();                                                                                        // [0x5266f38] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.GetRenderTarget2DHeight
	// int32_t GetRenderTarget2DHeight();                                                                                       // [0x5266f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.GetRenderTarget2D
	// class UTextureRenderTarget2D* GetRenderTarget2D();                                                                       // [0x5266efc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.GetCoreLibVersion
	// FString GetCoreLibVersion();                                                                                             // [0x5266c18] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.DestroyPage
	// void DestroyPage();                                                                                                      // [0x5266634] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.Create
	// int32_t Create(int32_t nWidth, int32_t nHeight, float fScale, bool bAsyncMode, bool bGammaSpace, bool bAntiAliasing);    // [0x52661a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIRenderTarget.ClosePage
	// void ClosePage();                                                                                                        // [0x5266064] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PixUIScriptVM
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UPixUIScriptVM : public UObject
{ 
public:
	SDK_UNDEFINED(16,4873) /* FMulticastInlineDelegate */ __um(DelegateOnCreate);                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,4874) /* FMulticastInlineDelegate */ __um(DelegateOnClose);                                   // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,4875) /* FMulticastInlineDelegate */ __um(DelegateOnDestroy);                                 // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,4876) /* FMulticastInlineDelegate */ __um(DelegateOnLoaded);                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,4877) /* FMulticastInlineDelegate */ __um(DelegateOnScriptStateInit);                         // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,4878) /* FMulticastInlineDelegate */ __um(DelegateOnScriptStateDone);                         // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,4879) /* FMulticastInlineDelegate */ __um(DelegateOnInternalError);                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,4880) /* FDelegateProperty */     __um(DelegateOnExternalOpen);                               // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,4881) /* FMulticastInlineDelegate */ __um(DelegateOnExternalClose);                           // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,4882) /* FMulticastInlineDelegate */ __um(DelegateOnMessage);                                 // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4883) /* FMulticastInlineDelegate */ __um(DelegateOnAppForeground);                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4884) /* FMulticastInlineDelegate */ __um(DelegateOnAppBackground);                           // 0x00D8   (0x0010)  
	int32_t                                            pxLibVersionTag;                                            // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x1C];                                      // 0x00EC   (0x001C)  MISSED


	/// Functions
	// Function /Script/PixUI.PixUIScriptVM.SetScriptGlobalString
	// void SetScriptGlobalString(FString strName, FString strKey, FString strValue);                                           // [0x5269d14] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.SetScriptGlobalNumber
	// void SetScriptGlobalNumber(FString strName, FString strKey, float fValue);                                               // [0x5269bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.SetScriptGlobalBoolean
	// void SetScriptGlobalBoolean(FString strName, FString strKey, bool bValue);                                               // [0x5269a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.SetBeSupportEventCallNested
	// void SetBeSupportEventCallNested(bool bSupportEventCallNested);                                                          // [0x52698c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.SetBeDelayCallMessage
	// void SetBeDelayCallMessage(bool bDelayMessage);                                                                          // [0x5269774] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.SendPxMessage
	// FString SendPxMessage(FString strMessage, int32_t nWaitMS);                                                              // [0x52694b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.PostPxMessage
	// int32_t PostPxMessage(FString strMessage, int32_t nWaitMS);                                                              // [0x5268e0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.LoadUrl
	// int32_t LoadUrl(FString strUrl, int32_t nWaitMS);                                                                        // [0x5267e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.IsValid
	// bool IsValid();                                                                                                          // [0x526751c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.IsPxVmValid
	// bool IsPxVmValid();                                                                                                      // [0x52674fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.GetScriptGlobalString
	// FString GetScriptGlobalString(FString strName, FString strKey);                                                          // [0x5267280] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.GetScriptGlobalNumber
	// float GetScriptGlobalNumber(FString strName, FString strKey);                                                            // [0x5267164] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.GetScriptGlobalBoolean
	// bool GetScriptGlobalBoolean(FString strName, FString strKey);                                                            // [0x5266f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.GetPxVMId
	// int32_t GetPxVMId();                                                                                                     // [0x5266eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.GetCoreLibVersion
	// FString GetCoreLibVersion();                                                                                             // [0x5266d54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.DoFile
	// int32_t DoFile(FString strFilePath, int32_t nWaitMS);                                                                    // [0x5266af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.DoBufferByAssetPath
	// int32_t DoBufferByAssetPath(FString strAssetPath, FString strName, FString strModuleName, int32_t nWaitMS);              // [0x5266924] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.DoBuffer
	// int32_t DoBuffer(TArray<char>& ArrayData, FString strBasePath, FString strName, FString strModuleName, int32_t nWaitMS); // [0x52666f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.DestroyVM
	// int32_t DestroyVM(int32_t nWaitMS);                                                                                      // [0x5266648] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.CreateScriptGlobal
	// void CreateScriptGlobal(FString strName);                                                                                // [0x52664f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.Create
	// int32_t Create(bool bAsyncMode, int32_t nWaitMS);                                                                        // [0x52663fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIScriptVM.CloseVM
	// int32_t CloseVM(int32_t nWaitMS);                                                                                        // [0x52660e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PixUIViewPortWidget
/// Size: 0x02C8 (712 bytes) (0x000290 - 0x0002C8) align 8 MaxSize: 0x02C8
class UPixUIViewPortWidget : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,4885) /* FDelegateProperty */     __um(PixUIWidgetOpenDelegate);                              // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,4886) /* FDelegateProperty */     __um(PixUIWidgetConfirmDelegate);                           // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,4887) /* FDelegateProperty */     __um(PixUIWidgetPromptDelegate);                            // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x02C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/PixUI.PixUIViewPortWidget.SendPxMessage
	// FString SendPxMessage(FString strMessage);                                                                               // [0x52695ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.PostPxViewMessage
	// void PostPxViewMessage(FString strMessage);                                                                              // [0x5268fe8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.PostPxMessage
	// int32_t PostPxMessage(FString strMessage);                                                                               // [0x5268f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.OnPixUITransformDelegate
	// void OnPixUITransformDelegate(EPxWidgetTransformType EPxWidgetTransformType, int32_t nParam1, int32_t nParam2);          // [0x5268bd8] Final|Native|Public  
	// Function /Script/PixUI.PixUIViewPortWidget.OnPixUIPromptDelegate
	// FString OnPixUIPromptDelegate(FString strTip, FString strDefault);                                                       // [0x5268aa8] Final|Native|Public  
	// Function /Script/PixUI.PixUIViewPortWidget.OnPixUIOpenDelegate
	// int32_t OnPixUIOpenDelegate(FString strUrl, FString strName, FString strFeatures, bool bReplace);                        // [0x52688d8] Final|Native|Public  
	// Function /Script/PixUI.PixUIViewPortWidget.OnPixUIConfirmDelegate
	// bool OnPixUIConfirmDelegate(FString strConfirmMsg);                                                                      // [0x52687d0] Final|Native|Public  
	// Function /Script/PixUI.PixUIViewPortWidget.LoadPxViewFromUrl
	// int32_t LoadPxViewFromUrl(FString strUrl);                                                                               // [0x5267cf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.LoadPxViewFromGameAssetPath
	// int32_t LoadPxViewFromGameAssetPath(FString strAssetPath);                                                               // [0x5267c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.LoadPxViewFromData
	// int32_t LoadPxViewFromData(TArray<char>& ArrayData, FString strRootPath);                                                // [0x5267abc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.LoadPageFromUrl
	// int32_t LoadPageFromUrl(FString strUrl);                                                                                 // [0x52679b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.LoadPageFromGameAssetPath
	// int32_t LoadPageFromGameAssetPath(FString strAssetPath);                                                                 // [0x526784c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.LoadPageFromData
	// int32_t LoadPageFromData(TArray<char>& ArrayData, FString strRootPath);                                                  // [0x526766c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.GetPixUIWidget
	// class UPixUIWidget* GetPixUIWidget();                                                                                    // [0x5266e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.ClosePxView
	// void ClosePxView();                                                                                                      // [0x526608c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIViewPortWidget.ClosePage
	// void ClosePage();                                                                                                        // [0x5266078] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PixUIWidget
/// Size: 0x0360 (864 bytes) (0x000158 - 0x000360) align 8 MaxSize: 0x0360
class UPixUIWidget : public UCanvasPanel
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0158   (0x0008)  MISSED
	SDK_UNDEFINED(16,4888) /* FMulticastInlineDelegate */ __um(DelegateOnCreate);                                  // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,4889) /* FMulticastInlineDelegate */ __um(DelegateOnClose);                                   // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,4890) /* FMulticastInlineDelegate */ __um(DelegateOnDestroy);                                 // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,4891) /* FMulticastInlineDelegate */ __um(DelegateOnLoaded);                                  // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,4892) /* FMulticastInlineDelegate */ __um(DelegateOnScriptStateInit);                         // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,4893) /* FMulticastInlineDelegate */ __um(DelegateOnScriptStateDone);                         // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,4894) /* FMulticastInlineDelegate */ __um(DelegateOnInternalError);                           // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,4895) /* FDelegateProperty */     __um(DelegateOnExternalOpen);                               // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,4896) /* FMulticastInlineDelegate */ __um(DelegateOnExternalClose);                           // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,4897) /* FMulticastInlineDelegate */ __um(DelegateOnMessage);                                 // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,4898) /* FMulticastInlineDelegate */ __um(DelegateOnAlert);                                   // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,4899) /* FDelegateProperty */     __um(DelegateOnConfirm);                                    // 0x0210   (0x0010)  
	SDK_UNDEFINED(16,4900) /* FDelegateProperty */     __um(DelegateOnPrompt);                                     // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,4901) /* FMulticastInlineDelegate */ __um(DelegateOnTransform);                               // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,4902) /* FMulticastInlineDelegate */ __um(DelegateOnAppForeground);                           // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,4903) /* FMulticastInlineDelegate */ __um(DelegateOnAppBackground);                           // 0x0250   (0x0010)  
	SDK_UNDEFINED(16,4904) /* FDelegateProperty */     __um(DelegateHookKeyEvent);                                 // 0x0260   (0x0010)  
	bool                                               bIsAsync;                                                   // 0x0270   (0x0001)  
	bool                                               bIsForcePaint;                                              // 0x0271   (0x0001)  
	bool                                               bIsLazyReleaseMode;                                         // 0x0272   (0x0001)  
	SDK_UNDEFINED(1,4905) /* EPxWidgetBatchType */     __um(batchType);                                            // 0x0273   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0274   (0x0004)  MISSED
	FText                                              TextDefaultUrl;                                             // 0x0278   (0x0018)  
	bool                                               bIsStateNodeMode;                                           // 0x0290   (0x0001)  
	bool                                               bIsRHIRender;                                               // 0x0291   (0x0001)  
	bool                                               bIsRHIRenderAntiAliasing;                                   // 0x0292   (0x0001)  
	bool                                               bPxSlotTopHit;                                              // 0x0293   (0x0001)  
	bool                                               bIsRetainMode;                                              // 0x0294   (0x0001)  
	bool                                               bNoPixelSnapping;                                           // 0x0295   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0296   (0x0002)  MISSED
	int32_t                                            pxLibVersionTag;                                            // 0x0298   (0x0004)  
	unsigned char                                      UnknownData03_7[0xC4];                                      // 0x029C   (0x00C4)  MISSED


	/// Functions
	// Function /Script/PixUI.PixUIWidget.ShowNextDrawItem
	// void ShowNextDrawItem();                                                                                                 // [0x526c634] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.ShowNextDrawBatch
	// void ShowNextDrawBatch();                                                                                                // [0x526c5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.ShowAllDrawItem
	// void ShowAllDrawItem();                                                                                                  // [0x526c5ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.ShowAllDrawBatch
	// void ShowAllDrawBatch();                                                                                                 // [0x526c568] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SetScriptGlobalString
	// void SetScriptGlobalString(FString strName, FString strKey, FString strValue);                                           // [0x526c3ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SetScriptGlobalNumber
	// void SetScriptGlobalNumber(FString strName, FString strKey, float fValue);                                               // [0x526c254] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SetScriptGlobalBoolean
	// void SetScriptGlobalBoolean(FString strName, FString strKey, bool bValue);                                               // [0x526c0a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SetBeSupportEventCallNested
	// void SetBeSupportEventCallNested(bool bSupportEventCallNested);                                                          // [0x526bff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SetBeDelayCallMessage
	// void SetBeDelayCallMessage(bool bDelayMessage);                                                                          // [0x526bf54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SetBackgroundBlur
	// void SetBackgroundBlur(float fBlurStrength);                                                                             // [0x526beb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SetAutoTransform
	// void SetAutoTransform(bool bAutoTransform);                                                                              // [0x526be20] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.SendPxMessage
	// FString SendPxMessage(FString strMessage);                                                                               // [0x526bd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.PostPxMessage
	// int32_t PostPxMessage(FString strMessage);                                                                               // [0x526bc9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.OpenPageFromUrl
	// int32_t OpenPageFromUrl(FString strUrl);                                                                                 // [0x526bbb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.OpenPageFromGameAssetPath
	// int32_t OpenPageFromGameAssetPath(FString strAssetPath);                                                                 // [0x526bb04] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.OpenPageFromData
	// int32_t OpenPageFromData(TArray<char>& ArrayData, FString strBasePath);                                                  // [0x526b9d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.OnExternalTouchEvent
	// void OnExternalTouchEvent(FVector2D& v2dPosTouch, int32_t nPointerIndex, EPxTouchType ETouchType);                       // [0x526b718] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.OnExternalTextInput
	// void OnExternalTextInput(FString strNewInput, bool beEndInput, bool beLostFocus, bool beReplace);                        // [0x526b554] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.OnExternalMouseEvent
	// void OnExternalMouseEvent(FVector2D& v2dPosMouse, FVector2D& v2dOffsetWheel, EPxMouseType eMouseType, EPxKeyEventType uEvent); // [0x526b35c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.OnExternalKeyBoardEvent
	// void OnExternalKeyBoardEvent(FKeyEvent& KeyEvent, EPxKeyEventType eEventType);                                           // [0x526b1e8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.LoadPageFromUrl
	// int32_t LoadPageFromUrl(FString strUrl);                                                                                 // [0x526af38] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.LoadPageFromGameAssetPath
	// int32_t LoadPageFromGameAssetPath(FString strAssetPath);                                                                 // [0x526ae84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.LoadPageFromData
	// int32_t LoadPageFromData(TArray<char>& ArrayData, FString strBasePath);                                                  // [0x526ad58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.IsPxViewValid
	// bool IsPxViewValid();                                                                                                    // [0x526ad34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PixUI.PixUIWidget.HistoryGo
	// void HistoryGo(int32_t nStep);                                                                                           // [0x526ac4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.GetSlotObjectByTagId
	// class UObject* GetSlotObjectByTagId(FString strSlotTagId);                                                               // [0x526ab94] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.GetScriptGlobalString
	// FString GetScriptGlobalString(FString strName, FString strKey);                                                          // [0x526aa64] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.GetScriptGlobalNumber
	// float GetScriptGlobalNumber(FString strName, FString strKey);                                                            // [0x526a948] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.GetScriptGlobalBoolean
	// bool GetScriptGlobalBoolean(FString strName, FString strKey);                                                            // [0x526a7e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.GetPxWinId
	// int32_t GetPxWinId();                                                                                                    // [0x526a7c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.GetCtrlWidget
	// class UWidget* GetCtrlWidget();                                                                                          // [0x526a730] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.GetCoreLibVersion
	// FString GetCoreLibVersion();                                                                                             // [0x526a5f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.DestroyPage
	// void DestroyPage();                                                                                                      // [0x526a5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.CreateScriptGlobal
	// void CreateScriptGlobal(FString strName);                                                                                // [0x526a4a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PixUI.PixUIWidget.ClosePage
	// void ClosePage();                                                                                                        // [0x526a490] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PxCustomDelegate
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UPxCustomDelegate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0028   (0x0060)  MISSED


	/// Functions
	// Function /Script/PixUI.PxCustomDelegate.OnPxCustomDelegate
	// void OnPxCustomDelegate();                                                                                               // [0x1e39048] Final|Native|Public  
	// Function /Script/PixUI.PxCustomDelegate.MakeCustomDelegate
	// class UPxCustomDelegate* MakeCustomDelegate(FString strCustomDelegateName);                                              // [0x526b040] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PxCustomInterfaceDyImp
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 16 MaxSize: 0x00D0
class UPxCustomInterfaceDyImp : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA8];                                      // 0x0028   (0x00A8)  MISSED


	/// Functions
	// Function /Script/PixUI.PxCustomInterfaceDyImp.MakeCustomInterface
	// class UPxCustomInterfaceDyImp* MakeCustomInterface(FString strCustomInterfaceName, class UClass* pOverrideBaseClass);    // [0x526b0e4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/PixUI.PxFileLoad
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 16 MaxSize: 0x0090
class UPxFileLoad : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED


	/// Functions
	// Function /Script/PixUI.PxFileLoad.OnFileLoad
	// void OnFileLoad(TArray<char>& arrayFileData);                                                                            // [0x526b89c] Final|Native|Public|HasOutParms 
};

/// Class /Script/PixUI.PxSubLayerWidget
/// Size: 0x0360 (864 bytes) (0x000130 - 0x000360) align 16 MaxSize: 0x0360
class UPxSubLayerWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x230];                                     // 0x0130   (0x0230)  MISSED
};

/// Class /Script/PixUI.PxSubCtrlWidget
/// Size: 0x0370 (880 bytes) (0x000360 - 0x000370) align 16 MaxSize: 0x0370
class UPxSubCtrlWidget : public UPxSubLayerWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0360   (0x0010)  MISSED
};

/// Class /Script/PixUI.PxSubNodeWidget
/// Size: 0x0360 (864 bytes) (0x000130 - 0x000360) align 16 MaxSize: 0x0360
class UPxSubNodeWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x230];                                     // 0x0130   (0x0230)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPixUIBrushWrapper) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UPixUIBPLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPixUIExternalInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPixUIInput) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UPixUIRenderTarget) == 0x0158); // 344 bytes (0x000028 - 0x000158)
static_assert(sizeof(UPixUIScriptVM) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UPixUIViewPortWidget) == 0x02C8); // 712 bytes (0x000290 - 0x0002C8)
static_assert(sizeof(UPixUIWidget) == 0x0360); // 864 bytes (0x000158 - 0x000360)
static_assert(sizeof(UPxCustomDelegate) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UPxCustomInterfaceDyImp) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UPxFileLoad) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UPxSubLayerWidget) == 0x0360); // 864 bytes (0x000130 - 0x000360)
static_assert(sizeof(UPxSubCtrlWidget) == 0x0370); // 880 bytes (0x000360 - 0x000370)
static_assert(sizeof(UPxSubNodeWidget) == 0x0360); // 864 bytes (0x000130 - 0x000360)
static_assert(offsetof(UPixUIWidget, TextDefaultUrl) == 0x0278);
