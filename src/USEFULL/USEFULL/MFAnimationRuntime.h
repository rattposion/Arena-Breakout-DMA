// generated header

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFAnimationtFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.RemoveAnimationNotifyEventsByName
	// int32_t RemoveAnimationNotifyEventsByName(class UAnimMontage* AnimMontage, FName NotifyName);                            // [0x4bca464] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.MontageHasCurveInSlot
	// bool MontageHasCurveInSlot(class UAnimMontage* Montage, FName SlotName, FName CurveName);                                // [0x4bca240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.GetCurveValueByName
	// float GetCurveValueByName(class UAnimSequenceBase* InAnimSequence, FName CurveName, float Time);                         // [0x4bca084] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.GetBoneTransformByBoneIndex
	// bool GetBoneTransformByBoneIndex(FTransform& OutTransform, class UAnimSequence* InAnimSequence, int32_t InBoneIndex);    // [0x4bc9e48] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.GetBlendSpaceAnimationByType
	// class UAnimSequence* GetBlendSpaceAnimationByType(class UBlendSpace1D* BlendSpace, int32_t BlendType);                   // [0x4bc9d18] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.FindBlendSpaceSampleByInput
	// class UAnimSequenceBase* FindBlendSpaceSampleByInput(class UBlendSpace* InBlendSpace, float InputX, float InputY, bool bExact); // [0x4bc99a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.FindBlendSpaceNormalizeTimeFromCurveValue
	// float FindBlendSpaceNormalizeTimeFromCurveValue(class UBlendSpace* InBlendSpace, FName Curve, float CurveValue, float InputX, float InputY, float& AnimSeqLength, float& AnimSeqTime, class UAnimSequenceBase*& OutAnimSequence, float LastEvaluateTime); // [0x4bc94e4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.FindAnimSeqTimeFromCurveValue
	// float FindAnimSeqTimeFromCurveValue(class UAnimSequenceBase* InAnimSequence, FName CurveName, float CurveValue, float LastEvaluateTime); // [0x4bc9174] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugSphere
	// void DrawDebugSphere(class UWorld* InWorld, FVector& InPosition, float InRadius, FColor& InColor, float InDuration);     // [0x4bc8f54] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugLine
	// void DrawDebugLine(class UWorld* InWorld, FVector& InStart, FVector& InEnd, FColor& InColor, float InDuration);          // [0x4bc8cf4] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugCone
	// void DrawDebugCone(class UWorld* InWorld, FVector& Origin, FVector& Direction, float Length, float AngleWidth, float AngleHeight, FColor& DrawColor, float Duration); // [0x4bc898c] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawDebugCapsule
	// void DrawDebugCapsule(class UWorld* InWorld, FVector& P0, FVector& P1, float InRadius, FColor& InColor, float InDuration); // [0x4bc86d8] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.DrawCoordinateSystem
	// void DrawCoordinateSystem(class UWorld* InWorld, FTransform& InTransform, float InScale, float InDuration);              // [0x4bc8500] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/MFAnimationRuntime.MFAnimationtFunctionLibrary.AddAnimationNotifyEvent
	// class UAnimNotify* AddAnimationNotifyEvent(class UAnimMontage* AnimMontage, FName NotifyTrackName, float StartTime, class UClass* NotifyClass); // [0x4bc8388] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MFAnimationRuntime.AnimNode_AdjustArmStretch
/// Size: 0x0128 (296 bytes) (0x0000D0 - 0x000128) align 8 MaxSize: 0x0128
struct FAnimNode_AdjustArmStretch : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0010)  
	FBoneReference                                     EndBone;                                                    // 0x00E0   (0x0010)  
	FBoneReference                                     IKHandBone;                                                 // 0x00F0   (0x0010)  
	FVector                                            ExtraOffset;                                                // 0x0100   (0x000C)  
	float                                              ExpectAngleBetweenBones;                                    // 0x010C   (0x0004)  
	SDK_UNDEFINED(1,3845) /* ECalcStretchAlgorithm */  __um(CalcStretchAlgorithm);                                 // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0111   (0x0017)  MISSED
};

/// Struct /Script/MFAnimationRuntime.AnimNode_AlignAroundPivot
/// Size: 0x01A0 (416 bytes) (0x0000D0 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FAnimNode_AlignAroundPivot : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0010)  
	FBoneSocketTarget                                  AlignTarget;                                                // 0x00E0   (0x0060)  
	FTransform                                         AlignTransform;                                             // 0x0140   (0x0030)  
	FVector                                            Pivot;                                                      // 0x0170   (0x000C)  
	float                                              AlignAlpha;                                                 // 0x017C   (0x0004)  
	float                                              InterpSpeed;                                                // 0x0180   (0x0004)  
	char                                               AxisMask;                                                   // 0x0184   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1B];                                      // 0x0185   (0x001B)  MISSED
};

/// Struct /Script/MFAnimationRuntime.AnimNode_ApplyBonesAdditive
/// Size: 0x0050 (80 bytes) (0x000010 - 0x000050) align 8 MaxSize: 0x0050
struct FAnimNode_ApplyBonesAdditive : FAnimNode_Base
{ 
	FPoseLink                                          SourceBase;                                                 // 0x0010   (0x0010)  
	FPoseLink                                          Base;                                                       // 0x0020   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0030   (0x0010)  
	TArray<FBoneReference>                             TargetBoneList;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/MFAnimationRuntime.ADSSetting
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FADSSetting
{ 
	SDK_UNDEFINED(1,3846) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,3847) /* EAdjustType */            __um(AdjustType);                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              CurveName;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/MFAnimationRuntime.AnimNode_BoneAdjustment
/// Size: 0x0088 (136 bytes) (0x000010 - 0x000088) align 8 MaxSize: 0x0088
struct FAnimNode_BoneAdjustment : FAnimNode_Base
{ 
	FPoseLink                                          Input;                                                      // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	FPoseLink                                          Target;                                                     // 0x0030   (0x0010)  
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0040   (0x0008)  
	FBoneReference                                     ScaledBone;                                                 // 0x0048   (0x0010)  
	bool                                               bEvaluateSequenceEndFrame;                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<FADSSetting>                                ADSSettings;                                                // 0x0060   (0x0010)  
	class UAnimSequenceBase*                           LastAnimSequence;                                           // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/MFAnimationRuntime.AnimNode_MotionForceWarping
/// Size: 0x0240 (576 bytes) (0x0000D0 - 0x000240) align 16 MaxSize: 0x0240
struct FAnimNode_MotionForceWarping : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_8[0x110];                                     // 0x00D0   (0x0110)  MISSED
	FBoneReference                                     MotionBone;                                                 // 0x01E0   (0x0010)  
	FBoneReference                                     MotionParentBone;                                           // 0x01F0   (0x0010)  
	bool                                               bAccelChange;                                               // 0x0200   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0201   (0x0003)  MISSED
	FVector                                            MotionLinearAccScale;                                       // 0x0204   (0x000C)  
	FVector                                            MotionLinearVelScale;                                       // 0x0210   (0x000C)  
	FVector                                            LocalMotionAppliedLinearAccClamp;                           // 0x021C   (0x000C)  
	class USkeletalMeshComponent*                      MotionReciever;                                             // 0x0228   (0x0008)  
	FName                                              MotionRecieverBone;                                         // 0x0230   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0238   (0x0008)  MISSED
};

/// Struct /Script/MFAnimationRuntime.IKBones
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FIKBones
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInUpperLimb;                                        // 0x0020   (0x0004)  
	int32_t                                            NumBonesInLowerLimb;                                        // 0x0024   (0x0004)  
};

/// Struct /Script/MFAnimationRuntime.AnimNode_SpeedWarping
/// Size: 0x0188 (392 bytes) (0x0000D0 - 0x000188) align 8 MaxSize: 0x0188
struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IkFootRootBone;                                             // 0x00D0   (0x0010)  
	TArray<FIKBones>                                   FeetDefinitions;                                            // 0x00E0   (0x0010)  
	FBoneReference                                     PelvisBone;                                                 // 0x00F0   (0x0010)  
	float                                              SpeedScaling;                                               // 0x0100   (0x0004)  
	float                                              ActualSpeedScaling;                                         // 0x0104   (0x0004)  
	FInputScaleBiasClamp                               SpeedScalingBiasClamp;                                      // 0x0108   (0x0030)  
	bool                                               ClampIKUsingFKLeg;                                          // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4F];                                      // 0x0139   (0x004F)  MISSED
};

/// Struct /Script/MFAnimationRuntime.PelvisAdjustmentInterp
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPelvisAdjustmentInterp
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              Dampen;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/MFAnimationRuntime.IKFootLocation
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FIKFootLocation
{ 
	FVector                                            LimbRootLocation;                                           // 0x0000   (0x000C)  
	FVector                                            OriginLocation;                                             // 0x000C   (0x000C)  
	FVector                                            ActualLocation;                                             // 0x0018   (0x000C)  
	FVector                                            NewLocation;                                                // 0x0024   (0x000C)  
};

/// Struct /Script/MFAnimationRuntime.AnimNode_UseCrossBPCachedPose
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FAnimNode_UseCrossBPCachedPose : FAnimNode_Base
{ 
};

/// Struct /Script/MFAnimationRuntime.AnimNode_VirtualPivot
/// Size: 0x0160 (352 bytes) (0x0000D0 - 0x000160) align 16 MaxSize: 0x0160
struct FAnimNode_VirtualPivot : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0010)  
	FBoneSocketTarget                                  VirtualParent;                                              // 0x00E0   (0x0060)  
	FVector                                            PivotOffset;                                                // 0x0140   (0x000C)  
	SDK_UNDEFINED(1,3848) /* TEnumAsByte<EBoneControlSpace> */ __um(PivotSpace);                                   // 0x014C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x014D   (0x0003)  MISSED
	FRotator                                           Rotation;                                                   // 0x0150   (0x000C)  
	SDK_UNDEFINED(1,3849) /* TEnumAsByte<EBoneControlSpace> */ __um(RotateSpace);                                  // 0x015C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x015D   (0x0003)  MISSED
};

/// Struct /Script/MFAnimationRuntime.MontageBlendTimePair
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMontageBlendTimePair
{ 
	float                                              BlendInTime;                                                // 0x0000   (0x0004)  
	float                                              BlendOutTime;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/MFAnimationRuntime.AnimationFloatCurvesMap
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAnimationFloatCurvesMap
{ 
	TMap<FString, class UCurveFloat*>                  NameToCurveMap;                                             // 0x0000   (0x0050)  
};

/// Struct /Script/MFAnimationRuntime.AnimationCurvesMap
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAnimationCurvesMap
{ 
	TMap<FString, float>                               CurveToValueMap;                                            // 0x0000   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(UMFAnimationtFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAnimNode_AdjustArmStretch) == 0x0128); // 296 bytes (0x0000D0 - 0x000128)
static_assert(sizeof(FAnimNode_AlignAroundPivot) == 0x01A0); // 416 bytes (0x0000D0 - 0x0001A0)
static_assert(sizeof(FAnimNode_ApplyBonesAdditive) == 0x0050); // 80 bytes (0x000010 - 0x000050)
static_assert(sizeof(FADSSetting) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAnimNode_BoneAdjustment) == 0x0088); // 136 bytes (0x000010 - 0x000088)
static_assert(sizeof(FAnimNode_MotionForceWarping) == 0x0240); // 576 bytes (0x0000D0 - 0x000240)
static_assert(sizeof(FIKBones) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAnimNode_SpeedWarping) == 0x0188); // 392 bytes (0x0000D0 - 0x000188)
static_assert(sizeof(FPelvisAdjustmentInterp) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIKFootLocation) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAnimNode_UseCrossBPCachedPose) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FAnimNode_VirtualPivot) == 0x0160); // 352 bytes (0x0000D0 - 0x000160)
static_assert(sizeof(FMontageBlendTimePair) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnimationFloatCurvesMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAnimationCurvesMap) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FAnimNode_AdjustArmStretch, BoneToModify) == 0x00D0);
static_assert(offsetof(FAnimNode_AdjustArmStretch, EndBone) == 0x00E0);
static_assert(offsetof(FAnimNode_AdjustArmStretch, IKHandBone) == 0x00F0);
static_assert(offsetof(FAnimNode_AdjustArmStretch, ExtraOffset) == 0x0100);
static_assert(offsetof(FAnimNode_AlignAroundPivot, BoneToModify) == 0x00D0);
static_assert(offsetof(FAnimNode_AlignAroundPivot, AlignTarget) == 0x00E0);
static_assert(offsetof(FAnimNode_AlignAroundPivot, AlignTransform) == 0x0140);
static_assert(offsetof(FAnimNode_AlignAroundPivot, Pivot) == 0x0170);
static_assert(offsetof(FAnimNode_ApplyBonesAdditive, SourceBase) == 0x0010);
static_assert(offsetof(FAnimNode_ApplyBonesAdditive, Base) == 0x0020);
static_assert(offsetof(FAnimNode_ApplyBonesAdditive, Additive) == 0x0030);
static_assert(offsetof(FAnimNode_ApplyBonesAdditive, TargetBoneList) == 0x0040);
static_assert(offsetof(FADSSetting, CurveName) == 0x0004);
static_assert(offsetof(FAnimNode_BoneAdjustment, Input) == 0x0010);
static_assert(offsetof(FAnimNode_BoneAdjustment, Additive) == 0x0020);
static_assert(offsetof(FAnimNode_BoneAdjustment, Target) == 0x0030);
static_assert(offsetof(FAnimNode_BoneAdjustment, Sequence) == 0x0040);
static_assert(offsetof(FAnimNode_BoneAdjustment, ScaledBone) == 0x0048);
static_assert(offsetof(FAnimNode_BoneAdjustment, ADSSettings) == 0x0060);
static_assert(offsetof(FAnimNode_BoneAdjustment, LastAnimSequence) == 0x0070);
static_assert(offsetof(FAnimNode_MotionForceWarping, MotionBone) == 0x01E0);
static_assert(offsetof(FAnimNode_MotionForceWarping, MotionParentBone) == 0x01F0);
static_assert(offsetof(FAnimNode_MotionForceWarping, MotionLinearAccScale) == 0x0204);
static_assert(offsetof(FAnimNode_MotionForceWarping, MotionLinearVelScale) == 0x0210);
static_assert(offsetof(FAnimNode_MotionForceWarping, LocalMotionAppliedLinearAccClamp) == 0x021C);
static_assert(offsetof(FAnimNode_MotionForceWarping, MotionReciever) == 0x0228);
static_assert(offsetof(FAnimNode_MotionForceWarping, MotionRecieverBone) == 0x0230);
static_assert(offsetof(FIKBones, IKFootBone) == 0x0000);
static_assert(offsetof(FIKBones, FKFootBone) == 0x0010);
static_assert(offsetof(FAnimNode_SpeedWarping, IkFootRootBone) == 0x00D0);
static_assert(offsetof(FAnimNode_SpeedWarping, FeetDefinitions) == 0x00E0);
static_assert(offsetof(FAnimNode_SpeedWarping, PelvisBone) == 0x00F0);
static_assert(offsetof(FAnimNode_SpeedWarping, SpeedScalingBiasClamp) == 0x0108);
static_assert(offsetof(FIKFootLocation, LimbRootLocation) == 0x0000);
static_assert(offsetof(FIKFootLocation, OriginLocation) == 0x000C);
static_assert(offsetof(FIKFootLocation, ActualLocation) == 0x0018);
static_assert(offsetof(FIKFootLocation, NewLocation) == 0x0024);
static_assert(offsetof(FAnimNode_VirtualPivot, BoneToModify) == 0x00D0);
static_assert(offsetof(FAnimNode_VirtualPivot, VirtualParent) == 0x00E0);
static_assert(offsetof(FAnimNode_VirtualPivot, PivotOffset) == 0x0140);
static_assert(offsetof(FAnimNode_VirtualPivot, Rotation) == 0x0150);
static_assert(offsetof(FAnimationFloatCurvesMap, NameToCurveMap) == 0x0000);
static_assert(offsetof(FAnimationCurvesMap, CurveToValueMap) == 0x0000);
