// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/MFNumKeyboard.MFNumKeyboardWidget
/// Size: 0x02B0 (688 bytes) (0x000290 - 0x0002B0) align 8 MaxSize: 0x02B0
class UMFNumKeyboardWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0290   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.Show
	// void Show(FGeometry TextGeom);                                                                                           // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.SetText
	// void SetText(FString Text);                                                                                              // [0x5174350] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.OnTouch
	// void OnTouch(TEnumAsByte<ETouchIndex> FingerIndex, FVector Location);                                                    // [0x182d6bc] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.OnHide
	// void OnHide();                                                                                                           // [0x517433c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.GetText
	// FString GetText();                                                                                                       // [0x517421c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.DeleteKeyChar
	// void DeleteKeyChar();                                                                                                    // [0x5174208] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.ClearText
	// void ClearText();                                                                                                        // [0x51741cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFNumKeyboard.MFNumKeyboardWidget.AddkeyChar
	// void AddkeyChar(FString S);                                                                                              // [0x5174024] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFNumKeyboard.NumKeyboardComponent
/// Size: 0x0108 (264 bytes) (0x0000F8 - 0x000108) align 8 MaxSize: 0x0108
class UNumKeyboardComponent : public UActorComponent
{ 
public:
	class UClass*                                      WidgetClass;                                                // 0x00F8   (0x0008)  
	class UMFNumKeyboardWidget*                        KeyboardPanel;                                              // 0x0100   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UMFNumKeyboardWidget) == 0x02B0); // 688 bytes (0x000290 - 0x0002B0)
static_assert(sizeof(UNumKeyboardComponent) == 0x0108); // 264 bytes (0x0000F8 - 0x000108)
static_assert(offsetof(UNumKeyboardComponent, WidgetClass) == 0x00F8);
static_assert(offsetof(UNumKeyboardComponent, KeyboardPanel) == 0x0100);
