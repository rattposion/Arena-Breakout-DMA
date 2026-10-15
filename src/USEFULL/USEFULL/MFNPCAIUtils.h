// generated header

#pragma once
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

#pragma pack(push, 0x1)

/// Class /Script/MFNPCAIUtils.NPCAINavLinkProxy
/// Size: 0x0380 (896 bytes) (0x000368 - 0x000380) align 8 MaxSize: 0x0380
class ANPCAINavLinkProxy : public ANavLinkProxy
{ 
public:
	SDK_UNDEFINED(1,1514) /* ENavLinkType */           __um(LinkType);                                             // 0x0368   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0369   (0x0007)  MISSED
	uint64_t                                           PolyRef;                                                    // 0x0370   (0x0008)  
	int32_t                                            NodeIndex;                                                  // 0x0378   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x037C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MFNPCAIUtils.NPCAINavLinkProxy.OnSmartLinkReachedEvent
	// void OnSmartLinkReachedEvent(class AActor* Agent, FVector& Destination);                                                 // [0x6092c2c] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MFNPCAIUtils.NPCAINavLinkProxy.GetSmartLinkRightLocation
	// FVector GetSmartLinkRightLocation();                                                                                     // [0x6092bf8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAIUtils.NPCAINavLinkProxy.GetSmartLinkLeftLocation
	// FVector GetSmartLinkLeftLocation();                                                                                      // [0x6092bc4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MFNPCAIUtils.NPCAINavLinkProxy.GetSmartLinkComponent
	// class UNavLinkCustomComponent* GetSmartLinkComponent();                                                                  // [0x29b5ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MFNPCAIUtils.NPCAINavLinkProxyInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNPCAINavLinkProxyInterface : public UInterface
{ 
public:
};

/// Struct /Script/MFNPCAIUtils.MFGraphAStarPolicy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMFGraphAStarPolicy
{ 
	int32_t                                            NodePoolSize;                                               // 0x0000   (0x0004)  
	int32_t                                            OpenSetSize;                                                // 0x0004   (0x0004)  
	int32_t                                            MaxPathNodeCount;                                           // 0x0008   (0x0004)  
	bool                                               bReuseNodePoolInSubsequentSearches;                         // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/MFNPCAIUtils.NavLinkDetail
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNavLinkDetail
{ 
	uint32_t                                           LinkId;                                                     // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1515) /* ENavLinkType */           __um(LinkType);                                             // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              Length;                                                     // 0x0008   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(ANPCAINavLinkProxy) == 0x0380); // 896 bytes (0x000368 - 0x000380)
static_assert(sizeof(UNPCAINavLinkProxyInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMFGraphAStarPolicy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNavLinkDetail) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
