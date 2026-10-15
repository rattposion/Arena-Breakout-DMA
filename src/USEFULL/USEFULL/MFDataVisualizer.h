// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFDataVisualizer.MFStatCollectCore
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMFStatCollectCore : public UObject
{ 
public:


	/// Functions
	// Function /Script/MFDataVisualizer.MFStatCollectCore.InitAndCollect
	// void InitAndCollect(class UWorld* InWorld);                                                                              // [0x4de845c] Native|Public        
};

/// Struct /Script/MFDataVisualizer.SceneObjeInfo_Base
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FSceneObjeInfo_Base
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Class /Script/MFDataVisualizer.MFStatisticDataCollectCore
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMFStatisticDataCollectCore : public UObject
{ 
public:
	TArray<FSceneObjeInfo_Base>                        SceneInfoCollect;                                           // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MFDataVisualizer.MFStatisticDataCollectCore.CookAllSceneInfoToSceneObjData
	// void CookAllSceneInfoToSceneObjData(class AActor* ConvertParent);                                                        // [0x4de7f54] Native|Public        
	// Function /Script/MFDataVisualizer.MFStatisticDataCollectCore.CollectSceneInfo
	// void CollectSceneInfo(class UWorld* InWorld);                                                                            // [0x4de845c] Native|Public        
};

/// Struct /Script/MFDataVisualizer.SceneObjInfo_StaticMeshActor
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
struct FSceneObjInfo_StaticMeshActor : FSceneObjeInfo_Base
{ 
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UStaticMesh*                                 MeshResource;                                               // 0x0038   (0x0008)  
	class UMaterialInterface*                          MainMat;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/MFDataVisualizer.MFStatisticDataCollectCore_SMBound
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UMFStatisticDataCollectCore_SMBound : public UMFStatisticDataCollectCore
{ 
public:
	TArray<FSceneObjInfo_StaticMeshActor>              SceneInfoCollect_SM;                                        // 0x0038   (0x0010)  
};

/// Struct /Script/MFDataVisualizer.SceneObjInfo_RenderObj
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FSceneObjInfo_RenderObj : FSceneObjeInfo_Base
{ 
	class UStaticMesh*                                 MeshResource;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/MFDataVisualizer.MFStatisticDataCollectCore_RenderObjCount
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UMFStatisticDataCollectCore_RenderObjCount : public UMFStatisticDataCollectCore
{ 
public:
	TArray<FSceneObjInfo_RenderObj>                    SceneInfoCollect_RenderObj;                                 // 0x0038   (0x0010)  
	bool                                               bIncludeFoliage;                                            // 0x0048   (0x0001)  
	bool                                               bCollectCenterMode;                                         // 0x0049   (0x0001)  
	SDK_UNDEFINED(1,3850) /* ERenderObjType */         __um(RenderObjType);                                        // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Struct /Script/MFDataVisualizer.SceneObjInfo_Foliage
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FSceneObjInfo_Foliage : FSceneObjeInfo_Base
{ 
	class UStaticMesh*                                 MeshResource;                                               // 0x0028   (0x0008)  
};

/// Class /Script/MFDataVisualizer.MFStatisticDataCollectCore_Foliage
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UMFStatisticDataCollectCore_Foliage : public UMFStatisticDataCollectCore
{ 
public:
	TArray<FSceneObjInfo_Foliage>                      SceneInfoCollect_Foliage;                                   // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,3851) /* EFoliageCollectType */    __um(MyCollectType);                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/MFDataVisualizer.MFStatisticDataVisualizeActor
/// Size: 0x03A0 (928 bytes) (0x000318 - 0x0003A0) align 8 MaxSize: 0x03A0
class AMFStatisticDataVisualizeActor : public AActor
{ 
public:
	class UClass*                                      DataCollecterClass;                                         // 0x0318   (0x0008)  
	class UClass*                                      StatCollectClass;                                           // 0x0320   (0x0008)  
	class UStaticMesh*                                 PixelMesh;                                                  // 0x0328   (0x0008)  
	float                                              PixelSize;                                                  // 0x0330   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0334   (0x0004)  MISSED
	class AActor*                                      StartAnchor;                                                // 0x0338   (0x0008)  
	class AActor*                                      EndAnchor;                                                  // 0x0340   (0x0008)  
	float                                              DataUpperLimit;                                             // 0x0348   (0x0004)  
	float                                              DataLowerLimit;                                             // 0x034C   (0x0004)  
	int32_t                                            XCountCache;                                                // 0x0350   (0x0004)  
	int32_t                                            YCountCache;                                                // 0x0354   (0x0004)  
	TArray<float>                                      DataCache;                                                  // 0x0358   (0x0010)  
	TArray<FVector4>                                   DataCache_FourDir;                                          // 0x0368   (0x0010)  
	TArray<class UMaterialInterface*>                  ColorLevelMaterial;                                         // 0x0378   (0x0010)  
	class UClass*                                      MarkerClass;                                                // 0x0388   (0x0008)  
	FString                                            NewLine;                                                    // 0x0390   (0x0010)  


	/// Functions
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.TestToggleFoliage
	// void TestToggleFoliage();                                                                                                // [0x50dbf44] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.PushDataToCell_ForDir
	// void PushDataToCell_ForDir(float Data, FVector Pos, float RotZ);                                                         // [0x50dbdf8] Final|Native|Public|HasDefaults 
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.PushDataToCell
	// void PushDataToCell(float Data, FVector Pos);                                                                            // [0x50dbcf0] Final|Native|Public|HasDefaults 
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.InitDataFromBorder
	// void InitDataFromBorder();                                                                                               // [0x50dbcdc] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.GetXYCountFromBorder
	// void GetXYCountFromBorder(int32_t& XCount, int32_t& YCount);                                                             // [0x50dbbdc] Final|Native|Public|HasOutParms 
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.GetPosFromID
	// FVector GetPosFromID(int32_t ID);                                                                                        // [0x50dbb24] Final|Native|Public|HasDefaults 
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.GetMaterialFromColorLevel
	// class UMaterialInterface* GetMaterialFromColorLevel(int32_t Level);                                                      // [0x50dba60] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.GetIDFromPos
	// int32_t GetIDFromPos(FVector Pos);                                                                                       // [0x50db9a8] Final|Native|Public|HasDefaults 
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.GetColorLevelFromData
	// int32_t GetColorLevelFromData(float Data);                                                                               // [0x50db900] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.GetCellDataFromPos
	// float GetCellDataFromPos(FVector Pos);                                                                                   // [0x50db780] Final|Native|Public|HasDefaults 
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.GetCellData_WithDir_FromPos
	// FVector4 GetCellData_WithDir_FromPos(FVector Pos);                                                                       // [0x50db83c] Final|Native|Public|HasDefaults 
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.FlushVisualBox_WithDir
	// void FlushVisualBox_WithDir();                                                                                           // [0x50db76c] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.FlushVisualBox
	// void FlushVisualBox();                                                                                                   // [0x50db758] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.FillDataFromSceneObj
	// void FillDataFromSceneObj();                                                                                             // [0x50db744] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.FillAreaWithMarker
	// void FillAreaWithMarker();                                                                                               // [0x50db730] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.ExportDataPoints
	// void ExportDataPoints();                                                                                                 // [0x50db71c] Final|Native|Public  
	// Function /Script/MFDataVisualizer.MFStatisticDataVisualizeActor.CollectStatData
	// void CollectStatData();                                                                                                  // [0x50db708] Final|Native|Public  
};

#pragma pack(pop)


static_assert(sizeof(UMFStatCollectCore) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSceneObjeInfo_Base) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMFStatisticDataCollectCore) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FSceneObjInfo_StaticMeshActor) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UMFStatisticDataCollectCore_SMBound) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FSceneObjInfo_RenderObj) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMFStatisticDataCollectCore_RenderObjCount) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FSceneObjInfo_Foliage) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMFStatisticDataCollectCore_Foliage) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(AMFStatisticDataVisualizeActor) == 0x03A0); // 928 bytes (0x000318 - 0x0003A0)
static_assert(offsetof(UMFStatisticDataCollectCore, SceneInfoCollect) == 0x0028);
static_assert(offsetof(FSceneObjInfo_StaticMeshActor, MeshResource) == 0x0038);
static_assert(offsetof(FSceneObjInfo_StaticMeshActor, MainMat) == 0x0040);
static_assert(offsetof(UMFStatisticDataCollectCore_SMBound, SceneInfoCollect_SM) == 0x0038);
static_assert(offsetof(FSceneObjInfo_RenderObj, MeshResource) == 0x0028);
static_assert(offsetof(UMFStatisticDataCollectCore_RenderObjCount, SceneInfoCollect_RenderObj) == 0x0038);
static_assert(offsetof(FSceneObjInfo_Foliage, MeshResource) == 0x0028);
static_assert(offsetof(UMFStatisticDataCollectCore_Foliage, SceneInfoCollect_Foliage) == 0x0038);
static_assert(offsetof(AMFStatisticDataVisualizeActor, DataCollecterClass) == 0x0318);
static_assert(offsetof(AMFStatisticDataVisualizeActor, StatCollectClass) == 0x0320);
static_assert(offsetof(AMFStatisticDataVisualizeActor, PixelMesh) == 0x0328);
static_assert(offsetof(AMFStatisticDataVisualizeActor, StartAnchor) == 0x0338);
static_assert(offsetof(AMFStatisticDataVisualizeActor, EndAnchor) == 0x0340);
static_assert(offsetof(AMFStatisticDataVisualizeActor, DataCache) == 0x0358);
static_assert(offsetof(AMFStatisticDataVisualizeActor, DataCache_FourDir) == 0x0368);
static_assert(offsetof(AMFStatisticDataVisualizeActor, ColorLevelMaterial) == 0x0378);
static_assert(offsetof(AMFStatisticDataVisualizeActor, MarkerClass) == 0x0388);
static_assert(offsetof(AMFStatisticDataVisualizeActor, NewLine) == 0x0390);
