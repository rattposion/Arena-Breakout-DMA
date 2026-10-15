// generated header

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/KawaiiPhysics.CollisionLimitBase
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0058
struct FCollisionLimitBase
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0010)  
	FVector                                            OffsetLocation;                                             // 0x0010   (0x000C)  
	FRotator                                           OffsetRotation;                                             // 0x001C   (0x000C)  
	FVector                                            Location;                                                   // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Rotation;                                                   // 0x0040   (0x0010)  
	bool                                               bEnable;                                                    // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimit
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 16 MaxSize: 0x0060
struct FSphericalLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0058   (0x0004)  
	SDK_UNDEFINED(1,1473) /* ESphericalLimitType */    __um(LimitType);                                            // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x005D   (0x0003)  MISSED
};

/// Struct /Script/KawaiiPhysics.CapsuleLimit
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 16 MaxSize: 0x0060
struct FCapsuleLimit : FCollisionLimitBase
{ 
	float                                              Radius;                                                     // 0x0058   (0x0004)  
	float                                              Length;                                                     // 0x005C   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.PlanarLimit
/// Size: 0x0090 (144 bytes) (0x000058 - 0x000090) align 16 MaxSize: 0x0090
struct FPlanarLimit : FCollisionLimitBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0058   (0x0008)  MISSED
	FPlane                                             Plane;                                                      // 0x0060   (0x0010)  
	TArray<int32_t>                                    LimitIndexs;                                                // 0x0070   (0x0010)  
	bool                                               DebugVisible;                                               // 0x0080   (0x0001)  
	bool                                               DebugEnable;                                                // 0x0081   (0x0001)  
	bool                                               CompareFront;                                               // 0x0082   (0x0001)  
	unsigned char                                      UnknownData01_7[0xD];                                       // 0x0083   (0x000D)  MISSED
};

/// Class /Script/KawaiiPhysics.KawaiiPhysicsLimitsDataAsset
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UKawaiiPhysicsLimitsDataAsset : public UDataAsset
{ 
public:
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x0030   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0040   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0050   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FKawaiiPhysicsSettings
{ 
	float                                              Damping;                                                    // 0x0000   (0x0004)  
	float                                              WorldDampingLocation;                                       // 0x0004   (0x0004)  
	float                                              WorldDampingRotation;                                       // 0x0008   (0x0004)  
	float                                              Stiffness;                                                  // 0x000C   (0x0004)  
	float                                              Radius;                                                     // 0x0010   (0x0004)  
	float                                              LimitAngle;                                                 // 0x0014   (0x0004)  
};

/// Struct /Script/KawaiiPhysics.BoneConstrain_ConstrainConfig
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FBoneConstrain_ConstrainConfig
{ 
	FBoneReference                                     DriverBone;                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,1474) /* EBoneConstrainType */     __um(ConstrainType);                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0014   (0x0004)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x0018   (0x0038)  MISSED
};

/// Struct /Script/KawaiiPhysics.BoneConstrain_BoneConfig
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBoneConstrain_BoneConfig
{ 
	FBoneReference                                     DrivenBone;                                                 // 0x0000   (0x0010)  
	TArray<FBoneConstrain_ConstrainConfig>             Contrains;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.AnimNode_BoneConstrain
/// Size: 0x00E8 (232 bytes) (0x0000D0 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FAnimNode_BoneConstrain : FAnimNode_SkeletalControlBase
{ 
	TArray<FBoneConstrain_BoneConfig>                  BoneConfigs;                                                // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.EdgeDebugInfo
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FEdgeDebugInfo
{ 
	int32_t                                            CurrentBoneIndex;                                           // 0x0000   (0x0004)  
	int32_t                                            AdjacentBoneIndex;                                          // 0x0004   (0x0004)  
	bool                                               AdjacentBoneSameChain;                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FCapsuleLimit                                      CapsuleInfo;                                                // 0x0010   (0x0060)  
	FVector                                            EdgeCollideLocation;                                        // 0x0070   (0x000C)  
	FVector                                            CapsuleCollideLocation;                                     // 0x007C   (0x000C)  
	bool                                               EdgeCollide;                                                // 0x0088   (0x0001)  
	bool                                               AdjacentBoneCannotMove;                                     // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x008A   (0x0002)  MISSED
	FVector                                            EdgeStartLocation;                                          // 0x008C   (0x000C)  
	FVector                                            EdgeEndLocation;                                            // 0x0098   (0x000C)  
	FVector                                            ExtrudeLocation;                                            // 0x00A4   (0x000C)  
	FVector                                            ExtrudeReverseLocation;                                     // 0x00B0   (0x000C)  
	FVector                                            AssumedStartLocation;                                       // 0x00BC   (0x000C)  
	FVector                                            AssumedEndLocation;                                         // 0x00C8   (0x000C)  
	FVector                                            AdjustedStartLocation;                                      // 0x00D4   (0x000C)  
	FVector                                            AdjustedEndLocation;                                        // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/KawaiiPhysics.KawaiiPhysicsModifyBone
/// Size: 0x01A0 (416 bytes) (0x000000 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FKawaiiPhysicsModifyBone
{ 
	FBoneReference                                     BoneRef;                                                    // 0x0000   (0x0010)  
	int32_t                                            SelfIndex;                                                  // 0x0010   (0x0004)  
	int32_t                                            ParentIndex;                                                // 0x0014   (0x0004)  
	TArray<int32_t>                                    ChildIndexs;                                                // 0x0018   (0x0010)  
	TArray<FBoneReference>                             BoneIndices;                                                // 0x0028   (0x0010)  
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0038   (0x0018)  
	FVector                                            Location;                                                   // 0x0050   (0x000C)  
	FVector                                            PrevLocation;                                               // 0x005C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FQuat                                              PrevRotation;                                               // 0x0070   (0x0010)  
	FVector                                            PoseLocation;                                               // 0x0080   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	FQuat                                              PoseRotation;                                               // 0x0090   (0x0010)  
	FVector                                            PoseScale;                                                  // 0x00A0   (0x000C)  
	float                                              LengthFromRoot;                                             // 0x00AC   (0x0004)  
	bool                                               bDummy;                                                     // 0x00B0   (0x0001)  
	bool                                               bIsEndBone;                                                 // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData02_6[0xE];                                       // 0x00B2   (0x000E)  MISSED
	FQuat                                              FinalRotation;                                              // 0x00C0   (0x0010)  
	TArray<int32_t>                                    RightEdgeIndexs;                                            // 0x00D0   (0x0010)  
	TArray<float>                                      RightEdgeIndexsLength;                                      // 0x00E0   (0x0010)  
	TArray<float>                                      RightEdgeIndexsLambda;                                      // 0x00F0   (0x0010)  
	TArray<FEdgeDebugInfo>                             DebugCollideInfo;                                           // 0x0100   (0x0010)  
	FVector                                            PlanarProjection;                                           // 0x0110   (0x000C)  
	FVector                                            PlanarOrigin;                                               // 0x011C   (0x000C)  
	FVector                                            ParentLocationBeforeFinalPlanarAdjust;                      // 0x0128   (0x000C)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0134   (0x000C)  MISSED
	FQuat                                              ParentRotationBeforeFinalPlanarAdjust;                      // 0x0140   (0x0010)  
	FVector                                            LocalLocationBeforeFinalPlanarAdjust;                       // 0x0150   (0x000C)  
	FVector                                            WorldPoseLocation;                                          // 0x015C   (0x000C)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0168   (0x0008)  MISSED
	FQuat                                              WorldPoseRotation;                                          // 0x0170   (0x0010)  
	FVector                                            ForwardPos;                                                 // 0x0180   (0x000C)  
	FVector                                            BackwardPos;                                                // 0x018C   (0x000C)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.AnimNode_KawaiiPhysics
/// Size: 0x08A0 (2208 bytes) (0x0000D0 - 0x0008A0) align 16 MaxSize: 0x08A0
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RootBone;                                                   // 0x00D0   (0x0010)  
	TArray<FBoneReference>                             ExcludeBones;                                               // 0x00E0   (0x0010)  
	bool                                               bEnableEdgeCollide;                                         // 0x00F0   (0x0001)  
	bool                                               bEnableEndBoneControl;                                      // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00F2   (0x0002)  MISSED
	FBoneReference                                     EndBoneTargetBone;                                          // 0x00F4   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0104   (0x000C)  MISSED
	FTransform                                         EndBoneTargetTransform;                                     // 0x0110   (0x0030)  
	int32_t                                            StripIndex;                                                 // 0x0140   (0x0004)  
	bool                                               IsLastStrip;                                                // 0x0144   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	TArray<int32_t>                                    FocusedDebugBoneIndex;                                      // 0x0148   (0x0010)  
	int32_t                                            CircleStartIndex;                                           // 0x0158   (0x0004)  
	int32_t                                            TargetFramerate;                                            // 0x015C   (0x0004)  
	bool                                               OverrideTargetFramerate;                                    // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	FKawaiiPhysicsSettings                             PhysicsSettings;                                            // 0x0164   (0x0018)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	class UCurveFloat*                                 DampingCurve;                                               // 0x0180   (0x0008)  
	class UCurveFloat*                                 WorldDampingLocationCurve;                                  // 0x0188   (0x0008)  
	class UCurveFloat*                                 WorldDampingRotationCurve;                                  // 0x0190   (0x0008)  
	class UCurveFloat*                                 StiffnessCurve;                                             // 0x0198   (0x0008)  
	class UCurveFloat*                                 RadiusCurve;                                                // 0x01A0   (0x0008)  
	class UCurveFloat*                                 LimitAngleCurve;                                            // 0x01A8   (0x0008)  
	FRuntimeFloatCurve                                 DampingCurveData;                                           // 0x01B0   (0x0088)  
	FRuntimeFloatCurve                                 WorldDampingLocationCurveData;                              // 0x0238   (0x0088)  
	FRuntimeFloatCurve                                 WorldDampingRotationCurveData;                              // 0x02C0   (0x0088)  
	FRuntimeFloatCurve                                 StiffnessCurveData;                                         // 0x0348   (0x0088)  
	FRuntimeFloatCurve                                 RadiusCurveData;                                            // 0x03D0   (0x0088)  
	FRuntimeFloatCurve                                 LimitAngleCurveData;                                        // 0x0458   (0x0088)  
	bool                                               bUpdatePhysicsSettingsInGame;                               // 0x04E0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x04E1   (0x0003)  MISSED
	float                                              DummyBoneLength;                                            // 0x04E4   (0x0004)  
	SDK_UNDEFINED(1,1475) /* EBoneForwardAxis */       __um(BoneForwardAxis);                                      // 0x04E8   (0x0001)  
	SDK_UNDEFINED(1,1476) /* EPlanarConstraint */      __um(PlanarConstraint);                                     // 0x04E9   (0x0001)  
	bool                                               ResetBoneTransformWhenBoneNotFound;                         // 0x04EA   (0x0001)  
	unsigned char                                      UnknownData06_6[0x5];                                       // 0x04EB   (0x0005)  MISSED
	TArray<FSphericalLimit>                            SphericalLimits;                                            // 0x04F0   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimits;                                              // 0x0500   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimits;                                               // 0x0510   (0x0010)  
	class UKawaiiPhysicsLimitsDataAsset*               LimitsDataAsset;                                            // 0x0520   (0x0008)  
	TArray<FSphericalLimit>                            SphericalLimitsData;                                        // 0x0528   (0x0010)  
	TArray<FCapsuleLimit>                              CapsuleLimitsData;                                          // 0x0538   (0x0010)  
	TArray<FPlanarLimit>                               PlanarLimitsData;                                           // 0x0548   (0x0010)  
	float                                              TeleportDistanceThreShold;                                  // 0x0558   (0x0004)  
	float                                              TeleportRotationThreShold;                                  // 0x055C   (0x0004)  
	FVector                                            Gravity;                                                    // 0x0560   (0x000C)  
	bool                                               bEnableWind;                                                // 0x056C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x056D   (0x0003)  MISSED
	float                                              WindRandRange;                                              // 0x0570   (0x0004)  
	float                                              WindScale;                                                  // 0x0574   (0x0004)  
	SDK_UNDEFINED(1,1477) /* EWindMode */              __um(WindMode);                                             // 0x0578   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0579   (0x0003)  MISSED
	FVector                                            LocalWindDirection;                                         // 0x057C   (0x000C)  
	float                                              LocalWindSpeed;                                             // 0x0588   (0x0004)  
	float                                              LocalWindWeight;                                            // 0x058C   (0x0004)  
	FBoneReference                                     BaseBone;                                                   // 0x0590   (0x0010)  
	bool                                               bEnableWindSpeedCurve;                                      // 0x05A0   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x05A1   (0x0007)  MISSED
	FRuntimeFloatCurve                                 WindSpeedCurveData;                                         // 0x05A8   (0x0088)  
	float                                              WindSpeedCycleDuration;                                     // 0x0630   (0x0004)  
	bool                                               bAllowWorldCollision;                                       // 0x0634   (0x0001)  
	bool                                               bOverrideCollisionParams;                                   // 0x0635   (0x0001)  
	unsigned char                                      UnknownData10_6[0x2];                                       // 0x0636   (0x0002)  MISSED
	FBodyInstance                                      CollisionChannelSettings;                                   // 0x0638   (0x0150)  
	bool                                               bIgnoreSelfComponent;                                       // 0x0788   (0x0001)  
	unsigned char                                      UnknownData11_6[0x7];                                       // 0x0789   (0x0007)  MISSED
	TArray<FBoneReference>                             IgnoreBones;                                                // 0x0790   (0x0010)  
	TArray<FName>                                      IgnoreBoneNamePrefix;                                       // 0x07A0   (0x0010)  
	TArray<FKawaiiPhysicsModifyBone>                   ModifyBones;                                                // 0x07B0   (0x0010)  
	bool                                               bActiveDebugging;                                           // 0x07C0   (0x0001)  
	bool                                               bActiveLateralConstraint;                                   // 0x07C1   (0x0001)  
	unsigned char                                      UnknownData12_6[0x2];                                       // 0x07C2   (0x0002)  MISSED
	int32_t                                            LateralConstraintIterationCountAfterCollision;              // 0x07C4   (0x0004)  
	SDK_UNDEFINED(1,1478) /* BoneConstraintMode */     __um(LateralConstraintMode);                                // 0x07C8   (0x0001)  
	SDK_UNDEFINED(1,1479) /* EXPBDComplianceType */    __um(ComplianceType);                                       // 0x07C9   (0x0001)  
	unsigned char                                      UnknownData13_6[0x2];                                       // 0x07CA   (0x0002)  MISSED
	float                                              ComplianceValueOverride;                                    // 0x07CC   (0x0004)  
	float                                              TotalBoneLength;                                            // 0x07D0   (0x0004)  
	unsigned char                                      UnknownData14_6[0xC];                                       // 0x07D4   (0x000C)  MISSED
	FTransform                                         PreSkelCompTransform;                                       // 0x07E0   (0x0030)  
	bool                                               bInitPhysicsSettings;                                       // 0x0810   (0x0001)  
	unsigned char                                      UnknownData15_7[0x8F];                                      // 0x0811   (0x008F)  MISSED
};

/// Struct /Script/KawaiiPhysics.AdjacentEdgesInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAdjacentEdgesInfo
{ 
	TArray<FBoneReference>                             AdjacentBones;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.CollisionLimitDataBase
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 16 MaxSize: 0x0050
struct FCollisionLimitDataBase
{ 
	FName                                              DrivingBoneName;                                            // 0x0000   (0x0008)  
	FVector                                            OffsetLocation;                                             // 0x0008   (0x000C)  
	FRotator                                           OffsetRotation;                                             // 0x0014   (0x000C)  
	FVector                                            Location;                                                   // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
	FGuid                                              Guid;                                                       // 0x0040   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.PlanarLimitData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 16 MaxSize: 0x0060
struct FPlanarLimitData : FCollisionLimitDataBase
{ 
	FPlane                                             Plane;                                                      // 0x0050   (0x0010)  
};

/// Struct /Script/KawaiiPhysics.CapsuleLimitData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 16 MaxSize: 0x0060
struct FCapsuleLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	float                                              Length;                                                     // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/KawaiiPhysics.SphericalLimitData
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 16 MaxSize: 0x0060
struct FSphericalLimitData : FCollisionLimitDataBase
{ 
	float                                              Radius;                                                     // 0x0050   (0x0004)  
	SDK_UNDEFINED(1,1480) /* ESphericalLimitType */    __um(LimitType);                                            // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0055   (0x000B)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FCollisionLimitBase) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FSphericalLimit) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FCapsuleLimit) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(FPlanarLimit) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(UKawaiiPhysicsLimitsDataAsset) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FKawaiiPhysicsSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBoneConstrain_ConstrainConfig) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FBoneConstrain_BoneConfig) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAnimNode_BoneConstrain) == 0x00E8); // 232 bytes (0x0000D0 - 0x0000E8)
static_assert(sizeof(FEdgeDebugInfo) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FKawaiiPhysicsModifyBone) == 0x01A0); // 416 bytes (0x000000 - 0x0001A0)
static_assert(sizeof(FAnimNode_KawaiiPhysics) == 0x08A0); // 2208 bytes (0x0000D0 - 0x0008A0)
static_assert(sizeof(FAdjacentEdgesInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCollisionLimitDataBase) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FPlanarLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FCapsuleLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FSphericalLimitData) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(offsetof(FCollisionLimitBase, DrivingBone) == 0x0000);
static_assert(offsetof(FCollisionLimitBase, OffsetLocation) == 0x0010);
static_assert(offsetof(FCollisionLimitBase, OffsetRotation) == 0x001C);
static_assert(offsetof(FCollisionLimitBase, Location) == 0x0028);
static_assert(offsetof(FCollisionLimitBase, Rotation) == 0x0040);
static_assert(offsetof(FPlanarLimit, Plane) == 0x0060);
static_assert(offsetof(FPlanarLimit, LimitIndexs) == 0x0070);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, SphericalLimits) == 0x0030);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits) == 0x0040);
static_assert(offsetof(UKawaiiPhysicsLimitsDataAsset, PlanarLimits) == 0x0050);
static_assert(offsetof(FBoneConstrain_ConstrainConfig, DriverBone) == 0x0000);
static_assert(offsetof(FBoneConstrain_BoneConfig, DrivenBone) == 0x0000);
static_assert(offsetof(FBoneConstrain_BoneConfig, Contrains) == 0x0010);
static_assert(offsetof(FAnimNode_BoneConstrain, BoneConfigs) == 0x00D0);
static_assert(offsetof(FEdgeDebugInfo, CapsuleInfo) == 0x0010);
static_assert(offsetof(FEdgeDebugInfo, EdgeCollideLocation) == 0x0070);
static_assert(offsetof(FEdgeDebugInfo, CapsuleCollideLocation) == 0x007C);
static_assert(offsetof(FEdgeDebugInfo, EdgeStartLocation) == 0x008C);
static_assert(offsetof(FEdgeDebugInfo, EdgeEndLocation) == 0x0098);
static_assert(offsetof(FEdgeDebugInfo, ExtrudeLocation) == 0x00A4);
static_assert(offsetof(FEdgeDebugInfo, ExtrudeReverseLocation) == 0x00B0);
static_assert(offsetof(FEdgeDebugInfo, AssumedStartLocation) == 0x00BC);
static_assert(offsetof(FEdgeDebugInfo, AssumedEndLocation) == 0x00C8);
static_assert(offsetof(FEdgeDebugInfo, AdjustedStartLocation) == 0x00D4);
static_assert(offsetof(FEdgeDebugInfo, AdjustedEndLocation) == 0x00E0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, BoneRef) == 0x0000);
static_assert(offsetof(FKawaiiPhysicsModifyBone, ChildIndexs) == 0x0018);
static_assert(offsetof(FKawaiiPhysicsModifyBone, BoneIndices) == 0x0028);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PhysicsSettings) == 0x0038);
static_assert(offsetof(FKawaiiPhysicsModifyBone, Location) == 0x0050);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevLocation) == 0x005C);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PrevRotation) == 0x0070);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseLocation) == 0x0080);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseRotation) == 0x0090);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PoseScale) == 0x00A0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, FinalRotation) == 0x00C0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, RightEdgeIndexs) == 0x00D0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, RightEdgeIndexsLength) == 0x00E0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, RightEdgeIndexsLambda) == 0x00F0);
static_assert(offsetof(FKawaiiPhysicsModifyBone, DebugCollideInfo) == 0x0100);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PlanarProjection) == 0x0110);
static_assert(offsetof(FKawaiiPhysicsModifyBone, PlanarOrigin) == 0x011C);
static_assert(offsetof(FKawaiiPhysicsModifyBone, ParentLocationBeforeFinalPlanarAdjust) == 0x0128);
static_assert(offsetof(FKawaiiPhysicsModifyBone, ParentRotationBeforeFinalPlanarAdjust) == 0x0140);
static_assert(offsetof(FKawaiiPhysicsModifyBone, LocalLocationBeforeFinalPlanarAdjust) == 0x0150);
static_assert(offsetof(FKawaiiPhysicsModifyBone, WorldPoseLocation) == 0x015C);
static_assert(offsetof(FKawaiiPhysicsModifyBone, WorldPoseRotation) == 0x0170);
static_assert(offsetof(FKawaiiPhysicsModifyBone, ForwardPos) == 0x0180);
static_assert(offsetof(FKawaiiPhysicsModifyBone, BackwardPos) == 0x018C);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RootBone) == 0x00D0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ExcludeBones) == 0x00E0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, EndBoneTargetBone) == 0x00F4);
static_assert(offsetof(FAnimNode_KawaiiPhysics, EndBoneTargetTransform) == 0x0110);
static_assert(offsetof(FAnimNode_KawaiiPhysics, FocusedDebugBoneIndex) == 0x0148);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PhysicsSettings) == 0x0164);
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurve) == 0x0180);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve) == 0x0188);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve) == 0x0190);
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurve) == 0x0198);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurve) == 0x01A0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurve) == 0x01A8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, DampingCurveData) == 0x01B0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingLocationCurveData) == 0x0238);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WorldDampingRotationCurveData) == 0x02C0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, StiffnessCurveData) == 0x0348);
static_assert(offsetof(FAnimNode_KawaiiPhysics, RadiusCurveData) == 0x03D0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitAngleCurveData) == 0x0458);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimits) == 0x04F0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimits) == 0x0500);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimits) == 0x0510);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LimitsDataAsset) == 0x0520);
static_assert(offsetof(FAnimNode_KawaiiPhysics, SphericalLimitsData) == 0x0528);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CapsuleLimitsData) == 0x0538);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PlanarLimitsData) == 0x0548);
static_assert(offsetof(FAnimNode_KawaiiPhysics, Gravity) == 0x0560);
static_assert(offsetof(FAnimNode_KawaiiPhysics, LocalWindDirection) == 0x057C);
static_assert(offsetof(FAnimNode_KawaiiPhysics, BaseBone) == 0x0590);
static_assert(offsetof(FAnimNode_KawaiiPhysics, WindSpeedCurveData) == 0x05A8);
static_assert(offsetof(FAnimNode_KawaiiPhysics, CollisionChannelSettings) == 0x0638);
static_assert(offsetof(FAnimNode_KawaiiPhysics, IgnoreBones) == 0x0790);
static_assert(offsetof(FAnimNode_KawaiiPhysics, IgnoreBoneNamePrefix) == 0x07A0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, ModifyBones) == 0x07B0);
static_assert(offsetof(FAnimNode_KawaiiPhysics, PreSkelCompTransform) == 0x07E0);
static_assert(offsetof(FAdjacentEdgesInfo, AdjacentBones) == 0x0000);
static_assert(offsetof(FCollisionLimitDataBase, DrivingBoneName) == 0x0000);
static_assert(offsetof(FCollisionLimitDataBase, OffsetLocation) == 0x0008);
static_assert(offsetof(FCollisionLimitDataBase, OffsetRotation) == 0x0014);
static_assert(offsetof(FCollisionLimitDataBase, Location) == 0x0020);
static_assert(offsetof(FCollisionLimitDataBase, Rotation) == 0x0030);
static_assert(offsetof(FCollisionLimitDataBase, Guid) == 0x0040);
static_assert(offsetof(FPlanarLimitData, Plane) == 0x0050);
