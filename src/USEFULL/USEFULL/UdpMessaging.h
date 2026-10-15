// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UUdpMessagingSettings : public UObject
{ 
public:
	bool                                               EnabledByDefault;                                           // 0x0028   (0x0001)  
	bool                                               EnableTransport;                                            // 0x0029   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x002A   (0x0001)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            UnicastEndpoint;                                            // 0x0030   (0x0010)  
	FString                                            MulticastEndpoint;                                          // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,5202) /* EUdpMessageFormat */      __um(MessageFormat);                                        // 0x0050   (0x0001)  
	char                                               MulticastTimeToLive;                                        // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FString>                                    StaticEndpoints;                                            // 0x0058   (0x0010)  
	bool                                               EnableTunnel;                                               // 0x0068   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            TunnelUnicastEndpoint;                                      // 0x0070   (0x0010)  
	FString                                            TunnelMulticastEndpoint;                                    // 0x0080   (0x0010)  
	TArray<FString>                                    RemoteTunnelEndpoints;                                      // 0x0090   (0x0010)  
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUdpMockMessage
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UUdpMessagingSettings) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(FUdpMockMessage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UUdpMessagingSettings, UnicastEndpoint) == 0x0030);
static_assert(offsetof(UUdpMessagingSettings, MulticastEndpoint) == 0x0040);
static_assert(offsetof(UUdpMessagingSettings, StaticEndpoints) == 0x0058);
static_assert(offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint) == 0x0070);
static_assert(offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint) == 0x0080);
static_assert(offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints) == 0x0090);
static_assert(offsetof(FUdpMockMessage, Data) == 0x0000);
