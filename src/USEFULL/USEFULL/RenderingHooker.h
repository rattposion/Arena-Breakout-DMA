// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/RenderingHooker.RenderingHookerSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URenderingHookerSettings : public UObject
{ 
public:
	TArray<FString>                                    Materials;                                                  // 0x0028   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(URenderingHookerSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(URenderingHookerSettings, Materials) == 0x0028);
