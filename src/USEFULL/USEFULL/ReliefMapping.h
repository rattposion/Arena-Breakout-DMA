// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/ReliefMapping.ReliefMappingGeneratorInput
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FReliefMappingGeneratorInput
{ 
	class UTexture2D*                                  HeightMap;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0008   (0x0038)  MISSED
};

/// Class /Script/ReliefMapping.ReliefMappingGeneratorRCSM
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 16 MaxSize: 0x00A0
class UReliefMappingGeneratorRCSM : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FReliefMappingGeneratorInput                       Input;                                                      // 0x0030   (0x0040)  
	class UTextureRenderTarget2D*                      Output;                                                     // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0078   (0x0028)  MISSED


	/// Functions
	// Function /Script/ReliefMapping.ReliefMappingGeneratorRCSM.Update
	// void Update();                                                                                                           // [0x506ff68] Final|Native|Public|BlueprintCallable 
	// Function /Script/ReliefMapping.ReliefMappingGeneratorRCSM.IsCompleted
	// bool IsCompleted();                                                                                                      // [0x506ff30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ReliefMapping.ReliefMappingGeneratorRCSM.Init
	// bool Init(FReliefMappingGeneratorInput& GeneratorInput, class UTextureRenderTarget2D* GeneratorOutput);                  // [0x506fe10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ReliefMapping.ReliefMappingGeneratorRCSM.GetProgress
	// int32_t GetProgress();                                                                                                   // [0x506fdec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ReliefMapping.ReliefMappingGenerator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UReliefMappingGenerator : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ReliefMapping.ReliefMappingGenerator.GetInputFromUserData
	// FReliefMappingGeneratorInput GetInputFromUserData(class UReliefMapUserData* Data);                                       // [0x506fd24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ReliefMapping.ReliefMappingGenerator.GetInputFromTestActor
	// FReliefMappingGeneratorInput GetInputFromTestActor(class AReliefMappingTestActor* TestActor);                            // [0x506fd24] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ReliefMapping.ReliefMappingGenerator.CreateTempUserData
	// class UReliefMapUserData* CreateTempUserData();                                                                          // [0x506fd00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ReliefMapping.ReliefMappingGenerator.CreateGeneratorRCSM
	// class UReliefMappingGeneratorRCSM* CreateGeneratorRCSM(FReliefMappingGeneratorInput& GeneratorInput, class UTextureRenderTarget2D* GeneratorOutput); // [0x506fbf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ReliefMapping.ReliefMappingTestActor
/// Size: 0x0330 (816 bytes) (0x000318 - 0x000330) align 8 MaxSize: 0x0330
class AReliefMappingTestActor : public AActor
{ 
public:
	class UTexture2D*                                  Input;                                                      // 0x0318   (0x0008)  
	SDK_UNDEFINED(1,5150) /* TEnumAsByte<EReliefMapping_LinearColorChannels> */ __um(InputChannel);                // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0321   (0x0007)  MISSED
	class UTextureRenderTarget2D*                      Output;                                                     // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/ReliefMapping.ReliefMappingTestActor.TestGenerateRelaxedConeMap
	// void TestGenerateRelaxedConeMap();                                                                                       // [0x506ff54] Final|Native|Public  
};

/// Class /Script/ReliefMapping.ReliefMapUserData
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UReliefMapUserData : public UAssetUserData
{ 
public:
	SDK_UNDEFINED(1,5151) /* TEnumAsByte<EReliefMapping_Type> */ __um(ReliefMapType);                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  HeightMap;                                                  // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
	SDK_UNDEFINED(1,5152) /* TEnumAsByte<EReliefMapping_LinearColorChannels> */ __um(HeightMapChannel);            // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,5153) /* TEnumAsByte<EReliefMapping_CommonSizes> */ __um(CommonResolutions);                   // 0x0059   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x005A   (0x0002)  MISSED
	FIntPoint                                          Resolution;                                                 // 0x005C   (0x0008)  
	int32_t                                            IterationBucketSize;                                        // 0x0064   (0x0004)  
	float                                              BlackPoint;                                                 // 0x0068   (0x0004)  
	float                                              WhitePoint;                                                 // 0x006C   (0x0004)  
	float                                              Floor;                                                      // 0x0070   (0x0004)  
	float                                              Ceiling;                                                    // 0x0074   (0x0004)  
	float                                              Bias;                                                       // 0x0078   (0x0004)  
	float                                              MinHeight;                                                  // 0x007C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FReliefMappingGeneratorInput) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UReliefMappingGeneratorRCSM) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UReliefMappingGenerator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AReliefMappingTestActor) == 0x0330); // 816 bytes (0x000318 - 0x000330)
static_assert(sizeof(UReliefMapUserData) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(offsetof(FReliefMappingGeneratorInput, HeightMap) == 0x0000);
static_assert(offsetof(UReliefMappingGeneratorRCSM, Input) == 0x0030);
static_assert(offsetof(UReliefMappingGeneratorRCSM, Output) == 0x0070);
static_assert(offsetof(AReliefMappingTestActor, Input) == 0x0318);
static_assert(offsetof(AReliefMappingTestActor, Output) == 0x0328);
static_assert(offsetof(UReliefMapUserData, HeightMap) == 0x0030);
static_assert(offsetof(UReliefMapUserData, Resolution) == 0x005C);
