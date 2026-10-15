// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFGlobalEventParameterTagSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,1487) /* EMFGlobalEventParameterTagSourceType */ __um(SourceType);                             // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UMFGlobalEventParameterTagsList*             SourceTagList;                                              // 0x0010   (0x0008)  
	class URestrictedMFGlobalEventParameterTagsList*   SourceRestrictedTagList;                                    // 0x0018   (0x0008)  
};

/// Class /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagsManager
/// Size: 0x0210 (528 bytes) (0x000028 - 0x000210) align 8 MaxSize: 0x0210
class UMFGlobalEventParameterTagsManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0028   (0x0098)  MISSED
	TArray<FMFGlobalEventParameterTagSource>           TagSources;                                                 // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x00D0   (0x00E0)  MISSED
	TArray<class UDataTable*>                          MFGlobalEventParameterTagTables;                            // 0x01B0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x01C0   (0x0050)  MISSED
};

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameter
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FMFGlobalEventParameter : FTableRowBase
{ 
	FName                                              Tag;                                                        // 0x0008   (0x0008)  
	FString                                            DevComment;                                                 // 0x0010   (0x0010)  
	FName                                              PropertyType;                                               // 0x0020   (0x0008)  
};

/// Class /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UMFGlobalEventParameterTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FMFGlobalEventParameter>                    MFGlobalEventParameterTagList;                              // 0x0038   (0x0010)  
};

/// Struct /Script/MFGlobalEventParameterTags.RestrictedMFGlobalEventParameterTagTableRow
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FRestrictedMFGlobalEventParameterTagTableRow : FMFGlobalEventParameter
{ 
	bool                                               bAllowNonRestrictedChildren;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/MFGlobalEventParameterTags.RestrictedMFGlobalEventParameterTagsList
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class URestrictedMFGlobalEventParameterTagsList : public UObject
{ 
public:
	FString                                            ConfigFileName;                                             // 0x0028   (0x0010)  
	TArray<FRestrictedMFGlobalEventParameterTagTableRow> RestrictedMFGlobalEventParameterTagList;                  // 0x0038   (0x0010)  
};

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagCategoryRemap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFGlobalEventParameterTagCategoryRemap
{ 
	FString                                            BaseCategory;                                               // 0x0000   (0x0010)  
	TArray<FString>                                    RemapCategories;                                            // 0x0010   (0x0010)  
};

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagRedirect
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMFGlobalEventParameterTagRedirect
{ 
	FName                                              OldTagName;                                                 // 0x0000   (0x0008)  
	FName                                              NewTagName;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/MFGlobalEventParameterTags.RestrictedMFGlobalEventParameterConfigInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRestrictedMFGlobalEventParameterConfigInfo
{ 
	FString                                            RestrictedConfigName;                                       // 0x0000   (0x0010)  
	TArray<FString>                                    Owners;                                                     // 0x0010   (0x0010)  
};

/// Class /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagsSettings
/// Size: 0x00B8 (184 bytes) (0x000048 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMFGlobalEventParameterTagsSettings : public UMFGlobalEventParameterTagsList
{ 
public:
	bool                                               ImportTagsFromConfig;                                       // 0x0048   (0x0001)  
	bool                                               WarnOnInvalidTags;                                          // 0x0049   (0x0001)  
	bool                                               FastReplication;                                            // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x004B   (0x0005)  MISSED
	FString                                            InvalidTagCharacters;                                       // 0x0050   (0x0010)  
	TArray<FMFGlobalEventParameterTagCategoryRemap>    CategoryRemapping;                                          // 0x0060   (0x0010)  
	TArray<FSoftObjectPath>                            MFGlobalEventParameterTagTableList;                         // 0x0070   (0x0010)  
	TArray<FMFGlobalEventParameterTagRedirect>         MFGlobalEventParameterTagRedirects;                         // 0x0080   (0x0010)  
	TArray<FName>                                      CommonlyReplicatedTags;                                     // 0x0090   (0x0010)  
	int32_t                                            NumBitsForContainerSize;                                    // 0x00A0   (0x0004)  
	int32_t                                            NetIndexFirstBitSegment;                                    // 0x00A4   (0x0004)  
	TArray<FRestrictedMFGlobalEventParameterConfigInfo> RestrictedConfigFiles;                                     // 0x00A8   (0x0010)  
};

/// Class /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagsDeveloperSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UMFGlobalEventParameterTagsDeveloperSettings : public UDeveloperSettings
{ 
public:
	FString                                            DeveloperConfigName;                                        // 0x0038   (0x0010)  
	FName                                              FavoriteTagSource;                                          // 0x0048   (0x0008)  
};

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagCreationWidgetHelper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMFGlobalEventParameterTagCreationWidgetHelper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMFGlobalEventParameterTag
{ 
	FName                                              TagName;                                                    // 0x0000   (0x0008)  
};

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagContainer
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMFGlobalEventParameterTagContainer
{ 
	TArray<FMFGlobalEventParameterTag>                 MFGlobalEventParameterTags;                                 // 0x0000   (0x0010)  
	TArray<FMFGlobalEventParameterTag>                 ParentTags;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/MFGlobalEventParameterTags.MFGlobalEventParameterTagNode
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMFGlobalEventParameterTagNode
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FMFGlobalEventParameterTagSource) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMFGlobalEventParameterTagsManager) == 0x0210); // 528 bytes (0x000028 - 0x000210)
static_assert(sizeof(FMFGlobalEventParameter) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(UMFGlobalEventParameterTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FRestrictedMFGlobalEventParameterTagTableRow) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(URestrictedMFGlobalEventParameterTagsList) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FMFGlobalEventParameterTagCategoryRemap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFGlobalEventParameterTagRedirect) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRestrictedMFGlobalEventParameterConfigInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMFGlobalEventParameterTagsSettings) == 0x00B8); // 184 bytes (0x000048 - 0x0000B8)
static_assert(sizeof(UMFGlobalEventParameterTagsDeveloperSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FMFGlobalEventParameterTagCreationWidgetHelper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMFGlobalEventParameterTag) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMFGlobalEventParameterTagContainer) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMFGlobalEventParameterTagNode) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(offsetof(FMFGlobalEventParameterTagSource, SourceName) == 0x0000);
static_assert(offsetof(FMFGlobalEventParameterTagSource, SourceTagList) == 0x0010);
static_assert(offsetof(FMFGlobalEventParameterTagSource, SourceRestrictedTagList) == 0x0018);
static_assert(offsetof(UMFGlobalEventParameterTagsManager, TagSources) == 0x00C0);
static_assert(offsetof(UMFGlobalEventParameterTagsManager, MFGlobalEventParameterTagTables) == 0x01B0);
static_assert(offsetof(FMFGlobalEventParameter, Tag) == 0x0008);
static_assert(offsetof(FMFGlobalEventParameter, DevComment) == 0x0010);
static_assert(offsetof(FMFGlobalEventParameter, PropertyType) == 0x0020);
static_assert(offsetof(UMFGlobalEventParameterTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(UMFGlobalEventParameterTagsList, MFGlobalEventParameterTagList) == 0x0038);
static_assert(offsetof(URestrictedMFGlobalEventParameterTagsList, ConfigFileName) == 0x0028);
static_assert(offsetof(URestrictedMFGlobalEventParameterTagsList, RestrictedMFGlobalEventParameterTagList) == 0x0038);
static_assert(offsetof(FMFGlobalEventParameterTagCategoryRemap, BaseCategory) == 0x0000);
static_assert(offsetof(FMFGlobalEventParameterTagCategoryRemap, RemapCategories) == 0x0010);
static_assert(offsetof(FMFGlobalEventParameterTagRedirect, OldTagName) == 0x0000);
static_assert(offsetof(FMFGlobalEventParameterTagRedirect, NewTagName) == 0x0008);
static_assert(offsetof(FRestrictedMFGlobalEventParameterConfigInfo, RestrictedConfigName) == 0x0000);
static_assert(offsetof(FRestrictedMFGlobalEventParameterConfigInfo, Owners) == 0x0010);
static_assert(offsetof(UMFGlobalEventParameterTagsSettings, InvalidTagCharacters) == 0x0050);
static_assert(offsetof(UMFGlobalEventParameterTagsSettings, CategoryRemapping) == 0x0060);
static_assert(offsetof(UMFGlobalEventParameterTagsSettings, MFGlobalEventParameterTagTableList) == 0x0070);
static_assert(offsetof(UMFGlobalEventParameterTagsSettings, MFGlobalEventParameterTagRedirects) == 0x0080);
static_assert(offsetof(UMFGlobalEventParameterTagsSettings, CommonlyReplicatedTags) == 0x0090);
static_assert(offsetof(UMFGlobalEventParameterTagsSettings, RestrictedConfigFiles) == 0x00A8);
static_assert(offsetof(UMFGlobalEventParameterTagsDeveloperSettings, DeveloperConfigName) == 0x0038);
static_assert(offsetof(UMFGlobalEventParameterTagsDeveloperSettings, FavoriteTagSource) == 0x0048);
static_assert(offsetof(FMFGlobalEventParameterTag, TagName) == 0x0000);
static_assert(offsetof(FMFGlobalEventParameterTagContainer, MFGlobalEventParameterTags) == 0x0000);
static_assert(offsetof(FMFGlobalEventParameterTagContainer, ParentTags) == 0x0010);
