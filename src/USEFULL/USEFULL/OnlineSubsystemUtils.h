// generated header

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: OnlineSubsystem

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x1C48 (7240 bytes) (0x001BA8 - 0x001C48) align 8 MaxSize: 0x1C48
class UIpConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x1BA8   (0x0050)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1BF8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4C];                                      // 0x1BFC   (0x004C)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x0868 (2152 bytes) (0x0007F0 - 0x000868) align 8 MaxSize: 0x0868
class UIpNetDriver : public UNetDriver
{ 
public:
	bool                                               LogPortUnreach : 1;                                         // 0x07F0:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach : 1;                                 // 0x07F0:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x07F1   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x07F4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x07F8   (0x0010)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x0808   (0x0008)  
	double                                             MaxSecondsInReceiveForDS;                                   // 0x0810   (0x0008)  
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x0818   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x081C   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x0820   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x0824   (0x0004)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x0828   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x082C   (0x0004)  
	unsigned char                                      UnknownData02_7[0x38];                                      // 0x0830   (0x0038)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress); // [0x4eeb7a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // [0x4eeb454] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1656) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1657) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x4ee99bc] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x4ee9848] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1658) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1659) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0x4eebe98] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1660) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1661) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x4ee9b30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1662) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1663) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // [0x4eea900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1664) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1665) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x4eeaa84] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1666) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1667) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0x4eeac2c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1668) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1669) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0x4eeae70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1670) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1671) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// FString GetServerName(FBlueprintSessionResult& Result);                                                                  // [0x4eebca4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                    // [0x4eebba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                                  // [0x4eebaa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                              // [0x4eeb998] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0x4eeb034] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1672) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1673) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0x4eeb1b8] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UInAppPurchaseCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1674) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1675) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0048   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest); // [0x4ee9e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1676) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1677) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController); // [0x4eea5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController); // [0x4eea184] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0x4ee9cd8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UInAppPurchaseQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1678) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1679) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x4eea078] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1680) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1681) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x4ee9f6c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UInAppPurchaseRestoreCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1682) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1683) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x4eea4d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1684) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1685) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x4eea3dc] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0180 (384 bytes) (0x000030 - 0x000180) align 8 MaxSize: 0x0180
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1686) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1687) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x130];                                     // 0x0050   (0x0130)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0x4eed17c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32_t StatValue);              // [0x4eedf48] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1688) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1689) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName); // [0x4eecfac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1690) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1691) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName); // [0x4eed094] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1692) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1693) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);        // [0x4eed304] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0348 (840 bytes) (0x000318 - 0x000348) align 8 MaxSize: 0x0348
class AOnlineBeacon : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0318   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0320   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x0324   (0x0004)  
	class UNetDriver*                                  NetDriver;                                                  // 0x0328   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0330   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x03A8 (936 bytes) (0x000348 - 0x0003A8) align 8 MaxSize: 0x03A8
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                                // 0x0348   (0x0008)  
	class UNetConnection*                              BeaconConnection;                                           // 0x0350   (0x0008)  
	SDK_UNDEFINED(1,1694) /* EBeaconConnectionState */ __um(ConnectionState);                                      // 0x0358   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4F];                                      // 0x0359   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// void ClientOnConnected();                                                                                                // [0x469a868] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x0400 (1024 bytes) (0x000348 - 0x000400) align 8 MaxSize: 0x0400
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x0348   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x034C   (0x0004)  MISSED
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0350   (0x0010)  
	unsigned char                                      UnknownData01_7[0xA0];                                      // 0x0360   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0340 (832 bytes) (0x000318 - 0x000340) align 8 MaxSize: 0x0340
class AOnlineBeaconHostObject : public AActor
{ 
public:
	FString                                            BeaconTypeName;                                             // 0x0318   (0x0010)  
	class UClass*                                      ClientBeaconActorClass;                                     // 0x0328   (0x0008)  
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0330   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0128 (296 bytes) (0x000028 - 0x000128) align 8 MaxSize: 0x0128
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0xF8];                                      // 0x0030   (0x00F8)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPIELoginSettingsInternal
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Token;                                                      // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01E0 (480 bytes) (0x000028 - 0x0001E0) align 8 MaxSize: 0x01E0
class UOnlineSessionClient : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_8[0x1B0];                                     // 0x0028   (0x01B0)  MISSED
	bool                                               bIsFromInvite;                                              // 0x01D8   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x01DA   (0x0006)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueID;                                                   // 0x0000   (0x0028)  
	FString                                            ValidationStr;                                              // 0x0028   (0x0010)  
	FString                                            Platform;                                                   // 0x0038   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x004C   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0028)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0030   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x0468 (1128 bytes) (0x0003A8 - 0x000468) align 8 MaxSize: 0x0468
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x03A8   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x03D8   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x03E8   (0x0050)  
	SDK_UNDEFINED(1,1695) /* EClientRequestType */     __um(RequestType);                                          // 0x0438   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0439   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x043A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x043B   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                             // [0x4eedc30] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                         // [0x4eed938] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                   // [0x4eed7c8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                       // [0x4eed69c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0x4eece74] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0x2319bb8] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0x4eecd34] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0x4eecbdc] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x03B8 (952 bytes) (0x000340 - 0x0003B8) align 8 MaxSize: 0x03B8
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class UPartyBeaconState*                           State;                                                      // 0x0340   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0348   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x03A9   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x03AC   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x03B4   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UPartyBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)  
	bool                                               bEnableRemovalRequests;                                     // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1696) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1697) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0x4eed4ac] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1698) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1699) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController); // [0x4eedda0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0028)  
	FPlayerReservation                                 Spectator;                                                  // 0x0028   (0x0050)  
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x0490 (1168 bytes) (0x0003A8 - 0x000490) align 8 MaxSize: 0x0490
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x03A8   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x03D8   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x03E8   (0x0078)  
	SDK_UNDEFINED(1,1700) /* ESpectatorClientRequestType */ __um(RequestType);                                     // 0x0460   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0461   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x0462   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x0463   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);                                     // [0x4eedaa8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                         // [0x4eed69c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0x4eecf10] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0x1c6bd38] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                            // [0x4eecdd4] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                      // [0x4eecc7c] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x03B8 (952 bytes) (0x000340 - 0x0003B8) align 8 MaxSize: 0x03B8
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class USpectatorBeaconState*                       State;                                                      // 0x0340   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0348   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x03A9   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x03AC   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x03B4   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USpectatorBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x03A8 (936 bytes) (0x0003A8 - 0x0003A8) align 8 MaxSize: 0x03A8
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// void ServerPong();                                                                                                       // [0x4eed77c] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// void ClientPing();                                                                                                       // [0x4eecd1c] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0340 (832 bytes) (0x000340 - 0x000340) align 8 MaxSize: 0x0340
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object); // [0x4eee5d4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName); // [0x4eee3b4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex); // [0x4eee218] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn); // [0x4eee078] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x07A0 (1952 bytes) (0x000740 - 0x0007A0) align 16 MaxSize: 0x07A0
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0740   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// bool IsIdling();                                                                                                         // [0x4eee5b4] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_2[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseReceiptInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FOnlineProxyStoreOffer
{ 
	FString                                            OfferId;                                                    // 0x0000   (0x0010)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Description;                                                // 0x0028   (0x0018)  
	FText                                              LongDescription;                                            // 0x0040   (0x0018)  
	FText                                              RegularPriceText;                                           // 0x0058   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              PriceText;                                                  // 0x0078   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0098   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)  
	SDK_UNDEFINED(1,1701) /* EOnlineProxyStoreOfferDiscountType */ __um(DiscountType);                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TMap<FString, FString>                             DynamicFields;                                              // 0x00C0   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseRestoreInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseReceiptInfo
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FInAppPurchaseProductInfo2
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)  
	FString                                            DisplayName;                                                // 0x0020   (0x0010)  
	FString                                            DisplayDescription;                                         // 0x0030   (0x0010)  
	FString                                            DisplayPrice;                                               // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0058   (0x0010)  
	FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)  
	FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)  
	FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)  
	FString                                            ReceiptData;                                                // 0x0098   (0x0010)  
	TMap<FString, FString>                             DynamicFields;                                              // 0x00A8   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInAppPurchaseProductRequest2
{ 
	FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UIpConnection) == 0x1C48); // 7240 bytes (0x001BA8 - 0x001C48)
static_assert(sizeof(UIpNetDriver) == 0x0868); // 2152 bytes (0x0007F0 - 0x000868)
static_assert(sizeof(UAchievementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAchievementQueryCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAchievementWriteCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UConnectionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UCreateSessionCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UDestroySessionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UEndMatchCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UEndTurnCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UFindSessionsCallbackProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UFindTurnBasedMatchCallbackProxy) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UInAppPurchaseCallbackProxy) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UInAppPurchaseCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy2) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UJoinSessionCallbackProxy) == 0x0180); // 384 bytes (0x000030 - 0x000180)
static_assert(sizeof(ULeaderboardBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULeaderboardFlushCallbackProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(ULeaderboardQueryCallbackProxy) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(ULogoutCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(AOnlineBeacon) == 0x0348); // 840 bytes (0x000318 - 0x000348)
static_assert(sizeof(AOnlineBeaconClient) == 0x03A8); // 936 bytes (0x000348 - 0x0003A8)
static_assert(sizeof(AOnlineBeaconHost) == 0x0400); // 1024 bytes (0x000348 - 0x000400)
static_assert(sizeof(AOnlineBeaconHostObject) == 0x0340); // 832 bytes (0x000318 - 0x000340)
static_assert(sizeof(UOnlineEngineInterfaceImpl) == 0x0128); // 296 bytes (0x000028 - 0x000128)
static_assert(sizeof(FPIELoginSettingsInternal) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlinePIESettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UOnlineSessionClient) == 0x01E0); // 480 bytes (0x000028 - 0x0001E0)
static_assert(sizeof(FPlayerReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPartyReservation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(APartyBeaconClient) == 0x0468); // 1128 bytes (0x0003A8 - 0x000468)
static_assert(sizeof(APartyBeaconHost) == 0x03B8); // 952 bytes (0x000340 - 0x0003B8)
static_assert(sizeof(UPartyBeaconState) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UQuitMatchCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UShowLoginUICallbackProxy) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FSpectatorReservation) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(ASpectatorBeaconClient) == 0x0490); // 1168 bytes (0x0003A8 - 0x000490)
static_assert(sizeof(ASpectatorBeaconHost) == 0x03B8); // 952 bytes (0x000340 - 0x0003B8)
static_assert(sizeof(USpectatorBeaconState) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ATestBeaconClient) == 0x03A8); // 936 bytes (0x0003A8 - 0x0003A8)
static_assert(sizeof(ATestBeaconHost) == 0x0340); // 832 bytes (0x000340 - 0x000340)
static_assert(sizeof(UTurnBasedBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoipListenerSynthComponent) == 0x07A0); // 1952 bytes (0x000740 - 0x0007A0)
static_assert(sizeof(FBlueprintSessionResult) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FInAppPurchaseReceiptInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOnlineProxyStoreOffer) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FInAppPurchaseRestoreInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseReceiptInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseProductInfo2) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FInAppPurchaseProductRequest2) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(AOnlineBeacon, NetDriver) == 0x0328);
static_assert(offsetof(AOnlineBeaconClient, BeaconOwner) == 0x0348);
static_assert(offsetof(AOnlineBeaconClient, BeaconConnection) == 0x0350);
static_assert(offsetof(AOnlineBeaconHost, ClientActors) == 0x0350);
static_assert(offsetof(AOnlineBeaconHostObject, BeaconTypeName) == 0x0318);
static_assert(offsetof(AOnlineBeaconHostObject, ClientBeaconActorClass) == 0x0328);
static_assert(offsetof(AOnlineBeaconHostObject, ClientActors) == 0x0330);
static_assert(offsetof(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride) == 0x0028);
static_assert(offsetof(FPIELoginSettingsInternal, ID) == 0x0000);
static_assert(offsetof(FPIELoginSettingsInternal, Token) == 0x0010);
static_assert(offsetof(FPIELoginSettingsInternal, Type) == 0x0020);
static_assert(offsetof(FPIELoginSettingsInternal, TokenBytes) == 0x0030);
static_assert(offsetof(UOnlinePIESettings, Logins) == 0x0040);
static_assert(offsetof(FPlayerReservation, UniqueID) == 0x0000);
static_assert(offsetof(FPlayerReservation, ValidationStr) == 0x0028);
static_assert(offsetof(FPlayerReservation, Platform) == 0x0038);
static_assert(offsetof(FPartyReservation, PartyLeader) == 0x0008);
static_assert(offsetof(FPartyReservation, PartyMembers) == 0x0030);
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 0x0040);
static_assert(offsetof(APartyBeaconClient, DestSessionId) == 0x03D8);
static_assert(offsetof(APartyBeaconClient, PendingReservation) == 0x03E8);
static_assert(offsetof(APartyBeaconHost, State) == 0x0340);
static_assert(offsetof(UPartyBeaconState, SessionName) == 0x0028);
static_assert(offsetof(UPartyBeaconState, TeamAssignmentMethod) == 0x0040);
static_assert(offsetof(UPartyBeaconState, Reservations) == 0x0058);
static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0x0000);
static_assert(offsetof(FSpectatorReservation, Spectator) == 0x0028);
static_assert(offsetof(ASpectatorBeaconClient, DestSessionId) == 0x03D8);
static_assert(offsetof(ASpectatorBeaconClient, PendingReservation) == 0x03E8);
static_assert(offsetof(ASpectatorBeaconHost, State) == 0x0340);
static_assert(offsetof(USpectatorBeaconState, SessionName) == 0x0028);
static_assert(offsetof(USpectatorBeaconState, Reservations) == 0x0040);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FOnlineProxyStoreOffer, OfferId) == 0x0000);
static_assert(offsetof(FOnlineProxyStoreOffer, Title) == 0x0010);
static_assert(offsetof(FOnlineProxyStoreOffer, Description) == 0x0028);
static_assert(offsetof(FOnlineProxyStoreOffer, LongDescription) == 0x0040);
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPriceText) == 0x0058);
static_assert(offsetof(FOnlineProxyStoreOffer, PriceText) == 0x0078);
static_assert(offsetof(FOnlineProxyStoreOffer, CurrencyCode) == 0x0098);
static_assert(offsetof(FOnlineProxyStoreOffer, ReleaseDate) == 0x00A8);
static_assert(offsetof(FOnlineProxyStoreOffer, ExpirationDate) == 0x00B0);
static_assert(offsetof(FOnlineProxyStoreOffer, DynamicFields) == 0x00C0);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo2, TransactionIdentifier) == 0x0010);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayName) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayDescription) == 0x0030);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayPrice) == 0x0040);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencyCode) == 0x0058);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencySymbol) == 0x0068);
static_assert(offsetof(FInAppPurchaseProductInfo2, DecimalSeparator) == 0x0078);
static_assert(offsetof(FInAppPurchaseProductInfo2, GroupingSeparator) == 0x0088);
static_assert(offsetof(FInAppPurchaseProductInfo2, ReceiptData) == 0x0098);
static_assert(offsetof(FInAppPurchaseProductInfo2, DynamicFields) == 0x00A8);
static_assert(offsetof(FInAppPurchaseProductRequest2, ProductIdentifier) == 0x0000);
