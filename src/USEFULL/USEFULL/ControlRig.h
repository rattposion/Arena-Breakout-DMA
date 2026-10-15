// generated header

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: PropertyPath
/// dependency: RigVM

#pragma pack(push, 0x1)

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRigElement
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Index;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x00E0 (224 bytes) (0x000018 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigBone : FRigElement
{ 
	FName                                              ParentName;                                                 // 0x0018   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         GlobalTransform;                                            // 0x0060   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0090   (0x0030)  
	TArray<int32_t>                                    Dependents;                                                 // 0x00C0   (0x0010)  
	SDK_UNDEFINED(1,1276) /* ERigBoneType */           __um(Type);                                                 // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRigBoneHierarchy
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigBone>                                   Bones;                                                      // 0x0020   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x0090 (144 bytes) (0x000018 - 0x000090) align 16 MaxSize: 0x0090
struct FRigSpace : FRigElement
{ 
	SDK_UNDEFINED(1,1277) /* ERigSpaceType */          __um(SpaceType);                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x001C   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0060   (0x0030)  
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FRigSpaceHierarchy
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigSpace>                                  Spaces;                                                     // 0x0020   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FRigControlValueStorage
{ 
	float                                              Float00;                                                    // 0x0000   (0x0004)  
	float                                              Float01;                                                    // 0x0004   (0x0004)  
	float                                              Float02;                                                    // 0x0008   (0x0004)  
	float                                              Float03;                                                    // 0x000C   (0x0004)  
	float                                              Float10;                                                    // 0x0010   (0x0004)  
	float                                              Float11;                                                    // 0x0014   (0x0004)  
	float                                              Float12;                                                    // 0x0018   (0x0004)  
	float                                              Float13;                                                    // 0x001C   (0x0004)  
	float                                              Float20;                                                    // 0x0020   (0x0004)  
	float                                              Float21;                                                    // 0x0024   (0x0004)  
	float                                              Float22;                                                    // 0x0028   (0x0004)  
	float                                              Float23;                                                    // 0x002C   (0x0004)  
	float                                              Float30;                                                    // 0x0030   (0x0004)  
	float                                              Float31;                                                    // 0x0034   (0x0004)  
	float                                              Float32;                                                    // 0x0038   (0x0004)  
	float                                              Float33;                                                    // 0x003C   (0x0004)  
	bool                                               bValid;                                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0041   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FRigControlValue
{ 
	FRigControlValueStorage                            FloatStorage;                                               // 0x0000   (0x0044)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         Storage;                                                    // 0x0050   (0x0030)  
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x02F0 (752 bytes) (0x000018 - 0x0002F0) align 16 MaxSize: 0x02F0
struct FRigControl : FRigElement
{ 
	SDK_UNDEFINED(1,1278) /* ERigControlType */        __um(ControlType);                                          // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              DisplayName;                                                // 0x001C   (0x0008)  
	FName                                              ParentName;                                                 // 0x0024   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x002C   (0x0004)  
	FName                                              SpaceName;                                                  // 0x0030   (0x0008)  
	int32_t                                            SpaceIndex;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0040   (0x0030)  
	FRigControlValue                                   InitialValue;                                               // 0x0070   (0x0080)  
	FRigControlValue                                   Value;                                                      // 0x00F0   (0x0080)  
	SDK_UNDEFINED(1,1279) /* ERigControlAxis */        __um(PrimaryAxis);                                          // 0x0170   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x0171   (0x0001)  
	bool                                               bAnimatable;                                                // 0x0172   (0x0001)  
	bool                                               bLimitTranslation;                                          // 0x0173   (0x0001)  
	bool                                               bLimitRotation;                                             // 0x0174   (0x0001)  
	bool                                               bLimitScale;                                                // 0x0175   (0x0001)  
	bool                                               bDrawLimits;                                                // 0x0176   (0x0001)  
	unsigned char                                      UnknownData02_6[0x9];                                       // 0x0177   (0x0009)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x0180   (0x0080)  
	FRigControlValue                                   MaximumValue;                                               // 0x0200   (0x0080)  
	bool                                               bGizmoEnabled;                                              // 0x0280   (0x0001)  
	bool                                               bGizmoVisible;                                              // 0x0281   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0282   (0x0002)  MISSED
	FName                                              GizmoName;                                                  // 0x0284   (0x0008)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	FTransform                                         GizmoTransform;                                             // 0x0290   (0x0030)  
	FLinearColor                                       GizmoColor;                                                 // 0x02C0   (0x0010)  
	TArray<int32_t>                                    Dependents;                                                 // 0x02D0   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x02E1   (0x0007)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x02E8   (0x0008)  
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FRigControlHierarchy
{ 
	unsigned char                                      UnknownData00_7[0x98];                                      // 0x0000   (0x0098)  MISSED
	TArray<FRigControl>                                Controls;                                                   // 0x0098   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x00A8   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x00F8   (0x0010)  
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FRigCurve : FRigElement
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRigCurveContainer
{ 
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FRigCurve>                                  Curves;                                                     // 0x0020   (0x0010)  
	TMap<FName, int32_t>                               NameToIndexMapping;                                         // 0x0030   (0x0050)  
	TArray<FName>                                      Selection;                                                  // 0x0080   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0368 (872 bytes) (0x000000 - 0x000368) align 8 MaxSize: 0x0368
struct FRigHierarchyContainer
{ 
	FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0098)  
	FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0098   (0x0090)  
	FRigControlHierarchy                               ControlHierarchy;                                           // 0x0128   (0x0108)  
	FRigCurveContainer                                 CurveContainer;                                             // 0x0230   (0x0098)  
	int32_t                                            Version;                                                    // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x9C];                                      // 0x02CC   (0x009C)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInstruction
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FControlRigDrawInstruction
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1280) /* TEnumAsByte<EControlRigDrawSettings> */ __um(PrimitiveType);                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x0010   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0020   (0x0010)  
	float                                              Thickness;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0030)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x0070   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FControlRigDrawContainer
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FControlRigDrawInstruction>                 Instructions;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigElementKey
{ 
	SDK_UNDEFINED(1,1281) /* ERigElementType */        __um(Type);                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRigInfluenceEntry
{ 
	FRigElementKey                                     Source;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRigInfluenceMap
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
	TArray<FRigInfluenceEntry>                         Entries;                                                    // 0x0008   (0x0010)  
	TMap<FRigElementKey, int32_t>                      KeyToIndex;                                                 // 0x0018   (0x0050)  
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRigInfluenceMapPerEvent
{ 
	TArray<FRigInfluenceMap>                           Maps;                                                       // 0x0000   (0x0010)  
	TMap<FName, int32_t>                               EventToIndex;                                               // 0x0010   (0x0050)  
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0650 (1616 bytes) (0x000028 - 0x000650) align 8 MaxSize: 0x0650
class UControlRig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x1D];                                      // 0x0028   (0x001D)  MISSED
	SDK_UNDEFINED(1,1282) /* ERigExecutionType */      __um(ExecutionType);                                        // 0x0045   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	class URigVM*                                      VM;                                                         // 0x0048   (0x0008)  
	FRigHierarchyContainer                             Hierarchy;                                                  // 0x0050   (0x0368)  
	TWeakObjectPtr<class UControlRigGizmoLibrary*>     GizmoLibrary;                                               // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x03C0   (0x0030)  MISSED
	TMap<FName, FCachedPropertyPath>                   InputProperties;                                            // 0x03F0   (0x0050)  
	TMap<FName, FCachedPropertyPath>                   OutputProperties;                                           // 0x0440   (0x0050)  
	FControlRigDrawContainer                           DrawContainer;                                              // 0x0490   (0x0018)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x04A8   (0x0018)  MISSED
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                         // 0x04C0   (0x0008)  
	TArray<FName>                                      EventQueue;                                                 // 0x04C8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x78];                                      // 0x04D8   (0x0078)  MISSED
	FRigInfluenceMapPerEvent                           Influences;                                                 // 0x0550   (0x0060)  
	class UControlRig*                                 InteractionRig;                                             // 0x05B0   (0x0008)  
	class UClass*                                      InteractionRigClass;                                        // 0x05B8   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x05C0   (0x0010)  
	unsigned char                                      UnknownData05_7[0x80];                                      // 0x05D0   (0x0080)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	// void SetInteractionRigClass(class UClass* InInteractionRigClass);                                                        // [0x49ac6d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	// void SetInteractionRig(class UControlRig* InInteractionRig);                                                             // [0x49ac63c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	// class UClass* GetInteractionRigClass();                                                                                  // [0x49aae04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	// class UControlRig* GetInteractionRig();                                                                                  // [0x49aadec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0660 (1632 bytes) (0x000650 - 0x000660) align 8 MaxSize: 0x0660
class UAdditiveControlRig : public UControlRig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0650   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 16 MaxSize: 0x02C0
class UControlRigAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B8   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FControlRigComponentMappedElement
{ 
	FComponentReference                                ComponentReference;                                         // 0x0000   (0x0028)  
	int32_t                                            TransformIndex;                                             // 0x0028   (0x0004)  
	FName                                              TransformName;                                              // 0x002C   (0x0008)  
	SDK_UNDEFINED(1,1283) /* ERigElementType */        __um(ElementType);                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FName                                              ElementName;                                                // 0x0038   (0x0008)  
	SDK_UNDEFINED(1,1284) /* EControlRigComponentMapDirection */ __um(Direction);                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0041   (0x000F)  MISSED
	FTransform                                         Offset;                                                     // 0x0050   (0x0030)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	SDK_UNDEFINED(1,1285) /* EControlRigComponentSpace */ __um(Space);                                             // 0x0084   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x0088   (0x0008)  
	int32_t                                            ElementIndex;                                               // 0x0090   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x0094   (0x0004)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x05F0 (1520 bytes) (0x0004F0 - 0x0005F0) align 16 MaxSize: 0x05F0
class UControlRigComponent : public UPrimitiveComponent
{ 
public:
	class UClass*                                      ControlRigClass;                                            // 0x04F0   (0x0008)  
	SDK_UNDEFINED(16,1286) /* FMulticastInlineDelegate */ __um(OnPostInitializeDelegate);                          // 0x04F8   (0x0010)  
	SDK_UNDEFINED(16,1287) /* FMulticastInlineDelegate */ __um(OnPreSetupDelegate);                                // 0x0508   (0x0010)  
	SDK_UNDEFINED(16,1288) /* FMulticastInlineDelegate */ __um(OnPostSetupDelegate);                               // 0x0518   (0x0010)  
	SDK_UNDEFINED(16,1289) /* FMulticastInlineDelegate */ __um(OnPreUpdateDelegate);                               // 0x0528   (0x0010)  
	SDK_UNDEFINED(16,1290) /* FMulticastInlineDelegate */ __um(OnPostUpdateDelegate);                              // 0x0538   (0x0010)  
	TArray<FControlRigComponentMappedElement>          MappedElements;                                             // 0x0548   (0x0010)  
	bool                                               bResetTransformBeforeTick;                                  // 0x0558   (0x0001)  
	bool                                               bResetInitialsBeforeSetup;                                  // 0x0559   (0x0001)  
	bool                                               bUpdateRigOnTick;                                           // 0x055A   (0x0001)  
	bool                                               bUpdateInEditor;                                            // 0x055B   (0x0001)  
	bool                                               bDrawBones;                                                 // 0x055C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x055D   (0x0003)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x0560   (0x0008)  
	unsigned char                                      UnknownData01_7[0x88];                                      // 0x0568   (0x0088)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	// void Update(float DeltaTime);                                                                                            // [0x49ac83c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x49ac774] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);            // [0x49ac49c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0x49ac2a4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                             // [0x49ac1c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                          // [0x49abfb4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                                 // [0x49abe68] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                              // [0x49abb10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0x49ab9c4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                   // [0x49ab824] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	// void SetControlInt(FName ControlName, int32_t Value);                                                                    // [0x49ab73c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	// void SetControlFloat(FName ControlName, float Value);                                                                    // [0x49ab654] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	// void SetControlBool(FName ControlName, bool Value);                                                                      // [0x49ab56c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0x49ab31c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                      // [0x49ab26c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreUpdate
	// void OnPreUpdate(class UControlRigComponent* Component);                                                                 // [0x49ab1cc] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreSetup
	// void OnPreSetup(class UControlRigComponent* Component);                                                                  // [0x49ab12c] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostUpdate
	// void OnPostUpdate(class UControlRigComponent* Component);                                                                // [0x49ab08c] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostSetup
	// void OnPostSetup(class UControlRigComponent* Component);                                                                 // [0x49aafec] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	// void OnPostInitialize(class UControlRigComponent* Component);                                                            // [0x49aaf4c] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	// void Initialize();                                                                                                       // [0x49aaf38] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                          // [0x49aae1c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                   // [0x49aacd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                     // [0x49aabb4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                              // [0x49aaa20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	// FVector2D GetControlVector2D(FName ControlName);                                                                         // [0x49aa944] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                      // [0x49aa828] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                             // [0x49aa720] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                          // [0x49aa618] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	// class UControlRig* GetControlRig();                                                                                      // [0x49aa5f4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                          // [0x49aa4ec] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                         // [0x49aa3d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	// int32_t GetControlInt(FName ControlName);                                                                                // [0x49aa308] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	// float GetControlFloat(FName ControlName);                                                                                // [0x49aa25c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	// bool GetControlBool(FName ControlName);                                                                                  // [0x49aa194] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                            // [0x49aa078] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                                 // [0x49aa04c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                          // [0x49a9f54] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	// void ClearMappedElements();                                                                                              // [0x49a9f0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0x49a9d5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x49a9c94] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                        // [0x49a9b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);                                 // [0x49a9ad8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x03A8 (936 bytes) (0x000318 - 0x0003A8) align 8 MaxSize: 0x03A8
class AControlRigControlActor : public AActor
{ 
public:
	class AActor*                                      ActorToTrack;                                               // 0x0318   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x0320   (0x0008)  
	bool                                               bRefreshOnTick;                                             // 0x0328   (0x0001)  
	bool                                               bIsSelectable;                                              // 0x0329   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x032A   (0x0006)  MISSED
	class UMaterialInterface*                          MaterialOverride;                                           // 0x0330   (0x0008)  
	FString                                            ColorParameter;                                             // 0x0338   (0x0010)  
	bool                                               bCastShadows;                                               // 0x0348   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0349   (0x0007)  MISSED
	class USceneComponent*                             ActorRootComponent;                                         // 0x0350   (0x0008)  
	class UControlRig*                                 ControlRig;                                                 // 0x0358   (0x0008)  
	TArray<FName>                                      ControlNames;                                               // 0x0360   (0x0010)  
	TArray<FTransform>                                 GizmoTransforms;                                            // 0x0370   (0x0010)  
	TArray<class UStaticMeshComponent*>                Components;                                                 // 0x0380   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                  // 0x0390   (0x0010)  
	FName                                              ColorParameterName;                                         // 0x03A0   (0x0008)  


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	// void Refresh();                                                                                                          // [0x49ae68c] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	// void Clear();                                                                                                            // [0x49ae580] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigGizmoActor
/// Size: 0x0340 (832 bytes) (0x000318 - 0x000340) align 8 MaxSize: 0x0340
class AControlRigGizmoActor : public AActor
{ 
public:
	class USceneComponent*                             ActorRootComponent;                                         // 0x0318   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0320   (0x0008)  
	uint32_t                                           ControlRigIndex;                                            // 0x0328   (0x0004)  
	FName                                              ControlName;                                                // 0x032C   (0x0008)  
	FName                                              ColorParameterName;                                         // 0x0334   (0x0008)  
	bool                                               bEnabled : 1;                                               // 0x033C:0 (0x0001)  
	bool                                               bSelected : 1;                                              // 0x033C:1 (0x0001)  
	bool                                               bSelectable : 1;                                            // 0x033C:2 (0x0001)  
	bool                                               bHovered : 1;                                               // 0x033C:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x033D   (0x0003)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigGizmoActor.SetSelected
	// void SetSelected(bool bInSelected);                                                                                      // [0x49ae970] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetSelectable
	// void SetSelectable(bool bInSelectable);                                                                                  // [0x49ae8d0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetHovered
	// void SetHovered(bool bInHovered);                                                                                        // [0x49ae830] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetGlobalTransform
	// void SetGlobalTransform(FTransform& InTransform);                                                                        // [0x49ae740] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                        // [0x49ae6a0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnTransformChanged
	// void OnTransformChanged(FTransform& NewTransform);                                                                       // [0x182d6bc] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnSelectionChanged
	// void OnSelectionChanged(bool bIsSelected);                                                                               // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnManipulatingChanged
	// void OnManipulatingChanged(bool bIsManipulating);                                                                        // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnHoveredChanged
	// void OnHoveredChanged(bool bIsSelected);                                                                                 // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x182d6bc] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsSelectedInEditor
	// bool IsSelectedInEditor();                                                                                               // [0x49ae664] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsHovered
	// bool IsHovered();                                                                                                        // [0x49ae63c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x49ae614] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigGizmoActor.GetGlobalTransform
	// FTransform GetGlobalTransform();                                                                                         // [0x49ae594] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.ControlRigGizmoDefinition
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FControlRigGizmoDefinition
{ 
	FName                                              GizmoName;                                                  // 0x0000   (0x0008)  
	TWeakObjectPtr<class UStaticMesh*>                 StaticMesh;                                                 // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
};

/// Class /Script/ControlRig.ControlRigGizmoLibrary
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 16 MaxSize: 0x00E0
class UControlRigGizmoLibrary : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FControlRigGizmoDefinition                         DefaultGizmo;                                               // 0x0030   (0x0060)  
	TWeakObjectPtr<class UMaterial*>                   DefaultMaterial;                                            // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0098   (0x0020)  MISSED
	FName                                              MaterialColorParameter;                                     // 0x00B8   (0x0008)  
	TArray<FControlRigGizmoDefinition>                 Gizmos;                                                     // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 16 MaxSize: 0x02C0
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B8   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UControlRigValidationPass : public UObject
{ 
public:
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FCachedRigElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           Index;                                                      // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	int32_t                                            ContainerVersion;                                           // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FRigPoseElement
{ 
	FCachedRigElement                                  Index;                                                      // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FTransform                                         GlobalTransform;                                            // 0x0020   (0x0030)  
	FTransform                                         LocalTransform;                                             // 0x0050   (0x0030)  
	float                                              CurveValue;                                                 // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigPose
{ 
	TArray<FRigPoseElement>                            Elements;                                                   // 0x0000   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
public:
	bool                                               bCheckControls;                                             // 0x0028   (0x0001)  
	bool                                               bCheckBones;                                                // 0x0029   (0x0001)  
	bool                                               bCheckCurves;                                               // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              TranslationPrecision;                                       // 0x002C   (0x0004)  
	float                                              RotationPrecision;                                          // 0x0030   (0x0004)  
	float                                              ScalePrecision;                                             // 0x0034   (0x0004)  
	float                                              CurvePrecision;                                             // 0x0038   (0x0004)  
	FName                                              EventNameA;                                                 // 0x003C   (0x0008)  
	FName                                              EventNameB;                                                 // 0x0044   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FRigPose                                           pose;                                                       // 0x0050   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UControlRigObjectHolder : public UObject
{ 
public:
	TArray<class UObject*>                             Objects;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0220 (544 bytes) (0x0001C8 - 0x000220) align 8 MaxSize: 0x0220
class UControlRigSequence : public ULevelSequence
{ 
public:
	TWeakObjectPtr<class UAnimSequence*>               LastExportedToAnimationSequence;                            // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x01D0   (0x0020)  MISSED
	TWeakObjectPtr<class USkeletalMesh*>               LastExportedUsingSkeletalMesh;                              // 0x01F0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x01F8   (0x0020)  MISSED
	float                                              LastExportedFrameRate;                                      // 0x0218   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x021C   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigSequencerAnimInstance
/// Size: 0x02D0 (720 bytes) (0x0002C0 - 0x0002D0) align 16 MaxSize: 0x02D0
class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02C0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UControlRigValidator : public UObject
{ 
public:
	TArray<class UControlRigValidationPass*>           Passes;                                                     // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0668 (1640 bytes) (0x000650 - 0x000668) align 8 MaxSize: 0x0668
class UFKControlRig : public UControlRig
{ 
public:
	TArray<bool>                                       IsControlActive;                                            // 0x0650   (0x0010)  
	SDK_UNDEFINED(1,1291) /* EControlRigFKRigExecuteMode */ __um(ApplyMode);                                       // 0x0660   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0661   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChannelMapInfo
{ 
	int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            TotalChannelIndex;                                          // 0x0004   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x0008   (0x0004)  
	int32_t                                            ParentControlIndex;                                         // 0x000C   (0x0004)  
	FName                                              ChannelTypeName;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FEnumParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneByteChannel                             ParameterCurve;                                             // 0x0008   (0x0098)  
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FIntegerParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneIntegerChannel                          ParameterCurve;                                             // 0x0008   (0x0090)  
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x02F0 (752 bytes) (0x000148 - 0x0002F0) align 8 MaxSize: 0x02F0
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
	class UControlRig*                                 ControlRig;                                                 // 0x0148   (0x0008)  
	TArray<bool>                                       ControlsMask;                                               // 0x0150   (0x0010)  
	FMovieSceneTransformMask                           TransformMask;                                              // 0x0160   (0x0004)  
	bool                                               bAdditive;                                                  // 0x0164   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0165   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0166   (0x0002)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0168   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0178   (0x00A0)  
	TMap<FName, FChannelMapInfo>                       ControlChannelMap;                                          // 0x0218   (0x0050)  
	TArray<FEnumParameterNameAndCurve>                 EnumParameterNamesAndCurves;                                // 0x0268   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              IntegerParameterNamesAndCurves;                             // 0x0278   (0x0010)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x0288   (0x0068)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x00B0 (176 bytes) (0x000078 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0078   (0x0010)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x0088   (0x0008)  
	class UMovieSceneSection*                          SectionToKey;                                               // 0x0090   (0x0008)  
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
	FName                                              TrackName;                                                  // 0x00A8   (0x0008)  
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FConstraintNodeData
{ 
	FTransform                                         RelativeParent;                                             // 0x0000   (0x0030)  
	FConstraintOffset                                  ConstraintOffset;                                           // 0x0030   (0x0060)  
	FName                                              LinkedNode;                                                 // 0x0090   (0x0008)  
	TArray<FTransformConstraint>                       Constraints;                                                // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
	TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FControlRigIOSettings
{ 
	bool                                               bUpdatePose;                                                // 0x0000   (0x0001)  
	bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0170 (368 bytes) (0x000058 - 0x000170) align 8 MaxSize: 0x0170
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	TMap<FName, uint16_t>                              ControlRigBoneMapping;                                      // 0x0068   (0x0050)  
	TMap<FName, uint16_t>                              ControlRigCurveMapping;                                     // 0x00B8   (0x0050)  
	TMap<FName, uint16_t>                              InputToCurveMappingUIDs;                                    // 0x0108   (0x0050)  
	TWeakObjectPtr<class UNodeMappingContainer*>       NodeMappingContainer;                                       // 0x0158   (0x0008)  
	FControlRigIOSettings                              InputSettings;                                              // 0x0160   (0x0002)  
	FControlRigIOSettings                              OutputSettings;                                             // 0x0162   (0x0002)  
	bool                                               bExecute;                                                   // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0165   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0368 (872 bytes) (0x000170 - 0x000368) align 8 MaxSize: 0x0368
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0170   (0x0008)  
	class UControlRig*                                 ControlRig;                                                 // 0x0178   (0x0008)  
	float                                              Alpha;                                                      // 0x0180   (0x0004)  
	SDK_UNDEFINED(1,1292) /* EAnimAlphaInputType */    __um(AlphaInputType);                                       // 0x0184   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0185:0 (0x0001)  
	bool                                               bSetRefPoseFromSkeleton : 1;                                // 0x0185:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0186   (0x0002)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0188   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0190   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x01D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x01E0   (0x0030)  
	TMap<FName, FName>                                 InputMapping;                                               // 0x0210   (0x0050)  
	TMap<FName, FName>                                 OutputMapping;                                              // 0x0260   (0x0050)  
	unsigned char                                      UnknownData01_6[0xB0];                                      // 0x02B0   (0x00B0)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0360   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0364   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0178 (376 bytes) (0x000170 - 0x000178) align 8 MaxSize: 0x0178
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
	TWeakObjectPtr<class UControlRig*>                 ControlRig;                                                 // 0x0170   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x0920 (2336 bytes) (0x000880 - 0x000920) align 16 MaxSize: 0x0920
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0880   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FControlRigComponentMappedCurve
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FControlRigComponentMappedBone
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FControlRigComponentMappedComponent
{ 
	class USceneComponent*                             Component;                                                  // 0x0000   (0x0008)  
	FName                                              ElementName;                                                // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1293) /* ERigElementType */        __um(ElementType);                                          // 0x0010   (0x0001)  
	SDK_UNDEFINED(1,1294) /* EControlRigComponentMapDirection */ __um(Direction);                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInterface
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FControlRigDrawInterface : FControlRigDrawContainer
{ 
};

/// Struct /Script/ControlRig.GizmoActorCreationParam
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 16 MaxSize: 0x0120
struct FGizmoActorCreationParam
{ 
	unsigned char                                      UnknownData00_2[0x120];                                     // 0x0000   (0x0120)  MISSED
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x0920 (2336 bytes) (0x000880 - 0x000920) align 16 MaxSize: 0x0920
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0880   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000030) align 8 MaxSize: 0x0030
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.CRFourPointBezier
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FCRFourPointBezier
{ 
	FVector                                            A;                                                          // 0x0000   (0x000C)  
	FVector                                            B;                                                          // 0x000C   (0x000C)  
	FVector                                            C;                                                          // 0x0018   (0x000C)  
	FVector                                            D;                                                          // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FControlRigSequenceObjectReference
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FControlRigSequenceObjectReferences
{ 
	TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FControlRigSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
/// Size: 0x0EC0 (3776 bytes) (0x000B20 - 0x000EC0) align 16 MaxSize: 0x0EC0
struct FControlRigSequencerAnimInstanceProxy : FAnimSequencerInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x3A0];                                     // 0x0B20   (0x03A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FControlRigSettingsPerPinBool
{ 
	TMap<FString, bool>                                Values;                                                     // 0x0000   (0x0050)  
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FControlRigValidationContext
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCRSimContainer
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              TimeStep;                                                   // 0x0008   (0x0004)  
	float                                              AccumulatedTime;                                            // 0x000C   (0x0004)  
	float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FCRSimLinearSpring
{ 
	int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)  
	float                                              Coefficient;                                                // 0x0008   (0x0004)  
	float                                              Equilibrium;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.CRSimPoint
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FCRSimPoint
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              InheritMotion;                                              // 0x000C   (0x0004)  
	FVector                                            position;                                                   // 0x0010   (0x000C)  
	FVector                                            LinearVelocity;                                             // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FCRSimPointConstraint
{ 
	SDK_UNDEFINED(1,1295) /* ECRSimConstraintType */   __um(Type);                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)  
	FVector                                            DataA;                                                      // 0x000C   (0x000C)  
	FVector                                            DataB;                                                      // 0x0018   (0x000C)  
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FCRSimPointForce
{ 
	SDK_UNDEFINED(1,1296) /* ECRSimPointForceType */   __um(ForceType);                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0004   (0x000C)  
	float                                              Coefficient;                                                // 0x0010   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FCRSimSoftCollision
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	SDK_UNDEFINED(1,1297) /* ECRSimSoftCollisionType */ __um(ShapeType);                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0034   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0038   (0x0004)  
	SDK_UNDEFINED(1,1298) /* EControlRigAnimEasingType */ __um(FalloffType);                                       // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              Coefficient;                                                // 0x0040   (0x0004)  
	bool                                               bInverted;                                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData02_7[0xB];                                       // 0x0045   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0078 (120 bytes) (0x000018 - 0x000078) align 8 MaxSize: 0x0078
struct FCRSimPointContainer : FCRSimContainer
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0018   (0x0010)  
	TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)  
	TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)  
	TArray<FCRSimPoint>                                PreviousStep;                                               // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
	bool                                               bAdditive;                                                  // 0x0008   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x00A0)  
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x00C0   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FEnumParameterNameAndCurve>                 Enums;                                                      // 0x0080   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              Integers;                                                   // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRigHierarchyRef
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ControlRig.RigMirrorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigMirrorSettings
{ 
	SDK_UNDEFINED(1,1299) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1300) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            OldName;                                                    // 0x0008   (0x0010)  
	FString                                            NewName;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRigHierarchyCopyPasteContent
{ 
	SDK_UNDEFINED(16,1301) /* TArray<ERigElementType> */ __um(Types);                                              // 0x0000   (0x0010)  
	TArray<FString>                                    Contents;                                                   // 0x0010   (0x0010)  
	TArray<FTransform>                                 LocalTransforms;                                            // 0x0020   (0x0010)  
	TArray<FTransform>                                 GlobalTransforms;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigEventContext
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigElementKeyCollection
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigControlModifiedContext
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigInfluenceEntryModifier
{ 
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnitMutable : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SimBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_SimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorRange
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            AccumulatedMinimum;                                         // 0x002C   (0x000C)  
	FVector                                            AccumulatedMaximum;                                         // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatRange
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)  
	float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformLerp
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TargetValue;                                                // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	float                                              Blend;                                                      // 0x0070   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0075   (0x000B)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatLerp
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              TargetValue;                                                // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	float                                              Blend;                                                      // 0x0030   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0035   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorLerp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase
{ 
	FVector                                            TargetValue;                                                // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	float                                              Blend;                                                      // 0x0020   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0034   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatLerp
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase
{ 
	float                                              TargetValue;                                                // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	float                                              Blend;                                                      // 0x0010   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformMul
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Multiplier;                                                 // 0x0010   (0x0030)  
	FTransform                                         InitialValue;                                               // 0x0040   (0x0030)  
	bool                                               bFlipOrder;                                                 // 0x0070   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
	FTransform                                         AccumulatedValue;                                           // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatMul
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Multiplier;                                                 // 0x0010   (0x0010)  
	FQuat                                              InitialValue;                                               // 0x0020   (0x0010)  
	bool                                               bFlipOrder;                                                 // 0x0030   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0032   (0x000E)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
	FQuat                                              AccumulatedValue;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorMul
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase
{ 
	FVector                                            Multiplier;                                                 // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatMul
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase
{ 
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorAdd
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase
{ 
	FVector                                            Increment;                                                  // 0x0008   (0x000C)  
	FVector                                            InitialValue;                                               // 0x0014   (0x000C)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
	FVector                                            AccumulatedValue;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatAdd
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase
{ 
	float                                              Increment;                                                  // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	float                                              Weight;                                                     // 0x00A0   (0x0004)  
	bool                                               bPostMultiply;                                              // 0x00A4   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00A6   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00A8   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FRigUnit_AimItem_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	FVector                                            Axis;                                                       // 0x0004   (0x000C)  
	FVector                                            Target;                                                     // 0x0010   (0x000C)  
	SDK_UNDEFINED(1,1302) /* EControlRigVectorKind */  __um(Kind);                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x0020   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_AimBone_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0150 (336 bytes) (0x000068 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0074   (0x002C)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x00A0   (0x002C)  
	float                                              Weight;                                                     // 0x00CC   (0x0004)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0110   (0x0014)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0124   (0x0014)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0138   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FRigUnit_AimBone_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	FVector                                            Axis;                                                       // 0x0004   (0x000C)  
	FVector                                            Target;                                                     // 0x0010   (0x000C)  
	SDK_UNDEFINED(1,1303) /* EControlRigVectorKind */  __um(Kind);                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              Space;                                                      // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0150 (336 bytes) (0x000068 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FRigUnit_AimBone_Target                            Primary;                                                    // 0x0070   (0x0028)  
	FRigUnit_AimBone_Target                            Secondary;                                                  // 0x0098   (0x0028)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x00C5   (0x000B)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)  
	FCachedRigElement                                  CachedBoneIndex;                                            // 0x0110   (0x0014)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0124   (0x0014)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0138   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0140 (320 bytes) (0x000008 - 0x000140) align 16 MaxSize: 0x0140
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         InputTransform;                                             // 0x0010   (0x0030)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0040   (0x002C)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x006C   (0x002C)  
	float                                              Weight;                                                     // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00D0   (0x0040)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0110   (0x0014)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0124   (0x0014)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FAimTarget
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            AlignVector;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_AimConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0068   (0x0008)  
	SDK_UNDEFINED(1,1304) /* EAimMode */               __um(AimMode);                                              // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,1305) /* EAimMode */               __um(UpMode);                                               // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0072   (0x0002)  MISSED
	FVector                                            AimVector;                                                  // 0x0074   (0x000C)  
	FVector                                            UpVector;                                                   // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FAimTarget>                                 AimTargets;                                                 // 0x0090   (0x0010)  
	TArray<FAimTarget>                                 UpTargets;                                                  // 0x00A0   (0x0010)  
	FRigUnit_AimConstraint_WorkData                    WorkData;                                                   // 0x00B0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpVector
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Scale;                                                      // 0x0014   (0x0004)  
	float                                              Bias;                                                       // 0x0018   (0x0004)  
	bool                                               bMapRange;                                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0020   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0028   (0x0008)  
	bool                                               bClampResult;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0034   (0x0004)  
	float                                              ClampMax;                                                   // 0x0038   (0x0004)  
	bool                                               bInterpResult;                                              // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0040   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0044   (0x0004)  
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0054   (0x0030)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterp
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
	float                                              Bias;                                                       // 0x0010   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0018   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)  
	bool                                               bClampResult;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x002C   (0x0004)  
	float                                              ClampMax;                                                   // 0x0030   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)  
	float                                              Result;                                                     // 0x0040   (0x0004)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_AnimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_AnimEasing
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	SDK_UNDEFINED(1,1306) /* EControlRigAnimEasingType */ __um(Type);                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0010   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0014   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0018   (0x0004)  
	float                                              TargetMaximum;                                              // 0x001C   (0x0004)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEasingType
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{ 
	SDK_UNDEFINED(1,1307) /* EControlRigAnimEasingType */ __um(Type);                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEvalRichCurve
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
	float                                              SourceMinimum;                                              // 0x0098   (0x0004)  
	float                                              SourceMaximum;                                              // 0x009C   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00A0   (0x0004)  
	float                                              TargetMaximum;                                              // 0x00A4   (0x0004)  
	float                                              Result;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimRichCurve
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x00A0   (0x0009)  
	SDK_UNDEFINED(1,1308) /* EApplyTransformMode */    __um(ApplyTransformMode);                                   // 0x00A9   (0x0001)  
	SDK_UNDEFINED(1,1309) /* ETransformSpaceMode */    __um(ApplyTransformSpace);                                  // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
	FTransform                                         BaseTransform;                                              // 0x00B0   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_BeginExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FBlendTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_BlendTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	TArray<FBlendTarget>                               Targets;                                                    // 0x0040   (0x0010)  
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigUnit_Harmonics_TargetItem
{ 
	FRigElementKey                                     item;                                                       // 0x0000   (0x000C)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_BoneHarmonics_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	FVector                                            WaveTime;                                                   // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_Harmonics_TargetItem>              Targets;                                                    // 0x0068   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0078   (0x000C)  
	FVector                                            WaveFrequency;                                              // 0x0084   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0090   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x009C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x00A8   (0x000C)  
	SDK_UNDEFINED(1,1310) /* EControlRigAnimEasingType */ __um(WaveEase);                                          // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00B8   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00BC   (0x0004)  
	SDK_UNDEFINED(1,1311) /* EControlRigRotationOrder */ __um(RotationOrder);                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00C8   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	float                                              Ratio;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x0068   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0078   (0x000C)  
	FVector                                            WaveFrequency;                                              // 0x0084   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0090   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x009C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x00A8   (0x000C)  
	SDK_UNDEFINED(1,1312) /* EControlRigAnimEasingType */ __um(WaveEase);                                          // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00B8   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00BC   (0x0004)  
	SDK_UNDEFINED(1,1313) /* EControlRigRotationOrder */ __um(RotationOrder);                                      // 0x00C0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00C8   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_ControlName : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_SpaceName : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_BoneName : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Item : FRigUnit
{ 
	FRigElementKey                                     item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigUnit_CCDIK_RotationLimitPerItem
{ 
	FRigElementKey                                     item;                                                       // 0x0000   (0x000C)  
	float                                              Limit;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_CCDIK_WorkData
{ 
	TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)  
	TArray<float>                                      RotationLimitsPerItem;                                      // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0040   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x0140 (320 bytes) (0x000068 - 0x000140) align 16 MaxSize: 0x0140
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0058)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_CCDIK_RotationLimit
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	float                                              Limit;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x0140 (320 bytes) (0x000068 - 0x000140) align 16 MaxSize: 0x0140
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0058)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FRigUnit_ChainHarmonics_Reach
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            ReachTarget;                                                // 0x0004   (0x000C)  
	FVector                                            ReachAxis;                                                  // 0x0010   (0x000C)  
	float                                              ReachMinimum;                                               // 0x001C   (0x0004)  
	float                                              ReachMaximum;                                               // 0x0020   (0x0004)  
	SDK_UNDEFINED(1,1314) /* EControlRigAnimEasingType */ __um(ReachEase);                                         // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FRigUnit_ChainHarmonics_Wave
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            WaveFrequency;                                              // 0x0004   (0x000C)  
	FVector                                            WaveAmplitude;                                              // 0x0010   (0x000C)  
	FVector                                            WaveOffset;                                                 // 0x001C   (0x000C)  
	FVector                                            WaveNoise;                                                  // 0x0028   (0x000C)  
	float                                              WaveMinimum;                                                // 0x0034   (0x0004)  
	float                                              WaveMaximum;                                                // 0x0038   (0x0004)  
	SDK_UNDEFINED(1,1315) /* EControlRigAnimEasingType */ __um(WaveEase);                                          // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FRigUnit_ChainHarmonics_Pendulum
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PendulumStiffness;                                          // 0x0004   (0x0004)  
	FVector                                            PendulumGravity;                                            // 0x0008   (0x000C)  
	float                                              PendulumBlend;                                              // 0x0014   (0x0004)  
	float                                              PendulumDrag;                                               // 0x0018   (0x0004)  
	float                                              PendulumMinimum;                                            // 0x001C   (0x0004)  
	float                                              PendulumMaximum;                                            // 0x0020   (0x0004)  
	SDK_UNDEFINED(1,1316) /* EControlRigAnimEasingType */ __um(PendulumEase);                                      // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FVector                                            UnwindAxis;                                                 // 0x0028   (0x000C)  
	float                                              UnwindMinimum;                                              // 0x0034   (0x0004)  
	float                                              UnwindMaximum;                                              // 0x0038   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_ChainHarmonics_WorkData
{ 
	FVector                                            Time;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          Items;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      Ratio;                                                      // 0x0020   (0x0010)  
	TArray<FVector>                                    LocalTip;                                                   // 0x0030   (0x0010)  
	TArray<FVector>                                    PendulumTip;                                                // 0x0040   (0x0010)  
	TArray<FVector>                                    PendulumPosition;                                           // 0x0050   (0x0010)  
	TArray<FVector>                                    PendulumVelocity;                                           // 0x0060   (0x0010)  
	TArray<FVector>                                    HierarchyLine;                                              // 0x0070   (0x0010)  
	TArray<FVector>                                    VelocityLines;                                              // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x0270 (624 bytes) (0x000068 - 0x000270) align 16 MaxSize: 0x0270
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ChainRoot;                                                  // 0x0068   (0x000C)  
	FVector                                            Speed;                                                      // 0x0074   (0x000C)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0080   (0x0028)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00A8   (0x0040)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00E8   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0170   (0x003C)  
	bool                                               bDrawDebug;                                                 // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x01B0   (0x0030)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01E0   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0270 (624 bytes) (0x000068 - 0x000270) align 16 MaxSize: 0x0270
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              ChainRoot;                                                  // 0x0068   (0x0008)  
	FVector                                            Speed;                                                      // 0x0070   (0x000C)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x007C   (0x0028)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00A4   (0x0040)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x00E8   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0170   (0x003C)  
	bool                                               bDrawDebug;                                                 // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x01B0   (0x0030)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x01E0   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x00F8 (248 bytes) (0x000068 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0068   (0x0010)  
	FRigElementKey                                     item;                                                       // 0x0078   (0x000C)  
	int32_t                                            Index;                                                      // 0x0084   (0x0004)  
	int32_t                                            Count;                                                      // 0x0088   (0x0004)  
	float                                              Ratio;                                                      // 0x008C   (0x0004)  
	bool                                               Continue;                                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0098   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_CollectionBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Index;                                                      // 0x0018   (0x0004)  
	FRigElementKey                                     item;                                                       // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Reversed;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0008)  
	FName                                              New;                                                        // 0x0020   (0x0008)  
	bool                                               RemoveInvalidItems;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0040   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	SDK_UNDEFINED(1,1317) /* ERigElementType */        __um(TypeToSearch);                                         // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0017   (0x0001)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0028   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1318) /* ERigElementType */        __um(TypeToSearch);                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0028   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x000C)  
	FRigElementKey                                     LastItem;                                                   // 0x0014   (0x000C)  
	bool                                               Reverse;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
	FRigElementKeyCollection                           CachedCollection;                                           // 0x0038   (0x0010)  
	int32_t                                            CachedHierarchyHash;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_Control : FRigUnit
{ 
	FEulerTransform                                    Transform;                                                  // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Base;                                                       // 0x0030   (0x0030)  
	FTransform                                         InitTransform;                                              // 0x0060   (0x0030)  
	FTransform                                         Result;                                                     // 0x0090   (0x0030)  
	FTransformFilter                                   Filter;                                                     // 0x00C0   (0x0009)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0100 (256 bytes) (0x0000D0 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
	FTransform                                         MeshTransform;                                              // 0x00D0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	FRotator                                           Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_ConvertRotation : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
	FEulerTransform                                    Input;                                                      // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_ConvertTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_DebugBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0068   (0x0030)  
	float                                              MinimumU;                                                   // 0x0098   (0x0004)  
	float                                              MaximumU;                                                   // 0x009C   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Thickness;                                                  // 0x00B0   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00B4   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0068   (0x0030)  
	float                                              MinimumU;                                                   // 0x0098   (0x0004)  
	float                                              MaximumU;                                                   // 0x009C   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Thickness;                                                  // 0x00B0   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00B4   (0x0004)  
	FName                                              Space;                                                      // 0x00B8   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x00C0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{ 
	float                                              Scale;                                                      // 0x0068   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x006C   (0x0010)  
	float                                              Thickness;                                                  // 0x007C   (0x0004)  
	FTransform                                         WorldOffset;                                                // 0x0080   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0068   (0x000C)  
	FVector                                            B;                                                          // 0x0074   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	float                                              Thickness;                                                  // 0x0090   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0094   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0068   (0x000C)  
	FVector                                            B;                                                          // 0x0074   (0x000C)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	float                                              Thickness;                                                  // 0x0090   (0x0004)  
	FName                                              Space;                                                      // 0x0094   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0068   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0078   (0x0010)  
	float                                              Thickness;                                                  // 0x0088   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x008C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0068   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0078   (0x0010)  
	float                                              Thickness;                                                  // 0x0088   (0x0004)  
	FName                                              Space;                                                      // 0x008C   (0x0008)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0094   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPointMutable
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{ 
	FVector                                            Vector;                                                     // 0x0068   (0x000C)  
	SDK_UNDEFINED(1,1319) /* ERigUnitDebugPointMode */ __um(Mode);                                                 // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0078   (0x0010)  
	float                                              Scale;                                                      // 0x0088   (0x0004)  
	float                                              Thickness;                                                  // 0x008C   (0x0004)  
	FName                                              Space;                                                      // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPoint
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{ 
	FVector                                            Vector;                                                     // 0x0008   (0x000C)  
	SDK_UNDEFINED(1,1320) /* ERigUnitDebugPointMode */ __um(Mode);                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	float                                              Thickness;                                                  // 0x002C   (0x0004)  
	FName                                              Space;                                                      // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0040   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00C4   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FName                                              Space;                                                      // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FName                                              Space;                                                      // 0x00B8   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x00C0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0068   (0x0010)  
	SDK_UNDEFINED(1,1321) /* ERigUnitDebugTransformMode */ __um(Mode);                                             // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x007C   (0x0010)  
	float                                              Thickness;                                                  // 0x008C   (0x0004)  
	float                                              Scale;                                                      // 0x0090   (0x0004)  
	FName                                              Space;                                                      // 0x0094   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FRigUnit_DebugTransformArrayMutable_WorkData       WorkData;                                                   // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	SDK_UNDEFINED(1,1322) /* ERigUnitDebugTransformMode */ __um(Mode);                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00BC   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x0110 (272 bytes) (0x000068 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	SDK_UNDEFINED(1,1323) /* ERigUnitDebugTransformMode */ __um(Mode);                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FName                                              Space;                                                      // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	SDK_UNDEFINED(1,1324) /* ERigUnitDebugTransformMode */ __um(Mode);                                             // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0044   (0x0010)  
	float                                              Thickness;                                                  // 0x0054   (0x0004)  
	float                                              Scale;                                                      // 0x0058   (0x0004)  
	FName                                              Space;                                                      // 0x005C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0064   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0070   (0x0030)  
	bool                                               bEnabled;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Delta;                                                      // 0x0040   (0x0030)  
	FTransform                                         PreviousValue;                                              // 0x0070   (0x0030)  
	FTransform                                         Cache;                                                      // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Delta;                                                      // 0x0020   (0x0010)  
	FQuat                                              PreviousValue;                                              // 0x0030   (0x0010)  
	FQuat                                              Cache;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Delta;                                                      // 0x0014   (0x000C)  
	FVector                                            PreviousValue;                                              // 0x0020   (0x000C)  
	FVector                                            Cache;                                                      // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Delta;                                                      // 0x000C   (0x0004)  
	float                                              PreviousValue;                                              // 0x0010   (0x0004)  
	float                                              Cache;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FRigUnit_DistributeRotation_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_DistributeRotation_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0020   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0030   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0078   (0x0010)  
	SDK_UNDEFINED(1,1325) /* EControlRigAnimEasingType */ __um(RotationEaseType);                                  // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x008C   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0090   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x00E8 (232 bytes) (0x000068 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0078   (0x0010)  
	SDK_UNDEFINED(1,1326) /* EControlRigAnimEasingType */ __um(RotationEaseType);                                  // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x008C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0098   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0078 (120 bytes) (0x000068 - 0x000078) align 8 MaxSize: 0x0078
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0068   (0x0008)  
	float                                              Thickness;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0068   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0070   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
	FName                                              InstructionName;                                            // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_FABRIK_WorkData
{ 
	TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0020   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x0100 (256 bytes) (0x000068 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         EffectorTransform;                                          // 0x0080   (0x0030)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0038)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FRigUnit_FitChainToCurve_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_FitChainToCurve_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector>                                    ItemPositions;                                              // 0x0008   (0x0010)  
	TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)  
	TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)  
	TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0048   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0058   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0068   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0078   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0200 (512 bytes) (0x000068 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0078   (0x0030)  
	SDK_UNDEFINED(1,1327) /* EControlRigCurveAlignment */ __um(Alignment);                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00AC   (0x0004)  
	float                                              Maximum;                                                    // 0x00B0   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00B4   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00B8   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00C4   (0x000C)  
	FVector                                            PoleVectorPosition;                                         // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00E0   (0x0010)  
	SDK_UNDEFINED(1,1328) /* EControlRigAnimEasingType */ __um(RotationEaseType);                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00F4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0100   (0x0060)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0160   (0x0098)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0200 (512 bytes) (0x000068 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0078   (0x0030)  
	SDK_UNDEFINED(1,1329) /* EControlRigCurveAlignment */ __um(Alignment);                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00AC   (0x0004)  
	float                                              Maximum;                                                    // 0x00B0   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00B4   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00B8   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00C4   (0x000C)  
	FVector                                            PoleVectorPosition;                                         // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x00E0   (0x0010)  
	SDK_UNDEFINED(1,1330) /* EControlRigAnimEasingType */ __um(RotationEaseType);                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00F4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0100   (0x0060)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0160   (0x0098)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MapRange_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              MinIn;                                                      // 0x000C   (0x0004)  
	float                                              MaxIn;                                                      // 0x0010   (0x0004)  
	float                                              MinOut;                                                     // 0x0014   (0x0004)  
	float                                              MaxOut;                                                     // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Clamp_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Min;                                                        // 0x000C   (0x0004)  
	float                                              Max;                                                        // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
	float                                              Argument0;                                                  // 0x0008   (0x0004)  
	float                                              Argument1;                                                  // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_ForLoopCount
/// Size: 0x00D8 (216 bytes) (0x000068 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FRigUnit_ForLoopCount : FRigUnitMutable
{ 
	int32_t                                            Count;                                                      // 0x0068   (0x0004)  
	int32_t                                            Index;                                                      // 0x006C   (0x0004)  
	float                                              Ratio;                                                      // 0x0070   (0x0004)  
	bool                                               Continue;                                                   // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0078   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1331) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1332) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_GetControlTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1333) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FTransform                                         Minimum;                                                    // 0x0050   (0x0030)  
	FTransform                                         Maximum;                                                    // 0x0080   (0x0030)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B0   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_GetControlRotator : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1334) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRotator                                           Rotator;                                                    // 0x0014   (0x000C)  
	FRotator                                           Minimum;                                                    // 0x0020   (0x000C)  
	FRotator                                           Maximum;                                                    // 0x002C   (0x000C)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0038   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_GetControlVector : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1335) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FVector                                            Vector;                                                     // 0x0014   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0020   (0x000C)  
	FVector                                            Maximum;                                                    // 0x002C   (0x000C)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0038   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Minimum;                                                    // 0x0018   (0x0008)  
	FVector2D                                          Maximum;                                                    // 0x0020   (0x0008)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0028   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_GetControlInteger : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0010   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x0014   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0018   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x001C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_GetControlFloat : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x001C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_GetControlBool : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0014   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_GetCurveValue : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x0008)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0014   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_GetDeltaTime
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{ 
	float                                              Result;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1336) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0068   (0x0008)  
	SDK_UNDEFINED(1,1337) /* ETransformGetterType */   __um(Type);                                                 // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,1338) /* ETransformSpaceMode */    __um(TransformSpace);                                       // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FName                                              BaseJoint;                                                  // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTransform                                         Output;                                                     // 0x00C0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
	FName                                              Bone;                                                       // 0x0008   (0x0008)  
	FName                                              Space;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0050   (0x0014)  
	FCachedRigElement                                  CachedSpace;                                                // 0x0064   (0x0014)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     Parent;                                                     // 0x0018   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0025   (0x000B)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0030   (0x0030)  
	FCachedRigElement                                  CachedChild;                                                // 0x0060   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x0074   (0x0014)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
	SDK_UNDEFINED(1,1339) /* EBoneGetterSetterMode */  __um(SpaceType);                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_GetTransform : FRigUnit
{ 
	FRigElementKey                                     item;                                                       // 0x0008   (0x000C)  
	SDK_UNDEFINED(1,1340) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0014   (0x0001)  
	bool                                               bInitial;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0016   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0030)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetWorldTime
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{ 
	float                                              Year;                                                       // 0x0008   (0x0004)  
	float                                              Month;                                                      // 0x000C   (0x0004)  
	float                                              Day;                                                        // 0x0010   (0x0004)  
	float                                              WeekDay;                                                    // 0x0014   (0x0004)  
	float                                              Hours;                                                      // 0x0018   (0x0004)  
	float                                              Minutes;                                                    // 0x001C   (0x0004)  
	float                                              Seconds;                                                    // 0x0020   (0x0004)  
	float                                              OverallSeconds;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_HierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     item;                                                       // 0x0008   (0x000C)  
	bool                                               bIncludeItem;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKeyCollection                           Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Children;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedParent;                                               // 0x0028   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FRigElementKeyCollection                           CachedChildren;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bIncludeChild;                                              // 0x0014   (0x0001)  
	bool                                               bReverse;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FRigElementKeyCollection                           CachedParents;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0014   (0x000C)  
	FCachedRigElement                                  CachedChild;                                                // 0x0020   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x0034   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_InverseExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_IsInteracting : FRigUnit
{ 
	bool                                               bIsInteracting;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_ItemBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{ 
	FRigElementKey                                     item;                                                       // 0x0008   (0x000C)  
	FName                                              Old;                                                        // 0x0014   (0x0008)  
	FName                                              New;                                                        // 0x001C   (0x0008)  
	FRigElementKey                                     Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{ 
	FRigElementKey                                     item;                                                       // 0x0008   (0x000C)  
	bool                                               Exists;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_KalmanTransform
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	int32_t                                            BufferSize;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanVector
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	int32_t                                            BufferSize;                                                 // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0028   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanFloat
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNotEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOr
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolAnd
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Result;                                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNot
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstant
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstFalse
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstTrue
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorLerp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	float                                              T;                                                          // 0x0028   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryOp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathColorMul
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorSub
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorAdd
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorFromFloat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLawOfCosine
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              C;                                                          // 0x0010   (0x0004)  
	float                                              AlphaAngle;                                                 // 0x0014   (0x0004)  
	float                                              BetaAngle;                                                  // 0x0018   (0x0004)  
	float                                              GammaAngle;                                                 // 0x001C   (0x0004)  
	bool                                               bValid;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAtan
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAcos
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAsin
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatTan
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCos
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSin
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRad
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDeg
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSelectBool
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              IfTrue;                                                     // 0x000C   (0x0004)  
	float                                              IfFalse;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Tolerance;                                                  // 0x0010   (0x0004)  
	bool                                               Result;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Tolerance;                                                  // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLessEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreaterEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLess
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreater
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNotEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRemap
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SourceMinimum;                                              // 0x000C   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0010   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0014   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0018   (0x0004)  
	bool                                               bClamp;                                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLerp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              T;                                                          // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatClamp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSign
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatToInt
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRound
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCeil
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatFloor
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAbs
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNegate
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSqrt
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatPow
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMax
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMod
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDiv
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMul
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSub
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAdd
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstant
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstTwoPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstHalfPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathIntBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntLessEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreaterEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntLess
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreater
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntNotEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntClamp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x000C   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0010   (0x0004)  
	int32_t                                            Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntSign
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntToFloat
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntAbs
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntNegate
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBinaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntPow
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMax
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMod
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntDiv
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMul
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntSub
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntAdd
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{ 
	SDK_UNDEFINED(1,1341) /* EControlRigRotationOrder */ __um(RotationOrder);                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSwingTwist
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Swing;                                                      // 0x0030   (0x0010)  
	FQuat                                              Twist;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	SDK_UNDEFINED(1,1342) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0010)  
	FVector                                            Vector;                                                     // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnit
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionDot
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              Result;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FQuat                                              IfTrue;                                                     // 0x0010   (0x0010)  
	FQuat                                              IfFalse;                                                    // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionNotEquals
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionEquals
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	bool                                               Result;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0031   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSlerp
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	float                                              T;                                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionInverse
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0010)  
	FQuat                                              B;                                                          // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMul
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToRotator
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FRotator                                           Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToEuler
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(1,1343) /* EControlRigRotationOrder */ __um(RotationOrder);                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionScale
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	float                                              Scale;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotator
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{ 
	FRotator                                           Rotator;                                                    // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Euler;                                                      // 0x0008   (0x000C)  
	SDK_UNDEFINED(1,1344) /* EControlRigRotationOrder */ __um(RotationOrder);                                      // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              Angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_MathRBFInterpolateVectorWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{ 
	FVector                                            Input;                                                      // 0x0008   (0x000C)  
	SDK_UNDEFINED(1,1345) /* ERBFVectorDistanceType */ __um(DistanceFunction);                                     // 0x0014   (0x0001)  
	SDK_UNDEFINED(1,1346) /* ERBFKernelType */         __um(SmoothingFunction);                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              SmoothingRadius;                                            // 0x0018   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FRigUnit_MathRBFInterpolateVectorWorkData          WorkData;                                                   // 0x0020   (0x0090)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorXform_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FMathRBFInterpolateVectorXform_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorXform
/// Size: 0x00F0 (240 bytes) (0x0000B0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorXform_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00C0   (0x0030)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FMathRBFInterpolateVectorQuat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorQuat
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorQuat_Target>       Targets;                                                    // 0x00B0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00C0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorColor_Target
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMathRBFInterpolateVectorColor_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	FLinearColor                                       Value;                                                      // 0x000C   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorColor
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorColor_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00C0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorVector_Target
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FMathRBFInterpolateVectorVector_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	FVector                                            Value;                                                      // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorVector
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorVector_Target>     Targets;                                                    // 0x00B0   (0x0010)  
	FVector                                            Output;                                                     // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMathRBFInterpolateVectorFloat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x000C)  
	float                                              Value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorFloat
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorFloat_Target>      Targets;                                                    // 0x00B0   (0x0010)  
	float                                              Output;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_MathRBFInterpolateQuatWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(1,1347) /* ERBFQuatDistanceType */   __um(DistanceFunction);                                     // 0x0020   (0x0001)  
	SDK_UNDEFINED(1,1348) /* ERBFKernelType */         __um(SmoothingFunction);                                    // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              SmoothingAngle;                                             // 0x0024   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FVector                                            TwistAxis;                                                  // 0x002C   (0x000C)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FRigUnit_MathRBFInterpolateQuatWorkData            WorkData;                                                   // 0x0040   (0x0090)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatXform_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FMathRBFInterpolateQuatXform_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatXform
/// Size: 0x0110 (272 bytes) (0x0000D0 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatXform_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00E0   (0x0030)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FMathRBFInterpolateQuatQuat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatQuat
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatQuat_Target>         Targets;                                                    // 0x00D0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00E0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatColor_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FMathRBFInterpolateQuatColor_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FLinearColor                                       Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatColor_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00E0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatVector_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FMathRBFInterpolateQuatVector_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	FVector                                            Value;                                                      // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatVector
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatVector_Target>       Targets;                                                    // 0x00D0   (0x0010)  
	FVector                                            Output;                                                     // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FMathRBFInterpolateQuatFloat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0010)  
	float                                              Value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatFloat_Target>        Targets;                                                    // 0x00D0   (0x0010)  
	float                                              Output;                                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformClampSpatially
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	SDK_UNDEFINED(1,1349) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0040   (0x0001)  
	SDK_UNDEFINED(1,1350) /* TEnumAsByte<EControlRigClampSpatialMode> */ __um(Type);                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0044   (0x0004)  
	float                                              Maximum;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0050   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0084   (0x0010)  
	float                                              DebugThickness;                                             // 0x0094   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0098   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromSRT
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Rotation;                                                   // 0x0014   (0x000C)  
	SDK_UNDEFINED(1,1351) /* EControlRigRotationOrder */ __um(RotationOrder);                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0024   (0x000C)  
	FTransform                                         Transform;                                                  // 0x0030   (0x0030)  
	FEulerTransform                                    EulerTransform;                                             // 0x0060   (0x0024)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformTransformVector
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Location;                                                   // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformRotateVector
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FVector                                            Direction;                                                  // 0x0040   (0x000C)  
	FVector                                            Result;                                                     // 0x004C   (0x000C)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformSelectBool
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         IfTrue;                                                     // 0x0010   (0x0030)  
	FTransform                                         IfFalse;                                                    // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformLerp
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	float                                              T;                                                          // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformUnaryOp
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FTransform                                         Result;                                                     // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformInverse
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeAbsolute
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Local;                                                      // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Global;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeRelative
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Global;                                                     // 0x0010   (0x0030)  
	FTransform                                         Parent;                                                     // 0x0040   (0x0030)  
	FTransform                                         Local;                                                      // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryOp
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0030)  
	FTransform                                         B;                                                          // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMul
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformToEulerTransform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	FEulerTransform                                    Result;                                                     // 0x0040   (0x0024)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{ 
	FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0030   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntersectPlane
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{ 
	FVector                                            Start;                                                      // 0x0008   (0x000C)  
	FVector                                            Direction;                                                  // 0x0014   (0x000C)  
	FVector                                            PlanePoint;                                                 // 0x0020   (0x000C)  
	FVector                                            PlaneNormal;                                                // 0x002C   (0x000C)  
	FVector                                            Result;                                                     // 0x0038   (0x000C)  
	float                                              Distance;                                                   // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampSpatially
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	SDK_UNDEFINED(1,1352) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0014   (0x0001)  
	SDK_UNDEFINED(1,1353) /* TEnumAsByte<EControlRigClampSpatialMode> */ __um(Type);                               // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0018   (0x0004)  
	float                                              Maximum;                                                    // 0x001C   (0x0004)  
	FTransform                                         Space;                                                      // 0x0020   (0x0030)  
	bool                                               bDrawDebug;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0054   (0x0010)  
	float                                              DebugThickness;                                             // 0x0064   (0x0004)  
	FVector                                            Result;                                                     // 0x0068   (0x000C)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0074   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0030)  
	float                                              T;                                                          // 0x0038   (0x0004)  
	FVector                                            Result;                                                     // 0x003C   (0x000C)  
	FVector                                            Tangent;                                                    // 0x0048   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorOrthogonal
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorParallel
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAngle
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirror
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampLength
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              MinimumLength;                                              // 0x0014   (0x0004)  
	float                                              MaximumLength;                                              // 0x0018   (0x0004)  
	FVector                                            Result;                                                     // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSetLength
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Length;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnaryOp
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Result;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnit
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDot
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCross
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDistance
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLength
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLengthSquared
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRad
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDeg
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSelectBool
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FVector                                            IfTrue;                                                     // 0x000C   (0x000C)  
	FVector                                            IfFalse;                                                    // 0x0018   (0x000C)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              Tolerance;                                                  // 0x0020   (0x0004)  
	bool                                               Result;                                                     // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Tolerance;                                                  // 0x0014   (0x0004)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNotEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRemap
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            SourceMinimum;                                              // 0x0014   (0x000C)  
	FVector                                            SourceMaximum;                                              // 0x0020   (0x000C)  
	FVector                                            TargetMinimum;                                              // 0x002C   (0x000C)  
	FVector                                            TargetMaximum;                                              // 0x0038   (0x000C)  
	bool                                               bClamp;                                                     // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x000C)  
	FVector                                            B;                                                          // 0x0014   (0x000C)  
	float                                              T;                                                          // 0x0020   (0x0004)  
	FVector                                            Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClamp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	FVector                                            Minimum;                                                    // 0x0014   (0x000C)  
	FVector                                            Maximum;                                                    // 0x0020   (0x000C)  
	FVector                                            Result;                                                     // 0x002C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSign
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRound
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCeil
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFloor
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAbs
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNegate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMax
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMin
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMod
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDiv
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorScale
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              Factor;                                                     // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMul
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSub
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAdd
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFromFloat
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FVector                                            Result;                                                     // 0x000C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_ModifyTransforms_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{ 
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	float                                              WeightMinimum;                                              // 0x007C   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0080   (0x0004)  
	SDK_UNDEFINED(1,1354) /* EControlRigModifyBoneMode */ __um(Mode);                                              // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_ModifyTransforms_PerItem
{ 
	FRigElementKey                                     item;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyTransforms_PerItem>          ItemToModify;                                               // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	float                                              WeightMinimum;                                              // 0x007C   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0080   (0x0004)  
	SDK_UNDEFINED(1,1355) /* EControlRigModifyBoneMode */ __um(Mode);                                              // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	FRigUnit_ModifyTransforms_WorkData                 WorkData;                                                   // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FRigUnit_MultiFABRIK_EndEffector
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRigUnit_MultiFABRIK_WorkData
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              RootBone;                                                   // 0x0068   (0x0008)  
	TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x0070   (0x0010)  
	float                                              Precision;                                                  // 0x0080   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x0090   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_NameBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_NameBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_Contains
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_Contains : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Search;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_StartsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Start;                                                      // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_EndsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_EndsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Ending;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NameReplace
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_NameReplace : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Old;                                                        // 0x0010   (0x0008)  
	FName                                              New;                                                        // 0x0018   (0x0008)  
	FName                                              Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NameTruncate
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	bool                                               FromEnd;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              Remainder;                                                  // 0x0018   (0x0008)  
	FName                                              Chopped;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NameConcat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_NameConcat : FRigUnit_NameBase
{ 
	FName                                              A;                                                          // 0x0008   (0x0008)  
	FName                                              B;                                                          // 0x0010   (0x0008)  
	FName                                              Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{ 
	FVector                                            position;                                                   // 0x0008   (0x000C)  
	FVector                                            Speed;                                                      // 0x0014   (0x000C)  
	FVector                                            Frequency;                                                  // 0x0020   (0x000C)  
	float                                              Minimum;                                                    // 0x002C   (0x0004)  
	float                                              Maximum;                                                    // 0x0030   (0x0004)  
	FVector                                            Result;                                                     // 0x0034   (0x000C)  
	FVector                                            Time;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseFloat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Speed;                                                      // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	float                                              Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0014)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x0160 (352 bytes) (0x000068 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x0068   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x0074   (0x0004)  
	FRigElementKeyCollection                           Parents;                                                    // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         InitialGlobalTransform;                                     // 0x0090   (0x0030)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x00D0   (0x0030)  
	bool                                               Switched;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x0104   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x0118   (0x0014)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0130   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_SimBaseMutable
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FRigUnit_PointSimulation_BoneTarget
{ 
	FName                                              Bone;                                                       // 0x0000   (0x0008)  
	int32_t                                            TranslationPoint;                                           // 0x0008   (0x0004)  
	int32_t                                            PrimaryAimPoint;                                            // 0x000C   (0x0004)  
	int32_t                                            SecondaryAimPoint;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_PointSimulation_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	float                                              CollisionScale;                                             // 0x0008   (0x0004)  
	bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FRigUnit_PointSimulation_WorkData
{ 
	FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)  
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0200 (512 bytes) (0x000068 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0068   (0x0010)  
	TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0078   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0088   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0098   (0x0010)  
	float                                              SimulatedStepsPerSecond;                                    // 0x00A8   (0x0004)  
	SDK_UNDEFINED(1,1356) /* ECRSimPointIntegrateType */ __um(IntegratorType);                                     // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              VerletBlend;                                                // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x00B8   (0x0010)  
	bool                                               bLimitLocalPosition;                                        // 0x00C8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00CA   (0x0002)  MISSED
	FVector                                            PrimaryAimAxis;                                             // 0x00CC   (0x000C)  
	FVector                                            SecondaryAimAxis;                                           // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
	FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x00F0   (0x0050)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0140   (0x0030)  
	FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x0170   (0x0088)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_PrepareForExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align 8 MaxSize: 0x0088
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{ 
	int32_t                                            NumberOfMeasurements;                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            Prefix;                                                     // 0x0070   (0x0010)  
	float                                              AccumulatedTime;                                            // 0x0080   (0x0004)  
	int32_t                                            MeasurementsLeft;                                           // 0x0084   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     OldParent;                                                  // 0x0018   (0x000C)  
	bool                                               bOldParentInitial;                                          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FRigElementKey                                     NewParent;                                                  // 0x0028   (0x000C)  
	bool                                               bNewParentInitial;                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0035   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0030)  
	FCachedRigElement                                  CachedChild;                                                // 0x0070   (0x0014)  
	FCachedRigElement                                  CachedOldParent;                                            // 0x0084   (0x0014)  
	FCachedRigElement                                  CachedNewParent;                                            // 0x0098   (0x0014)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_PropagateTransform : FRigUnitMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	bool                                               bRecomputeGlobal;                                           // 0x0074   (0x0001)  
	bool                                               bApplyToChildren;                                           // 0x0075   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0076   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0077   (0x0001)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0078   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FQuat                                              Argument;                                                   // 0x0020   (0x0010)  
	float                                              Angle;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x000C)  
	float                                              Angle;                                                      // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FVector                                            Axis;                                                       // 0x0020   (0x000C)  
	float                                              Angle;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0010)  
	FQuat                                              Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument0;                                                  // 0x0010   (0x0010)  
	FQuat                                              Argument1;                                                  // 0x0020   (0x0010)  
	FQuat                                              Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_RandomVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_RandomVector : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x000C)  
	FVector                                            LastResult;                                                 // 0x0024   (0x000C)  
	int32_t                                            LastSeed;                                                   // 0x0030   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_RandomFloat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              LastResult;                                                 // 0x001C   (0x0004)  
	int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_SendEvent : FRigUnitMutable
{ 
	SDK_UNDEFINED(1,1357) /* ERigEvent */              __um(Event);                                                // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	FRigElementKey                                     item;                                                       // 0x006C   (0x000C)  
	float                                              OffsetInSeconds;                                            // 0x0078   (0x0004)  
	bool                                               bEnable;                                                    // 0x007C   (0x0001)  
	bool                                               bOnlyDuringInteraction;                                     // 0x007D   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x007E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x01E8 (488 bytes) (0x000008 - 0x0001E8) align 8 MaxSize: 0x01E8
struct FRigUnit_SequenceExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0060)  
	FControlRigExecuteContext                          A;                                                          // 0x0068   (0x0060)  
	FControlRigExecuteContext                          B;                                                          // 0x00C8   (0x0060)  
	FControlRigExecuteContext                          C;                                                          // 0x0128   (0x0060)  
	FControlRigExecuteContext                          D;                                                          // 0x0188   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	SDK_UNDEFINED(1,1358) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x00D0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00D4   (0x0014)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FQuat                                              Rotation;                                                   // 0x0070   (0x0010)  
	SDK_UNDEFINED(1,1359) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x008C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	SDK_UNDEFINED(1,1360) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x00D4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00DC   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FVector                                            Translation;                                                // 0x0070   (0x000C)  
	SDK_UNDEFINED(1,1361) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0085   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0088   (0x0014)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0070   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0080   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x00C0 (192 bytes) (0x000068 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigUnit_SetControlOffset : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	FTransform                                         Offset;                                                     // 0x0070   (0x0030)  
	SDK_UNDEFINED(1,1362) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00A4   (0x0014)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	SDK_UNDEFINED(1,1363) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B4   (0x0014)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRigUnit_SetMultiControlRotator_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FRotator                                           Rotator;                                                    // 0x0008   (0x000C)  
	SDK_UNDEFINED(1,1364) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlRotator_Entry>      Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	FRotator                                           Rotator;                                                    // 0x0074   (0x000C)  
	SDK_UNDEFINED(1,1365) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0098 (152 bytes) (0x000068 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	FVector                                            Vector;                                                     // 0x0074   (0x000C)  
	SDK_UNDEFINED(1,1366) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0084   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigUnit_SetMultiControlVector2D_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlVector2D_Entry>     Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	FVector2D                                          Vector;                                                     // 0x0074   (0x0008)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x007C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_SetMultiControlInteger_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlInteger_Entry>      Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_SetControlInteger : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	int32_t                                            Weight;                                                     // 0x0070   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x0074   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0078   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_SetMultiControlFloat_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	float                                              FloatValue;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlFloat_Entry>        Entries;                                                    // 0x0068   (0x0010)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0090 (144 bytes) (0x000068 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	float                                              FloatValue;                                                 // 0x0074   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0078   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_SetMultiControlBool_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align 8 MaxSize: 0x0088
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlBool_Entry>         Entries;                                                    // 0x0068   (0x0010)  
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align 8 MaxSize: 0x0088
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0068   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0074   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            Pattern;                                                    // 0x0078   (0x0010)  
	bool                                               bVisible;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align 8 MaxSize: 0x0088
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0068   (0x0008)  
	float                                              Value;                                                      // 0x0070   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0074   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x00E0 (224 bytes) (0x000068 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	FName                                              Space;                                                      // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0078   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00B8   (0x0014)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00CC   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0068   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0074   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0081   (0x000F)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0090   (0x0030)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x00C8   (0x0014)  
	FCachedRigElement                                  CachedParent;                                               // 0x00DC   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{ 
	FName                                              SpaceName;                                                  // 0x0068   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0070   (0x0030)  
	FTransform                                         Result;                                                     // 0x00A0   (0x0030)  
	SDK_UNDEFINED(1,1367) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D1   (0x0003)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00D4   (0x0014)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
	FName                                              Space;                                                      // 0x0068   (0x0008)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	SDK_UNDEFINED(1,1368) /* EBoneGetterSetterMode */  __um(SpaceType);                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00B4   (0x0014)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigUnit_SetScale : FRigUnitMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	SDK_UNDEFINED(1,1369) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	FVector                                            Scale;                                                      // 0x0078   (0x000C)  
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x008C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigUnit_SetRotation : FRigUnitMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	SDK_UNDEFINED(1,1370) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0075   (0x000B)  MISSED
	FQuat                                              Rotation;                                                   // 0x0080   (0x0010)  
	float                                              Weight;                                                     // 0x0090   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0098   (0x0014)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigUnit_SetTranslation : FRigUnitMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	SDK_UNDEFINED(1,1371) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0075   (0x0003)  MISSED
	FVector                                            Translation;                                                // 0x0078   (0x000C)  
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x008C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_SetTransform : FRigUnitMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	SDK_UNDEFINED(1,1372) /* EBoneGetterSetterMode */  __um(Space);                                                // 0x0074   (0x0001)  
	bool                                               bInitial;                                                   // 0x0075   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0076   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0080   (0x0030)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0014)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_SlideChain_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      ItemSegments;                                               // 0x0008   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0018   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	float                                              SlideAmount;                                                // 0x0078   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0080   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	float                                              SlideAmount;                                                // 0x0078   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x007D   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0080   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_SpringIK_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FRigUnit_SpringIK_WorkData
{ 
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0000   (0x0010)  
	FCachedRigElement                                  CachedPoleVector;                                           // 0x0010   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	FCRSimPointContainer                               Simulation;                                                 // 0x0038   (0x0078)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x01D0 (464 bytes) (0x000068 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	float                                              HierarchyStrength;                                          // 0x0078   (0x0004)  
	float                                              EffectorStrength;                                           // 0x007C   (0x0004)  
	float                                              EffectorRatio;                                              // 0x0080   (0x0004)  
	float                                              RootStrength;                                               // 0x0084   (0x0004)  
	float                                              RootRatio;                                                  // 0x0088   (0x0004)  
	float                                              Damping;                                                    // 0x008C   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x0090   (0x000C)  
	bool                                               bFlipPolePlane;                                             // 0x009C   (0x0001)  
	SDK_UNDEFINED(1,1373) /* EControlRigVectorKind */  __um(PoleVectorKind);                                       // 0x009D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x009E   (0x0002)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x00A0   (0x0008)  
	FVector                                            PrimaryAxis;                                                // 0x00A8   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00B4   (0x000C)  
	bool                                               bLiveSimulation;                                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x00C4   (0x0004)  
	bool                                               bLimitLocalPosition;                                        // 0x00C8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x00D0   (0x0050)  
	FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x0120   (0x00B0)  
};

/// Struct /Script/ControlRig.RigUnit_SecondsToFrames
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase
{ 
	float                                              Seconds;                                                    // 0x0008   (0x0004)  
	float                                              Frames;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_FramesToSeconds
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase
{ 
	float                                              Frames;                                                     // 0x0008   (0x0004)  
	float                                              Seconds;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Timeline
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Timeline : FRigUnit_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetTransform
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	float                                              SecondsAgo;                                                 // 0x0040   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0044   (0x0004)  
	float                                              TimeRange;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0050   (0x0030)  
	TArray<FTransform>                                 Buffer;                                                     // 0x0080   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0090   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x00A0   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetVector
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	float                                              SecondsAgo;                                                 // 0x0014   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0018   (0x0004)  
	float                                              TimeRange;                                                  // 0x001C   (0x0004)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FVector>                                    Buffer;                                                     // 0x0030   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0040   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0054   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetFloat
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SecondsAgo;                                                 // 0x000C   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)  
	float                                              TimeRange;                                                  // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Argument0;                                                  // 0x0010   (0x0030)  
	FTransform                                         Argument1;                                                  // 0x0040   (0x0030)  
	FTransform                                         Result;                                                     // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FConstraintTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0030)  
	float                                              Weight;                                                     // 0x0030   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0034   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x0035   (0x0009)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRigUnit_TransformConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
	TMap<int32_t, int32_t>                             ConstraintDataToTargets;                                    // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x0140 (320 bytes) (0x000068 - 0x000140) align 16 MaxSize: 0x0140
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     item;                                                       // 0x0068   (0x000C)  
	SDK_UNDEFINED(1,1374) /* ETransformSpaceMode */    __um(BaseTransformSpace);                                   // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0075   (0x000B)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FRigElementKey                                     BaseItem;                                                   // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00C0   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D8   (0x0060)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x0130 (304 bytes) (0x000068 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              Bone;                                                       // 0x0068   (0x0008)  
	SDK_UNDEFINED(1,1375) /* ETransformSpaceMode */    __um(BaseTransformSpace);                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0071   (0x000F)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0080   (0x0030)  
	FName                                              BaseBone;                                                   // 0x00B0   (0x0008)  
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00B8   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_TwistBones_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<float>                                      ItemRatios;                                                 // 0x0010   (0x0010)  
	TArray<FTransform>                                 ItemTransforms;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0068   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0078   (0x000C)  
	FVector                                            PoleAxis;                                                   // 0x0084   (0x000C)  
	SDK_UNDEFINED(1,1376) /* EControlRigAnimEasingType */ __um(TwistEaseType);                                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0094   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x00D0 (208 bytes) (0x000068 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0068   (0x0008)  
	FName                                              EndBone;                                                    // 0x0070   (0x0008)  
	FVector                                            TwistAxis;                                                  // 0x0078   (0x000C)  
	FVector                                            PoleAxis;                                                   // 0x0084   (0x000C)  
	SDK_UNDEFINED(1,1377) /* EControlRigAnimEasingType */ __um(TwistEaseType);                                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0094   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x00A0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x0220 (544 bytes) (0x000068 - 0x000220) align 16 MaxSize: 0x0220
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
	FName                                              StartJoint;                                                 // 0x0068   (0x0008)  
	FName                                              EndJoint;                                                   // 0x0070   (0x0008)  
	FVector                                            PoleTarget;                                                 // 0x0078   (0x000C)  
	float                                              Spin;                                                       // 0x0084   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         EndEffector;                                                // 0x0090   (0x0030)  
	float                                              IKBlend;                                                    // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         StartJointFKTransform;                                      // 0x00D0   (0x0030)  
	FTransform                                         MidJointFKTransform;                                        // 0x0100   (0x0030)  
	FTransform                                         EndJointFKTransform;                                        // 0x0130   (0x0030)  
	float                                              PreviousFKIKBlend;                                          // 0x0160   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0164   (0x000C)  MISSED
	FTransform                                         StartJointIKTransform;                                      // 0x0170   (0x0030)  
	FTransform                                         MidJointIKTransform;                                        // 0x01A0   (0x0030)  
	FTransform                                         EndJointIKTransform;                                        // 0x01D0   (0x0030)  
	int32_t                                            StartJointIndex;                                            // 0x0200   (0x0004)  
	int32_t                                            MidJointIndex;                                              // 0x0204   (0x0004)  
	int32_t                                            EndJointIndex;                                              // 0x0208   (0x0004)  
	float                                              UpperLimbLength;                                            // 0x020C   (0x0004)  
	float                                              LowerLimbLength;                                            // 0x0210   (0x0004)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x0214   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Root;                                                       // 0x0010   (0x0030)  
	FVector                                            PoleVector;                                                 // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Effector;                                                   // 0x0050   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x0080   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x008C   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x0098   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x009C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x009D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00A0   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x00A4   (0x0004)  
	float                                              BoneALength;                                                // 0x00A8   (0x0004)  
	float                                              BoneBLength;                                                // 0x00AC   (0x0004)  
	FTransform                                         Elbow;                                                      // 0x00B0   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
	FVector                                            Root;                                                       // 0x0008   (0x000C)  
	FVector                                            PoleVector;                                                 // 0x0014   (0x000C)  
	FVector                                            Effector;                                                   // 0x0020   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0030   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0034   (0x0004)  
	float                                              BoneALength;                                                // 0x0038   (0x0004)  
	float                                              BoneBLength;                                                // 0x003C   (0x0004)  
	FVector                                            Elbow;                                                      // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x01B0 (432 bytes) (0x000068 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ItemA;                                                      // 0x0068   (0x000C)  
	FRigElementKey                                     ItemB;                                                      // 0x0074   (0x000C)  
	FRigElementKey                                     EffectorItem;                                               // 0x0080   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FTransform                                         Effector;                                                   // 0x0090   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x00C0   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00CC   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x00D8   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x00DC   (0x000C)  
	SDK_UNDEFINED(1,1378) /* EControlRigVectorKind */  __um(PoleVectorKind);                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	FRigElementKey                                     PoleVectorSpace;                                            // 0x00EC   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00FC   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0100   (0x0004)  
	float                                              Weight;                                                     // 0x0104   (0x0004)  
	float                                              ItemALength;                                                // 0x0108   (0x0004)  
	float                                              ItemBLength;                                                // 0x010C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0110   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0111   (0x000F)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0120   (0x0040)  
	FCachedRigElement                                  CachedItemAIndex;                                           // 0x0160   (0x0014)  
	FCachedRigElement                                  CachedItemBIndex;                                           // 0x0174   (0x0014)  
	FCachedRigElement                                  CachedEffectorItemIndex;                                    // 0x0188   (0x0014)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x019C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x0190 (400 bytes) (0x000068 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              BoneA;                                                      // 0x0068   (0x0008)  
	FName                                              BoneB;                                                      // 0x0070   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0078   (0x0008)  
	FTransform                                         Effector;                                                   // 0x0080   (0x0030)  
	FVector                                            PrimaryAxis;                                                // 0x00B0   (0x000C)  
	FVector                                            SecondaryAxis;                                              // 0x00BC   (0x000C)  
	float                                              SecondaryAxisWeight;                                        // 0x00C8   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x00CC   (0x000C)  
	SDK_UNDEFINED(1,1379) /* EControlRigVectorKind */  __um(PoleVectorKind);                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x00DC   (0x0008)  
	bool                                               bEnableStretch;                                             // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x00E8   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x00EC   (0x0004)  
	float                                              Weight;                                                     // 0x00F0   (0x0004)  
	float                                              BoneALength;                                                // 0x00F4   (0x0004)  
	float                                              BoneBLength;                                                // 0x00F8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0100   (0x0040)  
	FCachedRigElement                                  CachedBoneAIndex;                                           // 0x0140   (0x0014)  
	FCachedRigElement                                  CachedBoneBIndex;                                           // 0x0154   (0x0014)  
	FCachedRigElement                                  CachedEffectorBoneIndex;                                    // 0x0168   (0x0014)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x017C   (0x0014)  
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x000C)  
	FVector                                            Argument1;                                                  // 0x0014   (0x000C)  
	FVector                                            Result;                                                     // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_VerletIntegrateVector
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x000C)  
	float                                              Strength;                                                   // 0x0014   (0x0004)  
	float                                              Damp;                                                       // 0x0018   (0x0004)  
	float                                              Blend;                                                      // 0x001C   (0x0004)  
	FVector                                            position;                                                   // 0x0020   (0x000C)  
	FVector                                            Velocity;                                                   // 0x002C   (0x000C)  
	FVector                                            Acceleration;                                               // 0x0038   (0x000C)  
	FCRSimPoint                                        Point;                                                      // 0x0044   (0x0028)  
	bool                                               bInitialized;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x004C   (0x000C)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0044   (0x0004)  
	float                                              Scale;                                                      // 0x0048   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x004C   (0x0008)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0024   (0x0004)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x002C   (0x000C)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0024   (0x0004)  
	float                                              Scale;                                                      // 0x0028   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x002C   (0x0008)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0014   (0x0001)  
	SDK_UNDEFINED(1,1380) /* ERigUnitVisualDebugPointMode */ __um(Mode);                                           // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x000C)  
	bool                                               bEnabled;                                                   // 0x0014   (0x0001)  
	SDK_UNDEFINED(1,1381) /* ERigUnitVisualDebugPointMode */ __um(Mode);                                           // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0018   (0x0010)  
	float                                              Thickness;                                                  // 0x0028   (0x0004)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x0030   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_SphereTraceWorld : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x000C)  
	FVector                                            End;                                                        // 0x0014   (0x000C)  
	SDK_UNDEFINED(1,1382) /* TEnumAsByte<ECollisionChannel> */ __um(Channel);                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0024   (0x0004)  
	bool                                               bHit;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FVector                                            HitLocation;                                                // 0x002C   (0x000C)  
	FVector                                            HitNormal;                                                  // 0x0038   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0010   (0x0010)  
	FQuat                                              Global;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0010   (0x0010)  
	FQuat                                              World;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_ToRigSpace_Location : FRigUnit
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Global;                                                     // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{ 
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            World;                                                      // 0x0014   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FTransform                                         Global;                                                     // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0030)  
	FTransform                                         World;                                                      // 0x0040   (0x0030)  
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FStructReference
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FRigElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigBone) == 0x00E0); // 224 bytes (0x000018 - 0x0000E0)
static_assert(sizeof(FRigBoneHierarchy) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigSpace) == 0x0090); // 144 bytes (0x000018 - 0x000090)
static_assert(sizeof(FRigSpaceHierarchy) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigControlValueStorage) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FRigControlValue) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigControl) == 0x02F0); // 752 bytes (0x000018 - 0x0002F0)
static_assert(sizeof(FRigControlHierarchy) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FRigCurve) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FRigCurveContainer) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigHierarchyContainer) == 0x0368); // 872 bytes (0x000000 - 0x000368)
static_assert(sizeof(FControlRigDrawInstruction) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FControlRigDrawContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigElementKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigInfluenceEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigInfluenceMap) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRigInfluenceMapPerEvent) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRig) == 0x0650); // 1616 bytes (0x000028 - 0x000650)
static_assert(sizeof(UAdditiveControlRig) == 0x0660); // 1632 bytes (0x000650 - 0x000660)
static_assert(sizeof(UControlRigAnimInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UControlRigBlueprintGeneratedClass) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(FControlRigComponentMappedElement) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UControlRigComponent) == 0x05F0); // 1520 bytes (0x0004F0 - 0x0005F0)
static_assert(sizeof(AControlRigControlActor) == 0x03A8); // 936 bytes (0x000318 - 0x0003A8)
static_assert(sizeof(AControlRigGizmoActor) == 0x0340); // 832 bytes (0x000318 - 0x000340)
static_assert(sizeof(FControlRigGizmoDefinition) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRigGizmoLibrary) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UControlRigLayerInstance) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(UControlRigValidationPass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCachedRigElement) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigPoseElement) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigPose) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UControlRigNumericalValidationPass) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UControlRigObjectHolder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UControlRigSequence) == 0x0220); // 544 bytes (0x0001C8 - 0x000220)
static_assert(sizeof(UControlRigSequencerAnimInstance) == 0x02D0); // 720 bytes (0x0002C0 - 0x0002D0)
static_assert(sizeof(UControlRigSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UControlRigValidator) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UFKControlRig) == 0x0668); // 1640 bytes (0x000650 - 0x000668)
static_assert(sizeof(FChannelMapInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEnumParameterNameAndCurve) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FIntegerParameterNameAndCurve) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(UMovieSceneControlRigParameterSection) == 0x02F0); // 752 bytes (0x000148 - 0x0002F0)
static_assert(sizeof(UMovieSceneControlRigParameterTrack) == 0x00B0); // 176 bytes (0x000078 - 0x0000B0)
static_assert(sizeof(FConstraintNodeData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAnimationHierarchy) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FControlRigIOSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FAnimNode_ControlRigBase) == 0x0170); // 368 bytes (0x000058 - 0x000170)
static_assert(sizeof(FAnimNode_ControlRig) == 0x0368); // 872 bytes (0x000170 - 0x000368)
static_assert(sizeof(FAnimNode_ControlRig_ExternalSource) == 0x0178); // 376 bytes (0x000170 - 0x000178)
static_assert(sizeof(FControlRigAnimInstanceProxy) == 0x0920); // 2336 bytes (0x000880 - 0x000920)
static_assert(sizeof(FControlRigComponentMappedCurve) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigComponentMappedBone) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigComponentMappedComponent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FControlRigExecuteContext) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FControlRigDrawInterface) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FGizmoActorCreationParam) == 0x0120); // 288 bytes (0x000000 - 0x000120)
static_assert(sizeof(FControlRigLayerInstanceProxy) == 0x0920); // 2336 bytes (0x000880 - 0x000920)
static_assert(sizeof(FAnimNode_ControlRigInputPose) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FCRFourPointBezier) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FControlRigSequenceObjectReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FControlRigSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FControlRigSequencerAnimInstanceProxy) == 0x0EC0); // 3776 bytes (0x000B20 - 0x000EC0)
static_assert(sizeof(FControlRigSettingsPerPinBool) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FControlRigValidationContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCRSimLinearSpring) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCRSimPoint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimPointConstraint) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FCRSimPointForce) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCRSimSoftCollision) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FCRSimPointContainer) == 0x0078); // 120 bytes (0x000018 - 0x000078)
static_assert(sizeof(FMovieSceneControlRigInstanceData) == 0x00D8); // 216 bytes (0x000008 - 0x0000D8)
static_assert(sizeof(FMovieSceneControlRigParameterTemplate) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(FRigHierarchyRef) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigMirrorSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigHierarchyCopyPasteContent) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigEventContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigElementKeyCollection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigControlModifiedContext) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigInfluenceEntryModifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnitMutable) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_SimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AccumulateVectorRange) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_AccumulateFloatRange) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateTransformLerp) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_AccumulateQuatLerp) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_AccumulateVectorLerp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatLerp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateTransformMul) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_AccumulateQuatMul) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_AccumulateVectorMul) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatMul) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AccumulateVectorAdd) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_AccumulateFloatAdd) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_AddBoneTransform) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_HighlevelBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_AimItem_Target) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FRigUnit_AimBone_DebugSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_AimItem) == 0x0150); // 336 bytes (0x000068 - 0x000150)
static_assert(sizeof(FRigUnit_AimBone_Target) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_AimBone) == 0x0150); // 336 bytes (0x000068 - 0x000150)
static_assert(sizeof(FRigUnit_HighlevelBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AimBoneMath) == 0x0140); // 320 bytes (0x000008 - 0x000140)
static_assert(sizeof(FAimTarget) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_AimConstraint_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_AimConstraint) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_AlphaInterpVector) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FRigUnit_AlphaInterp) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigUnit_AnimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_AnimEasing) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_AnimEasingType) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_AnimEvalRichCurve) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_AnimRichCurve) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_ApplyFK) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_BeginExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FBlendTarget) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_BlendTransform) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_Harmonics_TargetItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_BoneHarmonics_WorkData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_ItemHarmonics) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_BoneHarmonics_BoneTarget) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_BoneHarmonics) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_ControlName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_SpaceName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_BoneName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_Item) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimitPerItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_CCDIK_WorkData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigUnit_CCDIKPerItem) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimit) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_CCDIK) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_ChainHarmonics_Reach) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_ChainHarmonics_Wave) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ChainHarmonics_Pendulum) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FRigUnit_ChainHarmonics_WorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_ChainHarmonicsPerItem) == 0x0270); // 624 bytes (0x000068 - 0x000270)
static_assert(sizeof(FRigUnit_ChainHarmonics) == 0x0270); // 624 bytes (0x000068 - 0x000270)
static_assert(sizeof(FRigUnit_CollectionBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_CollectionLoop) == 0x00F8); // 248 bytes (0x000068 - 0x0000F8)
static_assert(sizeof(FRigUnit_CollectionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_CollectionItemAtIndex) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionCount) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_CollectionReverse) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionDifference) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionIntersection) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionUnion) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionItems) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionReplaceItems) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_CollectionChildren) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionNameSearch) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionChain) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_Control) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_Control_StaticMesh) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(FRigUnit_ToSwingAndTwist) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_ConvertQuaternionToVector) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertRotationToVector) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ConvertVectorToQuaternion) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertVectorToRotation) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ConvertQuaternion) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertRotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertVectorRotation) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_ConvertEulerTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_ConvertTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_DebugBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_DebugBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_DebugBezierItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugBezier) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_DebugHierarchy) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_DebugLineItemSpace) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLine) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLineStripItemSpace) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugLineStrip) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugPointMutable) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DebugPoint) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_DebugArcItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugArc) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugRectangleItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugRectangle) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_DebugTransformArrayMutable_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_DebugTransformArrayMutable) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_DebugTransformMutableItemSpace) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugTransformMutable) == 0x0110); // 272 bytes (0x000068 - 0x000110)
static_assert(sizeof(FRigUnit_DebugTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_DeltaFromPreviousTransform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_DeltaFromPreviousQuat) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_DeltaFromPreviousVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_DeltaFromPreviousFloat) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_DistributeRotation_Rotation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_DistributeRotation_WorkData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_DistributeRotationForCollection) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_DistributeRotation) == 0x00E8); // 232 bytes (0x000068 - 0x0000E8)
static_assert(sizeof(FRigUnit_DrawContainerSetTransform) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_DrawContainerSetThickness) == 0x0078); // 120 bytes (0x000068 - 0x000078)
static_assert(sizeof(FRigUnit_DrawContainerSetColor) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FRigUnit_DrawContainerGetInstruction) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_FABRIK_WorkData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRigUnit_FABRIKPerItem) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_FABRIK) == 0x0100); // 256 bytes (0x000068 - 0x000100)
static_assert(sizeof(FRigUnit_FitChainToCurve_Rotation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_FitChainToCurve_DebugSettings) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_FitChainToCurve_WorkData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigUnit_FitChainToCurvePerItem) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_FitChainToCurve) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_MapRange_Float) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_Clamp_Float) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_BinaryFloatOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_Divide_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Subtract_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Add_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Multiply_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_ForLoopCount) == 0x00D8); // 216 bytes (0x000068 - 0x0000D8)
static_assert(sizeof(FRigUnit_GetBoneTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetControlInitialTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetControlTransform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_GetControlRotator) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_GetControlVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_GetControlVector2D) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_GetControlInteger) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_GetControlFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_GetControlBool) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_GetCurveValue) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_GetDeltaTime) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_GetInitialBoneTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetJointTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_GetRelativeBoneTransform) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_GetRelativeTransformForItem) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_GetSpaceTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_GetWorldTime) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_HierarchyBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_HierarchyGetSiblings) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetChildren) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetParents) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_HierarchyGetParent) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_InverseExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_IsInteracting) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_ItemBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_ItemReplace) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ItemExists) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ItemBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_KalmanTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_KalmanVector) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_KalmanFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathBoolBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathBoolNotEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolBinaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolOr) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolNand) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolAnd) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolNot) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstFalse) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathBoolConstTrue) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathColorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathColorLerp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathColorBinaryOp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorMul) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorSub) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorAdd) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigUnit_MathColorFromFloat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathFloatBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathFloatLawOfCosine) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathFloatUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAtan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAcos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatAsin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatTan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatCos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatRad) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatDeg) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSelectBool) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatIsNearlyEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatIsNearlyZero) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatRemap) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathFloatLerp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatToInt) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatRound) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatCeil) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatFloor) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatSqrt) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathFloatConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstTwoPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstHalfPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathFloatConstPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathIntLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntToFloat) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_MathIntBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathIntAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_MathQuaternionRotationOrder) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_MathQuaternionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathQuaternionSwingTwist) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathQuaternionGetAxis) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionRotateVector) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionUnaryOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionUnit) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionDot) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionSelectBool) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionNotEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionSlerp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_MathQuaternionInverse) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionBinaryOp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionMul) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FRigUnit_MathQuaternionToRotator) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionToEuler) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionScale) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionToAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromTwoVectors) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromRotator) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromEuler) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathQuaternionFromAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathRBFInterpolateBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorBase) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FMathRBFInterpolateVectorXform_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorXform) == 0x00F0); // 240 bytes (0x0000B0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateVectorQuat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorQuat) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorColor_Target) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorColor) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorVector_Target) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorVector) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateVectorFloat_Target) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_MathRBFInterpolateVectorFloat) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatBase) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FMathRBFInterpolateQuatXform_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatXform) == 0x0110); // 272 bytes (0x0000D0 - 0x000110)
static_assert(sizeof(FMathRBFInterpolateQuatQuat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatQuat) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatColor_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatColor) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatVector_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatVector) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateQuatFloat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MathRBFInterpolateQuatFloat) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FRigUnit_MathTransformBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathTransformClampSpatially) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_MathTransformFromSRT) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_MathTransformTransformVector) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathTransformRotateVector) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathTransformSelectBool) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformLerp) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_MathTransformUnaryOp) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformInverse) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformMakeAbsolute) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformMakeRelative) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformBinaryOp) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformMul) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathTransformToEulerTransform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_MathTransformFromEulerTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_MathVectorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_MathIntersectPlane) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_MathVectorClampSpatially) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_MathVectorMakeBezierFourPoint) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathVectorBezierFourPoint) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_MathVectorOrthogonal) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorParallel) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorAngle) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorMirror) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorClampLength) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorSetLength) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorUnaryOp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorUnit) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorDot) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorBinaryOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorCross) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorDistance) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorLength) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathVectorLengthSquared) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MathVectorRad) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorDeg) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorSelectBool) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorIsNearlyEqual) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorIsNearlyZero) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorNotEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorRemap) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_MathVectorLerp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorClamp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_MathVectorSign) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorRound) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorCeil) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorFloor) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorAbs) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorNegate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigUnit_MathVectorMax) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorMin) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorMod) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorDiv) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorScale) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_MathVectorMul) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorSub) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorAdd) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_MathVectorFromFloat) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_PerBone) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ModifyTransforms_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_WorkData) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_ModifyTransforms_PerItem) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_ModifyTransforms) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_MultiFABRIK_EndEffector) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigUnit_MultiFABRIK_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_MultiFABRIK) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_NameBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_Contains) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_StartsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_EndsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_NameReplace) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_NameTruncate) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_NameConcat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_NoiseVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_NoiseFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_OffsetTransformForItem) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_ParentSwitchConstraint) == 0x0160); // 352 bytes (0x000068 - 0x000160)
static_assert(sizeof(FRigUnit_SimBaseMutable) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_PointSimulation_BoneTarget) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigUnit_PointSimulation_DebugSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_PointSimulation_WorkData) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FRigUnit_PointSimulation) == 0x0200); // 512 bytes (0x000068 - 0x000200)
static_assert(sizeof(FRigUnit_PrepareForExecution) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigUnit_EndProfilingTimer) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_StartProfilingTimer) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(FRigUnit_ProjectTransformToNewParent) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_PropagateTransform) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_QuaternionToAngle) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_QuaternionFromAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_QuaternionToAxisAndAngle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_UnaryQuaternionOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_InverseQuaterion) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_BinaryQuaternionOp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MultiplyQuaternion) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FRigUnit_RandomVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_RandomFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_SendEvent) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(FRigUnit_SequenceExecution) == 0x01E8); // 488 bytes (0x000008 - 0x0001E8)
static_assert(sizeof(FRigUnit_SetBoneInitialTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetBoneRotation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetBoneTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetBoneTranslation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetControlColor) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetControlOffset) == 0x00C0); // 192 bytes (0x000068 - 0x0000C0)
static_assert(sizeof(FRigUnit_SetControlTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SetMultiControlRotator_Entry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_SetMultiControlRotator) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlRotator) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetControlVector) == 0x0098); // 152 bytes (0x000068 - 0x000098)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D_Entry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlVector2D) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlInteger_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlInteger) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlInteger) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlFloat_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlFloat) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetControlFloat) == 0x0090); // 144 bytes (0x000068 - 0x000090)
static_assert(sizeof(FRigUnit_SetMultiControlBool_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlBool) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetControlBool) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetControlVisibility) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetCurveValue) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FRigUnit_SetRelativeBoneTransform) == 0x00E0); // 224 bytes (0x000068 - 0x0000E0)
static_assert(sizeof(FRigUnit_SetRelativeTransformForItem) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetSpaceInitialTransform) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(FRigUnit_SetSpaceTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SetScale) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetRotation) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(FRigUnit_SetTranslation) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(FRigUnit_SetTransform) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_SlideChain_WorkData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigUnit_SlideChainPerItem) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(FRigUnit_SlideChain) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(FRigUnit_SpringIK_DebugSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_SpringIK_WorkData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FRigUnit_SpringIK) == 0x01D0); // 464 bytes (0x000068 - 0x0001D0)
static_assert(sizeof(FRigUnit_SecondsToFrames) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_FramesToSeconds) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_Timeline) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_TimeOffsetTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_TimeOffsetVector) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_TimeOffsetFloat) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_BinaryTransformOp) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetRelativeTransform) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FRigUnit_MultiplyTransform) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FConstraintTarget) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_TransformConstraint_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_TransformConstraintPerItem) == 0x0140); // 320 bytes (0x000068 - 0x000140)
static_assert(sizeof(FRigUnit_TransformConstraint) == 0x0130); // 304 bytes (0x000068 - 0x000130)
static_assert(sizeof(FRigUnit_TwistBones_WorkData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_TwistBonesPerItem) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_TwistBones) == 0x00D0); // 208 bytes (0x000068 - 0x0000D0)
static_assert(sizeof(FRigUnit_TwoBoneIKFK) == 0x0220); // 544 bytes (0x000068 - 0x000220)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleTransforms) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleVectors) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple_DebugSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_TwoBoneIKSimplePerItem) == 0x01B0); // 432 bytes (0x000068 - 0x0001B0)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple) == 0x0190); // 400 bytes (0x000068 - 0x000190)
static_assert(sizeof(FRigUnit_Distance_VectorVector) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_BinaryVectorOp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_Divide_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Subtract_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Add_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_Multiply_VectorVector) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FRigUnit_VerletIntegrateVector) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_VisualDebugTransformItemSpace) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_VisualDebugTransform) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_VisualDebugQuatItemSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugQuat) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugVectorItemSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_VisualDebugVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_SphereTraceWorld) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_ToRigSpace_Rotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ToWorldSpace_Rotation) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ToRigSpace_Location) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ToWorldSpace_Location) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ToRigSpace_Transform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_ToWorldSpace_Transform) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FStructReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(FRigElement, Name) == 0x0008);
static_assert(offsetof(FRigBone, ParentName) == 0x0018);
static_assert(offsetof(FRigBone, InitialTransform) == 0x0030);
static_assert(offsetof(FRigBone, GlobalTransform) == 0x0060);
static_assert(offsetof(FRigBone, LocalTransform) == 0x0090);
static_assert(offsetof(FRigBone, Dependents) == 0x00C0);
static_assert(offsetof(FRigBoneHierarchy, Bones) == 0x0020);
static_assert(offsetof(FRigBoneHierarchy, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigBoneHierarchy, Selection) == 0x0080);
static_assert(offsetof(FRigSpace, ParentName) == 0x001C);
static_assert(offsetof(FRigSpace, InitialTransform) == 0x0030);
static_assert(offsetof(FRigSpace, LocalTransform) == 0x0060);
static_assert(offsetof(FRigSpaceHierarchy, Spaces) == 0x0020);
static_assert(offsetof(FRigSpaceHierarchy, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigSpaceHierarchy, Selection) == 0x0080);
static_assert(offsetof(FRigControlValue, FloatStorage) == 0x0000);
static_assert(offsetof(FRigControlValue, Storage) == 0x0050);
static_assert(offsetof(FRigControl, DisplayName) == 0x001C);
static_assert(offsetof(FRigControl, ParentName) == 0x0024);
static_assert(offsetof(FRigControl, SpaceName) == 0x0030);
static_assert(offsetof(FRigControl, OffsetTransform) == 0x0040);
static_assert(offsetof(FRigControl, InitialValue) == 0x0070);
static_assert(offsetof(FRigControl, Value) == 0x00F0);
static_assert(offsetof(FRigControl, MinimumValue) == 0x0180);
static_assert(offsetof(FRigControl, MaximumValue) == 0x0200);
static_assert(offsetof(FRigControl, GizmoName) == 0x0284);
static_assert(offsetof(FRigControl, GizmoTransform) == 0x0290);
static_assert(offsetof(FRigControl, GizmoColor) == 0x02C0);
static_assert(offsetof(FRigControl, Dependents) == 0x02D0);
static_assert(offsetof(FRigControl, ControlEnum) == 0x02E8);
static_assert(offsetof(FRigControlHierarchy, Controls) == 0x0098);
static_assert(offsetof(FRigControlHierarchy, NameToIndexMapping) == 0x00A8);
static_assert(offsetof(FRigControlHierarchy, Selection) == 0x00F8);
static_assert(offsetof(FRigCurveContainer, Curves) == 0x0020);
static_assert(offsetof(FRigCurveContainer, NameToIndexMapping) == 0x0030);
static_assert(offsetof(FRigCurveContainer, Selection) == 0x0080);
static_assert(offsetof(FRigHierarchyContainer, BoneHierarchy) == 0x0000);
static_assert(offsetof(FRigHierarchyContainer, SpaceHierarchy) == 0x0098);
static_assert(offsetof(FRigHierarchyContainer, ControlHierarchy) == 0x0128);
static_assert(offsetof(FRigHierarchyContainer, CurveContainer) == 0x0230);
static_assert(offsetof(FControlRigDrawInstruction, Name) == 0x0000);
static_assert(offsetof(FControlRigDrawInstruction, Positions) == 0x0010);
static_assert(offsetof(FControlRigDrawInstruction, Color) == 0x0020);
static_assert(offsetof(FControlRigDrawInstruction, Transform) == 0x0040);
static_assert(offsetof(FControlRigDrawContainer, Instructions) == 0x0008);
static_assert(offsetof(FRigElementKey, Name) == 0x0004);
static_assert(offsetof(FRigInfluenceEntry, Source) == 0x0000);
static_assert(offsetof(FRigInfluenceEntry, AffectedList) == 0x0010);
static_assert(offsetof(FRigInfluenceMap, EventName) == 0x0000);
static_assert(offsetof(FRigInfluenceMap, Entries) == 0x0008);
static_assert(offsetof(FRigInfluenceMap, KeyToIndex) == 0x0018);
static_assert(offsetof(FRigInfluenceMapPerEvent, Maps) == 0x0000);
static_assert(offsetof(FRigInfluenceMapPerEvent, EventToIndex) == 0x0010);
static_assert(offsetof(UControlRig, VM) == 0x0048);
static_assert(offsetof(UControlRig, Hierarchy) == 0x0050);
static_assert(offsetof(UControlRig, GizmoLibrary) == 0x03B8);
static_assert(offsetof(UControlRig, InputProperties) == 0x03F0);
static_assert(offsetof(UControlRig, OutputProperties) == 0x0440);
static_assert(offsetof(UControlRig, DrawContainer) == 0x0490);
static_assert(offsetof(UControlRig, DataSourceRegistry) == 0x04C0);
static_assert(offsetof(UControlRig, EventQueue) == 0x04C8);
static_assert(offsetof(UControlRig, Influences) == 0x0550);
static_assert(offsetof(UControlRig, InteractionRig) == 0x05B0);
static_assert(offsetof(UControlRig, InteractionRigClass) == 0x05B8);
static_assert(offsetof(UControlRig, AssetUserData) == 0x05C0);
static_assert(offsetof(FControlRigComponentMappedElement, ComponentReference) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedElement, TransformName) == 0x002C);
static_assert(offsetof(FControlRigComponentMappedElement, ElementName) == 0x0038);
static_assert(offsetof(FControlRigComponentMappedElement, Offset) == 0x0050);
static_assert(offsetof(FControlRigComponentMappedElement, SceneComponent) == 0x0088);
static_assert(offsetof(UControlRigComponent, ControlRigClass) == 0x04F0);
static_assert(offsetof(UControlRigComponent, MappedElements) == 0x0548);
static_assert(offsetof(UControlRigComponent, ControlRig) == 0x0560);
static_assert(offsetof(AControlRigControlActor, ActorToTrack) == 0x0318);
static_assert(offsetof(AControlRigControlActor, ControlRigClass) == 0x0320);
static_assert(offsetof(AControlRigControlActor, MaterialOverride) == 0x0330);
static_assert(offsetof(AControlRigControlActor, ColorParameter) == 0x0338);
static_assert(offsetof(AControlRigControlActor, ActorRootComponent) == 0x0350);
static_assert(offsetof(AControlRigControlActor, ControlRig) == 0x0358);
static_assert(offsetof(AControlRigControlActor, ControlNames) == 0x0360);
static_assert(offsetof(AControlRigControlActor, GizmoTransforms) == 0x0370);
static_assert(offsetof(AControlRigControlActor, Components) == 0x0380);
static_assert(offsetof(AControlRigControlActor, Materials) == 0x0390);
static_assert(offsetof(AControlRigControlActor, ColorParameterName) == 0x03A0);
static_assert(offsetof(AControlRigGizmoActor, ActorRootComponent) == 0x0318);
static_assert(offsetof(AControlRigGizmoActor, StaticMeshComponent) == 0x0320);
static_assert(offsetof(AControlRigGizmoActor, ControlName) == 0x032C);
static_assert(offsetof(AControlRigGizmoActor, ColorParameterName) == 0x0334);
static_assert(offsetof(FControlRigGizmoDefinition, GizmoName) == 0x0000);
static_assert(offsetof(FControlRigGizmoDefinition, StaticMesh) == 0x0008);
static_assert(offsetof(FControlRigGizmoDefinition, Transform) == 0x0030);
static_assert(offsetof(UControlRigGizmoLibrary, DefaultGizmo) == 0x0030);
static_assert(offsetof(UControlRigGizmoLibrary, DefaultMaterial) == 0x0090);
static_assert(offsetof(UControlRigGizmoLibrary, MaterialColorParameter) == 0x00B8);
static_assert(offsetof(UControlRigGizmoLibrary, Gizmos) == 0x00C0);
static_assert(offsetof(FCachedRigElement, Key) == 0x0000);
static_assert(offsetof(FRigPoseElement, Index) == 0x0000);
static_assert(offsetof(FRigPoseElement, GlobalTransform) == 0x0020);
static_assert(offsetof(FRigPoseElement, LocalTransform) == 0x0050);
static_assert(offsetof(FRigPose, Elements) == 0x0000);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameA) == 0x003C);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameB) == 0x0044);
static_assert(offsetof(UControlRigNumericalValidationPass, pose) == 0x0050);
static_assert(offsetof(UControlRigObjectHolder, Objects) == 0x0028);
static_assert(offsetof(UControlRigSequence, LastExportedToAnimationSequence) == 0x01C8);
static_assert(offsetof(UControlRigSequence, LastExportedUsingSkeletalMesh) == 0x01F0);
static_assert(offsetof(UControlRigValidator, Passes) == 0x0028);
static_assert(offsetof(UFKControlRig, IsControlActive) == 0x0650);
static_assert(offsetof(FChannelMapInfo, ChannelTypeName) == 0x0010);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRig) == 0x0148);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlsMask) == 0x0150);
static_assert(offsetof(UMovieSceneControlRigParameterSection, TransformMask) == 0x0160);
static_assert(offsetof(UMovieSceneControlRigParameterSection, BoneFilter) == 0x0168);
static_assert(offsetof(UMovieSceneControlRigParameterSection, Weight) == 0x0178);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlChannelMap) == 0x0218);
static_assert(offsetof(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves) == 0x0268);
static_assert(offsetof(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves) == 0x0278);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlRig) == 0x0088);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, SectionToKey) == 0x0090);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, Sections) == 0x0098);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, TrackName) == 0x00A8);
static_assert(offsetof(FConstraintNodeData, RelativeParent) == 0x0000);
static_assert(offsetof(FConstraintNodeData, ConstraintOffset) == 0x0030);
static_assert(offsetof(FConstraintNodeData, LinkedNode) == 0x0090);
static_assert(offsetof(FConstraintNodeData, Constraints) == 0x0098);
static_assert(offsetof(FAnimationHierarchy, UserData) == 0x0078);
static_assert(offsetof(FAnimNode_ControlRigBase, Source) == 0x0058);
static_assert(offsetof(FAnimNode_ControlRigBase, ControlRigBoneMapping) == 0x0068);
static_assert(offsetof(FAnimNode_ControlRigBase, ControlRigCurveMapping) == 0x00B8);
static_assert(offsetof(FAnimNode_ControlRigBase, InputToCurveMappingUIDs) == 0x0108);
static_assert(offsetof(FAnimNode_ControlRigBase, NodeMappingContainer) == 0x0158);
static_assert(offsetof(FAnimNode_ControlRigBase, InputSettings) == 0x0160);
static_assert(offsetof(FAnimNode_ControlRigBase, OutputSettings) == 0x0162);
static_assert(offsetof(FAnimNode_ControlRig, ControlRigClass) == 0x0170);
static_assert(offsetof(FAnimNode_ControlRig, ControlRig) == 0x0178);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBias) == 0x0188);
static_assert(offsetof(FAnimNode_ControlRig, AlphaBoolBlend) == 0x0190);
static_assert(offsetof(FAnimNode_ControlRig, AlphaCurveName) == 0x01D8);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBiasClamp) == 0x01E0);
static_assert(offsetof(FAnimNode_ControlRig, InputMapping) == 0x0210);
static_assert(offsetof(FAnimNode_ControlRig, OutputMapping) == 0x0260);
static_assert(offsetof(FAnimNode_ControlRig_ExternalSource, ControlRig) == 0x0170);
static_assert(offsetof(FControlRigComponentMappedCurve, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedCurve, Target) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedBone, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedBone, Target) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedComponent, Component) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedComponent, ElementName) == 0x0008);
static_assert(offsetof(FAnimNode_ControlRigInputPose, InputPose) == 0x0010);
static_assert(offsetof(FCRFourPointBezier, A) == 0x0000);
static_assert(offsetof(FCRFourPointBezier, B) == 0x000C);
static_assert(offsetof(FCRFourPointBezier, C) == 0x0018);
static_assert(offsetof(FCRFourPointBezier, D) == 0x0024);
static_assert(offsetof(FControlRigSequenceObjectReference, ControlRigClass) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(FControlRigSettingsPerPinBool, Values) == 0x0000);
static_assert(offsetof(FCRSimPoint, position) == 0x0010);
static_assert(offsetof(FCRSimPoint, LinearVelocity) == 0x001C);
static_assert(offsetof(FCRSimPointConstraint, DataA) == 0x000C);
static_assert(offsetof(FCRSimPointConstraint, DataB) == 0x0018);
static_assert(offsetof(FCRSimPointForce, Vector) == 0x0004);
static_assert(offsetof(FCRSimSoftCollision, Transform) == 0x0000);
static_assert(offsetof(FCRSimPointContainer, Points) == 0x0018);
static_assert(offsetof(FCRSimPointContainer, Springs) == 0x0028);
static_assert(offsetof(FCRSimPointContainer, Forces) == 0x0038);
static_assert(offsetof(FCRSimPointContainer, CollisionVolumes) == 0x0048);
static_assert(offsetof(FCRSimPointContainer, Constraints) == 0x0058);
static_assert(offsetof(FCRSimPointContainer, PreviousStep) == 0x0068);
static_assert(offsetof(FMovieSceneControlRigInstanceData, BoneFilter) == 0x0010);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Weight) == 0x0020);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Operand) == 0x00C0);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Enums) == 0x0080);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Integers) == 0x0090);
static_assert(offsetof(FRigMirrorSettings, OldName) == 0x0008);
static_assert(offsetof(FRigMirrorSettings, NewName) == 0x0018);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Contents) == 0x0010);
static_assert(offsetof(FRigHierarchyCopyPasteContent, LocalTransforms) == 0x0020);
static_assert(offsetof(FRigHierarchyCopyPasteContent, GlobalTransforms) == 0x0030);
static_assert(offsetof(FRigInfluenceEntryModifier, AffectedList) == 0x0000);
static_assert(offsetof(FRigUnitMutable, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Value) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Minimum) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, AccumulatedMinimum) == 0x002C);
static_assert(offsetof(FRigUnit_AccumulateVectorRange, AccumulatedMaximum) == 0x0038);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, InitialValue) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, Result) == 0x0080);
static_assert(offsetof(FRigUnit_AccumulateTransformLerp, AccumulatedValue) == 0x00B0);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, InitialValue) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateQuatLerp, AccumulatedValue) == 0x0050);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, TargetValue) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, Result) == 0x0028);
static_assert(offsetof(FRigUnit_AccumulateVectorLerp, AccumulatedValue) == 0x0034);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, InitialValue) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, Result) == 0x0080);
static_assert(offsetof(FRigUnit_AccumulateTransformMul, AccumulatedValue) == 0x00B0);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, InitialValue) == 0x0020);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, Result) == 0x0040);
static_assert(offsetof(FRigUnit_AccumulateQuatMul, AccumulatedValue) == 0x0050);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, Multiplier) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, Result) == 0x0024);
static_assert(offsetof(FRigUnit_AccumulateVectorMul, AccumulatedValue) == 0x0030);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, Increment) == 0x0008);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, InitialValue) == 0x0014);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, Result) == 0x0024);
static_assert(offsetof(FRigUnit_AccumulateVectorAdd, AccumulatedValue) == 0x0030);
static_assert(offsetof(FRigUnit_AddBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_AddBoneTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_AddBoneTransform, CachedBone) == 0x00A8);
static_assert(offsetof(FRigUnit_AimItem_Target, Axis) == 0x0004);
static_assert(offsetof(FRigUnit_AimItem_Target, Target) == 0x0010);
static_assert(offsetof(FRigUnit_AimItem_Target, Space) == 0x0020);
static_assert(offsetof(FRigUnit_AimBone_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_AimItem, item) == 0x0068);
static_assert(offsetof(FRigUnit_AimItem, Primary) == 0x0074);
static_assert(offsetof(FRigUnit_AimItem, Secondary) == 0x00A0);
static_assert(offsetof(FRigUnit_AimItem, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimItem, CachedItem) == 0x0110);
static_assert(offsetof(FRigUnit_AimItem, PrimaryCachedSpace) == 0x0124);
static_assert(offsetof(FRigUnit_AimItem, SecondaryCachedSpace) == 0x0138);
static_assert(offsetof(FRigUnit_AimBone_Target, Axis) == 0x0004);
static_assert(offsetof(FRigUnit_AimBone_Target, Target) == 0x0010);
static_assert(offsetof(FRigUnit_AimBone_Target, Space) == 0x0020);
static_assert(offsetof(FRigUnit_AimBone, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_AimBone, Primary) == 0x0070);
static_assert(offsetof(FRigUnit_AimBone, Secondary) == 0x0098);
static_assert(offsetof(FRigUnit_AimBone, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimBone, CachedBoneIndex) == 0x0110);
static_assert(offsetof(FRigUnit_AimBone, PrimaryCachedSpace) == 0x0124);
static_assert(offsetof(FRigUnit_AimBone, SecondaryCachedSpace) == 0x0138);
static_assert(offsetof(FRigUnit_AimBoneMath, InputTransform) == 0x0010);
static_assert(offsetof(FRigUnit_AimBoneMath, Primary) == 0x0040);
static_assert(offsetof(FRigUnit_AimBoneMath, Secondary) == 0x006C);
static_assert(offsetof(FRigUnit_AimBoneMath, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_AimBoneMath, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_AimBoneMath, PrimaryCachedSpace) == 0x0110);
static_assert(offsetof(FRigUnit_AimBoneMath, SecondaryCachedSpace) == 0x0124);
static_assert(offsetof(FAimTarget, Transform) == 0x0010);
static_assert(offsetof(FAimTarget, AlignVector) == 0x0040);
static_assert(offsetof(FRigUnit_AimConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_AimConstraint, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_AimConstraint, AimVector) == 0x0074);
static_assert(offsetof(FRigUnit_AimConstraint, UpVector) == 0x0080);
static_assert(offsetof(FRigUnit_AimConstraint, AimTargets) == 0x0090);
static_assert(offsetof(FRigUnit_AimConstraint, UpTargets) == 0x00A0);
static_assert(offsetof(FRigUnit_AimConstraint, WorkData) == 0x00B0);
static_assert(offsetof(FRigUnit_AlphaInterpVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_AlphaInterpVector, InRange) == 0x0020);
static_assert(offsetof(FRigUnit_AlphaInterpVector, OutRange) == 0x0028);
static_assert(offsetof(FRigUnit_AlphaInterpVector, Result) == 0x0048);
static_assert(offsetof(FRigUnit_AlphaInterpVector, ScaleBiasClamp) == 0x0054);
static_assert(offsetof(FRigUnit_AlphaInterp, InRange) == 0x0018);
static_assert(offsetof(FRigUnit_AlphaInterp, OutRange) == 0x0020);
static_assert(offsetof(FRigUnit_AlphaInterp, ScaleBiasClamp) == 0x0044);
static_assert(offsetof(FRigUnit_AnimEvalRichCurve, Curve) == 0x0010);
static_assert(offsetof(FRigUnit_AnimRichCurve, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_ApplyFK, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_ApplyFK, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_ApplyFK, Filter) == 0x00A0);
static_assert(offsetof(FRigUnit_ApplyFK, BaseTransform) == 0x00B0);
static_assert(offsetof(FRigUnit_ApplyFK, BaseJoint) == 0x00E0);
static_assert(offsetof(FRigUnit_BeginExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FBlendTarget, Transform) == 0x0000);
static_assert(offsetof(FRigUnit_BlendTransform, Source) == 0x0010);
static_assert(offsetof(FRigUnit_BlendTransform, Targets) == 0x0040);
static_assert(offsetof(FRigUnit_BlendTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_Harmonics_TargetItem, item) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, WaveTime) == 0x0010);
static_assert(offsetof(FRigUnit_ItemHarmonics, Targets) == 0x0068);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveSpeed) == 0x0078);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveFrequency) == 0x0084);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveAmplitude) == 0x0090);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveOffset) == 0x009C);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveNoise) == 0x00A8);
static_assert(offsetof(FRigUnit_ItemHarmonics, WorkData) == 0x00C8);
static_assert(offsetof(FRigUnit_BoneHarmonics_BoneTarget, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics, Bones) == 0x0068);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveSpeed) == 0x0078);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveFrequency) == 0x0084);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveAmplitude) == 0x0090);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveOffset) == 0x009C);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveNoise) == 0x00A8);
static_assert(offsetof(FRigUnit_BoneHarmonics, WorkData) == 0x00C8);
static_assert(offsetof(FRigUnit_ControlName, Control) == 0x0008);
static_assert(offsetof(FRigUnit_SpaceName, Space) == 0x0008);
static_assert(offsetof(FRigUnit_BoneName, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_Item, item) == 0x0008);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimitPerItem, item) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitIndex) == 0x0020);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitsPerItem) == 0x0030);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedEffector) == 0x0040);
static_assert(offsetof(FRigUnit_CCDIKPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_CCDIKPerItem, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_CCDIKPerItem, RotationLimits) == 0x00C8);
static_assert(offsetof(FRigUnit_CCDIKPerItem, WorkData) == 0x00E0);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimit, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_CCDIK, EffectorBone) == 0x0070);
static_assert(offsetof(FRigUnit_CCDIK, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_CCDIK, RotationLimits) == 0x00C8);
static_assert(offsetof(FRigUnit_CCDIK, WorkData) == 0x00E0);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachTarget) == 0x0004);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachAxis) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveFrequency) == 0x0004);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveAmplitude) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveOffset) == 0x001C);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveNoise) == 0x0028);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumGravity) == 0x0008);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, UnwindAxis) == 0x0028);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Time) == 0x0000);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Items) == 0x0010);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Ratio) == 0x0020);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, LocalTip) == 0x0030);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumTip) == 0x0040);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumPosition) == 0x0050);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumVelocity) == 0x0060);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, HierarchyLine) == 0x0070);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, VelocityLines) == 0x0080);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, ChainRoot) == 0x0068);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Speed) == 0x0074);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Reach) == 0x0080);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Wave) == 0x00A8);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WaveCurve) == 0x00E8);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Pendulum) == 0x0170);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, DrawWorldOffset) == 0x01B0);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WorkData) == 0x01E0);
static_assert(offsetof(FRigUnit_ChainHarmonics, ChainRoot) == 0x0068);
static_assert(offsetof(FRigUnit_ChainHarmonics, Speed) == 0x0070);
static_assert(offsetof(FRigUnit_ChainHarmonics, Reach) == 0x007C);
static_assert(offsetof(FRigUnit_ChainHarmonics, Wave) == 0x00A4);
static_assert(offsetof(FRigUnit_ChainHarmonics, WaveCurve) == 0x00E8);
static_assert(offsetof(FRigUnit_ChainHarmonics, Pendulum) == 0x0170);
static_assert(offsetof(FRigUnit_ChainHarmonics, DrawWorldOffset) == 0x01B0);
static_assert(offsetof(FRigUnit_ChainHarmonics, WorkData) == 0x01E0);
static_assert(offsetof(FRigUnit_CollectionLoop, Collection) == 0x0068);
static_assert(offsetof(FRigUnit_CollectionLoop, item) == 0x0078);
static_assert(offsetof(FRigUnit_CollectionLoop, Completed) == 0x0098);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, item) == 0x001C);
static_assert(offsetof(FRigUnit_CollectionCount, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReverse, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReverse, Reversed) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionDifference, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionDifference, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionDifference, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionIntersection, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionIntersection, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionIntersection, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionUnion, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionUnion, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionUnion, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItems, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Old) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, New) == 0x0020);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Collection) == 0x0030);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, CachedCollection) == 0x0040);
static_assert(offsetof(FRigUnit_CollectionChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChildren, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionChildren, CachedCollection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionNameSearch, PartialName) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionNameSearch, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionNameSearch, CachedCollection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionChain, FirstItem) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChain, LastItem) == 0x0014);
static_assert(offsetof(FRigUnit_CollectionChain, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionChain, CachedCollection) == 0x0038);
static_assert(offsetof(FRigUnit_Control, Transform) == 0x0008);
static_assert(offsetof(FRigUnit_Control, Base) == 0x0030);
static_assert(offsetof(FRigUnit_Control, InitTransform) == 0x0060);
static_assert(offsetof(FRigUnit_Control, Result) == 0x0090);
static_assert(offsetof(FRigUnit_Control, Filter) == 0x00C0);
static_assert(offsetof(FRigUnit_Control_StaticMesh, MeshTransform) == 0x00D0);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, TwistAxis) == 0x0020);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Swing) == 0x0030);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Twist) == 0x0040);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Result) == 0x0014);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Result) == 0x0014);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotation, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Result) == 0x0030);
static_assert(offsetof(FRigUnit_ConvertTransform, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertTransform, Result) == 0x0040);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Bezier) == 0x0068);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugBezier, Bezier) == 0x0068);
static_assert(offsetof(FRigUnit_DebugBezier, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugBezier, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugBezier, WorldOffset) == 0x00C0);
static_assert(offsetof(FRigUnit_DebugHierarchy, Color) == 0x006C);
static_assert(offsetof(FRigUnit_DebugHierarchy, WorldOffset) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, A) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, B) == 0x0074);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Color) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugLineItemSpace, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLine, A) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLine, B) == 0x0074);
static_assert(offsetof(FRigUnit_DebugLine, Color) == 0x0080);
static_assert(offsetof(FRigUnit_DebugLine, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugLine, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Points) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, Space) == 0x008C);
static_assert(offsetof(FRigUnit_DebugLineStripItemSpace, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugLineStrip, Points) == 0x0068);
static_assert(offsetof(FRigUnit_DebugLineStrip, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugLineStrip, Space) == 0x008C);
static_assert(offsetof(FRigUnit_DebugLineStrip, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugPointMutable, Vector) == 0x0068);
static_assert(offsetof(FRigUnit_DebugPointMutable, Color) == 0x0078);
static_assert(offsetof(FRigUnit_DebugPointMutable, Space) == 0x0090);
static_assert(offsetof(FRigUnit_DebugPointMutable, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugPoint, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_DebugPoint, Color) == 0x0018);
static_assert(offsetof(FRigUnit_DebugPoint, Space) == 0x0030);
static_assert(offsetof(FRigUnit_DebugPoint, WorldOffset) == 0x0040);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, Space) == 0x00C4);
static_assert(offsetof(FRigUnit_DebugArcItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugArc, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugArc, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugArc, Space) == 0x00C4);
static_assert(offsetof(FRigUnit_DebugArc, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugRectangleItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugRectangle, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugRectangle, Color) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugRectangle, Space) == 0x00B8);
static_assert(offsetof(FRigUnit_DebugRectangle, WorldOffset) == 0x00C0);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable_WorkData, DrawTransforms) == 0x0000);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Transforms) == 0x0068);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Color) == 0x007C);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, Space) == 0x0094);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigUnit_DebugTransformArrayMutable, WorkData) == 0x00D8);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Color) == 0x00A4);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, Space) == 0x00BC);
static_assert(offsetof(FRigUnit_DebugTransformMutableItemSpace, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Color) == 0x00A4);
static_assert(offsetof(FRigUnit_DebugTransformMutable, Space) == 0x00BC);
static_assert(offsetof(FRigUnit_DebugTransformMutable, WorldOffset) == 0x00D0);
static_assert(offsetof(FRigUnit_DebugTransform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_DebugTransform, Color) == 0x0044);
static_assert(offsetof(FRigUnit_DebugTransform, Space) == 0x005C);
static_assert(offsetof(FRigUnit_DebugTransform, WorldOffset) == 0x0070);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Delta) == 0x0040);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, PreviousValue) == 0x0070);
static_assert(offsetof(FRigUnit_DeltaFromPreviousTransform, Cache) == 0x00A0);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Value) == 0x0010);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Delta) == 0x0020);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, PreviousValue) == 0x0030);
static_assert(offsetof(FRigUnit_DeltaFromPreviousQuat, Cache) == 0x0040);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Delta) == 0x0014);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, PreviousValue) == 0x0020);
static_assert(offsetof(FRigUnit_DeltaFromPreviousVector, Cache) == 0x002C);
static_assert(offsetof(FRigUnit_DistributeRotation_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationA) == 0x0010);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationB) == 0x0020);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationT) == 0x0030);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemLocalTransforms) == 0x0040);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Items) == 0x0068);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Rotations) == 0x0078);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, WorkData) == 0x0090);
static_assert(offsetof(FRigUnit_DistributeRotation, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_DistributeRotation, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_DistributeRotation, Rotations) == 0x0078);
static_assert(offsetof(FRigUnit_DistributeRotation, WorkData) == 0x0098);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_DrawContainerSetThickness, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, InstructionName) == 0x0068);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, Color) == 0x0070);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, InstructionName) == 0x0008);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Color) == 0x0010);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedEffector) == 0x0020);
static_assert(offsetof(FRigUnit_FABRIKPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_FABRIKPerItem, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_FABRIKPerItem, WorkData) == 0x00C0);
static_assert(offsetof(FRigUnit_FABRIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_FABRIK, EffectorBone) == 0x0070);
static_assert(offsetof(FRigUnit_FABRIK, EffectorTransform) == 0x0080);
static_assert(offsetof(FRigUnit_FABRIK, WorkData) == 0x00C0);
static_assert(offsetof(FRigUnit_FitChainToCurve_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, CurveColor) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, SegmentsColor) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, WorldOffset) == 0x0030);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemPositions) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemSegments) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurvePositions) == 0x0028);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurveSegments) == 0x0038);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CachedItems) == 0x0048);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationA) == 0x0058);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationB) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationT) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemLocalTransforms) == 0x0088);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Bezier) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PrimaryAxis) == 0x00B8);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, SecondaryAxis) == 0x00C4);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PoleVectorPosition) == 0x00D0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Rotations) == 0x00E0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, WorkData) == 0x0160);
static_assert(offsetof(FRigUnit_FitChainToCurve, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurve, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_FitChainToCurve, Bezier) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurve, PrimaryAxis) == 0x00B8);
static_assert(offsetof(FRigUnit_FitChainToCurve, SecondaryAxis) == 0x00C4);
static_assert(offsetof(FRigUnit_FitChainToCurve, PoleVectorPosition) == 0x00D0);
static_assert(offsetof(FRigUnit_FitChainToCurve, Rotations) == 0x00E0);
static_assert(offsetof(FRigUnit_FitChainToCurve, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_FitChainToCurve, WorkData) == 0x0160);
static_assert(offsetof(FRigUnit_ForLoopCount, Completed) == 0x0078);
static_assert(offsetof(FRigUnit_GetBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, CachedControlIndex) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlTransform, Minimum) == 0x0050);
static_assert(offsetof(FRigUnit_GetControlTransform, Maximum) == 0x0080);
static_assert(offsetof(FRigUnit_GetControlTransform, CachedControlIndex) == 0x00B0);
static_assert(offsetof(FRigUnit_GetControlRotator, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlRotator, Rotator) == 0x0014);
static_assert(offsetof(FRigUnit_GetControlRotator, Minimum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlRotator, Maximum) == 0x002C);
static_assert(offsetof(FRigUnit_GetControlRotator, CachedControlIndex) == 0x0038);
static_assert(offsetof(FRigUnit_GetControlVector, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector, Vector) == 0x0014);
static_assert(offsetof(FRigUnit_GetControlVector, Minimum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector, Maximum) == 0x002C);
static_assert(offsetof(FRigUnit_GetControlVector, CachedControlIndex) == 0x0038);
static_assert(offsetof(FRigUnit_GetControlVector2D, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector2D, Vector) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlVector2D, Minimum) == 0x0018);
static_assert(offsetof(FRigUnit_GetControlVector2D, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector2D, CachedControlIndex) == 0x0028);
static_assert(offsetof(FRigUnit_GetControlInteger, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInteger, CachedControlIndex) == 0x001C);
static_assert(offsetof(FRigUnit_GetControlFloat, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlFloat, CachedControlIndex) == 0x001C);
static_assert(offsetof(FRigUnit_GetControlBool, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlBool, CachedControlIndex) == 0x0014);
static_assert(offsetof(FRigUnit_GetCurveValue, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_GetCurveValue, CachedCurveIndex) == 0x0014);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetJointTransform, Joint) == 0x0068);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseJoint) == 0x00B0);
static_assert(offsetof(FRigUnit_GetJointTransform, Output) == 0x00C0);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedBone) == 0x0050);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedSpace) == 0x0064);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Child) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Parent) == 0x0018);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, RelativeTransform) == 0x0030);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedChild) == 0x0060);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedParent) == 0x0074);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Space) == 0x0008);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetSpaceTransform, CachedSpaceIndex) == 0x0050);
static_assert(offsetof(FRigUnit_GetTransform, item) == 0x0008);
static_assert(offsetof(FRigUnit_GetTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetTransform, CachedIndex) == 0x0050);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, item) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Siblings) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedItem) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedSiblings) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Children) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedParent) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedChildren) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Parents) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedChild) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedParents) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Parent) == 0x0014);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedChild) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedParent) == 0x0034);
static_assert(offsetof(FRigUnit_InverseExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_ItemReplace, item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemReplace, Old) == 0x0014);
static_assert(offsetof(FRigUnit_ItemReplace, New) == 0x001C);
static_assert(offsetof(FRigUnit_ItemReplace, Result) == 0x0024);
static_assert(offsetof(FRigUnit_ItemExists, item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemExists, CachedIndex) == 0x0018);
static_assert(offsetof(FRigUnit_KalmanTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_KalmanTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_KalmanTransform, Buffer) == 0x0080);
static_assert(offsetof(FRigUnit_KalmanVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_KalmanVector, Result) == 0x0018);
static_assert(offsetof(FRigUnit_KalmanVector, Buffer) == 0x0028);
static_assert(offsetof(FRigUnit_KalmanFloat, Buffer) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorLerp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathColorLerp, B) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorLerp, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, B) == 0x0018);
static_assert(offsetof(FRigUnit_MathColorBinaryOp, Result) == 0x0028);
static_assert(offsetof(FRigUnit_MathColorFromFloat, Result) == 0x000C);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Input) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, TwistAxis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Swing) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionSwingTwist, Twist) == 0x0040);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Quaternion) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionGetAxis, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Quaternion) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Vector) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionRotateVector, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathQuaternionUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionUnaryOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionDot, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionDot, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, IfFalse) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSelectBool, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionNotEquals, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionNotEquals, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionEquals, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionEquals, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionSlerp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, B) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionBinaryOp, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathQuaternionToRotator, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToRotator, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToEuler, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathQuaternionScale, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToAxisAndAngle, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathQuaternionToAxisAndAngle, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathQuaternionFromTwoVectors, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromRotator, Rotator) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromRotator, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, Euler) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromEuler, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathQuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_MathQuaternionFromAxisAndAngle, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, Input) == 0x0008);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorBase, WorkData) == 0x0020);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorXform, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorXform, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorQuat, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorQuat, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Value) == 0x000C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorColor, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorColor, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Value) == 0x000C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorVector, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorVector, Output) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigUnit_MathRBFInterpolateVectorFloat, Targets) == 0x00B0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, Input) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, TwistAxis) == 0x002C);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatBase, WorkData) == 0x0040);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatXform, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatXform, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatQuat, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatQuat, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatColor, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatColor, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatVector, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatVector, Output) == 0x00E0);
static_assert(offsetof(FMathRBFInterpolateQuatFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigUnit_MathRBFInterpolateQuatFloat, Targets) == 0x00D0);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Space) == 0x0050);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, DebugColor) == 0x0084);
static_assert(offsetof(FRigUnit_MathTransformClampSpatially, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Location) == 0x0008);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Rotation) == 0x0014);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Scale) == 0x0024);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, Transform) == 0x0030);
static_assert(offsetof(FRigUnit_MathTransformFromSRT, EulerTransform) == 0x0060);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Location) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformTransformVector, Result) == 0x004C);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Direction) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformRotateVector, Result) == 0x004C);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, IfFalse) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformSelectBool, Result) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformLerp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformLerp, B) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformLerp, Result) == 0x0080);
static_assert(offsetof(FRigUnit_MathTransformUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformUnaryOp, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Local) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Parent) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeAbsolute, Global) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Global) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Parent) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformMakeRelative, Local) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, B) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformBinaryOp, Result) == 0x0070);
static_assert(offsetof(FRigUnit_MathTransformToEulerTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_MathTransformToEulerTransform, Result) == 0x0040);
static_assert(offsetof(FRigUnit_MathTransformFromEulerTransform, EulerTransform) == 0x0008);
static_assert(offsetof(FRigUnit_MathTransformFromEulerTransform, Result) == 0x0030);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Start) == 0x0008);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Direction) == 0x0014);
static_assert(offsetof(FRigUnit_MathIntersectPlane, PlanePoint) == 0x0020);
static_assert(offsetof(FRigUnit_MathIntersectPlane, PlaneNormal) == 0x002C);
static_assert(offsetof(FRigUnit_MathIntersectPlane, Result) == 0x0038);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Space) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, DebugColor) == 0x0054);
static_assert(offsetof(FRigUnit_MathVectorClampSpatially, Result) == 0x0068);
static_assert(offsetof(FRigUnit_MathVectorMakeBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Result) == 0x003C);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Tangent) == 0x0048);
static_assert(offsetof(FRigUnit_MathVectorOrthogonal, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorOrthogonal, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorParallel, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorParallel, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorAngle, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorAngle, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorMirror, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorMirror, Normal) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorMirror, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClampLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClampLength, Result) == 0x001C);
static_assert(offsetof(FRigUnit_MathVectorSetLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorSetLength, Result) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorUnaryOp, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorUnaryOp, Result) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorDot, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorDot, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorBinaryOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorDistance, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorDistance, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorLength, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorLengthSquared, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, IfTrue) == 0x000C);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, IfFalse) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorSelectBool, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyEqual, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyEqual, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorIsNearlyZero, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorNotEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorNotEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorRemap, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorRemap, SourceMinimum) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorRemap, SourceMaximum) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorRemap, TargetMinimum) == 0x002C);
static_assert(offsetof(FRigUnit_MathVectorRemap, TargetMaximum) == 0x0038);
static_assert(offsetof(FRigUnit_MathVectorRemap, Result) == 0x0048);
static_assert(offsetof(FRigUnit_MathVectorLerp, A) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorLerp, B) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorLerp, Result) == 0x0024);
static_assert(offsetof(FRigUnit_MathVectorClamp, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorClamp, Minimum) == 0x0014);
static_assert(offsetof(FRigUnit_MathVectorClamp, Maximum) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorClamp, Result) == 0x002C);
static_assert(offsetof(FRigUnit_MathVectorScale, Value) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorScale, Result) == 0x0018);
static_assert(offsetof(FRigUnit_MathVectorFromFloat, Result) == 0x000C);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, BoneToModify) == 0x0068);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, WorkData) == 0x0088);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, item) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms, ItemToModify) == 0x0068);
static_assert(offsetof(FRigUnit_ModifyTransforms, WorkData) == 0x0088);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Location) == 0x0008);
static_assert(offsetof(FRigUnit_MultiFABRIK, RootBone) == 0x0068);
static_assert(offsetof(FRigUnit_MultiFABRIK, Effectors) == 0x0070);
static_assert(offsetof(FRigUnit_MultiFABRIK, WorkData) == 0x0090);
static_assert(offsetof(FRigUnit_Contains, Name) == 0x0008);
static_assert(offsetof(FRigUnit_Contains, Search) == 0x0010);
static_assert(offsetof(FRigUnit_StartsWith, Name) == 0x0008);
static_assert(offsetof(FRigUnit_StartsWith, Start) == 0x0010);
static_assert(offsetof(FRigUnit_EndsWith, Name) == 0x0008);
static_assert(offsetof(FRigUnit_EndsWith, Ending) == 0x0010);
static_assert(offsetof(FRigUnit_NameReplace, Name) == 0x0008);
static_assert(offsetof(FRigUnit_NameReplace, Old) == 0x0010);
static_assert(offsetof(FRigUnit_NameReplace, New) == 0x0018);
static_assert(offsetof(FRigUnit_NameReplace, Result) == 0x0020);
static_assert(offsetof(FRigUnit_NameTruncate, Name) == 0x0008);
static_assert(offsetof(FRigUnit_NameTruncate, Remainder) == 0x0018);
static_assert(offsetof(FRigUnit_NameTruncate, Chopped) == 0x0020);
static_assert(offsetof(FRigUnit_NameConcat, A) == 0x0008);
static_assert(offsetof(FRigUnit_NameConcat, B) == 0x0010);
static_assert(offsetof(FRigUnit_NameConcat, Result) == 0x0018);
static_assert(offsetof(FRigUnit_NoiseVector, position) == 0x0008);
static_assert(offsetof(FRigUnit_NoiseVector, Speed) == 0x0014);
static_assert(offsetof(FRigUnit_NoiseVector, Frequency) == 0x0020);
static_assert(offsetof(FRigUnit_NoiseVector, Result) == 0x0034);
static_assert(offsetof(FRigUnit_NoiseVector, Time) == 0x0040);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, item) == 0x0068);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, OffsetTransform) == 0x0080);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, CachedIndex) == 0x00B8);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Subject) == 0x0068);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Parents) == 0x0078);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, InitialGlobalTransform) == 0x0090);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Transform) == 0x00D0);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedSubject) == 0x0104);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedParent) == 0x0118);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, RelativeOffset) == 0x0130);
static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, Bone) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, Color) == 0x0010);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, Simulation) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, BoneIndices) == 0x0078);
static_assert(offsetof(FRigUnit_PointSimulation, Points) == 0x0068);
static_assert(offsetof(FRigUnit_PointSimulation, Links) == 0x0078);
static_assert(offsetof(FRigUnit_PointSimulation, Forces) == 0x0088);
static_assert(offsetof(FRigUnit_PointSimulation, CollisionVolumes) == 0x0098);
static_assert(offsetof(FRigUnit_PointSimulation, BoneTargets) == 0x00B8);
static_assert(offsetof(FRigUnit_PointSimulation, PrimaryAimAxis) == 0x00CC);
static_assert(offsetof(FRigUnit_PointSimulation, SecondaryAimAxis) == 0x00D8);
static_assert(offsetof(FRigUnit_PointSimulation, DebugSettings) == 0x00F0);
static_assert(offsetof(FRigUnit_PointSimulation, Bezier) == 0x0140);
static_assert(offsetof(FRigUnit_PointSimulation, WorkData) == 0x0170);
static_assert(offsetof(FRigUnit_PrepareForExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_EndProfilingTimer, Prefix) == 0x0070);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, OldParent) == 0x0018);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, NewParent) == 0x0028);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Transform) == 0x0040);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedChild) == 0x0070);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedOldParent) == 0x0084);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedNewParent) == 0x0098);
static_assert(offsetof(FRigUnit_PropagateTransform, item) == 0x0068);
static_assert(offsetof(FRigUnit_PropagateTransform, CachedIndex) == 0x0078);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Argument) == 0x0020);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Result) == 0x0020);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Axis) == 0x0020);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument1) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Result) == 0x0030);
static_assert(offsetof(FRigUnit_RandomVector, Result) == 0x0018);
static_assert(offsetof(FRigUnit_RandomVector, LastResult) == 0x0024);
static_assert(offsetof(FRigUnit_SendEvent, item) == 0x006C);
static_assert(offsetof(FRigUnit_SequenceExecution, ExecuteContext) == 0x0008);
static_assert(offsetof(FRigUnit_SequenceExecution, A) == 0x0068);
static_assert(offsetof(FRigUnit_SequenceExecution, B) == 0x00C8);
static_assert(offsetof(FRigUnit_SequenceExecution, C) == 0x0128);
static_assert(offsetof(FRigUnit_SequenceExecution, D) == 0x0188);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, CachedBone) == 0x00D4);
static_assert(offsetof(FRigUnit_SetBoneRotation, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneRotation, Rotation) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneRotation, CachedBone) == 0x008C);
static_assert(offsetof(FRigUnit_SetBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetBoneTransform, CachedBone) == 0x00DC);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Translation) == 0x0070);
static_assert(offsetof(FRigUnit_SetBoneTranslation, CachedBone) == 0x0088);
static_assert(offsetof(FRigUnit_SetControlColor, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlColor, Color) == 0x0070);
static_assert(offsetof(FRigUnit_SetControlColor, CachedControlIndex) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlOffset, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlOffset, Offset) == 0x0070);
static_assert(offsetof(FRigUnit_SetControlOffset, CachedControlIndex) == 0x00A4);
static_assert(offsetof(FRigUnit_SetControlTransform, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlTransform, CachedControlIndex) == 0x00B4);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Rotator) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlRotator, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlRotator, Rotator) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlRotator, CachedControlIndex) == 0x0084);
static_assert(offsetof(FRigUnit_SetControlVector, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVector, Vector) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVector, CachedControlIndex) == 0x0084);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlVector2D, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVector2D, Vector) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVector2D, CachedControlIndex) == 0x007C);
static_assert(offsetof(FRigUnit_SetMultiControlInteger_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlInteger, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlInteger, CachedControlIndex) == 0x0078);
static_assert(offsetof(FRigUnit_SetMultiControlFloat_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, CachedControlIndices) == 0x0080);
static_assert(offsetof(FRigUnit_SetControlFloat, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlFloat, CachedControlIndex) == 0x0078);
static_assert(offsetof(FRigUnit_SetMultiControlBool_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlBool, Entries) == 0x0068);
static_assert(offsetof(FRigUnit_SetMultiControlBool, CachedControlIndices) == 0x0078);
static_assert(offsetof(FRigUnit_SetControlBool, Control) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlBool, CachedControlIndex) == 0x0074);
static_assert(offsetof(FRigUnit_SetControlVisibility, item) == 0x0068);
static_assert(offsetof(FRigUnit_SetControlVisibility, Pattern) == 0x0078);
static_assert(offsetof(FRigUnit_SetControlVisibility, CachedControlIndices) == 0x0090);
static_assert(offsetof(FRigUnit_SetCurveValue, Curve) == 0x0068);
static_assert(offsetof(FRigUnit_SetCurveValue, CachedCurveIndex) == 0x0074);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Space) == 0x0070);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedBone) == 0x00B8);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedSpaceIndex) == 0x00CC);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Child) == 0x0068);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Parent) == 0x0074);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, RelativeTransform) == 0x0090);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedChild) == 0x00C8);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedParent) == 0x00DC);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, SpaceName) == 0x0068);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Transform) == 0x0070);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Result) == 0x00A0);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, CachedSpaceIndex) == 0x00D4);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Space) == 0x0068);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetSpaceTransform, CachedSpaceIndex) == 0x00B4);
static_assert(offsetof(FRigUnit_SetScale, item) == 0x0068);
static_assert(offsetof(FRigUnit_SetScale, Scale) == 0x0078);
static_assert(offsetof(FRigUnit_SetScale, CachedIndex) == 0x008C);
static_assert(offsetof(FRigUnit_SetRotation, item) == 0x0068);
static_assert(offsetof(FRigUnit_SetRotation, Rotation) == 0x0080);
static_assert(offsetof(FRigUnit_SetRotation, CachedIndex) == 0x0098);
static_assert(offsetof(FRigUnit_SetTranslation, item) == 0x0068);
static_assert(offsetof(FRigUnit_SetTranslation, Translation) == 0x0078);
static_assert(offsetof(FRigUnit_SetTranslation, CachedIndex) == 0x008C);
static_assert(offsetof(FRigUnit_SetTransform, item) == 0x0068);
static_assert(offsetof(FRigUnit_SetTransform, Transform) == 0x0080);
static_assert(offsetof(FRigUnit_SetTransform, CachedIndex) == 0x00B8);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, ItemSegments) == 0x0008);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, CachedItems) == 0x0018);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, Transforms) == 0x0028);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, BlendedTransforms) == 0x0038);
static_assert(offsetof(FRigUnit_SlideChainPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_SlideChainPerItem, WorkData) == 0x0080);
static_assert(offsetof(FRigUnit_SlideChain, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_SlideChain, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_SlideChain, WorkData) == 0x0080);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, Color) == 0x0008);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, BoneIndices) == 0x0000);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, CachedPoleVector) == 0x0010);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Transforms) == 0x0028);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Simulation) == 0x0038);
static_assert(offsetof(FRigUnit_SpringIK, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_SpringIK, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_SpringIK, PoleVector) == 0x0090);
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorSpace) == 0x00A0);
static_assert(offsetof(FRigUnit_SpringIK, PrimaryAxis) == 0x00A8);
static_assert(offsetof(FRigUnit_SpringIK, SecondaryAxis) == 0x00B4);
static_assert(offsetof(FRigUnit_SpringIK, DebugSettings) == 0x00D0);
static_assert(offsetof(FRigUnit_SpringIK, WorkData) == 0x0120);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, Buffer) == 0x0080);
static_assert(offsetof(FRigUnit_TimeOffsetTransform, DeltaTimes) == 0x0090);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Result) == 0x0020);
static_assert(offsetof(FRigUnit_TimeOffsetVector, Buffer) == 0x0030);
static_assert(offsetof(FRigUnit_TimeOffsetVector, DeltaTimes) == 0x0040);
static_assert(offsetof(FRigUnit_TimeOffsetFloat, Buffer) == 0x0020);
static_assert(offsetof(FRigUnit_TimeOffsetFloat, DeltaTimes) == 0x0030);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument1) == 0x0040);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Result) == 0x0070);
static_assert(offsetof(FConstraintTarget, Transform) == 0x0000);
static_assert(offsetof(FConstraintTarget, Filter) == 0x0035);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintDataToTargets) == 0x0010);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, item) == 0x0068);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseItem) == 0x00B0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Targets) == 0x00C0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, WorkData) == 0x00D8);
static_assert(offsetof(FRigUnit_TransformConstraint, Bone) == 0x0068);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransform) == 0x0080);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseBone) == 0x00B0);
static_assert(offsetof(FRigUnit_TransformConstraint, Targets) == 0x00B8);
static_assert(offsetof(FRigUnit_TransformConstraint, WorkData) == 0x00D0);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemRatios) == 0x0010);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemTransforms) == 0x0020);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, Items) == 0x0068);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistAxis) == 0x0078);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, PoleAxis) == 0x0084);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, WorkData) == 0x00A0);
static_assert(offsetof(FRigUnit_TwistBones, StartBone) == 0x0068);
static_assert(offsetof(FRigUnit_TwistBones, EndBone) == 0x0070);
static_assert(offsetof(FRigUnit_TwistBones, TwistAxis) == 0x0078);
static_assert(offsetof(FRigUnit_TwistBones, PoleAxis) == 0x0084);
static_assert(offsetof(FRigUnit_TwistBones, WorkData) == 0x00A0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJoint) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJoint) == 0x0070);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, PoleTarget) == 0x0078);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndEffector) == 0x0090);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointFKTransform) == 0x00D0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointFKTransform) == 0x0100);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointFKTransform) == 0x0130);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointIKTransform) == 0x0170);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointIKTransform) == 0x01A0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointIKTransform) == 0x01D0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Root) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PoleVector) == 0x0040);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Effector) == 0x0050);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PrimaryAxis) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxis) == 0x008C);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Elbow) == 0x00B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Root) == 0x0008);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, PoleVector) == 0x0014);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Effector) == 0x0020);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Elbow) == 0x0040);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemA) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemB) == 0x0074);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, EffectorItem) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, Effector) == 0x0090);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PrimaryAxis) == 0x00C0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxis) == 0x00CC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVector) == 0x00DC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorSpace) == 0x00EC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, DebugSettings) == 0x0120);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemAIndex) == 0x0160);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemBIndex) == 0x0174);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedEffectorItemIndex) == 0x0188);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedPoleVectorSpaceIndex) == 0x019C);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneA) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneB) == 0x0070);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, EffectorBone) == 0x0078);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, Effector) == 0x0080);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PrimaryAxis) == 0x00B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, SecondaryAxis) == 0x00BC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVector) == 0x00CC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorSpace) == 0x00DC);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, DebugSettings) == 0x0100);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneAIndex) == 0x0140);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneBIndex) == 0x0154);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedEffectorBoneIndex) == 0x0168);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedPoleVectorSpaceIndex) == 0x017C);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument1) == 0x0014);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument1) == 0x0014);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Result) == 0x0020);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Target) == 0x0008);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, position) == 0x0020);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Velocity) == 0x002C);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Acceleration) == 0x0038);
static_assert(offsetof(FRigUnit_VerletIntegrateVector, Point) == 0x0044);
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugTransformItemSpace, Space) == 0x004C);
static_assert(offsetof(FRigUnit_VisualDebugTransform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugTransform, BoneSpace) == 0x004C);
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugQuatItemSpace, Space) == 0x002C);
static_assert(offsetof(FRigUnit_VisualDebugQuat, Value) == 0x0010);
static_assert(offsetof(FRigUnit_VisualDebugQuat, BoneSpace) == 0x002C);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Value) == 0x0008);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Color) == 0x0018);
static_assert(offsetof(FRigUnit_VisualDebugVectorItemSpace, Space) == 0x0030);
static_assert(offsetof(FRigUnit_VisualDebugVector, Value) == 0x0008);
static_assert(offsetof(FRigUnit_VisualDebugVector, Color) == 0x0018);
static_assert(offsetof(FRigUnit_VisualDebugVector, BoneSpace) == 0x0030);
static_assert(offsetof(FRigUnit_SphereTraceWorld, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceWorld, End) == 0x0014);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitLocation) == 0x002C);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitNormal) == 0x0038);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Rotation) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Global) == 0x0020);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, Rotation) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, World) == 0x0020);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Location) == 0x0008);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Global) == 0x0014);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, Location) == 0x0008);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, World) == 0x0014);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Global) == 0x0040);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, World) == 0x0040);
