// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SGFramework
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/MFMobileJoystick.MFMobileCircleUserWidget
/// Size: 0x02E0 (736 bytes) (0x000290 - 0x0002E0) align 8 MaxSize: 0x02E0
class UMFMobileCircleUserWidget : public UUserWidget
{ 
public:
	int32_t                                            WidgetPointIndex;                                           // 0x0290   (0x0004)  
	bool                                               bOpenTouchTick;                                             // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0295   (0x0003)  MISSED
	SDK_UNDEFINED(16,3855) /* FMulticastInlineDelegate */ __um(OnTouchStart);                                      // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,3856) /* FMulticastInlineDelegate */ __um(OnTouchEnd);                                        // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,3857) /* FMulticastInlineDelegate */ __um(OnTouchOutCircle);                                  // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,3858) /* FMulticastInlineDelegate */ __um(OnOutOfButtonTouchEnded);                           // 0x02C8   (0x0010)  
	SDK_UNDEFINED(1,3859) /* EButtonAcceptInputType */ __um(AcceptInputType);                                      // 0x02D8   (0x0001)  
	SDK_UNDEFINED(1,3860) /* EButtonAcceptInputType */ __um(CurrentAcceptInputType);                               // 0x02D9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x02DA   (0x0006)  MISSED


	/// Functions
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget.SetFingerIndexDisableMoveAndRotate
	// void SetFingerIndexDisableMoveAndRotate(int32_t CustomWidgetPointIndex, bool bDisable);                                  // [0x60d6414] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget.OnInputTouchEnded
	// void OnInputTouchEnded(TEnumAsByte<ETouchIndex> FingerIndex);                                                            // [0x60d5d00] Final|Native|Public  
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget.IsPressed
	// bool IsPressed();                                                                                                        // [0x60d5aa4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget.InMovementArea
	// bool InMovementArea(class UWidget* Widget);                                                                              // [0x60d5734] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget.GetCurrentWidgetPointIndex
	// int32_t GetCurrentWidgetPointIndex();                                                                                    // [0x60d5144] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget.DebugCallOnTouchStart
	// void DebugCallOnTouchStart();                                                                                            // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget.DebugCallOnTouchEnd
	// void DebugCallOnTouchEnd();                                                                                              // [0x1e39048] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire
/// Size: 0x0318 (792 bytes) (0x0002E0 - 0x000318) align 8 MaxSize: 0x0318
class UMFMobileCircleUserWidget_Fire : public UMFMobileCircleUserWidget
{ 
public:
	SDK_UNDEFINED(16,3861) /* FMulticastInlineDelegate */ __um(PostStartFireByTouch);                              // 0x02E0   (0x0010)  
	bool                                               bIsLeftFireBtn;                                             // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02F1   (0x000F)  MISSED
	class ASGPlayerController*                         CachedPlayerController;                                     // 0x0300   (0x0008)  
	class ASGCharacter*                                CachedCharacter;                                            // 0x0308   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0310   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire.TouchFireStarted
	// void TouchFireStarted();                                                                                                 // [0x60d73d8] Final|Native|Public  
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnZoomChanged
	// void OnZoomChanged(bool bInZoomChanged);                                                                                 // [0x60d5e84] Final|Native|Private 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire.OnCheckFireDown
	// void OnCheckFireDown();                                                                                                  // [0x60d5b7c] Final|Native|Private 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire.NativeStartFire
	// void NativeStartFire();                                                                                                  // [0x60d5b68] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire.NativeEndFire
	// void NativeEndFire();                                                                                                    // [0x60d5b54] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire.GetUseAutoZoom
	// bool GetUseAutoZoom();                                                                                                   // [0x60d5714] Final|Native|Public  
	// Function /Script/MFMobileJoystick.MFMobileCircleUserWidget_Fire.GetPressedScreenSpacePosition
	// FVector2D GetPressedScreenSpacePosition();                                                                               // [0x60d54b4] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/MFMobileJoystick.MFMobileCustomShapeButton
/// Size: 0x04A8 (1192 bytes) (0x000498 - 0x0004A8) align 8 MaxSize: 0x04A8
class UMFMobileCustomShapeButton : public UButton
{ 
public:
	class UTexture2D*                                  AdvancedHitTexture;                                         // 0x0498   (0x0008)  
	int32_t                                            AdvancedHitAlpha;                                           // 0x04A0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x04A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFMobileJoystick.MFMobileCustomShapeButton.SetAdvancedHitTexture
	// void SetAdvancedHitTexture(class UTexture2D* InTexture);                                                                 // [0x60d6140] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCustomShapeButton.SetAdvancedHitAlpha
	// void SetAdvancedHitAlpha(int32_t inAlpha);                                                                               // [0x60d60a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobileCustomShapeButton.CheckIfLastMouseButtonUpInZone
	// bool CheckIfLastMouseButtonUpInZone();                                                                                   // [0x60d4ecc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFMobileJoystick.MFMobileDragDropUserWidget
/// Size: 0x0378 (888 bytes) (0x0002F0 - 0x000378) align 8 MaxSize: 0x0378
class UMFMobileDragDropUserWidget : public USGUserWidget
{ 
public:
	SDK_UNDEFINED(16,3862) /* FMulticastInlineDelegate */ __um(OnDropEvent);                                       // 0x02F0   (0x0010)  
	SDK_UNDEFINED(16,3863) /* FMulticastInlineDelegate */ __um(OnDragDetectedEvent);                               // 0x0300   (0x0010)  
	SDK_UNDEFINED(16,3864) /* FMulticastInlineDelegate */ __um(OnDragOverEvent);                                   // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,3865) /* FMulticastInlineDelegate */ __um(OnDragEnterEvent);                                  // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,3866) /* FMulticastInlineDelegate */ __um(OnDragLeaveEvent);                                  // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3867) /* FMulticastInlineDelegate */ __um(OnDragCancelledEvent);                              // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,3868) /* FMulticastInlineDelegate */ __um(OnTouchStartedEvent);                               // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,3869) /* FMulticastInlineDelegate */ __um(OnTouchEndedEvent);                                 // 0x0360   (0x0010)  
	bool                                               bDropable;                                                  // 0x0370   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0371   (0x0007)  MISSED
};

/// Class /Script/MFMobileJoystick.MFMobileDraggableButton
/// Size: 0x04A0 (1184 bytes) (0x000498 - 0x0004A0) align 8 MaxSize: 0x04A0
class UMFMobileDraggableButton : public UButton
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0498   (0x0008)  MISSED
};

/// Class /Script/MFMobileJoystick.MFMobileGameHandle
/// Size: 0x01D8 (472 bytes) (0x000028 - 0x0001D8) align 8 MaxSize: 0x01D8
class UMFMobileGameHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	class UMFMobileInputButton*                        MovementButton;                                             // 0x0050   (0x0008)  
	class UMFMobileInputButton*                        RotationButton;                                             // 0x0058   (0x0008)  
	class UMFMobileMoveHandleImpl*                     MoveHandleImpl;                                             // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x130];                                     // 0x0068   (0x0130)  MISSED
	class UMFMobilePlayerInput*                        CachedPlayerInput;                                          // 0x0198   (0x0008)  
	unsigned char                                      UnknownData02_7[0x38];                                      // 0x01A0   (0x0038)  MISSED
};

/// Class /Script/MFMobileJoystick.MFMobileFixedFireGameHandle
/// Size: 0x01D8 (472 bytes) (0x0001D8 - 0x0001D8) align 8 MaxSize: 0x01D8
class UMFMobileFixedFireGameHandle : public UMFMobileGameHandle
{ 
public:
};

/// Class /Script/MFMobileJoystick.MFMobileGamePad
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMFMobileGamePad : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UMFMobilePlayerInput*                        CachedPlayerInput;                                          // 0x0030   (0x0008)  
	TArray<class UMFMobileGamePadView*>                VisibleViewCache;                                           // 0x0038   (0x0010)  
	TArray<class UClass*>                              MobileGamePadViewClasses;                                   // 0x0048   (0x0010)  
	int32_t                                            MobileGamePadViewZorder;                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<class UMFMobileGamePadView*>                MobileGamePadViews;                                         // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/MFMobileJoystick.MFMobileGamePadView
/// Size: 0x02F0 (752 bytes) (0x0002F0 - 0x0002F0) align 8 MaxSize: 0x02F0
class UMFMobileGamePadView : public USGUserWidget
{ 
public:
};

/// Class /Script/MFMobileJoystick.MFMobileInputButton
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMFMobileInputButton : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/MFMobileJoystick.MFMobileMoveHandleImpl
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMFMobileMoveHandleImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/MFMobileJoystick.MFMobileMoveJoystickHandleImpl
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
class UMFMobileMoveJoystickHandleImpl : public UMFMobileMoveHandleImpl
{ 
public:
	class UMFMobileGameHandle*                         OuterGameHandle;                                            // 0x0040   (0x0008)  
};

/// Class /Script/MFMobileJoystick.MFMobileMutilSlider
/// Size: 0x0558 (1368 bytes) (0x000550 - 0x000558) align 8 MaxSize: 0x0558
class UMFMobileMutilSlider : public USlider
{ 
public:
	int32_t                                            SliderBarNum;                                               // 0x0550   (0x0004)  
	bool                                               bCanCross;                                                  // 0x0554   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0555   (0x0003)  MISSED
};

/// Class /Script/MFMobileJoystick.MFMobilePlayerInput
/// Size: 0x0890 (2192 bytes) (0x000688 - 0x000890) align 8 MaxSize: 0x0890
class UMFMobilePlayerInput : public USGPlayerInput
{ 
public:
	float                                              NormalSensitivityX;                                         // 0x0688   (0x0004)  
	float                                              NormalSensitivityY;                                         // 0x068C   (0x0004)  
	float                                              SwimmingSensitivityX;                                       // 0x0690   (0x0004)  
	float                                              SwimmingSensitivityY;                                       // 0x0694   (0x0004)  
	float                                              DrivingSensitivityX;                                        // 0x0698   (0x0004)  
	float                                              DrivingSensitivityY;                                        // 0x069C   (0x0004)  
	bool                                               bDisableMoveAndRotate;                                      // 0x06A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x06A1   (0x0007)  MISSED
	SDK_UNDEFINED(80,3870) /* TMap<TEnumAsByte<ETouchIndex>, bool> */ __um(FingerIndexDisableMoveAndRotateMap);    // 0x06A8   (0x0050)  
	SDK_UNDEFINED(80,3871) /* TSet<TEnumAsByte<ETouchIndex>> */ __um(FingerIndexFullScreenRotateSet);              // 0x06F8   (0x0050)  
	SDK_UNDEFINED(80,3872) /* TMap<TEnumAsByte<ETouchIndex>, bool> */ __um(FingerIndexIgnoreMap);                  // 0x0748   (0x0050)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0798   (0x0004)  MISSED
	float                                              FixedSensitivityFactor;                                     // 0x079C   (0x0004)  
	float                                              DisAccSensitivityFactor;                                    // 0x07A0   (0x0004)  
	float                                              DisFixedInputSensitivityFactor;                             // 0x07A4   (0x0004)  
	float                                              MaxAccumulateAxis;                                          // 0x07A8   (0x0004)  
	float                                              SpeedAccSensitivityFactor;                                  // 0x07AC   (0x0004)  
	float                                              SpeedAccFixedInputSensitivityFactor;                        // 0x07B0   (0x0004)  
	float                                              NewSpeedAccSensitivityFactor;                               // 0x07B4   (0x0004)  
	float                                              NewSpeedAccFixedInputSensitivityFactor;                     // 0x07B8   (0x0004)  
	SDK_UNDEFINED(1,3873) /* ERotateSensitivityMode */ __um(UseSensitivityMode);                                   // 0x07BC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x07BD   (0x0003)  MISSED
	float                                              EmulatorScale;                                              // 0x07C0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x1];                                       // 0x07C4   (0x0001)  MISSED
	bool                                               bCullingYRotaion;                                           // 0x07C5   (0x0001)  
	unsigned char                                      UnknownData04_6[0xA];                                       // 0x07C6   (0x000A)  MISSED
	float                                              DefaultFixedSensitivityValue;                               // 0x07D0   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x07D4   (0x0004)  MISSED
	float                                              DefaultDisAccSensitivityValue;                              // 0x07D8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x07DC   (0x0004)  MISSED
	float                                              DefaultSpeedAccSensitivityValue;                            // 0x07E0   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x07E4   (0x0004)  MISSED
	class UMFMobileGameHandle*                         GameHandle;                                                 // 0x07E8   (0x0008)  
	class UClass*                                      GamePadClassSoft;                                           // 0x07F0   (0x0008)  
	class UMFMobileGamePad*                            Gamepad;                                                    // 0x07F8   (0x0008)  
	unsigned char                                      UnknownData08_6[0x14];                                      // 0x0800   (0x0014)  MISSED
	int32_t                                            CurrentInputModeNum;                                        // 0x0814   (0x0004)  
	TArray<FMobileInputData>                           MobileInputDataList;                                        // 0x0818   (0x0010)  
	TArray<FMobileInputData>                           TempMobileInputDataList;                                    // 0x0828   (0x0010)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x0838   (0x0004)  MISSED
	SDK_UNDEFINED(1,3874) /* EAcceptOP */              __um(AcceptOP);                                             // 0x083C   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x083D   (0x0003)  MISSED
	class UCurveFloat*                                 DeltaMoveSpeedScaleCurve;                                   // 0x0840   (0x0008)  
	SDK_UNDEFINED(1,3875) /* EBlendOP */               __um(BlendOP);                                              // 0x0848   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0849   (0x0003)  MISSED
	float                                              DeltaMoveBlendFactor;                                       // 0x084C   (0x0004)  
	float                                              InterpSpeed;                                                // 0x0850   (0x0004)  
	unsigned char                                      UnknownData12_6[0x4];                                       // 0x0854   (0x0004)  MISSED
	class UCurveFloat*                                 DeltaMoveBlendFactorCurve;                                  // 0x0858   (0x0008)  
	float                                              MagicMin_X1;                                                // 0x0860   (0x0004)  
	float                                              MagicMin_X2;                                                // 0x0864   (0x0004)  
	float                                              MagicMax_X1;                                                // 0x0868   (0x0004)  
	float                                              MagicMax_X2;                                                // 0x086C   (0x0004)  
	float                                              MagicMax_X3;                                                // 0x0870   (0x0004)  
	unsigned char                                      UnknownData13_7[0x1C];                                      // 0x0874   (0x001C)  MISSED


	/// Functions
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.UserSetSpeedAccSensitivity
	// void UserSetSpeedAccSensitivity(float Value);                                                                            // [0x60d7524] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.UserSetFixedSensitivity
	// void UserSetFixedSensitivity(float Value);                                                                               // [0x60d7488] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.UserSetDisAccSensitivity
	// void UserSetDisAccSensitivity(float Value);                                                                              // [0x60d73ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SwitchInputMode
	// void SwitchInputMode(int32_t ModeNum);                                                                                   // [0x60d7318] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.ShowGamepad
	// void ShowGamepad(bool bShowGamepad);                                                                                     // [0x60d6ef0] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetTouchFreeView
	// void SetTouchFreeView(bool bIsTouch);                                                                                    // [0x60d6e54] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetTestMobileInputScale
	// void SetTestMobileInputScale(float Value);                                                                               // [0x60d6db8] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetSimulateMultiRoatationInputDelay
	// void SetSimulateMultiRoatationInputDelay(float Delay);                                                                   // [0x60d6d1c] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetSensitivityMode
	// void SetSensitivityMode(ERotateSensitivityMode Mode);                                                                    // [0x60d6c84] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetMovementButtonUnfixed
	// void SetMovementButtonUnfixed();                                                                                         // [0x60d6c68] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetMovementButtonFixed
	// void SetMovementButtonFixed(FVector2D position, FVector2D Size);                                                         // [0x60d6b84] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetInputMagicMin
	// void SetInputMagicMin(float x1, float x2);                                                                               // [0x60d6a84] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetInputMagicMax
	// void SetInputMagicMax(float x1, float x2, float X3);                                                                     // [0x60d6934] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetInputInterpSpeed
	// void SetInputInterpSpeed(float Speed);                                                                                   // [0x60d6898] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetInputBlendOP
	// void SetInputBlendOP(int32_t Type);                                                                                      // [0x60d6804] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetInputBlendFactor
	// void SetInputBlendFactor(float Value);                                                                                   // [0x60d6768] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetInputAcceptOP
	// void SetInputAcceptOP(int32_t Type);                                                                                     // [0x60d66d4] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetFingerIndexIgnore
	// void SetFingerIndexIgnore(TEnumAsByte<ETouchIndex> FingerIndex, bool bIgnore);                                           // [0x60d65e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetFingerIndexDisableMoveAndRotate
	// void SetFingerIndexDisableMoveAndRotate(TEnumAsByte<ETouchIndex> FingerIndex, bool bDisable);                            // [0x60d64fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetExchangeMoveAndRotate
	// void SetExchangeMoveAndRotate(bool bExchange);                                                                           // [0x60d6378] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetEnableRotateCam
	// void SetEnableRotateCam(bool bEnable);                                                                                   // [0x60d62dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.SetDisableMoveAndRotate
	// void SetDisableMoveAndRotate(bool bDisable);                                                                             // [0x60d61e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.ResetMovementButton
	// void ResetMovementButton(FVector2D InAbsSize, FVector2D InAbsPostion);                                                   // [0x60d5fb4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.RemoveFingerIndexFullScreenRotate
	// void RemoveFingerIndexFullScreenRotate(TEnumAsByte<ETouchIndex> FingerIndex);                                            // [0x60d5f18] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.OnGamePadClassSoftLoadCompleted
	// void OnGamePadClassSoftLoadCompleted(FSoftObjectPath Path);                                                              // [0x60d5b90] Final|Native|Protected|HasDefaults 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.MobileInputShowLog
	// void MobileInputShowLog(bool MobileInputShowLog);                                                                        // [0x60d5abc] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.IsFingerIndexFullScreenRotate
	// bool IsFingerIndexFullScreenRotate(TEnumAsByte<ETouchIndex> FingerIndex);                                                // [0x60d59fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.InMovementArea
	// bool InMovementArea(FVector2D& Pos);                                                                                     // [0x60d5924] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetRefRotationInputData
	// void GetRefRotationInputData(FMobileInputData& Data);                                                                    // [0x60d562c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetRefMovementInputData
	// void GetRefMovementInputData(FMobileInputData& Data);                                                                    // [0x60d5548] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetRealAccelY
	// float GetRealAccelY();                                                                                                   // [0x60d5528] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetRealAccelX
	// float GetRealAccelX();                                                                                                   // [0x60d5508] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetRealAccel
	// FVector2D GetRealAccel();                                                                                                // [0x60d54dc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetPointIndexInputData
	// bool GetPointIndexInputData(int32_t PointIndex, FMobileInputData& PointIndexInputData);                                  // [0x60d5398] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_Location
	// FVector2D GetMovementInputData_Location();                                                                               // [0x60d5364] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_DeltaY
	// float GetMovementInputData_DeltaY();                                                                                     // [0x60d5338] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_DeltaX
	// float GetMovementInputData_DeltaX();                                                                                     // [0x60d530c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_Delta
	// FVector2D GetMovementInputData_Delta();                                                                                  // [0x60d52d4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData_BeginLocation
	// FVector2D GetMovementInputData_BeginLocation();                                                                          // [0x60d52a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMovementInputData
	// FMobileInputData GetMovementInputData();                                                                                 // [0x60d5254] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMoveHandleType
	// TEnumAsByte<ESGMobileMoveHandle> GetMoveHandleType();                                                                    // [0x60d5220] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetMobileInputDataListLength
	// int32_t GetMobileInputDataListLength();                                                                                  // [0x60d5208] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetLastRotationVector
	// FVector2D GetLastRotationVector();                                                                                       // [0x60d51dc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetLastRotationInput
	// FVector2D GetLastRotationInput();                                                                                        // [0x60d51b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetInputModeNum
	// int32_t GetInputModeNum();                                                                                               // [0x5ca4c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.GetFreeViewInputData
	// FMobileInputData GetFreeViewInputData();                                                                                 // [0x60d515c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.ClearInputFlags
	// void ClearInputFlags();                                                                                                  // [0x60d508c] Final|Native|Public  
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.ClearAllInput
	// void ClearAllInput();                                                                                                    // [0x60d4fc8] Final|Native|Public  
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.CheckPointIndexHasInput
	// bool CheckPointIndexHasInput(int32_t PointIndex);                                                                        // [0x60d4ef4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInput.AddFingerIndexFullScreenRotate
	// void AddFingerIndexFullScreenRotate(TEnumAsByte<ETouchIndex> FingerIndex);                                               // [0x60d4de0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MFMobileJoystick.MFMobilePlayerInputStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFMobilePlayerInputStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFMobileJoystick.MFMobilePlayerInputStatics.SimulateStartTouch
	// void SimulateStartTouch(class UObject* WorldContextObject, int32_t TouchIndex, FVector Location);                        // [0x60d71a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInputStatics.SimulateEndTouch
	// void SimulateEndTouch(class UObject* WorldContextObject, int32_t TouchIndex, FVector Location);                          // [0x60d7028] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MFMobileJoystick.MFMobilePlayerInputStatics.ClearAllInput
	// void ClearAllInput(class UObject* WorldContextObject);                                                                   // [0x60d4fdc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MFMobileJoystick.MFPCPlayerInput
/// Size: 0x06D8 (1752 bytes) (0x000688 - 0x0006D8) align 8 MaxSize: 0x06D8
class UMFPCPlayerInput : public USGPlayerInput
{ 
public:
	class UMFMobileGamePadView*                        Gamepad;                                                    // 0x0688   (0x0008)  
	TSoftObjectPtr<class UClass*>                      GamePadClassSoft;                                           // 0x0690   (0x0028)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x06B8   (0x0020)  MISSED


	/// Functions
	// Function /Script/MFMobileJoystick.MFPCPlayerInput.ShowGamepad
	// void ShowGamepad(bool bShowGamepad);                                                                                     // [0x60d6f8c] Final|Exec|Native|Public 
	// Function /Script/MFMobileJoystick.MFPCPlayerInput.OnUIModeChanged
	// void OnUIModeChanged(EUAUIMode NewUIMode, EUAUIMode OldUIMode);                                                          // [0x60d5d9c] Final|Native|Private 
	// Function /Script/MFMobileJoystick.MFPCPlayerInput.OnGamePadClassSoftLoadCompleted
	// void OnGamePadClassSoftLoadCompleted(FSoftObjectPath Path);                                                              // [0x60d5c48] Final|Native|Protected|HasDefaults 
	// Function /Script/MFMobileJoystick.MFPCPlayerInput.DelayInitializeGamePad
	// void DelayInitializeGamePad();                                                                                           // [0x60d5130] Final|Native|Private 
};

/// Struct /Script/MFMobileJoystick.InputRotationInfo
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FInputRotationInfo
{ 
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMFMobileCircleUserWidget) == 0x02E0); // 736 bytes (0x000290 - 0x0002E0)
static_assert(sizeof(UMFMobileCircleUserWidget_Fire) == 0x0318); // 792 bytes (0x0002E0 - 0x000318)
static_assert(sizeof(UMFMobileCustomShapeButton) == 0x04A8); // 1192 bytes (0x000498 - 0x0004A8)
static_assert(sizeof(UMFMobileDragDropUserWidget) == 0x0378); // 888 bytes (0x0002F0 - 0x000378)
static_assert(sizeof(UMFMobileDraggableButton) == 0x04A0); // 1184 bytes (0x000498 - 0x0004A0)
static_assert(sizeof(UMFMobileGameHandle) == 0x01D8); // 472 bytes (0x000028 - 0x0001D8)
static_assert(sizeof(UMFMobileFixedFireGameHandle) == 0x01D8); // 472 bytes (0x0001D8 - 0x0001D8)
static_assert(sizeof(UMFMobileGamePad) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UMFMobileGamePadView) == 0x02F0); // 752 bytes (0x0002F0 - 0x0002F0)
static_assert(sizeof(UMFMobileInputButton) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMFMobileMoveHandleImpl) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMFMobileMoveJoystickHandleImpl) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(UMFMobileMutilSlider) == 0x0558); // 1368 bytes (0x000550 - 0x000558)
static_assert(sizeof(UMFMobilePlayerInput) == 0x0890); // 2192 bytes (0x000688 - 0x000890)
static_assert(sizeof(UMFMobilePlayerInputStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFPCPlayerInput) == 0x06D8); // 1752 bytes (0x000688 - 0x0006D8)
static_assert(sizeof(FInputRotationInfo) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(offsetof(UMFMobileCircleUserWidget_Fire, CachedPlayerController) == 0x0300);
static_assert(offsetof(UMFMobileCircleUserWidget_Fire, CachedCharacter) == 0x0308);
static_assert(offsetof(UMFMobileCustomShapeButton, AdvancedHitTexture) == 0x0498);
static_assert(offsetof(UMFMobileGameHandle, MovementButton) == 0x0050);
static_assert(offsetof(UMFMobileGameHandle, RotationButton) == 0x0058);
static_assert(offsetof(UMFMobileGameHandle, MoveHandleImpl) == 0x0060);
static_assert(offsetof(UMFMobileGameHandle, CachedPlayerInput) == 0x0198);
static_assert(offsetof(UMFMobileGamePad, CachedPlayerInput) == 0x0030);
static_assert(offsetof(UMFMobileGamePad, VisibleViewCache) == 0x0038);
static_assert(offsetof(UMFMobileGamePad, MobileGamePadViewClasses) == 0x0048);
static_assert(offsetof(UMFMobileGamePad, MobileGamePadViews) == 0x0060);
static_assert(offsetof(UMFMobileMoveJoystickHandleImpl, OuterGameHandle) == 0x0040);
static_assert(offsetof(UMFMobilePlayerInput, GameHandle) == 0x07E8);
static_assert(offsetof(UMFMobilePlayerInput, GamePadClassSoft) == 0x07F0);
static_assert(offsetof(UMFMobilePlayerInput, Gamepad) == 0x07F8);
static_assert(offsetof(UMFMobilePlayerInput, MobileInputDataList) == 0x0818);
static_assert(offsetof(UMFMobilePlayerInput, TempMobileInputDataList) == 0x0828);
static_assert(offsetof(UMFMobilePlayerInput, DeltaMoveSpeedScaleCurve) == 0x0840);
static_assert(offsetof(UMFMobilePlayerInput, DeltaMoveBlendFactorCurve) == 0x0858);
static_assert(offsetof(UMFPCPlayerInput, Gamepad) == 0x0688);
static_assert(offsetof(UMFPCPlayerInput, GamePadClassSoft) == 0x0690);
