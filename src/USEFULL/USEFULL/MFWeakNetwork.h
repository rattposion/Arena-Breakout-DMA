// generated header

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: PacketHandler

#pragma pack(push, 0x1)

/// Class /Script/MFWeakNetwork.MFGCloudNetworkObserver
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UMFGCloudNetworkObserver : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/MFWeakNetwork.MFWeakNetworkEngineHandlerComponentFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFWeakNetworkEngineHandlerComponentFactory : public UEngineHandlerComponentFactory
{ 
public:
};

/// Class /Script/MFWeakNetwork.MFWeakNetworkIpNetDriver
/// Size: 0x0878 (2168 bytes) (0x000868 - 0x000878) align 8 MaxSize: 0x0878
class UMFWeakNetworkIpNetDriver : public UIpNetDriver
{ 
public:
	bool                                               UseReservedNetworkGUIDMap;                                  // 0x0868   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0869   (0x000F)  MISSED
};

/// Class /Script/MFWeakNetwork.MFWeakNetworkNetConnection
/// Size: 0x1CD0 (7376 bytes) (0x001C48 - 0x001CD0) align 8 MaxSize: 0x1CD0
class UMFWeakNetworkNetConnection : public UIpConnection
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x1C48   (0x0018)  MISSED
	float                                              ReconnectTimeForNotify;                                     // 0x1C60   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x1C64   (0x0014)  MISSED
	float                                              SingleReconnectTime;                                        // 0x1C78   (0x0004)  
	int32_t                                            SingleMaxReconnectCount;                                    // 0x1C7C   (0x0004)  
	float                                              MaxReconnectCount;                                          // 0x1C80   (0x0004)  
	float                                              ClientConnectionTimeout;                                    // 0x1C84   (0x0004)  
	bool                                               EnableInitSocketFix;                                        // 0x1C88   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x1C89   (0x0003)  MISSED
	float                                              SocketFixTime;                                              // 0x1C8C   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x1C90   (0x000C)  MISSED
	int32_t                                            CircularBitArrayNum;                                        // 0x1C9C   (0x0004)  
	unsigned char                                      UnknownData04_7[0x30];                                      // 0x1CA0   (0x0030)  MISSED


	/// Functions
	// Function /Script/MFWeakNetwork.MFWeakNetworkNetConnection.UseNewSocketReconnect
	// void UseNewSocketReconnect();                                                                                            // [0x60b2c74] Native|Public        
	// Function /Script/MFWeakNetwork.MFWeakNetworkNetConnection.PostLoadMap
	// void PostLoadMap(class UWorld* World);                                                                                   // [0x60b29a8] Native|Public        
};

/// Class /Script/MFWeakNetwork.MFWeakNetworkStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFWeakNetworkStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MFWeakNetwork.MFWeakNetworkStatics.UseNewSocketReconnect
	// void UseNewSocketReconnect(class UObject* WorldContextObject);                                                           // [0x60b2c8c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFWeakNetwork.MFWeakNetworkStatics.SetNotSendCloseBunchEnable
	// void SetNotSendCloseBunchEnable(class UObject* WorldContextObject, bool enable);                                         // [0x60b2b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFWeakNetwork.MFWeakNetworkStatics.SetAsyncLoad
	// void SetAsyncLoad(class UObject* WorldContextObject, bool bEnable);                                                      // [0x60b2a48] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFWeakNetwork.MFWeakNetworkStatics.IsPlayerReconnecting
	// bool IsPlayerReconnecting(class APlayerController* PC);                                                                  // [0x60b2910] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MFWeakNetwork.MFWeakNetworkStatics.GetSingleReconnectTime
	// float GetSingleReconnectTime(class UObject* WorldContextObject);                                                         // [0x269cd08] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFWeakNetwork.MFWeakNetworkStatics.GetSingleMaxReconnectCount
	// int32_t GetSingleMaxReconnectCount(class UObject* WorldContextObject);                                                   // [0x269c138] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MFWeakNetwork.MFWeakNetworkStatics.GetMaxReconnectCount
	// int32_t GetMaxReconnectCount(class UObject* WorldContextObject);                                                         // [0x269c224] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MFWeakNetwork.MFWeakNetworkTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFWeakNetworkTypes : public UObject
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UMFGCloudNetworkObserver) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMFWeakNetworkEngineHandlerComponentFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFWeakNetworkIpNetDriver) == 0x0878); // 2168 bytes (0x000868 - 0x000878)
static_assert(sizeof(UMFWeakNetworkNetConnection) == 0x1CD0); // 7376 bytes (0x001C48 - 0x001CD0)
static_assert(sizeof(UMFWeakNetworkStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMFWeakNetworkTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
