// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFDsMonitor.DSMonitorSubsystem
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UDSMonitorSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/MFDsMonitor.DSMonitorSubsystem.GetTotalFrame
	// int64_t GetTotalFrame();                                                                                                 // [0x537d4a4] Final|Native|Public  
	// Function /Script/MFDsMonitor.DSMonitorSubsystem.GetSmallLags
	// int32_t GetSmallLags();                                                                                                  // [0x537d490] Final|Native|Public  
	// Function /Script/MFDsMonitor.DSMonitorSubsystem.GetNormalLags
	// int32_t GetNormalLags();                                                                                                 // [0x29adbb8] Final|Native|Public  
	// Function /Script/MFDsMonitor.DSMonitorSubsystem.GetEnormousLags
	// int32_t GetEnormousLags();                                                                                               // [0x537d47c] Final|Native|Public  
	// Function /Script/MFDsMonitor.DSMonitorSubsystem.GetBigLags
	// int32_t GetBigLags();                                                                                                    // [0x537d468] Final|Native|Public  
	// Function /Script/MFDsMonitor.DSMonitorSubsystem.Get
	// class UDSMonitorSubsystem* Get(class UObject* WorldContextObject);                                                       // [0x537d3d0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UDSMonitorSubsystem) == 0x0070); // 112 bytes (0x000030 - 0x000070)
