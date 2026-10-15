// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MFBenchmark.MFBenchmarkManager
/// Size: 0x0430 (1072 bytes) (0x000318 - 0x000430) align 8 MaxSize: 0x0430
class AMFBenchmarkManager : public AActor
{ 
public:
	bool                                               bTickTrs;                                                   // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_7[0x117];                                     // 0x0319   (0x0117)  MISSED


	/// Functions
	// Function /Script/MFBenchmark.MFBenchmarkManager.PerformBenchmark
	// void PerformBenchmark();                                                                                                 // [0x50d7010] Final|Native|Public  
};

/// Class /Script/MFBenchmark.MFBenchmarkMarker
/// Size: 0x0348 (840 bytes) (0x000340 - 0x000348) align 8 MaxSize: 0x0348
class AMFBenchmarkMarker : public ANavigationObjectBase
{ 
public:
	FName                                              GamePerfPositionTag;                                        // 0x0340   (0x0008)  
};

/// Class /Script/MFBenchmark.MFMarkerDataWriter
/// Size: 0x0320 (800 bytes) (0x000318 - 0x000320) align 8 MaxSize: 0x0320
class AMFMarkerDataWriter : public AActor
{ 
public:
	class UDataTable*                                  TargetTable;                                                // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/MFBenchmark.MFMarkerDataWriter.WriteTestData
	// void WriteTestData();                                                                                                    // [0x50d7024] Final|Native|Public  
	// Function /Script/MFBenchmark.MFMarkerDataWriter.WriteMarkerData
	// void WriteMarkerData();                                                                                                  // [0x1e39048] Final|Native|Public  
};

/// Struct /Script/MFBenchmark.MFMarkerPosDataTabelData
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FMFMarkerPosDataTabelData : FTableRowBase
{ 
	float                                              PosX;                                                       // 0x0008   (0x0004)  
	float                                              PosY;                                                       // 0x000C   (0x0004)  
	float                                              PosZ;                                                       // 0x0010   (0x0004)  
	float                                              RotX;                                                       // 0x0014   (0x0004)  
	float                                              RotY;                                                       // 0x0018   (0x0004)  
	float                                              RotZ;                                                       // 0x001C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(AMFBenchmarkManager) == 0x0430); // 1072 bytes (0x000318 - 0x000430)
static_assert(sizeof(AMFBenchmarkMarker) == 0x0348); // 840 bytes (0x000340 - 0x000348)
static_assert(sizeof(AMFMarkerDataWriter) == 0x0320); // 800 bytes (0x000318 - 0x000320)
static_assert(sizeof(FMFMarkerPosDataTabelData) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(offsetof(AMFBenchmarkMarker, GamePerfPositionTag) == 0x0340);
static_assert(offsetof(AMFMarkerDataWriter, TargetTable) == 0x0318);
