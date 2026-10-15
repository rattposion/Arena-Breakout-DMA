// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFLandscapeProxyMesh.MFLandscapeProxyMeshActor
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFLandscapeProxyMeshActor : public AActor
{ 
public:
	class UMFLandscapeProxyMeshComponent*              MFLandscapeProxyMeshComponent;                              // 0x0318   (0x0008)  
};

/// Class /Script/MFLandscapeProxyMesh.MFLandscapeProxyMeshComponent
/// Size: 0x0660 (1632 bytes) (0x000520 - 0x000660) align 16 MaxSize: 0x0660
class UMFLandscapeProxyMeshComponent : public UMeshComponent
{ 
public:
	float                                              SkirtZPlus;                                                 // 0x0520   (0x0004)  
	float                                              SkirtLength;                                                // 0x0524   (0x0004)  
	FLightmassPrimitiveSettings                        LightmassSettings;                                          // 0x0528   (0x0018)  
	int32_t                                            LightmapResolutionX;                                        // 0x0540   (0x0004)  
	int32_t                                            LightmapResolutionY;                                        // 0x0544   (0x0004)  
	float                                              ShadowMaskResolutionRatio;                                  // 0x0548   (0x0004)  
	FIntPoint                                          MinID;                                                      // 0x054C   (0x0008)  
	FIntPoint                                          MaxID;                                                      // 0x0554   (0x0008)  
	float                                              SkirtZ;                                                     // 0x055C   (0x0004)  
	FBox                                               ProxyMeshBounds;                                            // 0x0560   (0x001C)  
	int32_t                                            NumVerts;                                                   // 0x057C   (0x0004)  
	int32_t                                            NumTriangles;                                               // 0x0580   (0x0004)  
	FGuid                                              MapBuildDataId;                                             // 0x0584   (0x0010)  
	unsigned char                                      UnknownData00_7[0xCC];                                      // 0x0594   (0x00CC)  MISSED
};

/// Class /Script/MFLandscapeProxyMesh.MFLandscapeProxyMeshConfigActor
/// Size: 0x04B0 (1200 bytes) (0x000318 - 0x0004B0) align 8 MaxSize: 0x04B0
class AMFLandscapeProxyMeshConfigActor : public AActor
{ 
public:
	uint32_t                                           LevelCountXToMerge;                                         // 0x0318   (0x0004)  
	uint32_t                                           LevelCountYToMerge;                                         // 0x031C   (0x0004)  
	uint32_t                                           ExportLOD;                                                  // 0x0320   (0x0004)  
	uint32_t                                           ExportTextureSize;                                          // 0x0324   (0x0004)  
	uint32_t                                           LevelCountX;                                                // 0x0328   (0x0004)  
	uint32_t                                           LevelCountY;                                                // 0x032C   (0x0004)  
	uint32_t                                           MinLevelX;                                                  // 0x0330   (0x0004)  
	uint32_t                                           MinLevelY;                                                  // 0x0334   (0x0004)  
	FBox                                               LandscapeBounds;                                            // 0x0338   (0x001C)  
	float                                              Roughness;                                                  // 0x0354   (0x0004)  
	float                                              Specular;                                                   // 0x0358   (0x0004)  
	uint32_t                                           MergedCountX;                                               // 0x035C   (0x0004)  
	uint32_t                                           MergedCountY;                                               // 0x0360   (0x0004)  
	FIntPoint                                          MinID;                                                      // 0x0364   (0x0008)  
	FIntPoint                                          MaxID;                                                      // 0x036C   (0x0008)  
	float                                              SkirtZPlus;                                                 // 0x0374   (0x0004)  
	float                                              SkirtLength;                                                // 0x0378   (0x0004)  
	float                                              WorldZOffset;                                               // 0x037C   (0x0004)  
	int32_t                                            TotalVertices;                                              // 0x0380   (0x0004)  
	int32_t                                            TotalTriangles;                                             // 0x0384   (0x0004)  
	FString                                            LandscapeProxyMeshLayerName;                                // 0x0388   (0x0010)  
	FString                                            LandscapeLayerName;                                         // 0x0398   (0x0010)  
	float                                              StreamingDistance;                                          // 0x03A8   (0x0004)  
	SDK_UNDEFINED(1,5115) /* TEnumAsByte<TextureGroup> */ __um(TextureGroup);                                      // 0x03AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x03AD   (0x0003)  MISSED
	class UMaterial*                                   ParentMaterial;                                             // 0x03B0   (0x0008)  
	int32_t                                            LightmapResolutionPerTile;                                  // 0x03B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0xF4];                                      // 0x03BC   (0x00F4)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(AMFLandscapeProxyMeshActor) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(UMFLandscapeProxyMeshComponent) == 0x0660); // 1632 bytes (0x000520 - 0x000660)
static_assert(sizeof(AMFLandscapeProxyMeshConfigActor) == 0x04B0); // 1200 bytes (0x000318 - 0x0004B0)
static_assert(offsetof(AMFLandscapeProxyMeshActor, MFLandscapeProxyMeshComponent) == 0x0318);
static_assert(offsetof(UMFLandscapeProxyMeshComponent, LightmassSettings) == 0x0528);
static_assert(offsetof(UMFLandscapeProxyMeshComponent, MinID) == 0x054C);
static_assert(offsetof(UMFLandscapeProxyMeshComponent, MaxID) == 0x0554);
static_assert(offsetof(UMFLandscapeProxyMeshComponent, ProxyMeshBounds) == 0x0560);
static_assert(offsetof(UMFLandscapeProxyMeshComponent, MapBuildDataId) == 0x0584);
static_assert(offsetof(AMFLandscapeProxyMeshConfigActor, LandscapeBounds) == 0x0338);
static_assert(offsetof(AMFLandscapeProxyMeshConfigActor, MinID) == 0x0364);
static_assert(offsetof(AMFLandscapeProxyMeshConfigActor, MaxID) == 0x036C);
static_assert(offsetof(AMFLandscapeProxyMeshConfigActor, LandscapeProxyMeshLayerName) == 0x0388);
static_assert(offsetof(AMFLandscapeProxyMeshConfigActor, LandscapeLayerName) == 0x0398);
static_assert(offsetof(AMFLandscapeProxyMeshConfigActor, ParentMaterial) == 0x03B0);
