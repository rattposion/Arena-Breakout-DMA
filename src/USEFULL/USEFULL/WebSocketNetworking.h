// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/WebSocketNetworking.WebSocketConnection
/// Size: 0x1BB8 (7096 bytes) (0x001BA8 - 0x001BB8) align 8 MaxSize: 0x1BB8
class UWebSocketConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1BA8   (0x0010)  MISSED
};

/// Class /Script/WebSocketNetworking.WebSocketNetDriver
/// Size: 0x0800 (2048 bytes) (0x0007F0 - 0x000800) align 8 MaxSize: 0x0800
class UWebSocketNetDriver : public UNetDriver
{ 
public:
	int32_t                                            WebSocketPort;                                              // 0x07F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x07F4   (0x000C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWebSocketConnection) == 0x1BB8); // 7096 bytes (0x001BA8 - 0x001BB8)
static_assert(sizeof(UWebSocketNetDriver) == 0x0800); // 2048 bytes (0x0007F0 - 0x000800)
