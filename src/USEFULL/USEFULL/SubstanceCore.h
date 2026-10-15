// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/SubstanceCore.SubstanceGraphInstance
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align 8 MaxSize: 0x0118
class USubstanceGraphInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	FString                                            PackageURL;                                                 // 0x0038   (0x0010)  
	class USubstanceInstanceFactory*                   ParentFactory;                                              // 0x0048   (0x0008)  
	TMap<uint32_t, class USubstanceImageInput*>        ImageSources;                                               // 0x0050   (0x0050)  
	class UMaterial*                                   CreatedMaterial;                                            // 0x00A0   (0x0008)  
	TMap<int32_t, FGuid>                               OutputTextureLinkData;                                      // 0x00A8   (0x0050)  
	bool                                               bIsFrozen;                                                  // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x00F9   (0x001F)  MISSED


	/// Functions
	// Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputString
	// void SetInputString(FString Identifier, FString Value);                                                                  // [0x4bc1878] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputInt
	// void SetInputInt(FString Identifier, TArray<int32_t>& InputValues);                                                      // [0x4bc16a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputImg
	// bool SetInputImg(FString InputName, class UObject* Value);                                                               // [0x4bc159c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputFloat
	// void SetInputFloat(FString Identifier, TArray<float>& InputValues);                                                      // [0x4bc1470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputColor
	// void SetInputColor(FString Identifier, FLinearColor& Color);                                                             // [0x4bc135c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.SetInputBool
	// void SetInputBool(FString Identifier, bool bool0);                                                                       // [0x4bc1254] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
	// FSubstanceIntInputDesc GetIntInputDesc(FString Identifier);                                                              // [0x4bc0718] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
	// FSubstanceInstanceDesc GetInstanceDesc();                                                                                // [0x4bc0614] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputType
	// TEnumAsByte<ESubstanceInputType> GetInputType(FString InputName);                                                        // [0x4bc0550] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputString
	// FString GetInputString(FString Identifier);                                                                              // [0x4bc035c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputNames
	// TArray<FString> GetInputNames();                                                                                         // [0x4bc0320] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputInt
	// TArray<int32_t> GetInputInt(FString Identifier);                                                                         // [0x4bc0150] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputFloat
	// TArray<float> GetInputFloat(FString Identifier);                                                                         // [0x4bc0074] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputColor
	// FLinearColor GetInputColor(FString Identifier);                                                                          // [0x4bbffa8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetInputBool
	// bool GetInputBool(FString Identifier);                                                                                   // [0x4bbfee4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
	// FSubstanceFloatInputDesc GetFloatInputDesc(FString Identifier);                                                          // [0x4bbfc74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SubstanceCore.SubstanceImageInput
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class USubstanceImageInput : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x58];                                      // 0x0028   (0x0058)  MISSED
	int32_t                                            CompressionLevelRGB;                                        // 0x0080   (0x0004)  
	int32_t                                            CompressionLevelAlpha;                                      // 0x0084   (0x0004)  
	int32_t                                            SizeX;                                                      // 0x0088   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x008C   (0x0004)  
	int32_t                                            NumComponents;                                              // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            SourceFilePath;                                             // 0x0098   (0x0010)  
	FString                                            SourceFileTimestamp;                                        // 0x00A8   (0x0010)  
	TArray<class USubstanceGraphInstance*>             Consumers;                                                  // 0x00B8   (0x0010)  
};

/// Class /Script/SubstanceCore.SubstanceInstanceFactory
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class USubstanceInstanceFactory : public UObject
{ 
public:
	TArray<class USubstanceGraphInstance*>             mGraphInstances;                                            // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
	FString                                            RelativeSourceFilePath;                                     // 0x0050   (0x0010)  
	FString                                            AbsoluteSourceFilePath;                                     // 0x0060   (0x0010)  
	FString                                            SourceFileTimestamp;                                        // 0x0070   (0x0010)  
	SDK_UNDEFINED(1,5193) /* TEnumAsByte<ESubstanceGenerationMode> */ __um(GenerationMode);                        // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/SubstanceCore.SubstanceSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class USubstanceSettings : public UObject
{ 
public:
	int32_t                                            MemoryBudgetMb;                                             // 0x0028   (0x0004)  
	int32_t                                            CPUCores;                                                   // 0x002C   (0x0004)  
	int32_t                                            AsyncLoadMipClip;                                           // 0x0030   (0x0004)  
	int32_t                                            MaxAsyncSubstancesRenderedPerFrame;                         // 0x0034   (0x0004)  
	SDK_UNDEFINED(1,5194) /* TEnumAsByte<ESubstanceGenerationMode> */ __um(DefaultGenerationMode);                 // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,5195) /* TEnumAsByte<ESubstanceEngineType> */ __um(SubstanceEngine);                           // 0x0039   (0x0001)  
	SDK_UNDEFINED(1,5196) /* TEnumAsByte<EDefaultSubstanceTextureSize> */ __um(DefaultSubstanceOutputSizeX);       // 0x003A   (0x0001)  
	SDK_UNDEFINED(1,5197) /* TEnumAsByte<EDefaultSubstanceTextureSize> */ __um(DefaultSubstanceOutputSizeY);       // 0x003B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/SubstanceCore.SubstanceTexture2D
/// Size: 0x0168 (360 bytes) (0x000110 - 0x000168) align 8 MaxSize: 0x0168
class USubstanceTexture2D : public UTexture2DDynamic
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0110   (0x0030)  MISSED
	class USubstanceGraphInstance*                     ParentInstance;                                             // 0x0140   (0x0008)  
	SDK_UNDEFINED(1,5198) /* TEnumAsByte<TextureAddress> */ __um(AddressX);                                        // 0x0148   (0x0001)  
	SDK_UNDEFINED(1,5199) /* TEnumAsByte<TextureAddress> */ __um(AddressY);                                        // 0x0149   (0x0001)  
	bool                                               bCooked;                                                    // 0x014A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1D];                                      // 0x014B   (0x001D)  MISSED


	/// Functions
	// Function /Script/SubstanceCore.SubstanceTexture2D.GetChannel
	// TEnumAsByte<ESubChannelType> GetChannel();                                                                               // [0x4bbfab4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SubstanceCore.SubstanceUtility
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USubstanceUtility : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SubstanceCore.SubstanceUtility.SyncRendering
	// void SyncRendering(class USubstanceGraphInstance* InstancesToRender);                                                    // [0x4bc1998] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
	// void SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int32_t Width, int32_t Height);         // [0x4bc0e58] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
	// void SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height); // [0x4bc0bf0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.ResetInputParameters
	// void ResetInputParameters(class USubstanceGraphInstance* GraphInstance);                                                 // [0x4bc0b54] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.GetSubstanceTextures
	// TArray<USubstanceTexture2D*> GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);                         // [0x4bc081c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.GetSubstances
	// TArray<USubstanceGraphInstance*> GetSubstances(class UMaterialInterface* Material);                                      // [0x4bc09b8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
	// float GetSubstanceLoadingProgress();                                                                                     // [0x4bc07fc] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.GetGraphName
	// FString GetGraphName(class USubstanceGraphInstance* GraphInstance);                                                      // [0x4bbfd58] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.GetFactoryName
	// FString GetFactoryName(class USubstanceGraphInstance* GraphInstance);                                                    // [0x4bbfad8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.EnableInstanceOutputs
	// void EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices); // [0x4bbf950] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.DuplicateGraphInstance
	// class USubstanceGraphInstance* DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance); // [0x4bbf7f0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.DisableInstanceOutputs
	// void DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int32_t> OutputIndices); // [0x4bbf690] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.CreateGraphInstance
	// class USubstanceGraphInstance* CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int32_t GraphDescIndex, FString InstanceName); // [0x4bbf4a4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
	// class USubstanceInstanceFactory* CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int32_t OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int32_t InputFactoryGraphIndex, TArray<FSubstanceConnection>& Connections); // [0x4bbf2bc] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.CopyInputParameters
	// void CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance); // [0x4bbf1d8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.ClearCache
	// void ClearCache();                                                                                                       // [0x4bbf1c0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/SubstanceCore.SubstanceUtility.AsyncRendering
	// void AsyncRendering(class USubstanceGraphInstance* InstancesToRender);                                                   // [0x4bbf118] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SubstanceCore.SubstanceInputDesc
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSubstanceInputDesc
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,5200) /* TEnumAsByte<ESubstanceInputType> */ __um(Type);                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/SubstanceCore.SubstanceInstanceDesc
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSubstanceInstanceDesc
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	TArray<FSubstanceInputDesc>                        Inputs;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/SubstanceCore.SubstanceFloatInputDesc
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FSubstanceFloatInputDesc : FSubstanceInputDesc
{ 
	TArray<float>                                      Min;                                                        // 0x0018   (0x0010)  
	TArray<float>                                      Max;                                                        // 0x0028   (0x0010)  
	TArray<float>                                      Default;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/SubstanceCore.SubstanceIntInputDesc
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FSubstanceIntInputDesc : FSubstanceInputDesc
{ 
	TArray<int32_t>                                    Min;                                                        // 0x0018   (0x0010)  
	TArray<int32_t>                                    Max;                                                        // 0x0028   (0x0010)  
	TArray<int32_t>                                    Default;                                                    // 0x0038   (0x0010)  
};

/// Struct /Script/SubstanceCore.SubstanceConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSubstanceConnection
{ 
	FString                                            OutputIdentifier;                                           // 0x0000   (0x0010)  
	FString                                            InputImageIdentifier;                                       // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(USubstanceGraphInstance) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(USubstanceImageInput) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(USubstanceInstanceFactory) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(USubstanceSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(USubstanceTexture2D) == 0x0168); // 360 bytes (0x000110 - 0x000168)
static_assert(sizeof(USubstanceUtility) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSubstanceInputDesc) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FSubstanceInstanceDesc) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSubstanceFloatInputDesc) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FSubstanceIntInputDesc) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FSubstanceConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(USubstanceGraphInstance, PackageURL) == 0x0038);
static_assert(offsetof(USubstanceGraphInstance, ParentFactory) == 0x0048);
static_assert(offsetof(USubstanceGraphInstance, ImageSources) == 0x0050);
static_assert(offsetof(USubstanceGraphInstance, CreatedMaterial) == 0x00A0);
static_assert(offsetof(USubstanceGraphInstance, OutputTextureLinkData) == 0x00A8);
static_assert(offsetof(USubstanceImageInput, SourceFilePath) == 0x0098);
static_assert(offsetof(USubstanceImageInput, SourceFileTimestamp) == 0x00A8);
static_assert(offsetof(USubstanceImageInput, Consumers) == 0x00B8);
static_assert(offsetof(USubstanceInstanceFactory, mGraphInstances) == 0x0028);
static_assert(offsetof(USubstanceInstanceFactory, RelativeSourceFilePath) == 0x0050);
static_assert(offsetof(USubstanceInstanceFactory, AbsoluteSourceFilePath) == 0x0060);
static_assert(offsetof(USubstanceInstanceFactory, SourceFileTimestamp) == 0x0070);
static_assert(offsetof(USubstanceTexture2D, ParentInstance) == 0x0140);
static_assert(offsetof(FSubstanceInputDesc, Name) == 0x0000);
static_assert(offsetof(FSubstanceInstanceDesc, Name) == 0x0000);
static_assert(offsetof(FSubstanceInstanceDesc, Inputs) == 0x0010);
static_assert(offsetof(FSubstanceFloatInputDesc, Min) == 0x0018);
static_assert(offsetof(FSubstanceFloatInputDesc, Max) == 0x0028);
static_assert(offsetof(FSubstanceFloatInputDesc, Default) == 0x0038);
static_assert(offsetof(FSubstanceIntInputDesc, Min) == 0x0018);
static_assert(offsetof(FSubstanceIntInputDesc, Max) == 0x0028);
static_assert(offsetof(FSubstanceIntInputDesc, Default) == 0x0038);
static_assert(offsetof(FSubstanceConnection, OutputIdentifier) == 0x0000);
static_assert(offsetof(FSubstanceConnection, InputImageIdentifier) == 0x0010);
