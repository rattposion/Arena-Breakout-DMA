// generated header

#pragma once
/// dependency: BasicType

#pragma pack(push, 0x1)

/// Struct /Script/PortalServices.PortalUserIsEntitledToItemResult
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPortalUserIsEntitledToItemResult
{ 
	FString                                            ItemId;                                                     // 0x0000   (0x0010)  
	bool                                               IsEntitled;                                                 // 0x0010   (0x0001)  
	SDK_UNDEFINED(1,5149) /* EEntitlementCacheLevelRetrieved */ __um(RetrievedFromCacheLevel);                     // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/PortalServices.PortalUserDetails
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FPortalUserDetails
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FText                                              Email;                                                      // 0x0018   (0x0018)  
	FText                                              RealName;                                                   // 0x0030   (0x0018)  
	bool                                               IsSignedIn;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FPortalUserIsEntitledToItemResult) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPortalUserDetails) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(offsetof(FPortalUserIsEntitledToItemResult, ItemId) == 0x0000);
static_assert(offsetof(FPortalUserDetails, DisplayName) == 0x0000);
static_assert(offsetof(FPortalUserDetails, Email) == 0x0018);
static_assert(offsetof(FPortalUserDetails, RealName) == 0x0030);
