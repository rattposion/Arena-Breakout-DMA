// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class ULevelVariantSets : public UObject
{ 
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                              // 0x0028   (0x0008)  
	TArray<class UVariantSet*>                         VariantSets;                                                // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                          // [0x50ca85c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                               // [0x50ca7b4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                             // [0x29ae124] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align 8 MaxSize: 0x0330
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0318   (0x0018)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                                 // [0x50cb754] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                              // [0x50cb62c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                        // [0x50cad68] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                                // [0x50ca2dc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCapturedPropSegment
{ 
	FString                                            PropertyName;                                               // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ComponentName;                                              // 0x0018   (0x0010)  
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x01B8 (440 bytes) (0x000028 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	SDK_UNDEFINED(16,5205) /* TArray<Properties> */    __um(Properties);                                           // 0x0088   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x0098   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00A8   (0x0010)  
	FString                                            FullDisplayString;                                          // 0x00B8   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00C8   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x00D0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0130   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0138   (0x0010)  
	SDK_UNDEFINED(1,5206) /* EPropertyValueCategory */ __um(PropCategory);                                         // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_7[0x6F];                                      // 0x0149   (0x006F)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                                  // [0x50ca920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                              // [0x50ca51c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                          // [0x50ca24c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x01B8 (440 bytes) (0x0001B8 - 0x0001B8) align 8 MaxSize: 0x01B8
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0340 (832 bytes) (0x000318 - 0x000340) align 8 MaxSize: 0x0340
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0318   (0x0018)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x0330   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x0338   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x033C   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                                  // [0x50ca95c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                             // [0x50ca58c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                            // [0x50ca3c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FVariantDependency
{ 
	TWeakObjectPtr<class UVariantSet*>                 VariantSet;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	TWeakObjectPtr<class UVariant*>                    Variant;                                                    // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0030   (0x0020)  MISSED
	bool                                               bEnabled;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0028   (0x0010)  
	FText                                              DisplayText;                                                // 0x0038   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0068   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                         // [0x50cb618] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0x50cb4c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0x50cb2a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x50cae04] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0x50cab10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t Index, FVariantDependency& Dependency);                                                       // [0x50ca9f4] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                         // [0x50ca938] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x50ca5a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                          // [0x50ca48c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                            // [0x50ca39c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                                  // [0x50ca388] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x50ca18c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);               // [0x50c9df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t Index);                                                                         // [0x50c9d28] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                              // [0x50c9c40] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t Index);                                                                                    // [0x50c9ba8] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                   // [0x50c9ae4] Final|Native|Public|HasOutParms 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UVariantObjectBinding : public UObject
{ 
public:
	FString                                            CachedActorLabel;                                           // 0x0028   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0038   (0x0018)  
	TLazyObjectPtr<class UObject*>                     LazyObjectPtr;                                              // 0x0050   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0070   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0080   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UVariantSet : public UObject
{ 
public:
	FText                                              DisplayText;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0040   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0060   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0070   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                            // [0x50cb570] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                             // [0x50cb3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                   // [0x1e39048] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x50cb054] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                              // [0x50cac3c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                   // [0x50ca67c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                        // [0x50ca5d4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                        // [0x50ca5bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                    // [0x50ca4d4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                                // [0x50ca3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x50ca1ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(ULevelVariantSets) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(ALevelVariantSetsActor) == 0x0330); // 816 bytes (0x000318 - 0x000330)
static_assert(sizeof(ULevelVariantSetsFunctionDirector) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FCapturedPropSegment) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UPropertyValue) == 0x01B8); // 440 bytes (0x000028 - 0x0001B8)
static_assert(sizeof(UPropertyValueTransform) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueVisibility) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueColor) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueMaterial) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueOption) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(UPropertyValueSoftObject) == 0x01B8); // 440 bytes (0x0001B8 - 0x0001B8)
static_assert(sizeof(ASwitchActor) == 0x0340); // 832 bytes (0x000318 - 0x000340)
static_assert(sizeof(FVariantDependency) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UVariant) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FFunctionCaller) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UVariantObjectBinding) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UVariantSet) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(ULevelVariantSets, DirectorClass) == 0x0028);
static_assert(offsetof(ULevelVariantSets, VariantSets) == 0x0030);
static_assert(offsetof(ALevelVariantSetsActor, LevelVariantSets) == 0x0318);
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x0000);
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x0018);
static_assert(offsetof(UPropertyValue, PropertyIndices) == 0x0098);
static_assert(offsetof(UPropertyValue, CapturedPropSegments) == 0x00A8);
static_assert(offsetof(UPropertyValue, FullDisplayString) == 0x00B8);
static_assert(offsetof(UPropertyValue, PropertySetterName) == 0x00C8);
static_assert(offsetof(UPropertyValue, PropertySetterParameterDefaults) == 0x00D0);
static_assert(offsetof(UPropertyValue, LeafPropertyClass) == 0x0128);
static_assert(offsetof(UPropertyValue, ValueBytes) == 0x0138);
static_assert(offsetof(ASwitchActor, SceneComponent) == 0x0330);
static_assert(offsetof(FVariantDependency, VariantSet) == 0x0000);
static_assert(offsetof(FVariantDependency, Variant) == 0x0028);
static_assert(offsetof(UVariant, Dependencies) == 0x0028);
static_assert(offsetof(UVariant, DisplayText) == 0x0038);
static_assert(offsetof(UVariant, ObjectBindings) == 0x0068);
static_assert(offsetof(UVariant, Thumbnail) == 0x0078);
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x0000);
static_assert(offsetof(UVariantObjectBinding, CachedActorLabel) == 0x0028);
static_assert(offsetof(UVariantObjectBinding, ObjectPtr) == 0x0038);
static_assert(offsetof(UVariantObjectBinding, LazyObjectPtr) == 0x0050);
static_assert(offsetof(UVariantObjectBinding, CapturedProperties) == 0x0070);
static_assert(offsetof(UVariantObjectBinding, FunctionCallers) == 0x0080);
static_assert(offsetof(UVariantSet, DisplayText) == 0x0028);
static_assert(offsetof(UVariantSet, Variants) == 0x0060);
static_assert(offsetof(UVariantSet, Thumbnail) == 0x0070);
