// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/WindowsDevicePermission.WindowsDevicePermissionHelper
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWindowsDevicePermissionHelper : public UObject
{ 
public:


	/// Functions
	// Function /Script/WindowsDevicePermission.WindowsDevicePermissionHelper.JumpPermissionPage
	// void JumpPermissionPage();                                                                                               // [0x1e39048] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WindowsDevicePermission.WindowsDevicePermissionHelper.GetDeviceId
	// FString GetDeviceId();                                                                                                   // [0x1e76778] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WindowsDevicePermission.WindowsDevicePermissionHelper.CheckNotificationPermission
	// bool CheckNotificationPermission();                                                                                      // [0x21793e8] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/WindowsDevicePermission.SystemLocalizationMsgTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FSystemLocalizationMsgTableRow : FTableRowBase
{ 
	uint32_t                                           MsgID;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            culture;                                                    // 0x0010   (0x0010)  
	FText                                              MsgText;                                                    // 0x0020   (0x0018)  
};

#pragma pack(pop)


static_assert(sizeof(UWindowsDevicePermissionHelper) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSystemLocalizationMsgTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(offsetof(FSystemLocalizationMsgTableRow, culture) == 0x0010);
static_assert(offsetof(FSystemLocalizationMsgTableRow, MsgText) == 0x0020);
