// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FacialAction.FacialActionConfig
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UFacialActionConfig : public UObject
{ 
public:
	bool                                               ImportPhoneme;                                              // 0x0028   (0x0001)  
	bool                                               ImportAudioSlice;                                           // 0x0029   (0x0001)  
	bool                                               ImportEmotionTag;                                           // 0x002A   (0x0001)  
	bool                                               ImportHeadMovement;                                         // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TWeakObjectPtr<class UFacialModelConfig*>          DefaultModelConfig;                                         // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Class /Script/FacialAction.FacialAnimationBacker
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFacialAnimationBacker : public UObject
{ 
public:


	/// Functions
	// Function /Script/FacialAction.FacialAnimationBacker.GenerateAnimationSequence
	// class UAnimSequence* GenerateAnimationSequence(FFacialGeneratorConfig& Config, class USkeleton* TargetSkeleton, class UFacialAnimationData* Data); // [0x4f74e4c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FacialAction.FacialAnimationBacker.GenerateAnimationCurves
	// class UFacialAnimationCurves* GenerateAnimationCurves(FFacialGeneratorConfig& Config, class USkeleton* TargetSkeleton, class UFacialAnimationData* Data); // [0x4f74cb4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FacialAction.FacialAnimationCurves
/// Size: 0x0138 (312 bytes) (0x000028 - 0x000138) align 8 MaxSize: 0x0138
class UFacialAnimationCurves : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x110];                                     // 0x0028   (0x0110)  MISSED


	/// Functions
	// Function /Script/FacialAction.FacialAnimationCurves.GenerateAUCurves
	// void GenerateAUCurves(FFacialGeneratorConfig& FacialConfig, class UFacialAnimationData* Data);                           // [0x4f74bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FacialAction.FacialPhonemeItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FFacialPhonemeItem
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	float                                              StartTime;                                                  // 0x0008   (0x0004)  
	float                                              EndTime;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/FacialAction.FacialAudioSlice
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFacialAudioSlice
{ 
	float                                              StartTime;                                                  // 0x0000   (0x0004)  
	float                                              EndTime;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/FacialAction.FacialHeadMovementPoint
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FFacialHeadMovementPoint
{ 
	float                                              Time;                                                       // 0x0000   (0x0004)  
	float                                              HeadPitch;                                                  // 0x0004   (0x0004)  
	float                                              HeadYaw;                                                    // 0x0008   (0x0004)  
	float                                              HeadRoll;                                                   // 0x000C   (0x0004)  
	float                                              BrowUp;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/FacialAction.FacialEmotionTag
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FFacialEmotionTag
{ 
	float                                              StartTime;                                                  // 0x0000   (0x0004)  
	float                                              EndTime;                                                    // 0x0004   (0x0004)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
};

/// Class /Script/FacialAction.FacialAnimationData
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFacialAnimationData : public UDataAsset
{ 
public:
	float                                              HeadMovementScale;                                          // 0x0030   (0x0004)  
	float                                              BrowMovementScale;                                          // 0x0034   (0x0004)  
	bool                                               GenerateBlink;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              DefaultTag;                                                 // 0x003C   (0x0008)  
	float                                              DefaultTagTagWeight;                                        // 0x0044   (0x0004)  
	TArray<FFacialPhonemeItem>                         Phonemes;                                                   // 0x0048   (0x0010)  
	TArray<FFacialAudioSlice>                          Slices;                                                     // 0x0058   (0x0010)  
	TArray<FFacialHeadMovementPoint>                   HeadMovements;                                              // 0x0068   (0x0010)  
	TArray<FFacialEmotionTag>                          OriginTags;                                                 // 0x0078   (0x0010)  
	TArray<FFacialEmotionTag>                          EmotionTags;                                                // 0x0088   (0x0010)  
	FString                                            SoundName;                                                  // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/FacialAction.FacialAnimationData.UpdateSlowTask
	// void UpdateSlowTask(float Progress, FText& Text);                                                                        // [0x4f750d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FacialAction.FacialAnimationData.UpdateAudioData
	// void UpdateAudioData(FString WavFilePath);                                                                               // [0x4f75030] Final|Native|Public|BlueprintCallable 
	// Function /Script/FacialAction.FacialAnimationData.ShouldCancelSlowTask
	// bool ShouldCancelSlowTask();                                                                                             // [0x4f75004] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FacialAction.FacialAnimationData.InitSlowTask
	// void InitSlowTask();                                                                                                     // [0x4f74fc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FacialAction.FacialAnimationData.GetDuration
	// float GetDuration();                                                                                                     // [0x4f74f98] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FacialAction.FacialAnimationData.EvalEmotionWeight
	// float EvalEmotionWeight(float Time, FName& emotionName, float FadeInOutTime);                                            // [0x4f74a64] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FacialAction.FacialAnimationData.EvalAudioWeight
	// float EvalAudioWeight(float Time, float FadeInOutTime);                                                                  // [0x4f74968] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FacialAction.FacialAnimationData.DestroySlowTask
	// void DestroySlowTask();                                                                                                  // [0x4f7494c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/FacialAction.FacialAnimMetaData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UFacialAnimMetaData : public UAnimMetaData
{ 
public:
	float                                              EyeSize;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/FacialAction.FacialGeneratorConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FFacialGeneratorConfig
{ 
	class UFacialModelConfig*                          modelConfig;                                                // 0x0000   (0x0008)  
	class UFacialSubModelConfig*                       subModelConfig;                                             // 0x0008   (0x0008)  
	bool                                               generateHeadCurves;                                         // 0x0010   (0x0001)  
	bool                                               generateBlinkCurves;                                        // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Class /Script/FacialAction.FacialBakeOption
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UFacialBakeOption : public UObject
{ 
public:
	SDK_UNDEFINED(1,4829) /* EFacialBakeType */        __um(FacialBakeType);                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FFacialGeneratorConfig                             Config;                                                     // 0x0030   (0x0018)  
};

/// Struct /Script/FacialAction.FacialModelParamsConfig
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FFacialModelParamsConfig
{ 
	float                                              AUChangeSpeedScale;                                         // 0x0000   (0x0004)  
	int32_t                                            LazyIteration;                                              // 0x0004   (0x0004)  
	int32_t                                            SpeedLimitIteration;                                        // 0x0008   (0x0004)  
	int32_t                                            TrembleIteration;                                           // 0x000C   (0x0004)  
	float                                              SmoothLerpPosition;                                         // 0x0010   (0x0004)  
	FName                                              AUJawOpen;                                                  // 0x0014   (0x0008)  
	float                                              JawOpenValue;                                               // 0x001C   (0x0004)  
	FName                                              AUJawOpen2;                                                 // 0x0020   (0x0008)  
	float                                              JawOpenValue2;                                              // 0x0028   (0x0004)  
	float                                              BreathTime;                                                 // 0x002C   (0x0004)  
	float                                              BreathValue;                                                // 0x0030   (0x0004)  
	float                                              MaxVisemeDensity;                                           // 0x0034   (0x0004)  
	float                                              FadeOutCurvePower;                                          // 0x0038   (0x0004)  
	float                                              FadeInCurvePower;                                           // 0x003C   (0x0004)  
	float                                              AUFadeOutTimeScale;                                         // 0x0040   (0x0004)  
	float                                              TimeOffset;                                                 // 0x0044   (0x0004)  
	TMap<FName, float>                                 AUChangeSpeed;                                              // 0x0048   (0x0050)  
	TMap<FName, float>                                 AUFadeOutTime;                                              // 0x0098   (0x0050)  
	TArray<FName>                                      DominantVisemes;                                            // 0x00E8   (0x0010)  
};

/// Struct /Script/FacialAction.FacialSpeedConfigItem
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFacialSpeedConfigItem
{ 
	float                                              changeSpeed;                                                // 0x0000   (0x0004)  
	float                                              FadeOutTime;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/FacialAction.FacialToleranceConfigItem
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FFacialToleranceConfigItem
{ 
	TMap<FName, float>                                 toleranceValues;                                            // 0x0000   (0x0050)  
};

/// Struct /Script/FacialAction.FacialVisemeMappingItems
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFacialVisemeMappingItems
{ 
	TArray<FName>                                      visemes;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/FacialAction.FacialEmotionWeightItem
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFacialEmotionWeightItem
{ 
	FName                                              emotionName;                                                // 0x0000   (0x0008)  
	float                                              Weight;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/FacialAction.FacialTagToEmotionItem
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FFacialTagToEmotionItem
{ 
	TArray<FFacialEmotionWeightItem>                   emotions;                                                   // 0x0000   (0x0010)  
	float                                              FadeInTime;                                                 // 0x0010   (0x0004)  
	float                                              FadeOutTime;                                                // 0x0014   (0x0004)  
};

/// Struct /Script/FacialAction.FacialEmotionPADItem
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FFacialEmotionPADItem
{ 
	TMap<FName, float>                                 Weights;                                                    // 0x0000   (0x0050)  
};

/// Class /Script/FacialAction.FacialModelConfig
/// Size: 0x0308 (776 bytes) (0x000030 - 0x000308) align 8 MaxSize: 0x0308
class UFacialModelConfig : public UDataAsset
{ 
public:
	FFacialModelParamsConfig                           paramsConfig;                                               // 0x0030   (0x00F8)  
	TMap<FName, FFacialSpeedConfigItem>                speedConfig;                                                // 0x0128   (0x0050)  
	TMap<FName, FFacialToleranceConfigItem>            toleranceConfig;                                            // 0x0178   (0x0050)  
	TMap<FName, FFacialVisemeMappingItems>             phonemeToVisemeMapping;                                     // 0x01C8   (0x0050)  
	TMap<FName, FName>                                 visemeRemapping;                                            // 0x0218   (0x0050)  
	TMap<FName, FFacialTagToEmotionItem>               tagToEmotionTable;                                          // 0x0268   (0x0050)  
	TMap<FName, FFacialEmotionPADItem>                 emotionPADTable;                                            // 0x02B8   (0x0050)  
};

/// Struct /Script/FacialAction.FacialControllerAttributeItem
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FFacialControllerAttributeItem
{ 
	FName                                              pose;                                                       // 0x0000   (0x0008)  
	float                                              Weight;                                                     // 0x0008   (0x0004)  
	float                                              jawOpen;                                                    // 0x000C   (0x0004)  
	float                                              blinkScale;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/FacialAction.FacialControllerItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFacialControllerItem
{ 
	FName                                              auGroup;                                                    // 0x0000   (0x0008)  
	FName                                              auGroupNeg;                                                 // 0x0008   (0x0008)  
	TArray<FFacialControllerAttributeItem>             Attributes;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/FacialAction.FacialWeightConfigItem
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FFacialWeightConfigItem
{ 
	TMap<FName, float>                                 weightValues;                                               // 0x0000   (0x0050)  
};

/// Class /Script/FacialAction.FacialSubModelConfig
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class UFacialSubModelConfig : public UDataAsset
{ 
public:
	TMap<FName, FFacialControllerItem>                 controllerConfig;                                           // 0x0030   (0x0050)  
	TMap<FName, FFacialWeightConfigItem>               lipWeightTable;                                             // 0x0080   (0x0050)  
	TMap<FName, FFacialWeightConfigItem>               emotionWeightTable;                                         // 0x00D0   (0x0050)  
};

/// Struct /Script/FacialAction.AnimNode_FacialAction
/// Size: 0x00D0 (208 bytes) (0x000010 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FAnimNode_FacialAction : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	class UFacialAnimationCurves*                      AuCurves;                                                   // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0028   (0x00A8)  MISSED
};

/// Struct /Script/FacialAction.BlinkCurveConfig
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FBlinkCurveConfig
{ 
	float                                              MinIntervalTime;                                            // 0x0000   (0x0004)  
	float                                              MaxIntervalTime;                                            // 0x0004   (0x0004)  
	float                                              FadeInTime;                                                 // 0x0008   (0x0004)  
	float                                              FadeOutTime;                                                // 0x000C   (0x0004)  
	float                                              MaxWeight;                                                  // 0x0010   (0x0004)  
	bool                                               AlwaysBlink;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UFacialActionConfig) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UFacialAnimationBacker) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFacialAnimationCurves) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(FFacialPhonemeItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFacialAudioSlice) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFacialHeadMovementPoint) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FFacialEmotionTag) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UFacialAnimationData) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(UFacialAnimMetaData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FFacialGeneratorConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UFacialBakeOption) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FFacialModelParamsConfig) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FFacialSpeedConfigItem) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFacialToleranceConfigItem) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FFacialVisemeMappingItems) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFacialEmotionWeightItem) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FFacialTagToEmotionItem) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFacialEmotionPADItem) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UFacialModelConfig) == 0x0308); // 776 bytes (0x000030 - 0x000308)
static_assert(sizeof(FFacialControllerAttributeItem) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FFacialControllerItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFacialWeightConfigItem) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UFacialSubModelConfig) == 0x0120); // 288 bytes (0x000030 - 0x000120)
static_assert(sizeof(FAnimNode_FacialAction) == 0x00D0); // 208 bytes (0x000010 - 0x0000D0)
static_assert(sizeof(FBlinkCurveConfig) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UFacialActionConfig, DefaultModelConfig) == 0x0030);
static_assert(offsetof(FFacialPhonemeItem, Name) == 0x0000);
static_assert(offsetof(FFacialEmotionTag, Name) == 0x0008);
static_assert(offsetof(UFacialAnimationData, DefaultTag) == 0x003C);
static_assert(offsetof(UFacialAnimationData, Phonemes) == 0x0048);
static_assert(offsetof(UFacialAnimationData, Slices) == 0x0058);
static_assert(offsetof(UFacialAnimationData, HeadMovements) == 0x0068);
static_assert(offsetof(UFacialAnimationData, OriginTags) == 0x0078);
static_assert(offsetof(UFacialAnimationData, EmotionTags) == 0x0088);
static_assert(offsetof(UFacialAnimationData, SoundName) == 0x0098);
static_assert(offsetof(FFacialGeneratorConfig, modelConfig) == 0x0000);
static_assert(offsetof(FFacialGeneratorConfig, subModelConfig) == 0x0008);
static_assert(offsetof(UFacialBakeOption, Config) == 0x0030);
static_assert(offsetof(FFacialModelParamsConfig, AUJawOpen) == 0x0014);
static_assert(offsetof(FFacialModelParamsConfig, AUJawOpen2) == 0x0020);
static_assert(offsetof(FFacialModelParamsConfig, AUChangeSpeed) == 0x0048);
static_assert(offsetof(FFacialModelParamsConfig, AUFadeOutTime) == 0x0098);
static_assert(offsetof(FFacialModelParamsConfig, DominantVisemes) == 0x00E8);
static_assert(offsetof(FFacialToleranceConfigItem, toleranceValues) == 0x0000);
static_assert(offsetof(FFacialVisemeMappingItems, visemes) == 0x0000);
static_assert(offsetof(FFacialEmotionWeightItem, emotionName) == 0x0000);
static_assert(offsetof(FFacialTagToEmotionItem, emotions) == 0x0000);
static_assert(offsetof(FFacialEmotionPADItem, Weights) == 0x0000);
static_assert(offsetof(UFacialModelConfig, paramsConfig) == 0x0030);
static_assert(offsetof(UFacialModelConfig, speedConfig) == 0x0128);
static_assert(offsetof(UFacialModelConfig, toleranceConfig) == 0x0178);
static_assert(offsetof(UFacialModelConfig, phonemeToVisemeMapping) == 0x01C8);
static_assert(offsetof(UFacialModelConfig, visemeRemapping) == 0x0218);
static_assert(offsetof(UFacialModelConfig, tagToEmotionTable) == 0x0268);
static_assert(offsetof(UFacialModelConfig, emotionPADTable) == 0x02B8);
static_assert(offsetof(FFacialControllerAttributeItem, pose) == 0x0000);
static_assert(offsetof(FFacialControllerItem, auGroup) == 0x0000);
static_assert(offsetof(FFacialControllerItem, auGroupNeg) == 0x0008);
static_assert(offsetof(FFacialControllerItem, Attributes) == 0x0010);
static_assert(offsetof(FFacialWeightConfigItem, weightValues) == 0x0000);
static_assert(offsetof(UFacialSubModelConfig, controllerConfig) == 0x0030);
static_assert(offsetof(UFacialSubModelConfig, lipWeightTable) == 0x0080);
static_assert(offsetof(UFacialSubModelConfig, emotionWeightTable) == 0x00D0);
static_assert(offsetof(FAnimNode_FacialAction, SourcePose) == 0x0010);
static_assert(offsetof(FAnimNode_FacialAction, AuCurves) == 0x0020);
