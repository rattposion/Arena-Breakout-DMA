// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/PixUILog.PxLogMgr
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPxLogMgr : public UObject
{ 
public:
	SDK_UNDEFINED(16,5148) /* FMulticastInlineDelegate */ __um(LogDelegate);                                       // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/PixUILog.PxLogMgr.PxLogToggleSwitchLevel
	// void PxLogToggleSwitchLevel(EPxLogLevels eLogLevel, bool beOpen);                                                        // [0x528ff34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUILog.PxLogMgr.PxLogToggleSwitchGroup
	// void PxLogToggleSwitchGroup(EPxLogGroups eLogGroup, bool beOpen);                                                        // [0x528fe44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUILog.PxLogMgr.PxLogEnable
	// void PxLogEnable(bool beEnable);                                                                                         // [0x528fdbc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUILog.PxLogMgr.Get
	// class UPxLogMgr* Get();                                                                                                  // [0x528fd98] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PixUILog.PxLogMgr.DispatchLog
	// void DispatchLog(EPxLogGroups eLogGroup, EPxLogLevels eLogLevel, FString strLogContent);                                 // [0x528fc64] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UPxLogMgr) == 0x0038); // 56 bytes (0x000028 - 0x000038)
