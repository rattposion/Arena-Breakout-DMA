// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: INTLCore
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/LevelInfinite.LevelInfiniteAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULevelInfiniteAPI : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LevelInfinite.LevelInfiniteAPI.UpdateCountryList
	// void UpdateCountryList(TArray<FString>& allowList, TArray<FString>& blockList);                                          // [0x3534590] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.StopLIPASSLoginScheme
	// void StopLIPASSLoginScheme();                                                                                            // [0x3534450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.StartLIPASSLoginScheme
	// void StartLIPASSLoginScheme();                                                                                           // [0x3534430] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.SetUserData
	// void SetUserData(FLIUserData& UserData);                                                                                 // [0x3534380] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.SetUIRoot
	// void SetUIRoot(class UCanvasPanel* uiRoot);                                                                              // [0x3534250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.SetUICustomScale
	// void SetUICustomScale(float Scale);                                                                                      // [0x35341c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.SetLanguage
	// void SetLanguage(FString Language);                                                                                      // [0x3533a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.SetGamepadStatus
	// void SetGamepadStatus(ELIGamepadStatus gamepadStatus);                                                                   // [0x35338d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.OpenLoginPanel
	// void OpenLoginPanel();                                                                                                   // [0x35334d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.OpenLIPASSMoreServiceWithGameId
	// void OpenLIPASSMoreServiceWithGameId(int32_t targetGameId);                                                              // [0x3533440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.OpenLIPASSMoreService
	// void OpenLIPASSMoreService();                                                                                            // [0x3533420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.OpenBindAccount
	// void OpenBindAccount();                                                                                                  // [0x3533400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.OpenAccountCenterWithParams
	// void OpenAccountCenterWithParams(FINTLDeleteAccountParams& Params);                                                      // [0x3533370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.OpenAccountCenter
	// void OpenAccountCenter();                                                                                                // [0x3533330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.OnBackPressed
	// bool OnBackPressed();                                                                                                    // [0x35331b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.ModifyLogicSchemeType
	// void ModifyLogicSchemeType(LILogicSchemeType LILogicSchemeType);                                                         // [0x3533120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.LoginChannelWithLIPASS
	// void LoginChannelWithLIPASS(EINTLLoginChannel Channel, FString Permissions, FString extraJson);                          // [0x3532f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.InitLIP
	// int32_t InitLIP(class UGameInstance* Instance, FString AppVersion, FString LangType);                                    // [0x3532e30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.InitLI
	// int32_t InitLI(class UGameInstance* Instance, bool isTest, FString AppVersion, FString LangType);                        // [0x3532c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.Init
	// int32_t Init(class UGameInstance* Instance, FString Host, FLIUserData& UserData, bool isTest);                           // [0x3532ac0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.GetSocialFeatureStatus
	// void GetSocialFeatureStatus();                                                                                           // [0x3532a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.FocusLIPassUI
	// bool FocusLIPassUI();                                                                                                    // [0x3532960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.CloseLI
	// void CloseLI();                                                                                                          // [0x35328f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.CloseAllPanel
	// void CloseAllPanel();                                                                                                    // [0x35328a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.ClearGameNativeDirectory
	// bool ClearGameNativeDirectory();                                                                                         // [0x3532870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LevelInfiniteAPI.AutoLogin
	// void AutoLogin();                                                                                                        // [0x3532850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LevelInfinite.LIBlueprintUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULIBlueprintUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LevelInfinite.LIBlueprintUtils.TakeScreenshot
	// int32_t TakeScreenshot(FString SaveName, bool IsAddSuffix);                                                              // [0x3534470] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LevelInfinite.LIButton
/// Size: 0x0730 (1840 bytes) (0x000498 - 0x000730) align 8 MaxSize: 0x0730
class ULIButton : public UButton
{ 
public:
	FButtonStyle                                       LIButtonStyle;                                              // 0x0498   (0x0298)  
};

/// Class /Script/LevelInfinite.LIComboBoxString
/// Size: 0x0ED0 (3792 bytes) (0x000ED0 - 0x000ED0) align 8 MaxSize: 0x0ED0
class ULIComboBoxString : public UComboBoxString
{ 
public:
};

/// Class /Script/LevelInfinite.LIHyperLinkTextBlockDecorator
/// Size: 0x0568 (1384 bytes) (0x000028 - 0x000568) align 8 MaxSize: 0x0568
class ULIHyperLinkTextBlockDecorator : public URichTextBlockDecorator
{ 
public:
	FHyperlinkStyle                                    m_Style;                                                    // 0x0028   (0x0540)  


	/// Functions
	// Function /Script/LevelInfinite.LIHyperLinkTextBlockDecorator.OnHyperLinkClick
	// void OnHyperLinkClick(TMap<FString, FString>& MetaData);                                                                 // [0x3533230] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LevelInfinite.LIInlineRichTextWidget
/// Size: 0x07D0 (2000 bytes) (0x000290 - 0x0007D0) align 8 MaxSize: 0x07D0
class ULIInlineRichTextWidget : public UUserWidget
{ 
public:
	FString                                            SourceText;                                                 // 0x0290   (0x0010)  
	FTextBlockStyle                                    NormalTextStyle;                                            // 0x02A0   (0x0290)  
	FTextBlockStyle                                    LinkTextStyle;                                              // 0x0530   (0x0290)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x07C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/LevelInfinite.LIInlineRichTextWidget.SetText
	// void SetText(FString InText);                                                                                            // [0x35340f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelInfinite.LIListView
/// Size: 0x0908 (2312 bytes) (0x000900 - 0x000908) align 8 MaxSize: 0x0908
class ULIListView : public UListView
{ 
public:
	SDK_UNDEFINED(1,5006) /* ESlateVisibility */       __um(ScrollBarVisibility);                                  // 0x0900   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0901   (0x0007)  MISSED
};

/// Class /Script/LevelInfinite.LIPanelBase
/// Size: 0x0300 (768 bytes) (0x000290 - 0x000300) align 8 MaxSize: 0x0300
class ULIPanelBase : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,5007) /* FDelegateProperty */     __um(OnTickDelegate);                                       // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,5008) /* FDelegateProperty */     __um(OnKeyDownDelegate);                                    // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,5009) /* FDelegateProperty */     __um(OnKeyUpDelegate);                                      // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,5010) /* FDelegateProperty */     __um(OnAddedToFocusPathDelegate);                           // 0x02C0   (0x0010)  
	SDK_UNDEFINED(16,5011) /* FDelegateProperty */     __um(OnRemovedFromFocusPathDelegate);                       // 0x02D0   (0x0010)  
	SDK_UNDEFINED(16,5012) /* FDelegateProperty */     __um(OnAnimationStartedDelegate);                           // 0x02E0   (0x0010)  
	SDK_UNDEFINED(16,5013) /* FDelegateProperty */     __um(OnAnimationFinishedDelegate);                          // 0x02F0   (0x0010)  


	/// Functions
	// Function /Script/LevelInfinite.LIPanelBase.SetLIUIFocus
	// void SetLIUIFocus(class UWidget* InWidgetToFocus);                                                                       // [0x35339a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.LIPanelBase.LITickEvent__DelegateSignature
	// void LITickEvent__DelegateSignature(FGeometry& MyGeometry, float InDeltaTime);                                           // [0x182d6bc] Public|Delegate|HasOutParms 
	// Function /Script/LevelInfinite.LIPanelBase.LIKeyActionEvent__DelegateSignature
	// bool LIKeyActionEvent__DelegateSignature(FGeometry& InGeometry, FString InKeyName);                                      // [0x182d6bc] Public|Delegate|HasOutParms 
	// Function /Script/LevelInfinite.LIPanelBase.LIFocusActionEvent__DelegateSignature
	// void LIFocusActionEvent__DelegateSignature(FFocusEvent& InFocusEvent);                                                   // [0x182d6bc] Public|Delegate|HasOutParms 
	// Function /Script/LevelInfinite.LIPanelBase.LIAnimationEvent__DelegateSignature
	// void LIAnimationEvent__DelegateSignature(class UWidgetAnimation* Animation);                                             // [0x182d6bc] Public|Delegate      
};

/// Class /Script/LevelInfinite.LIRichTextBlock
/// Size: 0x06F8 (1784 bytes) (0x0006F8 - 0x0006F8) align 8 MaxSize: 0x06F8
class ULIRichTextBlock : public URichTextBlock
{ 
public:


	/// Functions
	// Function /Script/LevelInfinite.LIRichTextBlock.WhetherHaveChildren
	// bool WhetherHaveChildren();                                                                                              // [0x35346b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LevelInfinite.LIRichTextBlockDecorator
/// Size: 0x0548 (1352 bytes) (0x000028 - 0x000548) align 8 MaxSize: 0x0548
class ULIRichTextBlockDecorator : public URichTextBlockDecorator
{ 
public:
	FTextBlockStyle                                    m_Style;                                                    // 0x0028   (0x0290)  
	FTextBlockStyle                                    LinkStyle;                                                  // 0x02B8   (0x0290)  
};

/// Class /Script/LevelInfinite.LISubSystem
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULISubSystem : public UObject
{ 
public:
};

/// Class /Script/LevelInfinite.RadarChartWidget
/// Size: 0x01A8 (424 bytes) (0x000130 - 0x0001A8) align 8 MaxSize: 0x01A8
class URadarChartWidget : public UWidget
{ 
public:
	FVector2D                                          Offset;                                                     // 0x0130   (0x0008)  
	float                                              Rotation;                                                   // 0x0138   (0x0004)  
	float                                              Radius;                                                     // 0x013C   (0x0004)  
	char                                               Segmentation;                                               // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0141   (0x0003)  MISSED
	float                                              SegmentationThickness;                                      // 0x0144   (0x0004)  
	FColor                                             SegmentationColor;                                          // 0x0148   (0x0004)  
	float                                              PlateOutlineThickness;                                      // 0x014C   (0x0004)  
	FColor                                             PlateOutlineColor;                                          // 0x0150   (0x0004)  
	FColor                                             PlateColor;                                                 // 0x0154   (0x0004)  
	FColor                                             ChartColor;                                                 // 0x0158   (0x0004)  
	FColor                                             ChartOutlineColor;                                          // 0x015C   (0x0004)  
	float                                              ChartOutlineThickness;                                      // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0164   (0x0004)  MISSED
	TArray<float>                                      ChartValues;                                                // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,5014) /* FDelegateProperty */     __um(RadiusDelegate);                                       // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,5015) /* FDelegateProperty */     __um(SegmentationDelegate);                                 // 0x0188   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0198   (0x0010)  MISSED


	/// Functions
	// Function /Script/LevelInfinite.RadarChartWidget.SetSegmentationThickness
	// void SetSegmentationThickness(float InThickness);                                                                        // [0x3534050] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetSegmentationColor
	// void SetSegmentationColor(FColor InColor);                                                                               // [0x3533fa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetSegmentation
	// void SetSegmentation(char InSegmentation);                                                                               // [0x3533ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetRotation
	// void SetRotation(float InRotation);                                                                                      // [0x3533e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x3533db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetPlateOutlineThickness
	// void SetPlateOutlineThickness(float InThickness);                                                                        // [0x3533d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetPlateOutlineColor
	// void SetPlateOutlineColor(FColor InColor);                                                                               // [0x3533c60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetPlateColor
	// void SetPlateColor(FColor InColor);                                                                                      // [0x3533bb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetOffset
	// void SetOffset(FVector2D InOffset);                                                                                      // [0x3533b00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetChartValues
	// void SetChartValues(TArray<float> InValues);                                                                             // [0x3533800] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetChartValue
	// void SetChartValue(char Index, float InValue);                                                                           // [0x3533700] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetChartOutlineThickness
	// void SetChartOutlineThickness(float InThickness);                                                                        // [0x3533660] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetChartOutlineColor
	// void SetChartOutlineColor(FColor InColor);                                                                               // [0x35335b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.SetChartColor
	// void SetChartColor(FColor InColor);                                                                                      // [0x35334f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LevelInfinite.RadarChartWidget.GetUInt8__DelegateSignature
	// char GetUInt8__DelegateSignature();                                                                                      // [0x182d6bc] Public|Delegate      
	// Function /Script/LevelInfinite.RadarChartWidget.GetChartValue
	// float GetChartValue(char Index);                                                                                         // [0x35329c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LevelInfinite.LIUserData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FLIUserData
{ 
	int32_t                                            GameId;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            ChannelID;                                                  // 0x0008   (0x0010)  
	FString                                            Openid;                                                     // 0x0018   (0x0010)  
	FString                                            Token;                                                      // 0x0028   (0x0010)  
	FString                                            RoleId;                                                     // 0x0038   (0x0010)  
	FString                                            Region;                                                     // 0x0048   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0058   (0x0004)  
	int32_t                                            ZoneId;                                                     // 0x005C   (0x0004)  
	FString                                            LangType;                                                   // 0x0060   (0x0010)  
	FString                                            DefLangType;                                                // 0x0070   (0x0010)  
	FString                                            RoleName;                                                   // 0x0080   (0x0010)  
	FString                                            AppVersion;                                                 // 0x0090   (0x0010)  
	FString                                            extraJson;                                                  // 0x00A0   (0x0010)  
};

/// Struct /Script/LevelInfinite.LIPSocialFeatureVerifyWebviewCloseResult
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FLIPSocialFeatureVerifyWebviewCloseResult
{ 
	int32_t                                            WebviewCloseResult;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/LevelInfinite.LIPSocialFeatureApproveStatus
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FLIPSocialFeatureApproveStatus
{ 
	int32_t                                            VoiceControlStatus;                                         // 0x0000   (0x0004)  
	int32_t                                            NeedVoiceControl;                                           // 0x0004   (0x0004)  
	int32_t                                            NeedVoiceControlIngame;                                     // 0x0008   (0x0004)  
	int32_t                                            NeedVoiceControlParentCert;                                 // 0x000C   (0x0004)  
};

/// Struct /Script/LevelInfinite.LIBaseEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLIBaseEvent
{ 
	SDK_UNDEFINED(1,5016) /* ELIEventType */           __um(EventType);                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            extraJson;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/LevelInfinite.GNPanelCloseEventParam
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGNPanelCloseEventParam
{ 
	FString                                            Module;                                                     // 0x0000   (0x0010)  
	FString                                            panelName;                                                  // 0x0010   (0x0010)  
	bool                                               isClosedManually;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FString                                            extraJson;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/LevelInfinite.GNPanelOpenEventParam
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGNPanelOpenEventParam
{ 
	FString                                            Module;                                                     // 0x0000   (0x0010)  
	FString                                            panelName;                                                  // 0x0010   (0x0010)  
	FString                                            extraJson;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/LevelInfinite.LIPBindCompleteEventParam
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FLIPBindCompleteEventParam
{ 
	FString                                            Email;                                                      // 0x0000   (0x0010)  
	bool                                               sucess;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Msg;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/LevelInfinite.GNPanelReadyEventExtraParam
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGNPanelReadyEventExtraParam
{ 
	FString                                            asset_version;                                              // 0x0000   (0x0010)  
	bool                                               is_cdn_asset;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/LevelInfinite.GNPanelReadyEventParam
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGNPanelReadyEventParam
{ 
	FString                                            Module;                                                     // 0x0000   (0x0010)  
	bool                                               isPopPanel;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FGNPanelReadyEventExtraParam                       ExtraParams;                                                // 0x0018   (0x0018)  
};

/// Struct /Script/LevelInfinite.InlineRichTextLink
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInlineRichTextLink
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
	FString                                            URL;                                                        // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ULevelInfiniteAPI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULIBlueprintUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULIButton) == 0x0730); // 1840 bytes (0x000498 - 0x000730)
static_assert(sizeof(ULIComboBoxString) == 0x0ED0); // 3792 bytes (0x000ED0 - 0x000ED0)
static_assert(sizeof(ULIHyperLinkTextBlockDecorator) == 0x0568); // 1384 bytes (0x000028 - 0x000568)
static_assert(sizeof(ULIInlineRichTextWidget) == 0x07D0); // 2000 bytes (0x000290 - 0x0007D0)
static_assert(sizeof(ULIListView) == 0x0908); // 2312 bytes (0x000900 - 0x000908)
static_assert(sizeof(ULIPanelBase) == 0x0300); // 768 bytes (0x000290 - 0x000300)
static_assert(sizeof(ULIRichTextBlock) == 0x06F8); // 1784 bytes (0x0006F8 - 0x0006F8)
static_assert(sizeof(ULIRichTextBlockDecorator) == 0x0548); // 1352 bytes (0x000028 - 0x000548)
static_assert(sizeof(ULISubSystem) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URadarChartWidget) == 0x01A8); // 424 bytes (0x000130 - 0x0001A8)
static_assert(sizeof(FLIUserData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FLIPSocialFeatureVerifyWebviewCloseResult) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FLIPSocialFeatureApproveStatus) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLIBaseEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGNPanelCloseEventParam) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGNPanelOpenEventParam) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLIPBindCompleteEventParam) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGNPanelReadyEventExtraParam) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGNPanelReadyEventParam) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInlineRichTextLink) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(ULIButton, LIButtonStyle) == 0x0498);
static_assert(offsetof(ULIHyperLinkTextBlockDecorator, m_Style) == 0x0028);
static_assert(offsetof(ULIInlineRichTextWidget, SourceText) == 0x0290);
static_assert(offsetof(ULIInlineRichTextWidget, NormalTextStyle) == 0x02A0);
static_assert(offsetof(ULIInlineRichTextWidget, LinkTextStyle) == 0x0530);
static_assert(offsetof(ULIRichTextBlockDecorator, m_Style) == 0x0028);
static_assert(offsetof(ULIRichTextBlockDecorator, LinkStyle) == 0x02B8);
static_assert(offsetof(URadarChartWidget, Offset) == 0x0130);
static_assert(offsetof(URadarChartWidget, SegmentationColor) == 0x0148);
static_assert(offsetof(URadarChartWidget, PlateOutlineColor) == 0x0150);
static_assert(offsetof(URadarChartWidget, PlateColor) == 0x0154);
static_assert(offsetof(URadarChartWidget, ChartColor) == 0x0158);
static_assert(offsetof(URadarChartWidget, ChartOutlineColor) == 0x015C);
static_assert(offsetof(URadarChartWidget, ChartValues) == 0x0168);
static_assert(offsetof(FLIUserData, ChannelID) == 0x0008);
static_assert(offsetof(FLIUserData, Openid) == 0x0018);
static_assert(offsetof(FLIUserData, Token) == 0x0028);
static_assert(offsetof(FLIUserData, RoleId) == 0x0038);
static_assert(offsetof(FLIUserData, Region) == 0x0048);
static_assert(offsetof(FLIUserData, LangType) == 0x0060);
static_assert(offsetof(FLIUserData, DefLangType) == 0x0070);
static_assert(offsetof(FLIUserData, RoleName) == 0x0080);
static_assert(offsetof(FLIUserData, AppVersion) == 0x0090);
static_assert(offsetof(FLIUserData, extraJson) == 0x00A0);
static_assert(offsetof(FLIBaseEvent, extraJson) == 0x0008);
static_assert(offsetof(FGNPanelCloseEventParam, Module) == 0x0000);
static_assert(offsetof(FGNPanelCloseEventParam, panelName) == 0x0010);
static_assert(offsetof(FGNPanelCloseEventParam, extraJson) == 0x0028);
static_assert(offsetof(FGNPanelOpenEventParam, Module) == 0x0000);
static_assert(offsetof(FGNPanelOpenEventParam, panelName) == 0x0010);
static_assert(offsetof(FGNPanelOpenEventParam, extraJson) == 0x0020);
static_assert(offsetof(FLIPBindCompleteEventParam, Email) == 0x0000);
static_assert(offsetof(FLIPBindCompleteEventParam, Msg) == 0x0018);
static_assert(offsetof(FGNPanelReadyEventExtraParam, asset_version) == 0x0000);
static_assert(offsetof(FGNPanelReadyEventParam, Module) == 0x0000);
static_assert(offsetof(FGNPanelReadyEventParam, ExtraParams) == 0x0018);
static_assert(offsetof(FInlineRichTextLink, Text) == 0x0000);
static_assert(offsetof(FInlineRichTextLink, URL) == 0x0010);
