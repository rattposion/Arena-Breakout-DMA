// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/UFix.UFixItem
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UUFixItem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/UFix.UFixManager
/// Size: 0x00E8 (232 bytes) (0x000028 - 0x0000E8) align 8 MaxSize: 0x00E8
class UUFixManager : public UObject
{ 
public:
	bool                                               UseBinaryLua;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0029   (0x0017)  MISSED
	TArray<class UUFixItem*>                           fixItemLis;                                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x98];                                      // 0x0050   (0x0098)  MISSED


	/// Functions
	// Function /Script/UFix.UFixManager.UpLoadUFix
	// void UpLoadUFix(FString svnVer, FString Path, FString devId);                                                            // [0x61e8310] Final|Native|Public  
	// Function /Script/UFix.UFixManager.UploadCosResultHandler
	// void UploadCosResultHandler(FString ErrorMsg, FString UploadFile);                                                       // [0x61e84b4] Final|Native|Private 
	// Function /Script/UFix.UFixManager.TryUFix
	// void TryUFix();                                                                                                          // [0x61e82fc] Final|Native|Public  
	// Function /Script/UFix.UFixManager.PathInProject2PakName
	// FString PathInProject2PakName(FString& fullAssetPath);                                                                   // [0x61e813c] Final|Native|Public|HasOutParms 
	// Function /Script/UFix.UFixManager.GetSuceedString
	// FString GetSuceedString();                                                                                               // [0x2311df4] Final|Native|Static|Public 
	// Function /Script/UFix.UFixManager.GetInstance
	// class UUFixManager* GetInstance();                                                                                       // [0x2114e48] Final|Native|Static|Public 
	// Function /Script/UFix.UFixManager.GetFailedString
	// FString GetFailedString();                                                                                               // [0x2311f44] Final|Native|Static|Public 
	// Function /Script/UFix.UFixManager.GetDeviceId
	// FString GetDeviceId();                                                                                                   // [0x19c0944] Final|Native|Public  
	// Function /Script/UFix.UFixManager.FindUFixItem
	// class UUFixItem* FindUFixItem(FString& fixFileName);                                                                     // [0x61e802c] Final|Native|Public|HasOutParms 
	// Function /Script/UFix.UFixManager.DeleteUFix
	// void DeleteUFix(FString svnVer, FString Path, FString devId);                                                            // [0x61e7e88] Final|Native|Public  
};

/// Struct /Script/UFix.UStructLog
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FUStructLog
{ 
	FName                                              SocketName;                                                 // 0x0000   (0x0008)  
	bool                                               bDisplaySocket;                                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FVector                                            UIStartOffest;                                              // 0x000C   (0x000C)  
	FVector                                            UIEndOffest;                                                // 0x0018   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              UIPartName;                                                 // 0x0028   (0x0018)  
	bool                                               bPlaceHolderInventory;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	uint32_t                                           FakeID;                                                     // 0x0044   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UUFixItem) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UUFixManager) == 0x00E8); // 232 bytes (0x000028 - 0x0000E8)
static_assert(sizeof(FUStructLog) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(UUFixManager, fixItemLis) == 0x0040);
static_assert(offsetof(FUStructLog, SocketName) == 0x0000);
static_assert(offsetof(FUStructLog, UIStartOffest) == 0x000C);
static_assert(offsetof(FUStructLog, UIEndOffest) == 0x0018);
static_assert(offsetof(FUStructLog, UIPartName) == 0x0028);
