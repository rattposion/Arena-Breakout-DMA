// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/InputCore.InputCoreTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInputCoreTypes : public UObject
{ 
public:
};

/// Struct /Script/InputCore.Key
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FKey
{ 
	FName                                              KeyName;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UInputCoreTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FKey, KeyName) == 0x0000);
