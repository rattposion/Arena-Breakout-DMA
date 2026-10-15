// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UFontBulkData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFontFaceInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFontProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USlateTypes : public UObject
{ 
public:
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USlateWidgetStyleAsset : public UObject
{ 
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USlateWidgetStyleContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USlateWidgetStyleContainerInterface : public UInterface
{ 
public:
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FGeometry
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMargin
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Top;                                                        // 0x0004   (0x0004)  
	float                                              Right;                                                      // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSlateColor
{ 
	FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,26) /* TEnumAsByte<ESlateColorStylingMode> */ __um(ColorUseRule);                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0011   (0x0017)  MISSED
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FSlateBrush
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FVector2D                                          ImageSize;                                                  // 0x0008   (0x0008)  
	FMargin                                            Margin;                                                     // 0x0010   (0x0010)  
	FSlateColor                                        TintColor;                                                  // 0x0020   (0x0028)  
	class UObject*                                     ResourceObject;                                             // 0x0048   (0x0008)  
	FName                                              ResourceName;                                               // 0x0050   (0x0008)  
	FBox2D                                             UVRegion;                                                   // 0x0058   (0x0014)  
	SDK_UNDEFINED(1,27) /* TEnumAsByte<ESlateBrushDrawType> */ __um(DrawAs);                                       // 0x006C   (0x0001)  
	SDK_UNDEFINED(1,28) /* TEnumAsByte<ESlateBrushTileType> */ __um(Tiling);                                       // 0x006D   (0x0001)  
	SDK_UNDEFINED(1,29) /* TEnumAsByte<ESlateBrushMirrorType> */ __um(Mirroring);                                  // 0x006E   (0x0001)  
	SDK_UNDEFINED(1,30) /* TEnumAsByte<ESlateBrushImageType> */ __um(ImageType);                                   // 0x006F   (0x0001)  
	bool                                               UseImageUV : 1;                                             // 0x0070:0 (0x0001)  
	bool                                               IsDrawAsCircle : 1;                                         // 0x0070:1 (0x0001)  
	unsigned char                                      UnknownData01_3[0x17];                                      // 0x0071   (0x0017)  MISSED
	bool                                               bIsDynamicallyLoaded : 1;                                   // 0x0088:0 (0x0001)  
	bool                                               bHasUObject : 1;                                            // 0x0088:1 (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInputEvent
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0070 (112 bytes) (0x000018 - 0x000070) align 8 MaxSize: 0x0070
struct FPointerEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FCharacterEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align 8 MaxSize: 0x0038
struct FKeyEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FNavigationEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FAnalogInputEvent : FKeyEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFontOutlineSettings
{ 
	int32_t                                            OutlineSize;                                                // 0x0000   (0x0004)  
	bool                                               bSeparateFillAlpha;                                         // 0x0004   (0x0001)  
	bool                                               bApplyOutlineToDropShadows;                                 // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	class UObject*                                     OutlineMaterial;                                            // 0x0008   (0x0008)  
	FLinearColor                                       OutlineColor;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FSlateFontInfo
{ 
	class UObject*                                     FontObject;                                                 // 0x0000   (0x0008)  
	class UObject*                                     FontMaterial;                                               // 0x0008   (0x0008)  
	FFontOutlineSettings                               OutlineSettings;                                            // 0x0010   (0x0020)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
	FName                                              TypefaceFontName;                                           // 0x0040   (0x0008)  
	int32_t                                            Size;                                                       // 0x0048   (0x0004)  
	int32_t                                            Size_Oversea;                                               // 0x004C   (0x0004)  
	int32_t                                            LetterSpacing;                                              // 0x0050   (0x0004)  
	int32_t                                            LetterSpacing_Oversea;                                      // 0x0054   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0838 (2104 bytes) (0x000008 - 0x000838) align 8 MaxSize: 0x0838
struct FTableRowStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        SelectorFocusedBrush;                                       // 0x0008   (0x0090)  
	FSlateBrush                                        ActiveHoveredBrush;                                         // 0x0098   (0x0090)  
	FSlateBrush                                        ActiveBrush;                                                // 0x0128   (0x0090)  
	FSlateBrush                                        InactiveHoveredBrush;                                       // 0x01B8   (0x0090)  
	FSlateBrush                                        InactiveBrush;                                              // 0x0248   (0x0090)  
	FSlateBrush                                        EvenRowBackgroundHoveredBrush;                              // 0x02D8   (0x0090)  
	FSlateBrush                                        EvenRowBackgroundBrush;                                     // 0x0368   (0x0090)  
	FSlateBrush                                        OddRowBackgroundHoveredBrush;                               // 0x03F8   (0x0090)  
	FSlateBrush                                        OddRowBackgroundBrush;                                      // 0x0488   (0x0090)  
	FSlateColor                                        TextColor;                                                  // 0x0518   (0x0028)  
	FSlateColor                                        SelectedTextColor;                                          // 0x0540   (0x0028)  
	FSlateBrush                                        DropIndicator_Above;                                        // 0x0568   (0x0090)  
	FSlateBrush                                        DropIndicator_Onto;                                         // 0x05F8   (0x0090)  
	FSlateBrush                                        DropIndicator_Below;                                        // 0x0688   (0x0090)  
	FSlateBrush                                        ActiveHighlightedBrush;                                     // 0x0718   (0x0090)  
	FSlateBrush                                        InactiveHighlightedBrush;                                   // 0x07A8   (0x0090)  
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSlateSound
{ 
	class UObject*                                     ResourceObject;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x0298 (664 bytes) (0x000008 - 0x000298) align 8 MaxSize: 0x0298
struct FButtonStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Normal;                                                     // 0x0008   (0x0090)  
	FSlateBrush                                        Hovered;                                                    // 0x0098   (0x0090)  
	FSlateBrush                                        Pressed;                                                    // 0x0128   (0x0090)  
	FSlateBrush                                        Disabled;                                                   // 0x01B8   (0x0090)  
	FMargin                                            NormalPadding;                                              // 0x0248   (0x0010)  
	FMargin                                            PressedPadding;                                             // 0x0258   (0x0010)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0268   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0280   (0x0018)  
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x03E8 (1000 bytes) (0x000008 - 0x0003E8) align 8 MaxSize: 0x03E8
struct FComboButtonStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       ButtonStyle;                                                // 0x0008   (0x0298)  
	FSlateBrush                                        DownArrowImage;                                             // 0x02A0   (0x0090)  
	FVector2D                                          ShadowOffset;                                               // 0x0330   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0338   (0x0010)  
	FSlateBrush                                        MenuBorderBrush;                                            // 0x0348   (0x0090)  
	FMargin                                            MenuBorderPadding;                                          // 0x03D8   (0x0010)  
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x0420 (1056 bytes) (0x000008 - 0x000420) align 8 MaxSize: 0x0420
struct FComboBoxStyle : FSlateWidgetStyle
{ 
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0008   (0x03E8)  
	FSlateSound                                        PressedSlateSound;                                          // 0x03F0   (0x0018)  
	FSlateSound                                        SelectionChangeSlateSound;                                  // 0x0408   (0x0018)  
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x0240 (576 bytes) (0x000008 - 0x000240) align 8 MaxSize: 0x0240
struct FEditableTextStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0060)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0068   (0x0028)  
	FSlateBrush                                        BackgroundImageSelected;                                    // 0x0090   (0x0090)  
	FSlateBrush                                        BackgroundImageComposing;                                   // 0x0120   (0x0090)  
	FSlateBrush                                        CaretImage;                                                 // 0x01B0   (0x0090)  
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x0518 (1304 bytes) (0x000008 - 0x000518) align 8 MaxSize: 0x0518
struct FScrollBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HorizontalBackgroundImage;                                  // 0x0008   (0x0090)  
	FSlateBrush                                        VerticalBackgroundImage;                                    // 0x0098   (0x0090)  
	FSlateBrush                                        VerticalTopSlotImage;                                       // 0x0128   (0x0090)  
	FSlateBrush                                        HorizontalTopSlotImage;                                     // 0x01B8   (0x0090)  
	FSlateBrush                                        VerticalBottomSlotImage;                                    // 0x0248   (0x0090)  
	FSlateBrush                                        HorizontalBottomSlotImage;                                  // 0x02D8   (0x0090)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x0368   (0x0090)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x03F8   (0x0090)  
	FSlateBrush                                        DraggedThumbImage;                                          // 0x0488   (0x0090)  
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0868 (2152 bytes) (0x000008 - 0x000868) align 8 MaxSize: 0x0868
struct FEditableTextBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundImageNormal;                                      // 0x0008   (0x0090)  
	FSlateBrush                                        BackgroundImageHovered;                                     // 0x0098   (0x0090)  
	FSlateBrush                                        BackgroundImageFocused;                                     // 0x0128   (0x0090)  
	FSlateBrush                                        BackgroundImageReadOnly;                                    // 0x01B8   (0x0090)  
	FMargin                                            Padding;                                                    // 0x0248   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0258   (0x0060)  
	FSlateColor                                        ForegroundColor;                                            // 0x02B8   (0x0028)  
	FSlateColor                                        BackgroundColor;                                            // 0x02E0   (0x0028)  
	FSlateColor                                        ReadOnlyForegroundColor;                                    // 0x0308   (0x0028)  
	FMargin                                            HScrollBarPadding;                                          // 0x0330   (0x0010)  
	FMargin                                            VScrollBarPadding;                                          // 0x0340   (0x0010)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0350   (0x0518)  
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0290 (656 bytes) (0x000008 - 0x000290) align 8 MaxSize: 0x0290
struct FTextBlockStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0060)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0068   (0x0028)  
	FVector2D                                          ShadowOffset;                                               // 0x0090   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0098   (0x0010)  
	FSlateColor                                        SelectedBackgroundColor;                                    // 0x00A8   (0x0028)  
	FLinearColor                                       HighlightColor;                                             // 0x00D0   (0x0010)  
	FSlateBrush                                        HighlightShape;                                             // 0x00E0   (0x0090)  
	FSlateBrush                                        StrikeBrush;                                                // 0x0170   (0x0090)  
	FSlateBrush                                        UnderlineBrush;                                             // 0x0200   (0x0090)  
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x0310 (784 bytes) (0x000008 - 0x000310) align 8 MaxSize: 0x0310
struct FSpinBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundBrush;                                            // 0x0008   (0x0090)  
	FSlateBrush                                        HoveredBackgroundBrush;                                     // 0x0098   (0x0090)  
	FSlateBrush                                        ActiveFillBrush;                                            // 0x0128   (0x0090)  
	FSlateBrush                                        InactiveFillBrush;                                          // 0x01B8   (0x0090)  
	FSlateBrush                                        ArrowsImage;                                                // 0x0248   (0x0090)  
	FSlateColor                                        ForegroundColor;                                            // 0x02D8   (0x0028)  
	FMargin                                            TextPadding;                                                // 0x0300   (0x0010)  
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFocusEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FMotionEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0540 (1344 bytes) (0x000008 - 0x000540) align 8 MaxSize: 0x0540
struct FHyperlinkStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       UnderlineStyle;                                             // 0x0008   (0x0298)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x02A0   (0x0290)  
	FMargin                                            Padding;                                                    // 0x0530   (0x0010)  
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFontData
{ 
	FString                                            FontFilename;                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,31) /* EFontHinting */             __um(Hinting);                                              // 0x0010   (0x0001)  
	SDK_UNDEFINED(1,32) /* EFontLoadingPolicy */       __um(LoadingPolicy);                                        // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            SubFaceIndex;                                               // 0x0014   (0x0004)  
	class UObject*                                     FontFaceAsset;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FTypefaceEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FFontData                                          Font;                                                       // 0x0008   (0x0020)  
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTypeface
{ 
	TArray<FTypefaceEntry>                             Fonts;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCompositeFallbackFont
{ 
	FTypeface                                          Typeface;                                                   // 0x0000   (0x0010)  
	float                                              ScalingFactor;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align 8 MaxSize: 0x0038
struct FCompositeSubFont : FCompositeFallbackFont
{ 
	TArray<FInt32Range>                                CharacterRanges;                                            // 0x0018   (0x0010)  
	FString                                            Cultures;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FCompositeFont
{ 
	FTypeface                                          DefaultTypeface;                                            // 0x0000   (0x0010)  
	FCompositeFallbackFont                             FallbackTypeface;                                           // 0x0010   (0x0018)  
	TArray<FCompositeSubFont>                          SubTypefaces;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCaptureLostEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1138 (4408 bytes) (0x000008 - 0x001138) align 8 MaxSize: 0x1138
struct FWindowStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       MinimizeButtonStyle;                                        // 0x0008   (0x0298)  
	FButtonStyle                                       MaximizeButtonStyle;                                        // 0x02A0   (0x0298)  
	FButtonStyle                                       RestoreButtonStyle;                                         // 0x0538   (0x0298)  
	FButtonStyle                                       CloseButtonStyle;                                           // 0x07D0   (0x0298)  
	FTextBlockStyle                                    TitleTextStyle;                                             // 0x0A68   (0x0290)  
	FSlateBrush                                        ActiveTitleBrush;                                           // 0x0CF8   (0x0090)  
	FSlateBrush                                        InactiveTitleBrush;                                         // 0x0D88   (0x0090)  
	FSlateBrush                                        FlashTitleBrush;                                            // 0x0E18   (0x0090)  
	FSlateColor                                        BackgroundColor;                                            // 0x0EA8   (0x0028)  
	FSlateBrush                                        OutlineBrush;                                               // 0x0ED0   (0x0090)  
	FSlateColor                                        OutlineColor;                                               // 0x0F60   (0x0028)  
	FSlateBrush                                        BorderBrush;                                                // 0x0F88   (0x0090)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x1018   (0x0090)  
	FSlateBrush                                        ChildBackgroundBrush;                                       // 0x10A8   (0x0090)  
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0128 (296 bytes) (0x000008 - 0x000128) align 8 MaxSize: 0x0128
struct FScrollBorderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x0098   (0x0090)  
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0248 (584 bytes) (0x000008 - 0x000248) align 8 MaxSize: 0x0248
struct FScrollBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x0098   (0x0090)  
	FSlateBrush                                        LeftShadowBrush;                                            // 0x0128   (0x0090)  
	FSlateBrush                                        RightShadowBrush;                                           // 0x01B8   (0x0090)  
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0760 (1888 bytes) (0x000008 - 0x000760) align 8 MaxSize: 0x0760
struct FDockTabStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0008   (0x0298)  
	FSlateBrush                                        NormalBrush;                                                // 0x02A0   (0x0090)  
	FSlateBrush                                        ActiveBrush;                                                // 0x0330   (0x0090)  
	FSlateBrush                                        ColorOverlayTabBrush;                                       // 0x03C0   (0x0090)  
	FSlateBrush                                        ColorOverlayIconBrush;                                      // 0x0450   (0x0090)  
	FSlateBrush                                        ForegroundBrush;                                            // 0x04E0   (0x0090)  
	FSlateBrush                                        HoveredBrush;                                               // 0x0570   (0x0090)  
	FSlateBrush                                        ContentAreaBrush;                                           // 0x0600   (0x0090)  
	FSlateBrush                                        TabWellBrush;                                               // 0x0690   (0x0090)  
	FMargin                                            TabPadding;                                                 // 0x0720   (0x0010)  
	float                                              OverlapWidth;                                               // 0x0730   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0734   (0x0004)  MISSED
	FSlateColor                                        FlashColor;                                                 // 0x0738   (0x0028)  
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x0518 (1304 bytes) (0x000008 - 0x000518) align 8 MaxSize: 0x0518
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        SortPrimaryAscendingImage;                                  // 0x0008   (0x0090)  
	FSlateBrush                                        SortPrimaryDescendingImage;                                 // 0x0098   (0x0090)  
	FSlateBrush                                        SortSecondaryAscendingImage;                                // 0x0128   (0x0090)  
	FSlateBrush                                        SortSecondaryDescendingImage;                               // 0x01B8   (0x0090)  
	FSlateBrush                                        NormalBrush;                                                // 0x0248   (0x0090)  
	FSlateBrush                                        HoveredBrush;                                               // 0x02D8   (0x0090)  
	FSlateBrush                                        MenuDropdownImage;                                          // 0x0368   (0x0090)  
	FSlateBrush                                        MenuDropdownNormalBorderBrush;                              // 0x03F8   (0x0090)  
	FSlateBrush                                        MenuDropdownHoveredBorderBrush;                             // 0x0488   (0x0090)  
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0128 (296 bytes) (0x000008 - 0x000128) align 8 MaxSize: 0x0128
struct FSplitterStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HandleNormalBrush;                                          // 0x0008   (0x0090)  
	FSlateBrush                                        HandleHighlightBrush;                                       // 0x0098   (0x0090)  
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x0C18 (3096 bytes) (0x000008 - 0x000C18) align 8 MaxSize: 0x0C18
struct FHeaderRowStyle : FSlateWidgetStyle
{ 
	FTableColumnHeaderStyle                            ColumnStyle;                                                // 0x0008   (0x0518)  
	FTableColumnHeaderStyle                            LastColumnStyle;                                            // 0x0520   (0x0518)  
	FSplitterStyle                                     ColumnSplitterStyle;                                        // 0x0A38   (0x0128)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x0B60   (0x0090)  
	FSlateColor                                        ForegroundColor;                                            // 0x0BF0   (0x0028)  
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FInlineTextImageStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Image;                                                      // 0x0008   (0x0090)  
	int16_t                                            Baseline;                                                   // 0x0098   (0x0002)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x009A   (0x0006)  MISSED
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0370 (880 bytes) (0x000008 - 0x000370) align 8 MaxSize: 0x0370
struct FSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalBarImage;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        HoveredBarImage;                                            // 0x0098   (0x0090)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x0128   (0x0090)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x01B8   (0x0090)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x0248   (0x0090)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x02D8   (0x0090)  
	float                                              BarThickness;                                               // 0x0368   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x036C   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0648 (1608 bytes) (0x000008 - 0x000648) align 8 MaxSize: 0x0648
struct FVolumeControlStyle : FSlateWidgetStyle
{ 
	FSliderStyle                                       SliderStyle;                                                // 0x0008   (0x0370)  
	FSlateBrush                                        HighVolumeImage;                                            // 0x0378   (0x0090)  
	FSlateBrush                                        MidVolumeImage;                                             // 0x0408   (0x0090)  
	FSlateBrush                                        LowVolumeImage;                                             // 0x0498   (0x0090)  
	FSlateBrush                                        NoVolumeImage;                                              // 0x0528   (0x0090)  
	FSlateBrush                                        MutedImage;                                                 // 0x05B8   (0x0090)  
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x0B28 (2856 bytes) (0x000008 - 0x000B28) align 8 MaxSize: 0x0B28
struct FSearchBoxStyle : FSlateWidgetStyle
{ 
	FEditableTextBoxStyle                              TextBoxStyle;                                               // 0x0008   (0x0868)  
	FSlateFontInfo                                     ActiveFontInfo;                                             // 0x0870   (0x0060)  
	FSlateBrush                                        UpArrowImage;                                               // 0x08D0   (0x0090)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0960   (0x0090)  
	FSlateBrush                                        GlassImage;                                                 // 0x09F0   (0x0090)  
	FSlateBrush                                        ClearImage;                                                 // 0x0A80   (0x0090)  
	FMargin                                            ImagePadding;                                               // 0x0B10   (0x0010)  
	bool                                               bLeftAlignButtons;                                          // 0x0B20   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0B21   (0x0007)  MISSED
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 8 MaxSize: 0x0130
struct FExpandableAreaStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        CollapsedImage;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        ExpandedImage;                                              // 0x0098   (0x0090)  
	float                                              RolloutAnimationSeconds;                                    // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x01B8 (440 bytes) (0x000008 - 0x0001B8) align 8 MaxSize: 0x01B8
struct FProgressBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundImage;                                            // 0x0008   (0x0090)  
	FSlateBrush                                        FillImage;                                                  // 0x0098   (0x0090)  
	FSlateBrush                                        MarqueeImage;                                               // 0x0128   (0x0090)  
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x0B00 (2816 bytes) (0x000008 - 0x000B00) align 8 MaxSize: 0x0B00
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{ 
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0008   (0x0868)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0870   (0x0290)  
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x05C8 (1480 bytes) (0x000008 - 0x0005C8) align 8 MaxSize: 0x05C8
struct FCheckBoxStyle : FSlateWidgetStyle
{ 
	SDK_UNDEFINED(1,33) /* TEnumAsByte<ESlateCheckBoxType> */ __um(CheckBoxType);                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSlateBrush                                        UncheckedImage;                                             // 0x0010   (0x0090)  
	FSlateBrush                                        UncheckedHoveredImage;                                      // 0x00A0   (0x0090)  
	FSlateBrush                                        UncheckedPressedImage;                                      // 0x0130   (0x0090)  
	FSlateBrush                                        CheckedImage;                                               // 0x01C0   (0x0090)  
	FSlateBrush                                        CheckedHoveredImage;                                        // 0x0250   (0x0090)  
	FSlateBrush                                        CheckedPressedImage;                                        // 0x02E0   (0x0090)  
	FSlateBrush                                        UndeterminedImage;                                          // 0x0370   (0x0090)  
	FSlateBrush                                        UndeterminedHoveredImage;                                   // 0x0400   (0x0090)  
	FSlateBrush                                        UndeterminedPressedImage;                                   // 0x0490   (0x0090)  
	FMargin                                            Padding;                                                    // 0x0520   (0x0010)  
	FSlateColor                                        ForegroundColor;                                            // 0x0530   (0x0028)  
	FSlateColor                                        BorderBackgroundColor;                                      // 0x0558   (0x0028)  
	FSlateSound                                        CheckedSlateSound;                                          // 0x0580   (0x0018)  
	FSlateSound                                        UncheckedSlateSound;                                        // 0x0598   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x05B0   (0x0018)  
};

#pragma pack(pop)


static_assert(sizeof(UFontBulkData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UFontFaceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFontProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateWidgetStyleAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USlateWidgetStyleContainerBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USlateWidgetStyleContainerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGeometry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMargin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSlateColor) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSlateBrush) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FInputEvent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPointerEvent) == 0x0070); // 112 bytes (0x000018 - 0x000070)
static_assert(sizeof(FCharacterEvent) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FKeyEvent) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FNavigationEvent) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAnalogInputEvent) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FFontOutlineSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSlateFontInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FSlateWidgetStyle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTableRowStyle) == 0x0838); // 2104 bytes (0x000008 - 0x000838)
static_assert(sizeof(FSlateSound) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FButtonStyle) == 0x0298); // 664 bytes (0x000008 - 0x000298)
static_assert(sizeof(FComboButtonStyle) == 0x03E8); // 1000 bytes (0x000008 - 0x0003E8)
static_assert(sizeof(FComboBoxStyle) == 0x0420); // 1056 bytes (0x000008 - 0x000420)
static_assert(sizeof(FEditableTextStyle) == 0x0240); // 576 bytes (0x000008 - 0x000240)
static_assert(sizeof(FScrollBarStyle) == 0x0518); // 1304 bytes (0x000008 - 0x000518)
static_assert(sizeof(FEditableTextBoxStyle) == 0x0868); // 2152 bytes (0x000008 - 0x000868)
static_assert(sizeof(FTextBlockStyle) == 0x0290); // 656 bytes (0x000008 - 0x000290)
static_assert(sizeof(FSpinBoxStyle) == 0x0310); // 784 bytes (0x000008 - 0x000310)
static_assert(sizeof(FFocusEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMotionEvent) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FHyperlinkStyle) == 0x0540); // 1344 bytes (0x000008 - 0x000540)
static_assert(sizeof(FFontData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FTypefaceEntry) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTypeface) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCompositeFallbackFont) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCompositeSubFont) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FCompositeFont) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCaptureLostEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWindowStyle) == 0x1138); // 4408 bytes (0x000008 - 0x001138)
static_assert(sizeof(FScrollBorderStyle) == 0x0128); // 296 bytes (0x000008 - 0x000128)
static_assert(sizeof(FScrollBoxStyle) == 0x0248); // 584 bytes (0x000008 - 0x000248)
static_assert(sizeof(FDockTabStyle) == 0x0760); // 1888 bytes (0x000008 - 0x000760)
static_assert(sizeof(FTableColumnHeaderStyle) == 0x0518); // 1304 bytes (0x000008 - 0x000518)
static_assert(sizeof(FSplitterStyle) == 0x0128); // 296 bytes (0x000008 - 0x000128)
static_assert(sizeof(FHeaderRowStyle) == 0x0C18); // 3096 bytes (0x000008 - 0x000C18)
static_assert(sizeof(FInlineTextImageStyle) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FSliderStyle) == 0x0370); // 880 bytes (0x000008 - 0x000370)
static_assert(sizeof(FVolumeControlStyle) == 0x0648); // 1608 bytes (0x000008 - 0x000648)
static_assert(sizeof(FSearchBoxStyle) == 0x0B28); // 2856 bytes (0x000008 - 0x000B28)
static_assert(sizeof(FExpandableAreaStyle) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FProgressBarStyle) == 0x01B8); // 440 bytes (0x000008 - 0x0001B8)
static_assert(sizeof(FInlineEditableTextBlockStyle) == 0x0B00); // 2816 bytes (0x000008 - 0x000B00)
static_assert(sizeof(FCheckBoxStyle) == 0x05C8); // 1480 bytes (0x000008 - 0x0005C8)
static_assert(offsetof(USlateWidgetStyleAsset, CustomStyle) == 0x0028);
static_assert(offsetof(FSlateColor, SpecifiedColor) == 0x0000);
static_assert(offsetof(FSlateBrush, ImageSize) == 0x0008);
static_assert(offsetof(FSlateBrush, Margin) == 0x0010);
static_assert(offsetof(FSlateBrush, TintColor) == 0x0020);
static_assert(offsetof(FSlateBrush, ResourceObject) == 0x0048);
static_assert(offsetof(FSlateBrush, ResourceName) == 0x0050);
static_assert(offsetof(FSlateBrush, UVRegion) == 0x0058);
static_assert(offsetof(FFontOutlineSettings, OutlineMaterial) == 0x0008);
static_assert(offsetof(FFontOutlineSettings, OutlineColor) == 0x0010);
static_assert(offsetof(FSlateFontInfo, FontObject) == 0x0000);
static_assert(offsetof(FSlateFontInfo, FontMaterial) == 0x0008);
static_assert(offsetof(FSlateFontInfo, OutlineSettings) == 0x0010);
static_assert(offsetof(FSlateFontInfo, TypefaceFontName) == 0x0040);
static_assert(offsetof(FTableRowStyle, SelectorFocusedBrush) == 0x0008);
static_assert(offsetof(FTableRowStyle, ActiveHoveredBrush) == 0x0098);
static_assert(offsetof(FTableRowStyle, ActiveBrush) == 0x0128);
static_assert(offsetof(FTableRowStyle, InactiveHoveredBrush) == 0x01B8);
static_assert(offsetof(FTableRowStyle, InactiveBrush) == 0x0248);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundHoveredBrush) == 0x02D8);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundBrush) == 0x0368);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundHoveredBrush) == 0x03F8);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundBrush) == 0x0488);
static_assert(offsetof(FTableRowStyle, TextColor) == 0x0518);
static_assert(offsetof(FTableRowStyle, SelectedTextColor) == 0x0540);
static_assert(offsetof(FTableRowStyle, DropIndicator_Above) == 0x0568);
static_assert(offsetof(FTableRowStyle, DropIndicator_Onto) == 0x05F8);
static_assert(offsetof(FTableRowStyle, DropIndicator_Below) == 0x0688);
static_assert(offsetof(FTableRowStyle, ActiveHighlightedBrush) == 0x0718);
static_assert(offsetof(FTableRowStyle, InactiveHighlightedBrush) == 0x07A8);
static_assert(offsetof(FSlateSound, ResourceObject) == 0x0000);
static_assert(offsetof(FButtonStyle, Normal) == 0x0008);
static_assert(offsetof(FButtonStyle, Hovered) == 0x0098);
static_assert(offsetof(FButtonStyle, Pressed) == 0x0128);
static_assert(offsetof(FButtonStyle, Disabled) == 0x01B8);
static_assert(offsetof(FButtonStyle, NormalPadding) == 0x0248);
static_assert(offsetof(FButtonStyle, PressedPadding) == 0x0258);
static_assert(offsetof(FButtonStyle, PressedSlateSound) == 0x0268);
static_assert(offsetof(FButtonStyle, HoveredSlateSound) == 0x0280);
static_assert(offsetof(FComboButtonStyle, ButtonStyle) == 0x0008);
static_assert(offsetof(FComboButtonStyle, DownArrowImage) == 0x02A0);
static_assert(offsetof(FComboButtonStyle, ShadowOffset) == 0x0330);
static_assert(offsetof(FComboButtonStyle, ShadowColorAndOpacity) == 0x0338);
static_assert(offsetof(FComboButtonStyle, MenuBorderBrush) == 0x0348);
static_assert(offsetof(FComboButtonStyle, MenuBorderPadding) == 0x03D8);
static_assert(offsetof(FComboBoxStyle, ComboButtonStyle) == 0x0008);
static_assert(offsetof(FComboBoxStyle, PressedSlateSound) == 0x03F0);
static_assert(offsetof(FComboBoxStyle, SelectionChangeSlateSound) == 0x0408);
static_assert(offsetof(FEditableTextStyle, Font) == 0x0008);
static_assert(offsetof(FEditableTextStyle, ColorAndOpacity) == 0x0068);
static_assert(offsetof(FEditableTextStyle, BackgroundImageSelected) == 0x0090);
static_assert(offsetof(FEditableTextStyle, BackgroundImageComposing) == 0x0120);
static_assert(offsetof(FEditableTextStyle, CaretImage) == 0x01B0);
static_assert(offsetof(FScrollBarStyle, HorizontalBackgroundImage) == 0x0008);
static_assert(offsetof(FScrollBarStyle, VerticalBackgroundImage) == 0x0098);
static_assert(offsetof(FScrollBarStyle, VerticalTopSlotImage) == 0x0128);
static_assert(offsetof(FScrollBarStyle, HorizontalTopSlotImage) == 0x01B8);
static_assert(offsetof(FScrollBarStyle, VerticalBottomSlotImage) == 0x0248);
static_assert(offsetof(FScrollBarStyle, HorizontalBottomSlotImage) == 0x02D8);
static_assert(offsetof(FScrollBarStyle, NormalThumbImage) == 0x0368);
static_assert(offsetof(FScrollBarStyle, HoveredThumbImage) == 0x03F8);
static_assert(offsetof(FScrollBarStyle, DraggedThumbImage) == 0x0488);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageNormal) == 0x0008);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageHovered) == 0x0098);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageFocused) == 0x0128);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageReadOnly) == 0x01B8);
static_assert(offsetof(FEditableTextBoxStyle, Padding) == 0x0248);
static_assert(offsetof(FEditableTextBoxStyle, Font) == 0x0258);
static_assert(offsetof(FEditableTextBoxStyle, ForegroundColor) == 0x02B8);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundColor) == 0x02E0);
static_assert(offsetof(FEditableTextBoxStyle, ReadOnlyForegroundColor) == 0x0308);
static_assert(offsetof(FEditableTextBoxStyle, HScrollBarPadding) == 0x0330);
static_assert(offsetof(FEditableTextBoxStyle, VScrollBarPadding) == 0x0340);
static_assert(offsetof(FEditableTextBoxStyle, ScrollBarStyle) == 0x0350);
static_assert(offsetof(FTextBlockStyle, Font) == 0x0008);
static_assert(offsetof(FTextBlockStyle, ColorAndOpacity) == 0x0068);
static_assert(offsetof(FTextBlockStyle, ShadowOffset) == 0x0090);
static_assert(offsetof(FTextBlockStyle, ShadowColorAndOpacity) == 0x0098);
static_assert(offsetof(FTextBlockStyle, SelectedBackgroundColor) == 0x00A8);
static_assert(offsetof(FTextBlockStyle, HighlightColor) == 0x00D0);
static_assert(offsetof(FTextBlockStyle, HighlightShape) == 0x00E0);
static_assert(offsetof(FTextBlockStyle, StrikeBrush) == 0x0170);
static_assert(offsetof(FTextBlockStyle, UnderlineBrush) == 0x0200);
static_assert(offsetof(FSpinBoxStyle, BackgroundBrush) == 0x0008);
static_assert(offsetof(FSpinBoxStyle, HoveredBackgroundBrush) == 0x0098);
static_assert(offsetof(FSpinBoxStyle, ActiveFillBrush) == 0x0128);
static_assert(offsetof(FSpinBoxStyle, InactiveFillBrush) == 0x01B8);
static_assert(offsetof(FSpinBoxStyle, ArrowsImage) == 0x0248);
static_assert(offsetof(FSpinBoxStyle, ForegroundColor) == 0x02D8);
static_assert(offsetof(FSpinBoxStyle, TextPadding) == 0x0300);
static_assert(offsetof(FHyperlinkStyle, UnderlineStyle) == 0x0008);
static_assert(offsetof(FHyperlinkStyle, TextStyle) == 0x02A0);
static_assert(offsetof(FHyperlinkStyle, Padding) == 0x0530);
static_assert(offsetof(FFontData, FontFilename) == 0x0000);
static_assert(offsetof(FFontData, FontFaceAsset) == 0x0018);
static_assert(offsetof(FTypefaceEntry, Name) == 0x0000);
static_assert(offsetof(FTypefaceEntry, Font) == 0x0008);
static_assert(offsetof(FTypeface, Fonts) == 0x0000);
static_assert(offsetof(FCompositeFallbackFont, Typeface) == 0x0000);
static_assert(offsetof(FCompositeSubFont, CharacterRanges) == 0x0018);
static_assert(offsetof(FCompositeSubFont, Cultures) == 0x0028);
static_assert(offsetof(FCompositeFont, DefaultTypeface) == 0x0000);
static_assert(offsetof(FCompositeFont, FallbackTypeface) == 0x0010);
static_assert(offsetof(FCompositeFont, SubTypefaces) == 0x0028);
static_assert(offsetof(FWindowStyle, MinimizeButtonStyle) == 0x0008);
static_assert(offsetof(FWindowStyle, MaximizeButtonStyle) == 0x02A0);
static_assert(offsetof(FWindowStyle, RestoreButtonStyle) == 0x0538);
static_assert(offsetof(FWindowStyle, CloseButtonStyle) == 0x07D0);
static_assert(offsetof(FWindowStyle, TitleTextStyle) == 0x0A68);
static_assert(offsetof(FWindowStyle, ActiveTitleBrush) == 0x0CF8);
static_assert(offsetof(FWindowStyle, InactiveTitleBrush) == 0x0D88);
static_assert(offsetof(FWindowStyle, FlashTitleBrush) == 0x0E18);
static_assert(offsetof(FWindowStyle, BackgroundColor) == 0x0EA8);
static_assert(offsetof(FWindowStyle, OutlineBrush) == 0x0ED0);
static_assert(offsetof(FWindowStyle, OutlineColor) == 0x0F60);
static_assert(offsetof(FWindowStyle, BorderBrush) == 0x0F88);
static_assert(offsetof(FWindowStyle, BackgroundBrush) == 0x1018);
static_assert(offsetof(FWindowStyle, ChildBackgroundBrush) == 0x10A8);
static_assert(offsetof(FScrollBorderStyle, TopShadowBrush) == 0x0008);
static_assert(offsetof(FScrollBorderStyle, BottomShadowBrush) == 0x0098);
static_assert(offsetof(FScrollBoxStyle, TopShadowBrush) == 0x0008);
static_assert(offsetof(FScrollBoxStyle, BottomShadowBrush) == 0x0098);
static_assert(offsetof(FScrollBoxStyle, LeftShadowBrush) == 0x0128);
static_assert(offsetof(FScrollBoxStyle, RightShadowBrush) == 0x01B8);
static_assert(offsetof(FDockTabStyle, CloseButtonStyle) == 0x0008);
static_assert(offsetof(FDockTabStyle, NormalBrush) == 0x02A0);
static_assert(offsetof(FDockTabStyle, ActiveBrush) == 0x0330);
static_assert(offsetof(FDockTabStyle, ColorOverlayTabBrush) == 0x03C0);
static_assert(offsetof(FDockTabStyle, ColorOverlayIconBrush) == 0x0450);
static_assert(offsetof(FDockTabStyle, ForegroundBrush) == 0x04E0);
static_assert(offsetof(FDockTabStyle, HoveredBrush) == 0x0570);
static_assert(offsetof(FDockTabStyle, ContentAreaBrush) == 0x0600);
static_assert(offsetof(FDockTabStyle, TabWellBrush) == 0x0690);
static_assert(offsetof(FDockTabStyle, TabPadding) == 0x0720);
static_assert(offsetof(FDockTabStyle, FlashColor) == 0x0738);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryAscendingImage) == 0x0008);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryDescendingImage) == 0x0098);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryAscendingImage) == 0x0128);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryDescendingImage) == 0x01B8);
static_assert(offsetof(FTableColumnHeaderStyle, NormalBrush) == 0x0248);
static_assert(offsetof(FTableColumnHeaderStyle, HoveredBrush) == 0x02D8);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownImage) == 0x0368);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush) == 0x03F8);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush) == 0x0488);
static_assert(offsetof(FSplitterStyle, HandleNormalBrush) == 0x0008);
static_assert(offsetof(FSplitterStyle, HandleHighlightBrush) == 0x0098);
static_assert(offsetof(FHeaderRowStyle, ColumnStyle) == 0x0008);
static_assert(offsetof(FHeaderRowStyle, LastColumnStyle) == 0x0520);
static_assert(offsetof(FHeaderRowStyle, ColumnSplitterStyle) == 0x0A38);
static_assert(offsetof(FHeaderRowStyle, BackgroundBrush) == 0x0B60);
static_assert(offsetof(FHeaderRowStyle, ForegroundColor) == 0x0BF0);
static_assert(offsetof(FInlineTextImageStyle, Image) == 0x0008);
static_assert(offsetof(FSliderStyle, NormalBarImage) == 0x0008);
static_assert(offsetof(FSliderStyle, HoveredBarImage) == 0x0098);
static_assert(offsetof(FSliderStyle, DisabledBarImage) == 0x0128);
static_assert(offsetof(FSliderStyle, NormalThumbImage) == 0x01B8);
static_assert(offsetof(FSliderStyle, HoveredThumbImage) == 0x0248);
static_assert(offsetof(FSliderStyle, DisabledThumbImage) == 0x02D8);
static_assert(offsetof(FVolumeControlStyle, SliderStyle) == 0x0008);
static_assert(offsetof(FVolumeControlStyle, HighVolumeImage) == 0x0378);
static_assert(offsetof(FVolumeControlStyle, MidVolumeImage) == 0x0408);
static_assert(offsetof(FVolumeControlStyle, LowVolumeImage) == 0x0498);
static_assert(offsetof(FVolumeControlStyle, NoVolumeImage) == 0x0528);
static_assert(offsetof(FVolumeControlStyle, MutedImage) == 0x05B8);
static_assert(offsetof(FSearchBoxStyle, TextBoxStyle) == 0x0008);
static_assert(offsetof(FSearchBoxStyle, ActiveFontInfo) == 0x0870);
static_assert(offsetof(FSearchBoxStyle, UpArrowImage) == 0x08D0);
static_assert(offsetof(FSearchBoxStyle, DownArrowImage) == 0x0960);
static_assert(offsetof(FSearchBoxStyle, GlassImage) == 0x09F0);
static_assert(offsetof(FSearchBoxStyle, ClearImage) == 0x0A80);
static_assert(offsetof(FSearchBoxStyle, ImagePadding) == 0x0B10);
static_assert(offsetof(FExpandableAreaStyle, CollapsedImage) == 0x0008);
static_assert(offsetof(FExpandableAreaStyle, ExpandedImage) == 0x0098);
static_assert(offsetof(FProgressBarStyle, BackgroundImage) == 0x0008);
static_assert(offsetof(FProgressBarStyle, FillImage) == 0x0098);
static_assert(offsetof(FProgressBarStyle, MarqueeImage) == 0x0128);
static_assert(offsetof(FInlineEditableTextBlockStyle, EditableTextBoxStyle) == 0x0008);
static_assert(offsetof(FInlineEditableTextBlockStyle, TextStyle) == 0x0870);
static_assert(offsetof(FCheckBoxStyle, UncheckedImage) == 0x0010);
static_assert(offsetof(FCheckBoxStyle, UncheckedHoveredImage) == 0x00A0);
static_assert(offsetof(FCheckBoxStyle, UncheckedPressedImage) == 0x0130);
static_assert(offsetof(FCheckBoxStyle, CheckedImage) == 0x01C0);
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredImage) == 0x0250);
static_assert(offsetof(FCheckBoxStyle, CheckedPressedImage) == 0x02E0);
static_assert(offsetof(FCheckBoxStyle, UndeterminedImage) == 0x0370);
static_assert(offsetof(FCheckBoxStyle, UndeterminedHoveredImage) == 0x0400);
static_assert(offsetof(FCheckBoxStyle, UndeterminedPressedImage) == 0x0490);
static_assert(offsetof(FCheckBoxStyle, Padding) == 0x0520);
static_assert(offsetof(FCheckBoxStyle, ForegroundColor) == 0x0530);
static_assert(offsetof(FCheckBoxStyle, BorderBackgroundColor) == 0x0558);
static_assert(offsetof(FCheckBoxStyle, CheckedSlateSound) == 0x0580);
static_assert(offsetof(FCheckBoxStyle, UncheckedSlateSound) == 0x0598);
static_assert(offsetof(FCheckBoxStyle, HoveredSlateSound) == 0x05B0);
