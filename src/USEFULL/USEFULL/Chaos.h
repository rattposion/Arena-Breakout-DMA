// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/Chaos.SolverCollisionFilterSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSolverCollisionFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.SolverBreakingFilterSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSolverBreakingFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinVolume;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.SolverTrailingFilterSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSolverTrailingFilterSettings
{ 
	bool                                               FilterEnabled;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinVolume;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/Chaos.ChaosSolverConfiguration
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 4 MaxSize: 0x0068
struct FChaosSolverConfiguration
{ 
	int32_t                                            Iterations;                                                 // 0x0000   (0x0004)  
	int32_t                                            CollisionPairIterations;                                    // 0x0004   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0008   (0x0004)  
	int32_t                                            CollisionPushOutPairIterations;                             // 0x000C   (0x0004)  
	float                                              CollisionMarginFraction;                                    // 0x0010   (0x0004)  
	float                                              CollisionMarginMax;                                         // 0x0014   (0x0004)  
	float                                              CollisionCullDistance;                                      // 0x0018   (0x0004)  
	int32_t                                            JointPairIterations;                                        // 0x001C   (0x0004)  
	int32_t                                            JointPushOutPairIterations;                                 // 0x0020   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0024   (0x0004)  
	SDK_UNDEFINED(1,12) /* EClusterUnionMethod */      __um(ClusterUnionConnectionType);                           // 0x0028   (0x0001)  
	bool                                               bGenerateCollisionData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x002C   (0x0010)  
	bool                                               bGenerateBreakData;                                         // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x0040   (0x0010)  
	bool                                               bGenerateTrailingData;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0054   (0x0010)  
	bool                                               bGenerateContactGraph;                                      // 0x0064   (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/Chaos.SolverCollisionData
/// Size: 0x006C (108 bytes) (0x000000 - 0x00006C) align 4 MaxSize: 0x006C
struct FSolverCollisionData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            AccumulatedImpulse;                                         // 0x000C   (0x000C)  
	FVector                                            Normal;                                                     // 0x0018   (0x000C)  
	FVector                                            Velocity1;                                                  // 0x0024   (0x000C)  
	FVector                                            Velocity2;                                                  // 0x0030   (0x000C)  
	FVector                                            AngularVelocity1;                                           // 0x003C   (0x000C)  
	FVector                                            AngularVelocity2;                                           // 0x0048   (0x000C)  
	float                                              Mass1;                                                      // 0x0054   (0x0004)  
	float                                              Mass2;                                                      // 0x0058   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x005C   (0x0004)  
	int32_t                                            LevelsetIndex;                                              // 0x0060   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x0064   (0x0004)  
	int32_t                                            LevelsetIndexMesh;                                          // 0x0068   (0x0004)  
};

/// Struct /Script/Chaos.SolverBreakingData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FSolverBreakingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)  
	float                                              Mass;                                                       // 0x0024   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x002C   (0x0004)  
};

/// Struct /Script/Chaos.RecordedFrame
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRecordedFrame
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)  
	TArray<int32_t>                                    TransformIndices;                                           // 0x0010   (0x0010)  
	TArray<int32_t>                                    PreviousTransformIndices;                                   // 0x0020   (0x0010)  
	TArray<bool>                                       DisabledFlags;                                              // 0x0030   (0x0010)  
	TArray<FSolverCollisionData>                       Collisions;                                                 // 0x0040   (0x0010)  
	TArray<FSolverBreakingData>                        Breakings;                                                  // 0x0050   (0x0010)  
	SDK_UNDEFINED(80,13) /* TSet<FSolverTrailingData> */ __um(Trailings);                                          // 0x0060   (0x0050)  
	float                                              Timestamp;                                                  // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/Chaos.RecordedTransformTrack
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRecordedTransformTrack
{ 
	TArray<FRecordedFrame>                             Records;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/Chaos.SolverTrailingData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FSolverTrailingData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)  
	float                                              Mass;                                                       // 0x0024   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)  
	int32_t                                            ParticleIndexMesh;                                          // 0x002C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FSolverCollisionFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverBreakingFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverTrailingFilterSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FChaosSolverConfiguration) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FSolverCollisionData) == 0x006C); // 108 bytes (0x000000 - 0x00006C)
static_assert(sizeof(FSolverBreakingData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRecordedFrame) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FRecordedTransformTrack) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSolverTrailingData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FChaosSolverConfiguration, CollisionFilterSettings) == 0x002C);
static_assert(offsetof(FChaosSolverConfiguration, BreakingFilterSettings) == 0x0040);
static_assert(offsetof(FChaosSolverConfiguration, TrailingFilterSettings) == 0x0054);
static_assert(offsetof(FSolverCollisionData, Location) == 0x0000);
static_assert(offsetof(FSolverCollisionData, AccumulatedImpulse) == 0x000C);
static_assert(offsetof(FSolverCollisionData, Normal) == 0x0018);
static_assert(offsetof(FSolverCollisionData, Velocity1) == 0x0024);
static_assert(offsetof(FSolverCollisionData, Velocity2) == 0x0030);
static_assert(offsetof(FSolverCollisionData, AngularVelocity1) == 0x003C);
static_assert(offsetof(FSolverCollisionData, AngularVelocity2) == 0x0048);
static_assert(offsetof(FSolverBreakingData, Location) == 0x0000);
static_assert(offsetof(FSolverBreakingData, Velocity) == 0x000C);
static_assert(offsetof(FSolverBreakingData, AngularVelocity) == 0x0018);
static_assert(offsetof(FRecordedFrame, Transforms) == 0x0000);
static_assert(offsetof(FRecordedFrame, TransformIndices) == 0x0010);
static_assert(offsetof(FRecordedFrame, PreviousTransformIndices) == 0x0020);
static_assert(offsetof(FRecordedFrame, DisabledFlags) == 0x0030);
static_assert(offsetof(FRecordedFrame, Collisions) == 0x0040);
static_assert(offsetof(FRecordedFrame, Breakings) == 0x0050);
static_assert(offsetof(FRecordedTransformTrack, Records) == 0x0000);
static_assert(offsetof(FSolverTrailingData, Location) == 0x0000);
static_assert(offsetof(FSolverTrailingData, Velocity) == 0x000C);
static_assert(offsetof(FSolverTrailingData, AngularVelocity) == 0x0018);
