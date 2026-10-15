// generated header

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

#pragma pack(push, 0x1)

/// Class /Script/CoverGenerator.CoverGenerator
/// Size: 0x03B8 (952 bytes) (0x000318 - 0x0003B8) align 8 MaxSize: 0x03B8
class ACoverGenerator : public AInfo
{ 
public:
	bool                                               bRegenerateAtBeginPlay;                                     // 0x0318   (0x0001)  
	bool                                               bRegenerateAtNavigationRebuilt;                             // 0x0319   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x031A   (0x0002)  MISSED
	float                                              SegmentLength;                                              // 0x031C   (0x0004)  
	float                                              MaxSegDist;                                                 // 0x0320   (0x0004)  
	float                                              CharHeight;                                                 // 0x0324   (0x0004)  
	float                                              StepDistTrace;                                              // 0x0328   (0x0004)  
	float                                              TraceLength;                                                // 0x032C   (0x0004)  
	float                                              MinSpaceBetweenValidPoints;                                 // 0x0330   (0x0004)  
	float                                              SphereSize;                                                 // 0x0334   (0x0004)  
	float                                              WidthMaxAgent;                                              // 0x0338   (0x0004)  
	float                                              HeightMaxCrouching;                                         // 0x033C   (0x0004)  
	float                                              HeightMaxStanding;                                          // 0x0340   (0x0004)  
	float                                              OffsetWhenLeaningSides;                                     // 0x0344   (0x0004)  
	float                                              OffsetFrontAim;                                             // 0x0348   (0x0004)  
	float                                              EscapeRadius;                                               // 0x034C   (0x0004)  
	int32_t                                            MinCoverNum;                                                // 0x0350   (0x0004)  
	float                                              MinEscapeStep;                                              // 0x0354   (0x0004)  
	class UClass*                                      VolumeClass;                                                // 0x0358   (0x0008)  
	bool                                               bDraw1AllSegmentPointsTested;                               // 0x0360   (0x0001)  
	bool                                               bDraw2SegmentPointsWithinBounds;                            // 0x0361   (0x0001)  
	bool                                               bDraw3SimpleCoverGeometryTest;                              // 0x0362   (0x0001)  
	bool                                               bDraw4SecondPassTracesSides;                                // 0x0363   (0x0001)  
	bool                                               bDraw4SecondPassTracesSidesFrontAndBottom;                  // 0x0364   (0x0001)  
	bool                                               bDraw5SecondPassArrows;                                     // 0x0365   (0x0001)  
	bool                                               DebugDrawAllPoints;                                         // 0x0366   (0x0001)  
	bool                                               DebugDrawAllBusyPoints;                                     // 0x0367   (0x0001)  
	bool                                               DebugDisplayLog;                                            // 0x0368   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0369   (0x0003)  MISSED
	float                                              DebugDistance;                                              // 0x036C   (0x0004)  
	bool                                               bDrawOctreeBounds;                                          // 0x0370   (0x0001)  
	bool                                               bDebugVerts;                                                // 0x0371   (0x0001)  
	bool                                               bDebugEdgeVerts;                                            // 0x0372   (0x0001)  
	bool                                               bDebugPolyVerts;                                            // 0x0373   (0x0001)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0374   (0x000C)  MISSED
	TArray<class UCoverPoint*>                         AllCoverPoints;                                             // 0x0380   (0x0010)  
	TArray<class UCoverPoint*>                         CoverPointsCurrentlyUsed;                                   // 0x0390   (0x0010)  
	TArray<FVector>                                    EscapesPoints;                                              // 0x03A0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x03B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/CoverGenerator.CoverGenerator.ReleaseCover
	// void ReleaseCover(class UCoverPoint* CoverPoint);                                                                        // [0x60923e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CoverGenerator.CoverGenerator.OnNavigationGenerationFinished
	// void OnNavigationGenerationFinished(class ANavigationData* NavData);                                                     // [0x609234c] Final|Native|Private 
	// Function /Script/CoverGenerator.CoverGenerator.OccupyCover
	// bool OccupyCover(class UCoverPoint* CoverPoint, class AController* Controller);                                          // [0x609221c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CoverGenerator.CoverGenerator.IsFreeCoverPoint
	// bool IsFreeCoverPoint(class UCoverPoint* CoverPoint);                                                                    // [0x609217c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CoverGenerator.CoverGenerator.GetCoverWithinBox
	// TArray<UCoverPoint*> GetCoverWithinBox(FBox& BoxIn);                                                                     // [0x6092008] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CoverGenerator.CoverGenerator.GetCoverGenerator
	// class ACoverGenerator* GetCoverGenerator(class UObject* WorldContextObject);                                             // [0x6091f70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CoverGenerator.CoverGenerator.CoverExistWithinBox
	// bool CoverExistWithinBox(FBox& BoxIn);                                                                                   // [0x6091eb8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/CoverGenerator.CoverPoint
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UCoverPoint : public UObject
{ 
public:
	FVector                                            Location;                                                   // 0x0028   (0x000C)  
	FVector                                            _DirectionToWall;                                           // 0x0034   (0x000C)  
	FRotator                                           RotatorXToWall;                                             // 0x0040   (0x000C)  
	bool                                               bLeftCoverStanding;                                         // 0x004C   (0x0001)  
	bool                                               bRightCoverStanding;                                        // 0x004D   (0x0001)  
	bool                                               bLeftCoverCrouched;                                         // 0x004E   (0x0001)  
	bool                                               bRightCoverCrouched;                                        // 0x004F   (0x0001)  
	bool                                               bFrontCoverCrouched;                                        // 0x0050   (0x0001)  
	bool                                               bCrouchedCover;                                             // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0052   (0x0006)  MISSED
	class AController*                                 OccupiedBy;                                                 // 0x0058   (0x0008)  
};

/// Class /Script/CoverGenerator.EnvQueryGenerator_CoverFMemory
/// Size: 0x00C8 (200 bytes) (0x000050 - 0x0000C8) align 8 MaxSize: 0x00C8
class UEnvQueryGenerator_CoverFMemory : public UEnvQueryGenerator
{ 
public:
	FAIDataProviderFloatValue                          SquareExtent;                                               // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          BoxHeight;                                                  // 0x0088   (0x0038)  
	class UClass*                                      GenerateAround;                                             // 0x00C0   (0x0008)  
};

/// Class /Script/CoverGenerator.EnvQueryItemType_Cover
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEnvQueryItemType_Cover : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/CoverGenerator.EnvQueryTest_CoverPointFree
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UEnvQueryTest_CoverPointFree : public UEnvQueryTest
{ 
public:
};

/// Class /Script/CoverGenerator.EnvQueryTest_IsCoverPosition
/// Size: 0x02D8 (728 bytes) (0x0001F8 - 0x0002D8) align 8 MaxSize: 0x02D8
class UEnvQueryTest_IsCoverPosition : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      TraceData;                                                  // 0x01F8   (0x0030)  
	class UClass*                                      Context;                                                    // 0x0228   (0x0008)  
	FAIDataProviderFloatValue                          ContextHorizontalDistanceOffset;                            // 0x0230   (0x0038)  
	FAIDataProviderFloatValue                          ContextVerticalDistanceOffset;                              // 0x0268   (0x0038)  
	FAIDataProviderBoolValue                           DebugData;                                                  // 0x02A0   (0x0038)  
};

/// Class /Script/CoverGenerator.EnvQueryTest_ParallelToCoverDirection
/// Size: 0x0238 (568 bytes) (0x0001F8 - 0x000238) align 8 MaxSize: 0x0238
class UEnvQueryTest_ParallelToCoverDirection : public UEnvQueryTest
{ 
public:
	class UClass*                                      Context;                                                    // 0x01F8   (0x0008)  
	FAIDataProviderFloatValue                          MaxEpsilon;                                                 // 0x0200   (0x0038)  
};

/// Class /Script/CoverGenerator.EnvQueryTest_TraceDistance
/// Size: 0x02A0 (672 bytes) (0x0001F8 - 0x0002A0) align 8 MaxSize: 0x02A0
class UEnvQueryTest_TraceDistance : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      TraceData;                                                  // 0x01F8   (0x0030)  
	class UClass*                                      Context;                                                    // 0x0228   (0x0008)  
	FAIDataProviderFloatValue                          MaxTraceDistance;                                           // 0x0230   (0x0038)  
	FAIDataProviderFloatValue                          VerticalOffset;                                             // 0x0268   (0x0038)  
};

#pragma pack(pop)


static_assert(sizeof(ACoverGenerator) == 0x03B8); // 952 bytes (0x000318 - 0x0003B8)
static_assert(sizeof(UCoverPoint) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UEnvQueryGenerator_CoverFMemory) == 0x00C8); // 200 bytes (0x000050 - 0x0000C8)
static_assert(sizeof(UEnvQueryItemType_Cover) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEnvQueryTest_CoverPointFree) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_IsCoverPosition) == 0x02D8); // 728 bytes (0x0001F8 - 0x0002D8)
static_assert(sizeof(UEnvQueryTest_ParallelToCoverDirection) == 0x0238); // 568 bytes (0x0001F8 - 0x000238)
static_assert(sizeof(UEnvQueryTest_TraceDistance) == 0x02A0); // 672 bytes (0x0001F8 - 0x0002A0)
static_assert(offsetof(ACoverGenerator, VolumeClass) == 0x0358);
static_assert(offsetof(ACoverGenerator, AllCoverPoints) == 0x0380);
static_assert(offsetof(ACoverGenerator, CoverPointsCurrentlyUsed) == 0x0390);
static_assert(offsetof(ACoverGenerator, EscapesPoints) == 0x03A0);
static_assert(offsetof(UCoverPoint, Location) == 0x0028);
static_assert(offsetof(UCoverPoint, _DirectionToWall) == 0x0034);
static_assert(offsetof(UCoverPoint, RotatorXToWall) == 0x0040);
static_assert(offsetof(UCoverPoint, OccupiedBy) == 0x0058);
static_assert(offsetof(UEnvQueryGenerator_CoverFMemory, SquareExtent) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_CoverFMemory, BoxHeight) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_CoverFMemory, GenerateAround) == 0x00C0);
static_assert(offsetof(UEnvQueryTest_IsCoverPosition, TraceData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_IsCoverPosition, Context) == 0x0228);
static_assert(offsetof(UEnvQueryTest_IsCoverPosition, ContextHorizontalDistanceOffset) == 0x0230);
static_assert(offsetof(UEnvQueryTest_IsCoverPosition, ContextVerticalDistanceOffset) == 0x0268);
static_assert(offsetof(UEnvQueryTest_IsCoverPosition, DebugData) == 0x02A0);
static_assert(offsetof(UEnvQueryTest_ParallelToCoverDirection, Context) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_ParallelToCoverDirection, MaxEpsilon) == 0x0200);
static_assert(offsetof(UEnvQueryTest_TraceDistance, TraceData) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_TraceDistance, Context) == 0x0228);
static_assert(offsetof(UEnvQueryTest_TraceDistance, MaxTraceDistance) == 0x0230);
static_assert(offsetof(UEnvQueryTest_TraceDistance, VerticalOffset) == 0x0268);
