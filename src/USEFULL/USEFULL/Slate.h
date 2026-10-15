// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: InputCore
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x02C8 (712 bytes) (0x000030 - 0x0002C8) align 8 MaxSize: 0x02C8
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FButtonStyle                                       ButtonStyle;                                                // 0x0030   (0x0298)  
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x05F8 (1528 bytes) (0x000030 - 0x0005F8) align 8 MaxSize: 0x05F8
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FCheckBoxStyle                                     CheckBoxStyle;                                              // 0x0030   (0x05C8)  
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x0450 (1104 bytes) (0x000030 - 0x000450) align 8 MaxSize: 0x0450
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboBoxStyle                                     ComboBoxStyle;                                              // 0x0030   (0x0420)  
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x0418 (1048 bytes) (0x000030 - 0x000418) align 8 MaxSize: 0x0418
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0030   (0x03E8)  
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x0898 (2200 bytes) (0x000030 - 0x000898) align 8 MaxSize: 0x0898
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0030   (0x0868)  
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x0270 (624 bytes) (0x000030 - 0x000270) align 8 MaxSize: 0x0270
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FEditableTextStyle                                 EditableTextStyle;                                          // 0x0030   (0x0240)  
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x0001E8) align 8 MaxSize: 0x01E8
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FProgressBarStyle                                  ProgressBarStyle;                                           // 0x0030   (0x01B8)  
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x0548 (1352 bytes) (0x000030 - 0x000548) align 8 MaxSize: 0x0548
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0030   (0x0518)  
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0278 (632 bytes) (0x000030 - 0x000278) align 8 MaxSize: 0x0278
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FScrollBoxStyle                                    ScrollBoxStyle;                                             // 0x0030   (0x0248)  
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USlateSettings : public UObject
{ 
public:
	bool                                               bExplicitCanvasChildZOrder;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x0340 (832 bytes) (0x000030 - 0x000340) align 8 MaxSize: 0x0340
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FSpinBoxStyle                                      SpinBoxStyle;                                               // 0x0030   (0x0310)  
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x02C0 (704 bytes) (0x000030 - 0x0002C0) align 8 MaxSize: 0x02C0
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
public:
	FTextBlockStyle                                    TextBlockStyle;                                             // 0x0030   (0x0290)  
};

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolMenuBase : public UObject
{ 
public:
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FVirtualKeyboardOptions
{ 
	bool                                               bEnableAutocorrect;                                         // 0x0000   (0x0001)  
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInputChord
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	bool                                               bShift : 1;                                                 // 0x0018:0 (0x0001)  
	bool                                               bCtrl : 1;                                                  // 0x0018:1 (0x0001)  
	bool                                               bAlt : 1;                                                   // 0x0018:2 (0x0001)  
	bool                                               bCmd : 1;                                                   // 0x0018:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAnchors
{ 
	FVector2D                                          Minimum;                                                    // 0x0000   (0x0008)  
	FVector2D                                          Maximum;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FCustomizedToolMenuEntry
{ 
	SDK_UNDEFINED(4,34) /* ECustomizedToolMenuVisibility */ __um(Visibility);                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FCustomizedToolMenuSection
{ 
	SDK_UNDEFINED(4,35) /* ECustomizedToolMenuVisibility */ __um(Visibility);                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCustomizedToolMenuNameArray
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x01E8 (488 bytes) (0x000000 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FCustomizedToolMenu
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TMap<FName, FCustomizedToolMenuEntry>              Entries;                                                    // 0x0008   (0x0050)  
	TMap<FName, FCustomizedToolMenuSection>            Sections;                                                   // 0x0058   (0x0050)  
	TMap<FName, FCustomizedToolMenuNameArray>          EntryOrder;                                                 // 0x00A8   (0x0050)  
	TArray<FName>                                      SectionOrder;                                               // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x0108   (0x00E0)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UButtonWidgetStyle) == 0x02C8); // 712 bytes (0x000030 - 0x0002C8)
static_assert(sizeof(UCheckBoxWidgetStyle) == 0x05F8); // 1528 bytes (0x000030 - 0x0005F8)
static_assert(sizeof(UComboBoxWidgetStyle) == 0x0450); // 1104 bytes (0x000030 - 0x000450)
static_assert(sizeof(UComboButtonWidgetStyle) == 0x0418); // 1048 bytes (0x000030 - 0x000418)
static_assert(sizeof(UEditableTextBoxWidgetStyle) == 0x0898); // 2200 bytes (0x000030 - 0x000898)
static_assert(sizeof(UEditableTextWidgetStyle) == 0x0270); // 624 bytes (0x000030 - 0x000270)
static_assert(sizeof(UProgressWidgetStyle) == 0x01E8); // 488 bytes (0x000030 - 0x0001E8)
static_assert(sizeof(UScrollBarWidgetStyle) == 0x0548); // 1352 bytes (0x000030 - 0x000548)
static_assert(sizeof(UScrollBoxWidgetStyle) == 0x0278); // 632 bytes (0x000030 - 0x000278)
static_assert(sizeof(USlateSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USpinBoxWidgetStyle) == 0x0340); // 832 bytes (0x000030 - 0x000340)
static_assert(sizeof(UTextBlockWidgetStyle) == 0x02C0); // 704 bytes (0x000030 - 0x0002C0)
static_assert(sizeof(UToolMenuBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FVirtualKeyboardOptions) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FInputChord) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnchors) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenuEntry) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCustomizedToolMenuSection) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FCustomizedToolMenuNameArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCustomizedToolMenu) == 0x01E8); // 488 bytes (0x000000 - 0x0001E8)
static_assert(offsetof(UButtonWidgetStyle, ButtonStyle) == 0x0030);
static_assert(offsetof(UCheckBoxWidgetStyle, CheckBoxStyle) == 0x0030);
static_assert(offsetof(UComboBoxWidgetStyle, ComboBoxStyle) == 0x0030);
static_assert(offsetof(UComboButtonWidgetStyle, ComboButtonStyle) == 0x0030);
static_assert(offsetof(UEditableTextBoxWidgetStyle, EditableTextBoxStyle) == 0x0030);
static_assert(offsetof(UEditableTextWidgetStyle, EditableTextStyle) == 0x0030);
static_assert(offsetof(UProgressWidgetStyle, ProgressBarStyle) == 0x0030);
static_assert(offsetof(UScrollBarWidgetStyle, ScrollBarStyle) == 0x0030);
static_assert(offsetof(UScrollBoxWidgetStyle, ScrollBoxStyle) == 0x0030);
static_assert(offsetof(USpinBoxWidgetStyle, SpinBoxStyle) == 0x0030);
static_assert(offsetof(UTextBlockWidgetStyle, TextBlockStyle) == 0x0030);
static_assert(offsetof(FInputChord, Key) == 0x0000);
static_assert(offsetof(FAnchors, Minimum) == 0x0000);
static_assert(offsetof(FAnchors, Maximum) == 0x0008);
static_assert(offsetof(FCustomizedToolMenuNameArray, Names) == 0x0000);
static_assert(offsetof(FCustomizedToolMenu, Name) == 0x0000);
static_assert(offsetof(FCustomizedToolMenu, Entries) == 0x0008);
static_assert(offsetof(FCustomizedToolMenu, Sections) == 0x0058);
static_assert(offsetof(FCustomizedToolMenu, EntryOrder) == 0x00A8);
static_assert(offsetof(FCustomizedToolMenu, SectionOrder) == 0x00F8);
