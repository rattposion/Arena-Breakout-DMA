// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/RichTextBlockWidget.DynamicRichTextBlockDecorator
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UDynamicRichTextBlockDecorator : public UObject
{ 
public:
	bool                                               bReveal;                                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            RevealedIndex;                                              // 0x002C   (0x0004)  
	class URichTextBox*                                ParentRichTextBox;                                          // 0x0030   (0x0008)  
	TArray<class UObject*>                             m_UObjectRefArray;                                          // 0x0038   (0x0010)  
};

/// Class /Script/RichTextBlockWidget.RichTextBox
/// Size: 0x0500 (1280 bytes) (0x000150 - 0x000500) align 8 MaxSize: 0x0500
class URichTextBox : public UTextLayoutWidget
{ 
public:
	FText                                              Text;                                                       // 0x0150   (0x0018)  
	SDK_UNDEFINED(16,5154) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0168   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0178   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x01D8   (0x0010)  
	TArray<class UDynamicRichTextBlockDecorator*>      Decorators;                                                 // 0x01E8   (0x0010)  
	SDK_UNDEFINED(16,5155) /* FMulticastInlineDelegate */ __um(OnHyperlinkClicked);                                // 0x01F8   (0x0010)  
	SDK_UNDEFINED(16,5156) /* FMulticastInlineDelegate */ __um(OnDynamicTextAppended);                             // 0x0208   (0x0010)  
	FText                                              HighLightText;                                              // 0x0218   (0x0018)  
	int32_t                                            LocalizationFeature;                                        // 0x0230   (0x0004)  
	bool                                               LocalizationUpper;                                          // 0x0234   (0x0001)  
	bool                                               bShowDetail;                                                // 0x0235   (0x0001)  
	bool                                               bHandleLongText;                                            // 0x0236   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0237   (0x0001)  MISSED
	int32_t                                            MaxTextLength;                                              // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x023C   (0x0001)  MISSED
	bool                                               bEnableAutoTruncate;                                        // 0x023D   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2C2];                                     // 0x023E   (0x02C2)  MISSED


	/// Functions
	// Function /Script/RichTextBlockWidget.RichTextBox.SetText
	// void SetText(FText& InText);                                                                                             // [0x515c8ec] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RichTextBlockWidget.RichTextBox.SetHighlightText
	// void SetHighlightText(FText& InHighlightText);                                                                           // [0x515c828] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RichTextBlockWidget.RichTextBox.SetDefaultFont
	// void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                          // [0x515c6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RichTextBlockWidget.RichTextBox.RemoveFrontTextLines
	// void RemoveFrontTextLines(int32_t RemovedLineCount);                                                                     // [0x515c640] Final|Native|Public|BlueprintCallable 
	// Function /Script/RichTextBlockWidget.RichTextBox.OnRichTextHyperlinkClicked__DelegateSignature
	// void OnRichTextHyperlinkClicked__DelegateSignature(TArray<FString>& MetaData);                                           // [0x182d6bc] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/RichTextBlockWidget.RichTextBox.OnDynamicTextAppendedEvent__DelegateSignature
	// void OnDynamicTextAppendedEvent__DelegateSignature(FString AppendString);                                                // [0x182d6bc] MulticastDelegate|Public|Delegate 
	// Function /Script/RichTextBlockWidget.RichTextBox.GetDefaultFont
	// FSlateFontInfo GetDefaultFont();                                                                                         // [0x515c624] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RichTextBlockWidget.RichTextBox.ClearAllDisplayText
	// void ClearAllDisplayText();                                                                                              // [0x515c5d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/RichTextBlockWidget.RichTextBox.AppendDynamicTextString
	// int32_t AppendDynamicTextString(FString AppendString);                                                                   // [0x515c4d0] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UDynamicRichTextBlockDecorator) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(URichTextBox) == 0x0500); // 1280 bytes (0x000150 - 0x000500)
static_assert(offsetof(UDynamicRichTextBlockDecorator, ParentRichTextBox) == 0x0030);
static_assert(offsetof(UDynamicRichTextBlockDecorator, m_UObjectRefArray) == 0x0038);
static_assert(offsetof(URichTextBox, Text) == 0x0150);
static_assert(offsetof(URichTextBox, Font) == 0x0178);
static_assert(offsetof(URichTextBox, Color) == 0x01D8);
static_assert(offsetof(URichTextBox, Decorators) == 0x01E8);
static_assert(offsetof(URichTextBox, HighLightText) == 0x0218);
