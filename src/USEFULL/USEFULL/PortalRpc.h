// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/PortalRpc.PortalRpcServer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPortalRpcServer
{ 
	FString                                            ServerAddress;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/PortalRpc.PortalRpcLocateServer
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPortalRpcLocateServer
{ 
	FGuid                                              ProductId;                                                  // 0x0000   (0x0010)  
	FString                                            ProductVersion;                                             // 0x0010   (0x0010)  
	FString                                            HostMacAddress;                                             // 0x0020   (0x0010)  
	FString                                            HostUserId;                                                 // 0x0030   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FPortalRpcServer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPortalRpcLocateServer) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(FPortalRpcServer, ServerAddress) == 0x0000);
static_assert(offsetof(FPortalRpcLocateServer, ProductId) == 0x0000);
static_assert(offsetof(FPortalRpcLocateServer, ProductVersion) == 0x0010);
static_assert(offsetof(FPortalRpcLocateServer, HostMacAddress) == 0x0020);
static_assert(offsetof(FPortalRpcLocateServer, HostUserId) == 0x0030);
