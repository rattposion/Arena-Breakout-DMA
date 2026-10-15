// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FalconPrefabRuntime.FalconPrefabActor
/// Size: 0x03D0 (976 bytes) (0x000318 - 0x0003D0) align 8 MaxSize: 0x03D0
class AFalconPrefabActor : public AActor
{ 
public:
	class UFalconPrefabComponent*                      FalconPrefabComponent;                                      // 0x0318   (0x0008)  
	bool                                               bUnlinkChild;                                               // 0x0320   (0x0001)  
	bool                                               bSupportVertexColor;                                        // 0x0321   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0322   (0x0006)  MISSED
	TWeakObjectPtr<class UWorld*>                      ExportLevel;                                                // 0x0328   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0330   (0x0020)  MISSED
	TLazyObjectPtr<class AActor*>                      SnapTargetActor;                                            // 0x0350   (0x001C)  
	FVector                                            BoundMax;                                                   // 0x036C   (0x000C)  
	FVector                                            BoundMin;                                                   // 0x0378   (0x000C)  
	bool                                               bShowDir;                                                   // 0x0384   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0385   (0x0003)  MISSED
	FVector                                            ArrowLoc;                                                   // 0x0388   (0x000C)  
	FVector                                            ArrowDir;                                                   // 0x0394   (0x000C)  
	float                                              ArrowLength;                                                // 0x03A0   (0x0004)  
	FGuid                                              LastUpdateID;                                               // 0x03A4   (0x0010)  
	int32_t                                            Seed;                                                       // 0x03B4   (0x0004)  
	bool                                               bDirty;                                                     // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x03B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,4834) /* TArray<TWeakObjectPtr<AActor*>> */ __um(ChildrenActors);                             // 0x03C0   (0x0010)  
};

/// Class /Script/FalconPrefabRuntime.FalconPrefabComponent
/// Size: 0x0540 (1344 bytes) (0x000518 - 0x000540) align 16 MaxSize: 0x0540
class UFalconPrefabComponent : public UBoxComponent
{ 
public:
	TWeakObjectPtr<class UObject*>                     PrefabAssetInterface;                                       // 0x0518   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0520   (0x0020)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AFalconPrefabActor) == 0x03D0); // 976 bytes (0x000318 - 0x0003D0)
static_assert(sizeof(UFalconPrefabComponent) == 0x0540); // 1344 bytes (0x000518 - 0x000540)
static_assert(offsetof(AFalconPrefabActor, FalconPrefabComponent) == 0x0318);
static_assert(offsetof(AFalconPrefabActor, ExportLevel) == 0x0328);
static_assert(offsetof(AFalconPrefabActor, SnapTargetActor) == 0x0350);
static_assert(offsetof(AFalconPrefabActor, BoundMax) == 0x036C);
static_assert(offsetof(AFalconPrefabActor, BoundMin) == 0x0378);
static_assert(offsetof(AFalconPrefabActor, ArrowLoc) == 0x0388);
static_assert(offsetof(AFalconPrefabActor, ArrowDir) == 0x0394);
static_assert(offsetof(AFalconPrefabActor, LastUpdateID) == 0x03A4);
static_assert(offsetof(UFalconPrefabComponent, PrefabAssetInterface) == 0x0518);
