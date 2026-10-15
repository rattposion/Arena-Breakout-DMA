// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNetAnalyticsDataConfig
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNetAnalyticsAggregatorConfig : public UObject
{ 
public:
	TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0028   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FNetAnalyticsDataConfig) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0x0000);
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x0028);
