// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFPropsDestruction.BreakableWinBaseActor
/// Size: 0x0328 (808 bytes) (0x000328 - 0x000328) align 8 MaxSize: 0x0328
class ABreakableWinBaseActor : public AStaticMeshActor
{ 
public:
};

/// Struct /Script/MFPropsDestruction.GlassBoxCollisionInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGlassBoxCollisionInfo
{ 
	bool                                               bBroken;                                                    // 0x0000   (0x0001)  
};

/// Class /Script/MFPropsDestruction.GlassBoxComponent
/// Size: 0x0530 (1328 bytes) (0x000518 - 0x000530) align 16 MaxSize: 0x0530
class UGlassBoxComponent : public UBoxComponent
{ 
public:
	int32_t                                            ColorID;                                                    // 0x0518   (0x0004)  
	FGlassBoxCollisionInfo                             GlassBoxCollisionInfo;                                      // 0x051C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x051D   (0x0003)  MISSED
	class UMFGlassCutterComponent*                     CachedGlassCutter;                                          // 0x0520   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0528   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPropsDestruction.GlassBoxComponent.TestHitGlass
	// void TestHitGlass();                                                                                                     // [0x1e39048] Final|Native|Public  
	// Function /Script/MFPropsDestruction.GlassBoxComponent.OnHitGlassOffline
	// void OnHitGlassOffline(FHitResult& Hit);                                                                                 // [0x60ca21c] Final|Native|Public|HasOutParms 
	// Function /Script/MFPropsDestruction.GlassBoxComponent.OnHitGlass
	// void OnHitGlass();                                                                                                       // [0x60ca1a4] Final|Native|Public  
};

/// Struct /Script/MFPropsDestruction.MFGlassCachedImpact
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FMFGlassCachedImpact
{ 
	int32_t                                            ColorID;                                                    // 0x0000   (0x0004)  
	int8_t                                             WeaponType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
};

/// Class /Script/MFPropsDestruction.MFGlassCutterComponent
/// Size: 0x03B0 (944 bytes) (0x0000F8 - 0x0003B0) align 8 MaxSize: 0x03B0
class UMFGlassCutterComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00F8   (0x0008)  MISSED
	TArray<char>                                       MaskIDCache;                                                // 0x0100   (0x0010)  
	TArray<char>                                       ClientMaskIDCache;                                          // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0120   (0x0020)  MISSED
	bool                                               Inited;                                                     // 0x0140   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0141   (0x0003)  MISSED
	int32_t                                            IDMaxCount;                                                 // 0x0144   (0x0004)  
	int32_t                                            TestPartId;                                                 // 0x0148   (0x0004)  
	FVector                                            Scale;                                                      // 0x014C   (0x000C)  
	FVector                                            Dir;                                                        // 0x0158   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0164   (0x0004)  MISSED
	TArray<FVector>                                    Pos;                                                        // 0x0168   (0x0010)  
	TMap<int32_t, int32_t>                             IDTriangleStartIndexMap;                                    // 0x0178   (0x0050)  
	TMap<int32_t, int32_t>                             IDTriangleEndIndexMap;                                      // 0x01C8   (0x0050)  
	bool                                               bPassable : 1;                                              // 0x0218:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x14F];                                     // 0x0219   (0x014F)  MISSED
	TArray<FMFGlassCachedImpact>                       CachedImpacts;                                              // 0x0368   (0x0010)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x0378   (0x0020)  MISSED
	TArray<class UGlassBoxComponent*>                  GlassBoxCompList;                                           // 0x0398   (0x0010)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x03A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MFPropsDestruction.MFGlassCutterComponent.OnReplicate_MaskIDCache
	// void OnReplicate_MaskIDCache();                                                                                          // [0x17a325c] Final|Native|Protected 
	// Function /Script/MFPropsDestruction.MFGlassCutterComponent.OnReplicate_CachedImpacts
	// void OnReplicate_CachedImpacts();                                                                                        // [0x166912c] Final|Native|Protected 
	// Function /Script/MFPropsDestruction.MFGlassCutterComponent.ChangeBehaviour
	// void ChangeBehaviour(int32_t ColorID, FMFGlassImpact& Impact);                                                           // [0x60ca0ac] Final|Native|Public|HasOutParms 
};

/// Struct /Script/MFPropsDestruction.MFGlassImpact
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMFGlassImpact
{ 
	int8_t                                             WeaponType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
	FVector                                            Normal;                                                     // 0x0010   (0x000C)  
};

/// Struct /Script/MFPropsDestruction.GlassHitEffectInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGlassHitEffectInfo
{ 
	TArray<int32_t>                                    IDList;                                                     // 0x0000   (0x0010)  
	TArray<FVector>                                    DirList;                                                    // 0x0010   (0x0010)  
	TArray<int32_t>                                    WeaponTypeList;                                             // 0x0020   (0x0010)  
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ABreakableWinBaseActor) == 0x0328); // 808 bytes (0x000328 - 0x000328)
static_assert(sizeof(FGlassBoxCollisionInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(UGlassBoxComponent) == 0x0530); // 1328 bytes (0x000518 - 0x000530)
static_assert(sizeof(FMFGlassCachedImpact) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMFGlassCutterComponent) == 0x03B0); // 944 bytes (0x0000F8 - 0x0003B0)
static_assert(sizeof(FMFGlassImpact) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FGlassHitEffectInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(UGlassBoxComponent, GlassBoxCollisionInfo) == 0x051C);
static_assert(offsetof(UGlassBoxComponent, CachedGlassCutter) == 0x0520);
static_assert(offsetof(FMFGlassCachedImpact, Location) == 0x0008);
static_assert(offsetof(FMFGlassCachedImpact, Normal) == 0x0014);
static_assert(offsetof(UMFGlassCutterComponent, MaskIDCache) == 0x0100);
static_assert(offsetof(UMFGlassCutterComponent, ClientMaskIDCache) == 0x0110);
static_assert(offsetof(UMFGlassCutterComponent, Scale) == 0x014C);
static_assert(offsetof(UMFGlassCutterComponent, Dir) == 0x0158);
static_assert(offsetof(UMFGlassCutterComponent, Pos) == 0x0168);
static_assert(offsetof(UMFGlassCutterComponent, IDTriangleStartIndexMap) == 0x0178);
static_assert(offsetof(UMFGlassCutterComponent, IDTriangleEndIndexMap) == 0x01C8);
static_assert(offsetof(UMFGlassCutterComponent, CachedImpacts) == 0x0368);
static_assert(offsetof(UMFGlassCutterComponent, GlassBoxCompList) == 0x0398);
static_assert(offsetof(FMFGlassImpact, Location) == 0x0004);
static_assert(offsetof(FMFGlassImpact, Normal) == 0x0010);
static_assert(offsetof(FGlassHitEffectInfo, IDList) == 0x0000);
static_assert(offsetof(FGlassHitEffectInfo, DirList) == 0x0010);
static_assert(offsetof(FGlassHitEffectInfo, WeaponTypeList) == 0x0020);
