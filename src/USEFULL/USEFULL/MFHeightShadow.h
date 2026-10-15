// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFHeightShadow.MFHeightShadowComponent
/// Size: 0x0290 (656 bytes) (0x000270 - 0x000290) align 16 MaxSize: 0x0290
class UMFHeightShadowComponent : public USceneComponent
{ 
public:
	TArray<class UTexture2D*>                          HeightmapTexture;                                           // 0x0270   (0x0010)  
	bool                                               bShowVisualizationBox;                                      // 0x0280   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	class UBoxComponent*                               BoxComponent;                                               // 0x0288   (0x0008)  
};

/// Class /Script/MFHeightShadow.MFHeightShadow
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFHeightShadow : public AActor
{ 
public:
	class UMFHeightShadowComponent*                    Component;                                                  // 0x0318   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UMFHeightShadowComponent) == 0x0290); // 656 bytes (0x000270 - 0x000290)
static_assert(sizeof(AMFHeightShadow) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(offsetof(UMFHeightShadowComponent, HeightmapTexture) == 0x0270);
static_assert(offsetof(UMFHeightShadowComponent, BoxComponent) == 0x0288);
static_assert(offsetof(AMFHeightShadow, Component) == 0x0318);
