// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/MessagingRpc.MessageRpcUnhandled
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMessageRpcUnhandled
{ 
	FGuid                                              CallId;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MessagingRpc.MessageRpcProgress
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMessageRpcProgress
{ 
	float                                              Completion;                                                 // 0x0000   (0x0004)  
	FGuid                                              CallId;                                                     // 0x0004   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            StatusText;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/MessagingRpc.MessageRpcCancel
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMessageRpcCancel
{ 
	FGuid                                              CallId;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/MessagingRpc.RpcMessage
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRpcMessage
{ 
	FGuid                                              CallId;                                                     // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(FMessageRpcUnhandled) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMessageRpcProgress) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMessageRpcCancel) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRpcMessage) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(FMessageRpcUnhandled, CallId) == 0x0000);
static_assert(offsetof(FMessageRpcProgress, CallId) == 0x0004);
static_assert(offsetof(FMessageRpcProgress, StatusText) == 0x0018);
static_assert(offsetof(FMessageRpcCancel, CallId) == 0x0000);
static_assert(offsetof(FRpcMessage, CallId) == 0x0000);
