// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MFClimateRuntime

#pragma pack(push, 0x1)

/// Class /MFClimate/Lightning/Blueprints/BP_MFClimateHDLightningDirector.BP_MFClimateHDLightningDirector_C
/// Size: 0x0218 (536 bytes) (0x000218 - 0x000218) align 8 MaxSize: 0x0218
class UBP_MFClimateHDLightningDirector_C : public UMFClimateLightningDirectorComponent
{ 
public:
};

/// Class /MFClimate/Lightning/Blueprints/BP_MFClimateLightningChannel.BP_MFClimateLightningChannel_C
/// Size: 0x03B0 (944 bytes) (0x0003A8 - 0x0003B0) align 8 MaxSize: 0x03B0
class ABP_MFClimateLightningChannel_C : public AMFClimateLightningChannelActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A8   (0x0008)  


	/// Functions
	// Function /MFClimate/Lightning/Blueprints/BP_MFClimateLightningChannel.BP_MFClimateLightningChannel_C.ReceiveOnReturnStrike
	// void ReceiveOnReturnStrike(float NormalizedEnergy, FVector StartInKM, FVector EndInKM, int32_t InRandomSeed, FVector MockActorLocation, FVector MockActorScale); // [0x182d6bc] Event|Protected|BlueprintEvent 
	// Function /MFClimate/Lightning/Blueprints/BP_MFClimateLightningChannel.BP_MFClimateLightningChannel_C.ExecuteUbergraph_BP_MFClimateLightningChannel
	// void ExecuteUbergraph_BP_MFClimateLightningChannel(int32_t EntryPoint);                                                  // [0x182d6bc] Final                
};

#pragma pack(pop)


static_assert(sizeof(UBP_MFClimateHDLightningDirector_C) == 0x0218); // 536 bytes (0x000218 - 0x000218)
static_assert(sizeof(ABP_MFClimateLightningChannel_C) == 0x03B0); // 944 bytes (0x0003A8 - 0x0003B0)
static_assert(offsetof(ABP_MFClimateLightningChannel_C, UberGraphFrame) == 0x03A8);
