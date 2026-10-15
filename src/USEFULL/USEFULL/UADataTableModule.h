// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/UADataTableModule.WxGameShareRewardConf
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWxGameShareRewardConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.WxGameShareConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FWxGameShareConfTableRow : FTableRowBase
{ 
	uint32_t                                           sys_id;                                                     // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           act_id;                                                     // 0x0010   (0x0004)  
	uint32_t                                           content_id;                                                 // 0x0014   (0x0004)  
	TArray<FWxGameShareRewardConf>                     share_reward;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeeklyTakeOutItemConfTableRow
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FWeeklyTakeOutItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           target_id;                                                  // 0x000C   (0x0004)  
	TArray<uint32_t>                                   mode_ids;                                                   // 0x0010   (0x0010)  
	TArray<uint32_t>                                   map_ids;                                                    // 0x0020   (0x0010)  
	TArray<uint32_t>                                   rule_ids;                                                   // 0x0030   (0x0010)  
	TArray<uint32_t>                                   difficulties;                                               // 0x0040   (0x0010)  
	uint32_t                                           instigator_charactertype;                                   // 0x0050   (0x0004)  
	uint32_t                                           CountDownStartSeconds;                                      // 0x0054   (0x0004)  
	uint32_t                                           ChangeValueToCount;                                         // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<uint32_t>                                   TakeOutItemIDs;                                             // 0x0060   (0x0010)  
	uint32_t                                           Istakein;                                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              instigator_stayvolume;                                      // 0x0078   (0x0018)  
	uint32_t                                           EquipItemType;                                              // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<uint32_t>                                   EquipItemIDs;                                               // 0x0098   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeeklyKillTargetConfTableRow
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FWeeklyKillTargetConfTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           target_id;                                                  // 0x000C   (0x0004)  
	TArray<uint32_t>                                   mode_ids;                                                   // 0x0010   (0x0010)  
	TArray<uint32_t>                                   map_ids;                                                    // 0x0020   (0x0010)  
	TArray<uint32_t>                                   rule_ids;                                                   // 0x0030   (0x0010)  
	TArray<uint32_t>                                   difficulties;                                               // 0x0040   (0x0010)  
	uint32_t                                           instigator_charactertype;                                   // 0x0050   (0x0004)  
	uint32_t                                           CountDownStartSeconds;                                      // 0x0054   (0x0004)  
	TArray<uint32_t>                                   killedplayer_charactertypes;                                // 0x0058   (0x0010)  
	FText                                              instigator_stayvolume;                                      // 0x0068   (0x0018)  
	FText                                              killedplayer_stayvolume;                                    // 0x0080   (0x0018)  
	TArray<uint32_t>                                   KillerWeaponIDs;                                            // 0x0098   (0x0010)  
	TArray<uint32_t>                                   RequireAdaptersIDs;                                         // 0x00A8   (0x0010)  
	uint32_t                                           EquipItemType;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<uint32_t>                                   EquipItemIDs;                                               // 0x00C0   (0x0010)  
	uint32_t                                           MinDistance;                                                // 0x00D0   (0x0004)  
	uint32_t                                           MaxDistance;                                                // 0x00D4   (0x0004)  
	TArray<uint32_t>                                   EnduranceTypes;                                             // 0x00D8   (0x0010)  
	uint32_t                                           WeaponZoomTpye;                                             // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.WeeklyCollectItemConfTableRow
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FWeeklyCollectItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           target_id;                                                  // 0x000C   (0x0004)  
	TArray<uint32_t>                                   mode_ids;                                                   // 0x0010   (0x0010)  
	TArray<uint32_t>                                   map_ids;                                                    // 0x0020   (0x0010)  
	TArray<uint32_t>                                   rule_ids;                                                   // 0x0030   (0x0010)  
	TArray<uint32_t>                                   difficulties;                                               // 0x0040   (0x0010)  
	uint32_t                                           instigator_charactertype;                                   // 0x0050   (0x0004)  
	uint32_t                                           CountDownStartSeconds;                                      // 0x0054   (0x0004)  
	uint32_t                                           CollectionType;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<uint32_t>                                   CollectItemIDs;                                             // 0x0060   (0x0010)  
	uint32_t                                           Istakein;                                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              instigator_stayvolume;                                      // 0x0078   (0x0018)  
	uint32_t                                           EquipItemType;                                              // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<uint32_t>                                   EquipItemIDs;                                               // 0x0098   (0x0010)  
};

/// Struct /Script/UADataTableModule.AwardItemConf
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAwardItemConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0008   (0x0004)  
	uint32_t                                           is_faction;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.WeeklyActivityAwardConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FWeeklyActivityAwardConfTableRow : FTableRowBase
{ 
	uint32_t                                           award_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           season_id;                                                  // 0x000C   (0x0004)  
	uint32_t                                           daily_active_point;                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FAwardItemConf>                             awards;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponSortCfgTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FWeaponSortCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           WeaponType;                                                 // 0x000C   (0x0004)  
	uint32_t                                           WeaponItemID;                                               // 0x0010   (0x0004)  
	uint32_t                                           WeaponIndex;                                                // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.SkinMaterialInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSkinMaterialInfo
{ 
	uint32_t                                           Index;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoftObjectPath                                    OverrideMaterial;                                           // 0x0008   (0x0018)  
};

/// Struct /Script/UADataTableModule.InvAnimationInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInvAnimationInfo
{ 
	uint32_t                                           AnimType;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoftObjectPath                                    OverrideAnimation;                                          // 0x0008   (0x0018)  
};

/// Struct /Script/UADataTableModule.AdditionMeshAnimInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FAdditionMeshAnimInfo
{ 
	uint32_t                                           AnimType;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoftObjectPath                                    SkeletalMeshPath;                                           // 0x0008   (0x0018)  
	bool                                               bAttachToCharacter;                                         // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              AttachSocketName;                                           // 0x0024   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FSoftClassPath                                     AdditionMeshAnimInstance;                                   // 0x0030   (0x0018)  
	FSoftObjectPath                                    AdditionMeshAnim;                                           // 0x0048   (0x0018)  
};

/// Struct /Script/UADataTableModule.WeaponSkinConfTableRow
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 8 MaxSize: 0x0160
struct FWeaponSkinConfTableRow : FTableRowBase
{ 
	uint32_t                                           SkinID;                                                     // 0x0008   (0x0004)  
	int32_t                                            ItemId;                                                     // 0x000C   (0x0004)  
	int32_t                                            SkinAssemble;                                               // 0x0010   (0x0004)  
	bool                                               IsStaticMesh;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FSoftObjectPath                                    MeshPathGame;                                               // 0x0018   (0x0018)  
	FSoftObjectPath                                    MeshPathLobby;                                              // 0x0030   (0x0018)  
	FSoftObjectPath                                    MeshPathRollup;                                             // 0x0048   (0x0018)  
	TArray<FSkinMaterialInfo>                          OverrideMaterialsGame;                                      // 0x0060   (0x0010)  
	TArray<FSkinMaterialInfo>                          OverrideMaterialsLobby;                                     // 0x0070   (0x0010)  
	TArray<FSkinMaterialInfo>                          OverrideMaterials_Rollup;                                   // 0x0080   (0x0010)  
	FSoftObjectPath                                    OverrideCheckWeaponHand;                                    // 0x0090   (0x0018)  
	FSoftObjectPath                                    OverrideCheckWeaponGun;                                     // 0x00A8   (0x0018)  
	FSoftClassPath                                     OverrideAnimSet;                                            // 0x00C0   (0x0018)  
	FSoftClassPath                                     OverrideInvAnimBP;                                          // 0x00D8   (0x0018)  
	TArray<FInvAnimationInfo>                          OverrideInvAnimation;                                       // 0x00F0   (0x0010)  
	TArray<FAdditionMeshAnimInfo>                      AdditionMeshAnimInfos;                                      // 0x0100   (0x0010)  
	bool                                               IsSwitchSexuality;                                          // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	FSoftObjectPath                                    MeshPathGame_Female;                                        // 0x0118   (0x0018)  
	FSoftObjectPath                                    MeshPathLobby_Female;                                       // 0x0130   (0x0018)  
	FSoftClassPath                                     CueClass;                                                   // 0x0148   (0x0018)  
};

/// Struct /Script/UADataTableModule.WeaponSocket
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FWeaponSocket
{ 
	FString                                            SocketName;                                                 // 0x0000   (0x0010)  
	FText                                              PartName;                                                   // 0x0010   (0x0018)  
	TArray<FString>                                    SupportAdapterTagList;                                      // 0x0028   (0x0010)  
	TArray<uint64_t>                                   masks;                                                      // 0x0038   (0x0010)  
	TArray<uint64_t>                                   Types;                                                      // 0x0048   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponTag
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWeaponTag
{ 
	TArray<uint64_t>                                   masks;                                                      // 0x0000   (0x0010)  
	TArray<uint64_t>                                   Types;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponRuleWDCFTableRow
/// Size: 0x01C0 (448 bytes) (0x000008 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FWeaponRuleWDCFTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              BulletSize;                                                 // 0x0010   (0x0018)  
	uint32_t                                           AmmoCapacity;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<uint32_t>                                   size_ext;                                                   // 0x0030   (0x0010)  
	uint32_t                                           CanFold;                                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            AssembleTag;                                                // 0x0048   (0x0010)  
	FString                                            SubAssembleTag;                                             // 0x0058   (0x0010)  
	uint64_t                                           slot_type;                                                  // 0x0068   (0x0008)  
	uint64_t                                           sub_slot_type;                                              // 0x0070   (0x0008)  
	TArray<FWeaponSocket>                              Sockets;                                                    // 0x0078   (0x0010)  
	TArray<uint32_t>                                   ConflictedItemIds;                                          // 0x0088   (0x0010)  
	float                                              Engonomics;                                                 // 0x0098   (0x0004)  
	float                                              Accuracy;                                                   // 0x009C   (0x0004)  
	float                                              MoaScale;                                                   // 0x00A0   (0x0004)  
	float                                              AdsMoaX;                                                    // 0x00A4   (0x0004)  
	float                                              AdsMoaY;                                                    // 0x00A8   (0x0004)  
	float                                              HorizontalRecoil;                                           // 0x00AC   (0x0004)  
	float                                              VerticalRecoil;                                             // 0x00B0   (0x0004)  
	float                                              SightRange;                                                 // 0x00B4   (0x0004)  
	float                                              MuzzleVelocity;                                             // 0x00B8   (0x0004)  
	uint32_t                                           RaceStrategy;                                               // 0x00BC   (0x0004)  
	float                                              MaxCount;                                                   // 0x00C0   (0x0004)  
	float                                              Recoil;                                                     // 0x00C4   (0x0004)  
	float                                              ZeroDropDistance;                                           // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FText                                              TypesOfFire;                                                // 0x00D0   (0x0018)  
	FText                                              Caliber;                                                    // 0x00E8   (0x0018)  
	FString                                            FireRate;                                                   // 0x0100   (0x0010)  
	FString                                            EffectiveDistance;                                          // 0x0110   (0x0010)  
	TArray<FString>                                    FireRequireTags;                                            // 0x0120   (0x0010)  
	TArray<FWeaponTag>                                 fi_require_tags;                                            // 0x0130   (0x0010)  
	TArray<FString>                                    AdapterFireRequireTags;                                     // 0x0140   (0x0010)  
	TArray<FWeaponTag>                                 ad_require_tags;                                            // 0x0150   (0x0010)  
	FString                                            FireRequireTagsDecrease;                                    // 0x0160   (0x0010)  
	TArray<FWeaponTag>                                 de_require_tags;                                            // 0x0170   (0x0010)  
	int8_t                                             ShouldReloadByOne;                                          // 0x0180   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0181   (0x0007)  MISSED
	FString                                            AccessoryType;                                              // 0x0188   (0x0010)  
	float                                              AdapterAdjustDamage;                                        // 0x0198   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	FString                                            Scope;                                                      // 0x01A0   (0x0010)  
	float                                              ReloadSpeedRatio;                                           // 0x01B0   (0x0004)  
	float                                              ADSMoveSpeedRatio;                                          // 0x01B4   (0x0004)  
	float                                              MoveSpeedRatio;                                             // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.WeaponRuleWDCTableRow
/// Size: 0x01C0 (448 bytes) (0x000008 - 0x0001C0) align 8 MaxSize: 0x01C0
struct FWeaponRuleWDCTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              BulletSize;                                                 // 0x0010   (0x0018)  
	uint32_t                                           AmmoCapacity;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<uint32_t>                                   size_ext;                                                   // 0x0030   (0x0010)  
	uint32_t                                           CanFold;                                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            AssembleTag;                                                // 0x0048   (0x0010)  
	FString                                            SubAssembleTag;                                             // 0x0058   (0x0010)  
	uint64_t                                           slot_type;                                                  // 0x0068   (0x0008)  
	uint64_t                                           sub_slot_type;                                              // 0x0070   (0x0008)  
	TArray<FWeaponSocket>                              Sockets;                                                    // 0x0078   (0x0010)  
	TArray<uint32_t>                                   ConflictedItemIds;                                          // 0x0088   (0x0010)  
	float                                              Engonomics;                                                 // 0x0098   (0x0004)  
	float                                              Accuracy;                                                   // 0x009C   (0x0004)  
	float                                              MoaScale;                                                   // 0x00A0   (0x0004)  
	float                                              AdsMoaX;                                                    // 0x00A4   (0x0004)  
	float                                              AdsMoaY;                                                    // 0x00A8   (0x0004)  
	float                                              HorizontalRecoil;                                           // 0x00AC   (0x0004)  
	float                                              VerticalRecoil;                                             // 0x00B0   (0x0004)  
	float                                              SightRange;                                                 // 0x00B4   (0x0004)  
	float                                              MuzzleVelocity;                                             // 0x00B8   (0x0004)  
	uint32_t                                           RaceStrategy;                                               // 0x00BC   (0x0004)  
	float                                              MaxCount;                                                   // 0x00C0   (0x0004)  
	float                                              Recoil;                                                     // 0x00C4   (0x0004)  
	float                                              ZeroDropDistance;                                           // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FText                                              TypesOfFire;                                                // 0x00D0   (0x0018)  
	FText                                              Caliber;                                                    // 0x00E8   (0x0018)  
	FString                                            FireRate;                                                   // 0x0100   (0x0010)  
	FString                                            EffectiveDistance;                                          // 0x0110   (0x0010)  
	TArray<FString>                                    FireRequireTags;                                            // 0x0120   (0x0010)  
	TArray<FWeaponTag>                                 fi_require_tags;                                            // 0x0130   (0x0010)  
	TArray<FString>                                    AdapterFireRequireTags;                                     // 0x0140   (0x0010)  
	TArray<FWeaponTag>                                 ad_require_tags;                                            // 0x0150   (0x0010)  
	FString                                            FireRequireTagsDecrease;                                    // 0x0160   (0x0010)  
	TArray<FWeaponTag>                                 de_require_tags;                                            // 0x0170   (0x0010)  
	int8_t                                             ShouldReloadByOne;                                          // 0x0180   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0181   (0x0007)  MISSED
	FString                                            AccessoryType;                                              // 0x0188   (0x0010)  
	float                                              AdapterAdjustDamage;                                        // 0x0198   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	FString                                            Scope;                                                      // 0x01A0   (0x0010)  
	float                                              ReloadSpeedRatio;                                           // 0x01B0   (0x0004)  
	float                                              ADSMoveSpeedRatio;                                          // 0x01B4   (0x0004)  
	float                                              MoveSpeedRatio;                                             // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RuleConf
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRuleConf
{ 
	uint32_t                                           cond;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<uint32_t>                                   cond_ids;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponRuleConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FWeaponRuleConfTableRow : FTableRowBase
{ 
	uint32_t                                           base_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRuleConf>                                  rules;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponRecommendWeaponConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FWeaponRecommendWeaponConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           max_num;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RecommendWeaponItemConf
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FRecommendWeaponItemConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           slot_index;                                                 // 0x0008   (0x0004)  
	uint32_t                                           Parent;                                                     // 0x000C   (0x0004)  
	uint32_t                                           parent_idx;                                                 // 0x0010   (0x0004)  
};

/// Struct /Script/UADataTableModule.WeaponRecommendConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FWeaponRecommendConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRecommendWeaponItemConf>                   Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponRecommendArgConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FWeaponRecommendArgConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   Blacklist;                                                  // 0x0010   (0x0010)  
	uint32_t                                           design_prob;                                                // 0x0020   (0x0004)  
	uint32_t                                           ds_out_prob;                                                // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.WeaponPresetConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FWeaponPresetConfTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           isSuper;                                                    // 0x0028   (0x0004)  
	uint32_t                                           baseId;                                                     // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.WeaponNumConfTableRow
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FWeaponNumConfTableRow : FTableRowBase
{ 
};

/// Struct /Script/UADataTableModule.WeaponFilterItemsConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FWeaponFilterItemsConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	TArray<uint32_t>                                   arr;                                                        // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponDetailValueToAttributeTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FWeaponDetailValueToAttributeTableRow : FTableRowBase
{ 
	FString                                            DetailValueName;                                            // 0x0008   (0x0010)  
	FString                                            AttributeName;                                              // 0x0018   (0x0010)  
	uint32_t                                           ModOp;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.WeaponDetailConfTableRow
/// Size: 0x0280 (640 bytes) (0x000008 - 0x000280) align 8 MaxSize: 0x0280
struct FWeaponDetailConfTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              BulletSize;                                                 // 0x0010   (0x0018)  
	TArray<uint32_t>                                   size_ext;                                                   // 0x0028   (0x0010)  
	FText                                              TypesOfFire;                                                // 0x0038   (0x0018)  
	FString                                            FireRate;                                                   // 0x0050   (0x0010)  
	float                                              MuzzleVelocity;                                             // 0x0060   (0x0004)  
	float                                              BaseDamage;                                                 // 0x0064   (0x0004)  
	float                                              AdapterAdjustDamage;                                        // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FText                                              FiringPowerDisplay;                                         // 0x0070   (0x0018)  
	float                                              Engonomics;                                                 // 0x0088   (0x0004)  
	float                                              WeaponStability;                                            // 0x008C   (0x0004)  
	float                                              ImpactForce;                                                // 0x0090   (0x0004)  
	float                                              ImpactResistance;                                           // 0x0094   (0x0004)  
	float                                              WeaponBlockDamageFactor;                                    // 0x0098   (0x0004)  
	float                                              GSLeverSpeed;                                               // 0x009C   (0x0004)  
	float                                              Accuracy;                                                   // 0x00A0   (0x0004)  
	float                                              ZeroDropDistance;                                           // 0x00A4   (0x0004)  
	float                                              MoaScale;                                                   // 0x00A8   (0x0004)  
	float                                              AdsMoaX;                                                    // 0x00AC   (0x0004)  
	float                                              AdsMoaY;                                                    // 0x00B0   (0x0004)  
	float                                              MoaFinalScale;                                              // 0x00B4   (0x0004)  
	float                                              HorizontalRecoil;                                           // 0x00B8   (0x0004)  
	float                                              VerticalRecoil;                                             // 0x00BC   (0x0004)  
	float                                              Recoil;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FString                                            EffectiveDistance;                                          // 0x00C8   (0x0010)  
	float                                              ADSMoveSpeedRatio;                                          // 0x00D8   (0x0004)  
	float                                              MoveSpeedRatio;                                             // 0x00DC   (0x0004)  
	float                                              CheckMagRatio;                                              // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FText                                              SuppressorSoundShow;                                        // 0x00E8   (0x0018)  
	char                                               SilencerType;                                               // 0x0100   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	float                                              RunSpeedRatio;                                              // 0x0104   (0x0004)  
	float                                              SprintSpeedRatio;                                           // 0x0108   (0x0004)  
	float                                              SilentWalkSpeedRatio;                                       // 0x010C   (0x0004)  
	float                                              AccuracyPunishRatio;                                        // 0x0110   (0x0004)  
	float                                              LeanRatio;                                                  // 0x0114   (0x0004)  
	int8_t                                             ShouldReloadByOne;                                          // 0x0118   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	uint32_t                                           CanFold;                                                    // 0x011C   (0x0004)  
	FString                                            Scope;                                                      // 0x0120   (0x0010)  
	uint32_t                                           AmmoCapacity;                                               // 0x0130   (0x0004)  
	uint32_t                                           RaceStrategy;                                               // 0x0134   (0x0004)  
	FString                                            LightIntensityDisplay;                                      // 0x0138   (0x0010)  
	float                                              EnergyCostPerFire;                                          // 0x0148   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	FString                                            AdapterArmorLevel;                                          // 0x0150   (0x0010)  
	FText                                              Caliber;                                                    // 0x0160   (0x0018)  
	FString                                            AccessoryType;                                              // 0x0178   (0x0010)  
	float                                              ReloadSpeedRatio;                                           // 0x0188   (0x0004)  
	float                                              MaxCount;                                                   // 0x018C   (0x0004)  
	float                                              SightRange;                                                 // 0x0190   (0x0004)  
	float                                              SprintToIdle;                                               // 0x0194   (0x0004)  
	uint32_t                                           IsCulling;                                                  // 0x0198   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x019C   (0x0004)  MISSED
	TArray<FString>                                    FireRequireTags;                                            // 0x01A0   (0x0010)  
	TArray<FWeaponTag>                                 fi_require_tags;                                            // 0x01B0   (0x0010)  
	TArray<FString>                                    AdapterFireRequireTags;                                     // 0x01C0   (0x0010)  
	TArray<FWeaponTag>                                 ad_require_tags;                                            // 0x01D0   (0x0010)  
	FString                                            FireRequireTagsDecrease;                                    // 0x01E0   (0x0010)  
	TArray<FWeaponTag>                                 de_require_tags;                                            // 0x01F0   (0x0010)  
	FString                                            AssembleTag;                                                // 0x0200   (0x0010)  
	FString                                            SubAssembleTag;                                             // 0x0210   (0x0010)  
	TArray<uint32_t>                                   ConflictedItemIds;                                          // 0x0220   (0x0010)  
	uint64_t                                           slot_type;                                                  // 0x0230   (0x0008)  
	uint64_t                                           sub_slot_type;                                              // 0x0238   (0x0008)  
	FString                                            DurabilityAccuracyCurvePath;                                // 0x0240   (0x0010)  
	FString                                            DurabilityMalfunctionCurvePath;                             // 0x0250   (0x0010)  
	FString                                            DurabilityMoaCurvePath;                                     // 0x0260   (0x0010)  
	TArray<FWeaponSocket>                              Sockets;                                                    // 0x0270   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeaponClassifyConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FWeaponClassifyConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            IconPath;                                                   // 0x0010   (0x0010)  
	FText                                              Name;                                                       // 0x0020   (0x0018)  
	uint32_t                                           ItemType;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.WeaponAvatarSetCfgTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FWeaponAvatarSetCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   avatar_set;                                                 // 0x0010   (0x0010)  
	uint32_t                                           SkinAssemble;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<uint32_t>                                   ExtSkinAssemble;                                            // 0x0028   (0x0010)  
	TArray<uint32_t>                                   ExtSkinList;                                                // 0x0038   (0x0010)  
	uint32_t                                           seq_plan;                                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.WeaponItemConf
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FWeaponItemConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           slot_index;                                                 // 0x0008   (0x0004)  
	uint32_t                                           Parent;                                                     // 0x000C   (0x0004)  
	uint32_t                                           parent_idx;                                                 // 0x0010   (0x0004)  
	uint32_t                                           spray_item_id;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.WeaponAssembleConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FWeaponAssembleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           col_size;                                                   // 0x000C   (0x0004)  
	uint32_t                                           row_size;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            unique_id;                                                  // 0x0018   (0x0010)  
	uint32_t                                           can_fire;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FWeaponItemConf>                            Items;                                                      // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.WarZoneConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FWarZoneConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   country_codes;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.WalkInTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FWalkInTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            GestureIconPath;                                            // 0x0010   (0x0010)  
	FText                                              GestureDescription;                                         // 0x0020   (0x0018)  
	FText                                              AnimationName;                                              // 0x0038   (0x0018)  
	uint32_t                                           depend_avatar;                                              // 0x0050   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0054   (0x0004)  
	uint32_t                                           Rotation;                                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0060   (0x0010)  
};

/// Struct /Script/UADataTableModule.VoiceIconSoundTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FVoiceIconSoundTableRow : FTableRowBase
{ 
	int32_t                                            ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            VoiceIconPath;                                              // 0x0010   (0x0010)  
	FText                                              VoiceDescription;                                           // 0x0020   (0x0018)  
	FString                                            VoiceSoundPaths;                                            // 0x0038   (0x0010)  
	FString                                            WanderVoiceSoundPaths;                                      // 0x0048   (0x0010)  
	FString                                            activity_info;                                              // 0x0058   (0x0010)  
	TArray<uint32_t>                                   jump_goto;                                                  // 0x0068   (0x0010)  
	FText                                              no_source_description;                                      // 0x0078   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0098   (0x0018)  
};

/// Struct /Script/UADataTableModule.ValueDistributionConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FValueDistributionConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Inclination;                                                // 0x000C   (0x0004)  
	uint32_t                                           Gun;                                                        // 0x0010   (0x0004)  
	uint32_t                                           ContainerArmor;                                             // 0x0014   (0x0004)  
	uint32_t                                           head;                                                       // 0x0018   (0x0004)  
	uint32_t                                           Bullet;                                                     // 0x001C   (0x0004)  
	uint32_t                                           Consumables;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.UpgradeUnlockTableRow
/// Size: 0x0108 (264 bytes) (0x000008 - 0x000108) align 8 MaxSize: 0x0108
struct FUpgradeUnlockTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           function_control_id;                                        // 0x0010   (0x0004)  
	uint32_t                                           preview_level;                                              // 0x0014   (0x0004)  
	uint32_t                                           sort;                                                       // 0x0018   (0x0004)  
	uint32_t                                           sys_id;                                                     // 0x001C   (0x0004)  
	FText                                              unlock_tip;                                                 // 0x0020   (0x0018)  
	FText                                              preview_label;                                              // 0x0038   (0x0018)  
	FText                                              preview_desc;                                               // 0x0050   (0x0018)  
	FText                                              label;                                                      // 0x0068   (0x0018)  
	FText                                              desc1;                                                      // 0x0080   (0x0018)  
	FString                                            image_path;                                                 // 0x0098   (0x0010)  
	FString                                            small_image_path;                                           // 0x00A8   (0x0010)  
	FText                                              robot_help_key;                                             // 0x00B8   (0x0018)  
	FString                                            begin_time;                                                 // 0x00D0   (0x0010)  
	FString                                            end_time;                                                   // 0x00E0   (0x0010)  
	FText                                              desc;                                                       // 0x00F0   (0x0018)  
};

/// Struct /Script/UADataTableModule.UnbanMapIdConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FUnbanMapIdConfTableRow : FTableRowBase
{ 
	uint32_t                                           mapIDPrefix;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.UnbanLootMapIdConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FUnbanLootMapIdConfTableRow : FTableRowBase
{ 
	uint32_t                                           mapIDPrefix;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TraderScaleConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FTraderScaleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	float                                              DistancePercentA;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.TradeItemClassifyConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FTradeItemClassifyConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           bussinessman_id;                                            // 0x000C   (0x0004)  
	FText                                              icon_path;                                                  // 0x0010   (0x0018)  
	FText                                              Name;                                                       // 0x0028   (0x0018)  
	TArray<uint64_t>                                   item_types;                                                 // 0x0040   (0x0010)  
	uint32_t                                           classify_type;                                              // 0x0050   (0x0004)  
	uint32_t                                           is_act_classify;                                            // 0x0054   (0x0004)  
	uint32_t                                           show_classify;                                              // 0x0058   (0x0004)  
	uint32_t                                           isManuallyRefresh;                                          // 0x005C   (0x0004)  
};

/// Struct /Script/UADataTableModule.BusinessHeadConf
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FBusinessHeadConf
{ 
	FString                                            Path;                                                       // 0x0000   (0x0010)  
	FString                                            Path0;                                                      // 0x0010   (0x0010)  
	FString                                            Path1;                                                      // 0x0020   (0x0010)  
	FString                                            Path2;                                                      // 0x0030   (0x0010)  
	FString                                            Path3;                                                      // 0x0040   (0x0010)  
	FString                                            Path4;                                                      // 0x0050   (0x0010)  
	FString                                            Path5;                                                      // 0x0060   (0x0010)  
	FString                                            Path6;                                                      // 0x0070   (0x0010)  
	FString                                            Path7;                                                      // 0x0080   (0x0010)  
	FString                                            Path8;                                                      // 0x0090   (0x0010)  
	FString                                            Path9;                                                      // 0x00A0   (0x0010)  
	FString                                            Path10;                                                     // 0x00B0   (0x0010)  
	FString                                            Path11;                                                     // 0x00C0   (0x0010)  
	FString                                            Path12;                                                     // 0x00D0   (0x0010)  
	FString                                            Path13;                                                     // 0x00E0   (0x0010)  
	FString                                            Path14;                                                     // 0x00F0   (0x0010)  
	FString                                            Path15;                                                     // 0x0100   (0x0010)  
};

/// Struct /Script/UADataTableModule.TradeHeadIconTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FTradeHeadIconTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           businessman_id;                                             // 0x000C   (0x0004)  
	FString                                            BusinessHead_Path;                                          // 0x0010   (0x0010)  
	FString                                            InBattleTaskBusinessHead_Path;                              // 0x0020   (0x0010)  
	TArray<FBusinessHeadConf>                          stage_head_vec;                                             // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.TradeDialogVoiceConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FTradeDialogVoiceConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           businessman_id;                                             // 0x000C   (0x0004)  
	FString                                            DialogTypeDef;                                              // 0x0010   (0x0010)  
	FString                                            AudioSourceName;                                            // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.ExchangeItemConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FExchangeItemConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.TradeConfTableRow
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FTradeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           businessman_id;                                             // 0x000C   (0x0004)  
	uint32_t                                           classify_id;                                                // 0x0010   (0x0004)  
	uint32_t                                           seq;                                                        // 0x0014   (0x0004)  
	uint32_t                                           loyalty_level;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              lock_desc;                                                  // 0x0020   (0x0018)  
	uint32_t                                           is_hide;                                                    // 0x0038   (0x0004)  
	uint32_t                                           task_id;                                                    // 0x003C   (0x0004)  
	uint32_t                                           businessman_reputation;                                     // 0x0040   (0x0004)  
	uint32_t                                           Level;                                                      // 0x0044   (0x0004)  
	uint32_t                                           have_item;                                                  // 0x0048   (0x0004)  
	uint32_t                                           buy_limit;                                                  // 0x004C   (0x0004)  
	uint32_t                                           limit_forever;                                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FDateTime                                          refresh_begin_time;                                         // 0x0058   (0x0008)  
	uint32_t                                           refresh_period;                                             // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FDateTime                                          limit_refresh_begin_time;                                   // 0x0068   (0x0008)  
	uint32_t                                           limit_refresh_period;                                       // 0x0070   (0x0004)  
	uint32_t                                           sell_item_id;                                               // 0x0074   (0x0004)  
	uint32_t                                           sell_num;                                                   // 0x0078   (0x0004)  
	uint32_t                                           is_faction;                                                 // 0x007C   (0x0004)  
	FText                                              sellItemName;                                               // 0x0080   (0x0018)  
	TArray<FExchangeItemConf>                          exchange_item_vec;                                          // 0x0098   (0x0010)  
};

/// Struct /Script/UADataTableModule.TitleUpgradeConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FTitleUpgradeConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           target_type;                                                // 0x000C   (0x0004)  
	uint32_t                                           max_progress;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<uint32_t>                                   level_to_progess;                                           // 0x0018   (0x0010)  
	FText                                              desc;                                                       // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.TitleItemConfTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FTitleItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          start_time;                                                 // 0x0010   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0018   (0x0008)  
	uint32_t                                           JumpId;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              no_source_description;                                      // 0x0028   (0x0018)  
	FText                                              CannotGetDesc;                                              // 0x0040   (0x0018)  
	uint32_t                                           MaxAddStarNum;                                              // 0x0058   (0x0004)  
	uint32_t                                           ShowNormalGetPanel;                                         // 0x005C   (0x0004)  
	uint32_t                                           is_dynamic_logo;                                            // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0068   (0x0010)  
	uint32_t                                           is_show_star;                                               // 0x0078   (0x0004)  
	uint32_t                                           seasonId;                                                   // 0x007C   (0x0004)  
	uint32_t                                           is_off_sale;                                                // 0x0080   (0x0004)  
	uint32_t                                           can_add_star;                                               // 0x0084   (0x0004)  
	uint32_t                                           is_can_upgrade;                                             // 0x0088   (0x0004)  
	uint32_t                                           show_get_time;                                              // 0x008C   (0x0004)  
	uint32_t                                           is_cannot_get;                                              // 0x0090   (0x0004)  
	uint32_t                                           can_get_style;                                              // 0x0094   (0x0004)  
	FText                                              can_get_desc;                                               // 0x0098   (0x0018)  
};

/// Struct /Script/UADataTableModule.TicketConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FTicketConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           cast_num;                                                   // 0x0010   (0x0004)  
	int32_t                                            tip_id;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.ThrowableWeaponDetailTableRow
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FThrowableWeaponDetailTableRow : FTableRowBase
{ 
	uint64_t                                           ItemId;                                                     // 0x0008   (0x0008)  
	TArray<float>                                      DelayEffect;                                                // 0x0010   (0x0010)  
	FText                                              EffectRange;                                                // 0x0020   (0x0018)  
	float                                              EffectTime;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FText                                              ArmorDamage;                                                // 0x0040   (0x0018)  
	FText                                              Penetration;                                                // 0x0058   (0x0018)  
	FText                                              PieceCount;                                                 // 0x0070   (0x0018)  
	FText                                              PieceType;                                                  // 0x0088   (0x0018)  
	FText                                              battery;                                                    // 0x00A0   (0x0018)  
	FText                                              detectrange;                                                // 0x00B8   (0x0018)  
};

/// Struct /Script/UADataTableModule.TeamVoiceTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FTeamVoiceTableRow : FTableRowBase
{ 
	int32_t                                            ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              VoiceDesc;                                                  // 0x0010   (0x0018)  
	FString                                            voicePath;                                                  // 0x0028   (0x0010)  
	FText                                              VoiceContent;                                               // 0x0038   (0x0018)  
	FString                                            activity_info;                                              // 0x0050   (0x0010)  
	FString                                            WanderPath;                                                 // 0x0060   (0x0010)  
	FString                                            WanderContent;                                              // 0x0070   (0x0010)  
	int32_t                                            VoiceType;                                                  // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TeamTargetConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTeamTargetConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              target_name;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.TeamStyleConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTeamStyleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              style_name;                                                 // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.RecruitStyleConf
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRecruitStyleConf
{ 
	uint32_t                                           Style;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/UADataTableModule.TeamRecruitStyleConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FTeamRecruitStyleConfTableRow : FTableRowBase
{ 
	uint32_t                                           style_type;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRecruitStyleConf>                          style_list;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.TeamRatingCommConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FTeamRatingCommConfTableRow : FTableRowBase
{ 
	uint32_t                                           conf_type;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.RatingConditionConf
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRatingConditionConf
{ 
	FText                                              expression;                                                 // 0x0000   (0x0018)  
	uint32_t                                           Op;                                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0020   (0x0008)  
};

/// Struct /Script/UADataTableModule.TeamRatingBattleConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FTeamRatingBattleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	int64_t                                            rating_change;                                              // 0x0018   (0x0008)  
	int64_t                                            rating_limit_change;                                        // 0x0020   (0x0008)  
	TArray<FRatingConditionConf>                       Conditions;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.TeamOptionTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FTeamOptionTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           DefaultValue;                                               // 0x0028   (0x0004)  
	uint32_t                                           IsShow;                                                     // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.TeamListTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FTeamListTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0028   (0x0004)  
	uint32_t                                           DefaultValue;                                               // 0x002C   (0x0004)  
	uint32_t                                           Param1;                                                     // 0x0030   (0x0004)  
	uint32_t                                           Param2;                                                     // 0x0034   (0x0004)  
};

/// Struct /Script/UADataTableModule.TeamLendConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FTeamLendConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Val;                                                        // 0x000C   (0x0004)  
	TArray<uint32_t>                                   ary;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.TeamKVConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTeamKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<int64_t>                                    val_array;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.TeamEquipStyleTextTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTeamEquipStyleTextTableRow : FTableRowBase
{ 
	uint32_t                                           equip_style_type;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.TeamConvenientMacthTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FTeamConvenientMacthTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0028   (0x0004)  
	uint32_t                                           DefaultValue;                                               // 0x002C   (0x0004)  
	uint32_t                                           Param1;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TeamBattleStyleTextTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTeamBattleStyleTextTableRow : FTableRowBase
{ 
	uint32_t                                           battle_style_type;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.CommonItemConfItem
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCommonItemConfItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.TaskTargetConfTableRow
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FTaskTargetConfTableRow : FTableRowBase
{ 
	uint32_t                                           target_id;                                                  // 0x0008   (0x0004)  
	uint32_t                                           target_type;                                                // 0x000C   (0x0004)  
	FText                                              desc;                                                       // 0x0010   (0x0018)  
	uint32_t                                           jump_goto;                                                  // 0x0028   (0x0004)  
	uint32_t                                           Progress;                                                   // 0x002C   (0x0004)  
	int64_t                                            Param1;                                                     // 0x0030   (0x0008)  
	int64_t                                            Param2;                                                     // 0x0038   (0x0008)  
	int64_t                                            Param3;                                                     // 0x0040   (0x0008)  
	uint32_t                                           team_share;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	int64_t                                            icon_item_id;                                               // 0x0050   (0x0008)  
	TArray<int64_t>                                    item_list;                                                  // 0x0058   (0x0010)  
	uint32_t                                           big_type;                                                   // 0x0068   (0x0004)  
	uint32_t                                           mid_type;                                                   // 0x006C   (0x0004)  
	uint32_t                                           sub_type;                                                   // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<int32_t>                                    rarity_list;                                                // 0x0078   (0x0010)  
	TArray<FCommonItemConfItem>                        rewards;                                                    // 0x0088   (0x0010)  
	TArray<uint32_t>                                   prev_target;                                                // 0x0098   (0x0010)  
	uint32_t                                           prev_type;                                                  // 0x00A8   (0x0004)  
	uint32_t                                           fail_when_next_fail;                                        // 0x00AC   (0x0004)  
	uint32_t                                           node_type;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TaskReportConfTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FTaskReportConfTableRow : FTableRowBase
{ 
	uint32_t                                           report_id;                                                  // 0x0008   (0x0004)  
	uint32_t                                           target_id;                                                  // 0x000C   (0x0004)  
	uint32_t                                           State;                                                      // 0x0010   (0x0004)  
	uint32_t                                           businessman_id;                                             // 0x0014   (0x0004)  
	FText                                              Title;                                                      // 0x0018   (0x0018)  
	FText                                              Content;                                                    // 0x0030   (0x0018)  
	float                                              report_time;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FText                                              sound_url;                                                  // 0x0050   (0x0018)  
};

/// Struct /Script/UADataTableModule.ActLink
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FActLink
{ 
	uint32_t                                           link_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Index;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.TaskLinkConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FTaskLinkConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FActLink>                                   Links;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.TaskDialogueTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FTaskDialogueTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              conversation;                                               // 0x0010   (0x0018)  
	FText                                              Sound;                                                      // 0x0028   (0x0018)  
	FText                                              bg;                                                         // 0x0040   (0x0018)  
	FText                                              Title;                                                      // 0x0058   (0x0018)  
	uint32_t                                           next_id;                                                    // 0x0070   (0x0004)  
	uint32_t                                           NPC;                                                        // 0x0074   (0x0004)  
	TArray<FCommonItemConfItem>                        gifts;                                                      // 0x0078   (0x0010)  
};

/// Struct /Script/UADataTableModule.UnlockCondtionRef
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUnlockCondtionRef
{ 
	uint32_t                                           cond_type;                                                  // 0x0000   (0x0004)  
	uint32_t                                           cond_value;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.TaskTargetRefItem
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTaskTargetRefItem
{ 
	uint32_t                                           target_id;                                                  // 0x0000   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x0004   (0x0004)  
	uint32_t                                           Property;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.TaskConfTableRow
/// Size: 0x0180 (384 bytes) (0x000008 - 0x000180) align 8 MaxSize: 0x0180
struct FTaskConfTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           label_type;                                                 // 0x0010   (0x0004)  
	uint32_t                                           active_task_type;                                           // 0x0014   (0x0004)  
	FText                                              disp_title;                                                 // 0x0018   (0x0018)  
	uint32_t                                           season_id;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              chapter_name;                                               // 0x0038   (0x0018)  
	uint32_t                                           disp_type;                                                  // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FText                                              disp_desc;                                                  // 0x0058   (0x0018)  
	FText                                              disp_detail;                                                // 0x0070   (0x0018)  
	uint32_t                                           disp_address;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FText                                              chapter;                                                    // 0x0090   (0x0018)  
	FDateTime                                          unlock_time;                                                // 0x00A8   (0x0008)  
	TArray<FUnlockCondtionRef>                         unlock_condtions;                                           // 0x00B0   (0x0010)  
	TArray<uint32_t>                                   pre_tasks;                                                  // 0x00C0   (0x0010)  
	uint32_t                                           pre_logic;                                                  // 0x00D0   (0x0004)  
	uint32_t                                           source_type;                                                // 0x00D4   (0x0004)  
	uint32_t                                           source_id;                                                  // 0x00D8   (0x0004)  
	uint32_t                                           faction_icon;                                               // 0x00DC   (0x0004)  
	uint32_t                                           Faction;                                                    // 0x00E0   (0x0004)  
	uint32_t                                           show_specified_businessman_stage;                           // 0x00E4   (0x0004)  
	uint32_t                                           businessman_stage;                                          // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FTaskTargetRefItem>                         Targets;                                                    // 0x00F0   (0x0010)  
	uint32_t                                           need_finish_num;                                            // 0x0100   (0x0004)  
	uint32_t                                           hide_day;                                                   // 0x0104   (0x0004)  
	FText                                              kw_desc;                                                    // 0x0108   (0x0018)  
	uint32_t                                           gift_exp;                                                   // 0x0120   (0x0004)  
	uint32_t                                           gift_ruble;                                                 // 0x0124   (0x0004)  
	TArray<FAwardItemConf>                             rewards;                                                    // 0x0128   (0x0010)  
	uint32_t                                           prev_type;                                                  // 0x0138   (0x0004)  
	uint32_t                                           reaccept_if_failed;                                         // 0x013C   (0x0004)  
	uint32_t                                           accept_dialog_start_id;                                     // 0x0140   (0x0004)  
	uint32_t                                           finish_dialog_start_id;                                     // 0x0144   (0x0004)  
	uint32_t                                           task_difficult;                                             // 0x0148   (0x0004)  
	bool                                               complete_in_one_battle;                                     // 0x014C   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x014D   (0x0003)  MISSED
	uint32_t                                           sort_weight;                                                // 0x0150   (0x0004)  
	uint32_t                                           activity_id;                                                // 0x0154   (0x0004)  
	TArray<int32_t>                                    reports_id;                                                 // 0x0158   (0x0010)  
	bool                                               gradually_unlock;                                           // 0x0168   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0169   (0x0003)  MISSED
	uint32_t                                           task_cover;                                                 // 0x016C   (0x0004)  
	uint32_t                                           core_reward_item_id;                                        // 0x0170   (0x0004)  
	uint32_t                                           task_chain_show_core_reward;                                // 0x0174   (0x0004)  
	uint32_t                                           task_chapter_id;                                            // 0x0178   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x017C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TaskCommitTargetConfTableRow
/// Size: 0x0168 (360 bytes) (0x000008 - 0x000168) align 8 MaxSize: 0x0168
struct FTaskCommitTargetConfTableRow : FTableRowBase
{ 
	uint32_t                                           target_id;                                                  // 0x0008   (0x0004)  
	uint32_t                                           commit_type;                                                // 0x000C   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<uint32_t>                                   item_list;                                                  // 0x0018   (0x0010)  
	uint32_t                                           big_type;                                                   // 0x0028   (0x0004)  
	uint32_t                                           mid_type;                                                   // 0x002C   (0x0004)  
	uint32_t                                           sub_type;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<int32_t>                                    rarity_list;                                                // 0x0038   (0x0010)  
	TArray<uint32_t>                                   size_x;                                                     // 0x0048   (0x0010)  
	TArray<uint32_t>                                   size_y;                                                     // 0x0058   (0x0010)  
	TArray<uint32_t>                                   size_all;                                                   // 0x0068   (0x0010)  
	uint32_t                                           is_raidloot;                                                // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<uint32_t>                                   Durability;                                                 // 0x0080   (0x0010)  
	TArray<uint32_t>                                   durability_limit;                                           // 0x0090   (0x0010)  
	TArray<uint32_t>                                   Engonomics;                                                 // 0x00A0   (0x0010)  
	TArray<uint32_t>                                   Accuracy;                                                   // 0x00B0   (0x0010)  
	TArray<uint32_t>                                   ads_moa_y;                                                  // 0x00C0   (0x0010)  
	TArray<uint32_t>                                   horizontal_recoil;                                          // 0x00D0   (0x0010)  
	TArray<uint32_t>                                   vertical_recoil;                                            // 0x00E0   (0x0010)  
	TArray<uint32_t>                                   sight_range;                                                // 0x00F0   (0x0010)  
	TArray<uint32_t>                                   muzzle_velocity;                                            // 0x0100   (0x0010)  
	TArray<uint32_t>                                   max_count;                                                  // 0x0110   (0x0010)  
	TArray<uint32_t>                                   Recoil;                                                     // 0x0120   (0x0010)  
	uint32_t                                           fire_type;                                                  // 0x0130   (0x0004)  
	uint32_t                                           Caliber;                                                    // 0x0134   (0x0004)  
	TArray<uint32_t>                                   fire_rate;                                                  // 0x0138   (0x0010)  
	TArray<uint32_t>                                   effect_dist;                                                // 0x0148   (0x0010)  
	TArray<uint32_t>                                   Components;                                                 // 0x0158   (0x0010)  
};

/// Struct /Script/UADataTableModule.TaskActTargetDescParamConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTaskActTargetDescParamConfTableRow : FTableRowBase
{ 
	int64_t                                            ID;                                                         // 0x0008   (0x0008)  
	FText                                              desc;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.TaskActTargetDescConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTaskActTargetDescConfTableRow : FTableRowBase
{ 
	uint32_t                                           target_type;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              target_desc;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.TaskActDescConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FTaskActDescConfTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              task_title;                                                 // 0x0010   (0x0018)  
	FText                                              task_detail;                                                // 0x0028   (0x0018)  
	TArray<FAwardItemConf>                             rewards;                                                    // 0x0040   (0x0010)  
	uint32_t                                           need_reissue;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ActTargetRef
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FActTargetRef
{ 
	uint32_t                                           target_type;                                                // 0x0000   (0x0004)  
	uint32_t                                           max_progress;                                               // 0x0004   (0x0004)  
	int64_t                                            Param1;                                                     // 0x0008   (0x0008)  
	int64_t                                            Param2;                                                     // 0x0010   (0x0008)  
	int64_t                                            Param3;                                                     // 0x0018   (0x0008)  
	int64_t                                            param4;                                                     // 0x0020   (0x0008)  
	FString                                            param5;                                                     // 0x0028   (0x0010)  
	FDateTime                                          param6;                                                     // 0x0038   (0x0008)  
	int64_t                                            param7;                                                     // 0x0040   (0x0008)  
	TArray<uint32_t>                                   param8;                                                     // 0x0048   (0x0010)  
	int64_t                                            param9;                                                     // 0x0058   (0x0008)  
	uint32_t                                           Difficulty;                                                 // 0x0060   (0x0004)  
	uint32_t                                           jump_id;                                                    // 0x0064   (0x0004)  
};

/// Struct /Script/UADataTableModule.TaskActConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FTaskActConfTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           begin_day;                                                  // 0x000C   (0x0004)  
	uint32_t                                           end_day;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            begin_time;                                                 // 0x0018   (0x0010)  
	FString                                            end_time;                                                   // 0x0028   (0x0010)  
	FDateTime                                          abs_begin_time;                                             // 0x0038   (0x0008)  
	FDateTime                                          abs_end_time;                                               // 0x0040   (0x0008)  
	uint32_t                                           reward_open_condition;                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FActTargetRef>                              Targets;                                                    // 0x0050   (0x0010)  
	TArray<FAwardItemConf>                             rewards;                                                    // 0x0060   (0x0010)  
	uint32_t                                           need_reissue;                                               // 0x0070   (0x0004)  
	uint32_t                                           reissue_mail_id;                                            // 0x0074   (0x0004)  
	uint32_t                                           map_need;                                                   // 0x0078   (0x0004)  
	uint32_t                                           show_in_game;                                               // 0x007C   (0x0004)  
	uint32_t                                           set_finished;                                               // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TargetArmorTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FTargetArmorTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           unlock_item;                                                // 0x0010   (0x0004)  
	uint32_t                                           is_default;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.TagSheet2TableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FTagSheet2TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            SocketName;                                                 // 0x0010   (0x0010)  
	FText                                              PartName;                                                   // 0x0020   (0x0018)  
};

/// Struct /Script/UADataTableModule.TagSheet1TableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FTagSheet1TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Tag;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.TagMatchedConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FTagMatchedConfTableRow : FTableRowBase
{ 
	FString                                            Tag;                                                        // 0x0008   (0x0010)  
	TArray<uint32_t>                                   matchedItemIDs;                                             // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.Synthesizer_ValueToPrizepoolTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSynthesizer_ValueToPrizepoolTableRow : FTableRowBase
{ 
	uint32_t                                           Prizepool_id;                                               // 0x0008   (0x0004)  
	uint32_t                                           min_value;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.Synthesizer_SameRarityValueToTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSynthesizer_SameRarityValueToTableRow : FTableRowBase
{ 
	uint32_t                                           Prizepool_id;                                               // 0x0008   (0x0004)  
	uint32_t                                           min_value;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.Synthesizer_SameRarityPrizepoolTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FSynthesizer_SameRarityPrizepoolTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Prizepool;                                                  // 0x000C   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Weight;                                                     // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.Synthesizer_SameItemValueToTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSynthesizer_SameItemValueToTableRow : FTableRowBase
{ 
	uint32_t                                           Prizepool_id;                                               // 0x0008   (0x0004)  
	uint32_t                                           min_value;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.Synthesizer_SameItemPrizepoolTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FSynthesizer_SameItemPrizepoolTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Prizepool;                                                  // 0x000C   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Weight;                                                     // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.Synthesizer_PrizepoolTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FSynthesizer_PrizepoolTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Prizepool;                                                  // 0x000C   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Weight;                                                     // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.Synthesizer_FormulaPrizepoolTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FSynthesizer_FormulaPrizepoolTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Prizepool;                                                  // 0x000C   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Weight;                                                     // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.Synthesizer_FormulaTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FSynthesizer_FormulaTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            opentime_min;                                               // 0x0010   (0x0010)  
	FString                                            opentime_max;                                               // 0x0020   (0x0010)  
	uint32_t                                           ActivityID;                                                 // 0x0030   (0x0004)  
	uint32_t                                           Prizepool;                                                  // 0x0034   (0x0004)  
	uint32_t                                           itemA_id;                                                   // 0x0038   (0x0004)  
	uint32_t                                           itemB_id;                                                   // 0x003C   (0x0004)  
	uint32_t                                           itemC_id;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.Synthesizer_BlacklistTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSynthesizer_BlacklistTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.groupInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FgroupInfo
{ 
	uint32_t                                           MaxBuyNum;                                                  // 0x0000   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.SupplyStationSingleConfigTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FSupplyStationSingleConfigTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           GroupID;                                                    // 0x000C   (0x0004)  
	uint32_t                                           ItemId;                                                     // 0x0010   (0x0004)  
	int32_t                                            MaxBuyNum;                                                  // 0x0014   (0x0004)  
	int32_t                                            bIsDownShelf;                                               // 0x0018   (0x0004)  
	float                                              ShowProbability;                                            // 0x001C   (0x0004)  
	float                                              MarketPriceMultiplier;                                      // 0x0020   (0x0004)  
	int32_t                                            bIsPlayUIEffect;                                            // 0x0024   (0x0004)  
	int32_t                                            FixedPrice;                                                 // 0x0028   (0x0004)  
	int32_t                                            TypeBelong;                                                 // 0x002C   (0x0004)  
	int32_t                                            PlayerBuyNumLimit;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FgroupInfo>                                 MaxBuyNumGroup;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.SupplyStationGroupConfigTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSupplyStationGroupConfigTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	float                                              FixArmorCoe;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.StickersTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FStickersTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            StickersIconPath;                                           // 0x0010   (0x0010)  
	FString                                            StickersGifTexture;                                         // 0x0020   (0x0010)  
	uint32_t                                           isGif;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0038   (0x0010)  
	TArray<uint32_t>                                   jump_goto;                                                  // 0x0048   (0x0010)  
	FText                                              no_source_description;                                      // 0x0058   (0x0018)  
};

/// Struct /Script/UADataTableModule.SteamAchievementConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FSteamAchievementConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              achievement_name;                                           // 0x0010   (0x0018)  
	FText                                              stat_name;                                                  // 0x0028   (0x0018)  
	uint32_t                                           statis_event_id;                                            // 0x0040   (0x0004)  
	uint32_t                                           max_progress;                                               // 0x0044   (0x0004)  
};

/// Struct /Script/UADataTableModule.StashSlotConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FStashSlotConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           money_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           money_num;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.StandaloneWeatherTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FStandaloneWeatherTableRow : FTableRowBase
{ 
	uint32_t                                           PlaymModeID;                                                // 0x0008   (0x0004)  
	uint32_t                                           Weather1;                                                   // 0x000C   (0x0004)  
	uint32_t                                           Weather2;                                                   // 0x0010   (0x0004)  
	uint32_t                                           Weather3;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Weather4;                                                   // 0x0018   (0x0004)  
	uint32_t                                           Weather5;                                                   // 0x001C   (0x0004)  
	uint32_t                                           Weather6;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.SprayIconTextureTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FSprayIconTextureTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              SprayDescription;                                           // 0x0010   (0x0018)  
	uint32_t                                           isGif;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            SprayTexture;                                               // 0x0030   (0x0010)  
	float                                              SprayScale;                                                 // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0048   (0x0010)  
	TArray<uint32_t>                                   jump_goto;                                                  // 0x0058   (0x0010)  
	FText                                              no_source_description;                                      // 0x0068   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0080   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0088   (0x0018)  
	FVector2D                                          SprayUVTiling;                                              // 0x00A0   (0x0008)  
	float                                              SprayFrameRate;                                             // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.SpeechConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FSpeechConfTableRow : FTableRowBase
{ 
	uint32_t                                           SpeechID;                                                   // 0x0008   (0x0004)  
	uint32_t                                           NPCID;                                                      // 0x000C   (0x0004)  
	TArray<uint32_t>                                   Npc_stage;                                                  // 0x0010   (0x0010)  
	uint32_t                                           SpeechType;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              SpeechText;                                                 // 0x0028   (0x0018)  
	TArray<uint32_t>                                   Level;                                                      // 0x0040   (0x0010)  
	uint32_t                                           QuestID;                                                    // 0x0050   (0x0004)  
	uint32_t                                           QspeechType;                                                // 0x0054   (0x0004)  
	FText                                              AudioEvent;                                                 // 0x0058   (0x0018)  
	FText                                              BNK;                                                        // 0x0070   (0x0018)  
};

/// Struct /Script/UADataTableModule.SpecialItemTagConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FSpecialItemTagConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Tag;                                                        // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.SpecialDanceTableRow
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FSpecialDanceTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            GestureIconPath;                                            // 0x0010   (0x0010)  
	FText                                              GestureDescription;                                         // 0x0020   (0x0018)  
	FString                                            AnimationName;                                              // 0x0038   (0x0010)  
	FString                                            AnimationName_Fake;                                         // 0x0048   (0x0010)  
	uint32_t                                           depend_avatar;                                              // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0060   (0x0010)  
	TArray<uint32_t>                                   jump_goto;                                                  // 0x0070   (0x0010)  
	FText                                              no_source_description;                                      // 0x0080   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0098   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x00A0   (0x0018)  
};

/// Struct /Script/UADataTableModule.SpecialWeatherConf
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSpecialWeatherConf
{ 
	int32_t                                            virtual_begin_time;                                         // 0x0000   (0x0004)  
	uint32_t                                           init_weather;                                               // 0x0004   (0x0004)  
	uint32_t                                           Disable_ingame_timeflow;                                    // 0x0008   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.SpWeatherConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FSpWeatherConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSpecialWeatherConf>                        sp_weather_vec;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.SoundConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FSoundConfTableRow : FTableRowBase
{ 
	FName                                              sound_name;                                                 // 0x0008   (0x0008)  
	FText                                              chn_name;                                                   // 0x0010   (0x0018)  
	FText                                              desc;                                                       // 0x0028   (0x0018)  
	FString                                            sound_ak_event;                                             // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.SkipTutorialTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FSkipTutorialTableRow : FTableRowBase
{ 
	uint32_t                                           QuestionId;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Question;                                                   // 0x0010   (0x0010)  
	FString                                            Option1;                                                    // 0x0020   (0x0010)  
	FString                                            Option2;                                                    // 0x0030   (0x0010)  
	FString                                            Option3;                                                    // 0x0040   (0x0010)  
	FString                                            Option4;                                                    // 0x0050   (0x0010)  
	uint32_t                                           Answer;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ShowExtendConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FShowExtendConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Lower_Price;                                                // 0x000C   (0x0004)  
	uint32_t                                           Upper_Price;                                                // 0x0010   (0x0004)  
	uint32_t                                           Lower_Extend;                                               // 0x0014   (0x0004)  
	uint32_t                                           Upper_Extend;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ShowDetailTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FShowDetailTableRow : FTableRowBase
{ 
	uint64_t                                           ItemId;                                                     // 0x0008   (0x0008)  
	uint32_t                                           ShowDetailType;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            ResourcePath;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.ShockConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FShockConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ShockPath;                                                  // 0x0010   (0x0010)  
	float                                              Duration;                                                   // 0x0020   (0x0004)  
	uint32_t                                           Amplitude;                                                  // 0x0024   (0x0004)  
	float                                              CooldownTime;                                               // 0x0028   (0x0004)  
	uint32_t                                           Default;                                                    // 0x002C   (0x0004)  
	uint32_t                                           Loop;                                                       // 0x0030   (0x0004)  
	uint32_t                                           Interval;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/UADataTableModule.ShareTextTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FShareTextTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	FText                                              Text;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.ShareTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FShareTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              pic_desc;                                                   // 0x0010   (0x0018)  
	FString                                            pic;                                                        // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.ServerKey2TextTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FServerKey2TextTableRow : FTableRowBase
{ 
	FString                                            ServerKey;                                                  // 0x0008   (0x0010)  
	FText                                              ServerText;                                                 // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.ServerInfoTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FServerInfoTableRow : FTableRowBase
{ 
	uint32_t                                           ServerCode;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Describe;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.SecurityQuestionConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FSecurityQuestionConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              QuestionDesc;                                               // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.SeasonTaskTreeConfTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FSeasonTaskTreeConfTableRow : FTableRowBase
{ 
	uint32_t                                           show_order;                                                 // 0x0008   (0x0004)  
	uint32_t                                           child_len;                                                  // 0x000C   (0x0004)  
	uint32_t                                           root_task_id;                                               // 0x0010   (0x0004)  
	uint32_t                                           child1;                                                     // 0x0014   (0x0004)  
	uint32_t                                           child2;                                                     // 0x0018   (0x0004)  
	uint32_t                                           child3;                                                     // 0x001C   (0x0004)  
	uint32_t                                           child4;                                                     // 0x0020   (0x0004)  
	uint32_t                                           child5;                                                     // 0x0024   (0x0004)  
	uint32_t                                           child6;                                                     // 0x0028   (0x0004)  
	uint32_t                                           child7;                                                     // 0x002C   (0x0004)  
	uint32_t                                           child8;                                                     // 0x0030   (0x0004)  
	uint32_t                                           child9;                                                     // 0x0034   (0x0004)  
	uint32_t                                           child10;                                                    // 0x0038   (0x0004)  
	uint32_t                                           child11;                                                    // 0x003C   (0x0004)  
	uint32_t                                           child12;                                                    // 0x0040   (0x0004)  
	uint32_t                                           child13;                                                    // 0x0044   (0x0004)  
	uint32_t                                           child14;                                                    // 0x0048   (0x0004)  
	uint32_t                                           child15;                                                    // 0x004C   (0x0004)  
	uint32_t                                           child16;                                                    // 0x0050   (0x0004)  
	uint32_t                                           child17;                                                    // 0x0054   (0x0004)  
	uint32_t                                           child18;                                                    // 0x0058   (0x0004)  
	uint32_t                                           child19;                                                    // 0x005C   (0x0004)  
	uint32_t                                           child20;                                                    // 0x0060   (0x0004)  
	uint32_t                                           child21;                                                    // 0x0064   (0x0004)  
	uint32_t                                           child22;                                                    // 0x0068   (0x0004)  
	uint32_t                                           child23;                                                    // 0x006C   (0x0004)  
	uint32_t                                           child24;                                                    // 0x0070   (0x0004)  
	uint32_t                                           child25;                                                    // 0x0074   (0x0004)  
	uint32_t                                           child26;                                                    // 0x0078   (0x0004)  
	uint32_t                                           child27;                                                    // 0x007C   (0x0004)  
	uint32_t                                           child28;                                                    // 0x0080   (0x0004)  
	uint32_t                                           child29;                                                    // 0x0084   (0x0004)  
	uint32_t                                           child30;                                                    // 0x0088   (0x0004)  
	uint32_t                                           child31;                                                    // 0x008C   (0x0004)  
	uint32_t                                           child32;                                                    // 0x0090   (0x0004)  
	uint32_t                                           child33;                                                    // 0x0094   (0x0004)  
	uint32_t                                           child34;                                                    // 0x0098   (0x0004)  
	uint32_t                                           child35;                                                    // 0x009C   (0x0004)  
	uint32_t                                           child36;                                                    // 0x00A0   (0x0004)  
	uint32_t                                           child37;                                                    // 0x00A4   (0x0004)  
	uint32_t                                           child38;                                                    // 0x00A8   (0x0004)  
	uint32_t                                           child39;                                                    // 0x00AC   (0x0004)  
};

/// Struct /Script/UADataTableModule.SeasonPublicityTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FSeasonPublicityTableRow : FTableRowBase
{ 
	uint32_t                                           info_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           info_type;                                                  // 0x000C   (0x0004)  
	FString                                            info_picture;                                               // 0x0010   (0x0010)  
	FText                                              info_big_title;                                             // 0x0020   (0x0018)  
	FText                                              info_small_title;                                           // 0x0038   (0x0018)  
	FText                                              info_describe1;                                             // 0x0050   (0x0018)  
	FText                                              info_describe2;                                             // 0x0068   (0x0018)  
	FString                                            info_path;                                                  // 0x0080   (0x0010)  
};

/// Struct /Script/UADataTableModule.SeasonCrossOverTaskTreeConfTableRow
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FSeasonCrossOverTaskTreeConfTableRow : FTableRowBase
{ 
	uint32_t                                           show_order;                                                 // 0x0008   (0x0004)  
	uint32_t                                           child_len;                                                  // 0x000C   (0x0004)  
	uint32_t                                           root_task_id;                                               // 0x0010   (0x0004)  
	uint32_t                                           child1;                                                     // 0x0014   (0x0004)  
	uint32_t                                           child2;                                                     // 0x0018   (0x0004)  
	uint32_t                                           child3;                                                     // 0x001C   (0x0004)  
	uint32_t                                           child4;                                                     // 0x0020   (0x0004)  
	uint32_t                                           child5;                                                     // 0x0024   (0x0004)  
	uint32_t                                           child6;                                                     // 0x0028   (0x0004)  
	uint32_t                                           child7;                                                     // 0x002C   (0x0004)  
	uint32_t                                           child8;                                                     // 0x0030   (0x0004)  
	uint32_t                                           child9;                                                     // 0x0034   (0x0004)  
	uint32_t                                           child10;                                                    // 0x0038   (0x0004)  
	uint32_t                                           child11;                                                    // 0x003C   (0x0004)  
	uint32_t                                           child12;                                                    // 0x0040   (0x0004)  
	uint32_t                                           child13;                                                    // 0x0044   (0x0004)  
	uint32_t                                           child14;                                                    // 0x0048   (0x0004)  
	uint32_t                                           child15;                                                    // 0x004C   (0x0004)  
	uint32_t                                           child16;                                                    // 0x0050   (0x0004)  
	uint32_t                                           child17;                                                    // 0x0054   (0x0004)  
	uint32_t                                           child18;                                                    // 0x0058   (0x0004)  
	uint32_t                                           child19;                                                    // 0x005C   (0x0004)  
	uint32_t                                           child20;                                                    // 0x0060   (0x0004)  
	uint32_t                                           child21;                                                    // 0x0064   (0x0004)  
	uint32_t                                           child22;                                                    // 0x0068   (0x0004)  
	uint32_t                                           child23;                                                    // 0x006C   (0x0004)  
	uint32_t                                           child24;                                                    // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ScreenEffectPaddingTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FScreenEffectPaddingTableRow : FTableRowBase
{ 
	FString                                            AssetName;                                                  // 0x0008   (0x0010)  
	float                                              Left;                                                       // 0x0018   (0x0004)  
	float                                              Top;                                                        // 0x001C   (0x0004)  
	float                                              Right;                                                      // 0x0020   (0x0004)  
	float                                              Bottom;                                                     // 0x0024   (0x0004)  
	float                                              MarginLeft;                                                 // 0x0028   (0x0004)  
	float                                              MarginTop;                                                  // 0x002C   (0x0004)  
	float                                              MarginRight;                                                // 0x0030   (0x0004)  
	float                                              MarginBottom;                                               // 0x0034   (0x0004)  
};

/// Struct /Script/UADataTableModule.WeaponScopeScale
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FWeaponScopeScale
{ 
	uint64_t                                           ID;                                                         // 0x0000   (0x0008)  
	FText                                              WeaponName;                                                 // 0x0008   (0x0018)  
	float                                              RoScale;                                                    // 0x0020   (0x0004)  
	float                                              LoScale;                                                    // 0x0024   (0x0004)  
	float                                              ADSGunKickScale;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ScopeScaleConfigTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FScopeScaleConfigTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	TArray<FWeaponScopeScale>                          WeaponScopeScale;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.Scheme703060006TableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FScheme703060006TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Vest;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Armor;                                                      // 0x0010   (0x0004)  
	uint32_t                                           Backpack;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Helmet;                                                     // 0x0018   (0x0004)  
	uint32_t                                           Visor;                                                      // 0x001C   (0x0004)  
	uint32_t                                           Headset;                                                    // 0x0020   (0x0004)  
	uint32_t                                           Mask;                                                       // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.Scheme703060005TableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FScheme703060005TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Vest;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Armor;                                                      // 0x0010   (0x0004)  
	uint32_t                                           Backpack;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Helmet;                                                     // 0x0018   (0x0004)  
	uint32_t                                           Visor;                                                      // 0x001C   (0x0004)  
	uint32_t                                           Headset;                                                    // 0x0020   (0x0004)  
	uint32_t                                           Mask;                                                       // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.Scheme703060004TableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FScheme703060004TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Vest;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Armor;                                                      // 0x0010   (0x0004)  
	uint32_t                                           Backpack;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Helmet;                                                     // 0x0018   (0x0004)  
	uint32_t                                           Visor;                                                      // 0x001C   (0x0004)  
	uint32_t                                           Headset;                                                    // 0x0020   (0x0004)  
	uint32_t                                           Mask;                                                       // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.Scheme703060003TableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FScheme703060003TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Vest;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Armor;                                                      // 0x0010   (0x0004)  
	uint32_t                                           Backpack;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Helmet;                                                     // 0x0018   (0x0004)  
	uint32_t                                           Visor;                                                      // 0x001C   (0x0004)  
	uint32_t                                           Headset;                                                    // 0x0020   (0x0004)  
	uint32_t                                           Mask;                                                       // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.Scheme703060002TableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FScheme703060002TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Vest;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Armor;                                                      // 0x0010   (0x0004)  
	uint32_t                                           Backpack;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Helmet;                                                     // 0x0018   (0x0004)  
	uint32_t                                           Visor;                                                      // 0x001C   (0x0004)  
	uint32_t                                           Headset;                                                    // 0x0020   (0x0004)  
	uint32_t                                           Mask;                                                       // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.Scheme703060001TableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FScheme703060001TableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Vest;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Armor;                                                      // 0x0010   (0x0004)  
	uint32_t                                           Backpack;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Helmet;                                                     // 0x0018   (0x0004)  
	uint32_t                                           Visor;                                                      // 0x001C   (0x0004)  
	uint32_t                                           Headset;                                                    // 0x0020   (0x0004)  
	uint32_t                                           Mask;                                                       // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.ExtEquipConf
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FExtEquipConf
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
	uint32_t                                           Type;                                                       // 0x0004   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.ScavEquipConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FScavEquipConfTableRow : FTableRowBase
{ 
	uint32_t                                           is_npc;                                                     // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           class_id;                                                   // 0x0010   (0x0004)  
	uint32_t                                           slot_index;                                                 // 0x0014   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0018   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x001C   (0x0004)  
	TArray<FExtEquipConf>                              exts;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.ScavAIDynamicLimitTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FScavAIDynamicLimitTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<float>                                      Weather;                                                    // 0x0028   (0x0010)  
	int32_t                                            ExpectedPMCPlayerNum;                                       // 0x0038   (0x0004)  
	float                                              ScavAIDynamicLimitStartTime;                                // 0x003C   (0x0004)  
	int32_t                                            ScavLimitPerPMCPlayer;                                      // 0x0040   (0x0004)  
	int32_t                                            ScavLimitBase;                                              // 0x0044   (0x0004)  
};

/// Struct /Script/UADataTableModule.LimitPoolConf
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FLimitPoolConf
{ 
	uint32_t                                           shield_type;                                                // 0x0000   (0x0004)  
	uint32_t                                           sub_item_id;                                                // 0x0004   (0x0004)  
	uint32_t                                           sub_item_num;                                               // 0x0008   (0x0004)  
	uint32_t                                           Probability;                                                // 0x000C   (0x0004)  
	uint32_t                                           pool_id;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/UADataTableModule.SafeLootLimitTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FSafeLootLimitTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FLimitPoolConf>                             PoolLists;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.SafeBoxConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FSafeBoxConfTableRow : FTableRowBase
{ 
	uint32_t                                           container_id;                                               // 0x0008   (0x0004)  
	uint32_t                                           show_index;                                                 // 0x000C   (0x0004)  
	uint32_t                                           day_price;                                                  // 0x0010   (0x0004)  
	uint32_t                                           is_hidden;                                                  // 0x0014   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x0018   (0x0004)  
	uint32_t                                           is_time;                                                    // 0x001C   (0x0004)  
	FText                                              list_desc;                                                  // 0x0020   (0x0018)  
	uint32_t                                           jump_goto;                                                  // 0x0038   (0x0004)  
	uint32_t                                           Price;                                                      // 0x003C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RoomKVConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRoomKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<int64_t>                                    val_array;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookirTriggerSummaryConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRookirTriggerSummaryConfTableRow : FTableRowBase
{ 
	uint32_t                                           trigger_id;                                                 // 0x0008   (0x0004)  
	uint32_t                                           repetition_allowed;                                         // 0x000C   (0x0004)  
	FText                                              desc;                                                       // 0x0010   (0x0018)  
	TArray<uint32_t>                                   check_play_mode;                                            // 0x0028   (0x0010)  
	uint32_t                                           trigger_level;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RookieTriggerTypeConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRookieTriggerTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           season_clear;                                               // 0x000C   (0x0004)  
	uint32_t                                           trigger_id;                                                 // 0x0010   (0x0004)  
	uint32_t                                           rookieTriggerType;                                          // 0x0014   (0x0004)  
	TArray<uint64_t>                                   ItemId;                                                     // 0x0018   (0x0010)  
	TArray<uint32_t>                                   tagid;                                                      // 0x0028   (0x0010)  
	uint32_t                                           traderid;                                                   // 0x0038   (0x0004)  
	uint32_t                                           AttachType;                                                 // 0x003C   (0x0004)  
	uint32_t                                           Priority;                                                   // 0x0040   (0x0004)  
	uint32_t                                           triggertimes;                                               // 0x0044   (0x0004)  
	uint32_t                                           cdtimes;                                                    // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<uint32_t>                                   List;                                                       // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieTriggerIdConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FRookieTriggerIdConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           season_clear;                                               // 0x000C   (0x0004)  
	uint32_t                                           trigger_id;                                                 // 0x0010   (0x0004)  
	uint32_t                                           trigger_type;                                               // 0x0014   (0x0004)  
	uint32_t                                           is_pop_after_unlock;                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<uint64_t>                                   cond_value;                                                 // 0x0020   (0x0010)  
	TArray<uint32_t>                                   extra_param;                                                // 0x0030   (0x0010)  
	char                                               trigger_level;                                              // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	uint32_t                                           Priority;                                                   // 0x0044   (0x0004)  
	uint32_t                                           triggertimes;                                               // 0x0048   (0x0004)  
	uint32_t                                           cdtimes;                                                    // 0x004C   (0x0004)  
	FString                                            trigger_panel;                                              // 0x0050   (0x0010)  
	TArray<uint32_t>                                   List;                                                       // 0x0060   (0x0010)  
};

/// Struct /Script/UADataTableModule.TriggerRookieItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FTriggerRookieItem
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
	uint32_t                                           break_jump;                                                 // 0x0004   (0x0004)  
	TArray<uint32_t>                                   get_itemid;                                                 // 0x0008   (0x0010)  
	uint32_t                                           ItemId;                                                     // 0x0018   (0x0004)  
	uint32_t                                           trade_id;                                                   // 0x001C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RookieTriggerConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRookieTriggerConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           arg;                                                        // 0x000C   (0x0004)  
	uint32_t                                           season_clear;                                               // 0x0010   (0x0004)  
	uint32_t                                           trigger_id;                                                 // 0x0014   (0x0004)  
	uint32_t                                           trigger_type;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	uint64_t                                           cond_value;                                                 // 0x0020   (0x0008)  
	uint32_t                                           sys_id;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FTriggerRookieItem>                         List;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieTraderUnlockConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRookieTraderUnlockConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           traderid;                                                   // 0x000C   (0x0004)  
	uint32_t                                           season_clear;                                               // 0x0010   (0x0004)  
	uint32_t                                           trigger_id;                                                 // 0x0014   (0x0004)  
	TArray<uint32_t>                                   List;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieTaskDoneConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRookieTaskDoneConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           TaskId;                                                     // 0x000C   (0x0004)  
	uint32_t                                           season_clear;                                               // 0x0010   (0x0004)  
	uint32_t                                           trigger_id;                                                 // 0x0014   (0x0004)  
	uint32_t                                           State;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<uint32_t>                                   List;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieStepConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRookieStepConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           pre_taskid;                                                 // 0x000C   (0x0004)  
	uint32_t                                           forceguildtype;                                             // 0x0010   (0x0004)  
	uint32_t                                           jump_id;                                                    // 0x0014   (0x0004)  
	uint32_t                                           break_jump;                                                 // 0x0018   (0x0004)  
	uint32_t                                           protected_jump;                                             // 0x001C   (0x0004)  
	uint32_t                                           is_effective;                                               // 0x0020   (0x0004)  
	uint32_t                                           is_repeatable;                                              // 0x0024   (0x0004)  
	TArray<uint32_t>                                   get_itemid;                                                 // 0x0028   (0x0010)  
	uint32_t                                           ItemId;                                                     // 0x0038   (0x0004)  
	uint32_t                                           trade_id;                                                   // 0x003C   (0x0004)  
	TArray<uint32_t>                                   block_action;                                               // 0x0040   (0x0010)  
	TArray<uint32_t>                                   tips_list;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieSendItemBackConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRookieSendItemBackConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           Num;                                                        // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RookieMailReceiveConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRookieMailReceiveConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           mailType;                                                   // 0x000C   (0x0004)  
	uint32_t                                           season_clear;                                               // 0x0010   (0x0004)  
	uint32_t                                           trigger_id;                                                 // 0x0014   (0x0004)  
	TArray<uint32_t>                                   List;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieItemPickConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRookieItemPickConfTableRow : FTableRowBase
{ 
	uint32_t                                           ItemIdIndex;                                                // 0x0008   (0x0004)  
	uint32_t                                           season_clear;                                               // 0x000C   (0x0004)  
	uint32_t                                           trigger_id;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<uint64_t>                                   itemIdAndType;                                              // 0x0018   (0x0010)  
	uint32_t                                           classifytype;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<uint32_t>                                   takescope;                                                  // 0x0030   (0x0010)  
	uint32_t                                           triggertimes;                                               // 0x0040   (0x0004)  
	uint32_t                                           cdtimes;                                                    // 0x0044   (0x0004)  
	TArray<uint32_t>                                   List;                                                       // 0x0048   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieGunCheckConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRookieGunCheckConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           ItemId;                                                     // 0x0010   (0x0008)  
	TArray<uint32_t>                                   List;                                                       // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.RookieDetailConfTableRow
/// Size: 0x0198 (408 bytes) (0x000008 - 0x000198) align 8 MaxSize: 0x0198
struct FRookieDetailConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	FText                                              desc;                                                       // 0x0010   (0x0018)  
	FText                                              desc1;                                                      // 0x0028   (0x0018)  
	uint32_t                                           SubType;                                                    // 0x0040   (0x0004)  
	float                                              positionX;                                                  // 0x0044   (0x0004)  
	float                                              positionY;                                                  // 0x0048   (0x0004)  
	float                                              SizeX;                                                      // 0x004C   (0x0004)  
	float                                              SizeY;                                                      // 0x0050   (0x0004)  
	float                                              offsetX;                                                    // 0x0054   (0x0004)  
	uint32_t                                           unloadchecktype;                                            // 0x0058   (0x0004)  
	uint32_t                                           AttachType;                                                 // 0x005C   (0x0004)  
	uint32_t                                           CheckCondition;                                             // 0x0060   (0x0004)  
	float                                              EffectScale;                                                // 0x0064   (0x0004)  
	uint32_t                                           buttonSizeX;                                                // 0x0068   (0x0004)  
	uint32_t                                           buttonSizeY;                                                // 0x006C   (0x0004)  
	FString                                            panelName;                                                  // 0x0070   (0x0010)  
	uint32_t                                           TaskId;                                                     // 0x0080   (0x0004)  
	uint32_t                                           businessId;                                                 // 0x0084   (0x0004)  
	uint32_t                                           classifyId;                                                 // 0x0088   (0x0004)  
	uint32_t                                           warehousesubid;                                             // 0x008C   (0x0004)  
	uint32_t                                           prepareid;                                                  // 0x0090   (0x0004)  
	uint32_t                                           prepareTab;                                                 // 0x0094   (0x0004)  
	uint32_t                                           mapRuleType;                                                // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FString                                            btnName;                                                    // 0x00A0   (0x0010)  
	uint32_t                                           itemSpaceType;                                              // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FString                                            waitPanelName;                                              // 0x00B8   (0x0010)  
	FString                                            backPanelName;                                              // 0x00C8   (0x0010)  
	FString                                            waitSubPanelName;                                           // 0x00D8   (0x0010)  
	FString                                            waitClosePanelName;                                         // 0x00E8   (0x0010)  
	uint64_t                                           dragItemid;                                                 // 0x00F8   (0x0008)  
	uint64_t                                           ParentID;                                                   // 0x0100   (0x0008)  
	uint32_t                                           movieid;                                                    // 0x0108   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	TArray<uint32_t>                                   pptid;                                                      // 0x0110   (0x0010)  
	uint32_t                                           pptemptyclose;                                              // 0x0120   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	FText                                              DisplayName;                                                // 0x0128   (0x0018)  
	uint32_t                                           displayType;                                                // 0x0140   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	FString                                            sound_name;                                                 // 0x0148   (0x0010)  
	uint32_t                                           attachCheckType;                                            // 0x0158   (0x0004)  
	uint32_t                                           passCheck;                                                  // 0x015C   (0x0004)  
	FText                                              floatTitle;                                                 // 0x0160   (0x0018)  
	TArray<FText>                                      floatContent;                                               // 0x0178   (0x0010)  
	uint32_t                                           isfloating;                                                 // 0x0188   (0x0004)  
	uint32_t                                           isShowpromptly;                                             // 0x018C   (0x0004)  
	uint32_t                                           talkcharacter;                                              // 0x0190   (0x0004)  
	uint32_t                                           scrollAttachType;                                           // 0x0194   (0x0004)  
};

/// Struct /Script/UADataTableModule.RoleKVDailyTimeConf
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRoleKVDailyTimeConf
{ 
	FText                                              daily_time;                                                 // 0x0000   (0x0018)  
};

/// Struct /Script/UADataTableModule.RoleKVConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRoleKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<int64_t>                                    val_array;                                                  // 0x0018   (0x0010)  
	TArray<FRoleKVDailyTimeConf>                       daily_time_vec;                                             // 0x0028   (0x0010)  
	FDateTime                                          time1;                                                      // 0x0038   (0x0008)  
	FDateTime                                          time2;                                                      // 0x0040   (0x0008)  
};

/// Struct /Script/UADataTableModule.RoleIdentityConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRoleIdentityConfTableRow : FTableRowBase
{ 
	uint32_t                                           IdentityId;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Describe;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.RoleBannerTagConfTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRoleBannerTagConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FText                                              desc;                                                       // 0x0028   (0x0018)  
	uint32_t                                           show_index;                                                 // 0x0040   (0x0004)  
	uint32_t                                           Type;                                                       // 0x0044   (0x0004)  
	uint32_t                                           is_hidden;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDateTime                                          abs_begin_time;                                             // 0x0050   (0x0008)  
	FDateTime                                          abs_end_time;                                               // 0x0058   (0x0008)  
	uint32_t                                           jump_goto;                                                  // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FText                                              no_source_description;                                      // 0x0068   (0x0018)  
	uint32_t                                           season_id;                                                  // 0x0080   (0x0004)  
	uint32_t                                           unlock_type;                                                // 0x0084   (0x0004)  
	uint32_t                                           unlock_param;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RoleBannerFrameConfTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRoleBannerFrameConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           is_dynamic;                                                 // 0x000C   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              no_source_description;                                      // 0x0018   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0038   (0x0018)  
	uint32_t                                           is_dynamic_logo;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/UADataTableModule.RoleBannerDefaultBadgeConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRoleBannerDefaultBadgeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RoleBannerDataBGConfTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRoleBannerDataBGConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           is_dynamic;                                                 // 0x000C   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              no_source_description;                                      // 0x0018   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0038   (0x0018)  
	uint32_t                                           is_dynamic_logo;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/UADataTableModule.RoleBannerCustomDataConfTableRow
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FRoleBannerCustomDataConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           is_off_sale;                                                // 0x000C   (0x0004)  
	uint32_t                                           show_index;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0018   (0x0018)  
	FText                                              desc;                                                       // 0x0030   (0x0018)  
	TArray<uint32_t>                                   data_type;                                                  // 0x0048   (0x0010)  
	FString                                            Format;                                                     // 0x0058   (0x0010)  
	FText                                              suffix;                                                     // 0x0068   (0x0018)  
};

/// Struct /Script/UADataTableModule.RoleBannerBackgroundConfTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRoleBannerBackgroundConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           is_dynamic;                                                 // 0x000C   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              no_source_description;                                      // 0x0018   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0038   (0x0018)  
	uint32_t                                           is_dynamic_logo;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/UADataTableModule.RobotNamePoolTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRobotNamePoolTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Group;                                                      // 0x000C   (0x0004)  
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.RoadmapAwardsConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRoadmapAwardsConfTableRow : FTableRowBase
{ 
	uint32_t                                           award_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           season_id;                                                  // 0x000C   (0x0004)  
	uint32_t                                           task_num;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              rewardgroup_name;                                           // 0x0018   (0x0018)  
	TArray<uint32_t>                                   rewardgroup_picture;                                        // 0x0030   (0x0010)  
	uint32_t                                           is_down;                                                    // 0x0040   (0x0004)  
	uint32_t                                           crossover_ID;                                               // 0x0044   (0x0004)  
	TArray<FAwardItemConf>                             awards;                                                     // 0x0048   (0x0010)  
};

/// Struct /Script/UADataTableModule.BlackItemConf
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FBlackItemConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.RewardsConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRewardsConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FBlackItemConf>                             rewards;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.RewardShareConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRewardShareConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   avatar_set;                                                 // 0x0010   (0x0010)  
	uint32_t                                           is_after;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ReturnTypeConfTableRow
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FReturnTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           return_type;                                                // 0x0008   (0x0004)  
	uint32_t                                           return_time;                                                // 0x000C   (0x0004)  
	uint32_t                                           return_player_level;                                        // 0x0010   (0x0004)  
	uint32_t                                           return_last_days;                                           // 0x0014   (0x0004)  
	TArray<uint32_t>                                   elo_interval;                                               // 0x0018   (0x0010)  
	TArray<uint32_t>                                   login_score;                                                // 0x0028   (0x0010)  
	TArray<uint32_t>                                   login_tag;                                                  // 0x0038   (0x0010)  
	TArray<uint32_t>                                   login_decrease_elo;                                         // 0x0048   (0x0010)  
	TArray<uint32_t>                                   wealth_elo_interval;                                        // 0x0058   (0x0010)  
	TArray<uint32_t>                                   login_decrease_wealth_elo;                                  // 0x0068   (0x0010)  
	uint32_t                                           match_elo_change_battle_cnt;                                // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<uint32_t>                                   match_elo_change;                                           // 0x0080   (0x0010)  
	TArray<uint32_t>                                   match_wealth_elo_change;                                    // 0x0090   (0x0010)  
};

/// Struct /Script/UADataTableModule.ResourceTypeIconConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FResourceTypeIconConfTableRow : FTableRowBase
{ 
	uint32_t                                           typeId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            icon;                                                       // 0x0010   (0x0010)  
	uint32_t                                           IsDefault;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ResourceListConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FResourceListConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FString                                            icon;                                                       // 0x0028   (0x0010)  
	char                                               rare;                                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<uint32_t>                                   typeId;                                                     // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.ResourceAreaConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FResourceAreaConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           MapID;                                                      // 0x000C   (0x0004)  
	uint32_t                                           tagid;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              TagName;                                                    // 0x0018   (0x0018)  
	uint32_t                                           MapVolumeId;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<uint32_t>                                   ShowLootVolumeId;                                           // 0x0038   (0x0010)  
	uint32_t                                           IsShowAll;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ReportReasonConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FReportReasonConfTableRow : FTableRowBase
{ 
	uint32_t                                           reason_id;                                                  // 0x0008   (0x0004)  
	uint32_t                                           Category;                                                   // 0x000C   (0x0004)  
	TArray<uint32_t>                                   use_scene;                                                  // 0x0010   (0x0010)  
	FText                                              Content;                                                    // 0x0020   (0x0018)  
	FText                                              desc;                                                       // 0x0038   (0x0018)  
};

/// Struct /Script/UADataTableModule.RepairMaterialConfTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRepairMaterialConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              material_name;                                              // 0x0010   (0x0018)  
	float                                              low_repair_coef;                                            // 0x0028   (0x0004)  
	float                                              low_tech_coef;                                              // 0x002C   (0x0004)  
	TArray<uint32_t>                                   low_repair_businessman_ids;                                 // 0x0030   (0x0010)  
	float                                              mid_repair_coef;                                            // 0x0040   (0x0004)  
	float                                              mid_tech_coef;                                              // 0x0044   (0x0004)  
	TArray<uint32_t>                                   mid_repair_businessman_ids;                                 // 0x0048   (0x0010)  
	float                                              high_repair_coef;                                           // 0x0058   (0x0004)  
	float                                              high_tech_coef;                                             // 0x005C   (0x0004)  
	TArray<uint32_t>                                   high_repair_businessman_ids;                                // 0x0060   (0x0010)  
	float                                              unit_repair_price_coef;                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              repairability;                                              // 0x0078   (0x0018)  
};

/// Struct /Script/UADataTableModule.DurabilityPriceConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDurabilityPriceConf
{ 
	uint32_t                                           armor_level;                                                // 0x0000   (0x0004)  
	uint32_t                                           durability_price;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.RepairDurabilityConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRepairDurabilityConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FDurabilityPriceConf>                       durability_price_conf;                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.RegistEquipConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRegistEquipConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Index;                                                      // 0x000C   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x0010   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0014   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FBlackItemConf>                             Items;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.RegionConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRegionConfTableRow : FTableRowBase
{ 
	uint32_t                                           Region;                                                     // 0x0008   (0x0004)  
	uint32_t                                           Open;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RecommendPlanConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRecommendPlanConfTableRow : FTableRowBase
{ 
	uint32_t                                           group_id;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           show_index;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              details;                                                    // 0x0030   (0x0018)  
	uint32_t                                           color_type;                                                 // 0x0048   (0x0004)  
	uint32_t                                           icon_type;                                                  // 0x004C   (0x0004)  
};

/// Struct /Script/UADataTableModule.PlanEquipItem
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FPlanEquipItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           is_rotate;                                                  // 0x0008   (0x0004)  
	uint32_t                                           Index;                                                      // 0x000C   (0x0004)  
	uint32_t                                           pos_x;                                                      // 0x0010   (0x0004)  
	uint32_t                                           pos_y;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.RecommendEquipTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRecommendEquipTableRow : FTableRowBase
{ 
	uint32_t                                           Key;                                                        // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	TArray<FPlanEquipItem>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.RechargeConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRechargeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           recharge_money;                                             // 0x000C   (0x0004)  
	uint32_t                                           recharge_reward;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RayTracingWhitelistTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRayTracingWhitelistTableRow : FTableRowBase
{ 
	uint32_t                                           RowId;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            GPUName;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.RankedWeekRewardConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRankedWeekRewardConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           active_point;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FCommonItemConfItem>                        rewards;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.RankedTopRankRewardConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRankedTopRankRewardConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           start_rank;                                                 // 0x000C   (0x0004)  
	uint32_t                                           end_rank;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FCommonItemConfItem>                        rewards;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.RankedTeamScoreConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRankedTeamScoreConfTableRow : FTableRowBase
{ 
	uint32_t                                           Rank;                                                       // 0x0008   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RankedSettleScoreConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRankedSettleScoreConfTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	uint32_t                                           kill_pmc_score_limit;                                       // 0x000C   (0x0004)  
	uint32_t                                           kill_scav_score_limit;                                      // 0x0010   (0x0004)  
	uint32_t                                           loot_value_score_limit;                                     // 0x0014   (0x0004)  
	uint32_t                                           loot_times_score_limit;                                     // 0x0018   (0x0004)  
	uint32_t                                           survial_score_limit;                                        // 0x001C   (0x0004)  
	uint32_t                                           assist_kill_score;                                          // 0x0020   (0x0004)  
	uint32_t                                           assist_kill_score_limit;                                    // 0x0024   (0x0004)  
	int32_t                                            penalty_score;                                              // 0x0028   (0x0004)  
	int32_t                                            chall_coin_factor;                                          // 0x002C   (0x0004)  
	int32_t                                            chall_coin_bonus;                                           // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RankedSeasonRewardConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRankedSeasonRewardConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FCommonItemConfItem>                        rewards;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.SeasonChapterRef
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FSeasonChapterRef
{ 
	uint32_t                                           chapter_id;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FText                                              chapter_name;                                               // 0x0008   (0x0018)  
	FString                                            cdn_image;                                                  // 0x0020   (0x0010)  
	uint32_t                                           rotate_distance;                                            // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FDateTime                                          chapter_begin_time;                                         // 0x0038   (0x0008)  
	FDateTime                                          chapter_end_time;                                           // 0x0040   (0x0008)  
};

/// Struct /Script/UADataTableModule.RankedSeasonConfTableRow
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FRankedSeasonConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          begin_time;                                                 // 0x0010   (0x0008)  
	FDateTime                                          warmup_end_time;                                            // 0x0018   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0020   (0x0008)  
	FDateTime                                          carnival_end_time;                                          // 0x0028   (0x0008)  
	FDateTime                                          season_end_time;                                            // 0x0030   (0x0008)  
	FText                                              desc;                                                       // 0x0038   (0x0018)  
	uint32_t                                           is_delay_start;                                             // 0x0050   (0x0004)  
	uint32_t                                           show_season_id;                                             // 0x0054   (0x0004)  
	uint32_t                                           season_reward_base;                                         // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FDateTime                                          countdown_time;                                             // 0x0060   (0x0008)  
	uint32_t                                           bp_lv_award_group_id;                                       // 0x0068   (0x0004)  
	uint32_t                                           ranked_lv_award_group_id;                                   // 0x006C   (0x0004)  
	uint32_t                                           badge_group_id;                                             // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            background_img;                                             // 0x0078   (0x0010)  
	TArray<FSeasonChapterRef>                          season_chapter;                                             // 0x0088   (0x0010)  
};

/// Struct /Script/UADataTableModule.RankedProtectionConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRankedProtectionConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           level_start;                                                // 0x000C   (0x0004)  
	uint32_t                                           level_end;                                                  // 0x0010   (0x0004)  
	uint32_t                                           protection_num;                                             // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.RankedOldLevelMappingTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRankedOldLevelMappingTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	uint32_t                                           before_ea_level;                                            // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RankedNewScoreConfTableRow
/// Size: 0x0300 (768 bytes) (0x000008 - 0x000300) align 8 MaxSize: 0x0300
struct FRankedNewScoreConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Group;                                                      // 0x000C   (0x0004)  
	uint32_t                                           Level;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<int32_t>                                    ranked_level_diff;                                          // 0x0018   (0x0010)  
	TArray<uint32_t>                                   bonus_score;                                                // 0x0028   (0x0010)  
	uint32_t                                           kill_wander_normal_score;                                   // 0x0038   (0x0004)  
	uint32_t                                           kill_wander_boss_score;                                     // 0x003C   (0x0004)  
	uint32_t                                           loot_value_score;                                           // 0x0040   (0x0004)  
	uint32_t                                           loot_times_score;                                           // 0x0044   (0x0004)  
	uint32_t                                           survial_score;                                              // 0x0048   (0x0004)  
	uint32_t                                           assist_kill_score;                                          // 0x004C   (0x0004)  
	uint32_t                                           faction_win_score;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<int32_t>                                    round_kill_range;                                           // 0x0058   (0x0010)  
	TArray<uint32_t>                                   round_kill_score;                                           // 0x0068   (0x0010)  
	TArray<int32_t>                                    round_dead_range;                                           // 0x0078   (0x0010)  
	TArray<int32_t>                                    round_dead_score;                                           // 0x0088   (0x0010)  
	TArray<int32_t>                                    round_kd_range;                                             // 0x0098   (0x0010)  
	TArray<uint32_t>                                   round_kd_score;                                             // 0x00A8   (0x0010)  
	uint32_t                                           round_win_basescore;                                        // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<int32_t>                                    round_win_scorediff_range;                                  // 0x00C0   (0x0010)  
	TArray<uint32_t>                                   round_win_scorediff_value;                                  // 0x00D0   (0x0010)  
	TArray<int32_t>                                    round_win_teamrun;                                          // 0x00E0   (0x0010)  
	TArray<uint32_t>                                   round_win_teamrun_value;                                    // 0x00F0   (0x0010)  
	int32_t                                            round_lose_basescore;                                       // 0x0100   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	TArray<int32_t>                                    round_lose_scorediff_range;                                 // 0x0108   (0x0010)  
	TArray<uint32_t>                                   round_lose_scorediff_value;                                 // 0x0118   (0x0010)  
	TArray<int32_t>                                    round_lose_teamrun;                                         // 0x0128   (0x0010)  
	TArray<uint32_t>                                   round_lose_teamrun_value;                                   // 0x0138   (0x0010)  
	int32_t                                            round_run_score;                                            // 0x0148   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	TArray<int32_t>                                    tdm_kill_range;                                             // 0x0150   (0x0010)  
	TArray<uint32_t>                                   tdm_kill_score;                                             // 0x0160   (0x0010)  
	TArray<int32_t>                                    tdm_dead_range;                                             // 0x0170   (0x0010)  
	TArray<int32_t>                                    tdm_dead_score;                                             // 0x0180   (0x0010)  
	TArray<int32_t>                                    tdm_kd_range;                                               // 0x0190   (0x0010)  
	TArray<uint32_t>                                   tdm_kd_score;                                               // 0x01A0   (0x0010)  
	uint32_t                                           tdm_win_basescore;                                          // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	TArray<int32_t>                                    tdm_win_scorediff_range;                                    // 0x01B8   (0x0010)  
	TArray<uint32_t>                                   tdm_win_scorediff_value;                                    // 0x01C8   (0x0010)  
	TArray<int32_t>                                    tdm_win_teamrun;                                            // 0x01D8   (0x0010)  
	TArray<uint32_t>                                   tdm_win_teamrun_value;                                      // 0x01E8   (0x0010)  
	int32_t                                            tdm_lose_basescore;                                         // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x01FC   (0x0004)  MISSED
	TArray<int32_t>                                    tdm_lose_scorediff_range;                                   // 0x0200   (0x0010)  
	TArray<uint32_t>                                   tdm_lose_scorediff_value;                                   // 0x0210   (0x0010)  
	TArray<int32_t>                                    tdm_lose_teamrun;                                           // 0x0220   (0x0010)  
	TArray<uint32_t>                                   tdm_lose_teamrun_value;                                     // 0x0230   (0x0010)  
	int32_t                                            tdm_even_basescore;                                         // 0x0240   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	TArray<int32_t>                                    tdm_even_scorediff_range;                                   // 0x0248   (0x0010)  
	TArray<uint32_t>                                   tdm_even_scorediff_value;                                   // 0x0258   (0x0010)  
	TArray<int32_t>                                    tdm_even_teamrun;                                           // 0x0268   (0x0010)  
	TArray<uint32_t>                                   tdm_even_teamrun_value;                                     // 0x0278   (0x0010)  
	int32_t                                            tdm_run_score;                                              // 0x0288   (0x0004)  
	int32_t                                            tdm_lastkill_score;                                         // 0x028C   (0x0004)  
	TArray<int32_t>                                    tdm_totaldefeat_scorediff_range;                            // 0x0290   (0x0010)  
	TArray<uint32_t>                                   tdm_totaldefeat_scorediff_value;                            // 0x02A0   (0x0010)  
	uint32_t                                           kill_pmc_score_limit;                                       // 0x02B0   (0x0004)  
	uint32_t                                           kill_scav_score_limit;                                      // 0x02B4   (0x0004)  
	uint32_t                                           loot_value_score_limit;                                     // 0x02B8   (0x0004)  
	uint32_t                                           loot_times_score_limit;                                     // 0x02BC   (0x0004)  
	uint32_t                                           survial_score_limit;                                        // 0x02C0   (0x0004)  
	uint32_t                                           assist_kill_score_limit;                                    // 0x02C4   (0x0004)  
	int32_t                                            penalty_score;                                              // 0x02C8   (0x0004)  
	int32_t                                            chall_coin_factor;                                          // 0x02CC   (0x0004)  
	int32_t                                            chall_coin_bonus;                                           // 0x02D0   (0x0004)  
	unsigned char                                      UnknownData08_6[0x4];                                       // 0x02D4   (0x0004)  MISSED
	TArray<int32_t>                                    fight_times;                                                // 0x02D8   (0x0010)  
	TArray<int32_t>                                    fight_times_factor;                                         // 0x02E8   (0x0010)  
	int32_t                                            difficulty_score_factor;                                    // 0x02F8   (0x0004)  
	int32_t                                            difficulty_penalty_score_factor;                            // 0x02FC   (0x0004)  
};

/// Struct /Script/UADataTableModule.RankedMapConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRankedMapConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          begin_time;                                                 // 0x0010   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0018   (0x0008)  
	TArray<uint32_t>                                   ranked_map_list;                                            // 0x0020   (0x0010)  
	TArray<uint32_t>                                   factor_list;                                                // 0x0030   (0x0010)  
	TArray<int32_t>                                    ranked_rulegroup;                                           // 0x0040   (0x0010)  
	TArray<uint32_t>                                   protection_list;                                            // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.RankedLevelRangeConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRankedLevelRangeConfTableRow : FTableRowBase
{ 
	uint32_t                                           rangeid;                                                    // 0x0008   (0x0004)  
	uint32_t                                           rangecount;                                                 // 0x000C   (0x0004)  
	uint32_t                                           StageId;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              main_name;                                                  // 0x0018   (0x0018)  
	FText                                              sub_name;                                                   // 0x0030   (0x0018)  
};

/// Struct /Script/UADataTableModule.RankedLevelConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRankedLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	uint32_t                                           upgrade_score;                                              // 0x000C   (0x0004)  
	FText                                              TitleDesc;                                                  // 0x0010   (0x0018)  
	uint32_t                                           ranking_k_factor;                                           // 0x0028   (0x0004)  
	uint32_t                                           icon;                                                       // 0x002C   (0x0004)  
	uint32_t                                           nextseason_level;                                           // 0x0030   (0x0004)  
	uint32_t                                           dogtag_itemid;                                              // 0x0034   (0x0004)  
	uint32_t                                           dogtag_itemid_highval;                                      // 0x0038   (0x0004)  
	uint32_t                                           ranked_level_type;                                          // 0x003C   (0x0004)  
	uint32_t                                           Price;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RankedLevelAwardConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRankedLevelAwardConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           Level;                                                      // 0x0010   (0x0004)  
	uint32_t                                           task_show_main;                                             // 0x0014   (0x0004)  
	TArray<FCommonItemConfItem>                        rewards;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.RankedLeaderboardSaleConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRankedLeaderboardSaleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           lowindex;                                                   // 0x000C   (0x0004)  
	uint32_t                                           Ratio;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.RankedHistoryInfoConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRankedHistoryInfoConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              field_text;                                                 // 0x0010   (0x0018)  
	FString                                            Field;                                                      // 0x0028   (0x0010)  
	uint32_t                                           Type;                                                       // 0x0038   (0x0004)  
	uint32_t                                           Priority;                                                   // 0x003C   (0x0004)  
};

/// Struct /Script/UADataTableModule.RankedCommonConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRankedCommonConfTableRow : FTableRowBase
{ 
	uint32_t                                           Ranked_conf_type;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Val;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.RankedBoxConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRankedBoxConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           equip_num;                                                  // 0x0010   (0x0004)  
	uint32_t                                           def_num;                                                    // 0x0014   (0x0004)  
	uint32_t                                           use_num;                                                    // 0x0018   (0x0004)  
	uint32_t                                           etc_num;                                                    // 0x001C   (0x0004)  
	FText                                              desc;                                                       // 0x0020   (0x0018)  
};

/// Struct /Script/UADataTableModule.RankedAwardShowConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRankedAwardShowConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            main_image;                                                 // 0x0010   (0x0010)  
	FString                                            core_image;                                                 // 0x0020   (0x0010)  
	FString                                            rank_image;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.QuickSortContainerPriorityTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FQuickSortContainerPriorityTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Priority;                                                   // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.QuickChatDataStaticsTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FQuickChatDataStaticsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Key;                                                        // 0x0010   (0x0018)  
	FText                                              BattleInfoTable;                                            // 0x0028   (0x0018)  
	FText                                              BattleInfoCalculate;                                        // 0x0040   (0x0018)  
	FText                                              Format;                                                     // 0x0058   (0x0018)  
	FText                                              Operation;                                                  // 0x0070   (0x0018)  
	uint32_t                                           Factor;                                                     // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.QuickChatTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FQuickChatTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Content;                                                    // 0x0010   (0x0018)  
	uint32_t                                           isLeader;                                                   // 0x0028   (0x0004)  
	uint32_t                                           isBattleInfo;                                               // 0x002C   (0x0004)  
	FText                                              BattleInfoField;                                            // 0x0030   (0x0018)  
};

/// Struct /Script/UADataTableModule.PurchaseConfTableRow
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FPurchaseConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           is_for_act;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            product_id;                                                 // 0x0018   (0x0010)  
	uint32_t                                           Price;                                                      // 0x0028   (0x0004)  
	float                                              price_us;                                                   // 0x002C   (0x0004)  
	uint32_t                                           price_extra;                                                // 0x0030   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x0034   (0x0004)  
	uint32_t                                           item_num;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FText                                              item_name;                                                  // 0x0040   (0x0018)  
	FText                                              item_desc;                                                  // 0x0058   (0x0018)  
	uint32_t                                           sell_type;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            Style;                                                      // 0x0078   (0x0010)  
	FText                                              service_code;                                               // 0x0088   (0x0018)  
	FText                                              service_name;                                               // 0x00A0   (0x0018)  
};

/// Struct /Script/UADataTableModule.ProvinceConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FProvinceConfTableRow : FTableRowBase
{ 
	uint32_t                                           ADCode;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ip_show;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.ProtectionTypeConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FProtectionTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ProtectionType;                                             // 0x0008   (0x0004)  
	uint32_t                                           ProtectionTime;                                             // 0x000C   (0x0004)  
	uint32_t                                           ProtectionDuraction;                                        // 0x0010   (0x0004)  
	uint32_t                                           ForbidInteractProtectionTime;                               // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.PrivilegeItemConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FPrivilegeItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           active_item;                                                // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	FText                                              get_item;                                                   // 0x0010   (0x0018)  
	FText                                              season_get_item;                                            // 0x0028   (0x0018)  
	FText                                              daily_item;                                                 // 0x0040   (0x0018)  
	FText                                              week_item;                                                  // 0x0058   (0x0018)  
	TArray<uint32_t>                                   item_ids;                                                   // 0x0070   (0x0010)  
	uint32_t                                           Value;                                                      // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.PrivilegeDesConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FPrivilegeDesConfTableRow : FTableRowBase
{ 
	uint32_t                                           DataID;                                                     // 0x0008   (0x0004)  
	uint32_t                                           vip_id;                                                     // 0x000C   (0x0004)  
	uint32_t                                           display_order;                                              // 0x0010   (0x0004)  
	uint32_t                                           vipsubitem_id;                                              // 0x0014   (0x0004)  
	FText                                              privilegedes;                                               // 0x0018   (0x0018)  
	FText                                              bubbledes;                                                  // 0x0030   (0x0018)  
	FString                                            icon_name;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/UADataTableModule.PrivilegeConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FPrivilegeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           cost_num;                                                   // 0x000C   (0x0004)  
	uint32_t                                           Duration;                                                   // 0x0010   (0x0004)  
	uint32_t                                           cost_num2;                                                  // 0x0014   (0x0004)  
	uint32_t                                           duration2;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              icon;                                                       // 0x0020   (0x0018)  
	uint32_t                                           rest_renew_days;                                            // 0x0038   (0x0004)  
	uint32_t                                           active_card;                                                // 0x003C   (0x0004)  
	FText                                              renewal_face_pic;                                           // 0x0040   (0x0018)  
	uint32_t                                           jumpgotoid;                                                 // 0x0058   (0x0004)  
	uint32_t                                           expire_mail_id;                                             // 0x005C   (0x0004)  
	TArray<uint32_t>                                   item_list;                                                  // 0x0060   (0x0010)  
};

/// Struct /Script/UADataTableModule.PrivilegeBubbleConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FPrivilegeBubbleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           vip_id;                                                     // 0x000C   (0x0004)  
	uint32_t                                           bubble_type;                                                // 0x0010   (0x0004)  
	float                                              bubble_pos_x;                                               // 0x0014   (0x0004)  
	float                                              bubble_pos_y;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              bubble_des;                                                 // 0x0020   (0x0018)  
	uint32_t                                           is_work;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.PriceConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FPriceConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Price;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.PoolLimitValueTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FPoolLimitValueTableRow : FTableRowBase
{ 
	uint32_t                                           pool_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           value_limit;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.PmcAiLimitItemConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FPmcAiLimitItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           limit_rate;                                                 // 0x000C   (0x0004)  
	TArray<uint32_t>                                   limit_source_array;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.PmcAiHeadPicConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FPmcAiHeadPicConfTableRow : FTableRowBase
{ 
	uint32_t                                           head_pic_id;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.PmcAiConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FPmcAiConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           Openid;                                                     // 0x0010   (0x0008)  
	uint32_t                                           Level;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.PlayerNamePoolTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FPlayerNamePoolTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Group;                                                      // 0x000C   (0x0004)  
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.PlayerListTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FPlayerListTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0028   (0x0004)  
	uint32_t                                           DefaultValue;                                               // 0x002C   (0x0004)  
	FString                                            Param1;                                                     // 0x0030   (0x0010)  
	FText                                              OptionsName;                                                // 0x0040   (0x0018)  
};

/// Struct /Script/UADataTableModule.LevelRewardConf
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLevelRewardConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           is_unique;                                                  // 0x0004   (0x0004)  
	FString                                            item_img_path;                                              // 0x0008   (0x0010)  
	FString                                            panel_bg_path;                                              // 0x0018   (0x0010)  
	uint32_t                                           is_black;                                                   // 0x0028   (0x0004)  
	uint32_t                                           Num;                                                        // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.LevelFuncConf
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FLevelFuncConf
{ 
	FText                                              unlock_func_name;                                           // 0x0000   (0x0018)  
	FString                                            unlock_img_path;                                            // 0x0018   (0x0010)  
	FString                                            unlock_bg_path;                                             // 0x0028   (0x0010)  
	uint32_t                                           is_map;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            panel_bg_path;                                              // 0x0040   (0x0010)  
	uint32_t                                           jump_id;                                                    // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FText                                              desc;                                                       // 0x0058   (0x0018)  
};

/// Struct /Script/UADataTableModule.PlayerLevelConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FPlayerLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	uint32_t                                           Version;                                                    // 0x000C   (0x0004)  
	TArray<FLevelRewardConf>                           rewards;                                                    // 0x0010   (0x0010)  
	TArray<FLevelFuncConf>                             funcs;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.PlayerAvatarPopupMenuButtonTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FPlayerAvatarPopupMenuButtonTableRow : FTableRowBase
{ 
	uint16_t                                           ID;                                                         // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	FString                                            IconName;                                                   // 0x0028   (0x0010)  
	char                                               displayType;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            ExecFunc;                                                   // 0x0040   (0x0010)  
	TArray<uint16_t>                                   ForbiddenMode;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.PlayerAvatarPopupMenuTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FPlayerAvatarPopupMenuTableRow : FTableRowBase
{ 
	uint16_t                                           ID;                                                         // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           sub_type;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<uint16_t>                                   ButtonTypes;                                                // 0x0018   (0x0010)  
	uint32_t                                           InviteTeamType;                                             // 0x0028   (0x0004)  
	uint32_t                                           AddFriendType;                                              // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.PlayModeTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FPlayModeTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           mode_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           sub_mod_id;                                                 // 0x0010   (0x0004)  
	uint32_t                                           map_id;                                                     // 0x0014   (0x0004)  
	uint32_t                                           rule_id;                                                    // 0x0018   (0x0004)  
	uint32_t                                           difficult;                                                  // 0x001C   (0x0004)  
	uint32_t                                           Time;                                                       // 0x0020   (0x0004)  
	uint32_t                                           base_time;                                                  // 0x0024   (0x0004)  
	uint32_t                                           day_start_time;                                             // 0x0028   (0x0004)  
	uint32_t                                           day_end_time;                                               // 0x002C   (0x0004)  
	uint32_t                                           Disable_ingame_timeflow;                                    // 0x0030   (0x0004)  
	uint32_t                                           time_shift;                                                 // 0x0034   (0x0004)  
	uint32_t                                           min_pmc;                                                    // 0x0038   (0x0004)  
	uint32_t                                           max_pmc;                                                    // 0x003C   (0x0004)  
	uint32_t                                           max_pmc_team;                                               // 0x0040   (0x0004)  
	uint32_t                                           pmc_team_num;                                               // 0x0044   (0x0004)  
	uint32_t                                           scav_team_num;                                              // 0x0048   (0x0004)  
	uint32_t                                           NormalBeginTime;                                            // 0x004C   (0x0004)  
	uint32_t                                           NormalBeginPersonNum;                                       // 0x0050   (0x0004)  
	uint32_t                                           LongTimeBeginTime;                                          // 0x0054   (0x0004)  
	uint32_t                                           LongTimeBeginPersonNum;                                     // 0x0058   (0x0004)  
	uint32_t                                           TimeoutTime;                                                // 0x005C   (0x0004)  
	uint32_t                                           SpawnAIPersonPercent;                                       // 0x0060   (0x0004)  
	uint32_t                                           UnprotectAllPlayerTime;                                     // 0x0064   (0x0004)  
	uint32_t                                           MaxProtectPlayerTime;                                       // 0x0068   (0x0004)  
	uint32_t                                           prefer_score;                                               // 0x006C   (0x0004)  
	uint32_t                                           ds_tick_rate;                                               // 0x0070   (0x0004)  
	uint32_t                                           Dynamic_Light;                                              // 0x0074   (0x0004)  
	uint32_t                                           Intelligence_Weight;                                        // 0x0078   (0x0004)  
	int32_t                                            DSNetTickRate;                                              // 0x007C   (0x0004)  
	int32_t                                            bSupportSameCampMode;                                       // 0x0080   (0x0004)  
	int32_t                                            face_paint_id;                                              // 0x0084   (0x0004)  
	uint32_t                                           TeammateDeadPing;                                           // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.PersonalRadarMapTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FPersonalRadarMapTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<float>                                      score_list;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.PersonalRadarFactorTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FPersonalRadarFactorTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	float                                              MapCoefficient;                                             // 0x000C   (0x0004)  
	uint32_t                                           IsSegment;                                                  // 0x0010   (0x0004)  
	uint32_t                                           RadarType;                                                  // 0x0014   (0x0004)  
	uint32_t                                           RadarDataSourceType;                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              AppendId;                                                   // 0x0020   (0x0018)  
	uint32_t                                           Coefficient;                                                // 0x0038   (0x0004)  
	uint32_t                                           ConvertId;                                                  // 0x003C   (0x0004)  
};

/// Struct /Script/UADataTableModule.PersonalBattleOverviewTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FPersonalBattleOverviewTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              ShowName;                                                   // 0x0010   (0x0018)  
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            Format;                                                     // 0x0038   (0x0010)  
	FText                                              suffix;                                                     // 0x0048   (0x0018)  
	FText                                              desc;                                                       // 0x0060   (0x0018)  
	uint32_t                                           CaculateType;                                               // 0x0078   (0x0004)  
	uint32_t                                           Show;                                                       // 0x007C   (0x0004)  
	uint32_t                                           Category;                                                   // 0x0080   (0x0004)  
	uint32_t                                           OuterWeight;                                                // 0x0084   (0x0004)  
	uint32_t                                           SubCategory;                                                // 0x0088   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x008C   (0x0004)  
	TArray<uint64_t>                                   AppendId;                                                   // 0x0090   (0x0010)  
	FString                                            ClientAppendId;                                             // 0x00A0   (0x0010)  
};

/// Struct /Script/UADataTableModule.PerkScoreMapping
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPerkScoreMapping
{ 
	uint32_t                                           P;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Q;                                                          // 0x0004   (0x0004)  
	uint32_t                                           X;                                                          // 0x0008   (0x0004)  
	uint32_t                                           Y;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.PerkInsuranceConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FPerkInsuranceConfTableRow : FTableRowBase
{ 
	uint32_t                                           perk_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           trigger_prob;                                               // 0x0010   (0x0004)  
	uint32_t                                           trigger_score;                                              // 0x0014   (0x0004)  
	uint32_t                                           init_score;                                                 // 0x0018   (0x0004)  
	uint32_t                                           fact1;                                                      // 0x001C   (0x0004)  
	uint32_t                                           fact2;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FPerkScoreMapping>                          socre_param;                                                // 0x0028   (0x0010)  
	uint32_t                                           mail_id;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AbilityInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAbilityInfo
{ 
	FSoftClassPath                                     AbilityClass;                                               // 0x0000   (0x0018)  
	FSoftObjectPath                                    AbilityPayload;                                             // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.PerkConfTableRow
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FPerkConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FSoftObjectPath                                    icon;                                                       // 0x0028   (0x0018)  
	FSoftObjectPath                                    icon_lock;                                                  // 0x0040   (0x0018)  
	uint32_t                                           Group;                                                      // 0x0058   (0x0004)  
	uint32_t                                           Level;                                                      // 0x005C   (0x0004)  
	uint32_t                                           Order;                                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<uint32_t>                                   show_multimode_list;                                        // 0x0068   (0x0010)  
	FText                                              desc;                                                       // 0x0078   (0x0018)  
	FText                                              aside_desc;                                                 // 0x0090   (0x0018)  
	uint32_t                                           Type;                                                       // 0x00A8   (0x0004)  
	uint32_t                                           Cost;                                                       // 0x00AC   (0x0004)  
	uint32_t                                           is_open;                                                    // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FDateTime                                          begin_time;                                                 // 0x00B8   (0x0008)  
	TArray<FAbilityInfo>                               AbilityInfos;                                               // 0x00C0   (0x0010)  
};

/// Struct /Script/UADataTableModule.PerkCommConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FPerkCommConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<uint32_t>                                   val_list;                                                   // 0x0018   (0x0010)  
	TArray<FText>                                      str_val_list;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.PeriodlyClearItemConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FPeriodlyClearItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           clear_period;                                               // 0x000C   (0x0004)  
	uint32_t                                           remain_num;                                                 // 0x0010   (0x0004)  
	uint32_t                                           need_clear;                                                 // 0x0014   (0x0004)  
	uint32_t                                           refill_period;                                              // 0x0018   (0x0004)  
	uint32_t                                           refill_num;                                                 // 0x001C   (0x0004)  
	uint32_t                                           limit_num;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.InflationRatio
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FInflationRatio
{ 
	uint32_t                                           start_day;                                                  // 0x0000   (0x0004)  
	uint32_t                                           Ratio;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.PaybackConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FPaybackConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           payback_base_value;                                         // 0x000C   (0x0004)  
	uint32_t                                           payback_max_single_value;                                   // 0x0010   (0x0004)  
	uint32_t                                           is_protected;                                               // 0x0014   (0x0004)  
	uint32_t                                           min_protect_level;                                          // 0x0018   (0x0004)  
	uint32_t                                           payback_ratio;                                              // 0x001C   (0x0004)  
	TArray<FInflationRatio>                            inflation_ratio;                                            // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.PPTPageConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FPPTPageConfTableRow : FTableRowBase
{ 
	uint32_t                                           pageID;                                                     // 0x0008   (0x0004)  
	uint32_t                                           umgPath;                                                    // 0x000C   (0x0004)  
	TArray<FString>                                    Animations;                                                 // 0x0010   (0x0010)  
	uint32_t                                           showDesc;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x0028   (0x0018)  
	FText                                              desc;                                                       // 0x0040   (0x0018)  
};

/// Struct /Script/UADataTableModule.OverSaleValueTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FOverSaleValueTableRow : FTableRowBase
{ 
	uint32_t                                           Item_type;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              type_name;                                                  // 0x0010   (0x0018)  
	FText                                              sale_warning_message;                                       // 0x0028   (0x0018)  
	FText                                              sale_warning_advice;                                        // 0x0040   (0x0018)  
};

/// Struct /Script/UADataTableModule.OverSaleNewbieLevelTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FOverSaleNewbieLevelTableRow : FTableRowBase
{ 
	uint32_t                                           newbie_level;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.OverSaleLackFundTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FOverSaleLackFundTableRow : FTableRowBase
{ 
	uint32_t                                           lack_fund_wealth1;                                          // 0x0008   (0x0004)  
	uint32_t                                           lack_fund_wealth2;                                          // 0x000C   (0x0004)  
	uint32_t                                           lack_fund_cash;                                             // 0x0010   (0x0004)  
	uint32_t                                           lack_fund_mud;                                              // 0x0014   (0x0004)  
	uint32_t                                           lack_fund_gold;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.OverConsumptionValueTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FOverConsumptionValueTableRow : FTableRowBase
{ 
	uint32_t                                           Item_type;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              type_name;                                                  // 0x0010   (0x0018)  
	uint32_t                                           over_consumption_value;                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.OtherDetailConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FOtherDetailConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            AssembleTag;                                                // 0x0010   (0x0010)  
	FString                                            SubAssembleTag;                                             // 0x0020   (0x0010)  
	uint64_t                                           slot_type;                                                  // 0x0030   (0x0008)  
	uint64_t                                           sub_slot_type;                                              // 0x0038   (0x0008)  
	TArray<FWeaponSocket>                              Sockets;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.OrderKVConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FOrderKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.OnShelfConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FOnShelfConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           on_the_shelf;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ObResetEquipConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FObResetEquipConfTableRow : FTableRowBase
{ 
	uint32_t                                           Index;                                                      // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0010   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0014   (0x0004)  
	TArray<FBlackItemConf>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.ObRegistEquipConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FObRegistEquipConfTableRow : FTableRowBase
{ 
	uint32_t                                           Index;                                                      // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0010   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0014   (0x0004)  
	TArray<FBlackItemConf>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.ObRegistBasicConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FObRegistBasicConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           are_all_tasks_done;                                         // 0x0010   (0x0004)  
	uint32_t                                           bullion;                                                    // 0x0014   (0x0004)  
	uint32_t                                           gold;                                                       // 0x0018   (0x0004)  
	uint32_t                                           whether_start_rookie;                                       // 0x001C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ObBusinessmanBasicConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FObBusinessmanBasicConfTableRow : FTableRowBase
{ 
	uint32_t                                           businessman_id;                                             // 0x0008   (0x0004)  
	uint32_t                                           businessman_loyalty;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.NewbieLevelTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FNewbieLevelTableRow : FTableRowBase
{ 
	uint32_t                                           newbie_level;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.NetbarPrivilegeConfTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FNetbarPrivilegeConfTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	uint32_t                                           Period;                                                     // 0x000C   (0x0004)  
	uint32_t                                           begin_week_day;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              begin_time;                                                 // 0x0018   (0x0018)  
	uint32_t                                           end_week_day;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              end_time;                                                   // 0x0038   (0x0018)  
	uint32_t                                           safe_box_id;                                                // 0x0050   (0x0004)  
	uint32_t                                           Exp;                                                        // 0x0054   (0x0004)  
	TArray<uint32_t>                                   avatar_id;                                                  // 0x0058   (0x0010)  
};

/// Struct /Script/UADataTableModule.NationalFlagConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FNationalFlagConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              country_alpha;                                              // 0x0010   (0x0018)  
	FText                                              country_img_url;                                            // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.MusicLobbyDefaultConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FMusicLobbyDefaultConfTableRow : FTableRowBase
{ 
	uint32_t                                           music_id;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          abs_begin_time;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.MultiModeWidgetTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FMultiModeWidgetTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           calculate_elo;                                              // 0x0028   (0x0004)  
	uint32_t                                           elo_type;                                                   // 0x002C   (0x0004)  
	uint32_t                                           calculate_warm_score;                                       // 0x0030   (0x0004)  
	uint32_t                                           use_ticket;                                                 // 0x0034   (0x0004)  
	uint32_t                                           need_take_in_threshold;                                     // 0x0038   (0x0004)  
	uint32_t                                           need_check_weapon_need_teammate;                            // 0x003C   (0x0004)  
	uint32_t                                           default_avatar_set_id;                                      // 0x0040   (0x0004)  
	uint32_t                                           settle_type;                                                // 0x0044   (0x0004)  
	uint32_t                                           use_self_equip;                                             // 0x0048   (0x0004)  
	uint32_t                                           ban_use_elite_suite;                                        // 0x004C   (0x0004)  
	uint32_t                                           ban_use_lend_item;                                          // 0x0050   (0x0004)  
	uint32_t                                           use_self_avatar;                                            // 0x0054   (0x0004)  
	uint32_t                                           show_wash_white;                                            // 0x0058   (0x0004)  
	uint32_t                                           block_item_back_mail;                                       // 0x005C   (0x0004)  
	uint32_t                                           is_take_in_key;                                             // 0x0060   (0x0004)  
	uint32_t                                           is_sys_equip_take_in_safe_box;                              // 0x0064   (0x0004)  
	uint32_t                                           need_refresh_safe_box;                                      // 0x0068   (0x0004)  
	uint32_t                                           use_spray;                                                  // 0x006C   (0x0004)  
	uint32_t                                           bind_faction_id;                                            // 0x0070   (0x0004)  
	uint32_t                                           ignore_stat;                                                // 0x0074   (0x0004)  
	uint32_t                                           perk_effective;                                             // 0x0078   (0x0004)  
	uint32_t                                           is_sfe_return;                                              // 0x007C   (0x0004)  
	uint32_t                                           safe_ctrl_canplay;                                          // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.MomentTableRow
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FMomentTableRow : FTableRowBase
{ 
	uint32_t                                           MomentId;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              MomentTitle;                                                // 0x0010   (0x0018)  
	uint32_t                                           Proportion;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              Describe;                                                   // 0x0030   (0x0018)  
	FText                                              UrlTitle;                                                   // 0x0048   (0x0018)  
	FText                                              UrlDescribe;                                                // 0x0060   (0x0018)  
};

/// Struct /Script/UADataTableModule.MembershipLevelConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FMembershipLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           need_exp;                                                   // 0x0010   (0x0008)  
	uint64_t                                           level_exp_limit;                                            // 0x0018   (0x0008)  
	uint64_t                                           total_exp;                                                  // 0x0020   (0x0008)  
};

/// Struct /Script/UADataTableModule.MeleeWeaponDetailTableRow
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FMeleeWeaponDetailTableRow : FTableRowBase
{ 
	uint64_t                                           ItemId;                                                     // 0x0008   (0x0008)  
	TArray<float>                                      BaseDamage;                                                 // 0x0010   (0x0010)  
	TArray<float>                                      ShowDamage;                                                 // 0x0020   (0x0010)  
	float                                              ArmorDamage;                                                // 0x0030   (0x0004)  
	float                                              ArmorDamageRatio;                                           // 0x0034   (0x0004)  
	float                                              BleedChance;                                                // 0x0038   (0x0004)  
	float                                              EnergyConsume;                                              // 0x003C   (0x0004)  
	FText                                              AttackSpeed;                                                // 0x0040   (0x0018)  
	TArray<float>                                      DamageReduction;                                            // 0x0058   (0x0010)  
	TArray<float>                                      TraceRange;                                                 // 0x0068   (0x0010)  
	FText                                              BleedProbabilityDisplay;                                    // 0x0078   (0x0018)  
	FText                                              TraceRangeDisplay;                                          // 0x0090   (0x0018)  
	float                                              MeleeMoveSpeedRatio;                                        // 0x00A8   (0x0004)  
	float                                              DamageScaleHead;                                            // 0x00AC   (0x0004)  
	float                                              DamageScaleArms;                                            // 0x00B0   (0x0004)  
	float                                              DamageScaleLegs;                                            // 0x00B4   (0x0004)  
	float                                              DamageScaleStomach;                                         // 0x00B8   (0x0004)  
	float                                              DamageScaleChest;                                           // 0x00BC   (0x0004)  
};

/// Struct /Script/UADataTableModule.MedGuidePageConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FMedGuidePageConfTableRow : FTableRowBase
{ 
	uint32_t                                           IndexId;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            icon;                                                       // 0x0010   (0x0010)  
	FText                                              desc;                                                       // 0x0020   (0x0018)  
	TArray<uint64_t>                                   CureItemId;                                                 // 0x0038   (0x0010)  
	uint32_t                                           ShowPage;                                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.MatchKVConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FMatchKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<int64_t>                                    val_array;                                                  // 0x0018   (0x0010)  
	FDateTime                                          begin_time;                                                 // 0x0028   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/UADataTableModule.MarqueeConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMarqueeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Content;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.MarketRecommendConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMarketRecommendConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	TArray<uint32_t>                                   Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.WeatherRateItem
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FWeatherRateItem
{ 
	uint32_t                                           Weather;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.MapWeatherTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMapWeatherTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           cur_weather;                                                // 0x000C   (0x0004)  
	TArray<FWeatherRateItem>                           weather_list;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.MapUnlockTableRow
/// Size: 0x0118 (280 bytes) (0x000008 - 0x000118) align 8 MaxSize: 0x0118
struct FMapUnlockTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           mode_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           sub_mod_id;                                                 // 0x0010   (0x0004)  
	uint32_t                                           map_id;                                                     // 0x0014   (0x0004)  
	uint32_t                                           rule_id;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              ShowName;                                                   // 0x0020   (0x0018)  
	uint32_t                                           ShowIndex;                                                  // 0x0038   (0x0004)  
	uint32_t                                           helpJumpId;                                                 // 0x003C   (0x0004)  
	uint32_t                                           unlock_type;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<uint64_t>                                   unlock_param;                                               // 0x0048   (0x0010)  
	uint32_t                                           ticket;                                                     // 0x0058   (0x0004)  
	uint32_t                                           ticket_cash;                                                // 0x005C   (0x0004)  
	uint32_t                                           is_scav_unlock;                                             // 0x0060   (0x0004)  
	uint32_t                                           is_golden_scav_unlock;                                      // 0x0064   (0x0004)  
	uint32_t                                           act_ticket;                                                 // 0x0068   (0x0004)  
	uint32_t                                           act_id;                                                     // 0x006C   (0x0004)  
	uint32_t                                           take_in_threshold;                                          // 0x0070   (0x0004)  
	uint32_t                                           take_in_value_limit;                                        // 0x0074   (0x0004)  
	uint64_t                                           stash_value_limit_lower;                                    // 0x0078   (0x0008)  
	uint64_t                                           stash_value_limit_upper;                                    // 0x0080   (0x0008)  
	FString                                            sysIds;                                                     // 0x0088   (0x0010)  
	TArray<uint32_t>                                   map_event_unlock_list;                                      // 0x0098   (0x0010)  
	uint32_t                                           map_picture;                                                // 0x00A8   (0x0004)  
	uint32_t                                           map_mini_picture;                                           // 0x00AC   (0x0004)  
	FString                                            typeIcon;                                                   // 0x00B0   (0x0010)  
	FString                                            map_bg_name;                                                // 0x00C0   (0x0010)  
	uint32_t                                           ranked_level_limit;                                         // 0x00D0   (0x0004)  
	uint32_t                                           unlock_rank_level;                                          // 0x00D4   (0x0004)  
	FText                                              map_desc;                                                   // 0x00D8   (0x0018)  
	uint32_t                                           item_take_in_limit;                                         // 0x00F0   (0x0004)  
	uint32_t                                           wealth_elo_map_mode_id;                                     // 0x00F4   (0x0004)  
	int32_t                                            wealth_elo_system_harvest_ratio;                            // 0x00F8   (0x0004)  
	uint32_t                                           map_exp_ratio;                                              // 0x00FC   (0x0004)  
	uint32_t                                           trans_template_id;                                          // 0x0100   (0x0004)  
	uint32_t                                           allow_connect_time;                                         // 0x0104   (0x0004)  
	int32_t                                            transfer_value_rate;                                        // 0x0108   (0x0004)  
	uint32_t                                           open_range_voice_room;                                      // 0x010C   (0x0004)  
	uint32_t                                           rank_elo_check_mode_id;                                     // 0x0110   (0x0004)  
	uint32_t                                           sp_weather_groupid;                                         // 0x0114   (0x0004)  
};

/// Struct /Script/UADataTableModule.MapNewsInfoTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FMapNewsInfoTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Title;                                                      // 0x0010   (0x0010)  
	FString                                            desc;                                                       // 0x0020   (0x0010)  
	FString                                            pic;                                                        // 0x0030   (0x0010)  
	FString                                            show_open_time;                                             // 0x0040   (0x0010)  
	FString                                            show_daily_time;                                            // 0x0050   (0x0010)  
	uint32_t                                           Order;                                                      // 0x0060   (0x0004)  
	uint32_t                                           mapunlockId;                                                // 0x0064   (0x0004)  
	bool                                               isPop;                                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0069   (0x0003)  MISSED
	uint32_t                                           pop_order;                                                  // 0x006C   (0x0004)  
};

/// Struct /Script/UADataTableModule.MapLayoutTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMapLayoutTableRow : FTableRowBase
{ 
	uint32_t                                           mapunlock_id;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            select_list;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.MapGroupConfTableRow
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FMapGroupConfTableRow : FTableRowBase
{ 
	uint32_t                                           group_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           group_type;                                                 // 0x000C   (0x0004)  
	FText                                              show_name;                                                  // 0x0010   (0x0018)  
	uint32_t                                           show_name_type;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              desc;                                                       // 0x0030   (0x0018)  
	uint32_t                                           role_type;                                                  // 0x0048   (0x0004)  
	uint32_t                                           game_mode;                                                  // 0x004C   (0x0004)  
	uint32_t                                           sub_mode_id;                                                // 0x0050   (0x0004)  
	uint32_t                                           rule_id;                                                    // 0x0054   (0x0004)  
	uint32_t                                           map_plug;                                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<uint32_t>                                   sub_group_id;                                               // 0x0060   (0x0010)  
	uint32_t                                           use_main_group;                                             // 0x0070   (0x0004)  
	uint32_t                                           map_show_type;                                              // 0x0074   (0x0004)  
	TArray<uint32_t>                                   sub_map_id;                                                 // 0x0078   (0x0010)  
	uint32_t                                           show_empty;                                                 // 0x0088   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x008C   (0x0004)  
	FText                                              hovertips;                                                  // 0x0090   (0x0018)  
	uint32_t                                           show_recycle;                                               // 0x00A8   (0x0004)  
	uint32_t                                           show_navigation_bar;                                        // 0x00AC   (0x0004)  
	TArray<uint32_t>                                   ban_sysid_list;                                             // 0x00B0   (0x0010)  
	TArray<uint32_t>                                   sys_enable_list;                                            // 0x00C0   (0x0010)  
	uint32_t                                           openWareHouseWhenWin;                                       // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.MapEventUnlockTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FMapEventUnlockTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              event_name;                                                 // 0x0010   (0x0018)  
	FString                                            icon_path;                                                  // 0x0028   (0x0010)  
	FString                                            event_picture;                                              // 0x0038   (0x0010)  
	uint32_t                                           jump_goto;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FText                                              hover_tips;                                                 // 0x0050   (0x0018)  
};

/// Struct /Script/UADataTableModule.MapDetailTableRow
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMapDetailTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              map_level;                                                  // 0x0010   (0x0018)  
	FString                                            mobile_map_level;                                           // 0x0028   (0x0010)  
	FText                                              Name;                                                       // 0x0038   (0x0018)  
	FString                                            level_path;                                                 // 0x0050   (0x0010)  
	FText                                              Picture;                                                    // 0x0060   (0x0018)  
	FText                                              desc;                                                       // 0x0078   (0x0018)  
	FVector2D                                          MapSize;                                                    // 0x0090   (0x0008)  
	TArray<FVector2D>                                  SampleScenePoints;                                          // 0x0098   (0x0010)  
	TArray<FVector2D>                                  SampleMapPoints;                                            // 0x00A8   (0x0010)  
};

/// Struct /Script/UADataTableModule.MapBanTaskConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMapBanTaskConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<int32_t>                                    banned_task_types;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.MallTagConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FMallTagConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.MallPresentContentTemplateTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FMallPresentContentTemplateTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Content;                                                    // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.MallPresentCardTemplateTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMallPresentCardTemplateTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           default_content_id;                                         // 0x000C   (0x0004)  
	FString                                            background;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.MallItemTagConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FMallItemTagConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.MallItemQualityConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMallItemQualityConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   quality_RGB;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.MallItemHighlightsConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FMallItemHighlightsConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FString                                            icon;                                                       // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.Tag
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FTag
{ 
	uint32_t                                           tag_type;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            tag_desc;                                                   // 0x0008   (0x0010)  
	FDateTime                                          tag_begin_time;                                             // 0x0018   (0x0008)  
	FDateTime                                          tag_end_time;                                               // 0x0020   (0x0008)  
};

/// Struct /Script/UADataTableModule.MallItemConfTableRow
/// Size: 0x0138 (312 bytes) (0x000008 - 0x000138) align 8 MaxSize: 0x0138
struct FMallItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           jump_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           first_class_order;                                          // 0x0010   (0x0004)  
	uint32_t                                           second_class_order;                                         // 0x0014   (0x0004)  
	uint32_t                                           third_class_order;                                          // 0x0018   (0x0004)  
	uint32_t                                           item_tag;                                                   // 0x001C   (0x0004)  
	uint32_t                                           seq;                                                        // 0x0020   (0x0004)  
	uint32_t                                           sell_item_id;                                               // 0x0024   (0x0004)  
	uint32_t                                           sell_num;                                                   // 0x0028   (0x0004)  
	uint32_t                                           sell_group_id;                                              // 0x002C   (0x0004)  
	uint32_t                                           sell_suit_id;                                               // 0x0030   (0x0004)  
	uint32_t                                           can_multi_sell;                                             // 0x0034   (0x0004)  
	uint32_t                                           purchase_id;                                                // 0x0038   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x003C   (0x0004)  
	uint32_t                                           exchange_item_id;                                           // 0x0040   (0x0004)  
	uint32_t                                           exchange_num;                                               // 0x0044   (0x0004)  
	uint32_t                                           discount_exchange_num;                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDateTime                                          discount_begin_time;                                        // 0x0050   (0x0008)  
	FDateTime                                          discount_end_time;                                          // 0x0058   (0x0008)  
	uint32_t                                           promotion_id;                                               // 0x0060   (0x0004)  
	uint32_t                                           promotion_offset;                                           // 0x0064   (0x0004)  
	TArray<uint32_t>                                   daily_differential_exchange_count_array;                    // 0x0068   (0x0010)  
	TArray<uint32_t>                                   daily_differential_exchange_num_array;                      // 0x0078   (0x0010)  
	FDateTime                                          pre_begin_time;                                             // 0x0088   (0x0008)  
	FDateTime                                          pre_end_time;                                               // 0x0090   (0x0008)  
	FDateTime                                          begin_time;                                                 // 0x0098   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x00A0   (0x0008)  
	uint32_t                                           quality;                                                    // 0x00A8   (0x0004)  
	uint32_t                                           preview_mode;                                               // 0x00AC   (0x0004)  
	TArray<FTag>                                       tag_list;                                                   // 0x00B0   (0x0010)  
	uint32_t                                           first_sell_point;                                           // 0x00C0   (0x0004)  
	uint32_t                                           second_sell_point;                                          // 0x00C4   (0x0004)  
	uint32_t                                           third_sell_point;                                           // 0x00C8   (0x0004)  
	uint32_t                                           fourth_sell_point;                                          // 0x00CC   (0x0004)  
	uint32_t                                           buy_limit;                                                  // 0x00D0   (0x0004)  
	uint32_t                                           buy_limit_num;                                              // 0x00D4   (0x0004)  
	uint32_t                                           need_vip_level;                                             // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FString                                            URL;                                                        // 0x00E0   (0x0010)  
	FString                                            need_version;                                               // 0x00F0   (0x0010)  
	uint32_t                                           is_backup;                                                  // 0x0100   (0x0004)  
	uint32_t                                           country_group_id;                                           // 0x0104   (0x0004)  
	uint32_t                                           is_quick_give;                                              // 0x0108   (0x0004)  
	uint32_t                                           need_level;                                                 // 0x010C   (0x0004)  
	uint32_t                                           need_bp_vip;                                                // 0x0110   (0x0004)  
	uint32_t                                           need_bp_level;                                              // 0x0114   (0x0004)  
	uint32_t                                           front_id;                                                   // 0x0118   (0x0004)  
	uint32_t                                           grade_id;                                                   // 0x011C   (0x0004)  
	uint32_t                                           sell_channel;                                               // 0x0120   (0x0004)  
	uint32_t                                           sell_channel_value;                                         // 0x0124   (0x0004)  
	FString                                            Style;                                                      // 0x0128   (0x0010)  
};

/// Struct /Script/UADataTableModule.MallGlobalConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FMallGlobalConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<uint64_t>                                   ary;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.MallDiscountDescConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FMallDiscountDescConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           lower_bound;                                                // 0x000C   (0x0004)  
	uint32_t                                           upper_bound;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              desc;                                                       // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.ClassBanner
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FClassBanner
{ 
	FDateTime                                          begin_time;                                                 // 0x0000   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0008   (0x0008)  
	FString                                            cdn;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.MallClassConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FMallClassConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           parent_class;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            icon;                                                       // 0x0030   (0x0010)  
	FString                                            PageType;                                                   // 0x0040   (0x0010)  
	uint32_t                                           parent_hide_empty;                                          // 0x0050   (0x0004)  
	uint32_t                                           is_hide;                                                    // 0x0054   (0x0004)  
	FDateTime                                          begin_time;                                                 // 0x0058   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0060   (0x0008)  
	uint32_t                                           show_empty;                                                 // 0x0068   (0x0004)  
	uint32_t                                           red_point_id;                                               // 0x006C   (0x0004)  
	uint32_t                                           display_order;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FClassBanner>                               banner_list;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/UADataTableModule.MainTaskTreeConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FMainTaskTreeConfTableRow : FTableRowBase
{ 
	uint32_t                                           show_order;                                                 // 0x0008   (0x0004)  
	uint32_t                                           child_len;                                                  // 0x000C   (0x0004)  
	uint32_t                                           root_task_id;                                               // 0x0010   (0x0004)  
	uint32_t                                           child1;                                                     // 0x0014   (0x0004)  
	uint32_t                                           child2;                                                     // 0x0018   (0x0004)  
	uint32_t                                           child3;                                                     // 0x001C   (0x0004)  
	uint32_t                                           child4;                                                     // 0x0020   (0x0004)  
	uint32_t                                           child5;                                                     // 0x0024   (0x0004)  
	uint32_t                                           child6;                                                     // 0x0028   (0x0004)  
	uint32_t                                           child7;                                                     // 0x002C   (0x0004)  
	uint32_t                                           child8;                                                     // 0x0030   (0x0004)  
	uint32_t                                           child9;                                                     // 0x0034   (0x0004)  
	uint32_t                                           child10;                                                    // 0x0038   (0x0004)  
	uint32_t                                           child11;                                                    // 0x003C   (0x0004)  
	uint32_t                                           child12;                                                    // 0x0040   (0x0004)  
	uint32_t                                           child13;                                                    // 0x0044   (0x0004)  
	uint32_t                                           child14;                                                    // 0x0048   (0x0004)  
	uint32_t                                           child15;                                                    // 0x004C   (0x0004)  
	uint32_t                                           child16;                                                    // 0x0050   (0x0004)  
	uint32_t                                           child17;                                                    // 0x0054   (0x0004)  
	uint32_t                                           child18;                                                    // 0x0058   (0x0004)  
	uint32_t                                           child19;                                                    // 0x005C   (0x0004)  
	uint32_t                                           child20;                                                    // 0x0060   (0x0004)  
	uint32_t                                           child21;                                                    // 0x0064   (0x0004)  
	uint32_t                                           child22;                                                    // 0x0068   (0x0004)  
	uint32_t                                           child23;                                                    // 0x006C   (0x0004)  
};

/// Struct /Script/UADataTableModule.MailTypeConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FMailTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           Type;                                                       // 0x0008   (0x0004)  
	uint32_t                                           is_stage;                                                   // 0x000C   (0x0004)  
	uint32_t                                           mail_max_count;                                             // 0x0010   (0x0004)  
	uint32_t                                           extend_max_size;                                            // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.MailKVConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FMailKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.MailConfTableRow
/// Size: 0x0158 (344 bytes) (0x000008 - 0x000158) align 8 MaxSize: 0x0158
struct FMailConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Content;                                                    // 0x0028   (0x0018)  
	uint32_t                                           sender_type;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              sender;                                                     // 0x0048   (0x0018)  
	uint32_t                                           sender_id;                                                  // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FText                                              sender_head;                                                // 0x0068   (0x0018)  
	uint32_t                                           expire_time;                                                // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FDateTime                                          expire_date;                                                // 0x0088   (0x0008)  
	uint32_t                                           auto_delete;                                                // 0x0090   (0x0004)  
	uint32_t                                           auto_award;                                                 // 0x0094   (0x0004)  
	uint32_t                                           auto_read;                                                  // 0x0098   (0x0004)  
	uint32_t                                           auto_suit_reward;                                           // 0x009C   (0x0004)  
	uint32_t                                           through_season;                                             // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<uint32_t>                                   account_channel_type;                                       // 0x00A8   (0x0010)  
	TArray<uint32_t>                                   client_plat_type;                                           // 0x00B8   (0x0010)  
	FString                                            client_version_low;                                         // 0x00C8   (0x0010)  
	FString                                            client_version_up;                                          // 0x00D8   (0x0010)  
	uint32_t                                           link_type;                                                  // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FText                                              link_dest;                                                  // 0x00F0   (0x0018)  
	FString                                            link_params;                                                // 0x0108   (0x0010)  
	FText                                              link_text;                                                  // 0x0118   (0x0018)  
	TArray<FBlackItemConf>                             awards;                                                     // 0x0130   (0x0010)  
	FString                                            mutil_lang_content_url;                                     // 0x0140   (0x0010)  
	uint32_t                                           country_group_id;                                           // 0x0150   (0x0004)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LuckyLimitContainerTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FLuckyLimitContainerTableRow : FTableRowBase
{ 
	uint32_t                                           lootpoint_type_id;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LotteryStepPriceConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLotteryStepPriceConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   lottery_step_price;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.LoseDropConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FLoseDropConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LootResourceConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FLootResourceConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	char                                               rare;                                                       // 0x0010   (0x0001)  
	char                                               Priority;                                                   // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/UADataTableModule.LootReplaceConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FLootReplaceConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           is_consumable;                                              // 0x000C   (0x0004)  
	uint32_t                                           shield_type;                                                // 0x0010   (0x0004)  
	uint32_t                                           sub_item_id;                                                // 0x0014   (0x0004)  
	uint32_t                                           sub_item_num;                                               // 0x0018   (0x0004)  
	uint32_t                                           need_sub_items;                                             // 0x001C   (0x0004)  
	TArray<FCommonItemConfItem>                        sub_scav_items;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.LootProtectionItemsConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FLootProtectionItemsConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.LootProtectionConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FLootProtectionConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           ProtectionType;                                             // 0x000C   (0x0004)  
	float                                              ProtectionTime;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LootPoolConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FLootPoolConfTableRow : FTableRowBase
{ 
	uint32_t                                           play_mode_id;                                               // 0x0008   (0x0004)  
	uint32_t                                           loot_pool;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.LootObjExpTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FLootObjExpTableRow : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            SubType;                                                    // 0x000C   (0x0004)  
	int32_t                                            loot_exp;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LimitUserTagConditions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLimitUserTagConditions
{ 
	uint32_t                                           tag_id;                                                     // 0x0000   (0x0004)  
	uint32_t                                           attr_id;                                                    // 0x0004   (0x0004)  
	int64_t                                            attr_down;                                                  // 0x0008   (0x0008)  
	int64_t                                            attr_up;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.LootLimitUserTagTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FLootLimitUserTagTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            tag_priority;                                               // 0x000C   (0x0004)  
	uint32_t                                           remove_guarantee_pr;                                        // 0x0010   (0x0004)  
	uint32_t                                           remove_protect_pr;                                          // 0x0014   (0x0004)  
	TArray<uint32_t>                                   dont_remove_containers;                                     // 0x0018   (0x0010)  
	uint32_t                                           extra_time;                                                 // 0x0028   (0x0004)  
	uint32_t                                           extra_time_pr;                                              // 0x002C   (0x0004)  
	TArray<FLimitUserTagConditions>                    limit_conditions;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.LootLimitConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLootLimitConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	float                                              normal_value;                                               // 0x000C   (0x0004)  
	float                                              redline_value;                                              // 0x0010   (0x0004)  
	uint32_t                                           calc_type;                                                  // 0x0014   (0x0004)  
	uint32_t                                           loot_pool;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LootFactionItemConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FLootFactionItemConfTableRow : FTableRowBase
{ 
	uint64_t                                           ItemId;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/UADataTableModule.LootDropPoolInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLootDropPoolInfo
{ 
	uint64_t                                           item_id;                                                    // 0x0000   (0x0008)  
	uint32_t                                           item_num;                                                   // 0x0008   (0x0004)  
	uint32_t                                           Probability;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.LootDropPoolConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLootDropPoolConfTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	TArray<FLootDropPoolInfo>                          Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.ActivityLootDropInfoConf
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FActivityLootDropInfoConf
{ 
	uint32_t                                           activity_id;                                                // 0x0000   (0x0004)  
	uint32_t                                           activity_weight;                                            // 0x0004   (0x0004)  
	uint32_t                                           in_game_time;                                               // 0x0008   (0x0004)  
	uint32_t                                           Weather;                                                    // 0x000C   (0x0004)  
	uint32_t                                           pool_id;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/UADataTableModule.LootDropOperationConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLootDropOperationConfTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	TArray<FActivityLootDropInfoConf>                  Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.LootDropControlConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FLootDropControlConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           map_id;                                                     // 0x0010   (0x0008)  
	uint64_t                                           is_map_all;                                                 // 0x0018   (0x0008)  
	uint64_t                                           box_id;                                                     // 0x0020   (0x0008)  
	uint64_t                                           is_box_all;                                                 // 0x0028   (0x0008)  
	uint64_t                                           loot_id;                                                    // 0x0030   (0x0008)  
	uint32_t                                           activity_id;                                                // 0x0038   (0x0004)  
	uint32_t                                           activity_order;                                             // 0x003C   (0x0004)  
	uint32_t                                           in_game_time;                                               // 0x0040   (0x0004)  
	uint32_t                                           Weather;                                                    // 0x0044   (0x0004)  
	TArray<uint32_t>                                   commonitem_id_array;                                        // 0x0048   (0x0010)  
	uint64_t                                           relace_rate;                                                // 0x0058   (0x0008)  
	TArray<uint32_t>                                   pool_id;                                                    // 0x0060   (0x0010)  
};

/// Struct /Script/UADataTableModule.LootDropActivityPoolConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLootDropActivityPoolConfTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	TArray<FLootDropPoolInfo>                          Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.NewActivityLootDropInfoConf
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNewActivityLootDropInfoConf
{ 
	uint32_t                                           activity_id;                                                // 0x0000   (0x0004)  
	uint32_t                                           activity_weight;                                            // 0x0004   (0x0004)  
	uint32_t                                           in_game_time;                                               // 0x0008   (0x0004)  
	uint32_t                                           Weather;                                                    // 0x000C   (0x0004)  
	TArray<uint32_t>                                   pool_id;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.LootDropActivityConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FLootDropActivityConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           map_id;                                                     // 0x0010   (0x0008)  
	uint64_t                                           is_map_all;                                                 // 0x0018   (0x0008)  
	uint64_t                                           box_id;                                                     // 0x0020   (0x0008)  
	uint64_t                                           is_box_all;                                                 // 0x0028   (0x0008)  
	uint64_t                                           loot_id;                                                    // 0x0030   (0x0008)  
	uint32_t                                           activity_order;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FNewActivityLootDropInfoConf>               Items;                                                      // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.LootDropTableRow
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FLootDropTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	FString                                            desc;                                                       // 0x0010   (0x0010)  
	char                                               ItemType;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	uint64_t                                           ItemId;                                                     // 0x0028   (0x0008)  
	TArray<uint32_t>                                   ItemNum;                                                    // 0x0030   (0x0010)  
	TArray<uint64_t>                                   SubItemTable;                                               // 0x0040   (0x0010)  
	uint32_t                                           Weight;                                                     // 0x0050   (0x0004)  
	float                                              Percent;                                                    // 0x0054   (0x0004)  
	float                                              RandTimes;                                                  // 0x0058   (0x0004)  
	float                                              WeightTimes;                                                // 0x005C   (0x0004)  
	char                                               OperationType;                                              // 0x0060   (0x0001)  
	char                                               IsPermanent;                                                // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0062   (0x0002)  MISSED
	uint32_t                                           ActID;                                                      // 0x0064   (0x0004)  
	TArray<uint64_t>                                   LootPointWhite;                                             // 0x0068   (0x0010)  
	TArray<uint64_t>                                   LootPointBlack;                                             // 0x0078   (0x0010)  
	FString                                            Describe;                                                   // 0x0088   (0x0010)  
	uint32_t                                           MaxRepeatRandomNum;                                         // 0x0098   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LoginLoadingTipsTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FLoginLoadingTipsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Tip;                                                        // 0x0010   (0x0018)  
	uint32_t                                           Weight;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LoginLoadingImageTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FLoginLoadingImageTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Path;                                                       // 0x0010   (0x0010)  
	uint32_t                                           Weight;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LocalizationConf_zh_HansTableRow
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FLocalizationConf_zh_HansTableRow : FTableRowBase
{ 
};

/// Struct /Script/UADataTableModule.LocalizationConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FLocalizationConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              EnumName;                                                   // 0x0010   (0x0018)  
	FText                                              LocalizedText;                                              // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.LobbyRandomVoiceTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FLobbyRandomVoiceTableRow : FTableRowBase
{ 
	int32_t                                            voice_id;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            voice_path;                                                 // 0x0010   (0x0010)  
	FString                                            anim_name;                                                  // 0x0020   (0x0010)  
	FText                                              Content;                                                    // 0x0030   (0x0018)  
	int32_t                                            captions_time;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LobbyRandomAnimTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLobbyRandomAnimTableRow : FTableRowBase
{ 
	int32_t                                            anim_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            anim_name;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.RandomVoiceConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRandomVoiceConf
{ 
	int32_t                                            voice_id;                                                   // 0x0000   (0x0004)  
	int32_t                                            Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.RandomAnimConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRandomAnimConf
{ 
	int32_t                                            anim_id;                                                    // 0x0000   (0x0004)  
	int32_t                                            Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.LobbyInteractConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FLobbyInteractConfTableRow : FTableRowBase
{ 
	int32_t                                            item_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRandomVoiceConf>                           random_voice_vec;                                           // 0x0010   (0x0010)  
	TArray<FRandomAnimConf>                            random_anim_vec;                                            // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.LobbyBankConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLobbyBankConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            bankname;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.LobbyBGMCfgTableRow
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FLobbyBGMCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Priority;                                                   // 0x000C   (0x0004)  
	FString                                            sound_res_name;                                             // 0x0010   (0x0010)  
	uint32_t                                           music_len;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            song_name;                                                  // 0x0028   (0x0010)  
	FString                                            play_normal_pic;                                            // 0x0038   (0x0010)  
	FString                                            pause_normal_pic;                                           // 0x0048   (0x0010)  
	FString                                            play_press_pic;                                             // 0x0058   (0x0010)  
	FString                                            pause_press_pic;                                            // 0x0068   (0x0010)  
	FString                                            play_hover_pic;                                             // 0x0078   (0x0010)  
	FString                                            pause_hover_pic;                                            // 0x0088   (0x0010)  
	uint32_t                                           jump_id;                                                    // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	FString                                            begin_time;                                                 // 0x00A0   (0x0010)  
	FString                                            end_time;                                                   // 0x00B0   (0x0010)  
};

/// Struct /Script/UADataTableModule.TipItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FTipItem
{ 
	FText                                              Tips;                                                       // 0x0000   (0x0018)  
	uint32_t                                           Weight;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LoadingTipsTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FLoadingTipsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           ModelID;                                                    // 0x000C   (0x0004)  
	uint32_t                                           SubModID;                                                   // 0x0010   (0x0004)  
	uint32_t                                           MapID;                                                      // 0x0014   (0x0004)  
	uint32_t                                           RuleID;                                                     // 0x0018   (0x0004)  
	uint32_t                                           ActivityID;                                                 // 0x001C   (0x0004)  
	uint32_t                                           Activityweight;                                             // 0x0020   (0x0004)  
	float                                              MinWealthy;                                                 // 0x0024   (0x0004)  
	float                                              MaxWealthy;                                                 // 0x0028   (0x0004)  
	uint32_t                                           MinLevel;                                                   // 0x002C   (0x0004)  
	uint32_t                                           MaxLevel;                                                   // 0x0030   (0x0004)  
	float                                              MinEscapeProbability;                                       // 0x0034   (0x0004)  
	float                                              MaxEscapeProbability;                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FTipItem>                                   Tips;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.ImageRefItem
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FImageRefItem
{ 
	uint32_t                                           ImageType;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Path;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/UADataTableModule.LoadingImageTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FLoadingImageTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           ModelID;                                                    // 0x000C   (0x0004)  
	uint32_t                                           SubModID;                                                   // 0x0010   (0x0004)  
	uint32_t                                           MapID;                                                      // 0x0014   (0x0004)  
	uint32_t                                           RuleID;                                                     // 0x0018   (0x0004)  
	uint32_t                                           ActivityID;                                                 // 0x001C   (0x0004)  
	uint32_t                                           Activityweight;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FImageRefItem>                              ImageRef;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.LevelConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           PMCExpPerLevel;                                             // 0x0010   (0x0008)  
	uint64_t                                           PMCExpTotal;                                                // 0x0018   (0x0008)  
	uint32_t                                           PMCIcon;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	uint64_t                                           ScavExpPerLevel;                                            // 0x0028   (0x0008)  
	uint64_t                                           ScavExpTotal;                                               // 0x0030   (0x0008)  
	uint32_t                                           ScavIcon;                                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	uint64_t                                           level_exp_limit;                                            // 0x0040   (0x0008)  
};

/// Struct /Script/UADataTableModule.LeaderboardDesConfTableRow
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FLeaderboardDesConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              titledes;                                                   // 0x0010   (0x0018)  
	FText                                              tipdes;                                                     // 0x0028   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0040   (0x0004)  
	uint32_t                                           is_open;                                                    // 0x0044   (0x0004)  
	uint32_t                                           SpecialType;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FText                                              titlecountdes;                                              // 0x0050   (0x0018)  
	FText                                              nogetnumdes;                                                // 0x0068   (0x0018)  
};

/// Struct /Script/UADataTableModule.LbsTitleConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FLbsTitleConfTableRow : FTableRowBase
{ 
	uint32_t                                           rank_type;                                                  // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.LackFundTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FLackFundTableRow : FTableRowBase
{ 
	uint32_t                                           lack_fund_wealth1;                                          // 0x0008   (0x0004)  
	uint32_t                                           lack_fund_wealth2;                                          // 0x000C   (0x0004)  
	uint32_t                                           lack_fund_cash;                                             // 0x0010   (0x0004)  
	uint32_t                                           lack_fund_mud;                                              // 0x0014   (0x0004)  
	uint32_t                                           lack_fund_gold;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.KeyContainerConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FKeyContainerConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           container_id;                                               // 0x000C   (0x0004)  
	uint32_t                                           show_index;                                                 // 0x0010   (0x0004)  
	uint32_t                                           is_hidden;                                                  // 0x0014   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x0018   (0x0004)  
	uint32_t                                           is_time;                                                    // 0x001C   (0x0004)  
	FText                                              list_desc;                                                  // 0x0020   (0x0018)  
	uint32_t                                           jump_goto;                                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.KeyCabinetConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FKeyCabinetConfTableRow : FTableRowBase
{ 
	uint32_t                                           Index;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   map_id;                                                     // 0x0010   (0x0010)  
	uint32_t                                           is_enable;                                                  // 0x0020   (0x0004)  
	uint32_t                                           key_Item_Type;                                              // 0x0024   (0x0004)  
	FText                                              key_desc;                                                   // 0x0028   (0x0018)  
	uint32_t                                           mapunlockId;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.JumpGotoCfgTableRow
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FJumpGotoCfgTableRow : FTableRowBase
{ 
	uint32_t                                           jump_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              jump_button_name;                                           // 0x0010   (0x0018)  
	FText                                              jump_name;                                                  // 0x0028   (0x0018)  
	FText                                              Command;                                                    // 0x0040   (0x0018)  
	FText                                              jump_target;                                                // 0x0058   (0x0018)  
	FText                                              Param;                                                      // 0x0070   (0x0018)  
	FText                                              open_tips;                                                  // 0x0088   (0x0018)  
	uint32_t                                           display_gray;                                               // 0x00A0   (0x0004)  
	uint32_t                                           replace_content;                                            // 0x00A4   (0x0004)  
	FText                                              display_content;                                            // 0x00A8   (0x0018)  
};

/// Struct /Script/UADataTableModule.ItemLimitConf
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FItemLimitConf
{ 
	uint32_t                                           Item_type;                                                  // 0x0000   (0x0004)  
	uint32_t                                           item_type_num;                                              // 0x0004   (0x0004)  
	uint32_t                                           num_limit;                                                  // 0x0008   (0x0004)  
	uint32_t                                           value_limit;                                                // 0x000C   (0x0004)  
	int32_t                                            tips_id;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/UADataTableModule.ItemTakeInLimitConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FItemTakeInLimitConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           total_value_limit;                                          // 0x000C   (0x0004)  
	int32_t                                            total_value_limit_tip_id;                                   // 0x0010   (0x0004)  
	uint32_t                                           equip_value_limit;                                          // 0x0014   (0x0004)  
	int32_t                                            equip_value_limit_tip_id;                                   // 0x0018   (0x0004)  
	uint32_t                                           safebox_value_limit;                                        // 0x001C   (0x0004)  
	int32_t                                            safebox_value_limit_tip_id;                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FItemLimitConf>                             item_limit_vec;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.ItemSortTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FItemSortTableRow : FTableRowBase
{ 
	uint64_t                                           item_id;                                                    // 0x0008   (0x0008)  
	FString                                            icon;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.ItemShelveTestConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FItemShelveTestConfTableRow : FTableRowBase
{ 
	uint32_t                                           EXPORT_TO_JSON;                                             // 0x0008   (0x0004)  
	uint32_t                                           need_change;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ItemShelveConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FItemShelveConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           show_in_wardrobe;                                           // 0x000C   (0x0004)  
	FDateTime                                          start_time;                                                 // 0x0010   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0018   (0x0008)  
	uint32_t                                           need_change;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ItemShareConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FItemShareConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            iconUrl;                                                    // 0x0010   (0x0010)  
	FString                                            bgUrl;                                                      // 0x0020   (0x0010)  
	uint32_t                                           itemShareType;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FText>                                      extraDesc;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.ItemPriceGearTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FItemPriceGearTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           PriceRange;                                                 // 0x000C   (0x0004)  
	uint32_t                                           Step;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ItemInflationTypeTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FItemInflationTypeTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           low_inflation;                                              // 0x000C   (0x0004)  
	uint32_t                                           high_inflation;                                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ItemFactoryTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FItemFactoryTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              factory_name;                                               // 0x0010   (0x0018)  
	FString                                            IconPath;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.ItemExchangePriceTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FItemExchangePriceTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            TicketPrice;                                                // 0x000C   (0x0004)  
	int32_t                                            CoinPrice;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ExchangeEffect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FExchangeEffect
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           change_item_id;                                             // 0x0008   (0x0004)  
	uint32_t                                           change_num;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ItemEffectConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FItemEffectConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           effect_type;                                                // 0x000C   (0x0004)  
	uint32_t                                           min_lv;                                                     // 0x0010   (0x0004)  
	uint32_t                                           min_season;                                                 // 0x0014   (0x0004)  
	uint32_t                                           auto_use;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FExchangeEffect>                            exchange_list;                                              // 0x0020   (0x0010)  
	uint32_t                                           privilege_item_id;                                          // 0x0030   (0x0004)  
	uint32_t                                           privilege_num;                                              // 0x0034   (0x0004)  
	uint32_t                                           bp_season;                                                  // 0x0038   (0x0004)  
	uint32_t                                           bp_vip_lv;                                                  // 0x003C   (0x0004)  
	uint32_t                                           auction_week_sale_order_num;                                // 0x0040   (0x0004)  
	uint32_t                                           auction_intime_sale_order_num;                              // 0x0044   (0x0004)  
	uint32_t                                           auction_effect_num;                                         // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ItemDynamicPriceTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FItemDynamicPriceTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           y_standard_price;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ItemConfTableRow
/// Size: 0x0148 (328 bytes) (0x000008 - 0x000148) align 8 MaxSize: 0x0148
struct FItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FText                                              ShortName;                                                  // 0x0028   (0x0018)  
	uint32_t                                           IconId;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              Describe;                                                   // 0x0048   (0x0018)  
	int32_t                                            SizeX;                                                      // 0x0060   (0x0004)  
	int32_t                                            SizeY;                                                      // 0x0064   (0x0004)  
	float                                              Weight;                                                     // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            pickup_sound;                                               // 0x0070   (0x0010)  
	FString                                            use_sound;                                                  // 0x0080   (0x0010)  
	FString                                            drop_sound;                                                 // 0x0090   (0x0010)  
	FString                                            drop_on_ground_sound;                                       // 0x00A0   (0x0010)  
	uint32_t                                           sell_price;                                                 // 0x00B0   (0x0004)  
	uint32_t                                           sell_rate;                                                  // 0x00B4   (0x0004)  
	uint32_t                                           can_sell;                                                   // 0x00B8   (0x0004)  
	uint32_t                                           standard_price;                                             // 0x00BC   (0x0004)  
	uint32_t                                           StackMax;                                                   // 0x00C0   (0x0004)  
	int32_t                                            TakeInCount;                                                // 0x00C4   (0x0004)  
	FDateTime                                          expire_time;                                                // 0x00C8   (0x0008)  
	uint32_t                                           expire_duration;                                            // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<FCommonItemConfItem>                        compensate;                                                 // 0x00D8   (0x0010)  
	uint32_t                                           not_discard;                                                // 0x00E8   (0x0004)  
	uint32_t                                           Bind;                                                       // 0x00EC   (0x0004)  
	uint32_t                                           Rarity;                                                     // 0x00F0   (0x0004)  
	uint32_t                                           Durability;                                                 // 0x00F4   (0x0004)  
	int32_t                                            UseExp;                                                     // 0x00F8   (0x0004)  
	int32_t                                            LootExp;                                                    // 0x00FC   (0x0004)  
	TArray<char>                                       RejectSlot;                                                 // 0x0100   (0x0010)  
	TArray<uint32_t>                                   RejectItems;                                                // 0x0110   (0x0010)  
	uint32_t                                           sort;                                                       // 0x0120   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x0124   (0x0004)  
	int32_t                                            PackageFlags;                                               // 0x0128   (0x0004)  
	uint32_t                                           FactoryId;                                                  // 0x012C   (0x0004)  
	uint32_t                                           is_Arenaitem;                                               // 0x0130   (0x0004)  
	uint32_t                                           RarityColor;                                                // 0x0134   (0x0004)  
	uint32_t                                           is_faction;                                                 // 0x0138   (0x0004)  
	int32_t                                            transfer_value_rate;                                        // 0x013C   (0x0004)  
	uint32_t                                           limit_num;                                                  // 0x0140   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ItemComponentsIconTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FItemComponentsIconTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              component_name;                                             // 0x0010   (0x0018)  
	FString                                            icon_name;                                                  // 0x0028   (0x0010)  
	FString                                            icon_path;                                                  // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.ItemClassifyGroupConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FItemClassifyGroupConfTableRow : FTableRowBase
{ 
	char                                               ID;                                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<uint64_t>                                   Types;                                                      // 0x0010   (0x0010)  
	char                                               sortOrder;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/UADataTableModule.ItemCheckWhiteListConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FItemCheckWhiteListConfTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ItemCategoryIconPathTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FItemCategoryIconPathTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              category_name;                                              // 0x0010   (0x0018)  
	uint32_t                                           seg;                                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            icon_path;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.IntelligenceLootPointTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FIntelligenceLootPointTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   loot_data_info_id_list;                                     // 0x0010   (0x0010)  
	FText                                              announce_text;                                              // 0x0020   (0x0018)  
	uint32_t                                           Weight;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.IntelligenceTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FIntelligenceTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           intelligence_id;                                            // 0x000C   (0x0004)  
	uint32_t                                           icon;                                                       // 0x0010   (0x0004)  
	uint32_t                                           Level;                                                      // 0x0014   (0x0004)  
	FText                                              Type;                                                       // 0x0018   (0x0018)  
	FText                                              State;                                                      // 0x0030   (0x0018)  
	FString                                            coordinate;                                                 // 0x0048   (0x0010)  
	FText                                              desc;                                                       // 0x0058   (0x0018)  
};

/// Struct /Script/UADataTableModule.InsureTypeConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FInsureTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           insuretime_min;                                             // 0x000C   (0x0004)  
	uint32_t                                           insuretime_max;                                             // 0x0010   (0x0004)  
	uint32_t                                           lootinglocktime;                                            // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.InsureQualityProbConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FInsureQualityProbConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           prob;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.InsureCommonItemConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FInsureCommonItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   price_list;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.InsureCommonAccConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FInsureCommonAccConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   price_list;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.InsureCombineItemConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FInsureCombineItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   price_list;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.DailyTimeConf
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FDailyTimeConf
{ 
	FText                                              daily_begin_time;                                           // 0x0000   (0x0018)  
	FText                                              daily_end_time;                                             // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.OpenMapModeConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FOpenMapModeConf
{ 
	uint32_t                                           map_mode_id;                                                // 0x0000   (0x0004)  
	uint32_t                                           time_seg;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.InnerGameActConfTableRow
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FInnerGameActConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           is_open;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FDateTime                                          begin_time;                                                 // 0x0030   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0038   (0x0008)  
	uint32_t                                           inner_game_act_type;                                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              json_param;                                                 // 0x0048   (0x0018)  
	FText                                              notice;                                                     // 0x0060   (0x0018)  
	FText                                              des;                                                        // 0x0078   (0x0018)  
	TArray<uint32_t>                                   gameplay_related_items;                                     // 0x0090   (0x0010)  
	TArray<uint32_t>                                   weekly_day_vec;                                             // 0x00A0   (0x0010)  
	TArray<FDailyTimeConf>                             daily_time_vec;                                             // 0x00B0   (0x0010)  
	TArray<FOpenMapModeConf>                           open_map_mode_vec;                                          // 0x00C0   (0x0010)  
};

/// Struct /Script/UADataTableModule.IconScaleConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FIconScaleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	float                                              DistancePercentA;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.HotUpdateGlobalConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FHotUpdateGlobalConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.HelperTypeConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FHelperTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           Type;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              TypeName;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.HelperConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FHelperConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Index;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x0018   (0x0018)  
	FText                                              desc;                                                       // 0x0030   (0x0018)  
};

/// Struct /Script/UADataTableModule.HelpRootTypeConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FHelpRootTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.TabDetailItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FTabDetailItem
{ 
	FText                                              tab_title;                                                  // 0x0000   (0x0018)  
	uint32_t                                           ppt_id;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.HelpEntryInfoConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FHelpEntryInfoConfTableRow : FTableRowBase
{ 
	uint32_t                                           entry_id;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              main_title;                                                 // 0x0010   (0x0018)  
	TArray<FTabDetailItem>                             tab_content;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.H5MediaItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FH5MediaItem
{ 
	FString                                            h5BgIcon;                                                   // 0x0000   (0x0010)  
	FString                                            h5Url;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.HelpDialogContentItem
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FHelpDialogContentItem
{ 
	FText                                              contentTitle;                                               // 0x0000   (0x0018)  
	uint32_t                                           pageIndex;                                                  // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              ContentText;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/UADataTableModule.HelpDialogConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FHelpDialogConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	uint32_t                                           rewardId;                                                   // 0x0028   (0x0004)  
	uint32_t                                           canGetTime;                                                 // 0x002C   (0x0004)  
	uint32_t                                           rootType;                                                   // 0x0030   (0x0004)  
	uint32_t                                           sortIndex;                                                  // 0x0034   (0x0004)  
	uint32_t                                           functioncontrolId;                                          // 0x0038   (0x0004)  
	uint32_t                                           unlockLevel;                                                // 0x003C   (0x0004)  
	uint32_t                                           isHidden;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<uint32_t>                                   triggerIds;                                                 // 0x0048   (0x0010)  
	TArray<uint32_t>                                   mediaArray;                                                 // 0x0058   (0x0010)  
	TArray<FH5MediaItem>                               h5Media;                                                    // 0x0068   (0x0010)  
	TArray<FHelpDialogContentItem>                     Content;                                                    // 0x0078   (0x0010)  
};

/// Struct /Script/UADataTableModule.HealthThresholdTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FHealthThresholdTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              State;                                                      // 0x0010   (0x0018)  
	uint32_t                                           Hierarchy;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              Content;                                                    // 0x0030   (0x0018)  
	uint32_t                                           Parameter;                                                  // 0x0048   (0x0004)  
	uint32_t                                           Alert;                                                      // 0x004C   (0x0004)  
	uint32_t                                           Priority;                                                   // 0x0050   (0x0004)  
	uint32_t                                           LevelLimit;                                                 // 0x0054   (0x0004)  
};

/// Struct /Script/UADataTableModule.HeadIconItemConfTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FHeadIconItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Display;                                                    // 0x0010   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x0014   (0x0004)  
	FText                                              obtain;                                                     // 0x0018   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0038   (0x0018)  
	uint32_t                                           Order;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FDateTime                                          start_time;                                                 // 0x0058   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0060   (0x0008)  
	uint32_t                                           is_cannot_get;                                              // 0x0068   (0x0004)  
	uint32_t                                           is_dynamic_logo;                                            // 0x006C   (0x0004)  
	FString                                            activity_info;                                              // 0x0070   (0x0010)  
	FString                                            asset_path;                                                 // 0x0080   (0x0010)  
	FString                                            dynamic_asset_path;                                         // 0x0090   (0x0010)  
	FString                                            dynamic_asset_path_prev;                                    // 0x00A0   (0x0010)  
};

/// Struct /Script/UADataTableModule.HeadConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FHeadConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Price;                                                      // 0x000C   (0x0004)  
	uint32_t                                           Helmet;                                                     // 0x0010   (0x0004)  
	uint32_t                                           Visor;                                                      // 0x0014   (0x0004)  
	uint32_t                                           Headset;                                                    // 0x0018   (0x0004)  
	uint32_t                                           Mask;                                                       // 0x001C   (0x0004)  
};

/// Struct /Script/UADataTableModule.HeadBoxItemConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FHeadBoxItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Display;                                                    // 0x0010   (0x0004)  
	uint32_t                                           jump_goto;                                                  // 0x0014   (0x0004)  
	FText                                              obtain;                                                     // 0x0018   (0x0018)  
	uint32_t                                           Order;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FDateTime                                          start_time;                                                 // 0x0038   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0040   (0x0008)  
	uint32_t                                           is_cannot_get;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.HardwareBenchmarkScoreTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FHardwareBenchmarkScoreTableRow : FTableRowBase
{ 
	uint32_t                                           HardwareId;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            HardwareName;                                               // 0x0010   (0x0010)  
	float                                              CpuScore;                                                   // 0x0020   (0x0004)  
	float                                              GpuScore;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.HardAITaskTreeConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FHardAITaskTreeConfTableRow : FTableRowBase
{ 
	uint32_t                                           show_order;                                                 // 0x0008   (0x0004)  
	uint32_t                                           child_len;                                                  // 0x000C   (0x0004)  
	uint32_t                                           root_task_id;                                               // 0x0010   (0x0004)  
	uint32_t                                           child1;                                                     // 0x0014   (0x0004)  
	uint32_t                                           child2;                                                     // 0x0018   (0x0004)  
	uint32_t                                           child3;                                                     // 0x001C   (0x0004)  
	uint32_t                                           child4;                                                     // 0x0020   (0x0004)  
	uint32_t                                           child5;                                                     // 0x0024   (0x0004)  
	uint32_t                                           child6;                                                     // 0x0028   (0x0004)  
	uint32_t                                           child7;                                                     // 0x002C   (0x0004)  
	uint32_t                                           child8;                                                     // 0x0030   (0x0004)  
	uint32_t                                           child9;                                                     // 0x0034   (0x0004)  
};

/// Struct /Script/UADataTableModule.GuaranteedConditions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGuaranteedConditions
{ 
	uint32_t                                           tag_id;                                                     // 0x0000   (0x0004)  
	uint32_t                                           attr_id;                                                    // 0x0004   (0x0004)  
	int64_t                                            attr_low;                                                   // 0x0008   (0x0008)  
	int64_t                                            attr_up;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.GuaranteedUseAttrTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FGuaranteedUseAttrTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           guaranteed_pool_id;                                         // 0x000C   (0x0004)  
	int32_t                                            attr_value;                                                 // 0x0010   (0x0004)  
	uint32_t                                           loot_stage;                                                 // 0x0014   (0x0004)  
	uint32_t                                           loot_count;                                                 // 0x0018   (0x0004)  
	int32_t                                            extra_value;                                                // 0x001C   (0x0004)  
	uint32_t                                           calculate_time;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FGuaranteedConditions>                      guaranteed_conditions;                                      // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.GuaranteedPoolStage
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGuaranteedPoolStage
{ 
	uint32_t                                           times_count;                                                // 0x0000   (0x0004)  
	uint32_t                                           limit_value;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.GuaranteedPoolConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FGuaranteedPoolConfTableRow : FTableRowBase
{ 
	uint32_t                                           guaranteed_pool_id;                                         // 0x0008   (0x0004)  
	uint32_t                                           defalut_limit;                                              // 0x000C   (0x0004)  
	uint32_t                                           max_limit;                                                  // 0x0010   (0x0004)  
	uint32_t                                           min_limit;                                                  // 0x0014   (0x0004)  
	TArray<FGuaranteedPoolStage>                       stages;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.GuaranteeLimitStrategyTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FGuaranteeLimitStrategyTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           shield_type;                                                // 0x000C   (0x0004)  
	uint32_t                                           sub_item_id;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<uint32_t>                                   sub_item_num;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.KillPMCGuaranteeAddition
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FKillPMCGuaranteeAddition
{ 
	TArray<int32_t>                                    guarantee_pool_id;                                          // 0x0000   (0x0010)  
	TArray<int32_t>                                    guarantee_addval;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.GuaranteeKillPMCAddConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FGuaranteeKillPMCAddConfTableRow : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            PlayModeId;                                                 // 0x0010   (0x0008)  
	int64_t                                            player_elo_min;                                             // 0x0018   (0x0008)  
	int64_t                                            player_elo_max;                                             // 0x0020   (0x0008)  
	int64_t                                            player_wealth_min;                                          // 0x0028   (0x0008)  
	int64_t                                            player_wealth_max;                                          // 0x0030   (0x0008)  
	TArray<FKillPMCGuaranteeAddition>                  kill_pmc_guarantee_array;                                   // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.GuaranteeGenItemTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FGuaranteeGenItemTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           gen_group_id;                                               // 0x000C   (0x0004)  
	uint32_t                                           gen_item_id;                                                // 0x0010   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0014   (0x0004)  
	TArray<uint32_t>                                   item_num;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.GuaranteeFactorConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FGuaranteeFactorConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            PlayModeId;                                                 // 0x0010   (0x0008)  
	uint64_t                                           TotalValueMin;                                              // 0x0018   (0x0008)  
	uint64_t                                           TotalValueMax;                                              // 0x0020   (0x0008)  
	float                                              Factor;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GuaranteeContainerTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FGuaranteeContainerTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           play_mode_id;                                               // 0x000C   (0x0004)  
	uint32_t                                           lootpoint_type_id;                                          // 0x0010   (0x0004)  
	uint32_t                                           guarantee_id;                                               // 0x0014   (0x0004)  
	uint32_t                                           Value;                                                      // 0x0018   (0x0004)  
	uint32_t                                           check_group_id;                                             // 0x001C   (0x0004)  
	uint32_t                                           gen_group_id;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GuaranteeCheckItemTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FGuaranteeCheckItemTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           check_group_id;                                             // 0x000C   (0x0004)  
	uint32_t                                           check_item_id;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GoldDogTagConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGoldDogTagConfTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	FString                                            bgUrl;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.GlobalNumConfTableRow
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FGlobalNumConfTableRow : FTableRowBase
{ 
};

/// Struct /Script/UADataTableModule.GlobalDailyTimeConf
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGlobalDailyTimeConf
{ 
	FText                                              daily_time;                                                 // 0x0000   (0x0018)  
};

/// Struct /Script/UADataTableModule.GlobalConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FGlobalConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<uint64_t>                                   ary;                                                        // 0x0018   (0x0010)  
	TArray<int64_t>                                    iary;                                                       // 0x0028   (0x0010)  
	FText                                              Str;                                                        // 0x0038   (0x0018)  
	TArray<FGlobalDailyTimeConf>                       daily_time_vec;                                             // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.GlobalClientConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FGlobalClientConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<uint64_t>                                   ary;                                                        // 0x0018   (0x0010)  
	TArray<int64_t>                                    iary;                                                       // 0x0028   (0x0010)  
	FText                                              Str;                                                        // 0x0038   (0x0018)  
};

/// Struct /Script/UADataTableModule.GiftPackageShowItemsConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FGiftPackageShowItemsConfTableRow : FTableRowBase
{ 
	uint32_t                                           package_id;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   item_id;                                                    // 0x0010   (0x0010)  
	TArray<uint32_t>                                   is_black;                                                   // 0x0020   (0x0010)  
	TArray<uint32_t>                                   item_num;                                                   // 0x0030   (0x0010)  
	TArray<uint32_t>                                   Weight;                                                     // 0x0040   (0x0010)  
	uint32_t                                           is_hide;                                                    // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GiftEquipItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FGiftEquipItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           Parent;                                                     // 0x0008   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x000C   (0x0004)  
	uint32_t                                           is_rotate;                                                  // 0x0010   (0x0004)  
	uint32_t                                           Index;                                                      // 0x0014   (0x0004)  
	uint32_t                                           pos_x;                                                      // 0x0018   (0x0004)  
	uint32_t                                           pos_y;                                                      // 0x001C   (0x0004)  
};

/// Struct /Script/UADataTableModule.GiftPackageEquipConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGiftPackageEquipConfTableRow : FTableRowBase
{ 
	uint32_t                                           Key;                                                        // 0x0008   (0x0004)  
	uint32_t                                           ID;                                                         // 0x000C   (0x0004)  
	TArray<FGiftEquipItem>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.GiftPackageEquipTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGiftPackageEquipTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Equip;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.GiftPackageConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FGiftPackageConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           is_equip_package;                                           // 0x0010   (0x0004)  
	uint32_t                                           limit_batch_open;                                           // 0x0014   (0x0004)  
	uint32_t                                           auto_open;                                                  // 0x0018   (0x0004)  
	uint32_t                                           Level;                                                      // 0x001C   (0x0004)  
	uint32_t                                           filter_type;                                                // 0x0020   (0x0004)  
	uint32_t                                           self_select_num;                                            // 0x0024   (0x0004)  
	uint32_t                                           weight_limit;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GiftGroupDescConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FGiftGroupDescConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Detail;                                                     // 0x0010   (0x0018)  
	FText                                              des;                                                        // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.GestureIconMontageTableRow
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FGestureIconMontageTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            GestureIconPath;                                            // 0x0010   (0x0010)  
	FText                                              GestureDescription;                                         // 0x0020   (0x0018)  
	uint32_t                                           GestureMontagesMapID;                                       // 0x0038   (0x0004)  
	uint32_t                                           GestureMontagesMapID_Fake;                                  // 0x003C   (0x0004)  
	uint32_t                                           depend_avatar;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0048   (0x0010)  
	TArray<uint32_t>                                   jump_goto;                                                  // 0x0058   (0x0010)  
	FText                                              no_source_description;                                      // 0x0068   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0088   (0x0018)  
};

/// Struct /Script/UADataTableModule.GShopOnshelfTime
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGShopOnshelfTime
{ 
	FDateTime                                          start_time;                                                 // 0x0000   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/UADataTableModule.GenericShopTradeConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FGenericShopTradeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           shop_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           tag_id;                                                     // 0x0010   (0x0004)  
	uint32_t                                           sell_item_id;                                               // 0x0014   (0x0004)  
	uint32_t                                           should_display;                                             // 0x0018   (0x0004)  
	uint32_t                                           sell_num;                                                   // 0x001C   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0020   (0x0004)  
	uint32_t                                           is_faction;                                                 // 0x0024   (0x0004)  
	uint32_t                                           cost_item_id;                                               // 0x0028   (0x0004)  
	uint32_t                                           cost_num;                                                   // 0x002C   (0x0004)  
	uint32_t                                           unlock_type;                                                // 0x0030   (0x0004)  
	uint32_t                                           unlock_param;                                               // 0x0034   (0x0004)  
	uint32_t                                           unlock_level;                                               // 0x0038   (0x0004)  
	uint32_t                                           buy_limit_type;                                             // 0x003C   (0x0004)  
	uint32_t                                           buy_limit_num;                                              // 0x0040   (0x0004)  
	uint32_t                                           bind_season;                                                // 0x0044   (0x0004)  
	uint32_t                                           preshelf_seconds;                                           // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FGShopOnshelfTime>                          onshelf_time;                                               // 0x0050   (0x0010)  
	uint32_t                                           sort_param;                                                 // 0x0060   (0x0004)  
	uint32_t                                           onshelf_style;                                              // 0x0064   (0x0004)  
	uint32_t                                           item_show_main;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GenericShopTagConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FGenericShopTagConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              tag_name;                                                   // 0x0010   (0x0018)  
	FString                                            tag_icon;                                                   // 0x0028   (0x0010)  
	uint32_t                                           sort;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            desc;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.ConfGShopGood
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FConfGShopGood
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/UADataTableModule.GenericShopConfTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FGenericShopConfTableRow : FTableRowBase
{ 
	uint32_t                                           shop_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              shop_name;                                                  // 0x0010   (0x0018)  
	TArray<FConfGShopGood>                             cost_items;                                                 // 0x0028   (0x0010)  
	FText                                              shop_detail;                                                // 0x0038   (0x0018)  
	uint32_t                                           red_point_type;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<uint32_t>                                   red_point_id;                                               // 0x0058   (0x0010)  
};

/// Struct /Script/UADataTableModule.GameSettingDescriptionTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FGameSettingDescriptionTableRow : FTableRowBase
{ 
	FText                                              GameSettingName;                                            // 0x0008   (0x0018)  
	uint32_t                                           PPTType;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x0028   (0x0018)  
	FText                                              desc;                                                       // 0x0040   (0x0018)  
	FString                                            Img;                                                        // 0x0058   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryWorkbenchFormulaConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FGalleryWorkbenchFormulaConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           abandon_level;                                              // 0x0010   (0x0004)  
	uint32_t                                           display_order;                                              // 0x0014   (0x0004)  
	uint32_t                                           replace_formula_id;                                         // 0x0018   (0x0004)  
	uint32_t                                           Duration;                                                   // 0x001C   (0x0004)  
	uint32_t                                           season_only;                                                // 0x0020   (0x0004)  
	uint32_t                                           Enabled;                                                    // 0x0024   (0x0004)  
	uint32_t                                           claim_after_disable;                                        // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FCommonItemConfItem>                        products;                                                   // 0x0030   (0x0010)  
	TArray<FCommonItemConfItem>                        cost_items;                                                 // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryUpgradeTargetConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FGalleryUpgradeTargetConfTableRow : FTableRowBase
{ 
	uint32_t                                           target_id;                                                  // 0x0008   (0x0004)  
	uint32_t                                           target_type;                                                // 0x000C   (0x0004)  
	uint32_t                                           jump_id;                                                    // 0x0010   (0x0004)  
	uint32_t                                           Progress;                                                   // 0x0014   (0x0004)  
	uint32_t                                           Param1;                                                     // 0x0018   (0x0004)  
	uint32_t                                           Param2;                                                     // 0x001C   (0x0004)  
	uint32_t                                           Param3;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GalleryTreasuryValueTitleConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FGalleryTreasuryValueTitleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Value;                                                      // 0x000C   (0x0004)  
	FText                                              title_name;                                                 // 0x0010   (0x0018)  
	FString                                            title_icon;                                                 // 0x0028   (0x0010)  
	TArray<uint32_t>                                   exclude_items;                                              // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryTreasuryUpgradeConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FGalleryTreasuryUpgradeConfTableRow : FTableRowBase
{ 
	uint32_t                                           Index;                                                      // 0x0008   (0x0004)  
	uint32_t                                           ID;                                                         // 0x000C   (0x0004)  
	uint32_t                                           Level;                                                      // 0x0010   (0x0004)  
	uint32_t                                           unlock_num;                                                 // 0x0014   (0x0004)  
	uint32_t                                           keep_num;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FCommonItemConfItem>                        cost_items;                                                 // 0x0020   (0x0010)  
	FSoftObjectPath                                    bp_path;                                                    // 0x0030   (0x0018)  
};

/// Struct /Script/UADataTableModule.GalleryTreasuryStepConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FGalleryTreasuryStepConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Num;                                                        // 0x000C   (0x0004)  
	FString                                            text_color;                                                 // 0x0010   (0x0010)  
	FString                                            bg_path;                                                    // 0x0020   (0x0010)  
	FString                                            large_bg_path;                                              // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryTreasuryConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGalleryTreasuryConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          abs_begin_time;                                             // 0x0010   (0x0008)  
	uint32_t                                           display_order;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TreasuryCabinetCombination
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTreasuryCabinetCombination
{ 
	TArray<uint32_t>                                   cabinet_list;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryTreasuryCameraConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FGalleryTreasuryCameraConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	TArray<uint32_t>                                   show_items;                                                 // 0x0010   (0x0010)  
	uint32_t                                           zoomout_id;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<uint32_t>                                   accessable_in_level;                                        // 0x0028   (0x0010)  
	TArray<FTreasuryCabinetCombination>                cabinet_combination;                                        // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryTopicConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FGalleryTopicConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           topic;                                                      // 0x000C   (0x0004)  
	FText                                              Content;                                                    // 0x0010   (0x0018)  
	TArray<FCommonItemConfItem>                        reward;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryShowWeaponConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FGalleryShowWeaponConfTableRow : FTableRowBase
{ 
	uint32_t                                           weapon_id;                                                  // 0x0008   (0x0004)  
	uint32_t                                           kill_num;                                                   // 0x000C   (0x0004)  
	TArray<uint32_t>                                   kill_num_list;                                              // 0x0010   (0x0010)  
	uint32_t                                           need_ruble;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FDateTime                                          abs_begin_time;                                             // 0x0028   (0x0008)  
	FDateTime                                          abs_end_time;                                               // 0x0030   (0x0008)  
	uint32_t                                           ignore_time_limit;                                          // 0x0038   (0x0004)  
	uint32_t                                           assemble_id;                                                // 0x003C   (0x0004)  
};

/// Struct /Script/UADataTableModule.GalleryPositionConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FGalleryPositionConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            pos_tag;                                                    // 0x0010   (0x0010)  
	FText                                              pos_name;                                                   // 0x0020   (0x0018)  
	uint32_t                                           Weight;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GalleryMusicCollectionConfTableRow
/// Size: 0x0118 (280 bytes) (0x000008 - 0x000118) align 8 MaxSize: 0x0118
struct FGalleryMusicCollectionConfTableRow : FTableRowBase
{ 
	uint32_t                                           music_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           music_type;                                                 // 0x000C   (0x0004)  
	uint32_t                                           has_vinyl;                                                  // 0x0010   (0x0004)  
	uint32_t                                           vinyl_id;                                                   // 0x0014   (0x0004)  
	uint32_t                                           display_order;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FDateTime                                          trial_begin_time;                                           // 0x0020   (0x0008)  
	FDateTime                                          trial_end_time;                                             // 0x0028   (0x0008)  
	FDateTime                                          abs_begin_time;                                             // 0x0030   (0x0008)  
	FDateTime                                          abs_end_time;                                               // 0x0038   (0x0008)  
	uint32_t                                           ignore_time_limit;                                          // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              lock_desc;                                                  // 0x0048   (0x0018)  
	FString                                            audio_event;                                                // 0x0060   (0x0010)  
	uint32_t                                           is_group_music;                                             // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            music_icon_path;                                            // 0x0078   (0x0010)  
	FString                                            music_cd_icon_path;                                         // 0x0088   (0x0010)  
	FText                                              record_position;                                            // 0x0098   (0x0018)  
	uint32_t                                           record_map_id;                                              // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FText                                              record_content;                                             // 0x00B8   (0x0018)  
	FText                                              tag_tips;                                                   // 0x00D0   (0x0018)  
	FText                                              music_tag;                                                  // 0x00E8   (0x0018)  
	uint32_t                                           jump_id;                                                    // 0x0100   (0x0004)  
	uint32_t                                           target_type;                                                // 0x0104   (0x0004)  
	TArray<FCommonItemConfItem>                        need_items;                                                 // 0x0108   (0x0010)  
};

/// Struct /Script/UADataTableModule.NeedItemRef
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNeedItemRef
{ 
	TArray<uint32_t>                                   has_items;                                                  // 0x0000   (0x0010)  
	FText                                              desc;                                                       // 0x0010   (0x0018)  
	uint32_t                                           need_num;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GalleryMedalTaskConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FGalleryMedalTaskConfTableRow : FTableRowBase
{ 
	uint32_t                                           medal_id;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNeedItemRef>                               needitem;                                                   // 0x0010   (0x0010)  
	uint32_t                                           Season;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GalleryGlobalConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FGalleryGlobalConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<uint32_t>                                   val_list;                                                   // 0x0018   (0x0010)  
	TArray<FText>                                      str_val_list;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.UpgradeCostItems
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUpgradeCostItems
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.GalleryFurnitureUpgradeConfTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FGalleryFurnitureUpgradeConfTableRow : FTableRowBase
{ 
	uint32_t                                           Index;                                                      // 0x0008   (0x0004)  
	uint32_t                                           ID;                                                         // 0x000C   (0x0004)  
	uint32_t                                           Level;                                                      // 0x0010   (0x0004)  
	uint32_t                                           max_child_num;                                              // 0x0014   (0x0004)  
	TArray<uint32_t>                                   buff_list;                                                  // 0x0018   (0x0010)  
	TArray<uint32_t>                                   upgrade_targets;                                            // 0x0028   (0x0010)  
	uint32_t                                           cost_cash;                                                  // 0x0038   (0x0004)  
	uint32_t                                           cost_timestamp;                                             // 0x003C   (0x0004)  
	TArray<FUpgradeCostItems>                          cost_items;                                                 // 0x0040   (0x0010)  
	TArray<uint32_t>                                   scene_display_list;                                         // 0x0050   (0x0010)  
	TArray<FText>                                      scene_names;                                                // 0x0060   (0x0010)  
	FString                                            bg_image_path;                                              // 0x0070   (0x0010)  
	FString                                            background_path;                                            // 0x0080   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryFurnitureConfTableRow
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FGalleryFurnitureConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           display_order;                                              // 0x0010   (0x0004)  
	uint32_t                                           max_child_num;                                              // 0x0014   (0x0004)  
	uint32_t                                           start_lv;                                                   // 0x0018   (0x0004)  
	uint32_t                                           unlock_lv;                                                  // 0x001C   (0x0004)  
	FString                                            Tag;                                                        // 0x0020   (0x0010)  
	uint32_t                                           unlock_redpoint_id;                                         // 0x0030   (0x0004)  
	bool                                               virtual_furniture;                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FText                                              Name;                                                       // 0x0038   (0x0018)  
	FText                                              desc;                                                       // 0x0050   (0x0018)  
	FText                                              unlock_preview_tip;                                         // 0x0068   (0x0018)  
	FText                                              unlock_tip;                                                 // 0x0080   (0x0018)  
	FString                                            icon;                                                       // 0x0098   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryDogtagBoxConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FGalleryDogtagBoxConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           dogtag_num;                                                 // 0x000C   (0x0004)  
	FSoftObjectPath                                    bp_path;                                                    // 0x0010   (0x0018)  
	FSoftObjectPath                                    guide_img_path;                                             // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.DecorateSceneConf
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FDecorateSceneConf
{ 
	uint32_t                                           scene_index;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FText                                              scene_name;                                                 // 0x0008   (0x0018)  
	TArray<uint32_t>                                   Slots;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryDecorateTabConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FGalleryDecorateTabConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0028   (0x0004)  
	bool                                               is_base_decorate;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	TArray<FDecorateSceneConf>                         scene_list;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryDecorateSlotConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FGalleryDecorateSlotConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           whitelist_item_type;                                        // 0x000C   (0x0004)  
	uint32_t                                           default_item;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GalleryDecorateConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FGalleryDecorateConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           display_order;                                              // 0x000C   (0x0004)  
	FDateTime                                          abs_begin_time;                                             // 0x0010   (0x0008)  
	FDateTime                                          abs_end_time;                                               // 0x0018   (0x0008)  
	uint32_t                                           ignore_time_limit;                                          // 0x0020   (0x0004)  
	uint32_t                                           sub_redpoint_id;                                            // 0x0024   (0x0004)  
	uint32_t                                           jump_id;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              lock_desc;                                                  // 0x0030   (0x0018)  
	uint32_t                                           target_type;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FCommonItemConfItem>                        need_items;                                                 // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.CollectionNeedItem
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCollectionNeedItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.GalleryCollectionTaskConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FGalleryCollectionTaskConfTableRow : FTableRowBase
{ 
	uint32_t                                           collection_id;                                              // 0x0008   (0x0004)  
	uint32_t                                           display_order;                                              // 0x000C   (0x0004)  
	uint32_t                                           prev_level_id;                                              // 0x0010   (0x0004)  
	uint32_t                                           sub_type;                                                   // 0x0014   (0x0004)  
	uint32_t                                           jump_id;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FDateTime                                          abs_begin_time;                                             // 0x0020   (0x0008)  
	FDateTime                                          abs_end_time;                                               // 0x0028   (0x0008)  
	uint32_t                                           ignore_time_limit;                                          // 0x0030   (0x0004)  
	uint32_t                                           target_type;                                                // 0x0034   (0x0004)  
	uint32_t                                           interact_item;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FCollectionNeedItem>                        need_items;                                                 // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.exchangeItem
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FexchangeItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.GalleryCollectionExchangeConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FGalleryCollectionExchangeConfTableRow : FTableRowBase
{ 
	uint32_t                                           collection_id;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          abs_begin_time;                                             // 0x0010   (0x0008)  
	FDateTime                                          abs_end_time;                                               // 0x0018   (0x0008)  
	TArray<FexchangeItem>                              exchange_items;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.CollectRewardItems
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCollectRewardItems
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.GalleryCollectRewardConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FGalleryCollectRewardConfTableRow : FTableRowBase
{ 
	uint32_t                                           collect_reward_id;                                          // 0x0008   (0x0004)  
	uint32_t                                           ID;                                                         // 0x000C   (0x0004)  
	uint32_t                                           reward_level;                                               // 0x0010   (0x0004)  
	uint32_t                                           collect_target_num;                                         // 0x0014   (0x0004)  
	TArray<FCollectRewardItems>                        reward_items;                                               // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryCharacterPoseConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FGalleryCharacterPoseConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           character_id;                                               // 0x000C   (0x0004)  
	uint32_t                                           pos_id;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            idle_pose_key;                                              // 0x0018   (0x0010)  
	FString                                            dialog_in_pose_key;                                         // 0x0028   (0x0010)  
	FString                                            dialog_out_pose_key;                                        // 0x0038   (0x0010)  
	FString                                            dialog_camera_tag;                                          // 0x0048   (0x0010)  
	FString                                            switch_camera_tag;                                          // 0x0058   (0x0010)  
	FVector                                            pos_offset;                                                 // 0x0068   (0x000C)  
	FVector2D                                          capsule_size;                                               // 0x0074   (0x0008)  
	FVector                                            rot_offset;                                                 // 0x007C   (0x000C)  
};

/// Struct /Script/UADataTableModule.GalleryCharacterDialogConfTableRow
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FGalleryCharacterDialogConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           character_id;                                               // 0x000C   (0x0004)  
	FText                                              Anim;                                                       // 0x0010   (0x0018)  
	FText                                              Sound;                                                      // 0x0028   (0x0018)  
	FText                                              Content;                                                    // 0x0040   (0x0018)  
	uint32_t                                           Enable_LookAt;                                              // 0x0058   (0x0004)  
	float                                              lookat_blend_speed;                                         // 0x005C   (0x0004)  
	uint32_t                                           Command;                                                    // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<uint32_t>                                   Param;                                                      // 0x0068   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryCharacterConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FGalleryCharacterConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           avatar_set_id;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<uint32_t>                                   forbid_types;                                               // 0x0030   (0x0010)  
	TArray<uint32_t>                                   topics;                                                     // 0x0040   (0x0010)  
	TArray<uint32_t>                                   topics_weight;                                              // 0x0050   (0x0010)  
	FString                                            Bank;                                                       // 0x0060   (0x0010)  
};

/// Struct /Script/UADataTableModule.GalleryBuffConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FGalleryBuffConfTableRow : FTableRowBase
{ 
	uint32_t                                           buff_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           buff_type;                                                  // 0x000C   (0x0004)  
	uint32_t                                           Param1;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.GalleryAvatarPostureConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FGalleryAvatarPostureConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            posture_key;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.InvList
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInvList
{ 
	TArray<uint32_t>                                   List;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/UADataTableModule.GachaSpecialPickMontageConf
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGachaSpecialPickMontageConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           avatar_index;                                               // 0x0004   (0x0004)  
	FString                                            Montage;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/UADataTableModule.GachaSpecialBetweenMontageConf
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGachaSpecialBetweenMontageConf
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	uint32_t                                           avatar_index;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            Montage;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.GachaSpecialChangeMontageConf
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGachaSpecialChangeMontageConf
{ 
	uint32_t                                           gacha_index;                                                // 0x0000   (0x0004)  
	uint32_t                                           avatar_index;                                               // 0x0004   (0x0004)  
	FString                                            Montage;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/UADataTableModule.GachaClientConfTableRow
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 8 MaxSize: 0x00D0
struct FGachaClientConfTableRow : FTableRowBase
{ 
	FString                                            gacha_level;                                                // 0x0008   (0x0010)  
	FString                                            seq_audio;                                                  // 0x0018   (0x0010)  
	FString                                            bgm;                                                        // 0x0028   (0x0010)  
	TArray<uint32_t>                                   special_pick_sound_items;                                   // 0x0038   (0x0010)  
	TArray<FString>                                    special_pick_sound_item_events;                             // 0x0048   (0x0010)  
	uint32_t                                           open_laser;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FString>                                    montage_list;                                               // 0x0060   (0x0010)  
	TArray<uint32_t>                                   sexuality_list;                                             // 0x0070   (0x0010)  
	TArray<uint32_t>                                   hood_status_list;                                           // 0x0080   (0x0010)  
	TArray<FInvList>                                   inventory_list;                                             // 0x0090   (0x0010)  
	TArray<FGachaSpecialPickMontageConf>               special_pick_montage;                                       // 0x00A0   (0x0010)  
	TArray<FGachaSpecialBetweenMontageConf>            special_pick_between_montage;                               // 0x00B0   (0x0010)  
	TArray<FGachaSpecialChangeMontageConf>             special_change_montage;                                     // 0x00C0   (0x0010)  
};

/// Struct /Script/UADataTableModule.FunctionControlCfgTableRow
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FFunctionControlCfgTableRow : FTableRowBase
{ 
	uint32_t                                           sys_id;                                                     // 0x0008   (0x0004)  
	uint32_t                                           sys_type;                                                   // 0x000C   (0x0004)  
	FString                                            sys_param;                                                  // 0x0010   (0x0010)  
	uint32_t                                           is_backend;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<uint32_t>                                   active_platforms;                                           // 0x0028   (0x0010)  
	FString                                            Channel;                                                    // 0x0038   (0x0010)  
	uint32_t                                           ios_testfight_hide;                                         // 0x0048   (0x0004)  
	uint32_t                                           ios_audit_hide;                                             // 0x004C   (0x0004)  
	uint32_t                                           android_exp_hide;                                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            android_client_version;                                     // 0x0058   (0x0010)  
	FString                                            ios_client_version;                                         // 0x0068   (0x0010)  
	uint32_t                                           season_level;                                               // 0x0078   (0x0004)  
	uint32_t                                           battle_pmc;                                                 // 0x007C   (0x0004)  
	uint32_t                                           Condition;                                                  // 0x0080   (0x0004)  
	uint32_t                                           open_pmc_level;                                             // 0x0084   (0x0004)  
	uint32_t                                           history_max_level;                                          // 0x0088   (0x0004)  
	uint32_t                                           open_mission_id;                                            // 0x008C   (0x0004)  
	uint32_t                                           open_bussiness_level;                                       // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FDateTime                                          open_date;                                                  // 0x0098   (0x0008)  
	FDateTime                                          cloe_date;                                                  // 0x00A0   (0x0008)  
	uint32_t                                           pre_sys;                                                    // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FText                                              Tips;                                                       // 0x00B0   (0x0018)  
	FText                                              btn_tips;                                                   // 0x00C8   (0x0018)  
	uint32_t                                           is_close;                                                   // 0x00E0   (0x0004)  
	uint32_t                                           lockstate;                                                  // 0x00E4   (0x0004)  
	uint32_t                                           country_group_id;                                           // 0x00E8   (0x0004)  
	uint32_t                                           regist_country_group_id;                                    // 0x00EC   (0x0004)  
};

/// Struct /Script/UADataTableModule.FriRecommTagsTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FFriRecommTagsTableRow : FTableRowBase
{ 
	uint32_t                                           recom_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           tag_type;                                                   // 0x000C   (0x0004)  
	uint32_t                                           tag_id;                                                     // 0x0010   (0x0004)  
	int32_t                                            Weight;                                                     // 0x0014   (0x0004)  
	uint32_t                                           Active;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              tag_name;                                                   // 0x0020   (0x0018)  
	uint32_t                                           need_check;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FText                                              tag_tip;                                                    // 0x0040   (0x0018)  
};

/// Struct /Script/UADataTableModule.FriRecommConfTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FFriRecommConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           show_interact;                                              // 0x000C   (0x0004)  
	uint32_t                                           show_pop_up;                                                // 0x0010   (0x0004)  
	uint32_t                                           Val;                                                        // 0x0014   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              reason;                                                     // 0x0020   (0x0018)  
	FText                                              friendPanelDisplay;                                         // 0x0038   (0x0018)  
	FText                                              battleReulstDisplay;                                        // 0x0050   (0x0018)  
	FText                                              battleResultDesc;                                           // 0x0068   (0x0018)  
	TArray<uint32_t>                                   battleResultDesc_paramTypes;                                // 0x0080   (0x0010)  
};

/// Struct /Script/UADataTableModule.InviteRewardListConf
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FInviteRewardListConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.FriInviteCodeRewardTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FFriInviteCodeRewardTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FInviteRewardListConf>                      reward_list;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.PlayModeRewardConf
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FPlayModeRewardConf
{ 
	int32_t                                            main_mode_id;                                               // 0x0000   (0x0004)  
	int32_t                                            sub_mode_id;                                                // 0x0004   (0x0004)  
	int32_t                                            map_id;                                                     // 0x0008   (0x0004)  
	int32_t                                            special_id;                                                 // 0x000C   (0x0004)  
	int32_t                                            Difficulty;                                                 // 0x0010   (0x0004)  
	uint32_t                                           gift_ruble;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.FightTaskConfRewardTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FFightTaskConfRewardTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FPlayModeRewardConf>                        playmoderewards;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.FightLimitItemConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FFightLimitItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           inner_act_id;                                               // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           server_limit_id;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.FactionalItemConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FFactionalItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Is_Factional_Item;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.FactionSelectConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FFactionSelectConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           map_mode_id;                                                // 0x000C   (0x0004)  
	uint32_t                                           index_id;                                                   // 0x0010   (0x0004)  
	uint32_t                                           faction_id;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.FactionConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FFactionConfTableRow : FTableRowBase
{ 
	uint32_t                                           faction_id;                                                 // 0x0008   (0x0004)  
	uint32_t                                           avatar_set_id;                                              // 0x000C   (0x0004)  
	uint64_t                                           faction_currency;                                           // 0x0010   (0x0008)  
	FString                                            faction_npc_pic;                                            // 0x0018   (0x0010)  
	FString                                            faction_bg_pic;                                             // 0x0028   (0x0010)  
	FString                                            faction_name;                                               // 0x0038   (0x0010)  
	FString                                            faction_name0;                                              // 0x0048   (0x0010)  
	FString                                            faction_logo_select;                                        // 0x0058   (0x0010)  
	FString                                            faction_logo_teamup;                                        // 0x0068   (0x0010)  
	FString                                            faction_logo_teaminfo;                                      // 0x0078   (0x0010)  
};

/// Struct /Script/UADataTableModule.PreTaskId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPreTaskId
{ 
	uint32_t                                           task_id;                                                    // 0x0000   (0x0004)  
};

/// Struct /Script/UADataTableModule.actionChoiceItem
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FactionChoiceItem
{ 
	uint32_t                                           faction_id;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FText                                              faction_dec;                                                // 0x0008   (0x0018)  
};

/// Struct /Script/UADataTableModule.FactionChoiceConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FFactionChoiceConfTableRow : FTableRowBase
{ 
	uint32_t                                           choice_id;                                                  // 0x0008   (0x0004)  
	uint32_t                                           season_id;                                                  // 0x000C   (0x0004)  
	TArray<FPreTaskId>                                 pre_task_ids;                                               // 0x0010   (0x0010)  
	TArray<FactionChoiceItem>                          faction_choice_items;                                       // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.FaceShieldAvatarCfgTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FFaceShieldAvatarCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           helmet_id;                                                  // 0x000C   (0x0004)  
	uint32_t                                           helmet_spray_id;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BlackSocketInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FBlackSocketInfo
{ 
	uint32_t                                           ParentItemID;                                               // 0x0000   (0x0004)  
	FName                                              SocketName;                                                 // 0x0004   (0x0008)  
};

/// Struct /Script/UADataTableModule.ExtraSkinConfTableRow
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FExtraSkinConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           BaseItemID;                                                 // 0x000C   (0x0004)  
	uint32_t                                           AssembleItemID;                                             // 0x0010   (0x0004)  
	uint32_t                                           ActionType;                                                 // 0x0014   (0x0004)  
	FSoftObjectPath                                    MeshPathGame;                                               // 0x0018   (0x0018)  
	FSoftObjectPath                                    MeshPathLobby;                                              // 0x0030   (0x0018)  
	FSoftClassPath                                     AnimBPPath;                                                 // 0x0048   (0x0018)  
	TArray<FName>                                      BoneHiddenPairs;                                            // 0x0060   (0x0010)  
	TArray<FBlackSocketInfo>                           BlackSocketList;                                            // 0x0070   (0x0010)  
};

/// Struct /Script/UADataTableModule.ExtraInfoItemTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FExtraInfoItemTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           Exp;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ExpConstantTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FExpConstantTableRow : FTableRowBase
{ 
	FString                                            ID;                                                         // 0x0008   (0x0010)  
	int64_t                                            Val;                                                        // 0x0018   (0x0008)  
	TArray<int32_t>                                    ary;                                                        // 0x0020   (0x0010)  
	FString                                            Str;                                                        // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.ExchangeRarityConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FExchangeRarityConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Rarity;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.EventAIIDModifierDataTableTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FEventAIIDModifierDataTableTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           ActivityID;                                                 // 0x000C   (0x0004)  
	uint32_t                                           Priority;                                                   // 0x0010   (0x0004)  
	uint32_t                                           SourceCategory;                                             // 0x0014   (0x0004)  
	uint32_t                                           SourceCareer;                                               // 0x0018   (0x0004)  
	uint32_t                                           SourceTendency;                                             // 0x001C   (0x0004)  
	uint32_t                                           SourceDifficulty;                                           // 0x0020   (0x0004)  
	uint32_t                                           TargetCategory;                                             // 0x0024   (0x0004)  
	uint32_t                                           TargetCareer;                                               // 0x0028   (0x0004)  
	uint32_t                                           TargetTendency;                                             // 0x002C   (0x0004)  
	uint32_t                                           TargetDifficulty;                                           // 0x0030   (0x0004)  
	uint32_t                                           TargetEquipPoolID;                                          // 0x0034   (0x0004)  
};

/// Struct /Script/UADataTableModule.EvaluationConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FEvaluationConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              show_name;                                                  // 0x0010   (0x0018)  
	uint32_t                                           emotion_type;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	int64_t                                            basic_weight;                                               // 0x0030   (0x0008)  
	TArray<int64_t>                                    event_id_array;                                             // 0x0038   (0x0010)  
	TArray<int64_t>                                    event_weight_array;                                         // 0x0048   (0x0010)  
	uint32_t                                           is_show;                                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.EvaluationCommConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FEvaluationCommConfTableRow : FTableRowBase
{ 
	uint32_t                                           conf_type;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            event_id;                                                   // 0x0010   (0x0008)  
	int64_t                                            Val;                                                        // 0x0018   (0x0008)  
	int64_t                                            Score;                                                      // 0x0020   (0x0008)  
};

/// Struct /Script/UADataTableModule.ErrorCodeTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FErrorCodeTableRow : FTableRowBase
{ 
	int32_t                                            ErrorCode;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Describe;                                                   // 0x0010   (0x0018)  
	int8_t                                             ShowType;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/UADataTableModule.EquipmentSkinConfTableRow
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FEquipmentSkinConfTableRow : FTableRowBase
{ 
	uint32_t                                           SkinID;                                                     // 0x0008   (0x0004)  
	uint32_t                                           ItemId;                                                     // 0x000C   (0x0004)  
	bool                                               IsStaticMesh;                                               // 0x0010   (0x0001)  
	bool                                               IsSwitchSexuality;                                          // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
	FSoftObjectPath                                    MeshPathGame;                                               // 0x0018   (0x0018)  
	FSoftObjectPath                                    MeshPathLobby;                                              // 0x0030   (0x0018)  
	TArray<FSkinMaterialInfo>                          OverrideMaterialsGame;                                      // 0x0048   (0x0010)  
	TArray<FSkinMaterialInfo>                          OverrideMaterialsLobby;                                     // 0x0058   (0x0010)  
	FSoftObjectPath                                    MeshPathGame_Female;                                        // 0x0068   (0x0018)  
	FSoftObjectPath                                    MeshPathLobby_Female;                                       // 0x0080   (0x0018)  
};

/// Struct /Script/UADataTableModule.EquipTemplateInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FEquipTemplateInfo
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint64_t                                           parent_id;                                                  // 0x0008   (0x0008)  
	uint64_t                                           ID;                                                         // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.EquipTemplateConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FEquipTemplateConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           is_recommand;                                               // 0x000C   (0x0004)  
	uint32_t                                           is_close;                                                   // 0x0010   (0x0004)  
	uint32_t                                           game_mode_type;                                             // 0x0014   (0x0004)  
	uint32_t                                           column_index;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FText                                              custom_rule;                                                // 0x0020   (0x0018)  
	TArray<FEquipTemplateInfo>                         equip_template_list;                                        // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.EquipSlotConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FEquipSlotConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   MatchEquipType;                                             // 0x0010   (0x0010)  
	uint32_t                                           ShowIndex;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.EquipReturnCardConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FEquipReturnCardConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           item_value;                                                 // 0x000C   (0x0004)  
	FString                                            icon_path;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.EquipAvatarSetCfgTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FEquipAvatarSetCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   avatar_set;                                                 // 0x0010   (0x0010)  
	uint32_t                                           combined_id;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.EliteEnterCostVec
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FEliteEnterCostVec
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           cost_num;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.EliteRefreshCostVec
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FEliteRefreshCostVec
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           cost_num;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.EliteSuiteConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FEliteSuiteConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           page_id;                                                    // 0x000C   (0x0004)  
	FText                                              page_name;                                                  // 0x0010   (0x0018)  
	FText                                              page_icon;                                                  // 0x0028   (0x0018)  
	uint32_t                                           index_id;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              set_name;                                                   // 0x0048   (0x0018)  
	TArray<FEliteEnterCostVec>                         enter_cost_vec;                                             // 0x0060   (0x0010)  
	uint32_t                                           refresh_group_id;                                           // 0x0070   (0x0004)  
	uint32_t                                           set_value;                                                  // 0x0074   (0x0004)  
	TArray<FEliteRefreshCostVec>                       refresh_cost_vec;                                           // 0x0078   (0x0010)  
};

/// Struct /Script/UADataTableModule.EliminationExpTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FEliminationExpTableRow : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            Level;                                                      // 0x000C   (0x0004)  
	int32_t                                            Exp;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.LotteryPoolGuaranteeConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FLotteryPoolGuaranteeConf
{ 
	uint32_t                                           pool_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           guarantee_hit;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.DynamicLotteryConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FDynamicLotteryConfTableRow : FTableRowBase
{ 
	uint32_t                                           gacha_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           ticket_id;                                                  // 0x0010   (0x0004)  
	uint32_t                                           mall_item_id;                                               // 0x0014   (0x0004)  
	uint32_t                                           step_price_id;                                              // 0x0018   (0x0004)  
	uint32_t                                           single_drop_price;                                          // 0x001C   (0x0004)  
	uint32_t                                           conseutive_drop_number;                                     // 0x0020   (0x0004)  
	uint32_t                                           consecutive_drop_price;                                     // 0x0024   (0x0004)  
	uint32_t                                           consecutive_discount_price;                                 // 0x0028   (0x0004)  
	uint32_t                                           max_count;                                                  // 0x002C   (0x0004)  
	uint32_t                                           first_hit_pool_id;                                          // 0x0030   (0x0004)  
	uint32_t                                           first_hit_floor;                                            // 0x0034   (0x0004)  
	uint32_t                                           first_hit_cell;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FLotteryPoolGuaranteeConf>                  lottery_pool_conf;                                          // 0x0040   (0x0010)  
	uint32_t                                           reward_show_type;                                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.DurabilityChangeTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FDurabilityChangeTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Version;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.DropPicShowConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FDropPicShowConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            pic_path;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.DropNonAvatarItemConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FDropNonAvatarItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           Rarity;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.DispelExpTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FDispelExpTableRow : FTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            part_id;                                                    // 0x000C   (0x0004)  
	int32_t                                            dispel_exp;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.DeathDropReplacePoolTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FDeathDropReplacePoolTableRow : FTableRowBase
{ 
	uint32_t                                           pool_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   item_ids;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.DeathDropReplacePoolInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDeathDropReplacePoolInfo
{ 
	uint32_t                                           pool_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.DeathDropReplaceBTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FDeathDropReplaceBTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FDeathDropReplacePoolInfo>                  death_drop_replace_pool_infos;                              // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.DeathDropReplaceATableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FDeathDropReplaceATableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           pool_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0010   (0x0004)  
	uint32_t                                           special_replace_item_id;                                    // 0x0014   (0x0004)  
	uint32_t                                           replace_count;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.DataPathTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FDataPathTableRow : FTableRowBase
{ 
	uint32_t                                           PathID;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            PathName;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.DMGLimitMapidConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FDMGLimitMapidConfTableRow : FTableRowBase
{ 
	uint32_t                                           mapIDPrefix;                                                // 0x0008   (0x0004)  
	float                                              mapIDFactor;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.DMGLimitConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FDMGLimitConfTableRow : FTableRowBase
{ 
	int32_t                                            RowNum;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           ItemId;                                                     // 0x0010   (0x0008)  
	uint32_t                                           HitGroup;                                                   // 0x0018   (0x0004)  
	float                                              HealthThreshold;                                            // 0x001C   (0x0004)  
	float                                              ReduceFactor;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.CustomizedExchangeRuleConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FCustomizedExchangeRuleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           businessman_id;                                             // 0x000C   (0x0004)  
	uint32_t                                           loyalty_level;                                              // 0x0010   (0x0004)  
	uint32_t                                           Level;                                                      // 0x0014   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0018   (0x0004)  
	uint32_t                                           refresh_number;                                             // 0x001C   (0x0004)  
	uint32_t                                           refresh_period;                                             // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            daily_reset_time;                                           // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.CustomizedExchangeItemConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCustomizedExchangeItemConf
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.CustomizedExchangeConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FCustomizedExchangeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           businessman_id;                                             // 0x000C   (0x0004)  
	uint32_t                                           seq;                                                        // 0x0010   (0x0004)  
	uint32_t                                           buy_limit;                                                  // 0x0014   (0x0004)  
	uint32_t                                           is_hide;                                                    // 0x0018   (0x0004)  
	uint32_t                                           sell_item_id;                                               // 0x001C   (0x0004)  
	uint32_t                                           sell_num;                                                   // 0x0020   (0x0004)  
	uint32_t                                           is_faction;                                                 // 0x0024   (0x0004)  
	TArray<FCustomizedExchangeItemConf>                exchange_item_vec;                                          // 0x0028   (0x0010)  
	uint32_t                                           loyalty_level;                                              // 0x0038   (0x0004)  
	uint32_t                                           min_level;                                                  // 0x003C   (0x0004)  
	uint32_t                                           max_level;                                                  // 0x0040   (0x0004)  
	uint32_t                                           min_player_wealth;                                          // 0x0044   (0x0004)  
	uint32_t                                           max_player_wealth;                                          // 0x0048   (0x0004)  
	uint32_t                                           min_escape_percent;                                         // 0x004C   (0x0004)  
	uint32_t                                           max_escape_percent;                                         // 0x0050   (0x0004)  
	uint32_t                                           Weight;                                                     // 0x0054   (0x0004)  
};

/// Struct /Script/UADataTableModule.CurrencyExchangeConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCurrencyExchangeConfTableRow : FTableRowBase
{ 
	FString                                            CurrencyName;                                               // 0x0008   (0x0010)  
	float                                              CurrencyCount;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.CthulhuMediaConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FCthulhuMediaConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              title_desc;                                                 // 0x0028   (0x0018)  
	FString                                            title_icon_path;                                            // 0x0040   (0x0010)  
	uint32_t                                           media_index;                                                // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FText                                              media_desc;                                                 // 0x0058   (0x0018)  
};

/// Struct /Script/UADataTableModule.CthulhuImageConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FCthulhuImageConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              title_desc;                                                 // 0x0028   (0x0018)  
	uint32_t                                           image_style;                                                // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            image_path;                                                 // 0x0048   (0x0010)  
	FText                                              image_title;                                                // 0x0058   (0x0018)  
	FText                                              image_desc;                                                 // 0x0070   (0x0018)  
};

/// Struct /Script/UADataTableModule.CrossOverAwardsConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FCrossOverAwardsConfTableRow : FTableRowBase
{ 
	uint32_t                                           award_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           season_id;                                                  // 0x000C   (0x0004)  
	uint32_t                                           task_num;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              rewardgroup_name;                                           // 0x0018   (0x0018)  
	TArray<uint32_t>                                   rewardgroup_picture;                                        // 0x0030   (0x0010)  
	uint32_t                                           is_down;                                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FAwardItemConf>                             awards;                                                     // 0x0048   (0x0010)  
};

/// Struct /Script/UADataTableModule.CreditPaneltyConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCreditPaneltyConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Description;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.CreditLevelConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FCreditLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           credit_upperbound;                                          // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           daily_attainable_credit;                                    // 0x0010   (0x0004)  
	uint32_t                                           deduct_coeff_percent;                                       // 0x0014   (0x0004)  
	TArray<uint32_t>                                   panelty;                                                    // 0x0018   (0x0010)  
	uint32_t                                           reward;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              desc;                                                       // 0x0030   (0x0018)  
};

/// Struct /Script/UADataTableModule.CreditEventConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FCreditEventConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              reason;                                                     // 0x0010   (0x0018)  
	int32_t                                            event_type;                                                 // 0x0028   (0x0004)  
	uint32_t                                           credit_change;                                              // 0x002C   (0x0004)  
	uint32_t                                           max_count;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.CreditBehaviorDescConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FCreditBehaviorDescConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           isPositive;                                                 // 0x000C   (0x0004)  
	FText                                              desc;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.CreateRoleAvatarShowConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FCreateRoleAvatarShowConfTableRow : FTableRowBase
{ 
	uint32_t                                           Type;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   avatar_set;                                                 // 0x0010   (0x0010)  
	TArray<uint32_t>                                   avatar_set_female;                                          // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.CreateRoleAvatarConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FCreateRoleAvatarConfTableRow : FTableRowBase
{ 
	uint32_t                                           Type;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   avatar_set;                                                 // 0x0010   (0x0010)  
	TArray<uint32_t>                                   avatar_set_female;                                          // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.CourtSettleKillConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FCourtSettleKillConfTableRow : FTableRowBase
{ 
	uint32_t                                           kill_ranking;                                               // 0x0008   (0x0004)  
	int32_t                                            star_num;                                                   // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.CourtSettleConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FCourtSettleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           map_id;                                                     // 0x000C   (0x0004)  
	uint32_t                                           ranking;                                                    // 0x0010   (0x0004)  
	int32_t                                            star_num;                                                   // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.CourtRewardConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCourtRewardConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           Type;                                                       // 0x0010   (0x0004)  
	uint32_t                                           max_progress;                                               // 0x0014   (0x0004)  
	uint32_t                                           reward_item_id;                                             // 0x0018   (0x0004)  
	uint32_t                                           reward_item_num;                                            // 0x001C   (0x0004)  
};

/// Struct /Script/UADataTableModule.CourtRanksConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FCourtRanksConfTableRow : FTableRowBase
{ 
	uint32_t                                           Level;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              rank_name;                                                  // 0x0010   (0x0018)  
	uint32_t                                           rank_star_count;                                            // 0x0028   (0x0004)  
	uint32_t                                           court_rank_major_type;                                      // 0x002C   (0x0004)  
	uint32_t                                           demotion_protect;                                           // 0x0030   (0x0004)  
	uint32_t                                           up_skip;                                                    // 0x0034   (0x0004)  
	uint32_t                                           down_skip;                                                  // 0x0038   (0x0004)  
	uint32_t                                           icon_index;                                                 // 0x003C   (0x0004)  
};

/// Struct /Script/UADataTableModule.CourtRanksCommonConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FCourtRanksCommonConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Val;                                                        // 0x000C   (0x0004)  
	FDateTime                                          Time;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.CourtRankTargetTypeConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FCourtRankTargetTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           TargetType;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              desc;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.CourtRankLevelRangeConfTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FCourtRankLevelRangeConfTableRow : FTableRowBase
{ 
	uint32_t                                           rangeid;                                                    // 0x0008   (0x0004)  
	uint32_t                                           level_floor;                                                // 0x000C   (0x0004)  
	uint32_t                                           range_count;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              main_name;                                                  // 0x0018   (0x0018)  
	FText                                              sub_name;                                                   // 0x0030   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FText>                                      score_desc;                                                 // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.CountryRankConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FCountryRankConfTableRow : FTableRowBase
{ 
	uint32_t                                           country_code;                                               // 0x0008   (0x0004)  
	uint32_t                                           ID;                                                         // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.CountryCurrencyExchangeConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FCountryCurrencyExchangeConfTableRow : FTableRowBase
{ 
	uint32_t                                           CountryCode;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            CurrencyName;                                               // 0x0010   (0x0010)  
	float                                              CurrencyCount;                                              // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.CountryConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FCountryConfTableRow : FTableRowBase
{ 
	uint32_t                                           country_code;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              country_name;                                               // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.CosBucketConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FCosBucketConfTableRow : FTableRowBase
{ 
	uint32_t                                           bucket_id;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            bucket_name;                                                // 0x0010   (0x0010)  
	uint32_t                                           day_upload_limit;                                           // 0x0020   (0x0004)  
	uint32_t                                           valid_days;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.CopyCardToItemTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FCopyCardToItemTableRow : FTableRowBase
{ 
	uint32_t                                           iddd;                                                       // 0x0008   (0x0004)  
	uint32_t                                           item_id;                                                    // 0x000C   (0x0004)  
	uint32_t                                           ID;                                                         // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ContrabandItemMapTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FContrabandItemMapTableRow : FTableRowBase
{ 
	uint32_t                                           originalItem_id;                                            // 0x0008   (0x0004)  
	uint32_t                                           contrabandItem_id;                                          // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ContextMenuPickUpConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FContextMenuPickUpConfTableRow : FTableRowBase
{ 
	uint16_t                                           ID;                                                         // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FString                                            PanelType;                                                  // 0x0010   (0x0010)  
	FString                                            PickUpType;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.ContextMenuLevel2ConfTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FContextMenuLevel2ConfTableRow : FTableRowBase
{ 
	uint16_t                                           ID;                                                         // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	char                                               ShowIndex;                                                  // 0x0028   (0x0001)  
	char                                               displayType;                                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	FString                                            ExecFunc;                                                   // 0x0030   (0x0010)  
	TArray<uint64_t>                                   ItemTypes;                                                  // 0x0040   (0x0010)  
	char                                               ItemTypeMode;                                               // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<uint16_t>                                   PickTypeIds;                                                // 0x0058   (0x0010)  
	char                                               isEquiped;                                                  // 0x0068   (0x0001)  
	char                                               IsLendItem;                                                 // 0x0069   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	uint32_t                                           SysId;                                                      // 0x006C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ContextMenuLevel1ConfTableRow
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FContextMenuLevel1ConfTableRow : FTableRowBase
{ 
	uint16_t                                           ID;                                                         // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	char                                               ShowIndex;                                                  // 0x0028   (0x0001)  
	char                                               displayType;                                                // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	FString                                            ExecFunc;                                                   // 0x0030   (0x0010)  
	TArray<uint64_t>                                   ItemTypes;                                                  // 0x0040   (0x0010)  
	char                                               ItemTypeMode;                                               // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<uint16_t>                                   PickTypeIds;                                                // 0x0058   (0x0010)  
	char                                               isEquiped;                                                  // 0x0068   (0x0001)  
	char                                               IsLendItem;                                                 // 0x0069   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	uint32_t                                           SysId;                                                      // 0x006C   (0x0004)  
	uint32_t                                           IsHintMode;                                                 // 0x0070   (0x0004)  
	uint32_t                                           IsInspect;                                                  // 0x0074   (0x0004)  
	uint32_t                                           IsTraining;                                                 // 0x0078   (0x0004)  
	uint32_t                                           IsDressEliteSuite;                                          // 0x007C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ContestBattlePassLevelItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FContestBattlePassLevelItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0008   (0x0004)  
	uint32_t                                           is_faction;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ContestBattlePassLevelConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FContestBattlePassLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	TArray<FContestBattlePassLevelItem>                award;                                                      // 0x0010   (0x0010)  
	TArray<FContestBattlePassLevelItem>                extra_award;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.ContainerRuleConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FContainerRuleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           need_roll_up;                                               // 0x000C   (0x0004)  
	TArray<uint32_t>                                   black_list;                                                 // 0x0010   (0x0010)  
	TArray<uint32_t>                                   white_list;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.ContainerSizeConfItem
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FContainerSizeConfItem
{ 
	TArray<float>                                      PosX;                                                       // 0x0000   (0x0010)  
	TArray<float>                                      PosY;                                                       // 0x0010   (0x0010)  
	uint32_t                                           col;                                                        // 0x0020   (0x0004)  
	uint32_t                                           Row;                                                        // 0x0024   (0x0004)  
};

/// Struct /Script/UADataTableModule.ContainerConfTableRow
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FContainerConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            rollup_size_x;                                              // 0x000C   (0x0004)  
	int32_t                                            rollup_size_y;                                              // 0x0010   (0x0004)  
	float                                              rollup_time;                                                // 0x0014   (0x0004)  
	uint32_t                                           rule_id;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            open_sound;                                                 // 0x0020   (0x0010)  
	FString                                            close_sound;                                                // 0x0030   (0x0010)  
	TArray<FContainerSizeConfItem>                     sizes;                                                      // 0x0040   (0x0010)  
	uint32_t                                           hide_renew;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ContainerArmorConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FContainerArmorConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Price;                                                      // 0x000C   (0x0004)  
	uint32_t                                           Vest;                                                       // 0x0010   (0x0004)  
	uint32_t                                           Armor;                                                      // 0x0014   (0x0004)  
	uint32_t                                           Backpack;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ConsumablesUseAward
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FConsumablesUseAward
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           prob;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.ConsumablesUseAwardConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FConsumablesUseAwardConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FConsumablesUseAward>                       awards;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.ConsumeRemoveStatusConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FConsumeRemoveStatusConf
{ 
	uint32_t                                           remove_id;                                                  // 0x0000   (0x0004)  
	uint32_t                                           durability_consume;                                         // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.ConsumeBuffConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FConsumeBuffConf
{ 
	uint32_t                                           buff_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           is_buff;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.ConsumablesDetailConfTableRow
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FConsumablesDetailConfTableRow : FTableRowBase
{ 
	uint32_t                                           consumables_id;                                             // 0x0008   (0x0004)  
	uint32_t                                           start_time;                                                 // 0x000C   (0x0004)  
	uint32_t                                           energy_value;                                               // 0x0010   (0x0004)  
	int32_t                                            hydration_value;                                            // 0x0014   (0x0004)  
	int32_t                                            food_value;                                                 // 0x0018   (0x0004)  
	float                                              Treat_speed;                                                // 0x001C   (0x0004)  
	int32_t                                            minus_healthupper_value;                                    // 0x0020   (0x0004)  
	int32_t                                            recover_health_value;                                       // 0x0024   (0x0004)  
	FText                                              energy_recover_desc;                                        // 0x0028   (0x0018)  
	uint32_t                                           remove_all_parts_buff;                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<FConsumeRemoveStatusConf>                   remove_status_vec;                                          // 0x0048   (0x0010)  
	FText                                              buff_extend_desc;                                           // 0x0058   (0x0018)  
	TArray<FConsumeBuffConf>                           buff_vec;                                                   // 0x0070   (0x0010)  
};

/// Struct /Script/UADataTableModule.RecommandSuppliesPack
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRecommandSuppliesPack
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.ConsumablesConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FConsumablesConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Price;                                                      // 0x000C   (0x0004)  
	TArray<FRecommandSuppliesPack>                     RecommandSuppliesPackList;                                  // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.ConsumablesBuffConfTableRow
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FConsumablesBuffConfTableRow : FTableRowBase
{ 
	uint32_t                                           buff_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            logic_id;                                                   // 0x0010   (0x0010)  
	FText                                              Name;                                                       // 0x0020   (0x0018)  
	FString                                            icon;                                                       // 0x0038   (0x0010)  
	uint64_t                                           delay_time;                                                 // 0x0048   (0x0008)  
	uint64_t                                           total_time;                                                 // 0x0050   (0x0008)  
	uint64_t                                           Value;                                                      // 0x0058   (0x0008)  
	FText                                              Describe;                                                   // 0x0060   (0x0018)  
};

/// Struct /Script/UADataTableModule.CompetitionTeamLogoConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCompetitionTeamLogoConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            logo_cdn;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.CompetitionTeamFaction
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCompetitionTeamFaction
{ 
	uint32_t                                           team_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           faction_index;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.CompetitionTeamFactionConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCompetitionTeamFactionConfTableRow : FTableRowBase
{ 
	uint32_t                                           play_mode_id;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FCompetitionTeamFaction>                    team_faction;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.CompetitionDefaultTeamNameConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FCompetitionDefaultTeamNameConfTableRow : FTableRowBase
{ 
	uint32_t                                           team_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              default_team_name;                                          // 0x0010   (0x0018)  
	FText                                              team_color;                                                 // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.CompetitionAuthorityConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FCompetitionAuthorityConfTableRow : FTableRowBase
{ 
	uint64_t                                           GOpenID;                                                    // 0x0008   (0x0008)  
	uint32_t                                           authority;                                                  // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.CommonKVConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FCommonKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	TArray<int64_t>                                    val_array;                                                  // 0x0018   (0x0010)  
	FText                                              Str;                                                        // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.CommonAffixsConfTableRow
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FCommonAffixsConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            FieldName;                                                  // 0x0010   (0x0010)  
	int8_t                                             ShowIndex;                                                  // 0x0020   (0x0001)  
	int8_t                                             AccesoryShowIndex;                                          // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0022   (0x0006)  MISSED
	FText                                              DisplayName;                                                // 0x0028   (0x0018)  
	uint32_t                                           Algorithm;                                                  // 0x0040   (0x0004)  
	uint32_t                                           IsWeaponBase;                                               // 0x0044   (0x0004)  
	FString                                            AccesoryFormat;                                             // 0x0048   (0x0010)  
	FString                                            WeaponFormat;                                               // 0x0058   (0x0010)  
	FText                                              WeaponUnit;                                                 // 0x0068   (0x0018)  
	FText                                              AccesoryUnit;                                               // 0x0080   (0x0018)  
	float                                              Rato;                                                       // 0x0098   (0x0004)  
	uint32_t                                           LessIsBetter;                                               // 0x009C   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x00A0   (0x0004)  
	uint32_t                                           displayType;                                                // 0x00A4   (0x0004)  
	uint32_t                                           IsBaseAttr;                                                 // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FText                                              AffixDiscription;                                           // 0x00B0   (0x0018)  
};

/// Struct /Script/UADataTableModule.CommercialSchemeConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCommercialSchemeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            SchemeConf;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.CombatReadinessInitConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FCombatReadinessInitConfTableRow : FTableRowBase
{ 
	uint32_t                                           Type;                                                       // 0x0008   (0x0004)  
	uint32_t                                           Version;                                                    // 0x000C   (0x0004)  
	TArray<uint32_t>                                   initializer_list;                                           // 0x0010   (0x0010)  
	TArray<uint32_t>                                   discard_list;                                               // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.CombatReadinessConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCombatReadinessConfTableRow : FTableRowBase
{ 
	uint32_t                                           Type;                                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   recommend_list;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.CollectsvrKVConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FCollectsvrKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.CityConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FCityConfTableRow : FTableRowBase
{ 
	uint32_t                                           ADCode;                                                     // 0x0008   (0x0004)  
	uint32_t                                           ID;                                                         // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ChatShareLanguageTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FChatShareLanguageTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            LanguageKey;                                                // 0x0010   (0x0010)  
	TArray<FString>                                    Languages;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.ChatDialogBubbleConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FChatDialogBubbleConfTableRow : FTableRowBase
{ 
	uint32_t                                           bubbleId;                                                   // 0x0008   (0x0004)  
	uint32_t                                           isListed;                                                   // 0x000C   (0x0004)  
	FText                                              getMethodDesc;                                              // 0x0010   (0x0018)  
	int32_t                                            bubbleLevel;                                                // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FDateTime                                          start_time;                                                 // 0x0030   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0038   (0x0008)  
};

/// Struct /Script/UADataTableModule.CarvingShowConfTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FCarvingShowConfTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              MeleeName;                                                  // 0x0010   (0x0018)  
	FString                                            LevelName;                                                  // 0x0028   (0x0010)  
	TArray<uint32_t>                                   DressList;                                                  // 0x0038   (0x0010)  
	uint32_t                                           Gender;                                                     // 0x0048   (0x0004)  
	uint32_t                                           status;                                                     // 0x004C   (0x0004)  
};

/// Struct /Script/UADataTableModule.CardConfTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FCardConfTableRow : FTableRowBase
{ 
	uint32_t                                           card_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FDateTime                                          start_time;                                                 // 0x0010   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0018   (0x0008)  
	uint32_t                                           is_open;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            asset_id;                                                   // 0x0028   (0x0010)  
	uint32_t                                           is_dynamic;                                                 // 0x0038   (0x0004)  
	uint32_t                                           jump_id;                                                    // 0x003C   (0x0004)  
	FText                                              get_tip;                                                    // 0x0040   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0060   (0x0018)  
	uint32_t                                           is_cannot_get;                                              // 0x0078   (0x0004)  
	uint32_t                                           is_dynamic_logo;                                            // 0x007C   (0x0004)  
	FString                                            activity_info;                                              // 0x0080   (0x0010)  
};

/// Struct /Script/UADataTableModule.CaptureTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCaptureTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	int32_t                                            X;                                                          // 0x000C   (0x0004)  
	int32_t                                            Y;                                                          // 0x0010   (0x0004)  
	int32_t                                            Z;                                                          // 0x0014   (0x0004)  
	uint32_t                                           LightGroupType;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.CalExtendConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FCalExtendConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Lower_Price;                                                // 0x000C   (0x0004)  
	uint32_t                                           Upper_Price;                                                // 0x0010   (0x0004)  
	uint32_t                                           Lower_Extend;                                               // 0x0014   (0x0004)  
	uint32_t                                           Upper_Extend;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.CGVoiceConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FCGVoiceConfTableRow : FTableRowBase
{ 
	FString                                            cg_name;                                                    // 0x0008   (0x0010)  
	FString                                            voice_name;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.BusinessBaseInfoVec
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FBusinessBaseInfoVec
{ 
	FText                                              Name;                                                       // 0x0000   (0x0018)  
	FText                                              Description;                                                // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.ShowTimeConf
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FShowTimeConf
{ 
	FDateTime                                          start_time;                                                 // 0x0000   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0008   (0x0008)  
};

/// Struct /Script/UADataTableModule.BusinessmanConfTableRow
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FBusinessmanConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           businessman_type;                                           // 0x000C   (0x0004)  
	uint32_t                                           system_lock_id;                                             // 0x0010   (0x0004)  
	uint32_t                                           is_hide;                                                    // 0x0014   (0x0004)  
	TArray<FBusinessBaseInfoVec>                       base_info_vec;                                              // 0x0018   (0x0010)  
	FString                                            icon_path;                                                  // 0x0028   (0x0010)  
	uint32_t                                           init_reputation;                                            // 0x0038   (0x0004)  
	uint32_t                                           init_total_sell;                                            // 0x003C   (0x0004)  
	FDateTime                                          refresh_begin_time;                                         // 0x0040   (0x0008)  
	uint32_t                                           refresh_period;                                             // 0x0048   (0x0004)  
	uint32_t                                           refresh_recover_money;                                      // 0x004C   (0x0004)  
	uint32_t                                           act_unlock_level;                                           // 0x0050   (0x0004)  
	uint32_t                                           money_id;                                                   // 0x0054   (0x0004)  
	uint32_t                                           total_money;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<uint32_t>                                   loyalty;                                                    // 0x0060   (0x0010)  
	TArray<uint64_t>                                   item_types;                                                 // 0x0070   (0x0010)  
	uint32_t                                           point_key_unlock;                                           // 0x0080   (0x0004)  
	uint32_t                                           point_key_trade_unlock;                                     // 0x0084   (0x0004)  
	uint32_t                                           can_sell;                                                   // 0x0088   (0x0004)  
	uint32_t                                           can_buy;                                                    // 0x008C   (0x0004)  
	TArray<FShowTimeConf>                              show_time_vec;                                              // 0x0090   (0x0010)  
};

/// Struct /Script/UADataTableModule.BusinessGrateDescribeConfTableRow
/// Size: 0x00C8 (200 bytes) (0x000008 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FBusinessGrateDescribeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              leveldescribe;                                              // 0x0010   (0x0018)  
	FText                                              selltype;                                                   // 0x0028   (0x0018)  
	FString                                            selltypeicon;                                               // 0x0040   (0x0010)  
	FText                                              leveltextdes;                                               // 0x0050   (0x0018)  
	FText                                              loyaltyonedata;                                             // 0x0068   (0x0018)  
	FText                                              loyaltytwodata;                                             // 0x0080   (0x0018)  
	FText                                              loyaltythreedata;                                           // 0x0098   (0x0018)  
	FText                                              loyaltyfourdata;                                            // 0x00B0   (0x0018)  
};

/// Struct /Script/UADataTableModule.BulletDetailConfTableRow
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FBulletDetailConfTableRow : FTableRowBase
{ 
	uint32_t                                           ItemId;                                                     // 0x0008   (0x0004)  
	float                                              BaseDamage;                                                 // 0x000C   (0x0004)  
	float                                              BaseSpeed;                                                  // 0x0010   (0x0004)  
	float                                              PenetrationFactor;                                          // 0x0014   (0x0004)  
	int32_t                                            PenetrationLevel;                                           // 0x0018   (0x0004)  
	float                                              BrokenProbability;                                          // 0x001C   (0x0004)  
	float                                              BrokenDamageScale;                                          // 0x0020   (0x0004)  
	float                                              ArmorDamage;                                                // 0x0024   (0x0004)  
	float                                              BleedProbabilityForPenetration;                             // 0x0028   (0x0004)  
	float                                              BleedProbabilityForBlock;                                   // 0x002C   (0x0004)  
	float                                              BleedProbabilityForBody;                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FText                                              BleedProbabilityDisplay;                                    // 0x0038   (0x0018)  
	FString                                            AssembleTag;                                                // 0x0050   (0x0010)  
	uint64_t                                           slot_type;                                                  // 0x0060   (0x0008)  
	int32_t                                            ShotsInOneBullet;                                           // 0x0068   (0x0004)  
	float                                              BodyHitThroughDamageFactor;                                 // 0x006C   (0x0004)  
	float                                              BodyHitThroughProbability;                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FString                                            PrimaryHitBones;                                            // 0x0078   (0x0010)  
	FString                                            SecondaryHitBones;                                          // 0x0088   (0x0010)  
	float                                              MOA;                                                        // 0x0098   (0x0004)  
	float                                              MoaX;                                                       // 0x009C   (0x0004)  
	float                                              MoaY;                                                       // 0x00A0   (0x0004)  
	float                                              HorizontalRecoil;                                           // 0x00A4   (0x0004)  
	float                                              VerticalRecoil;                                             // 0x00A8   (0x0004)  
	uint32_t                                           ZeroDropDistance;                                           // 0x00AC   (0x0004)  
	float                                              EnergyBreak;                                                // 0x00B0   (0x0004)  
	float                                              ImpactForce;                                                // 0x00B4   (0x0004)  
	float                                              BulletBlockDamageFactor;                                    // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.MagazineBulletPack
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMagazineBulletPack
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.BulletConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FBulletConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           GunId;                                                      // 0x000C   (0x0004)  
	TArray<FMagazineBulletPack>                        MagazineBulletList;                                         // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.BugSubmitConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FBugSubmitConfTableRow : FTableRowBase
{ 
	uint32_t                                           show_order;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              battle_question;                                            // 0x0010   (0x0018)  
	FText                                              other_question;                                             // 0x0028   (0x0018)  
};

/// Struct /Script/UADataTableModule.BuffIconConfTableRow
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 8 MaxSize: 0x0100
struct FBuffIconConfTableRow : FTableRowBase
{ 
	uint32_t                                           buff_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            buff_name;                                                  // 0x0010   (0x0010)  
	FString                                            icon_path;                                                  // 0x0020   (0x0010)  
	FString                                            inspecticon_path;                                           // 0x0030   (0x0010)  
	FText                                              display_name;                                               // 0x0040   (0x0018)  
	FText                                              Describe;                                                   // 0x0058   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0070   (0x0004)  
	uint32_t                                           buff_color;                                                 // 0x0074   (0x0004)  
	uint32_t                                           showicon;                                                   // 0x0078   (0x0004)  
	uint32_t                                           Priority;                                                   // 0x007C   (0x0004)  
	FString                                            show_type;                                                  // 0x0080   (0x0010)  
	FString                                            part_head;                                                  // 0x0090   (0x0010)  
	FString                                            part_chest;                                                 // 0x00A0   (0x0010)  
	FString                                            part_stomach;                                               // 0x00B0   (0x0010)  
	FString                                            part_leftarm;                                               // 0x00C0   (0x0010)  
	FString                                            part_rightarm;                                              // 0x00D0   (0x0010)  
	FString                                            part_leftleg;                                               // 0x00E0   (0x0010)  
	FString                                            part_rightleg;                                              // 0x00F0   (0x0010)  
};

/// Struct /Script/UADataTableModule.BrokenImageConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FBrokenImageConfTableRow : FTableRowBase
{ 
	uint32_t                                           Index;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            FilePath;                                                   // 0x0010   (0x0010)  
	float                                              Left;                                                       // 0x0020   (0x0004)  
	float                                              Top;                                                        // 0x0024   (0x0004)  
	float                                              Right;                                                      // 0x0028   (0x0004)  
	float                                              Bottom;                                                     // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.BossTokenConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FBossTokenConfTableRow : FTableRowBase
{ 
	uint32_t                                           GroupID;                                                    // 0x0008   (0x0004)  
	uint32_t                                           ItemId;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.BodyPartsTableTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBodyPartsTableTableRow : FTableRowBase
{ 
	uint64_t                                           PositionId;                                                 // 0x0008   (0x0008)  
	FText                                              Describe;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.BodyDetailsPartsTableTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FBodyDetailsPartsTableTableRow : FTableRowBase
{ 
	uint64_t                                           PositionId;                                                 // 0x0008   (0x0008)  
	uint64_t                                           BodyPartId;                                                 // 0x0010   (0x0008)  
	FText                                              Describe;                                                   // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.ItemsDropPool
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FItemsDropPool
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Probability;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.BlackStoreItemRandomConfigTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FBlackStoreItemRandomConfigTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	TArray<FItemsDropPool>                             planItems;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.BlackStoreDropInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FBlackStoreDropInfo
{ 
	uint64_t                                           item_randomId;                                              // 0x0000   (0x0008)  
	uint32_t                                           item_num;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BlackStoreDropListConfigTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FBlackStoreDropListConfigTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	TArray<FBlackStoreDropInfo>                        Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleStatConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FBattleStatConfTableRow : FTableRowBase
{ 
	uint32_t                                           stat_type;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BattleResultTransTemplateConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FBattleResultTransTemplateConfTableRow : FTableRowBase
{ 
	uint32_t                                           template_id;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   trans_id_list;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleResultTransConfTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FBattleResultTransConfTableRow : FTableRowBase
{ 
	uint32_t                                           trans_id;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            event_id;                                                   // 0x0010   (0x0008)  
	int64_t                                            coeff;                                                      // 0x0018   (0x0008)  
	uint32_t                                           item_id;                                                    // 0x0020   (0x0004)  
	uint32_t                                           max_num;                                                    // 0x0024   (0x0004)  
	FText                                              EventName;                                                  // 0x0028   (0x0018)  
	uint32_t                                           DescType;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              Scale;                                                      // 0x0048   (0x0018)  
	FString                                            Format;                                                     // 0x0060   (0x0010)  
	FText                                              Unit;                                                       // 0x0070   (0x0018)  
	uint32_t                                           RoundingType;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BattleResultReferTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBattleResultReferTableRow : FTableRowBase
{ 
	uint32_t                                           StatisticsId;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Describe;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.DescribeArg
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FDescribeArg
{ 
	FString                                            arg;                                                        // 0x0000   (0x0010)  
	uint32_t                                           ResolveMethod;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            LocalizationKey;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleResultPointEventConfTableRow
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FBattleResultPointEventConfTableRow : FTableRowBase
{ 
	uint32_t                                           eventId;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              EventTypeDes;                                               // 0x0010   (0x0018)  
	FText                                              EventTitle;                                                 // 0x0028   (0x0018)  
	FText                                              DescribeWord;                                               // 0x0040   (0x0018)  
	uint32_t                                           Weight;                                                     // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FDescribeArg>                               DescribeWordArgsList;                                       // 0x0060   (0x0010)  
	FText                                              CombinedDescribeWord;                                       // 0x0070   (0x0018)  
	TArray<FDescribeArg>                               CombinedDescribeWordArgsList;                               // 0x0088   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleResultMapTextureConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBattleResultMapTextureConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           MainModeID;                                                 // 0x000C   (0x0004)  
	uint32_t                                           SubModeID;                                                  // 0x0010   (0x0004)  
	uint32_t                                           MapID;                                                      // 0x0014   (0x0004)  
	uint32_t                                           SpecialID;                                                  // 0x0018   (0x0004)  
	uint32_t                                           Difficulty;                                                 // 0x001C   (0x0004)  
	FText                                              TexturePath;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattleResultLootBoxConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBattleResultLootBoxConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            LootBoxKey;                                                 // 0x0010   (0x0010)  
	FText                                              LootBoxName;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattleResultLoadingTipsTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FBattleResultLoadingTipsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Tip;                                                        // 0x0010   (0x0018)  
	uint32_t                                           Weight;                                                     // 0x0028   (0x0004)  
	uint32_t                                           BattleResult;                                               // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.BattleResultLoadingImageTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBattleResultLoadingImageTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Path;                                                       // 0x0010   (0x0010)  
	uint32_t                                           Weight;                                                     // 0x0020   (0x0004)  
	uint32_t                                           BattleResult;                                               // 0x0024   (0x0004)  
	FString                                            MapName;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleResultInjuredRecordTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBattleResultInjuredRecordTableRow : FTableRowBase
{ 
	uint32_t                                           InjuredId;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              InjuredRecordDescribe;                                      // 0x0010   (0x0018)  
	FString                                            InjuredFormType;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleResultEnemyTipsFuncTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FBattleResultEnemyTipsFuncTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              CheckFunc;                                                  // 0x0010   (0x0018)  
	TArray<FText>                                      Params;                                                     // 0x0028   (0x0010)  
	TArray<FText>                                      ParamsType;                                                 // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleResultEnemyTipsTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FBattleResultEnemyTipsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   CheckFuncIds;                                               // 0x0010   (0x0010)  
	uint32_t                                           Priority;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<bool>                                       JudgeResults;                                               // 0x0028   (0x0010)  
	FText                                              Tips;                                                       // 0x0038   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattleResultEXPRatioTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBattleResultEXPRatioTableRow : FTableRowBase
{ 
	uint32_t                                           ResultId;                                                   // 0x0008   (0x0004)  
	uint32_t                                           EXPRatio;                                                   // 0x000C   (0x0004)  
	FText                                              Describe;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattleResultDieTypeTableRow
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FBattleResultDieTypeTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           DieType;                                                    // 0x000C   (0x0004)  
	FString                                            DetailBodyPart;                                             // 0x0010   (0x0010)  
	FString                                            BodyPart;                                                   // 0x0020   (0x0010)  
	uint32_t                                           SpreadBodyPart;                                             // 0x0030   (0x0004)  
	uint32_t                                           HitArmor;                                                   // 0x0034   (0x0004)  
	uint32_t                                           IsThough;                                                   // 0x0038   (0x0004)  
	uint32_t                                           OverBulletKill;                                             // 0x003C   (0x0004)  
	TArray<uint32_t>                                   DeathCauserIdList;                                          // 0x0040   (0x0010)  
	FText                                              ResultTitle;                                                // 0x0050   (0x0018)  
	FString                                            TipsArray;                                                  // 0x0068   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattleResultDieTipsTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBattleResultDieTipsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Tips;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattleResultConfTableRow
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FBattleResultConfTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	uint32_t                                           AttributeType;                                              // 0x0010   (0x0004)  
	uint32_t                                           Proportion;                                                 // 0x0014   (0x0004)  
	FText                                              Describe;                                                   // 0x0018   (0x0018)  
	uint32_t                                           FromType;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<uint32_t>                                   AppendId;                                                   // 0x0038   (0x0010)  
	FText                                              Scale;                                                      // 0x0048   (0x0018)  
	FString                                            Format;                                                     // 0x0060   (0x0010)  
	FText                                              Unit;                                                       // 0x0070   (0x0018)  
	uint32_t                                           RoundingType;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BattleResultAreaConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBattleResultAreaConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              AreaName;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattleResultAppraiseSeasonConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FBattleResultAppraiseSeasonConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   appraise_id_list;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AppraiseConditionConf
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAppraiseConditionConf
{ 
	FText                                              expression;                                                 // 0x0000   (0x0018)  
	uint32_t                                           Op;                                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0020   (0x0008)  
};

/// Struct /Script/UADataTableModule.BattleResultAppraiseTableRow
/// Size: 0x0168 (360 bytes) (0x000008 - 0x000168) align 8 MaxSize: 0x0168
struct FBattleResultAppraiseTableRow : FTableRowBase
{ 
	uint32_t                                           AppraiseId;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              AppraiseName;                                               // 0x0010   (0x0018)  
	FText                                              Describe;                                                   // 0x0028   (0x0018)  
	FText                                              DesWords;                                                   // 0x0040   (0x0018)  
	TArray<int64_t>                                    event_id_array;                                             // 0x0058   (0x0010)  
	TArray<int64_t>                                    event_val_array;                                            // 0x0068   (0x0010)  
	TArray<uint32_t>                                   ignore_multi_mode_list;                                     // 0x0078   (0x0010)  
	TArray<FAppraiseConditionConf>                     Conditions;                                                 // 0x0088   (0x0010)  
	FString                                            icon;                                                       // 0x0098   (0x0010)  
	uint32_t                                           Group;                                                      // 0x00A8   (0x0004)  
	uint32_t                                           GroupShowIndex;                                             // 0x00AC   (0x0004)  
	uint32_t                                           Class;                                                      // 0x00B0   (0x0004)  
	uint32_t                                           ClassIndex;                                                 // 0x00B4   (0x0004)  
	uint32_t                                           quality;                                                    // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<uint32_t>                                   FacePicMapUnlockIds;                                        // 0x00C0   (0x0010)  
	uint32_t                                           SeasonPropotion;                                            // 0x00D0   (0x0004)  
	uint32_t                                           Proportion;                                                 // 0x00D4   (0x0004)  
	uint32_t                                           PlatformCDNImageURLID;                                      // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	FText                                              MagazineShareDesc;                                          // 0x00E0   (0x0018)  
	uint32_t                                           AppraiseImageIndex;                                         // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FText                                              DataDes;                                                    // 0x0100   (0x0018)  
	FText                                              ShareDescribe;                                              // 0x0118   (0x0018)  
	FText                                              ShareDesWords;                                              // 0x0130   (0x0018)  
	uint32_t                                           CanShare;                                                   // 0x0148   (0x0004)  
	uint32_t                                           SeasonForceShowType;                                        // 0x014C   (0x0004)  
	uint32_t                                           ForceShowType;                                              // 0x0150   (0x0004)  
	uint32_t                                           Type;                                                       // 0x0154   (0x0004)  
	uint32_t                                           Param1;                                                     // 0x0158   (0x0004)  
	uint32_t                                           Param2;                                                     // 0x015C   (0x0004)  
	uint32_t                                           Param3;                                                     // 0x0160   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0164   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BattlePassWorldLevelConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FBattlePassWorldLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           week_idx;                                                   // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           delta_level;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BattlePassVipShowItem
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FBattlePassVipShowItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	FText                                              Type;                                                       // 0x0008   (0x0018)  
	uint32_t                                           is_black;                                                   // 0x0020   (0x0004)  
	uint32_t                                           is_jump;                                                    // 0x0024   (0x0004)  
	FText                                              unlock_desc;                                                // 0x0028   (0x0018)  
	FText                                              item_desc;                                                  // 0x0040   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattlePassVipShowConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBattlePassVipShowConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           vip_id;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FBattlePassVipShowItem>                     award;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattlePassVipItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FBattlePassVipItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           show_type;                                                  // 0x0008   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.BattlePassVipConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FBattlePassVipConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           pre_vip_lv;                                                 // 0x0010   (0x0004)  
	uint32_t                                           vip_lv;                                                     // 0x0014   (0x0004)  
	FText                                              Name;                                                       // 0x0018   (0x0018)  
	uint32_t                                           purchase_id;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FBattlePassVipItem>                         award;                                                      // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattlePassShowTypeTableRow
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FBattlePassShowTypeTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           show_type;                                                  // 0x000C   (0x0004)  
	FVector                                            show_location;                                              // 0x0010   (0x000C)  
	FVector                                            show_rotation;                                              // 0x001C   (0x000C)  
	FVector                                            show_scale;                                                 // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            cell_image;                                                 // 0x0038   (0x0010)  
	FString                                            big_image;                                                  // 0x0048   (0x0010)  
	uint32_t                                           is_showtips;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FText                                              show_tips;                                                  // 0x0060   (0x0018)  
	FText                                              btn_tips;                                                   // 0x0078   (0x0018)  
	uint32_t                                           jump_goto;                                                  // 0x0090   (0x0004)  
	uint32_t                                           reward_sort_Index;                                          // 0x0094   (0x0004)  
};

/// Struct /Script/UADataTableModule.BattlePassOtherWayTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FBattlePassOtherWayTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           unlock_level;                                               // 0x000C   (0x0004)  
	uint32_t                                           is_new;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FDateTime                                          start_time;                                                 // 0x0018   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0020   (0x0008)  
	FText                                              desc;                                                       // 0x0028   (0x0018)  
	uint32_t                                           jump_goto;                                                  // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FText                                              btn_title;                                                  // 0x0048   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattlePassLevelItem
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FBattlePassLevelItem
{ 
	uint32_t                                           item_id;                                                    // 0x0000   (0x0004)  
	uint32_t                                           Num;                                                        // 0x0004   (0x0004)  
	uint32_t                                           is_black;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.BattlePassLevelConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBattlePassLevelConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Level;                                                      // 0x000C   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FBattlePassLevelItem>                       award;                                                      // 0x0018   (0x0010)  
	TArray<FBattlePassLevelItem>                       extra_award;                                                // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.BattlePassLastSeasonAwardConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FBattlePassLastSeasonAwardConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           group_id;                                                   // 0x000C   (0x0004)  
	uint32_t                                           level_min;                                                  // 0x0010   (0x0004)  
	uint32_t                                           level_max;                                                  // 0x0014   (0x0004)  
	uint32_t                                           login_day_min;                                              // 0x0018   (0x0004)  
	uint32_t                                           login_day_max;                                              // 0x001C   (0x0004)  
	TArray<uint32_t>                                   award;                                                      // 0x0020   (0x0010)  
	FText                                              desc;                                                       // 0x0030   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattlePassConfTableRow
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FBattlePassConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           max_level;                                                  // 0x000C   (0x0004)  
	uint32_t                                           award_max_level;                                            // 0x0010   (0x0004)  
	uint32_t                                           need_exp;                                                   // 0x0014   (0x0004)  
	uint32_t                                           game_exp_2_bp_ratio;                                        // 0x0018   (0x0004)  
	uint32_t                                           buy_exp_item;                                               // 0x001C   (0x0004)  
	uint32_t                                           buy_exp_cost;                                               // 0x0020   (0x0004)  
	uint32_t                                           overview_default_select_id;                                 // 0x0024   (0x0004)  
	FText                                              show_time;                                                  // 0x0028   (0x0018)  
	FString                                            entry_img_cdn_path;                                         // 0x0040   (0x0010)  
	FString                                            img_cdn_path;                                               // 0x0050   (0x0010)  
	TArray<uint32_t>                                   try_wear_list;                                              // 0x0060   (0x0010)  
	uint32_t                                           exchange_bg;                                                // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FText>                                      first_pop_img_path;                                         // 0x0078   (0x0010)  
	uint32_t                                           upgrade_step;                                               // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FText                                              growup_items_desc;                                          // 0x0090   (0x0018)  
};

/// Struct /Script/UADataTableModule.BattlePassAwardItemsConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FBattlePassAwardItemsConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FBlackItemConf>                             award;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.BanTypeConfTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FBanTypeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Content;                                                    // 0x0010   (0x0018)  
	TArray<FText>                                      ban_tips;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.BanThrowsconfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FBanThrowsconfTableRow : FTableRowBase
{ 
	int32_t                                            RowNum;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	uint64_t                                           ItemId;                                                     // 0x0010   (0x0008)  
	uint32_t                                           HitGroup;                                                   // 0x0018   (0x0004)  
	float                                              DamageThres;                                                // 0x001C   (0x0004)  
	int32_t                                            DamageTimes;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<int32_t>                                    TimeThres;                                                  // 0x0028   (0x0010)  
	uint64_t                                           BanTime;                                                    // 0x0038   (0x0008)  
};

/// Struct /Script/UADataTableModule.BanReasonConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FBanReasonConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Content;                                                    // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.BanMatchModeConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FBanMatchModeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           SubModeID;                                                  // 0x000C   (0x0004)  
	uint32_t                                           RuleID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              Content;                                                    // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.BanChatCountryConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FBanChatCountryConfTableRow : FTableRowBase
{ 
	uint32_t                                           country_code;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.BadgeSlotConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FBadgeSlotConfTableRow : FTableRowBase
{ 
	uint32_t                                           slot_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           is_unlock;                                                  // 0x000C   (0x0004)  
	FText                                              slot_name;                                                  // 0x0010   (0x0018)  
	uint32_t                                           sort;                                                       // 0x0028   (0x0004)  
	uint32_t                                           check_wear;                                                 // 0x002C   (0x0004)  
	FString                                            slot_icon;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.BadgeConfTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FBadgeConfTableRow : FTableRowBase
{ 
	uint32_t                                           badge_id;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              badge_name;                                                 // 0x0010   (0x0018)  
	uint32_t                                           is_dynamic_logo;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   jump_goto;                                                  // 0x0040   (0x0010)  
	FText                                              no_source_description;                                      // 0x0050   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0070   (0x0018)  
};

/// Struct /Script/UADataTableModule.BuffInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBuffInfo
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarValueShowTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAvatarValueShowTableRow : FTableRowBase
{ 
	uint32_t                                           avatar_id;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FBuffInfo>                                  buff_list;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarValueNameTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAvatarValueNameTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarTagCfgTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FAvatarTagCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           Level;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              Describe;                                                   // 0x0030   (0x0018)  
};

/// Struct /Script/UADataTableModule.AvatarTabCfgTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FAvatarTabCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Index;                                                      // 0x000C   (0x0004)  
	uint32_t                                           head_index;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<uint32_t>                                   sub_part_id;                                                // 0x0018   (0x0010)  
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            icon;                                                       // 0x0038   (0x0010)  
	uint32_t                                           show_sub_tab;                                               // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AvatarSetCfgTableRow
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FAvatarSetCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Level;                                                      // 0x0010   (0x0010)  
	FString                                            special_tag;                                                // 0x0020   (0x0010)  
	uint32_t                                           sequence_tag;                                               // 0x0030   (0x0004)  
	uint32_t                                           is_show_list;                                               // 0x0034   (0x0004)  
	uint32_t                                           avatar_gender;                                              // 0x0038   (0x0004)  
	uint32_t                                           IsIntergral;                                                // 0x003C   (0x0004)  
	TArray<uint32_t>                                   avatar_set;                                                 // 0x0040   (0x0010)  
	TArray<uint32_t>                                   avatar_set_extra;                                           // 0x0050   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarPartTabFilterItemCfgTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAvatarPartTabFilterItemCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           Type;                                                       // 0x0028   (0x0004)  
	uint32_t                                           Param;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.AvatarFilterGroupConf
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FAvatarFilterGroupConf
{ 
	uint32_t                                           option_type;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0008   (0x0018)  
	uint32_t                                           useAll;                                                     // 0x0020   (0x0004)  
	uint32_t                                           isSingleSelect;                                             // 0x0024   (0x0004)  
	uint32_t                                           IsShow;                                                     // 0x0028   (0x0004)  
	uint32_t                                           Item_type;                                                  // 0x002C   (0x0004)  
	FString                                            custom_items_func;                                          // 0x0030   (0x0010)  
	uint32_t                                           custom_items_type;                                          // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<uint32_t>                                   filter_items;                                               // 0x0048   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarPartTabFilterCfgTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAvatarPartTabFilterCfgTableRow : FTableRowBase
{ 
	uint32_t                                           PlanId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FAvatarFilterGroupConf>                     Options;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarPartTabCfgTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FAvatarPartTabCfgTableRow : FTableRowBase
{ 
	uint32_t                                           PartId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            icon;                                                       // 0x0020   (0x0010)  
	uint32_t                                           not_show_empty;                                             // 0x0030   (0x0004)  
	uint32_t                                           show_default_item;                                          // 0x0034   (0x0004)  
	uint32_t                                           filter_option_id;                                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AvatarItemConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAvatarItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   conflect_types;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarItemCfgTableRow
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FAvatarItemCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           sex;                                                        // 0x000C   (0x0004)  
	uint32_t                                           is_show;                                                    // 0x0010   (0x0004)  
	uint32_t                                           Score;                                                      // 0x0014   (0x0004)  
	uint32_t                                           replace_itemid;                                             // 0x0018   (0x0004)  
	uint32_t                                           replace_num;                                                // 0x001C   (0x0004)  
	TArray<uint32_t>                                   jump_goto;                                                  // 0x0020   (0x0010)  
	FText                                              no_source_description;                                      // 0x0030   (0x0018)  
	uint32_t                                           can_get_style;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FText                                              can_get_desc;                                               // 0x0050   (0x0018)  
	uint32_t                                           factory_id;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FString                                            effect_bg_path;                                             // 0x0070   (0x0010)  
	uint32_t                                           is_dynamic_logo;                                            // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FString                                            activity_info;                                              // 0x0088   (0x0010)  
	TArray<uint32_t>                                   Tags;                                                       // 0x0098   (0x0010)  
	uint32_t                                           series;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AvatarHairOptionsTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FAvatarHairOptionsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           hair;                                                       // 0x000C   (0x0004)  
	uint32_t                                           Color;                                                      // 0x0010   (0x0004)  
	uint32_t                                           composite_id;                                               // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.AvatarFactoryCfgTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FAvatarFactoryCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FString                                            icon;                                                       // 0x0020   (0x0010)  
	FString                                            desc;                                                       // 0x0030   (0x0010)  
	TArray<uint32_t>                                   series;                                                     // 0x0040   (0x0010)  
};

/// Struct /Script/UADataTableModule.AvatarCompleteShareConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAvatarCompleteShareConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            cdn_url;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AuctionTagsTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FAuctionTagsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FString                                            icon_path;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/UADataTableModule.AuctionScaleConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FAuctionScaleConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	float                                              DistancePercentA;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.AuctionSafeQuestionConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAuctionSafeQuestionConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           number1;                                                    // 0x000C   (0x0004)  
	FText                                              symbol;                                                     // 0x0010   (0x0018)  
	uint32_t                                           number2;                                                    // 0x0028   (0x0004)  
	uint32_t                                           Answer;                                                     // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.AuctionOrderParamsTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAuctionOrderParamsTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           params_a;                                                   // 0x000C   (0x0004)  
	uint32_t                                           params_b;                                                   // 0x0010   (0x0004)  
	uint32_t                                           params_c;                                                   // 0x0014   (0x0004)  
	uint32_t                                           params_d;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AuctionMinorTableRow
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FAuctionMinorTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           sort;                                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<uint32_t>                                   Parent;                                                     // 0x0030   (0x0010)  
	uint32_t                                           Show;                                                       // 0x0040   (0x0004)  
	uint32_t                                           show_summary;                                               // 0x0044   (0x0004)  
	FString                                            icon_path;                                                  // 0x0048   (0x0010)  
	uint32_t                                           icon_path_id;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<uint32_t>                                   show_titles;                                                // 0x0060   (0x0010)  
	uint32_t                                           filter_option_id;                                           // 0x0070   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AuctionMajorTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FAuctionMajorTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	uint32_t                                           sort;                                                       // 0x0028   (0x0004)  
	uint32_t                                           Show;                                                       // 0x002C   (0x0004)  
	uint32_t                                           skip_minor;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            icon_path;                                                  // 0x0038   (0x0010)  
	uint32_t                                           icon_path_id;                                               // 0x0048   (0x0004)  
	uint32_t                                           filter_option_id;                                           // 0x004C   (0x0004)  
};

/// Struct /Script/UADataTableModule.AuctionItemTableRow
/// Size: 0x0138 (312 bytes) (0x000008 - 0x000138) align 8 MaxSize: 0x0138
struct FAuctionItemTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	TArray<uint32_t>                                   Parent;                                                     // 0x0010   (0x0010)  
	TArray<uint32_t>                                   weapon_parent;                                              // 0x0020   (0x0010)  
	TArray<uint32_t>                                   durability_rate;                                            // 0x0030   (0x0010)  
	TArray<uint32_t>                                   durability_sale_num_rate;                                   // 0x0040   (0x0010)  
	uint32_t                                           on_the_shelf;                                               // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FDateTime                                          begin_time;                                                 // 0x0058   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x0060   (0x0008)  
	uint32_t                                           act_id;                                                     // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<uint32_t>                                   sort;                                                       // 0x0070   (0x0010)  
	uint32_t                                           combinable;                                                 // 0x0080   (0x0004)  
	uint32_t                                           one_way_auction;                                            // 0x0084   (0x0004)  
	uint32_t                                           min_sell_num;                                               // 0x0088   (0x0004)  
	uint32_t                                           minimum_sell_num;                                           // 0x008C   (0x0004)  
	uint32_t                                           max_buy_num;                                                // 0x0090   (0x0004)  
	uint32_t                                           max_sale_num;                                               // 0x0094   (0x0004)  
	uint64_t                                           display_weapon;                                             // 0x0098   (0x0008)  
	uint32_t                                           auto_order;                                                 // 0x00A0   (0x0004)  
	float                                              sale_price_rate_min;                                        // 0x00A4   (0x0004)  
	float                                              sale_price_rate_max;                                        // 0x00A8   (0x0004)  
	float                                              sale_price_u;                                               // 0x00AC   (0x0004)  
	float                                              sale_price_s;                                               // 0x00B0   (0x0004)  
	float                                              sale_num_rate_min;                                          // 0x00B4   (0x0004)  
	float                                              sale_num_rate_max;                                          // 0x00B8   (0x0004)  
	uint32_t                                           merge_sale_price_step_rate;                                 // 0x00BC   (0x0004)  
	TArray<uint32_t>                                   Tags;                                                       // 0x00C0   (0x0010)  
	FString                                            official_order_calc_params;                                 // 0x00D0   (0x0010)  
	uint32_t                                           official_order_delay_time;                                  // 0x00E0   (0x0004)  
	float                                              min_price_scale;                                            // 0x00E4   (0x0004)  
	float                                              max_price_scale;                                            // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<uint32_t>                                   replace_order_price_rate;                                   // 0x00F0   (0x0010)  
	TArray<uint32_t>                                   replace_order_random;                                       // 0x0100   (0x0010)  
	float                                              hour_official_place_rate;                                   // 0x0110   (0x0004)  
	float                                              once_official_place_rate;                                   // 0x0114   (0x0004)  
	float                                              official_place_price_step;                                  // 0x0118   (0x0004)  
	float                                              official_place_limit_rate;                                  // 0x011C   (0x0004)  
	uint32_t                                           item_flag;                                                  // 0x0120   (0x0004)  
	uint32_t                                           standprice_a1;                                              // 0x0124   (0x0004)  
	uint32_t                                           standprice_b1;                                              // 0x0128   (0x0004)  
	uint32_t                                           avgprice_a2;                                                // 0x012C   (0x0004)  
	uint32_t                                           avgprice_b2;                                                // 0x0130   (0x0004)  
	uint32_t                                           step_len;                                                   // 0x0134   (0x0004)  
};

/// Struct /Script/UADataTableModule.AuctionGetRightsWayTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FAuctionGetRightsWayTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              desc;                                                       // 0x0010   (0x0018)  
	uint32_t                                           jump_goto;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FText                                              btn_title;                                                  // 0x0030   (0x0018)  
	uint32_t                                           is_check;                                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AuctionContextMenuWhiteListTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FAuctionContextMenuWhiteListTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           Search_Related;                                             // 0x000C   (0x0004)  
	uint32_t                                           Search_This;                                                // 0x0010   (0x0004)  
	uint32_t                                           Search_Ammo;                                                // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.ArmorProtectDisplayConfTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FArmorProtectDisplayConfTableRow : FTableRowBase
{ 
	uint32_t                                           protect_display_id;                                         // 0x0008   (0x0004)  
	uint32_t                                           protect_display_type;                                       // 0x000C   (0x0004)  
	FText                                              protect_part_name;                                          // 0x0010   (0x0018)  
	uint32_t                                           protect_part_dec;                                           // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            protect_pic;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.ArmorProtectConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FArmorProtectConfTableRow : FTableRowBase
{ 
	uint32_t                                           protect_id;                                                 // 0x0008   (0x0004)  
	uint32_t                                           protect_type;                                               // 0x000C   (0x0004)  
	uint32_t                                           protect_part_hex;                                           // 0x0010   (0x0004)  
	uint32_t                                           protect_part_dec;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.ArmorMaterialConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FArmorMaterialConfTableRow : FTableRowBase
{ 
	uint32_t                                           material_id;                                                // 0x0008   (0x0004)  
	float                                              material_coef;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ArmorDetailValueToAttributeTableRow
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FArmorDetailValueToAttributeTableRow : FTableRowBase
{ 
	FString                                            DetailValueName;                                            // 0x0008   (0x0010)  
	uint32_t                                           ConvertType;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ConvertTargetName;                                          // 0x0020   (0x0010)  
	uint32_t                                           OperationType;                                              // 0x0030   (0x0004)  
	uint32_t                                           SubOperationType;                                           // 0x0034   (0x0004)  
};

/// Struct /Script/UADataTableModule.ArmorDetailConfTableRow
/// Size: 0x01A8 (424 bytes) (0x000008 - 0x0001A8) align 8 MaxSize: 0x01A8
struct FArmorDetailConfTableRow : FTableRowBase
{ 
	uint32_t                                           armor_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           armor_protecttype;                                          // 0x000C   (0x0004)  
	uint32_t                                           armor_level;                                                // 0x0010   (0x0004)  
	uint32_t                                           armor_protectmask;                                          // 0x0014   (0x0004)  
	TArray<uint32_t>                                   armor_protectdisplay;                                       // 0x0018   (0x0010)  
	uint32_t                                           armor_headdetailprotectmask;                                // 0x0028   (0x0004)  
	uint32_t                                           armor_antipenetrationfactor;                                // 0x002C   (0x0004)  
	float                                              armor_damagescaleforblock;                                  // 0x0030   (0x0004)  
	float                                              armor_penetrate_coefficient;                                // 0x0034   (0x0004)  
	float                                              armor_penetrate_coefficient_constant;                       // 0x0038   (0x0004)  
	float                                              armor_destructibility;                                      // 0x003C   (0x0004)  
	TArray<float>                                      ArmorDestructibilityScaleByPart;                            // 0x0040   (0x0010)  
	uint32_t                                           armor_material_id;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<uint32_t>                                   size_ext;                                                   // 0x0058   (0x0010)  
	FText                                              armor_materialname;                                         // 0x0068   (0x0018)  
	float                                              armor_ricochetangle;                                        // 0x0080   (0x0004)  
	float                                              armor_ricochetprobabilitymin;                               // 0x0084   (0x0004)  
	float                                              armor_ricochetprobabilitymax;                               // 0x0088   (0x0004)  
	float                                              armor_ricochetcooldown;                                     // 0x008C   (0x0004)  
	float                                              MoveSpeed;                                                  // 0x0090   (0x0004)  
	float                                              TurnSpeed;                                                  // 0x0094   (0x0004)  
	float                                              Engonomics;                                                 // 0x0098   (0x0004)  
	float                                              ImpactResistance;                                           // 0x009C   (0x0004)  
	FText                                              SoundPick;                                                  // 0x00A0   (0x0018)  
	FText                                              NoiseReduce;                                                // 0x00B8   (0x0018)  
	FText                                              DefenseFlash;                                               // 0x00D0   (0x0018)  
	FText                                              DefensePoison;                                              // 0x00E8   (0x0018)  
	uint32_t                                           SoundBlock;                                                 // 0x0100   (0x0004)  
	float                                              SoundLevelInfluence;                                        // 0x0104   (0x0004)  
	float                                              SoundMaxDistanceInfluenceFactor;                            // 0x0108   (0x0004)  
	float                                              SoundIndicatorLevelInfluence;                               // 0x010C   (0x0004)  
	float                                              SoundIndicatorMaxDistanceInfluenceFactor;                   // 0x0110   (0x0004)  
	float                                              FlashTimeInfluenceFactor;                                   // 0x0114   (0x0004)  
	float                                              FlashEffectInfluenceFactor;                                 // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FString                                            StaticScreenEffectPath;                                     // 0x0120   (0x0010)  
	FString                                            MaterialScreenEffectPath;                                   // 0x0130   (0x0010)  
	uint32_t                                           HasBrokenScreenEffect;                                      // 0x0140   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	FString                                            AssembleTag;                                                // 0x0148   (0x0010)  
	FString                                            SubAssembleTag;                                             // 0x0158   (0x0010)  
	uint64_t                                           slot_type;                                                  // 0x0168   (0x0008)  
	uint64_t                                           sub_slot_type;                                              // 0x0170   (0x0008)  
	TArray<FWeaponSocket>                              Sockets;                                                    // 0x0178   (0x0010)  
	TArray<uint32_t>                                   ConflictedItemIds;                                          // 0x0188   (0x0010)  
	TArray<uint32_t>                                   IgnoreSoundIndicatorType;                                   // 0x0198   (0x0010)  
};

/// Struct /Script/UADataTableModule.AppearancePresetConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FAppearancePresetConfTableRow : FTableRowBase
{ 
	uint64_t                                           ID;                                                         // 0x0008   (0x0008)  
	FText                                              Name;                                                       // 0x0010   (0x0018)  
};

/// Struct /Script/UADataTableModule.AntipenetrationConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FAntipenetrationConfTableRow : FTableRowBase
{ 
	uint32_t                                           material_id;                                                // 0x0008   (0x0004)  
	uint32_t                                           material_coef;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.AmmoNumTableRow
/// Size: 0x00F8 (248 bytes) (0x000008 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FAmmoNumTableRow : FTableRowBase
{ 
	uint64_t                                           magazine_id;                                                // 0x0008   (0x0008)  
	int32_t                                            Type;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FText                                              full_name;                                                  // 0x0018   (0x0018)  
	uint32_t                                           full_max;                                                   // 0x0030   (0x0004)  
	uint32_t                                           full_min;                                                   // 0x0034   (0x0004)  
	FText                                              almostfull_name;                                            // 0x0038   (0x0018)  
	int32_t                                            almostfull_max;                                             // 0x0050   (0x0004)  
	int32_t                                            almostfull_min;                                             // 0x0054   (0x0004)  
	FText                                              morethanhalf_name;                                          // 0x0058   (0x0018)  
	int32_t                                            morethanhalf_max;                                           // 0x0070   (0x0004)  
	int32_t                                            morethanhalf_min;                                           // 0x0074   (0x0004)  
	FText                                              abouthalf_name;                                             // 0x0078   (0x0018)  
	int32_t                                            abouthalf_max;                                              // 0x0090   (0x0004)  
	int32_t                                            abouthalf_min;                                              // 0x0094   (0x0004)  
	FText                                              lessthanhalf_name;                                          // 0x0098   (0x0018)  
	int32_t                                            lessthanhalf_max;                                           // 0x00B0   (0x0004)  
	int32_t                                            lessthanhalf_min;                                           // 0x00B4   (0x0004)  
	FText                                              almostempty_name;                                           // 0x00B8   (0x0018)  
	int32_t                                            almostempty_max;                                            // 0x00D0   (0x0004)  
	int32_t                                            almostempty_min;                                            // 0x00D4   (0x0004)  
	FText                                              empty_name;                                                 // 0x00D8   (0x0018)  
	int32_t                                            Empty;                                                      // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AmmoMagazineRelationTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAmmoMagazineRelationTableRow : FTableRowBase
{ 
	uint32_t                                           item_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           ammo_count;                                                 // 0x000C   (0x0004)  
	uint32_t                                           ammo_count_mul;                                             // 0x0010   (0x0004)  
	uint32_t                                           capacity_ratio;                                             // 0x0014   (0x0004)  
	uint32_t                                           filling_ratio;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.MultiModeItemLimitConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMultiModeItemLimitConf
{ 
	uint32_t                                           Item_type;                                                  // 0x0000   (0x0004)  
	uint32_t                                           item_type_num;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.MultiModeItemOutConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMultiModeItemOutConf
{ 
	uint32_t                                           Item_type;                                                  // 0x0000   (0x0004)  
	uint32_t                                           item_type_num;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.AllowTakeInItemConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAllowTakeInItemConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           is_blackset;                                                // 0x000C   (0x0004)  
	TArray<FMultiModeItemLimitConf>                    item_limit_vec;                                             // 0x0010   (0x0010)  
	TArray<FMultiModeItemOutConf>                      item_out_vec;                                               // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.AdcodeConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAdcodeConfTableRow : FTableRowBase
{ 
	uint32_t                                           ADCode;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FText>                                      Region;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.ActKVConfTableRow
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FActKVConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
};

/// Struct /Script/UADataTableModule.ChannelInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FChannelInfo
{ 
	uint32_t                                           ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            URL;                                                        // 0x0008   (0x0010)  
};

/// Struct /Script/UADataTableModule.ActGoodCommentConfTableRow
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FActGoodCommentConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   trigger_task;                                               // 0x0010   (0x0010)  
	TArray<uint32_t>                                   trigger_task2;                                              // 0x0020   (0x0010)  
	uint32_t                                           trigger_interval;                                           // 0x0030   (0x0004)  
	uint32_t                                           max_trigger_count;                                          // 0x0034   (0x0004)  
	TArray<FChannelInfo>                               channel_infos;                                              // 0x0038   (0x0010)  
};

/// Struct /Script/UADataTableModule.ActDialogDetailConfTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FActDialogDetailConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           character_id;                                               // 0x000C   (0x0004)  
	FText                                              Anim;                                                       // 0x0010   (0x0018)  
	FText                                              Sound;                                                      // 0x0028   (0x0018)  
	FText                                              Content;                                                    // 0x0040   (0x0018)  
	uint32_t                                           next_id;                                                    // 0x0058   (0x0004)  
	uint32_t                                           Command;                                                    // 0x005C   (0x0004)  
	uint32_t                                           Param;                                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ActDialogConfTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FActDialogConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	uint32_t                                           Command;                                                    // 0x0028   (0x0004)  
	uint32_t                                           Param;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ActConfigTableRow
/// Size: 0x01F0 (496 bytes) (0x000008 - 0x0001F0) align 8 MaxSize: 0x01F0
struct FActConfigTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           display_order;                                              // 0x000C   (0x0004)  
	uint32_t                                           Type;                                                       // 0x0010   (0x0004)  
	uint32_t                                           icon_sys_id;                                                // 0x0014   (0x0004)  
	FText                                              Name;                                                       // 0x0018   (0x0018)  
	uint32_t                                           rp_type;                                                    // 0x0030   (0x0004)  
	uint32_t                                           is_open;                                                    // 0x0034   (0x0004)  
	TArray<uint32_t>                                   closed_env_id;                                              // 0x0038   (0x0010)  
	TArray<uint32_t>                                   open_condition;                                             // 0x0048   (0x0010)  
	FString                                            tab_name;                                                   // 0x0058   (0x0010)  
	uint32_t                                           tab_order;                                                  // 0x0068   (0x0004)  
	uint32_t                                           theme_act_id;                                               // 0x006C   (0x0004)  
	FString                                            tab_cdn;                                                    // 0x0070   (0x0010)  
	uint32_t                                           precondition;                                               // 0x0080   (0x0004)  
	uint32_t                                           disappear;                                                  // 0x0084   (0x0004)  
	uint32_t                                           min_level;                                                  // 0x0088   (0x0004)  
	uint32_t                                           max_level;                                                  // 0x008C   (0x0004)  
	uint32_t                                           parent_id;                                                  // 0x0090   (0x0004)  
	uint32_t                                           is_logic;                                                   // 0x0094   (0x0004)  
	FDateTime                                          begin_time;                                                 // 0x0098   (0x0008)  
	FDateTime                                          begin_time_deadline;                                        // 0x00A0   (0x0008)  
	FDateTime                                          end_time;                                                   // 0x00A8   (0x0008)  
	uint32_t                                           continue_time;                                              // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FString                                            des;                                                        // 0x00B8   (0x0010)  
	FString                                            act_time_des;                                               // 0x00C8   (0x0010)  
	FString                                            notice;                                                     // 0x00D8   (0x0010)  
	FString                                            json_param;                                                 // 0x00E8   (0x0010)  
	FString                                            reward_list;                                                // 0x00F8   (0x0010)  
	FString                                            pic;                                                        // 0x0108   (0x0010)  
	FString                                            Jump;                                                       // 0x0118   (0x0010)  
	FDateTime                                          preview_begin_time;                                         // 0x0128   (0x0008)  
	TArray<uint32_t>                                   forbidden_account_channel;                                  // 0x0130   (0x0010)  
	TArray<uint32_t>                                   forbidden_plat_type;                                        // 0x0140   (0x0010)  
	FString                                            client_version_low;                                         // 0x0150   (0x0010)  
	FString                                            client_version_up;                                          // 0x0160   (0x0010)  
	FString                                            bp_path;                                                    // 0x0170   (0x0010)  
	FString                                            URL;                                                        // 0x0180   (0x0010)  
	uint32_t                                           tag_type;                                                   // 0x0190   (0x0004)  
	uint32_t                                           tag_time;                                                   // 0x0194   (0x0004)  
	uint32_t                                           countdown_time;                                             // 0x0198   (0x0004)  
	uint32_t                                           core_item_id;                                               // 0x019C   (0x0004)  
	uint32_t                                           core_item_num;                                              // 0x01A0   (0x0004)  
	uint32_t                                           country_group_id;                                           // 0x01A4   (0x0004)  
	uint32_t                                           through_season;                                             // 0x01A8   (0x0004)  
	uint32_t                                           can_rate;                                                   // 0x01AC   (0x0004)  
	uint32_t                                           rate_prereq;                                                // 0x01B0   (0x0004)  
	uint32_t                                           is_share;                                                   // 0x01B4   (0x0004)  
	FString                                            share_reward_list;                                          // 0x01B8   (0x0010)  
	FString                                            share_cdn;                                                  // 0x01C8   (0x0010)  
	uint32_t                                           open_user_type;                                             // 0x01D8   (0x0004)  
	uint32_t                                           not_open_by_parent;                                         // 0x01DC   (0x0004)  
	uint32_t                                           is_rookie_act;                                              // 0x01E0   (0x0004)  
	uint32_t                                           check_active;                                               // 0x01E4   (0x0004)  
	uint32_t                                           force_refresh;                                              // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.ActBankruptConfTableRow
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FActBankruptConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	int64_t                                            Val;                                                        // 0x0010   (0x0008)  
	FString                                            Str;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/UADataTableModule.AchievementConfTableRow
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FAchievementConfTableRow : FTableRowBase
{ 
	uint32_t                                           badge_id;                                                   // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	uint32_t                                           sub_type;                                                   // 0x0010   (0x0004)  
	uint32_t                                           season_id;                                                  // 0x0014   (0x0004)  
	FText                                              badge_name;                                                 // 0x0018   (0x0018)  
	FText                                              badge_desc;                                                 // 0x0030   (0x0018)  
	uint32_t                                           need_finish_num;                                            // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<uint32_t>                                   task_ids;                                                   // 0x0050   (0x0010)  
	FText                                              icon_path;                                                  // 0x0060   (0x0018)  
};

/// Struct /Script/UADataTableModule.AchieveTaskConfTableRow
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FAchieveTaskConfTableRow : FTableRowBase
{ 
	uint32_t                                           task_id;                                                    // 0x0008   (0x0004)  
	uint32_t                                           Type;                                                       // 0x000C   (0x0004)  
	FText                                              Name;                                                       // 0x0010   (0x0018)  
	FText                                              finish_name;                                                // 0x0028   (0x0018)  
	FText                                              desc;                                                       // 0x0040   (0x0018)  
	FText                                              finish_desc;                                                // 0x0058   (0x0018)  
	uint32_t                                           target_type;                                                // 0x0070   (0x0004)  
	uint32_t                                           Param1;                                                     // 0x0074   (0x0004)  
	uint32_t                                           Param2;                                                     // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<uint32_t>                                   sub_tasks;                                                  // 0x0080   (0x0010)  
	uint32_t                                           Progress;                                                   // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AchieveBadgeSlotTableRow
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FAchieveBadgeSlotTableRow : FTableRowBase
{ 
	uint32_t                                           slot_id;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FText                                              slot_name;                                                  // 0x0010   (0x0018)  
	FText                                              slot_icon;                                                  // 0x0028   (0x0018)  
	uint32_t                                           is_unlock;                                                  // 0x0040   (0x0004)  
	uint32_t                                           sort;                                                       // 0x0044   (0x0004)  
	uint32_t                                           check_wear;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AccountBanReasonTableRow
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAccountBanReasonTableRow : FTableRowBase
{ 
	FString                                            AccountBanID;                                               // 0x0008   (0x0010)  
	FText                                              AccountBanReason;                                           // 0x0018   (0x0018)  
};

/// Struct /Script/UADataTableModule.AccessoryAvatarSetCfgTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAccessoryAvatarSetCfgTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<uint32_t>                                   avatar_set;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AccessDurabilityPriceConf
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAccessDurabilityPriceConf
{ 
	uint32_t                                           armor_level;                                                // 0x0000   (0x0004)  
	uint32_t                                           durability_price;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/UADataTableModule.AccessRepairDurabilityConfTableRow
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FAccessRepairDurabilityConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FAccessDurabilityPriceConf>                 durability_price_conf;                                      // 0x0010   (0x0010)  
};

/// Struct /Script/UADataTableModule.AccessMatArchIdConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FAccessMatArchIdConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           material_arch_id;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.AccessDurabilityArchIdConfTableRow
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FAccessDurabilityArchIdConfTableRow : FTableRowBase
{ 
	uint32_t                                           ID;                                                         // 0x0008   (0x0004)  
	uint32_t                                           durability_price_arch_id;                                   // 0x000C   (0x0004)  
};

/// Struct /Script/UADataTableModule.ScavWaveInfoArray
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FScavWaveInfoArray
{ 
	float                                              Probability;                                                // 0x0000   (0x0004)  
	int32_t                                            Min;                                                        // 0x0004   (0x0004)  
	int32_t                                            Max;                                                        // 0x0008   (0x0004)  
	float                                              MinInterval;                                                // 0x000C   (0x0004)  
	float                                              MaxInterval;                                                // 0x0010   (0x0004)  
};

/// Struct /Script/UADataTableModule.AreaInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAreaInfo
{ 
	FString                                            AreaID;                                                     // 0x0000   (0x0010)  
	int32_t                                            Weight;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AISpawnScavSpawnControllerTableRow
/// Size: 0x00A8 (168 bytes) (0x000008 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FAISpawnScavSpawnControllerTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<float>                                      Weather;                                                    // 0x0028   (0x0010)  
	int32_t                                            SquadID;                                                    // 0x0038   (0x0004)  
	int32_t                                            FatherSquadID;                                              // 0x003C   (0x0004)  
	float                                              PlayerAroundRadius;                                         // 0x0040   (0x0004)  
	float                                              PlayerLineOfSight;                                          // 0x0044   (0x0004)  
	float                                              PlayerViewAngle;                                            // 0x0048   (0x0004)  
	int32_t                                            AIRandLimitationMin;                                        // 0x004C   (0x0004)  
	int32_t                                            AIRandLimitationMax;                                        // 0x0050   (0x0004)  
	bool                                               Loop;                                                       // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              FirstSpawnTime;                                             // 0x0058   (0x0004)  
	int32_t                                            TriggerVolumeID;                                            // 0x005C   (0x0004)  
	float                                              DeathDelay;                                                 // 0x0060   (0x0004)  
	int32_t                                            Reinforce;                                                  // 0x0064   (0x0004)  
	bool                                               IsPatrol;                                                   // 0x0068   (0x0001)  
	bool                                               SingleArea;                                                 // 0x0069   (0x0001)  
	bool                                               MatchAreaWithWaves;                                         // 0x006A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x006B   (0x0001)  MISSED
	int32_t                                            Priority;                                                   // 0x006C   (0x0004)  
	int32_t                                            FactionType;                                                // 0x0070   (0x0004)  
	int32_t                                            GroupType;                                                  // 0x0074   (0x0004)  
	TArray<FScavWaveInfoArray>                         ScavWaveInfoArray;                                          // 0x0078   (0x0010)  
	TArray<FAreaInfo>                                  AreaInfo;                                                   // 0x0088   (0x0010)  
	TArray<FAreaInfo>                                  Reinforcement;                                              // 0x0098   (0x0010)  
};

/// Struct /Script/UADataTableModule.AISpawnPlayerScavConfigTableRow
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FAISpawnPlayerScavConfigTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<float>                                      Weather;                                                    // 0x0028   (0x0010)  
	int32_t                                            MinPlayerScavAINum;                                         // 0x0038   (0x0004)  
	int32_t                                            MaxPlayerScavAINum;                                         // 0x003C   (0x0004)  
	float                                              PlayerScavAIDelayTime;                                      // 0x0040   (0x0004)  
	float                                              PlayerScavAIEndTime;                                        // 0x0044   (0x0004)  
	float                                              PlayerScavAISpawnInterval;                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<int32_t>                                    PlayerScavAIIDPool;                                         // 0x0050   (0x0010)  
	TArray<int32_t>                                    PlayerScavAIEquipPool;                                      // 0x0060   (0x0010)  
	float                                              PlayerAroundRadius;                                         // 0x0070   (0x0004)  
	float                                              PlayerLineOfSight;                                          // 0x0074   (0x0004)  
	float                                              PlayerViewAngle;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.AISpawnPMCSpawnControllerTableRow
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FAISpawnPMCSpawnControllerTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	int32_t                                            AISpawnConfigID;                                            // 0x0010   (0x0004)  
	int32_t                                            SquadID;                                                    // 0x0014   (0x0004)  
	int32_t                                            MinSquadNum;                                                // 0x0018   (0x0004)  
	int32_t                                            MaxSquadNum;                                                // 0x001C   (0x0004)  
	float                                              PlayerAroundRadius;                                         // 0x0020   (0x0004)  
	float                                              PlayerLineOfSight;                                          // 0x0024   (0x0004)  
	float                                              PlayerViewAngle;                                            // 0x0028   (0x0004)  
	bool                                               Priority;                                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	TArray<FAreaInfo>                                  AreaInfo;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/UADataTableModule.PMCAIEquipmentLimit
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FPMCAIEquipmentLimit
{ 
	int32_t                                            EquipID;                                                    // 0x0000   (0x0004)  
	int32_t                                            Limit;                                                      // 0x0004   (0x0004)  
	int32_t                                            BackupID;                                                   // 0x0008   (0x0004)  
};

/// Struct /Script/UADataTableModule.AISpawnPMCConfigTableRow
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 8 MaxSize: 0x0130
struct FAISpawnPMCConfigTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<float>                                      Weather;                                                    // 0x0028   (0x0010)  
	int32_t                                            MinPMCNum;                                                  // 0x0038   (0x0004)  
	int32_t                                            MaxPMCNum;                                                  // 0x003C   (0x0004)  
	int32_t                                            Plan1Weight;                                                // 0x0040   (0x0004)  
	float                                              PMCAIDelayTime;                                             // 0x0044   (0x0004)  
	int32_t                                            MinPMCAITeamUpNum;                                          // 0x0048   (0x0004)  
	int32_t                                            MaxPMCAITeamUpNum;                                          // 0x004C   (0x0004)  
	float                                              PlayerAroundRadius;                                         // 0x0050   (0x0004)  
	float                                              PlayerLineOfSight;                                          // 0x0054   (0x0004)  
	float                                              PlayerViewAngle;                                            // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<int32_t>                                    RankRange;                                                  // 0x0060   (0x0010)  
	TArray<int32_t>                                    PMCAIIDPool_Rank0;                                          // 0x0070   (0x0010)  
	TArray<int32_t>                                    PMCAIIDPool_Rank1;                                          // 0x0080   (0x0010)  
	TArray<int32_t>                                    PMCAIIDPool_Rank2;                                          // 0x0090   (0x0010)  
	TArray<int32_t>                                    PMCAIEquipPool;                                             // 0x00A0   (0x0010)  
	TArray<FPMCAIEquipmentLimit>                       PMCAIEquipmentLimit;                                        // 0x00B0   (0x0010)  
	int32_t                                            Plan2Wieght;                                                // 0x00C0   (0x0004)  
	float                                              PMCAIDelayTime2;                                            // 0x00C4   (0x0004)  
	int32_t                                            MinPMCAITeamUpNum2;                                         // 0x00C8   (0x0004)  
	int32_t                                            MaxPMCAITeamUpNum2;                                         // 0x00CC   (0x0004)  
	TArray<int32_t>                                    PMCAIIDPool2;                                               // 0x00D0   (0x0010)  
	TArray<int32_t>                                    PMCAIEquipPool2;                                            // 0x00E0   (0x0010)  
	float                                              ScanInterval;                                               // 0x00F0   (0x0004)  
	float                                              SpawnInterval;                                              // 0x00F4   (0x0004)  
	float                                              DetectionTime;                                              // 0x00F8   (0x0004)  
	float                                              BattleIntensity;                                            // 0x00FC   (0x0004)  
	int32_t                                            HitNum;                                                     // 0x0100   (0x0004)  
	int32_t                                            KillNum;                                                    // 0x0104   (0x0004)  
	int32_t                                            MinPMCAITeammateNum;                                        // 0x0108   (0x0004)  
	int32_t                                            MaxPMCAITeammateNum;                                        // 0x010C   (0x0004)  
	TArray<int32_t>                                    PMCTeammateAIIDPool;                                        // 0x0110   (0x0010)  
	TArray<int32_t>                                    PMCTeammateAIEquipPool;                                     // 0x0120   (0x0010)  
};

/// Struct /Script/UADataTableModule.AIPool
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAIPool
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	int32_t                                            Equip;                                                      // 0x0010   (0x0004)  
	int32_t                                            Weight;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/UADataTableModule.AISpawnByVectorTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FAISpawnByVectorTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<float>                                      Weather;                                                    // 0x0028   (0x0010)  
	FString                                            PlanName;                                                   // 0x0038   (0x0010)  
	int32_t                                            SpawnNumMin;                                                // 0x0048   (0x0004)  
	int32_t                                            SpawnNumMax;                                                // 0x004C   (0x0004)  
	int32_t                                            SpawnLocType;                                               // 0x0050   (0x0004)  
	int32_t                                            TeamUpType;                                                 // 0x0054   (0x0004)  
	int32_t                                            FactionType;                                                // 0x0058   (0x0004)  
	int32_t                                            CampID;                                                     // 0x005C   (0x0004)  
	float                                              ForceRefreshTime;                                           // 0x0060   (0x0004)  
	int32_t                                            PoolType;                                                   // 0x0064   (0x0004)  
	TArray<FAIPool>                                    AIPool;                                                     // 0x0068   (0x0010)  
	float                                              PlayerAroundRadius;                                         // 0x0078   (0x0004)  
	float                                              PlayerLineOfSight;                                          // 0x007C   (0x0004)  
	float                                              PlayerViewAngle;                                            // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/UADataTableModule.TriggerArea
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FTriggerArea
{ 
	FString                                            AreaID;                                                     // 0x0000   (0x0010)  
	FString                                            TriggerEvent;                                               // 0x0010   (0x0010)  
	FString                                            FollowArea;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/UADataTableModule.AISpawnBossSpawnControllerTableRow
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FAISpawnBossSpawnControllerTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	TArray<float>                                      Weather;                                                    // 0x0020   (0x0010)  
	int32_t                                            SquadID;                                                    // 0x0030   (0x0004)  
	int32_t                                            BossID;                                                     // 0x0034   (0x0004)  
	int32_t                                            eventId;                                                    // 0x0038   (0x0004)  
	float                                              PlayerAroundRadius;                                         // 0x003C   (0x0004)  
	float                                              PlayerLineOfSight;                                          // 0x0040   (0x0004)  
	float                                              PlayerViewAngle;                                            // 0x0044   (0x0004)  
	float                                              Probability;                                                // 0x0048   (0x0004)  
	int32_t                                            Weight;                                                     // 0x004C   (0x0004)  
	FText                                              MaxNumber;                                                  // 0x0050   (0x0018)  
	float                                              FirstSpawnTime;                                             // 0x0068   (0x0004)  
	int32_t                                            FactionType;                                                // 0x006C   (0x0004)  
	int32_t                                            GroupType;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<FTriggerArea>                               BossArea;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/UADataTableModule.AISpawnAreaInfoTableRow
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FAISpawnAreaInfoTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<float>                                      Weather;                                                    // 0x0028   (0x0010)  
	FString                                            AreaID;                                                     // 0x0038   (0x0010)  
	int32_t                                            CampID;                                                     // 0x0048   (0x0004)  
	int32_t                                            MaxAINumber;                                                // 0x004C   (0x0004)  
	int32_t                                            PoolType;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FAIPool>                                    AIPool;                                                     // 0x0058   (0x0010)  
};

/// Struct /Script/UADataTableModule.AISpawnAntiCamperTableRow
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FAISpawnAntiCamperTableRow : FTableRowBase
{ 
	int32_t                                            ConfigID;                                                   // 0x0008   (0x0004)  
	int32_t                                            MapID;                                                      // 0x000C   (0x0004)  
	TArray<int32_t>                                    AISpawnConfigID;                                            // 0x0010   (0x0010)  
	int32_t                                            eventId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<float>                                      Weather;                                                    // 0x0028   (0x0010)  
	int32_t                                            MinAINumNum;                                                // 0x0038   (0x0004)  
	int32_t                                            MaxAINum;                                                   // 0x003C   (0x0004)  
	float                                              SpawnRadius;                                                // 0x0040   (0x0004)  
	int32_t                                            Priority;                                                   // 0x0044   (0x0004)  
	int32_t                                            FactionType;                                                // 0x0048   (0x0004)  
	int32_t                                            AIIDPool;                                                   // 0x004C   (0x0004)  
	int32_t                                            AIEquipPool;                                                // 0x0050   (0x0004)  
	int32_t                                            CampID;                                                     // 0x0054   (0x0004)  
	float                                              PlayerAroundRadius;                                         // 0x0058   (0x0004)  
	float                                              PlayerLineOfSight;                                          // 0x005C   (0x0004)  
	float                                              PlayerViewAngle;                                            // 0x0060   (0x0004)  
	int32_t                                            TriggerCamperScore;                                         // 0x0064   (0x0004)  
	float                                              TriggerStayTime;                                            // 0x0068   (0x0004)  
	float                                              SpawnInterval;                                              // 0x006C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FWxGameShareRewardConf) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWxGameShareConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FWeeklyTakeOutItemConfTableRow) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(FWeeklyKillTargetConfTableRow) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FWeeklyCollectItemConfTableRow) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(FAwardItemConf) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWeeklyActivityAwardConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FWeaponSortCfgTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FSkinMaterialInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInvAnimationInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAdditionMeshAnimInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWeaponSkinConfTableRow) == 0x0160); // 352 bytes (0x000008 - 0x000160)
static_assert(sizeof(FWeaponSocket) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FWeaponTag) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWeaponRuleWDCFTableRow) == 0x01C0); // 448 bytes (0x000008 - 0x0001C0)
static_assert(sizeof(FWeaponRuleWDCTableRow) == 0x01C0); // 448 bytes (0x000008 - 0x0001C0)
static_assert(sizeof(FRuleConf) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWeaponRuleConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FWeaponRecommendWeaponConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRecommendWeaponItemConf) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FWeaponRecommendConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FWeaponRecommendArgConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FWeaponPresetConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FWeaponNumConfTableRow) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FWeaponFilterItemsConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FWeaponDetailValueToAttributeTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FWeaponDetailConfTableRow) == 0x0280); // 640 bytes (0x000008 - 0x000280)
static_assert(sizeof(FWeaponClassifyConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FWeaponAvatarSetCfgTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FWeaponItemConf) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWeaponAssembleConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FWarZoneConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FWalkInTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FVoiceIconSoundTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FValueDistributionConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FUpgradeUnlockTableRow) == 0x0108); // 264 bytes (0x000008 - 0x000108)
static_assert(sizeof(FUnbanMapIdConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FUnbanLootMapIdConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FTraderScaleConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FTradeItemClassifyConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FBusinessHeadConf) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FTradeHeadIconTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FTradeDialogVoiceConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FExchangeItemConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTradeConfTableRow) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(FTitleUpgradeConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FTitleItemConfTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FTicketConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FThrowableWeaponDetailTableRow) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FTeamVoiceTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FTeamTargetConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FTeamStyleConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRecruitStyleConf) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FTeamRecruitStyleConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FTeamRatingCommConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRatingConditionConf) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTeamRatingBattleConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FTeamOptionTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FTeamListTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FTeamLendConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FTeamKVConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FTeamEquipStyleTextTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FTeamConvenientMacthTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FTeamBattleStyleTextTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FCommonItemConfItem) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTaskTargetConfTableRow) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FTaskReportConfTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FActLink) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTaskLinkConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FTaskDialogueTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FUnlockCondtionRef) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTaskTargetRefItem) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FTaskConfTableRow) == 0x0180); // 384 bytes (0x000008 - 0x000180)
static_assert(sizeof(FTaskCommitTargetConfTableRow) == 0x0168); // 360 bytes (0x000008 - 0x000168)
static_assert(sizeof(FTaskActTargetDescParamConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FTaskActTargetDescConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FTaskActDescConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FActTargetRef) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FTaskActConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FTargetArmorTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FTagSheet2TableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FTagSheet1TableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FTagMatchedConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FSynthesizer_ValueToPrizepoolTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FSynthesizer_SameRarityValueToTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FSynthesizer_SameRarityPrizepoolTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FSynthesizer_SameItemValueToTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FSynthesizer_SameItemPrizepoolTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FSynthesizer_PrizepoolTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FSynthesizer_FormulaPrizepoolTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FSynthesizer_FormulaTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FSynthesizer_BlacklistTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FgroupInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSupplyStationSingleConfigTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FSupplyStationGroupConfigTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FStickersTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FSteamAchievementConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FStashSlotConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FStandaloneWeatherTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FSprayIconTextureTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FSpeechConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FSpecialItemTagConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FSpecialDanceTableRow) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FSpecialWeatherConf) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSpWeatherConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FSoundConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FSkipTutorialTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FShowExtendConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FShowDetailTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FShockConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FShareTextTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FShareTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FServerKey2TextTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FServerInfoTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FSecurityQuestionConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FSeasonTaskTreeConfTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FSeasonPublicityTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FSeasonCrossOverTaskTreeConfTableRow) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FScreenEffectPaddingTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FWeaponScopeScale) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FScopeScaleConfigTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FScheme703060006TableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FScheme703060005TableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FScheme703060004TableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FScheme703060003TableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FScheme703060002TableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FScheme703060001TableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FExtEquipConf) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FScavEquipConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FScavAIDynamicLimitTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FLimitPoolConf) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSafeLootLimitTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FSafeBoxConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRoomKVConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRookirTriggerSummaryConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRookieTriggerTypeConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRookieTriggerIdConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FTriggerRookieItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRookieTriggerConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRookieTraderUnlockConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRookieTaskDoneConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRookieStepConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRookieSendItemBackConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRookieMailReceiveConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRookieItemPickConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRookieGunCheckConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRookieDetailConfTableRow) == 0x0198); // 408 bytes (0x000008 - 0x000198)
static_assert(sizeof(FRoleKVDailyTimeConf) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRoleKVConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRoleIdentityConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRoleBannerTagConfTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRoleBannerFrameConfTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRoleBannerDefaultBadgeConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRoleBannerDataBGConfTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRoleBannerCustomDataConfTableRow) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRoleBannerBackgroundConfTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRobotNamePoolTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRoadmapAwardsConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FBlackItemConf) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRewardsConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRewardShareConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FReturnTypeConfTableRow) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FResourceTypeIconConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FResourceListConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FResourceAreaConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FReportReasonConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRepairMaterialConfTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FDurabilityPriceConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRepairDurabilityConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRegistEquipConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRegionConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRecommendPlanConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FPlanEquipItem) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRecommendEquipTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRechargeConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRayTracingWhitelistTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRankedWeekRewardConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRankedTopRankRewardConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRankedTeamScoreConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRankedSettleScoreConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRankedSeasonRewardConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FSeasonChapterRef) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRankedSeasonConfTableRow) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FRankedProtectionConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRankedOldLevelMappingTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRankedNewScoreConfTableRow) == 0x0300); // 768 bytes (0x000008 - 0x000300)
static_assert(sizeof(FRankedMapConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRankedLevelRangeConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRankedLevelConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRankedLevelAwardConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRankedLeaderboardSaleConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRankedHistoryInfoConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRankedCommonConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRankedBoxConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRankedAwardShowConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FQuickSortContainerPriorityTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FQuickChatDataStaticsTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FQuickChatTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FPurchaseConfTableRow) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FProvinceConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FProtectionTypeConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FPrivilegeItemConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FPrivilegeDesConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FPrivilegeConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FPrivilegeBubbleConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FPriceConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FPoolLimitValueTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FPmcAiLimitItemConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FPmcAiHeadPicConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FPmcAiConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FPlayerNamePoolTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FPlayerListTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FLevelRewardConf) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLevelFuncConf) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FPlayerLevelConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FPlayerAvatarPopupMenuButtonTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FPlayerAvatarPopupMenuTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FPlayModeTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FPersonalRadarMapTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FPersonalRadarFactorTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FPersonalBattleOverviewTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FPerkScoreMapping) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPerkInsuranceConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FAbilityInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPerkConfTableRow) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FPerkCommConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FPeriodlyClearItemConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FInflationRatio) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPaybackConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FPPTPageConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FOverSaleValueTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FOverSaleNewbieLevelTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FOverSaleLackFundTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FOverConsumptionValueTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FOtherDetailConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FOrderKVConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FOnShelfConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FObResetEquipConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FObRegistEquipConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FObRegistBasicConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FObBusinessmanBasicConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FNewbieLevelTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FNetbarPrivilegeConfTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FNationalFlagConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FMusicLobbyDefaultConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FMultiModeWidgetTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FMomentTableRow) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FMembershipLevelConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FMeleeWeaponDetailTableRow) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FMedGuidePageConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FMatchKVConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FMarqueeConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FMarketRecommendConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FWeatherRateItem) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMapWeatherTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FMapUnlockTableRow) == 0x0118); // 280 bytes (0x000008 - 0x000118)
static_assert(sizeof(FMapNewsInfoTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FMapLayoutTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FMapGroupConfTableRow) == 0x00D8); // 216 bytes (0x000008 - 0x0000D8)
static_assert(sizeof(FMapEventUnlockTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FMapDetailTableRow) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FMapBanTaskConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FMallTagConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FMallPresentContentTemplateTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FMallPresentCardTemplateTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FMallItemTagConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FMallItemQualityConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FMallItemHighlightsConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FTag) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMallItemConfTableRow) == 0x0138); // 312 bytes (0x000008 - 0x000138)
static_assert(sizeof(FMallGlobalConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FMallDiscountDescConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FClassBanner) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMallClassConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FMainTaskTreeConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FMailTypeConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FMailKVConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FMailConfTableRow) == 0x0158); // 344 bytes (0x000008 - 0x000158)
static_assert(sizeof(FLuckyLimitContainerTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FLotteryStepPriceConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FLoseDropConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FLootResourceConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FLootReplaceConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FLootProtectionItemsConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FLootProtectionConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FLootPoolConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FLootObjExpTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FLimitUserTagConditions) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLootLimitUserTagTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FLootLimitConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FLootFactionItemConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FLootDropPoolInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLootDropPoolConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FActivityLootDropInfoConf) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FLootDropOperationConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FLootDropControlConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FLootDropActivityPoolConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FNewActivityLootDropInfoConf) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLootDropActivityConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FLootDropTableRow) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FLoginLoadingTipsTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FLoginLoadingImageTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FLocalizationConf_zh_HansTableRow) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FLocalizationConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FLobbyRandomVoiceTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FLobbyRandomAnimTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRandomVoiceConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRandomAnimConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLobbyInteractConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FLobbyBankConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FLobbyBGMCfgTableRow) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FTipItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLoadingTipsTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FImageRefItem) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLoadingImageTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FLevelConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FLeaderboardDesConfTableRow) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FLbsTitleConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FLackFundTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FKeyContainerConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FKeyCabinetConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FJumpGotoCfgTableRow) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FItemLimitConf) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FItemTakeInLimitConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FItemSortTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FItemShelveTestConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FItemShelveConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FItemShareConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FItemPriceGearTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FItemInflationTypeTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FItemFactoryTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FItemExchangePriceTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FExchangeEffect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FItemEffectConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FItemDynamicPriceTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FItemConfTableRow) == 0x0148); // 328 bytes (0x000008 - 0x000148)
static_assert(sizeof(FItemComponentsIconTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FItemClassifyGroupConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FItemCheckWhiteListConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FItemCategoryIconPathTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FIntelligenceLootPointTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FIntelligenceTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FInsureTypeConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FInsureQualityProbConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FInsureCommonItemConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FInsureCommonAccConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FInsureCombineItemConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FDailyTimeConf) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FOpenMapModeConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInnerGameActConfTableRow) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FIconScaleConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FHotUpdateGlobalConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FHelperTypeConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FHelperConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FHelpRootTypeConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FTabDetailItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHelpEntryInfoConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FH5MediaItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHelpDialogContentItem) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHelpDialogConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FHealthThresholdTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FHeadIconItemConfTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FHeadConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FHeadBoxItemConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FHardwareBenchmarkScoreTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FHardAITaskTreeConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FGuaranteedConditions) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGuaranteedUseAttrTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FGuaranteedPoolStage) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGuaranteedPoolConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FGuaranteeLimitStrategyTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FKillPMCGuaranteeAddition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGuaranteeKillPMCAddConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FGuaranteeGenItemTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FGuaranteeFactorConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FGuaranteeContainerTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FGuaranteeCheckItemTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FGoldDogTagConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FGlobalNumConfTableRow) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FGlobalDailyTimeConf) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGlobalConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FGlobalClientConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FGiftPackageShowItemsConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FGiftEquipItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGiftPackageEquipConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FGiftPackageEquipTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FGiftPackageConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FGiftGroupDescConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FGestureIconMontageTableRow) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FGShopOnshelfTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGenericShopTradeConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FGenericShopTagConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FConfGShopGood) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGenericShopConfTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FGameSettingDescriptionTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FGalleryWorkbenchFormulaConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FGalleryUpgradeTargetConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FGalleryTreasuryValueTitleConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FGalleryTreasuryUpgradeConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FGalleryTreasuryStepConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FGalleryTreasuryConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FTreasuryCabinetCombination) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGalleryTreasuryCameraConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FGalleryTopicConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FGalleryShowWeaponConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FGalleryPositionConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FGalleryMusicCollectionConfTableRow) == 0x0118); // 280 bytes (0x000008 - 0x000118)
static_assert(sizeof(FNeedItemRef) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGalleryMedalTaskConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FGalleryGlobalConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FUpgradeCostItems) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGalleryFurnitureUpgradeConfTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FGalleryFurnitureConfTableRow) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(FGalleryDogtagBoxConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FDecorateSceneConf) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGalleryDecorateTabConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FGalleryDecorateSlotConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FGalleryDecorateConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FCollectionNeedItem) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGalleryCollectionTaskConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FexchangeItem) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGalleryCollectionExchangeConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FCollectRewardItems) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGalleryCollectRewardConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FGalleryCharacterPoseConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FGalleryCharacterDialogConfTableRow) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FGalleryCharacterConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FGalleryBuffConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FGalleryAvatarPostureConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FInvList) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGachaSpecialPickMontageConf) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGachaSpecialBetweenMontageConf) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGachaSpecialChangeMontageConf) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGachaClientConfTableRow) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FFunctionControlCfgTableRow) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FFriRecommTagsTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FFriRecommConfTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FInviteRewardListConf) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FFriInviteCodeRewardTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FPlayModeRewardConf) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FFightTaskConfRewardTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FFightLimitItemConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FFactionalItemConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FFactionSelectConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FFactionConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FPreTaskId) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FactionChoiceItem) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFactionChoiceConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FFaceShieldAvatarCfgTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FBlackSocketInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FExtraSkinConfTableRow) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FExtraInfoItemTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FExpConstantTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FExchangeRarityConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FEventAIIDModifierDataTableTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FEvaluationConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FEvaluationCommConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FErrorCodeTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FEquipmentSkinConfTableRow) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FEquipTemplateInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEquipTemplateConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FEquipSlotConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FEquipReturnCardConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FEquipAvatarSetCfgTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FEliteEnterCostVec) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FEliteRefreshCostVec) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FEliteSuiteConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FEliminationExpTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FLotteryPoolGuaranteeConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDynamicLotteryConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FDurabilityChangeTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FDropPicShowConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FDropNonAvatarItemConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FDispelExpTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FDeathDropReplacePoolTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FDeathDropReplacePoolInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FDeathDropReplaceBTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FDeathDropReplaceATableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FDataPathTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FDMGLimitMapidConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FDMGLimitConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FCustomizedExchangeRuleConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FCustomizedExchangeItemConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCustomizedExchangeConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FCurrencyExchangeConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCthulhuMediaConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FCthulhuImageConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FCrossOverAwardsConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FCreditPaneltyConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCreditLevelConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FCreditEventConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FCreditBehaviorDescConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FCreateRoleAvatarShowConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FCreateRoleAvatarConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FCourtSettleKillConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FCourtSettleConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FCourtRewardConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCourtRanksConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FCourtRanksCommonConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FCourtRankTargetTypeConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FCourtRankLevelRangeConfTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FCountryRankConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FCountryCurrencyExchangeConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FCountryConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FCosBucketConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FCopyCardToItemTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FContrabandItemMapTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FContextMenuPickUpConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FContextMenuLevel2ConfTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FContextMenuLevel1ConfTableRow) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FContestBattlePassLevelItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FContestBattlePassLevelConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FContainerRuleConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FContainerSizeConfItem) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FContainerConfTableRow) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FContainerArmorConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FConsumablesUseAward) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FConsumablesUseAwardConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FConsumeRemoveStatusConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FConsumeBuffConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FConsumablesDetailConfTableRow) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRecommandSuppliesPack) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FConsumablesConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FConsumablesBuffConfTableRow) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FCompetitionTeamLogoConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCompetitionTeamFaction) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCompetitionTeamFactionConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCompetitionDefaultTeamNameConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FCompetitionAuthorityConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FCommonKVConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FCommonAffixsConfTableRow) == 0x00C8); // 200 bytes (0x000008 - 0x0000C8)
static_assert(sizeof(FCommercialSchemeConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCombatReadinessInitConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FCombatReadinessConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCollectsvrKVConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FCityConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FChatShareLanguageTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FChatDialogBubbleConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FCarvingShowConfTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FCardConfTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FCaptureTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCalExtendConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FCGVoiceConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FBusinessBaseInfoVec) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FShowTimeConf) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBusinessmanConfTableRow) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FBusinessGrateDescribeConfTableRow) == 0x00C8); // 200 bytes (0x000008 - 0x0000C8)
static_assert(sizeof(FBulletDetailConfTableRow) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FMagazineBulletPack) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBulletConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FBugSubmitConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FBuffIconConfTableRow) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FBrokenImageConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FBossTokenConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FBodyPartsTableTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FBodyDetailsPartsTableTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FItemsDropPool) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBlackStoreItemRandomConfigTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FBlackStoreDropInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBlackStoreDropListConfigTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FBattleStatConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FBattleResultTransTemplateConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FBattleResultTransConfTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FBattleResultReferTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FDescribeArg) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBattleResultPointEventConfTableRow) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FBattleResultMapTextureConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FBattleResultLootBoxConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FBattleResultLoadingTipsTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FBattleResultLoadingImageTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FBattleResultInjuredRecordTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FBattleResultEnemyTipsFuncTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FBattleResultEnemyTipsTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FBattleResultEXPRatioTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FBattleResultDieTypeTableRow) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FBattleResultDieTipsTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FBattleResultConfTableRow) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FBattleResultAreaConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FBattleResultAppraiseSeasonConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAppraiseConditionConf) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBattleResultAppraiseTableRow) == 0x0168); // 360 bytes (0x000008 - 0x000168)
static_assert(sizeof(FBattlePassWorldLevelConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FBattlePassVipShowItem) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBattlePassVipShowConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FBattlePassVipItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBattlePassVipConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FBattlePassShowTypeTableRow) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FBattlePassOtherWayTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FBattlePassLevelItem) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FBattlePassLevelConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FBattlePassLastSeasonAwardConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FBattlePassConfTableRow) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(FBattlePassAwardItemsConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FBanTypeConfTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FBanThrowsconfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FBanReasonConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FBanMatchModeConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FBanChatCountryConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FBadgeSlotConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FBadgeConfTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FBuffInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAvatarValueShowTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAvatarValueNameTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAvatarTagCfgTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FAvatarTabCfgTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FAvatarSetCfgTableRow) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FAvatarPartTabFilterItemCfgTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FAvatarFilterGroupConf) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FAvatarPartTabFilterCfgTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAvatarPartTabCfgTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FAvatarItemConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAvatarItemCfgTableRow) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FAvatarHairOptionsTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FAvatarFactoryCfgTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FAvatarCompleteShareConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAuctionTagsTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FAuctionScaleConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FAuctionSafeQuestionConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FAuctionOrderParamsTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAuctionMinorTableRow) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FAuctionMajorTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FAuctionItemTableRow) == 0x0138); // 312 bytes (0x000008 - 0x000138)
static_assert(sizeof(FAuctionGetRightsWayTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FAuctionContextMenuWhiteListTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FArmorProtectDisplayConfTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FArmorProtectConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FArmorMaterialConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FArmorDetailValueToAttributeTableRow) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FArmorDetailConfTableRow) == 0x01A8); // 424 bytes (0x000008 - 0x0001A8)
static_assert(sizeof(FAppearancePresetConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FAntipenetrationConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FAmmoNumTableRow) == 0x00F8); // 248 bytes (0x000008 - 0x0000F8)
static_assert(sizeof(FAmmoMagazineRelationTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FMultiModeItemLimitConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMultiModeItemOutConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAllowTakeInItemConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FAdcodeConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FActKVConfTableRow) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FChannelInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FActGoodCommentConfTableRow) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FActDialogDetailConfTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FActDialogConfTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FActConfigTableRow) == 0x01F0); // 496 bytes (0x000008 - 0x0001F0)
static_assert(sizeof(FActBankruptConfTableRow) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FAchievementConfTableRow) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FAchieveTaskConfTableRow) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FAchieveBadgeSlotTableRow) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FAccountBanReasonTableRow) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FAccessoryAvatarSetCfgTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAccessDurabilityPriceConf) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAccessRepairDurabilityConfTableRow) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FAccessMatArchIdConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FAccessDurabilityArchIdConfTableRow) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FScavWaveInfoArray) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FAreaInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAISpawnScavSpawnControllerTableRow) == 0x00A8); // 168 bytes (0x000008 - 0x0000A8)
static_assert(sizeof(FAISpawnPlayerScavConfigTableRow) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FAISpawnPMCSpawnControllerTableRow) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FPMCAIEquipmentLimit) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAISpawnPMCConfigTableRow) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FAIPool) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAISpawnByVectorTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FTriggerArea) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAISpawnBossSpawnControllerTableRow) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FAISpawnAreaInfoTableRow) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FAISpawnAntiCamperTableRow) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(offsetof(FWxGameShareConfTableRow, share_reward) == 0x0018);
static_assert(offsetof(FWeeklyTakeOutItemConfTableRow, mode_ids) == 0x0010);
static_assert(offsetof(FWeeklyTakeOutItemConfTableRow, map_ids) == 0x0020);
static_assert(offsetof(FWeeklyTakeOutItemConfTableRow, rule_ids) == 0x0030);
static_assert(offsetof(FWeeklyTakeOutItemConfTableRow, difficulties) == 0x0040);
static_assert(offsetof(FWeeklyTakeOutItemConfTableRow, TakeOutItemIDs) == 0x0060);
static_assert(offsetof(FWeeklyTakeOutItemConfTableRow, instigator_stayvolume) == 0x0078);
static_assert(offsetof(FWeeklyTakeOutItemConfTableRow, EquipItemIDs) == 0x0098);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, mode_ids) == 0x0010);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, map_ids) == 0x0020);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, rule_ids) == 0x0030);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, difficulties) == 0x0040);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, killedplayer_charactertypes) == 0x0058);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, instigator_stayvolume) == 0x0068);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, killedplayer_stayvolume) == 0x0080);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, KillerWeaponIDs) == 0x0098);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, RequireAdaptersIDs) == 0x00A8);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, EquipItemIDs) == 0x00C0);
static_assert(offsetof(FWeeklyKillTargetConfTableRow, EnduranceTypes) == 0x00D8);
static_assert(offsetof(FWeeklyCollectItemConfTableRow, mode_ids) == 0x0010);
static_assert(offsetof(FWeeklyCollectItemConfTableRow, map_ids) == 0x0020);
static_assert(offsetof(FWeeklyCollectItemConfTableRow, rule_ids) == 0x0030);
static_assert(offsetof(FWeeklyCollectItemConfTableRow, difficulties) == 0x0040);
static_assert(offsetof(FWeeklyCollectItemConfTableRow, CollectItemIDs) == 0x0060);
static_assert(offsetof(FWeeklyCollectItemConfTableRow, instigator_stayvolume) == 0x0078);
static_assert(offsetof(FWeeklyCollectItemConfTableRow, EquipItemIDs) == 0x0098);
static_assert(offsetof(FWeeklyActivityAwardConfTableRow, awards) == 0x0018);
static_assert(offsetof(FSkinMaterialInfo, OverrideMaterial) == 0x0008);
static_assert(offsetof(FInvAnimationInfo, OverrideAnimation) == 0x0008);
static_assert(offsetof(FAdditionMeshAnimInfo, SkeletalMeshPath) == 0x0008);
static_assert(offsetof(FAdditionMeshAnimInfo, AttachSocketName) == 0x0024);
static_assert(offsetof(FAdditionMeshAnimInfo, AdditionMeshAnimInstance) == 0x0030);
static_assert(offsetof(FAdditionMeshAnimInfo, AdditionMeshAnim) == 0x0048);
static_assert(offsetof(FWeaponSkinConfTableRow, MeshPathGame) == 0x0018);
static_assert(offsetof(FWeaponSkinConfTableRow, MeshPathLobby) == 0x0030);
static_assert(offsetof(FWeaponSkinConfTableRow, MeshPathRollup) == 0x0048);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideMaterialsGame) == 0x0060);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideMaterialsLobby) == 0x0070);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideMaterials_Rollup) == 0x0080);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideCheckWeaponHand) == 0x0090);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideCheckWeaponGun) == 0x00A8);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideAnimSet) == 0x00C0);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideInvAnimBP) == 0x00D8);
static_assert(offsetof(FWeaponSkinConfTableRow, OverrideInvAnimation) == 0x00F0);
static_assert(offsetof(FWeaponSkinConfTableRow, AdditionMeshAnimInfos) == 0x0100);
static_assert(offsetof(FWeaponSkinConfTableRow, MeshPathGame_Female) == 0x0118);
static_assert(offsetof(FWeaponSkinConfTableRow, MeshPathLobby_Female) == 0x0130);
static_assert(offsetof(FWeaponSkinConfTableRow, CueClass) == 0x0148);
static_assert(offsetof(FWeaponSocket, SocketName) == 0x0000);
static_assert(offsetof(FWeaponSocket, PartName) == 0x0010);
static_assert(offsetof(FWeaponSocket, SupportAdapterTagList) == 0x0028);
static_assert(offsetof(FWeaponSocket, masks) == 0x0038);
static_assert(offsetof(FWeaponSocket, Types) == 0x0048);
static_assert(offsetof(FWeaponTag, masks) == 0x0000);
static_assert(offsetof(FWeaponTag, Types) == 0x0010);
static_assert(offsetof(FWeaponRuleWDCFTableRow, BulletSize) == 0x0010);
static_assert(offsetof(FWeaponRuleWDCFTableRow, size_ext) == 0x0030);
static_assert(offsetof(FWeaponRuleWDCFTableRow, AssembleTag) == 0x0048);
static_assert(offsetof(FWeaponRuleWDCFTableRow, SubAssembleTag) == 0x0058);
static_assert(offsetof(FWeaponRuleWDCFTableRow, Sockets) == 0x0078);
static_assert(offsetof(FWeaponRuleWDCFTableRow, ConflictedItemIds) == 0x0088);
static_assert(offsetof(FWeaponRuleWDCFTableRow, TypesOfFire) == 0x00D0);
static_assert(offsetof(FWeaponRuleWDCFTableRow, Caliber) == 0x00E8);
static_assert(offsetof(FWeaponRuleWDCFTableRow, FireRate) == 0x0100);
static_assert(offsetof(FWeaponRuleWDCFTableRow, EffectiveDistance) == 0x0110);
static_assert(offsetof(FWeaponRuleWDCFTableRow, FireRequireTags) == 0x0120);
static_assert(offsetof(FWeaponRuleWDCFTableRow, fi_require_tags) == 0x0130);
static_assert(offsetof(FWeaponRuleWDCFTableRow, AdapterFireRequireTags) == 0x0140);
static_assert(offsetof(FWeaponRuleWDCFTableRow, ad_require_tags) == 0x0150);
static_assert(offsetof(FWeaponRuleWDCFTableRow, FireRequireTagsDecrease) == 0x0160);
static_assert(offsetof(FWeaponRuleWDCFTableRow, de_require_tags) == 0x0170);
static_assert(offsetof(FWeaponRuleWDCFTableRow, AccessoryType) == 0x0188);
static_assert(offsetof(FWeaponRuleWDCFTableRow, Scope) == 0x01A0);
static_assert(offsetof(FWeaponRuleWDCTableRow, BulletSize) == 0x0010);
static_assert(offsetof(FWeaponRuleWDCTableRow, size_ext) == 0x0030);
static_assert(offsetof(FWeaponRuleWDCTableRow, AssembleTag) == 0x0048);
static_assert(offsetof(FWeaponRuleWDCTableRow, SubAssembleTag) == 0x0058);
static_assert(offsetof(FWeaponRuleWDCTableRow, Sockets) == 0x0078);
static_assert(offsetof(FWeaponRuleWDCTableRow, ConflictedItemIds) == 0x0088);
static_assert(offsetof(FWeaponRuleWDCTableRow, TypesOfFire) == 0x00D0);
static_assert(offsetof(FWeaponRuleWDCTableRow, Caliber) == 0x00E8);
static_assert(offsetof(FWeaponRuleWDCTableRow, FireRate) == 0x0100);
static_assert(offsetof(FWeaponRuleWDCTableRow, EffectiveDistance) == 0x0110);
static_assert(offsetof(FWeaponRuleWDCTableRow, FireRequireTags) == 0x0120);
static_assert(offsetof(FWeaponRuleWDCTableRow, fi_require_tags) == 0x0130);
static_assert(offsetof(FWeaponRuleWDCTableRow, AdapterFireRequireTags) == 0x0140);
static_assert(offsetof(FWeaponRuleWDCTableRow, ad_require_tags) == 0x0150);
static_assert(offsetof(FWeaponRuleWDCTableRow, FireRequireTagsDecrease) == 0x0160);
static_assert(offsetof(FWeaponRuleWDCTableRow, de_require_tags) == 0x0170);
static_assert(offsetof(FWeaponRuleWDCTableRow, AccessoryType) == 0x0188);
static_assert(offsetof(FWeaponRuleWDCTableRow, Scope) == 0x01A0);
static_assert(offsetof(FRuleConf, cond_ids) == 0x0008);
static_assert(offsetof(FWeaponRuleConfTableRow, rules) == 0x0010);
static_assert(offsetof(FWeaponRecommendConfTableRow, Items) == 0x0010);
static_assert(offsetof(FWeaponRecommendArgConfTableRow, Blacklist) == 0x0010);
static_assert(offsetof(FWeaponPresetConfTableRow, Name) == 0x0010);
static_assert(offsetof(FWeaponFilterItemsConfTableRow, Name) == 0x0010);
static_assert(offsetof(FWeaponFilterItemsConfTableRow, arr) == 0x0028);
static_assert(offsetof(FWeaponDetailValueToAttributeTableRow, DetailValueName) == 0x0008);
static_assert(offsetof(FWeaponDetailValueToAttributeTableRow, AttributeName) == 0x0018);
static_assert(offsetof(FWeaponDetailConfTableRow, BulletSize) == 0x0010);
static_assert(offsetof(FWeaponDetailConfTableRow, size_ext) == 0x0028);
static_assert(offsetof(FWeaponDetailConfTableRow, TypesOfFire) == 0x0038);
static_assert(offsetof(FWeaponDetailConfTableRow, FireRate) == 0x0050);
static_assert(offsetof(FWeaponDetailConfTableRow, FiringPowerDisplay) == 0x0070);
static_assert(offsetof(FWeaponDetailConfTableRow, EffectiveDistance) == 0x00C8);
static_assert(offsetof(FWeaponDetailConfTableRow, SuppressorSoundShow) == 0x00E8);
static_assert(offsetof(FWeaponDetailConfTableRow, Scope) == 0x0120);
static_assert(offsetof(FWeaponDetailConfTableRow, LightIntensityDisplay) == 0x0138);
static_assert(offsetof(FWeaponDetailConfTableRow, AdapterArmorLevel) == 0x0150);
static_assert(offsetof(FWeaponDetailConfTableRow, Caliber) == 0x0160);
static_assert(offsetof(FWeaponDetailConfTableRow, AccessoryType) == 0x0178);
static_assert(offsetof(FWeaponDetailConfTableRow, FireRequireTags) == 0x01A0);
static_assert(offsetof(FWeaponDetailConfTableRow, fi_require_tags) == 0x01B0);
static_assert(offsetof(FWeaponDetailConfTableRow, AdapterFireRequireTags) == 0x01C0);
static_assert(offsetof(FWeaponDetailConfTableRow, ad_require_tags) == 0x01D0);
static_assert(offsetof(FWeaponDetailConfTableRow, FireRequireTagsDecrease) == 0x01E0);
static_assert(offsetof(FWeaponDetailConfTableRow, de_require_tags) == 0x01F0);
static_assert(offsetof(FWeaponDetailConfTableRow, AssembleTag) == 0x0200);
static_assert(offsetof(FWeaponDetailConfTableRow, SubAssembleTag) == 0x0210);
static_assert(offsetof(FWeaponDetailConfTableRow, ConflictedItemIds) == 0x0220);
static_assert(offsetof(FWeaponDetailConfTableRow, DurabilityAccuracyCurvePath) == 0x0240);
static_assert(offsetof(FWeaponDetailConfTableRow, DurabilityMalfunctionCurvePath) == 0x0250);
static_assert(offsetof(FWeaponDetailConfTableRow, DurabilityMoaCurvePath) == 0x0260);
static_assert(offsetof(FWeaponDetailConfTableRow, Sockets) == 0x0270);
static_assert(offsetof(FWeaponClassifyConfTableRow, IconPath) == 0x0010);
static_assert(offsetof(FWeaponClassifyConfTableRow, Name) == 0x0020);
static_assert(offsetof(FWeaponAvatarSetCfgTableRow, avatar_set) == 0x0010);
static_assert(offsetof(FWeaponAvatarSetCfgTableRow, ExtSkinAssemble) == 0x0028);
static_assert(offsetof(FWeaponAvatarSetCfgTableRow, ExtSkinList) == 0x0038);
static_assert(offsetof(FWeaponAssembleConfTableRow, unique_id) == 0x0018);
static_assert(offsetof(FWeaponAssembleConfTableRow, Items) == 0x0030);
static_assert(offsetof(FWarZoneConfTableRow, country_codes) == 0x0010);
static_assert(offsetof(FWalkInTableRow, GestureIconPath) == 0x0010);
static_assert(offsetof(FWalkInTableRow, GestureDescription) == 0x0020);
static_assert(offsetof(FWalkInTableRow, AnimationName) == 0x0038);
static_assert(offsetof(FWalkInTableRow, activity_info) == 0x0060);
static_assert(offsetof(FVoiceIconSoundTableRow, VoiceIconPath) == 0x0010);
static_assert(offsetof(FVoiceIconSoundTableRow, VoiceDescription) == 0x0020);
static_assert(offsetof(FVoiceIconSoundTableRow, VoiceSoundPaths) == 0x0038);
static_assert(offsetof(FVoiceIconSoundTableRow, WanderVoiceSoundPaths) == 0x0048);
static_assert(offsetof(FVoiceIconSoundTableRow, activity_info) == 0x0058);
static_assert(offsetof(FVoiceIconSoundTableRow, jump_goto) == 0x0068);
static_assert(offsetof(FVoiceIconSoundTableRow, no_source_description) == 0x0078);
static_assert(offsetof(FVoiceIconSoundTableRow, can_get_desc) == 0x0098);
static_assert(offsetof(FUpgradeUnlockTableRow, unlock_tip) == 0x0020);
static_assert(offsetof(FUpgradeUnlockTableRow, preview_label) == 0x0038);
static_assert(offsetof(FUpgradeUnlockTableRow, preview_desc) == 0x0050);
static_assert(offsetof(FUpgradeUnlockTableRow, label) == 0x0068);
static_assert(offsetof(FUpgradeUnlockTableRow, desc1) == 0x0080);
static_assert(offsetof(FUpgradeUnlockTableRow, image_path) == 0x0098);
static_assert(offsetof(FUpgradeUnlockTableRow, small_image_path) == 0x00A8);
static_assert(offsetof(FUpgradeUnlockTableRow, robot_help_key) == 0x00B8);
static_assert(offsetof(FUpgradeUnlockTableRow, begin_time) == 0x00D0);
static_assert(offsetof(FUpgradeUnlockTableRow, end_time) == 0x00E0);
static_assert(offsetof(FUpgradeUnlockTableRow, desc) == 0x00F0);
static_assert(offsetof(FTradeItemClassifyConfTableRow, icon_path) == 0x0010);
static_assert(offsetof(FTradeItemClassifyConfTableRow, Name) == 0x0028);
static_assert(offsetof(FTradeItemClassifyConfTableRow, item_types) == 0x0040);
static_assert(offsetof(FBusinessHeadConf, Path) == 0x0000);
static_assert(offsetof(FBusinessHeadConf, Path0) == 0x0010);
static_assert(offsetof(FBusinessHeadConf, Path1) == 0x0020);
static_assert(offsetof(FBusinessHeadConf, Path2) == 0x0030);
static_assert(offsetof(FBusinessHeadConf, Path3) == 0x0040);
static_assert(offsetof(FBusinessHeadConf, Path4) == 0x0050);
static_assert(offsetof(FBusinessHeadConf, Path5) == 0x0060);
static_assert(offsetof(FBusinessHeadConf, Path6) == 0x0070);
static_assert(offsetof(FBusinessHeadConf, Path7) == 0x0080);
static_assert(offsetof(FBusinessHeadConf, Path8) == 0x0090);
static_assert(offsetof(FBusinessHeadConf, Path9) == 0x00A0);
static_assert(offsetof(FBusinessHeadConf, Path10) == 0x00B0);
static_assert(offsetof(FBusinessHeadConf, Path11) == 0x00C0);
static_assert(offsetof(FBusinessHeadConf, Path12) == 0x00D0);
static_assert(offsetof(FBusinessHeadConf, Path13) == 0x00E0);
static_assert(offsetof(FBusinessHeadConf, Path14) == 0x00F0);
static_assert(offsetof(FBusinessHeadConf, Path15) == 0x0100);
static_assert(offsetof(FTradeHeadIconTableRow, BusinessHead_Path) == 0x0010);
static_assert(offsetof(FTradeHeadIconTableRow, InBattleTaskBusinessHead_Path) == 0x0020);
static_assert(offsetof(FTradeHeadIconTableRow, stage_head_vec) == 0x0030);
static_assert(offsetof(FTradeDialogVoiceConfTableRow, DialogTypeDef) == 0x0010);
static_assert(offsetof(FTradeDialogVoiceConfTableRow, AudioSourceName) == 0x0020);
static_assert(offsetof(FTradeConfTableRow, lock_desc) == 0x0020);
static_assert(offsetof(FTradeConfTableRow, refresh_begin_time) == 0x0058);
static_assert(offsetof(FTradeConfTableRow, limit_refresh_begin_time) == 0x0068);
static_assert(offsetof(FTradeConfTableRow, sellItemName) == 0x0080);
static_assert(offsetof(FTradeConfTableRow, exchange_item_vec) == 0x0098);
static_assert(offsetof(FTitleUpgradeConfTableRow, level_to_progess) == 0x0018);
static_assert(offsetof(FTitleUpgradeConfTableRow, desc) == 0x0028);
static_assert(offsetof(FTitleItemConfTableRow, start_time) == 0x0010);
static_assert(offsetof(FTitleItemConfTableRow, end_time) == 0x0018);
static_assert(offsetof(FTitleItemConfTableRow, no_source_description) == 0x0028);
static_assert(offsetof(FTitleItemConfTableRow, CannotGetDesc) == 0x0040);
static_assert(offsetof(FTitleItemConfTableRow, activity_info) == 0x0068);
static_assert(offsetof(FTitleItemConfTableRow, can_get_desc) == 0x0098);
static_assert(offsetof(FThrowableWeaponDetailTableRow, DelayEffect) == 0x0010);
static_assert(offsetof(FThrowableWeaponDetailTableRow, EffectRange) == 0x0020);
static_assert(offsetof(FThrowableWeaponDetailTableRow, ArmorDamage) == 0x0040);
static_assert(offsetof(FThrowableWeaponDetailTableRow, Penetration) == 0x0058);
static_assert(offsetof(FThrowableWeaponDetailTableRow, PieceCount) == 0x0070);
static_assert(offsetof(FThrowableWeaponDetailTableRow, PieceType) == 0x0088);
static_assert(offsetof(FThrowableWeaponDetailTableRow, battery) == 0x00A0);
static_assert(offsetof(FThrowableWeaponDetailTableRow, detectrange) == 0x00B8);
static_assert(offsetof(FTeamVoiceTableRow, VoiceDesc) == 0x0010);
static_assert(offsetof(FTeamVoiceTableRow, voicePath) == 0x0028);
static_assert(offsetof(FTeamVoiceTableRow, VoiceContent) == 0x0038);
static_assert(offsetof(FTeamVoiceTableRow, activity_info) == 0x0050);
static_assert(offsetof(FTeamVoiceTableRow, WanderPath) == 0x0060);
static_assert(offsetof(FTeamVoiceTableRow, WanderContent) == 0x0070);
static_assert(offsetof(FTeamTargetConfTableRow, target_name) == 0x0010);
static_assert(offsetof(FTeamStyleConfTableRow, style_name) == 0x0010);
static_assert(offsetof(FTeamRecruitStyleConfTableRow, style_list) == 0x0010);
static_assert(offsetof(FRatingConditionConf, expression) == 0x0000);
static_assert(offsetof(FTeamRatingBattleConfTableRow, Conditions) == 0x0028);
static_assert(offsetof(FTeamOptionTableRow, Name) == 0x0010);
static_assert(offsetof(FTeamListTableRow, Name) == 0x0010);
static_assert(offsetof(FTeamLendConfTableRow, ary) == 0x0010);
static_assert(offsetof(FTeamKVConfTableRow, val_array) == 0x0018);
static_assert(offsetof(FTeamEquipStyleTextTableRow, Name) == 0x0010);
static_assert(offsetof(FTeamConvenientMacthTableRow, Name) == 0x0010);
static_assert(offsetof(FTeamBattleStyleTextTableRow, Name) == 0x0010);
static_assert(offsetof(FTaskTargetConfTableRow, desc) == 0x0010);
static_assert(offsetof(FTaskTargetConfTableRow, item_list) == 0x0058);
static_assert(offsetof(FTaskTargetConfTableRow, rarity_list) == 0x0078);
static_assert(offsetof(FTaskTargetConfTableRow, rewards) == 0x0088);
static_assert(offsetof(FTaskTargetConfTableRow, prev_target) == 0x0098);
static_assert(offsetof(FTaskReportConfTableRow, Title) == 0x0018);
static_assert(offsetof(FTaskReportConfTableRow, Content) == 0x0030);
static_assert(offsetof(FTaskReportConfTableRow, sound_url) == 0x0050);
static_assert(offsetof(FTaskLinkConfTableRow, Links) == 0x0010);
static_assert(offsetof(FTaskDialogueTableRow, conversation) == 0x0010);
static_assert(offsetof(FTaskDialogueTableRow, Sound) == 0x0028);
static_assert(offsetof(FTaskDialogueTableRow, bg) == 0x0040);
static_assert(offsetof(FTaskDialogueTableRow, Title) == 0x0058);
static_assert(offsetof(FTaskDialogueTableRow, gifts) == 0x0078);
static_assert(offsetof(FTaskConfTableRow, disp_title) == 0x0018);
static_assert(offsetof(FTaskConfTableRow, chapter_name) == 0x0038);
static_assert(offsetof(FTaskConfTableRow, disp_desc) == 0x0058);
static_assert(offsetof(FTaskConfTableRow, disp_detail) == 0x0070);
static_assert(offsetof(FTaskConfTableRow, chapter) == 0x0090);
static_assert(offsetof(FTaskConfTableRow, unlock_time) == 0x00A8);
static_assert(offsetof(FTaskConfTableRow, unlock_condtions) == 0x00B0);
static_assert(offsetof(FTaskConfTableRow, pre_tasks) == 0x00C0);
static_assert(offsetof(FTaskConfTableRow, Targets) == 0x00F0);
static_assert(offsetof(FTaskConfTableRow, kw_desc) == 0x0108);
static_assert(offsetof(FTaskConfTableRow, rewards) == 0x0128);
static_assert(offsetof(FTaskConfTableRow, reports_id) == 0x0158);
static_assert(offsetof(FTaskCommitTargetConfTableRow, item_list) == 0x0018);
static_assert(offsetof(FTaskCommitTargetConfTableRow, rarity_list) == 0x0038);
static_assert(offsetof(FTaskCommitTargetConfTableRow, size_x) == 0x0048);
static_assert(offsetof(FTaskCommitTargetConfTableRow, size_y) == 0x0058);
static_assert(offsetof(FTaskCommitTargetConfTableRow, size_all) == 0x0068);
static_assert(offsetof(FTaskCommitTargetConfTableRow, Durability) == 0x0080);
static_assert(offsetof(FTaskCommitTargetConfTableRow, durability_limit) == 0x0090);
static_assert(offsetof(FTaskCommitTargetConfTableRow, Engonomics) == 0x00A0);
static_assert(offsetof(FTaskCommitTargetConfTableRow, Accuracy) == 0x00B0);
static_assert(offsetof(FTaskCommitTargetConfTableRow, ads_moa_y) == 0x00C0);
static_assert(offsetof(FTaskCommitTargetConfTableRow, horizontal_recoil) == 0x00D0);
static_assert(offsetof(FTaskCommitTargetConfTableRow, vertical_recoil) == 0x00E0);
static_assert(offsetof(FTaskCommitTargetConfTableRow, sight_range) == 0x00F0);
static_assert(offsetof(FTaskCommitTargetConfTableRow, muzzle_velocity) == 0x0100);
static_assert(offsetof(FTaskCommitTargetConfTableRow, max_count) == 0x0110);
static_assert(offsetof(FTaskCommitTargetConfTableRow, Recoil) == 0x0120);
static_assert(offsetof(FTaskCommitTargetConfTableRow, fire_rate) == 0x0138);
static_assert(offsetof(FTaskCommitTargetConfTableRow, effect_dist) == 0x0148);
static_assert(offsetof(FTaskCommitTargetConfTableRow, Components) == 0x0158);
static_assert(offsetof(FTaskActTargetDescParamConfTableRow, desc) == 0x0010);
static_assert(offsetof(FTaskActTargetDescConfTableRow, target_desc) == 0x0010);
static_assert(offsetof(FTaskActDescConfTableRow, task_title) == 0x0010);
static_assert(offsetof(FTaskActDescConfTableRow, task_detail) == 0x0028);
static_assert(offsetof(FTaskActDescConfTableRow, rewards) == 0x0040);
static_assert(offsetof(FActTargetRef, param5) == 0x0028);
static_assert(offsetof(FActTargetRef, param6) == 0x0038);
static_assert(offsetof(FActTargetRef, param8) == 0x0048);
static_assert(offsetof(FTaskActConfTableRow, begin_time) == 0x0018);
static_assert(offsetof(FTaskActConfTableRow, end_time) == 0x0028);
static_assert(offsetof(FTaskActConfTableRow, abs_begin_time) == 0x0038);
static_assert(offsetof(FTaskActConfTableRow, abs_end_time) == 0x0040);
static_assert(offsetof(FTaskActConfTableRow, Targets) == 0x0050);
static_assert(offsetof(FTaskActConfTableRow, rewards) == 0x0060);
static_assert(offsetof(FTagSheet2TableRow, SocketName) == 0x0010);
static_assert(offsetof(FTagSheet2TableRow, PartName) == 0x0020);
static_assert(offsetof(FTagSheet1TableRow, Tag) == 0x0010);
static_assert(offsetof(FTagMatchedConfTableRow, Tag) == 0x0008);
static_assert(offsetof(FTagMatchedConfTableRow, matchedItemIDs) == 0x0018);
static_assert(offsetof(FSynthesizer_SameRarityPrizepoolTableRow, Weight) == 0x0018);
static_assert(offsetof(FSynthesizer_SameItemPrizepoolTableRow, Weight) == 0x0018);
static_assert(offsetof(FSynthesizer_PrizepoolTableRow, Weight) == 0x0018);
static_assert(offsetof(FSynthesizer_FormulaPrizepoolTableRow, Weight) == 0x0018);
static_assert(offsetof(FSynthesizer_FormulaTableRow, opentime_min) == 0x0010);
static_assert(offsetof(FSynthesizer_FormulaTableRow, opentime_max) == 0x0020);
static_assert(offsetof(FSupplyStationSingleConfigTableRow, MaxBuyNumGroup) == 0x0038);
static_assert(offsetof(FStickersTableRow, StickersIconPath) == 0x0010);
static_assert(offsetof(FStickersTableRow, StickersGifTexture) == 0x0020);
static_assert(offsetof(FStickersTableRow, activity_info) == 0x0038);
static_assert(offsetof(FStickersTableRow, jump_goto) == 0x0048);
static_assert(offsetof(FStickersTableRow, no_source_description) == 0x0058);
static_assert(offsetof(FSteamAchievementConfTableRow, achievement_name) == 0x0010);
static_assert(offsetof(FSteamAchievementConfTableRow, stat_name) == 0x0028);
static_assert(offsetof(FSprayIconTextureTableRow, SprayDescription) == 0x0010);
static_assert(offsetof(FSprayIconTextureTableRow, SprayTexture) == 0x0030);
static_assert(offsetof(FSprayIconTextureTableRow, activity_info) == 0x0048);
static_assert(offsetof(FSprayIconTextureTableRow, jump_goto) == 0x0058);
static_assert(offsetof(FSprayIconTextureTableRow, no_source_description) == 0x0068);
static_assert(offsetof(FSprayIconTextureTableRow, can_get_desc) == 0x0088);
static_assert(offsetof(FSprayIconTextureTableRow, SprayUVTiling) == 0x00A0);
static_assert(offsetof(FSpeechConfTableRow, Npc_stage) == 0x0010);
static_assert(offsetof(FSpeechConfTableRow, SpeechText) == 0x0028);
static_assert(offsetof(FSpeechConfTableRow, Level) == 0x0040);
static_assert(offsetof(FSpeechConfTableRow, AudioEvent) == 0x0058);
static_assert(offsetof(FSpeechConfTableRow, BNK) == 0x0070);
static_assert(offsetof(FSpecialDanceTableRow, GestureIconPath) == 0x0010);
static_assert(offsetof(FSpecialDanceTableRow, GestureDescription) == 0x0020);
static_assert(offsetof(FSpecialDanceTableRow, AnimationName) == 0x0038);
static_assert(offsetof(FSpecialDanceTableRow, AnimationName_Fake) == 0x0048);
static_assert(offsetof(FSpecialDanceTableRow, activity_info) == 0x0060);
static_assert(offsetof(FSpecialDanceTableRow, jump_goto) == 0x0070);
static_assert(offsetof(FSpecialDanceTableRow, no_source_description) == 0x0080);
static_assert(offsetof(FSpecialDanceTableRow, can_get_desc) == 0x00A0);
static_assert(offsetof(FSpWeatherConfTableRow, sp_weather_vec) == 0x0010);
static_assert(offsetof(FSoundConfTableRow, sound_name) == 0x0008);
static_assert(offsetof(FSoundConfTableRow, chn_name) == 0x0010);
static_assert(offsetof(FSoundConfTableRow, desc) == 0x0028);
static_assert(offsetof(FSoundConfTableRow, sound_ak_event) == 0x0040);
static_assert(offsetof(FSkipTutorialTableRow, Question) == 0x0010);
static_assert(offsetof(FSkipTutorialTableRow, Option1) == 0x0020);
static_assert(offsetof(FSkipTutorialTableRow, Option2) == 0x0030);
static_assert(offsetof(FSkipTutorialTableRow, Option3) == 0x0040);
static_assert(offsetof(FSkipTutorialTableRow, Option4) == 0x0050);
static_assert(offsetof(FShowDetailTableRow, ResourcePath) == 0x0018);
static_assert(offsetof(FShockConfTableRow, ShockPath) == 0x0010);
static_assert(offsetof(FShareTextTableRow, Text) == 0x0010);
static_assert(offsetof(FShareTableRow, pic_desc) == 0x0010);
static_assert(offsetof(FShareTableRow, pic) == 0x0028);
static_assert(offsetof(FServerKey2TextTableRow, ServerKey) == 0x0008);
static_assert(offsetof(FServerKey2TextTableRow, ServerText) == 0x0018);
static_assert(offsetof(FServerInfoTableRow, Describe) == 0x0010);
static_assert(offsetof(FSecurityQuestionConfTableRow, QuestionDesc) == 0x0010);
static_assert(offsetof(FSeasonPublicityTableRow, info_picture) == 0x0010);
static_assert(offsetof(FSeasonPublicityTableRow, info_big_title) == 0x0020);
static_assert(offsetof(FSeasonPublicityTableRow, info_small_title) == 0x0038);
static_assert(offsetof(FSeasonPublicityTableRow, info_describe1) == 0x0050);
static_assert(offsetof(FSeasonPublicityTableRow, info_describe2) == 0x0068);
static_assert(offsetof(FSeasonPublicityTableRow, info_path) == 0x0080);
static_assert(offsetof(FScreenEffectPaddingTableRow, AssetName) == 0x0008);
static_assert(offsetof(FWeaponScopeScale, WeaponName) == 0x0008);
static_assert(offsetof(FScopeScaleConfigTableRow, WeaponScopeScale) == 0x0010);
static_assert(offsetof(FScavEquipConfTableRow, exts) == 0x0020);
static_assert(offsetof(FScavAIDynamicLimitTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FScavAIDynamicLimitTableRow, Weather) == 0x0028);
static_assert(offsetof(FSafeLootLimitTableRow, PoolLists) == 0x0010);
static_assert(offsetof(FSafeBoxConfTableRow, list_desc) == 0x0020);
static_assert(offsetof(FRoomKVConfTableRow, val_array) == 0x0018);
static_assert(offsetof(FRookirTriggerSummaryConfTableRow, desc) == 0x0010);
static_assert(offsetof(FRookirTriggerSummaryConfTableRow, check_play_mode) == 0x0028);
static_assert(offsetof(FRookieTriggerTypeConfTableRow, ItemId) == 0x0018);
static_assert(offsetof(FRookieTriggerTypeConfTableRow, tagid) == 0x0028);
static_assert(offsetof(FRookieTriggerTypeConfTableRow, List) == 0x0050);
static_assert(offsetof(FRookieTriggerIdConfTableRow, cond_value) == 0x0020);
static_assert(offsetof(FRookieTriggerIdConfTableRow, extra_param) == 0x0030);
static_assert(offsetof(FRookieTriggerIdConfTableRow, trigger_panel) == 0x0050);
static_assert(offsetof(FRookieTriggerIdConfTableRow, List) == 0x0060);
static_assert(offsetof(FTriggerRookieItem, get_itemid) == 0x0008);
static_assert(offsetof(FRookieTriggerConfTableRow, List) == 0x0030);
static_assert(offsetof(FRookieTraderUnlockConfTableRow, List) == 0x0018);
static_assert(offsetof(FRookieTaskDoneConfTableRow, List) == 0x0020);
static_assert(offsetof(FRookieStepConfTableRow, get_itemid) == 0x0028);
static_assert(offsetof(FRookieStepConfTableRow, block_action) == 0x0040);
static_assert(offsetof(FRookieStepConfTableRow, tips_list) == 0x0050);
static_assert(offsetof(FRookieMailReceiveConfTableRow, List) == 0x0018);
static_assert(offsetof(FRookieItemPickConfTableRow, itemIdAndType) == 0x0018);
static_assert(offsetof(FRookieItemPickConfTableRow, takescope) == 0x0030);
static_assert(offsetof(FRookieItemPickConfTableRow, List) == 0x0048);
static_assert(offsetof(FRookieGunCheckConfTableRow, List) == 0x0018);
static_assert(offsetof(FRookieDetailConfTableRow, desc) == 0x0010);
static_assert(offsetof(FRookieDetailConfTableRow, desc1) == 0x0028);
static_assert(offsetof(FRookieDetailConfTableRow, panelName) == 0x0070);
static_assert(offsetof(FRookieDetailConfTableRow, btnName) == 0x00A0);
static_assert(offsetof(FRookieDetailConfTableRow, waitPanelName) == 0x00B8);
static_assert(offsetof(FRookieDetailConfTableRow, backPanelName) == 0x00C8);
static_assert(offsetof(FRookieDetailConfTableRow, waitSubPanelName) == 0x00D8);
static_assert(offsetof(FRookieDetailConfTableRow, waitClosePanelName) == 0x00E8);
static_assert(offsetof(FRookieDetailConfTableRow, pptid) == 0x0110);
static_assert(offsetof(FRookieDetailConfTableRow, DisplayName) == 0x0128);
static_assert(offsetof(FRookieDetailConfTableRow, sound_name) == 0x0148);
static_assert(offsetof(FRookieDetailConfTableRow, floatTitle) == 0x0160);
static_assert(offsetof(FRookieDetailConfTableRow, floatContent) == 0x0178);
static_assert(offsetof(FRoleKVDailyTimeConf, daily_time) == 0x0000);
static_assert(offsetof(FRoleKVConfTableRow, val_array) == 0x0018);
static_assert(offsetof(FRoleKVConfTableRow, daily_time_vec) == 0x0028);
static_assert(offsetof(FRoleKVConfTableRow, time1) == 0x0038);
static_assert(offsetof(FRoleKVConfTableRow, time2) == 0x0040);
static_assert(offsetof(FRoleIdentityConfTableRow, Describe) == 0x0010);
static_assert(offsetof(FRoleBannerTagConfTableRow, Name) == 0x0010);
static_assert(offsetof(FRoleBannerTagConfTableRow, desc) == 0x0028);
static_assert(offsetof(FRoleBannerTagConfTableRow, abs_begin_time) == 0x0050);
static_assert(offsetof(FRoleBannerTagConfTableRow, abs_end_time) == 0x0058);
static_assert(offsetof(FRoleBannerTagConfTableRow, no_source_description) == 0x0068);
static_assert(offsetof(FRoleBannerFrameConfTableRow, no_source_description) == 0x0018);
static_assert(offsetof(FRoleBannerFrameConfTableRow, can_get_desc) == 0x0038);
static_assert(offsetof(FRoleBannerFrameConfTableRow, activity_info) == 0x0058);
static_assert(offsetof(FRoleBannerDataBGConfTableRow, no_source_description) == 0x0018);
static_assert(offsetof(FRoleBannerDataBGConfTableRow, can_get_desc) == 0x0038);
static_assert(offsetof(FRoleBannerDataBGConfTableRow, activity_info) == 0x0058);
static_assert(offsetof(FRoleBannerCustomDataConfTableRow, Name) == 0x0018);
static_assert(offsetof(FRoleBannerCustomDataConfTableRow, desc) == 0x0030);
static_assert(offsetof(FRoleBannerCustomDataConfTableRow, data_type) == 0x0048);
static_assert(offsetof(FRoleBannerCustomDataConfTableRow, Format) == 0x0058);
static_assert(offsetof(FRoleBannerCustomDataConfTableRow, suffix) == 0x0068);
static_assert(offsetof(FRoleBannerBackgroundConfTableRow, no_source_description) == 0x0018);
static_assert(offsetof(FRoleBannerBackgroundConfTableRow, can_get_desc) == 0x0038);
static_assert(offsetof(FRoleBannerBackgroundConfTableRow, activity_info) == 0x0058);
static_assert(offsetof(FRobotNamePoolTableRow, Name) == 0x0010);
static_assert(offsetof(FRoadmapAwardsConfTableRow, rewardgroup_name) == 0x0018);
static_assert(offsetof(FRoadmapAwardsConfTableRow, rewardgroup_picture) == 0x0030);
static_assert(offsetof(FRoadmapAwardsConfTableRow, awards) == 0x0048);
static_assert(offsetof(FRewardsConfTableRow, rewards) == 0x0010);
static_assert(offsetof(FRewardShareConfTableRow, avatar_set) == 0x0010);
static_assert(offsetof(FReturnTypeConfTableRow, elo_interval) == 0x0018);
static_assert(offsetof(FReturnTypeConfTableRow, login_score) == 0x0028);
static_assert(offsetof(FReturnTypeConfTableRow, login_tag) == 0x0038);
static_assert(offsetof(FReturnTypeConfTableRow, login_decrease_elo) == 0x0048);
static_assert(offsetof(FReturnTypeConfTableRow, wealth_elo_interval) == 0x0058);
static_assert(offsetof(FReturnTypeConfTableRow, login_decrease_wealth_elo) == 0x0068);
static_assert(offsetof(FReturnTypeConfTableRow, match_elo_change) == 0x0080);
static_assert(offsetof(FReturnTypeConfTableRow, match_wealth_elo_change) == 0x0090);
static_assert(offsetof(FResourceTypeIconConfTableRow, icon) == 0x0010);
static_assert(offsetof(FResourceListConfTableRow, Name) == 0x0010);
static_assert(offsetof(FResourceListConfTableRow, icon) == 0x0028);
static_assert(offsetof(FResourceListConfTableRow, typeId) == 0x0040);
static_assert(offsetof(FResourceAreaConfTableRow, TagName) == 0x0018);
static_assert(offsetof(FResourceAreaConfTableRow, ShowLootVolumeId) == 0x0038);
static_assert(offsetof(FReportReasonConfTableRow, use_scene) == 0x0010);
static_assert(offsetof(FReportReasonConfTableRow, Content) == 0x0020);
static_assert(offsetof(FReportReasonConfTableRow, desc) == 0x0038);
static_assert(offsetof(FRepairMaterialConfTableRow, material_name) == 0x0010);
static_assert(offsetof(FRepairMaterialConfTableRow, low_repair_businessman_ids) == 0x0030);
static_assert(offsetof(FRepairMaterialConfTableRow, mid_repair_businessman_ids) == 0x0048);
static_assert(offsetof(FRepairMaterialConfTableRow, high_repair_businessman_ids) == 0x0060);
static_assert(offsetof(FRepairMaterialConfTableRow, repairability) == 0x0078);
static_assert(offsetof(FRepairDurabilityConfTableRow, durability_price_conf) == 0x0010);
static_assert(offsetof(FRegistEquipConfTableRow, Items) == 0x0020);
static_assert(offsetof(FRecommendPlanConfTableRow, Name) == 0x0010);
static_assert(offsetof(FRecommendPlanConfTableRow, details) == 0x0030);
static_assert(offsetof(FRecommendEquipTableRow, Items) == 0x0010);
static_assert(offsetof(FRayTracingWhitelistTableRow, GPUName) == 0x0010);
static_assert(offsetof(FRankedWeekRewardConfTableRow, rewards) == 0x0018);
static_assert(offsetof(FRankedTopRankRewardConfTableRow, rewards) == 0x0018);
static_assert(offsetof(FRankedSeasonRewardConfTableRow, rewards) == 0x0010);
static_assert(offsetof(FSeasonChapterRef, chapter_name) == 0x0008);
static_assert(offsetof(FSeasonChapterRef, cdn_image) == 0x0020);
static_assert(offsetof(FSeasonChapterRef, chapter_begin_time) == 0x0038);
static_assert(offsetof(FSeasonChapterRef, chapter_end_time) == 0x0040);
static_assert(offsetof(FRankedSeasonConfTableRow, begin_time) == 0x0010);
static_assert(offsetof(FRankedSeasonConfTableRow, warmup_end_time) == 0x0018);
static_assert(offsetof(FRankedSeasonConfTableRow, end_time) == 0x0020);
static_assert(offsetof(FRankedSeasonConfTableRow, carnival_end_time) == 0x0028);
static_assert(offsetof(FRankedSeasonConfTableRow, season_end_time) == 0x0030);
static_assert(offsetof(FRankedSeasonConfTableRow, desc) == 0x0038);
static_assert(offsetof(FRankedSeasonConfTableRow, countdown_time) == 0x0060);
static_assert(offsetof(FRankedSeasonConfTableRow, background_img) == 0x0078);
static_assert(offsetof(FRankedSeasonConfTableRow, season_chapter) == 0x0088);
static_assert(offsetof(FRankedNewScoreConfTableRow, ranked_level_diff) == 0x0018);
static_assert(offsetof(FRankedNewScoreConfTableRow, bonus_score) == 0x0028);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_kill_range) == 0x0058);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_kill_score) == 0x0068);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_dead_range) == 0x0078);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_dead_score) == 0x0088);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_kd_range) == 0x0098);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_kd_score) == 0x00A8);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_win_scorediff_range) == 0x00C0);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_win_scorediff_value) == 0x00D0);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_win_teamrun) == 0x00E0);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_win_teamrun_value) == 0x00F0);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_lose_scorediff_range) == 0x0108);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_lose_scorediff_value) == 0x0118);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_lose_teamrun) == 0x0128);
static_assert(offsetof(FRankedNewScoreConfTableRow, round_lose_teamrun_value) == 0x0138);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_kill_range) == 0x0150);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_kill_score) == 0x0160);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_dead_range) == 0x0170);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_dead_score) == 0x0180);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_kd_range) == 0x0190);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_kd_score) == 0x01A0);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_win_scorediff_range) == 0x01B8);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_win_scorediff_value) == 0x01C8);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_win_teamrun) == 0x01D8);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_win_teamrun_value) == 0x01E8);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_lose_scorediff_range) == 0x0200);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_lose_scorediff_value) == 0x0210);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_lose_teamrun) == 0x0220);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_lose_teamrun_value) == 0x0230);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_even_scorediff_range) == 0x0248);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_even_scorediff_value) == 0x0258);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_even_teamrun) == 0x0268);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_even_teamrun_value) == 0x0278);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_totaldefeat_scorediff_range) == 0x0290);
static_assert(offsetof(FRankedNewScoreConfTableRow, tdm_totaldefeat_scorediff_value) == 0x02A0);
static_assert(offsetof(FRankedNewScoreConfTableRow, fight_times) == 0x02D8);
static_assert(offsetof(FRankedNewScoreConfTableRow, fight_times_factor) == 0x02E8);
static_assert(offsetof(FRankedMapConfTableRow, begin_time) == 0x0010);
static_assert(offsetof(FRankedMapConfTableRow, end_time) == 0x0018);
static_assert(offsetof(FRankedMapConfTableRow, ranked_map_list) == 0x0020);
static_assert(offsetof(FRankedMapConfTableRow, factor_list) == 0x0030);
static_assert(offsetof(FRankedMapConfTableRow, ranked_rulegroup) == 0x0040);
static_assert(offsetof(FRankedMapConfTableRow, protection_list) == 0x0050);
static_assert(offsetof(FRankedLevelRangeConfTableRow, main_name) == 0x0018);
static_assert(offsetof(FRankedLevelRangeConfTableRow, sub_name) == 0x0030);
static_assert(offsetof(FRankedLevelConfTableRow, TitleDesc) == 0x0010);
static_assert(offsetof(FRankedLevelAwardConfTableRow, rewards) == 0x0018);
static_assert(offsetof(FRankedHistoryInfoConfTableRow, field_text) == 0x0010);
static_assert(offsetof(FRankedHistoryInfoConfTableRow, Field) == 0x0028);
static_assert(offsetof(FRankedCommonConfTableRow, Val) == 0x0010);
static_assert(offsetof(FRankedBoxConfTableRow, desc) == 0x0020);
static_assert(offsetof(FRankedAwardShowConfTableRow, main_image) == 0x0010);
static_assert(offsetof(FRankedAwardShowConfTableRow, core_image) == 0x0020);
static_assert(offsetof(FRankedAwardShowConfTableRow, rank_image) == 0x0030);
static_assert(offsetof(FQuickChatDataStaticsTableRow, Key) == 0x0010);
static_assert(offsetof(FQuickChatDataStaticsTableRow, BattleInfoTable) == 0x0028);
static_assert(offsetof(FQuickChatDataStaticsTableRow, BattleInfoCalculate) == 0x0040);
static_assert(offsetof(FQuickChatDataStaticsTableRow, Format) == 0x0058);
static_assert(offsetof(FQuickChatDataStaticsTableRow, Operation) == 0x0070);
static_assert(offsetof(FQuickChatTableRow, Content) == 0x0010);
static_assert(offsetof(FQuickChatTableRow, BattleInfoField) == 0x0030);
static_assert(offsetof(FPurchaseConfTableRow, product_id) == 0x0018);
static_assert(offsetof(FPurchaseConfTableRow, item_name) == 0x0040);
static_assert(offsetof(FPurchaseConfTableRow, item_desc) == 0x0058);
static_assert(offsetof(FPurchaseConfTableRow, Style) == 0x0078);
static_assert(offsetof(FPurchaseConfTableRow, service_code) == 0x0088);
static_assert(offsetof(FPurchaseConfTableRow, service_name) == 0x00A0);
static_assert(offsetof(FProvinceConfTableRow, ip_show) == 0x0010);
static_assert(offsetof(FPrivilegeItemConfTableRow, get_item) == 0x0010);
static_assert(offsetof(FPrivilegeItemConfTableRow, season_get_item) == 0x0028);
static_assert(offsetof(FPrivilegeItemConfTableRow, daily_item) == 0x0040);
static_assert(offsetof(FPrivilegeItemConfTableRow, week_item) == 0x0058);
static_assert(offsetof(FPrivilegeItemConfTableRow, item_ids) == 0x0070);
static_assert(offsetof(FPrivilegeDesConfTableRow, privilegedes) == 0x0018);
static_assert(offsetof(FPrivilegeDesConfTableRow, bubbledes) == 0x0030);
static_assert(offsetof(FPrivilegeDesConfTableRow, icon_name) == 0x0048);
static_assert(offsetof(FPrivilegeConfTableRow, icon) == 0x0020);
static_assert(offsetof(FPrivilegeConfTableRow, renewal_face_pic) == 0x0040);
static_assert(offsetof(FPrivilegeConfTableRow, item_list) == 0x0060);
static_assert(offsetof(FPrivilegeBubbleConfTableRow, bubble_des) == 0x0020);
static_assert(offsetof(FPmcAiLimitItemConfTableRow, limit_source_array) == 0x0010);
static_assert(offsetof(FPmcAiConfTableRow, Name) == 0x0020);
static_assert(offsetof(FPlayerNamePoolTableRow, Name) == 0x0010);
static_assert(offsetof(FPlayerListTableRow, Name) == 0x0010);
static_assert(offsetof(FPlayerListTableRow, Param1) == 0x0030);
static_assert(offsetof(FPlayerListTableRow, OptionsName) == 0x0040);
static_assert(offsetof(FLevelRewardConf, item_img_path) == 0x0008);
static_assert(offsetof(FLevelRewardConf, panel_bg_path) == 0x0018);
static_assert(offsetof(FLevelFuncConf, unlock_func_name) == 0x0000);
static_assert(offsetof(FLevelFuncConf, unlock_img_path) == 0x0018);
static_assert(offsetof(FLevelFuncConf, unlock_bg_path) == 0x0028);
static_assert(offsetof(FLevelFuncConf, panel_bg_path) == 0x0040);
static_assert(offsetof(FLevelFuncConf, desc) == 0x0058);
static_assert(offsetof(FPlayerLevelConfTableRow, rewards) == 0x0010);
static_assert(offsetof(FPlayerLevelConfTableRow, funcs) == 0x0020);
static_assert(offsetof(FPlayerAvatarPopupMenuButtonTableRow, DisplayName) == 0x0010);
static_assert(offsetof(FPlayerAvatarPopupMenuButtonTableRow, IconName) == 0x0028);
static_assert(offsetof(FPlayerAvatarPopupMenuButtonTableRow, ExecFunc) == 0x0040);
static_assert(offsetof(FPlayerAvatarPopupMenuButtonTableRow, ForbiddenMode) == 0x0050);
static_assert(offsetof(FPlayerAvatarPopupMenuTableRow, ButtonTypes) == 0x0018);
static_assert(offsetof(FPersonalRadarMapTableRow, score_list) == 0x0010);
static_assert(offsetof(FPersonalRadarFactorTableRow, AppendId) == 0x0020);
static_assert(offsetof(FPersonalBattleOverviewTableRow, ShowName) == 0x0010);
static_assert(offsetof(FPersonalBattleOverviewTableRow, Name) == 0x0028);
static_assert(offsetof(FPersonalBattleOverviewTableRow, Format) == 0x0038);
static_assert(offsetof(FPersonalBattleOverviewTableRow, suffix) == 0x0048);
static_assert(offsetof(FPersonalBattleOverviewTableRow, desc) == 0x0060);
static_assert(offsetof(FPersonalBattleOverviewTableRow, AppendId) == 0x0090);
static_assert(offsetof(FPersonalBattleOverviewTableRow, ClientAppendId) == 0x00A0);
static_assert(offsetof(FPerkInsuranceConfTableRow, socre_param) == 0x0028);
static_assert(offsetof(FAbilityInfo, AbilityClass) == 0x0000);
static_assert(offsetof(FAbilityInfo, AbilityPayload) == 0x0018);
static_assert(offsetof(FPerkConfTableRow, Name) == 0x0010);
static_assert(offsetof(FPerkConfTableRow, icon) == 0x0028);
static_assert(offsetof(FPerkConfTableRow, icon_lock) == 0x0040);
static_assert(offsetof(FPerkConfTableRow, show_multimode_list) == 0x0068);
static_assert(offsetof(FPerkConfTableRow, desc) == 0x0078);
static_assert(offsetof(FPerkConfTableRow, aside_desc) == 0x0090);
static_assert(offsetof(FPerkConfTableRow, begin_time) == 0x00B8);
static_assert(offsetof(FPerkConfTableRow, AbilityInfos) == 0x00C0);
static_assert(offsetof(FPerkCommConfTableRow, val_list) == 0x0018);
static_assert(offsetof(FPerkCommConfTableRow, str_val_list) == 0x0028);
static_assert(offsetof(FPaybackConfTableRow, inflation_ratio) == 0x0020);
static_assert(offsetof(FPPTPageConfTableRow, Animations) == 0x0010);
static_assert(offsetof(FPPTPageConfTableRow, Title) == 0x0028);
static_assert(offsetof(FPPTPageConfTableRow, desc) == 0x0040);
static_assert(offsetof(FOverSaleValueTableRow, type_name) == 0x0010);
static_assert(offsetof(FOverSaleValueTableRow, sale_warning_message) == 0x0028);
static_assert(offsetof(FOverSaleValueTableRow, sale_warning_advice) == 0x0040);
static_assert(offsetof(FOverConsumptionValueTableRow, type_name) == 0x0010);
static_assert(offsetof(FOtherDetailConfTableRow, AssembleTag) == 0x0010);
static_assert(offsetof(FOtherDetailConfTableRow, SubAssembleTag) == 0x0020);
static_assert(offsetof(FOtherDetailConfTableRow, Sockets) == 0x0040);
static_assert(offsetof(FObResetEquipConfTableRow, Items) == 0x0018);
static_assert(offsetof(FObRegistEquipConfTableRow, Items) == 0x0018);
static_assert(offsetof(FNetbarPrivilegeConfTableRow, begin_time) == 0x0018);
static_assert(offsetof(FNetbarPrivilegeConfTableRow, end_time) == 0x0038);
static_assert(offsetof(FNetbarPrivilegeConfTableRow, avatar_id) == 0x0058);
static_assert(offsetof(FNationalFlagConfTableRow, country_alpha) == 0x0010);
static_assert(offsetof(FNationalFlagConfTableRow, country_img_url) == 0x0028);
static_assert(offsetof(FMusicLobbyDefaultConfTableRow, abs_begin_time) == 0x0010);
static_assert(offsetof(FMultiModeWidgetTableRow, Name) == 0x0010);
static_assert(offsetof(FMomentTableRow, MomentTitle) == 0x0010);
static_assert(offsetof(FMomentTableRow, Describe) == 0x0030);
static_assert(offsetof(FMomentTableRow, UrlTitle) == 0x0048);
static_assert(offsetof(FMomentTableRow, UrlDescribe) == 0x0060);
static_assert(offsetof(FMeleeWeaponDetailTableRow, BaseDamage) == 0x0010);
static_assert(offsetof(FMeleeWeaponDetailTableRow, ShowDamage) == 0x0020);
static_assert(offsetof(FMeleeWeaponDetailTableRow, AttackSpeed) == 0x0040);
static_assert(offsetof(FMeleeWeaponDetailTableRow, DamageReduction) == 0x0058);
static_assert(offsetof(FMeleeWeaponDetailTableRow, TraceRange) == 0x0068);
static_assert(offsetof(FMeleeWeaponDetailTableRow, BleedProbabilityDisplay) == 0x0078);
static_assert(offsetof(FMeleeWeaponDetailTableRow, TraceRangeDisplay) == 0x0090);
static_assert(offsetof(FMedGuidePageConfTableRow, icon) == 0x0010);
static_assert(offsetof(FMedGuidePageConfTableRow, desc) == 0x0020);
static_assert(offsetof(FMedGuidePageConfTableRow, CureItemId) == 0x0038);
static_assert(offsetof(FMatchKVConfTableRow, val_array) == 0x0018);
static_assert(offsetof(FMatchKVConfTableRow, begin_time) == 0x0028);
static_assert(offsetof(FMatchKVConfTableRow, end_time) == 0x0030);
static_assert(offsetof(FMarqueeConfTableRow, Content) == 0x0010);
static_assert(offsetof(FMarketRecommendConfTableRow, Items) == 0x0010);
static_assert(offsetof(FMapWeatherTableRow, weather_list) == 0x0010);
static_assert(offsetof(FMapUnlockTableRow, ShowName) == 0x0020);
static_assert(offsetof(FMapUnlockTableRow, unlock_param) == 0x0048);
static_assert(offsetof(FMapUnlockTableRow, sysIds) == 0x0088);
static_assert(offsetof(FMapUnlockTableRow, map_event_unlock_list) == 0x0098);
static_assert(offsetof(FMapUnlockTableRow, typeIcon) == 0x00B0);
static_assert(offsetof(FMapUnlockTableRow, map_bg_name) == 0x00C0);
static_assert(offsetof(FMapUnlockTableRow, map_desc) == 0x00D8);
static_assert(offsetof(FMapNewsInfoTableRow, Title) == 0x0010);
static_assert(offsetof(FMapNewsInfoTableRow, desc) == 0x0020);
static_assert(offsetof(FMapNewsInfoTableRow, pic) == 0x0030);
static_assert(offsetof(FMapNewsInfoTableRow, show_open_time) == 0x0040);
static_assert(offsetof(FMapNewsInfoTableRow, show_daily_time) == 0x0050);
static_assert(offsetof(FMapLayoutTableRow, select_list) == 0x0010);
static_assert(offsetof(FMapGroupConfTableRow, show_name) == 0x0010);
static_assert(offsetof(FMapGroupConfTableRow, desc) == 0x0030);
static_assert(offsetof(FMapGroupConfTableRow, sub_group_id) == 0x0060);
static_assert(offsetof(FMapGroupConfTableRow, sub_map_id) == 0x0078);
static_assert(offsetof(FMapGroupConfTableRow, hovertips) == 0x0090);
static_assert(offsetof(FMapGroupConfTableRow, ban_sysid_list) == 0x00B0);
static_assert(offsetof(FMapGroupConfTableRow, sys_enable_list) == 0x00C0);
static_assert(offsetof(FMapEventUnlockTableRow, event_name) == 0x0010);
static_assert(offsetof(FMapEventUnlockTableRow, icon_path) == 0x0028);
static_assert(offsetof(FMapEventUnlockTableRow, event_picture) == 0x0038);
static_assert(offsetof(FMapEventUnlockTableRow, hover_tips) == 0x0050);
static_assert(offsetof(FMapDetailTableRow, map_level) == 0x0010);
static_assert(offsetof(FMapDetailTableRow, mobile_map_level) == 0x0028);
static_assert(offsetof(FMapDetailTableRow, Name) == 0x0038);
static_assert(offsetof(FMapDetailTableRow, level_path) == 0x0050);
static_assert(offsetof(FMapDetailTableRow, Picture) == 0x0060);
static_assert(offsetof(FMapDetailTableRow, desc) == 0x0078);
static_assert(offsetof(FMapDetailTableRow, MapSize) == 0x0090);
static_assert(offsetof(FMapDetailTableRow, SampleScenePoints) == 0x0098);
static_assert(offsetof(FMapDetailTableRow, SampleMapPoints) == 0x00A8);
static_assert(offsetof(FMapBanTaskConfTableRow, banned_task_types) == 0x0010);
static_assert(offsetof(FMallTagConfTableRow, Name) == 0x0010);
static_assert(offsetof(FMallPresentContentTemplateTableRow, Title) == 0x0010);
static_assert(offsetof(FMallPresentContentTemplateTableRow, Content) == 0x0028);
static_assert(offsetof(FMallPresentCardTemplateTableRow, background) == 0x0010);
static_assert(offsetof(FMallItemTagConfTableRow, Name) == 0x0010);
static_assert(offsetof(FMallItemQualityConfTableRow, quality_RGB) == 0x0010);
static_assert(offsetof(FMallItemHighlightsConfTableRow, Name) == 0x0010);
static_assert(offsetof(FMallItemHighlightsConfTableRow, icon) == 0x0028);
static_assert(offsetof(FTag, tag_desc) == 0x0008);
static_assert(offsetof(FTag, tag_begin_time) == 0x0018);
static_assert(offsetof(FTag, tag_end_time) == 0x0020);
static_assert(offsetof(FMallItemConfTableRow, discount_begin_time) == 0x0050);
static_assert(offsetof(FMallItemConfTableRow, discount_end_time) == 0x0058);
static_assert(offsetof(FMallItemConfTableRow, daily_differential_exchange_count_array) == 0x0068);
static_assert(offsetof(FMallItemConfTableRow, daily_differential_exchange_num_array) == 0x0078);
static_assert(offsetof(FMallItemConfTableRow, pre_begin_time) == 0x0088);
static_assert(offsetof(FMallItemConfTableRow, pre_end_time) == 0x0090);
static_assert(offsetof(FMallItemConfTableRow, begin_time) == 0x0098);
static_assert(offsetof(FMallItemConfTableRow, end_time) == 0x00A0);
static_assert(offsetof(FMallItemConfTableRow, tag_list) == 0x00B0);
static_assert(offsetof(FMallItemConfTableRow, URL) == 0x00E0);
static_assert(offsetof(FMallItemConfTableRow, need_version) == 0x00F0);
static_assert(offsetof(FMallItemConfTableRow, Style) == 0x0128);
static_assert(offsetof(FMallGlobalConfTableRow, ary) == 0x0018);
static_assert(offsetof(FMallDiscountDescConfTableRow, desc) == 0x0018);
static_assert(offsetof(FClassBanner, begin_time) == 0x0000);
static_assert(offsetof(FClassBanner, end_time) == 0x0008);
static_assert(offsetof(FClassBanner, cdn) == 0x0010);
static_assert(offsetof(FMallClassConfTableRow, Name) == 0x0010);
static_assert(offsetof(FMallClassConfTableRow, icon) == 0x0030);
static_assert(offsetof(FMallClassConfTableRow, PageType) == 0x0040);
static_assert(offsetof(FMallClassConfTableRow, begin_time) == 0x0058);
static_assert(offsetof(FMallClassConfTableRow, end_time) == 0x0060);
static_assert(offsetof(FMallClassConfTableRow, banner_list) == 0x0078);
static_assert(offsetof(FMailConfTableRow, Title) == 0x0010);
static_assert(offsetof(FMailConfTableRow, Content) == 0x0028);
static_assert(offsetof(FMailConfTableRow, sender) == 0x0048);
static_assert(offsetof(FMailConfTableRow, sender_head) == 0x0068);
static_assert(offsetof(FMailConfTableRow, expire_date) == 0x0088);
static_assert(offsetof(FMailConfTableRow, account_channel_type) == 0x00A8);
static_assert(offsetof(FMailConfTableRow, client_plat_type) == 0x00B8);
static_assert(offsetof(FMailConfTableRow, client_version_low) == 0x00C8);
static_assert(offsetof(FMailConfTableRow, client_version_up) == 0x00D8);
static_assert(offsetof(FMailConfTableRow, link_dest) == 0x00F0);
static_assert(offsetof(FMailConfTableRow, link_params) == 0x0108);
static_assert(offsetof(FMailConfTableRow, link_text) == 0x0118);
static_assert(offsetof(FMailConfTableRow, awards) == 0x0130);
static_assert(offsetof(FMailConfTableRow, mutil_lang_content_url) == 0x0140);
static_assert(offsetof(FLotteryStepPriceConfTableRow, lottery_step_price) == 0x0010);
static_assert(offsetof(FLootReplaceConfTableRow, sub_scav_items) == 0x0020);
static_assert(offsetof(FLootLimitUserTagTableRow, dont_remove_containers) == 0x0018);
static_assert(offsetof(FLootLimitUserTagTableRow, limit_conditions) == 0x0030);
static_assert(offsetof(FLootDropPoolConfTableRow, Items) == 0x0010);
static_assert(offsetof(FLootDropOperationConfTableRow, Items) == 0x0010);
static_assert(offsetof(FLootDropControlConfTableRow, commonitem_id_array) == 0x0048);
static_assert(offsetof(FLootDropControlConfTableRow, pool_id) == 0x0060);
static_assert(offsetof(FLootDropActivityPoolConfTableRow, Items) == 0x0010);
static_assert(offsetof(FNewActivityLootDropInfoConf, pool_id) == 0x0010);
static_assert(offsetof(FLootDropActivityConfTableRow, Items) == 0x0040);
static_assert(offsetof(FLootDropTableRow, desc) == 0x0010);
static_assert(offsetof(FLootDropTableRow, ItemNum) == 0x0030);
static_assert(offsetof(FLootDropTableRow, SubItemTable) == 0x0040);
static_assert(offsetof(FLootDropTableRow, LootPointWhite) == 0x0068);
static_assert(offsetof(FLootDropTableRow, LootPointBlack) == 0x0078);
static_assert(offsetof(FLootDropTableRow, Describe) == 0x0088);
static_assert(offsetof(FLoginLoadingTipsTableRow, Tip) == 0x0010);
static_assert(offsetof(FLoginLoadingImageTableRow, Path) == 0x0010);
static_assert(offsetof(FLocalizationConfTableRow, EnumName) == 0x0010);
static_assert(offsetof(FLocalizationConfTableRow, LocalizedText) == 0x0028);
static_assert(offsetof(FLobbyRandomVoiceTableRow, voice_path) == 0x0010);
static_assert(offsetof(FLobbyRandomVoiceTableRow, anim_name) == 0x0020);
static_assert(offsetof(FLobbyRandomVoiceTableRow, Content) == 0x0030);
static_assert(offsetof(FLobbyRandomAnimTableRow, anim_name) == 0x0010);
static_assert(offsetof(FLobbyInteractConfTableRow, random_voice_vec) == 0x0010);
static_assert(offsetof(FLobbyInteractConfTableRow, random_anim_vec) == 0x0020);
static_assert(offsetof(FLobbyBankConfTableRow, bankname) == 0x0010);
static_assert(offsetof(FLobbyBGMCfgTableRow, sound_res_name) == 0x0010);
static_assert(offsetof(FLobbyBGMCfgTableRow, song_name) == 0x0028);
static_assert(offsetof(FLobbyBGMCfgTableRow, play_normal_pic) == 0x0038);
static_assert(offsetof(FLobbyBGMCfgTableRow, pause_normal_pic) == 0x0048);
static_assert(offsetof(FLobbyBGMCfgTableRow, play_press_pic) == 0x0058);
static_assert(offsetof(FLobbyBGMCfgTableRow, pause_press_pic) == 0x0068);
static_assert(offsetof(FLobbyBGMCfgTableRow, play_hover_pic) == 0x0078);
static_assert(offsetof(FLobbyBGMCfgTableRow, pause_hover_pic) == 0x0088);
static_assert(offsetof(FLobbyBGMCfgTableRow, begin_time) == 0x00A0);
static_assert(offsetof(FLobbyBGMCfgTableRow, end_time) == 0x00B0);
static_assert(offsetof(FTipItem, Tips) == 0x0000);
static_assert(offsetof(FLoadingTipsTableRow, Tips) == 0x0040);
static_assert(offsetof(FImageRefItem, Path) == 0x0008);
static_assert(offsetof(FLoadingImageTableRow, ImageRef) == 0x0028);
static_assert(offsetof(FLeaderboardDesConfTableRow, titledes) == 0x0010);
static_assert(offsetof(FLeaderboardDesConfTableRow, tipdes) == 0x0028);
static_assert(offsetof(FLeaderboardDesConfTableRow, titlecountdes) == 0x0050);
static_assert(offsetof(FLeaderboardDesConfTableRow, nogetnumdes) == 0x0068);
static_assert(offsetof(FKeyContainerConfTableRow, list_desc) == 0x0020);
static_assert(offsetof(FKeyCabinetConfTableRow, map_id) == 0x0010);
static_assert(offsetof(FKeyCabinetConfTableRow, key_desc) == 0x0028);
static_assert(offsetof(FJumpGotoCfgTableRow, jump_button_name) == 0x0010);
static_assert(offsetof(FJumpGotoCfgTableRow, jump_name) == 0x0028);
static_assert(offsetof(FJumpGotoCfgTableRow, Command) == 0x0040);
static_assert(offsetof(FJumpGotoCfgTableRow, jump_target) == 0x0058);
static_assert(offsetof(FJumpGotoCfgTableRow, Param) == 0x0070);
static_assert(offsetof(FJumpGotoCfgTableRow, open_tips) == 0x0088);
static_assert(offsetof(FJumpGotoCfgTableRow, display_content) == 0x00A8);
static_assert(offsetof(FItemTakeInLimitConfTableRow, item_limit_vec) == 0x0028);
static_assert(offsetof(FItemSortTableRow, icon) == 0x0010);
static_assert(offsetof(FItemShelveConfTableRow, start_time) == 0x0010);
static_assert(offsetof(FItemShelveConfTableRow, end_time) == 0x0018);
static_assert(offsetof(FItemShareConfTableRow, iconUrl) == 0x0010);
static_assert(offsetof(FItemShareConfTableRow, bgUrl) == 0x0020);
static_assert(offsetof(FItemShareConfTableRow, extraDesc) == 0x0038);
static_assert(offsetof(FItemFactoryTableRow, factory_name) == 0x0010);
static_assert(offsetof(FItemFactoryTableRow, IconPath) == 0x0028);
static_assert(offsetof(FItemEffectConfTableRow, exchange_list) == 0x0020);
static_assert(offsetof(FItemConfTableRow, Name) == 0x0010);
static_assert(offsetof(FItemConfTableRow, ShortName) == 0x0028);
static_assert(offsetof(FItemConfTableRow, Describe) == 0x0048);
static_assert(offsetof(FItemConfTableRow, pickup_sound) == 0x0070);
static_assert(offsetof(FItemConfTableRow, use_sound) == 0x0080);
static_assert(offsetof(FItemConfTableRow, drop_sound) == 0x0090);
static_assert(offsetof(FItemConfTableRow, drop_on_ground_sound) == 0x00A0);
static_assert(offsetof(FItemConfTableRow, expire_time) == 0x00C8);
static_assert(offsetof(FItemConfTableRow, compensate) == 0x00D8);
static_assert(offsetof(FItemConfTableRow, RejectSlot) == 0x0100);
static_assert(offsetof(FItemConfTableRow, RejectItems) == 0x0110);
static_assert(offsetof(FItemComponentsIconTableRow, component_name) == 0x0010);
static_assert(offsetof(FItemComponentsIconTableRow, icon_name) == 0x0028);
static_assert(offsetof(FItemComponentsIconTableRow, icon_path) == 0x0038);
static_assert(offsetof(FItemClassifyGroupConfTableRow, Types) == 0x0010);
static_assert(offsetof(FItemCategoryIconPathTableRow, category_name) == 0x0010);
static_assert(offsetof(FItemCategoryIconPathTableRow, icon_path) == 0x0030);
static_assert(offsetof(FIntelligenceLootPointTableRow, loot_data_info_id_list) == 0x0010);
static_assert(offsetof(FIntelligenceLootPointTableRow, announce_text) == 0x0020);
static_assert(offsetof(FIntelligenceTableRow, Type) == 0x0018);
static_assert(offsetof(FIntelligenceTableRow, State) == 0x0030);
static_assert(offsetof(FIntelligenceTableRow, coordinate) == 0x0048);
static_assert(offsetof(FIntelligenceTableRow, desc) == 0x0058);
static_assert(offsetof(FInsureCommonItemConfTableRow, price_list) == 0x0010);
static_assert(offsetof(FInsureCommonAccConfTableRow, price_list) == 0x0010);
static_assert(offsetof(FInsureCombineItemConfTableRow, price_list) == 0x0010);
static_assert(offsetof(FDailyTimeConf, daily_begin_time) == 0x0000);
static_assert(offsetof(FDailyTimeConf, daily_end_time) == 0x0018);
static_assert(offsetof(FInnerGameActConfTableRow, Name) == 0x0010);
static_assert(offsetof(FInnerGameActConfTableRow, begin_time) == 0x0030);
static_assert(offsetof(FInnerGameActConfTableRow, end_time) == 0x0038);
static_assert(offsetof(FInnerGameActConfTableRow, json_param) == 0x0048);
static_assert(offsetof(FInnerGameActConfTableRow, notice) == 0x0060);
static_assert(offsetof(FInnerGameActConfTableRow, des) == 0x0078);
static_assert(offsetof(FInnerGameActConfTableRow, gameplay_related_items) == 0x0090);
static_assert(offsetof(FInnerGameActConfTableRow, weekly_day_vec) == 0x00A0);
static_assert(offsetof(FInnerGameActConfTableRow, daily_time_vec) == 0x00B0);
static_assert(offsetof(FInnerGameActConfTableRow, open_map_mode_vec) == 0x00C0);
static_assert(offsetof(FHelperTypeConfTableRow, TypeName) == 0x0010);
static_assert(offsetof(FHelperConfTableRow, Title) == 0x0018);
static_assert(offsetof(FHelperConfTableRow, desc) == 0x0030);
static_assert(offsetof(FHelpRootTypeConfTableRow, Name) == 0x0010);
static_assert(offsetof(FTabDetailItem, tab_title) == 0x0000);
static_assert(offsetof(FHelpEntryInfoConfTableRow, main_title) == 0x0010);
static_assert(offsetof(FHelpEntryInfoConfTableRow, tab_content) == 0x0028);
static_assert(offsetof(FH5MediaItem, h5BgIcon) == 0x0000);
static_assert(offsetof(FH5MediaItem, h5Url) == 0x0010);
static_assert(offsetof(FHelpDialogContentItem, contentTitle) == 0x0000);
static_assert(offsetof(FHelpDialogContentItem, ContentText) == 0x0020);
static_assert(offsetof(FHelpDialogConfTableRow, Title) == 0x0010);
static_assert(offsetof(FHelpDialogConfTableRow, triggerIds) == 0x0048);
static_assert(offsetof(FHelpDialogConfTableRow, mediaArray) == 0x0058);
static_assert(offsetof(FHelpDialogConfTableRow, h5Media) == 0x0068);
static_assert(offsetof(FHelpDialogConfTableRow, Content) == 0x0078);
static_assert(offsetof(FHealthThresholdTableRow, State) == 0x0010);
static_assert(offsetof(FHealthThresholdTableRow, Content) == 0x0030);
static_assert(offsetof(FHeadIconItemConfTableRow, obtain) == 0x0018);
static_assert(offsetof(FHeadIconItemConfTableRow, can_get_desc) == 0x0038);
static_assert(offsetof(FHeadIconItemConfTableRow, start_time) == 0x0058);
static_assert(offsetof(FHeadIconItemConfTableRow, end_time) == 0x0060);
static_assert(offsetof(FHeadIconItemConfTableRow, activity_info) == 0x0070);
static_assert(offsetof(FHeadIconItemConfTableRow, asset_path) == 0x0080);
static_assert(offsetof(FHeadIconItemConfTableRow, dynamic_asset_path) == 0x0090);
static_assert(offsetof(FHeadIconItemConfTableRow, dynamic_asset_path_prev) == 0x00A0);
static_assert(offsetof(FHeadBoxItemConfTableRow, obtain) == 0x0018);
static_assert(offsetof(FHeadBoxItemConfTableRow, start_time) == 0x0038);
static_assert(offsetof(FHeadBoxItemConfTableRow, end_time) == 0x0040);
static_assert(offsetof(FHardwareBenchmarkScoreTableRow, HardwareName) == 0x0010);
static_assert(offsetof(FGuaranteedUseAttrTableRow, guaranteed_conditions) == 0x0028);
static_assert(offsetof(FGuaranteedPoolConfTableRow, stages) == 0x0018);
static_assert(offsetof(FGuaranteeLimitStrategyTableRow, sub_item_num) == 0x0018);
static_assert(offsetof(FKillPMCGuaranteeAddition, guarantee_pool_id) == 0x0000);
static_assert(offsetof(FKillPMCGuaranteeAddition, guarantee_addval) == 0x0010);
static_assert(offsetof(FGuaranteeKillPMCAddConfTableRow, kill_pmc_guarantee_array) == 0x0038);
static_assert(offsetof(FGuaranteeGenItemTableRow, item_num) == 0x0018);
static_assert(offsetof(FGoldDogTagConfTableRow, bgUrl) == 0x0010);
static_assert(offsetof(FGlobalDailyTimeConf, daily_time) == 0x0000);
static_assert(offsetof(FGlobalConfTableRow, ary) == 0x0018);
static_assert(offsetof(FGlobalConfTableRow, iary) == 0x0028);
static_assert(offsetof(FGlobalConfTableRow, Str) == 0x0038);
static_assert(offsetof(FGlobalConfTableRow, daily_time_vec) == 0x0050);
static_assert(offsetof(FGlobalClientConfTableRow, ary) == 0x0018);
static_assert(offsetof(FGlobalClientConfTableRow, iary) == 0x0028);
static_assert(offsetof(FGlobalClientConfTableRow, Str) == 0x0038);
static_assert(offsetof(FGiftPackageShowItemsConfTableRow, item_id) == 0x0010);
static_assert(offsetof(FGiftPackageShowItemsConfTableRow, is_black) == 0x0020);
static_assert(offsetof(FGiftPackageShowItemsConfTableRow, item_num) == 0x0030);
static_assert(offsetof(FGiftPackageShowItemsConfTableRow, Weight) == 0x0040);
static_assert(offsetof(FGiftPackageEquipConfTableRow, Items) == 0x0010);
static_assert(offsetof(FGiftPackageEquipTableRow, Equip) == 0x0010);
static_assert(offsetof(FGiftGroupDescConfTableRow, Detail) == 0x0010);
static_assert(offsetof(FGiftGroupDescConfTableRow, des) == 0x0028);
static_assert(offsetof(FGestureIconMontageTableRow, GestureIconPath) == 0x0010);
static_assert(offsetof(FGestureIconMontageTableRow, GestureDescription) == 0x0020);
static_assert(offsetof(FGestureIconMontageTableRow, activity_info) == 0x0048);
static_assert(offsetof(FGestureIconMontageTableRow, jump_goto) == 0x0058);
static_assert(offsetof(FGestureIconMontageTableRow, no_source_description) == 0x0068);
static_assert(offsetof(FGestureIconMontageTableRow, can_get_desc) == 0x0088);
static_assert(offsetof(FGShopOnshelfTime, start_time) == 0x0000);
static_assert(offsetof(FGShopOnshelfTime, end_time) == 0x0008);
static_assert(offsetof(FGenericShopTradeConfTableRow, onshelf_time) == 0x0050);
static_assert(offsetof(FGenericShopTagConfTableRow, tag_name) == 0x0010);
static_assert(offsetof(FGenericShopTagConfTableRow, tag_icon) == 0x0028);
static_assert(offsetof(FGenericShopTagConfTableRow, desc) == 0x0040);
static_assert(offsetof(FGenericShopConfTableRow, shop_name) == 0x0010);
static_assert(offsetof(FGenericShopConfTableRow, cost_items) == 0x0028);
static_assert(offsetof(FGenericShopConfTableRow, shop_detail) == 0x0038);
static_assert(offsetof(FGenericShopConfTableRow, red_point_id) == 0x0058);
static_assert(offsetof(FGameSettingDescriptionTableRow, GameSettingName) == 0x0008);
static_assert(offsetof(FGameSettingDescriptionTableRow, Title) == 0x0028);
static_assert(offsetof(FGameSettingDescriptionTableRow, desc) == 0x0040);
static_assert(offsetof(FGameSettingDescriptionTableRow, Img) == 0x0058);
static_assert(offsetof(FGalleryWorkbenchFormulaConfTableRow, products) == 0x0030);
static_assert(offsetof(FGalleryWorkbenchFormulaConfTableRow, cost_items) == 0x0040);
static_assert(offsetof(FGalleryTreasuryValueTitleConfTableRow, title_name) == 0x0010);
static_assert(offsetof(FGalleryTreasuryValueTitleConfTableRow, title_icon) == 0x0028);
static_assert(offsetof(FGalleryTreasuryValueTitleConfTableRow, exclude_items) == 0x0038);
static_assert(offsetof(FGalleryTreasuryUpgradeConfTableRow, cost_items) == 0x0020);
static_assert(offsetof(FGalleryTreasuryUpgradeConfTableRow, bp_path) == 0x0030);
static_assert(offsetof(FGalleryTreasuryStepConfTableRow, text_color) == 0x0010);
static_assert(offsetof(FGalleryTreasuryStepConfTableRow, bg_path) == 0x0020);
static_assert(offsetof(FGalleryTreasuryStepConfTableRow, large_bg_path) == 0x0030);
static_assert(offsetof(FGalleryTreasuryConfTableRow, abs_begin_time) == 0x0010);
static_assert(offsetof(FTreasuryCabinetCombination, cabinet_list) == 0x0000);
static_assert(offsetof(FGalleryTreasuryCameraConfTableRow, show_items) == 0x0010);
static_assert(offsetof(FGalleryTreasuryCameraConfTableRow, accessable_in_level) == 0x0028);
static_assert(offsetof(FGalleryTreasuryCameraConfTableRow, cabinet_combination) == 0x0038);
static_assert(offsetof(FGalleryTopicConfTableRow, Content) == 0x0010);
static_assert(offsetof(FGalleryTopicConfTableRow, reward) == 0x0028);
static_assert(offsetof(FGalleryShowWeaponConfTableRow, kill_num_list) == 0x0010);
static_assert(offsetof(FGalleryShowWeaponConfTableRow, abs_begin_time) == 0x0028);
static_assert(offsetof(FGalleryShowWeaponConfTableRow, abs_end_time) == 0x0030);
static_assert(offsetof(FGalleryPositionConfTableRow, pos_tag) == 0x0010);
static_assert(offsetof(FGalleryPositionConfTableRow, pos_name) == 0x0020);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, trial_begin_time) == 0x0020);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, trial_end_time) == 0x0028);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, abs_begin_time) == 0x0030);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, abs_end_time) == 0x0038);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, lock_desc) == 0x0048);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, audio_event) == 0x0060);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, music_icon_path) == 0x0078);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, music_cd_icon_path) == 0x0088);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, record_position) == 0x0098);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, record_content) == 0x00B8);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, tag_tips) == 0x00D0);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, music_tag) == 0x00E8);
static_assert(offsetof(FGalleryMusicCollectionConfTableRow, need_items) == 0x0108);
static_assert(offsetof(FNeedItemRef, has_items) == 0x0000);
static_assert(offsetof(FNeedItemRef, desc) == 0x0010);
static_assert(offsetof(FGalleryMedalTaskConfTableRow, needitem) == 0x0010);
static_assert(offsetof(FGalleryGlobalConfTableRow, val_list) == 0x0018);
static_assert(offsetof(FGalleryGlobalConfTableRow, str_val_list) == 0x0028);
static_assert(offsetof(FGalleryFurnitureUpgradeConfTableRow, buff_list) == 0x0018);
static_assert(offsetof(FGalleryFurnitureUpgradeConfTableRow, upgrade_targets) == 0x0028);
static_assert(offsetof(FGalleryFurnitureUpgradeConfTableRow, cost_items) == 0x0040);
static_assert(offsetof(FGalleryFurnitureUpgradeConfTableRow, scene_display_list) == 0x0050);
static_assert(offsetof(FGalleryFurnitureUpgradeConfTableRow, scene_names) == 0x0060);
static_assert(offsetof(FGalleryFurnitureUpgradeConfTableRow, bg_image_path) == 0x0070);
static_assert(offsetof(FGalleryFurnitureUpgradeConfTableRow, background_path) == 0x0080);
static_assert(offsetof(FGalleryFurnitureConfTableRow, Tag) == 0x0020);
static_assert(offsetof(FGalleryFurnitureConfTableRow, Name) == 0x0038);
static_assert(offsetof(FGalleryFurnitureConfTableRow, desc) == 0x0050);
static_assert(offsetof(FGalleryFurnitureConfTableRow, unlock_preview_tip) == 0x0068);
static_assert(offsetof(FGalleryFurnitureConfTableRow, unlock_tip) == 0x0080);
static_assert(offsetof(FGalleryFurnitureConfTableRow, icon) == 0x0098);
static_assert(offsetof(FGalleryDogtagBoxConfTableRow, bp_path) == 0x0010);
static_assert(offsetof(FGalleryDogtagBoxConfTableRow, guide_img_path) == 0x0028);
static_assert(offsetof(FDecorateSceneConf, scene_name) == 0x0008);
static_assert(offsetof(FDecorateSceneConf, Slots) == 0x0020);
static_assert(offsetof(FGalleryDecorateTabConfTableRow, Name) == 0x0010);
static_assert(offsetof(FGalleryDecorateTabConfTableRow, scene_list) == 0x0030);
static_assert(offsetof(FGalleryDecorateConfTableRow, abs_begin_time) == 0x0010);
static_assert(offsetof(FGalleryDecorateConfTableRow, abs_end_time) == 0x0018);
static_assert(offsetof(FGalleryDecorateConfTableRow, lock_desc) == 0x0030);
static_assert(offsetof(FGalleryDecorateConfTableRow, need_items) == 0x0050);
static_assert(offsetof(FGalleryCollectionTaskConfTableRow, abs_begin_time) == 0x0020);
static_assert(offsetof(FGalleryCollectionTaskConfTableRow, abs_end_time) == 0x0028);
static_assert(offsetof(FGalleryCollectionTaskConfTableRow, need_items) == 0x0040);
static_assert(offsetof(FGalleryCollectionExchangeConfTableRow, abs_begin_time) == 0x0010);
static_assert(offsetof(FGalleryCollectionExchangeConfTableRow, abs_end_time) == 0x0018);
static_assert(offsetof(FGalleryCollectionExchangeConfTableRow, exchange_items) == 0x0020);
static_assert(offsetof(FGalleryCollectRewardConfTableRow, reward_items) == 0x0018);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, idle_pose_key) == 0x0018);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, dialog_in_pose_key) == 0x0028);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, dialog_out_pose_key) == 0x0038);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, dialog_camera_tag) == 0x0048);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, switch_camera_tag) == 0x0058);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, pos_offset) == 0x0068);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, capsule_size) == 0x0074);
static_assert(offsetof(FGalleryCharacterPoseConfTableRow, rot_offset) == 0x007C);
static_assert(offsetof(FGalleryCharacterDialogConfTableRow, Anim) == 0x0010);
static_assert(offsetof(FGalleryCharacterDialogConfTableRow, Sound) == 0x0028);
static_assert(offsetof(FGalleryCharacterDialogConfTableRow, Content) == 0x0040);
static_assert(offsetof(FGalleryCharacterDialogConfTableRow, Param) == 0x0068);
static_assert(offsetof(FGalleryCharacterConfTableRow, Name) == 0x0010);
static_assert(offsetof(FGalleryCharacterConfTableRow, forbid_types) == 0x0030);
static_assert(offsetof(FGalleryCharacterConfTableRow, topics) == 0x0040);
static_assert(offsetof(FGalleryCharacterConfTableRow, topics_weight) == 0x0050);
static_assert(offsetof(FGalleryCharacterConfTableRow, Bank) == 0x0060);
static_assert(offsetof(FGalleryAvatarPostureConfTableRow, posture_key) == 0x0010);
static_assert(offsetof(FInvList, List) == 0x0000);
static_assert(offsetof(FGachaSpecialPickMontageConf, Montage) == 0x0008);
static_assert(offsetof(FGachaSpecialBetweenMontageConf, Key) == 0x0000);
static_assert(offsetof(FGachaSpecialBetweenMontageConf, Montage) == 0x0018);
static_assert(offsetof(FGachaSpecialChangeMontageConf, Montage) == 0x0008);
static_assert(offsetof(FGachaClientConfTableRow, gacha_level) == 0x0008);
static_assert(offsetof(FGachaClientConfTableRow, seq_audio) == 0x0018);
static_assert(offsetof(FGachaClientConfTableRow, bgm) == 0x0028);
static_assert(offsetof(FGachaClientConfTableRow, special_pick_sound_items) == 0x0038);
static_assert(offsetof(FGachaClientConfTableRow, special_pick_sound_item_events) == 0x0048);
static_assert(offsetof(FGachaClientConfTableRow, montage_list) == 0x0060);
static_assert(offsetof(FGachaClientConfTableRow, sexuality_list) == 0x0070);
static_assert(offsetof(FGachaClientConfTableRow, hood_status_list) == 0x0080);
static_assert(offsetof(FGachaClientConfTableRow, inventory_list) == 0x0090);
static_assert(offsetof(FGachaClientConfTableRow, special_pick_montage) == 0x00A0);
static_assert(offsetof(FGachaClientConfTableRow, special_pick_between_montage) == 0x00B0);
static_assert(offsetof(FGachaClientConfTableRow, special_change_montage) == 0x00C0);
static_assert(offsetof(FFunctionControlCfgTableRow, sys_param) == 0x0010);
static_assert(offsetof(FFunctionControlCfgTableRow, active_platforms) == 0x0028);
static_assert(offsetof(FFunctionControlCfgTableRow, Channel) == 0x0038);
static_assert(offsetof(FFunctionControlCfgTableRow, android_client_version) == 0x0058);
static_assert(offsetof(FFunctionControlCfgTableRow, ios_client_version) == 0x0068);
static_assert(offsetof(FFunctionControlCfgTableRow, open_date) == 0x0098);
static_assert(offsetof(FFunctionControlCfgTableRow, cloe_date) == 0x00A0);
static_assert(offsetof(FFunctionControlCfgTableRow, Tips) == 0x00B0);
static_assert(offsetof(FFunctionControlCfgTableRow, btn_tips) == 0x00C8);
static_assert(offsetof(FFriRecommTagsTableRow, tag_name) == 0x0020);
static_assert(offsetof(FFriRecommTagsTableRow, tag_tip) == 0x0040);
static_assert(offsetof(FFriRecommConfTableRow, reason) == 0x0020);
static_assert(offsetof(FFriRecommConfTableRow, friendPanelDisplay) == 0x0038);
static_assert(offsetof(FFriRecommConfTableRow, battleReulstDisplay) == 0x0050);
static_assert(offsetof(FFriRecommConfTableRow, battleResultDesc) == 0x0068);
static_assert(offsetof(FFriRecommConfTableRow, battleResultDesc_paramTypes) == 0x0080);
static_assert(offsetof(FFriInviteCodeRewardTableRow, reward_list) == 0x0010);
static_assert(offsetof(FFightTaskConfRewardTableRow, playmoderewards) == 0x0010);
static_assert(offsetof(FFactionConfTableRow, faction_npc_pic) == 0x0018);
static_assert(offsetof(FFactionConfTableRow, faction_bg_pic) == 0x0028);
static_assert(offsetof(FFactionConfTableRow, faction_name) == 0x0038);
static_assert(offsetof(FFactionConfTableRow, faction_name0) == 0x0048);
static_assert(offsetof(FFactionConfTableRow, faction_logo_select) == 0x0058);
static_assert(offsetof(FFactionConfTableRow, faction_logo_teamup) == 0x0068);
static_assert(offsetof(FFactionConfTableRow, faction_logo_teaminfo) == 0x0078);
static_assert(offsetof(FactionChoiceItem, faction_dec) == 0x0008);
static_assert(offsetof(FFactionChoiceConfTableRow, pre_task_ids) == 0x0010);
static_assert(offsetof(FFactionChoiceConfTableRow, faction_choice_items) == 0x0020);
static_assert(offsetof(FBlackSocketInfo, SocketName) == 0x0004);
static_assert(offsetof(FExtraSkinConfTableRow, MeshPathGame) == 0x0018);
static_assert(offsetof(FExtraSkinConfTableRow, MeshPathLobby) == 0x0030);
static_assert(offsetof(FExtraSkinConfTableRow, AnimBPPath) == 0x0048);
static_assert(offsetof(FExtraSkinConfTableRow, BoneHiddenPairs) == 0x0060);
static_assert(offsetof(FExtraSkinConfTableRow, BlackSocketList) == 0x0070);
static_assert(offsetof(FExpConstantTableRow, ID) == 0x0008);
static_assert(offsetof(FExpConstantTableRow, ary) == 0x0020);
static_assert(offsetof(FExpConstantTableRow, Str) == 0x0030);
static_assert(offsetof(FEvaluationConfTableRow, show_name) == 0x0010);
static_assert(offsetof(FEvaluationConfTableRow, event_id_array) == 0x0038);
static_assert(offsetof(FEvaluationConfTableRow, event_weight_array) == 0x0048);
static_assert(offsetof(FErrorCodeTableRow, Describe) == 0x0010);
static_assert(offsetof(FEquipmentSkinConfTableRow, MeshPathGame) == 0x0018);
static_assert(offsetof(FEquipmentSkinConfTableRow, MeshPathLobby) == 0x0030);
static_assert(offsetof(FEquipmentSkinConfTableRow, OverrideMaterialsGame) == 0x0048);
static_assert(offsetof(FEquipmentSkinConfTableRow, OverrideMaterialsLobby) == 0x0058);
static_assert(offsetof(FEquipmentSkinConfTableRow, MeshPathGame_Female) == 0x0068);
static_assert(offsetof(FEquipmentSkinConfTableRow, MeshPathLobby_Female) == 0x0080);
static_assert(offsetof(FEquipTemplateConfTableRow, custom_rule) == 0x0020);
static_assert(offsetof(FEquipTemplateConfTableRow, equip_template_list) == 0x0038);
static_assert(offsetof(FEquipSlotConfTableRow, MatchEquipType) == 0x0010);
static_assert(offsetof(FEquipReturnCardConfTableRow, icon_path) == 0x0010);
static_assert(offsetof(FEquipAvatarSetCfgTableRow, avatar_set) == 0x0010);
static_assert(offsetof(FEliteSuiteConfTableRow, page_name) == 0x0010);
static_assert(offsetof(FEliteSuiteConfTableRow, page_icon) == 0x0028);
static_assert(offsetof(FEliteSuiteConfTableRow, set_name) == 0x0048);
static_assert(offsetof(FEliteSuiteConfTableRow, enter_cost_vec) == 0x0060);
static_assert(offsetof(FEliteSuiteConfTableRow, refresh_cost_vec) == 0x0078);
static_assert(offsetof(FDynamicLotteryConfTableRow, lottery_pool_conf) == 0x0040);
static_assert(offsetof(FDropPicShowConfTableRow, pic_path) == 0x0010);
static_assert(offsetof(FDeathDropReplacePoolTableRow, item_ids) == 0x0010);
static_assert(offsetof(FDeathDropReplaceBTableRow, death_drop_replace_pool_infos) == 0x0010);
static_assert(offsetof(FDataPathTableRow, PathName) == 0x0010);
static_assert(offsetof(FCustomizedExchangeRuleConfTableRow, daily_reset_time) == 0x0028);
static_assert(offsetof(FCustomizedExchangeConfTableRow, exchange_item_vec) == 0x0028);
static_assert(offsetof(FCurrencyExchangeConfTableRow, CurrencyName) == 0x0008);
static_assert(offsetof(FCthulhuMediaConfTableRow, Title) == 0x0010);
static_assert(offsetof(FCthulhuMediaConfTableRow, title_desc) == 0x0028);
static_assert(offsetof(FCthulhuMediaConfTableRow, title_icon_path) == 0x0040);
static_assert(offsetof(FCthulhuMediaConfTableRow, media_desc) == 0x0058);
static_assert(offsetof(FCthulhuImageConfTableRow, Title) == 0x0010);
static_assert(offsetof(FCthulhuImageConfTableRow, title_desc) == 0x0028);
static_assert(offsetof(FCthulhuImageConfTableRow, image_path) == 0x0048);
static_assert(offsetof(FCthulhuImageConfTableRow, image_title) == 0x0058);
static_assert(offsetof(FCthulhuImageConfTableRow, image_desc) == 0x0070);
static_assert(offsetof(FCrossOverAwardsConfTableRow, rewardgroup_name) == 0x0018);
static_assert(offsetof(FCrossOverAwardsConfTableRow, rewardgroup_picture) == 0x0030);
static_assert(offsetof(FCrossOverAwardsConfTableRow, awards) == 0x0048);
static_assert(offsetof(FCreditPaneltyConfTableRow, Description) == 0x0010);
static_assert(offsetof(FCreditLevelConfTableRow, panelty) == 0x0018);
static_assert(offsetof(FCreditLevelConfTableRow, desc) == 0x0030);
static_assert(offsetof(FCreditEventConfTableRow, reason) == 0x0010);
static_assert(offsetof(FCreditBehaviorDescConfTableRow, desc) == 0x0010);
static_assert(offsetof(FCreateRoleAvatarShowConfTableRow, avatar_set) == 0x0010);
static_assert(offsetof(FCreateRoleAvatarShowConfTableRow, avatar_set_female) == 0x0020);
static_assert(offsetof(FCreateRoleAvatarConfTableRow, avatar_set) == 0x0010);
static_assert(offsetof(FCreateRoleAvatarConfTableRow, avatar_set_female) == 0x0020);
static_assert(offsetof(FCourtRanksConfTableRow, rank_name) == 0x0010);
static_assert(offsetof(FCourtRanksCommonConfTableRow, Time) == 0x0010);
static_assert(offsetof(FCourtRankTargetTypeConfTableRow, desc) == 0x0010);
static_assert(offsetof(FCourtRankLevelRangeConfTableRow, main_name) == 0x0018);
static_assert(offsetof(FCourtRankLevelRangeConfTableRow, sub_name) == 0x0030);
static_assert(offsetof(FCourtRankLevelRangeConfTableRow, score_desc) == 0x0050);
static_assert(offsetof(FCountryCurrencyExchangeConfTableRow, CurrencyName) == 0x0010);
static_assert(offsetof(FCountryConfTableRow, country_name) == 0x0010);
static_assert(offsetof(FCosBucketConfTableRow, bucket_name) == 0x0010);
static_assert(offsetof(FContextMenuPickUpConfTableRow, PanelType) == 0x0010);
static_assert(offsetof(FContextMenuPickUpConfTableRow, PickUpType) == 0x0020);
static_assert(offsetof(FContextMenuLevel2ConfTableRow, DisplayName) == 0x0010);
static_assert(offsetof(FContextMenuLevel2ConfTableRow, ExecFunc) == 0x0030);
static_assert(offsetof(FContextMenuLevel2ConfTableRow, ItemTypes) == 0x0040);
static_assert(offsetof(FContextMenuLevel2ConfTableRow, PickTypeIds) == 0x0058);
static_assert(offsetof(FContextMenuLevel1ConfTableRow, DisplayName) == 0x0010);
static_assert(offsetof(FContextMenuLevel1ConfTableRow, ExecFunc) == 0x0030);
static_assert(offsetof(FContextMenuLevel1ConfTableRow, ItemTypes) == 0x0040);
static_assert(offsetof(FContextMenuLevel1ConfTableRow, PickTypeIds) == 0x0058);
static_assert(offsetof(FContestBattlePassLevelConfTableRow, award) == 0x0010);
static_assert(offsetof(FContestBattlePassLevelConfTableRow, extra_award) == 0x0020);
static_assert(offsetof(FContainerRuleConfTableRow, black_list) == 0x0010);
static_assert(offsetof(FContainerRuleConfTableRow, white_list) == 0x0020);
static_assert(offsetof(FContainerSizeConfItem, PosX) == 0x0000);
static_assert(offsetof(FContainerSizeConfItem, PosY) == 0x0010);
static_assert(offsetof(FContainerConfTableRow, open_sound) == 0x0020);
static_assert(offsetof(FContainerConfTableRow, close_sound) == 0x0030);
static_assert(offsetof(FContainerConfTableRow, sizes) == 0x0040);
static_assert(offsetof(FConsumablesUseAwardConfTableRow, awards) == 0x0010);
static_assert(offsetof(FConsumablesDetailConfTableRow, energy_recover_desc) == 0x0028);
static_assert(offsetof(FConsumablesDetailConfTableRow, remove_status_vec) == 0x0048);
static_assert(offsetof(FConsumablesDetailConfTableRow, buff_extend_desc) == 0x0058);
static_assert(offsetof(FConsumablesDetailConfTableRow, buff_vec) == 0x0070);
static_assert(offsetof(FConsumablesConfTableRow, RecommandSuppliesPackList) == 0x0010);
static_assert(offsetof(FConsumablesBuffConfTableRow, logic_id) == 0x0010);
static_assert(offsetof(FConsumablesBuffConfTableRow, Name) == 0x0020);
static_assert(offsetof(FConsumablesBuffConfTableRow, icon) == 0x0038);
static_assert(offsetof(FConsumablesBuffConfTableRow, Describe) == 0x0060);
static_assert(offsetof(FCompetitionTeamLogoConfTableRow, logo_cdn) == 0x0010);
static_assert(offsetof(FCompetitionTeamFactionConfTableRow, team_faction) == 0x0010);
static_assert(offsetof(FCompetitionDefaultTeamNameConfTableRow, default_team_name) == 0x0010);
static_assert(offsetof(FCompetitionDefaultTeamNameConfTableRow, team_color) == 0x0028);
static_assert(offsetof(FCommonKVConfTableRow, val_array) == 0x0018);
static_assert(offsetof(FCommonKVConfTableRow, Str) == 0x0028);
static_assert(offsetof(FCommonAffixsConfTableRow, FieldName) == 0x0010);
static_assert(offsetof(FCommonAffixsConfTableRow, DisplayName) == 0x0028);
static_assert(offsetof(FCommonAffixsConfTableRow, AccesoryFormat) == 0x0048);
static_assert(offsetof(FCommonAffixsConfTableRow, WeaponFormat) == 0x0058);
static_assert(offsetof(FCommonAffixsConfTableRow, WeaponUnit) == 0x0068);
static_assert(offsetof(FCommonAffixsConfTableRow, AccesoryUnit) == 0x0080);
static_assert(offsetof(FCommonAffixsConfTableRow, AffixDiscription) == 0x00B0);
static_assert(offsetof(FCommercialSchemeConfTableRow, SchemeConf) == 0x0010);
static_assert(offsetof(FCombatReadinessInitConfTableRow, initializer_list) == 0x0010);
static_assert(offsetof(FCombatReadinessInitConfTableRow, discard_list) == 0x0020);
static_assert(offsetof(FCombatReadinessConfTableRow, recommend_list) == 0x0010);
static_assert(offsetof(FChatShareLanguageTableRow, LanguageKey) == 0x0010);
static_assert(offsetof(FChatShareLanguageTableRow, Languages) == 0x0020);
static_assert(offsetof(FChatDialogBubbleConfTableRow, getMethodDesc) == 0x0010);
static_assert(offsetof(FChatDialogBubbleConfTableRow, start_time) == 0x0030);
static_assert(offsetof(FChatDialogBubbleConfTableRow, end_time) == 0x0038);
static_assert(offsetof(FCarvingShowConfTableRow, MeleeName) == 0x0010);
static_assert(offsetof(FCarvingShowConfTableRow, LevelName) == 0x0028);
static_assert(offsetof(FCarvingShowConfTableRow, DressList) == 0x0038);
static_assert(offsetof(FCardConfTableRow, start_time) == 0x0010);
static_assert(offsetof(FCardConfTableRow, end_time) == 0x0018);
static_assert(offsetof(FCardConfTableRow, asset_id) == 0x0028);
static_assert(offsetof(FCardConfTableRow, get_tip) == 0x0040);
static_assert(offsetof(FCardConfTableRow, can_get_desc) == 0x0060);
static_assert(offsetof(FCardConfTableRow, activity_info) == 0x0080);
static_assert(offsetof(FCGVoiceConfTableRow, cg_name) == 0x0008);
static_assert(offsetof(FCGVoiceConfTableRow, voice_name) == 0x0018);
static_assert(offsetof(FBusinessBaseInfoVec, Name) == 0x0000);
static_assert(offsetof(FBusinessBaseInfoVec, Description) == 0x0018);
static_assert(offsetof(FShowTimeConf, start_time) == 0x0000);
static_assert(offsetof(FShowTimeConf, end_time) == 0x0008);
static_assert(offsetof(FBusinessmanConfTableRow, base_info_vec) == 0x0018);
static_assert(offsetof(FBusinessmanConfTableRow, icon_path) == 0x0028);
static_assert(offsetof(FBusinessmanConfTableRow, refresh_begin_time) == 0x0040);
static_assert(offsetof(FBusinessmanConfTableRow, loyalty) == 0x0060);
static_assert(offsetof(FBusinessmanConfTableRow, item_types) == 0x0070);
static_assert(offsetof(FBusinessmanConfTableRow, show_time_vec) == 0x0090);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, leveldescribe) == 0x0010);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, selltype) == 0x0028);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, selltypeicon) == 0x0040);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, leveltextdes) == 0x0050);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, loyaltyonedata) == 0x0068);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, loyaltytwodata) == 0x0080);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, loyaltythreedata) == 0x0098);
static_assert(offsetof(FBusinessGrateDescribeConfTableRow, loyaltyfourdata) == 0x00B0);
static_assert(offsetof(FBulletDetailConfTableRow, BleedProbabilityDisplay) == 0x0038);
static_assert(offsetof(FBulletDetailConfTableRow, AssembleTag) == 0x0050);
static_assert(offsetof(FBulletDetailConfTableRow, PrimaryHitBones) == 0x0078);
static_assert(offsetof(FBulletDetailConfTableRow, SecondaryHitBones) == 0x0088);
static_assert(offsetof(FBulletConfTableRow, MagazineBulletList) == 0x0010);
static_assert(offsetof(FBugSubmitConfTableRow, battle_question) == 0x0010);
static_assert(offsetof(FBugSubmitConfTableRow, other_question) == 0x0028);
static_assert(offsetof(FBuffIconConfTableRow, buff_name) == 0x0010);
static_assert(offsetof(FBuffIconConfTableRow, icon_path) == 0x0020);
static_assert(offsetof(FBuffIconConfTableRow, inspecticon_path) == 0x0030);
static_assert(offsetof(FBuffIconConfTableRow, display_name) == 0x0040);
static_assert(offsetof(FBuffIconConfTableRow, Describe) == 0x0058);
static_assert(offsetof(FBuffIconConfTableRow, show_type) == 0x0080);
static_assert(offsetof(FBuffIconConfTableRow, part_head) == 0x0090);
static_assert(offsetof(FBuffIconConfTableRow, part_chest) == 0x00A0);
static_assert(offsetof(FBuffIconConfTableRow, part_stomach) == 0x00B0);
static_assert(offsetof(FBuffIconConfTableRow, part_leftarm) == 0x00C0);
static_assert(offsetof(FBuffIconConfTableRow, part_rightarm) == 0x00D0);
static_assert(offsetof(FBuffIconConfTableRow, part_leftleg) == 0x00E0);
static_assert(offsetof(FBuffIconConfTableRow, part_rightleg) == 0x00F0);
static_assert(offsetof(FBrokenImageConfTableRow, FilePath) == 0x0010);
static_assert(offsetof(FBodyPartsTableTableRow, Describe) == 0x0010);
static_assert(offsetof(FBodyDetailsPartsTableTableRow, Describe) == 0x0018);
static_assert(offsetof(FBlackStoreItemRandomConfigTableRow, planItems) == 0x0010);
static_assert(offsetof(FBlackStoreDropListConfigTableRow, Items) == 0x0010);
static_assert(offsetof(FBattleResultTransTemplateConfTableRow, trans_id_list) == 0x0010);
static_assert(offsetof(FBattleResultTransConfTableRow, EventName) == 0x0028);
static_assert(offsetof(FBattleResultTransConfTableRow, Scale) == 0x0048);
static_assert(offsetof(FBattleResultTransConfTableRow, Format) == 0x0060);
static_assert(offsetof(FBattleResultTransConfTableRow, Unit) == 0x0070);
static_assert(offsetof(FBattleResultReferTableRow, Describe) == 0x0010);
static_assert(offsetof(FDescribeArg, arg) == 0x0000);
static_assert(offsetof(FDescribeArg, LocalizationKey) == 0x0018);
static_assert(offsetof(FBattleResultPointEventConfTableRow, EventTypeDes) == 0x0010);
static_assert(offsetof(FBattleResultPointEventConfTableRow, EventTitle) == 0x0028);
static_assert(offsetof(FBattleResultPointEventConfTableRow, DescribeWord) == 0x0040);
static_assert(offsetof(FBattleResultPointEventConfTableRow, DescribeWordArgsList) == 0x0060);
static_assert(offsetof(FBattleResultPointEventConfTableRow, CombinedDescribeWord) == 0x0070);
static_assert(offsetof(FBattleResultPointEventConfTableRow, CombinedDescribeWordArgsList) == 0x0088);
static_assert(offsetof(FBattleResultMapTextureConfTableRow, TexturePath) == 0x0020);
static_assert(offsetof(FBattleResultLootBoxConfTableRow, LootBoxKey) == 0x0010);
static_assert(offsetof(FBattleResultLootBoxConfTableRow, LootBoxName) == 0x0020);
static_assert(offsetof(FBattleResultLoadingTipsTableRow, Tip) == 0x0010);
static_assert(offsetof(FBattleResultLoadingImageTableRow, Path) == 0x0010);
static_assert(offsetof(FBattleResultLoadingImageTableRow, MapName) == 0x0028);
static_assert(offsetof(FBattleResultInjuredRecordTableRow, InjuredRecordDescribe) == 0x0010);
static_assert(offsetof(FBattleResultInjuredRecordTableRow, InjuredFormType) == 0x0028);
static_assert(offsetof(FBattleResultEnemyTipsFuncTableRow, CheckFunc) == 0x0010);
static_assert(offsetof(FBattleResultEnemyTipsFuncTableRow, Params) == 0x0028);
static_assert(offsetof(FBattleResultEnemyTipsFuncTableRow, ParamsType) == 0x0038);
static_assert(offsetof(FBattleResultEnemyTipsTableRow, CheckFuncIds) == 0x0010);
static_assert(offsetof(FBattleResultEnemyTipsTableRow, JudgeResults) == 0x0028);
static_assert(offsetof(FBattleResultEnemyTipsTableRow, Tips) == 0x0038);
static_assert(offsetof(FBattleResultEXPRatioTableRow, Describe) == 0x0010);
static_assert(offsetof(FBattleResultDieTypeTableRow, DetailBodyPart) == 0x0010);
static_assert(offsetof(FBattleResultDieTypeTableRow, BodyPart) == 0x0020);
static_assert(offsetof(FBattleResultDieTypeTableRow, DeathCauserIdList) == 0x0040);
static_assert(offsetof(FBattleResultDieTypeTableRow, ResultTitle) == 0x0050);
static_assert(offsetof(FBattleResultDieTypeTableRow, TipsArray) == 0x0068);
static_assert(offsetof(FBattleResultDieTipsTableRow, Tips) == 0x0010);
static_assert(offsetof(FBattleResultConfTableRow, Describe) == 0x0018);
static_assert(offsetof(FBattleResultConfTableRow, AppendId) == 0x0038);
static_assert(offsetof(FBattleResultConfTableRow, Scale) == 0x0048);
static_assert(offsetof(FBattleResultConfTableRow, Format) == 0x0060);
static_assert(offsetof(FBattleResultConfTableRow, Unit) == 0x0070);
static_assert(offsetof(FBattleResultAreaConfTableRow, AreaName) == 0x0010);
static_assert(offsetof(FBattleResultAppraiseSeasonConfTableRow, appraise_id_list) == 0x0010);
static_assert(offsetof(FAppraiseConditionConf, expression) == 0x0000);
static_assert(offsetof(FBattleResultAppraiseTableRow, AppraiseName) == 0x0010);
static_assert(offsetof(FBattleResultAppraiseTableRow, Describe) == 0x0028);
static_assert(offsetof(FBattleResultAppraiseTableRow, DesWords) == 0x0040);
static_assert(offsetof(FBattleResultAppraiseTableRow, event_id_array) == 0x0058);
static_assert(offsetof(FBattleResultAppraiseTableRow, event_val_array) == 0x0068);
static_assert(offsetof(FBattleResultAppraiseTableRow, ignore_multi_mode_list) == 0x0078);
static_assert(offsetof(FBattleResultAppraiseTableRow, Conditions) == 0x0088);
static_assert(offsetof(FBattleResultAppraiseTableRow, icon) == 0x0098);
static_assert(offsetof(FBattleResultAppraiseTableRow, FacePicMapUnlockIds) == 0x00C0);
static_assert(offsetof(FBattleResultAppraiseTableRow, MagazineShareDesc) == 0x00E0);
static_assert(offsetof(FBattleResultAppraiseTableRow, DataDes) == 0x0100);
static_assert(offsetof(FBattleResultAppraiseTableRow, ShareDescribe) == 0x0118);
static_assert(offsetof(FBattleResultAppraiseTableRow, ShareDesWords) == 0x0130);
static_assert(offsetof(FBattlePassVipShowItem, Type) == 0x0008);
static_assert(offsetof(FBattlePassVipShowItem, unlock_desc) == 0x0028);
static_assert(offsetof(FBattlePassVipShowItem, item_desc) == 0x0040);
static_assert(offsetof(FBattlePassVipShowConfTableRow, award) == 0x0018);
static_assert(offsetof(FBattlePassVipConfTableRow, Name) == 0x0018);
static_assert(offsetof(FBattlePassVipConfTableRow, award) == 0x0038);
static_assert(offsetof(FBattlePassShowTypeTableRow, show_location) == 0x0010);
static_assert(offsetof(FBattlePassShowTypeTableRow, show_rotation) == 0x001C);
static_assert(offsetof(FBattlePassShowTypeTableRow, show_scale) == 0x0028);
static_assert(offsetof(FBattlePassShowTypeTableRow, cell_image) == 0x0038);
static_assert(offsetof(FBattlePassShowTypeTableRow, big_image) == 0x0048);
static_assert(offsetof(FBattlePassShowTypeTableRow, show_tips) == 0x0060);
static_assert(offsetof(FBattlePassShowTypeTableRow, btn_tips) == 0x0078);
static_assert(offsetof(FBattlePassOtherWayTableRow, start_time) == 0x0018);
static_assert(offsetof(FBattlePassOtherWayTableRow, end_time) == 0x0020);
static_assert(offsetof(FBattlePassOtherWayTableRow, desc) == 0x0028);
static_assert(offsetof(FBattlePassOtherWayTableRow, btn_title) == 0x0048);
static_assert(offsetof(FBattlePassLevelConfTableRow, award) == 0x0018);
static_assert(offsetof(FBattlePassLevelConfTableRow, extra_award) == 0x0028);
static_assert(offsetof(FBattlePassLastSeasonAwardConfTableRow, award) == 0x0020);
static_assert(offsetof(FBattlePassLastSeasonAwardConfTableRow, desc) == 0x0030);
static_assert(offsetof(FBattlePassConfTableRow, show_time) == 0x0028);
static_assert(offsetof(FBattlePassConfTableRow, entry_img_cdn_path) == 0x0040);
static_assert(offsetof(FBattlePassConfTableRow, img_cdn_path) == 0x0050);
static_assert(offsetof(FBattlePassConfTableRow, try_wear_list) == 0x0060);
static_assert(offsetof(FBattlePassConfTableRow, first_pop_img_path) == 0x0078);
static_assert(offsetof(FBattlePassConfTableRow, growup_items_desc) == 0x0090);
static_assert(offsetof(FBattlePassAwardItemsConfTableRow, award) == 0x0010);
static_assert(offsetof(FBanTypeConfTableRow, Content) == 0x0010);
static_assert(offsetof(FBanTypeConfTableRow, ban_tips) == 0x0028);
static_assert(offsetof(FBanThrowsconfTableRow, TimeThres) == 0x0028);
static_assert(offsetof(FBanReasonConfTableRow, Content) == 0x0010);
static_assert(offsetof(FBanMatchModeConfTableRow, Content) == 0x0018);
static_assert(offsetof(FBadgeSlotConfTableRow, slot_name) == 0x0010);
static_assert(offsetof(FBadgeSlotConfTableRow, slot_icon) == 0x0030);
static_assert(offsetof(FBadgeConfTableRow, badge_name) == 0x0010);
static_assert(offsetof(FBadgeConfTableRow, activity_info) == 0x0030);
static_assert(offsetof(FBadgeConfTableRow, jump_goto) == 0x0040);
static_assert(offsetof(FBadgeConfTableRow, no_source_description) == 0x0050);
static_assert(offsetof(FBadgeConfTableRow, can_get_desc) == 0x0070);
static_assert(offsetof(FBuffInfo, Value) == 0x0008);
static_assert(offsetof(FAvatarValueShowTableRow, buff_list) == 0x0010);
static_assert(offsetof(FAvatarValueNameTableRow, Name) == 0x0010);
static_assert(offsetof(FAvatarTagCfgTableRow, Name) == 0x0010);
static_assert(offsetof(FAvatarTagCfgTableRow, Describe) == 0x0030);
static_assert(offsetof(FAvatarTabCfgTableRow, sub_part_id) == 0x0018);
static_assert(offsetof(FAvatarTabCfgTableRow, Name) == 0x0028);
static_assert(offsetof(FAvatarTabCfgTableRow, icon) == 0x0038);
static_assert(offsetof(FAvatarSetCfgTableRow, Level) == 0x0010);
static_assert(offsetof(FAvatarSetCfgTableRow, special_tag) == 0x0020);
static_assert(offsetof(FAvatarSetCfgTableRow, avatar_set) == 0x0040);
static_assert(offsetof(FAvatarSetCfgTableRow, avatar_set_extra) == 0x0050);
static_assert(offsetof(FAvatarPartTabFilterItemCfgTableRow, Name) == 0x0010);
static_assert(offsetof(FAvatarFilterGroupConf, Name) == 0x0008);
static_assert(offsetof(FAvatarFilterGroupConf, custom_items_func) == 0x0030);
static_assert(offsetof(FAvatarFilterGroupConf, filter_items) == 0x0048);
static_assert(offsetof(FAvatarPartTabFilterCfgTableRow, Options) == 0x0010);
static_assert(offsetof(FAvatarPartTabCfgTableRow, Name) == 0x0010);
static_assert(offsetof(FAvatarPartTabCfgTableRow, icon) == 0x0020);
static_assert(offsetof(FAvatarItemConfTableRow, conflect_types) == 0x0010);
static_assert(offsetof(FAvatarItemCfgTableRow, jump_goto) == 0x0020);
static_assert(offsetof(FAvatarItemCfgTableRow, no_source_description) == 0x0030);
static_assert(offsetof(FAvatarItemCfgTableRow, can_get_desc) == 0x0050);
static_assert(offsetof(FAvatarItemCfgTableRow, effect_bg_path) == 0x0070);
static_assert(offsetof(FAvatarItemCfgTableRow, activity_info) == 0x0088);
static_assert(offsetof(FAvatarItemCfgTableRow, Tags) == 0x0098);
static_assert(offsetof(FAvatarFactoryCfgTableRow, Name) == 0x0010);
static_assert(offsetof(FAvatarFactoryCfgTableRow, icon) == 0x0020);
static_assert(offsetof(FAvatarFactoryCfgTableRow, desc) == 0x0030);
static_assert(offsetof(FAvatarFactoryCfgTableRow, series) == 0x0040);
static_assert(offsetof(FAvatarCompleteShareConfTableRow, cdn_url) == 0x0010);
static_assert(offsetof(FAuctionTagsTableRow, Name) == 0x0010);
static_assert(offsetof(FAuctionTagsTableRow, icon_path) == 0x0028);
static_assert(offsetof(FAuctionSafeQuestionConfTableRow, symbol) == 0x0010);
static_assert(offsetof(FAuctionMinorTableRow, Name) == 0x0010);
static_assert(offsetof(FAuctionMinorTableRow, Parent) == 0x0030);
static_assert(offsetof(FAuctionMinorTableRow, icon_path) == 0x0048);
static_assert(offsetof(FAuctionMinorTableRow, show_titles) == 0x0060);
static_assert(offsetof(FAuctionMajorTableRow, Name) == 0x0010);
static_assert(offsetof(FAuctionMajorTableRow, icon_path) == 0x0038);
static_assert(offsetof(FAuctionItemTableRow, Parent) == 0x0010);
static_assert(offsetof(FAuctionItemTableRow, weapon_parent) == 0x0020);
static_assert(offsetof(FAuctionItemTableRow, durability_rate) == 0x0030);
static_assert(offsetof(FAuctionItemTableRow, durability_sale_num_rate) == 0x0040);
static_assert(offsetof(FAuctionItemTableRow, begin_time) == 0x0058);
static_assert(offsetof(FAuctionItemTableRow, end_time) == 0x0060);
static_assert(offsetof(FAuctionItemTableRow, sort) == 0x0070);
static_assert(offsetof(FAuctionItemTableRow, Tags) == 0x00C0);
static_assert(offsetof(FAuctionItemTableRow, official_order_calc_params) == 0x00D0);
static_assert(offsetof(FAuctionItemTableRow, replace_order_price_rate) == 0x00F0);
static_assert(offsetof(FAuctionItemTableRow, replace_order_random) == 0x0100);
static_assert(offsetof(FAuctionGetRightsWayTableRow, desc) == 0x0010);
static_assert(offsetof(FAuctionGetRightsWayTableRow, btn_title) == 0x0030);
static_assert(offsetof(FArmorProtectDisplayConfTableRow, protect_part_name) == 0x0010);
static_assert(offsetof(FArmorProtectDisplayConfTableRow, protect_pic) == 0x0030);
static_assert(offsetof(FArmorDetailValueToAttributeTableRow, DetailValueName) == 0x0008);
static_assert(offsetof(FArmorDetailValueToAttributeTableRow, ConvertTargetName) == 0x0020);
static_assert(offsetof(FArmorDetailConfTableRow, armor_protectdisplay) == 0x0018);
static_assert(offsetof(FArmorDetailConfTableRow, ArmorDestructibilityScaleByPart) == 0x0040);
static_assert(offsetof(FArmorDetailConfTableRow, size_ext) == 0x0058);
static_assert(offsetof(FArmorDetailConfTableRow, armor_materialname) == 0x0068);
static_assert(offsetof(FArmorDetailConfTableRow, SoundPick) == 0x00A0);
static_assert(offsetof(FArmorDetailConfTableRow, NoiseReduce) == 0x00B8);
static_assert(offsetof(FArmorDetailConfTableRow, DefenseFlash) == 0x00D0);
static_assert(offsetof(FArmorDetailConfTableRow, DefensePoison) == 0x00E8);
static_assert(offsetof(FArmorDetailConfTableRow, StaticScreenEffectPath) == 0x0120);
static_assert(offsetof(FArmorDetailConfTableRow, MaterialScreenEffectPath) == 0x0130);
static_assert(offsetof(FArmorDetailConfTableRow, AssembleTag) == 0x0148);
static_assert(offsetof(FArmorDetailConfTableRow, SubAssembleTag) == 0x0158);
static_assert(offsetof(FArmorDetailConfTableRow, Sockets) == 0x0178);
static_assert(offsetof(FArmorDetailConfTableRow, ConflictedItemIds) == 0x0188);
static_assert(offsetof(FArmorDetailConfTableRow, IgnoreSoundIndicatorType) == 0x0198);
static_assert(offsetof(FAppearancePresetConfTableRow, Name) == 0x0010);
static_assert(offsetof(FAmmoNumTableRow, full_name) == 0x0018);
static_assert(offsetof(FAmmoNumTableRow, almostfull_name) == 0x0038);
static_assert(offsetof(FAmmoNumTableRow, morethanhalf_name) == 0x0058);
static_assert(offsetof(FAmmoNumTableRow, abouthalf_name) == 0x0078);
static_assert(offsetof(FAmmoNumTableRow, lessthanhalf_name) == 0x0098);
static_assert(offsetof(FAmmoNumTableRow, almostempty_name) == 0x00B8);
static_assert(offsetof(FAmmoNumTableRow, empty_name) == 0x00D8);
static_assert(offsetof(FAllowTakeInItemConfTableRow, item_limit_vec) == 0x0010);
static_assert(offsetof(FAllowTakeInItemConfTableRow, item_out_vec) == 0x0020);
static_assert(offsetof(FAdcodeConfTableRow, Region) == 0x0010);
static_assert(offsetof(FChannelInfo, URL) == 0x0008);
static_assert(offsetof(FActGoodCommentConfTableRow, trigger_task) == 0x0010);
static_assert(offsetof(FActGoodCommentConfTableRow, trigger_task2) == 0x0020);
static_assert(offsetof(FActGoodCommentConfTableRow, channel_infos) == 0x0038);
static_assert(offsetof(FActDialogDetailConfTableRow, Anim) == 0x0010);
static_assert(offsetof(FActDialogDetailConfTableRow, Sound) == 0x0028);
static_assert(offsetof(FActDialogDetailConfTableRow, Content) == 0x0040);
static_assert(offsetof(FActDialogConfTableRow, Title) == 0x0010);
static_assert(offsetof(FActConfigTableRow, Name) == 0x0018);
static_assert(offsetof(FActConfigTableRow, closed_env_id) == 0x0038);
static_assert(offsetof(FActConfigTableRow, open_condition) == 0x0048);
static_assert(offsetof(FActConfigTableRow, tab_name) == 0x0058);
static_assert(offsetof(FActConfigTableRow, tab_cdn) == 0x0070);
static_assert(offsetof(FActConfigTableRow, begin_time) == 0x0098);
static_assert(offsetof(FActConfigTableRow, begin_time_deadline) == 0x00A0);
static_assert(offsetof(FActConfigTableRow, end_time) == 0x00A8);
static_assert(offsetof(FActConfigTableRow, des) == 0x00B8);
static_assert(offsetof(FActConfigTableRow, act_time_des) == 0x00C8);
static_assert(offsetof(FActConfigTableRow, notice) == 0x00D8);
static_assert(offsetof(FActConfigTableRow, json_param) == 0x00E8);
static_assert(offsetof(FActConfigTableRow, reward_list) == 0x00F8);
static_assert(offsetof(FActConfigTableRow, pic) == 0x0108);
static_assert(offsetof(FActConfigTableRow, Jump) == 0x0118);
static_assert(offsetof(FActConfigTableRow, preview_begin_time) == 0x0128);
static_assert(offsetof(FActConfigTableRow, forbidden_account_channel) == 0x0130);
static_assert(offsetof(FActConfigTableRow, forbidden_plat_type) == 0x0140);
static_assert(offsetof(FActConfigTableRow, client_version_low) == 0x0150);
static_assert(offsetof(FActConfigTableRow, client_version_up) == 0x0160);
static_assert(offsetof(FActConfigTableRow, bp_path) == 0x0170);
static_assert(offsetof(FActConfigTableRow, URL) == 0x0180);
static_assert(offsetof(FActConfigTableRow, share_reward_list) == 0x01B8);
static_assert(offsetof(FActConfigTableRow, share_cdn) == 0x01C8);
static_assert(offsetof(FActBankruptConfTableRow, Str) == 0x0018);
static_assert(offsetof(FAchievementConfTableRow, badge_name) == 0x0018);
static_assert(offsetof(FAchievementConfTableRow, badge_desc) == 0x0030);
static_assert(offsetof(FAchievementConfTableRow, task_ids) == 0x0050);
static_assert(offsetof(FAchievementConfTableRow, icon_path) == 0x0060);
static_assert(offsetof(FAchieveTaskConfTableRow, Name) == 0x0010);
static_assert(offsetof(FAchieveTaskConfTableRow, finish_name) == 0x0028);
static_assert(offsetof(FAchieveTaskConfTableRow, desc) == 0x0040);
static_assert(offsetof(FAchieveTaskConfTableRow, finish_desc) == 0x0058);
static_assert(offsetof(FAchieveTaskConfTableRow, sub_tasks) == 0x0080);
static_assert(offsetof(FAchieveBadgeSlotTableRow, slot_name) == 0x0010);
static_assert(offsetof(FAchieveBadgeSlotTableRow, slot_icon) == 0x0028);
static_assert(offsetof(FAccountBanReasonTableRow, AccountBanID) == 0x0008);
static_assert(offsetof(FAccountBanReasonTableRow, AccountBanReason) == 0x0018);
static_assert(offsetof(FAccessoryAvatarSetCfgTableRow, avatar_set) == 0x0010);
static_assert(offsetof(FAccessRepairDurabilityConfTableRow, durability_price_conf) == 0x0010);
static_assert(offsetof(FAreaInfo, AreaID) == 0x0000);
static_assert(offsetof(FAISpawnScavSpawnControllerTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FAISpawnScavSpawnControllerTableRow, Weather) == 0x0028);
static_assert(offsetof(FAISpawnScavSpawnControllerTableRow, ScavWaveInfoArray) == 0x0078);
static_assert(offsetof(FAISpawnScavSpawnControllerTableRow, AreaInfo) == 0x0088);
static_assert(offsetof(FAISpawnScavSpawnControllerTableRow, Reinforcement) == 0x0098);
static_assert(offsetof(FAISpawnPlayerScavConfigTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FAISpawnPlayerScavConfigTableRow, Weather) == 0x0028);
static_assert(offsetof(FAISpawnPlayerScavConfigTableRow, PlayerScavAIIDPool) == 0x0050);
static_assert(offsetof(FAISpawnPlayerScavConfigTableRow, PlayerScavAIEquipPool) == 0x0060);
static_assert(offsetof(FAISpawnPMCSpawnControllerTableRow, AreaInfo) == 0x0030);
static_assert(offsetof(FAISpawnPMCConfigTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FAISpawnPMCConfigTableRow, Weather) == 0x0028);
static_assert(offsetof(FAISpawnPMCConfigTableRow, RankRange) == 0x0060);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCAIIDPool_Rank0) == 0x0070);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCAIIDPool_Rank1) == 0x0080);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCAIIDPool_Rank2) == 0x0090);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCAIEquipPool) == 0x00A0);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCAIEquipmentLimit) == 0x00B0);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCAIIDPool2) == 0x00D0);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCAIEquipPool2) == 0x00E0);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCTeammateAIIDPool) == 0x0110);
static_assert(offsetof(FAISpawnPMCConfigTableRow, PMCTeammateAIEquipPool) == 0x0120);
static_assert(offsetof(FAIPool, ID) == 0x0000);
static_assert(offsetof(FAISpawnByVectorTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FAISpawnByVectorTableRow, Weather) == 0x0028);
static_assert(offsetof(FAISpawnByVectorTableRow, PlanName) == 0x0038);
static_assert(offsetof(FAISpawnByVectorTableRow, AIPool) == 0x0068);
static_assert(offsetof(FTriggerArea, AreaID) == 0x0000);
static_assert(offsetof(FTriggerArea, TriggerEvent) == 0x0010);
static_assert(offsetof(FTriggerArea, FollowArea) == 0x0020);
static_assert(offsetof(FAISpawnBossSpawnControllerTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FAISpawnBossSpawnControllerTableRow, Weather) == 0x0020);
static_assert(offsetof(FAISpawnBossSpawnControllerTableRow, MaxNumber) == 0x0050);
static_assert(offsetof(FAISpawnBossSpawnControllerTableRow, BossArea) == 0x0078);
static_assert(offsetof(FAISpawnAreaInfoTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FAISpawnAreaInfoTableRow, Weather) == 0x0028);
static_assert(offsetof(FAISpawnAreaInfoTableRow, AreaID) == 0x0038);
static_assert(offsetof(FAISpawnAreaInfoTableRow, AIPool) == 0x0058);
static_assert(offsetof(FAISpawnAntiCamperTableRow, AISpawnConfigID) == 0x0010);
static_assert(offsetof(FAISpawnAntiCamperTableRow, Weather) == 0x0028);
