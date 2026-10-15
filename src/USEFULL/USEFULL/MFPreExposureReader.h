// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Class /Script/MFPreExposureReader.MFPreExposureReadSystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMFPreExposureReadSystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0030   (0x0020)  MISSED
	class UNiagaraParameterCollection*                 NPC;                                                        // 0x0050   (0x0008)  
	class UNiagaraParameterCollectionInstance*         NPCI;                                                       // 0x0058   (0x0008)  


	/// Functions
	// Function /Script/MFPreExposureReader.MFPreExposureReadSystem.GetMainViewPreExposure
	// float GetMainViewPreExposure();                                                                                          // [0x29adbcc] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(UMFPreExposureReadSystem) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(offsetof(UMFPreExposureReadSystem, NPC) == 0x0050);
static_assert(offsetof(UMFPreExposureReadSystem, NPCI) == 0x0058);
