// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/MFPreload.ObjPool
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FObjPool
{ 
	TArray<class UObject*>                             ObjPool;                                                    // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/MFPreload.PreloadSubsystem
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UPreloadSubsystem : public UGameInstanceSubsystem
{ 
public:
	TMap<class UClass*, FObjPool>                      ObjPoolMap;                                                 // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0080   (0x0028)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FObjPool) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPreloadSubsystem) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(offsetof(FObjPool, ObjPool) == 0x0000);
static_assert(offsetof(UPreloadSubsystem, ObjPoolMap) == 0x0030);
