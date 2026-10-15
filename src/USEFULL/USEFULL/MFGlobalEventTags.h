// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MFGlobalEventParameterTags

#pragma pack(push, 0x1)

/// Struct /Script/MFGlobalEventTags.MFGlobalEventTagSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFGlobalEventTagSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1488) /* EMFGlobalEventTagSourceType */ __um(SourceType);                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UMFGlobalEventTagsList*                      SourceTagList;                                              // 0x0010   (0x0008)  
	class URestrictedMFGlobalEventTagsList*            SourceRestrictedTagList;                                    // 0x0018   (0x0008)  
};

/// Class /Script/MFGlobalEventTags.MFGlobalEventTagsManager
/// Size: 0x0210 (528 bytes) (0x000028 - 0x000210) align 8 MaxSize: 0x0210
class UMFGlobalEventTagsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0028   (0x0098)  MISSED
	TArray<FMFGlobalEventTagSource>                    TagSources;                                                 // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x00D0   (0x00E0)  MISSED
	TArray<class UDataTable*>                          MFGlobalEventTagTables;                                     // 0x01B0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x01C0   (0x0050)  MISSED
};

/// Struct /Script/MFGlobalEventTags.MFGlobalEvent
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FMFGlobalEvent : FTableRowBase
{ 
	FName                                              Tag;                                                        // 0x0008   (0x0008)  
	FString                                            DevComment;                                                 // 0x0010   (0x0010)  
	TArray<FMFGlobalEventParameter>                    Parameters;                                                 // 0x0020   (0x0010)  
};

/// Class /Script/MFGlobalEventTags.MFGlobalEventTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMFGlobalEventTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FMFGlobalEvent>                             MFGlobalEventTagList;                                       // 0x0038   (0x0010)  
};

/// Struct /Script/MFGlobalEventTags.RestrictedMFGlobalEventTagTableRow
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FRestrictedMFGlobalEventTagTableRow : FMFGlobalEvent
{ 
	bool                                               bAllowNonRestrictedChildren;                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/MFGlobalEventTags.RestrictedMFGlobalEventTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class URestrictedMFGlobalEventTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FRestrictedMFGlobalEventTagTableRow>        RestrictedMFGlobalEventTagList;                             // 0x0038   (0x0010)  
};

/// Struct /Script/MFGlobalEventTags.MFGlobalEventTagCategoryRemap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFGlobalEventTagCategoryRemap
{ 
	FString                                            BaseCategory;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    RemapCategories;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/MFGlobalEventTags.MFGlobalEventTagRedirect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMFGlobalEventTagRedirect
{ 
	FName                                              OldTagName;                                                 // 0x0000   (0x0008)  
	FName                                              NewTagName;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/MFGlobalEventTags.RestrictedMFGlobalEventConfigInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRestrictedMFGlobalEventConfigInfo
{ 
	FString                                            RestrictedConfigName;                                       // 0x0000   (0x0010)  
	TArray<FString>                                    Owners;                                                     // 0x0010   (0x0010)  
};

/// Class /Script/MFGlobalEventTags.MFGlobalEventTagsSettings
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMFGlobalEventTagsSettings : public UMFGlobalEventTagsList
{ 
public:
	bool                                               ImportTagsFromConfig;                                       // 0x0048   (0x0001)  
	bool                                               WarnOnInvalidTags;                                          // 0x0049   (0x0001)  
	bool                                               FastReplication;                                            // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x004B   (0x0005)  MISSED
	FString                                            InvalidTagCharacters;                                       // 0x0050   (0x0010)  
	TArray<FMFGlobalEventTagCategoryRemap>             CategoryRemapping;                                          // 0x0060   (0x0010)  
	TArray<FSoftObjectPath>                            MFGlobalEventTagTableList;                                  // 0x0070   (0x0010)  
	TArray<FMFGlobalEventTagRedirect>                  MFGlobalEventTagRedirects;                                  // 0x0080   (0x0010)  
	TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0090   (0x0010)  
	int32_t                                            NumBitsForContainerSize;                                    // 0x00A0   (0x0004)  
	int32_t                                            NetIndexFirstBitSegment;                                    // 0x00A4   (0x0004)  
	TArray<FRestrictedMFGlobalEventConfigInfo>         RestrictedConfigFiles;                                      // 0x00A8   (0x0010)  
};

/// Class /Script/MFGlobalEventTags.MFGlobalEventTagsDeveloperSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UMFGlobalEventTagsDeveloperSettings : public UDeveloperSettings
{ 
public:
	FString                                            DeveloperConfigName;                                        // 0x0038   (0x0010)  
	FName                                              FavoriteTagSource;                                          // 0x0048   (0x0008)  
};

/// Struct /Script/MFGlobalEventTags.MFGlobalEventTagCreationWidgetHelper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMFGlobalEventTagCreationWidgetHelper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MFGlobalEventTags.MFGlobalEventTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMFGlobalEventTag
{ 
	FName                                              TagName;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MFGlobalEventTags.MFGlobalEventTagContainer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFGlobalEventTagContainer
{ 
	TArray<FMFGlobalEventTag>                          MFGlobalEventTags;                                          // 0x0000   (0x0010)  
	TArray<FMFGlobalEventTag>                          ParentTags;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/MFGlobalEventTags.MFGlobalEventTagNode
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMFGlobalEventTagNode
{ 
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0000   (0x0060)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FMFGlobalEventTagSource) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMFGlobalEventTagsManager) == 0x0210); // 528 bytes (0x000028 - 0x000210)
static_assert(sizeof(FMFGlobalEvent) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(UMFGlobalEventTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FRestrictedMFGlobalEventTagTableRow) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(URestrictedMFGlobalEventTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FMFGlobalEventTagCategoryRemap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFGlobalEventTagRedirect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRestrictedMFGlobalEventConfigInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMFGlobalEventTagsSettings) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(UMFGlobalEventTagsDeveloperSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FMFGlobalEventTagCreationWidgetHelper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMFGlobalEventTag) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMFGlobalEventTagContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFGlobalEventTagNode) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(offsetof(FMFGlobalEventTagSource, SourceName) == 0x0000);
static_assert(offsetof(FMFGlobalEventTagSource, SourceTagList) == 0x0010);
static_assert(offsetof(FMFGlobalEventTagSource, SourceRestrictedTagList) == 0x0018);
static_assert(offsetof(UMFGlobalEventTagsManager, TagSources) == 0x00C0);
static_assert(offsetof(UMFGlobalEventTagsManager, MFGlobalEventTagTables) == 0x01B0);
static_assert(offsetof(FMFGlobalEvent, Tag) == 0x0008);
static_assert(offsetof(FMFGlobalEvent, DevComment) == 0x0010);
static_assert(offsetof(FMFGlobalEvent, Parameters) == 0x0020);
static_assert(offsetof(UMFGlobalEventTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(UMFGlobalEventTagsList, MFGlobalEventTagList) == 0x0038);
static_assert(offsetof(URestrictedMFGlobalEventTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(URestrictedMFGlobalEventTagsList, RestrictedMFGlobalEventTagList) == 0x0038);
static_assert(offsetof(FMFGlobalEventTagCategoryRemap, BaseCategory) == 0x0000);
static_assert(offsetof(FMFGlobalEventTagCategoryRemap, RemapCategories) == 0x0010);
static_assert(offsetof(FMFGlobalEventTagRedirect, OldTagName) == 0x0000);
static_assert(offsetof(FMFGlobalEventTagRedirect, NewTagName) == 0x0008);
static_assert(offsetof(FRestrictedMFGlobalEventConfigInfo, RestrictedConfigName) == 0x0000);
static_assert(offsetof(FRestrictedMFGlobalEventConfigInfo, Owners) == 0x0010);
static_assert(offsetof(UMFGlobalEventTagsSettings, InvalidTagCharacters) == 0x0050);
static_assert(offsetof(UMFGlobalEventTagsSettings, CategoryRemapping) == 0x0060);
static_assert(offsetof(UMFGlobalEventTagsSettings, MFGlobalEventTagTableList) == 0x0070);
static_assert(offsetof(UMFGlobalEventTagsSettings, MFGlobalEventTagRedirects) == 0x0080);
static_assert(offsetof(UMFGlobalEventTagsSettings, CommonlyReplicatedTags) == 0x0090);
static_assert(offsetof(UMFGlobalEventTagsSettings, RestrictedConfigFiles) == 0x00A8);
static_assert(offsetof(UMFGlobalEventTagsDeveloperSettings, DeveloperConfigName) == 0x0038);
static_assert(offsetof(UMFGlobalEventTagsDeveloperSettings, FavoriteTagSource) == 0x0048);
static_assert(offsetof(FMFGlobalEventTag, TagName) == 0x0000);
static_assert(offsetof(FMFGlobalEventTagContainer, MFGlobalEventTags) == 0x0000);
static_assert(offsetof(FMFGlobalEventTagContainer, ParentTags) == 0x0010);
