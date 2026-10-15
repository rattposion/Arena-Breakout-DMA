// generated header

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/IKRetarget.AnimNode_FKRetarget
/// Size: 0x0268 (616 bytes) (0x0000D0 - 0x000268) align 8 MaxSize: 0x0268
struct FAnimNode_FKRetarget : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_8[0x108];                                     // 0x00D0   (0x0108)  MISSED
	TWeakObjectPtr<class USkeletalMesh*>               TargetMesh;                                                 // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x01E0   (0x0020)  MISSED
	bool                                               bEnableFKRetarget;                                          // 0x0200   (0x0001)  
	SDK_UNDEFINED(1,3843) /* EFKRetargetMode */        __um(DefaultRetargetMode);                                  // 0x0201   (0x0001)  
	bool                                               bRetargetRoot;                                              // 0x0202   (0x0001)  
	bool                                               bRetargetTranslation;                                       // 0x0203   (0x0001)  
	bool                                               bRetargetRotation;                                          // 0x0204   (0x0001)  
	bool                                               bRetargetScale;                                             // 0x0205   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0206   (0x0002)  MISSED
	SDK_UNDEFINED(80,3844) /* TMap<FName, EFKRetargetMode> */ __um(BoneRetargetModes);                             // 0x0208   (0x0050)  
	TArray<FName>                                      ExcludedBones;                                              // 0x0258   (0x0010)  
};

/// Struct /Script/IKRetarget.AnimNode_IKFootControl
/// Size: 0x0148 (328 bytes) (0x0000D0 - 0x000148) align 8 MaxSize: 0x0148
struct FAnimNode_IKFootControl : FAnimNode_SkeletalControlBase
{ 
	bool                                               bEnableLeftFootControl;                                     // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	FVector                                            LeftFootIKBoneScaleValue;                                   // 0x00D4   (0x000C)  
	FVector                                            LeftFootTranslationOffset;                                  // 0x00E0   (0x000C)  
	FRotator                                           LeftFootRotationOffset;                                     // 0x00EC   (0x000C)  
	float                                              LeftFootInfluenceAlpha;                                     // 0x00F8   (0x0004)  
	bool                                               bEnableRightFootControl;                                    // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FVector                                            RightFootIKBoneScaleValue;                                  // 0x0100   (0x000C)  
	FVector                                            RightFootTranslationOffset;                                 // 0x010C   (0x000C)  
	FRotator                                           RightFootRotationOffset;                                    // 0x0118   (0x000C)  
	float                                              RightFootInfluenceAlpha;                                    // 0x0124   (0x0004)  
	FBoneReference                                     LeftFootIKBone;                                             // 0x0128   (0x0010)  
	FBoneReference                                     RightFootIKBone;                                            // 0x0138   (0x0010)  
};

/// Struct /Script/IKRetarget.AnimNode_SingleBoneRotation
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FAnimNode_SingleBoneRotation : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00D0   (0x0010)  
	bool                                               bEnableRotationControl;                                     // 0x00E0   (0x0001)  
	bool                                               bUseAdditiveRotation;                                       // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FRotator                                           TargetRotation;                                             // 0x00E4   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(FAnimNode_FKRetarget) == 0x0268); // 616 bytes (0x0000D0 - 0x000268)
static_assert(sizeof(FAnimNode_IKFootControl) == 0x0148); // 328 bytes (0x0000D0 - 0x000148)
static_assert(sizeof(FAnimNode_SingleBoneRotation) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(offsetof(FAnimNode_FKRetarget, TargetMesh) == 0x01D8);
static_assert(offsetof(FAnimNode_FKRetarget, ExcludedBones) == 0x0258);
static_assert(offsetof(FAnimNode_IKFootControl, LeftFootIKBoneScaleValue) == 0x00D4);
static_assert(offsetof(FAnimNode_IKFootControl, LeftFootTranslationOffset) == 0x00E0);
static_assert(offsetof(FAnimNode_IKFootControl, LeftFootRotationOffset) == 0x00EC);
static_assert(offsetof(FAnimNode_IKFootControl, RightFootIKBoneScaleValue) == 0x0100);
static_assert(offsetof(FAnimNode_IKFootControl, RightFootTranslationOffset) == 0x010C);
static_assert(offsetof(FAnimNode_IKFootControl, RightFootRotationOffset) == 0x0118);
static_assert(offsetof(FAnimNode_IKFootControl, LeftFootIKBone) == 0x0128);
static_assert(offsetof(FAnimNode_IKFootControl, RightFootIKBone) == 0x0138);
static_assert(offsetof(FAnimNode_SingleBoneRotation, TargetBone) == 0x00D0);
static_assert(offsetof(FAnimNode_SingleBoneRotation, TargetRotation) == 0x00E4);
