// generated header

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Struct /Script/PhysXVehicles.WheelSetup
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWheelSetup
{ 
	class UClass*                                      WheelClass;                                                 // 0x0000   (0x0008)  
	FName                                              BoneName;                                                   // 0x0008   (0x0008)  
	FVector                                            AdditionalOffset;                                           // 0x0010   (0x000C)  
	bool                                               bDisableSteering;                                           // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/PhysXVehicles.ReplicatedVehicleState
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FReplicatedVehicleState
{ 
	float                                              SteeringInput;                                              // 0x0000   (0x0004)  
	float                                              ThrottleInput;                                              // 0x0004   (0x0004)  
	float                                              BrakeInput;                                                 // 0x0008   (0x0004)  
	float                                              HandbrakeInput;                                             // 0x000C   (0x0004)  
	int32_t                                            CurrentGear;                                                // 0x0010   (0x0004)  
};

/// Struct /Script/PhysXVehicles.VehicleInputRate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FVehicleInputRate
{ 
	float                                              RiseRate;                                                   // 0x0000   (0x0004)  
	float                                              FallRate;                                                   // 0x0004   (0x0004)  
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent
/// Size: 0x02D8 (728 bytes) (0x000180 - 0x0002D8) align 8 MaxSize: 0x02D8
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0180   (0x0008)  MISSED
	bool                                               bDeprecatedSpringOffsetMode : 1;                            // 0x0188:0 (0x0001)  
	bool                                               bReverseAsBrake : 1;                                        // 0x0188:1 (0x0001)  
	bool                                               bUseRVOAvoidance : 1;                                       // 0x0188:2 (0x0001)  
	bool                                               bRawHandbrakeInput : 1;                                     // 0x0188:3 (0x0001)  
	bool                                               bRawGearUpInput : 1;                                        // 0x0188:4 (0x0001)  
	bool                                               bRawGearDownInput : 1;                                      // 0x0188:5 (0x0001)  
	unsigned char                                      UnknownData01_3[0x3];                                       // 0x0189   (0x0003)  MISSED
	bool                                               bWasAvoidanceUpdated : 1;                                   // 0x018C:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x018D   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x0190   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0194   (0x0004)  MISSED
	TArray<FWheelSetup>                                WheelSetups;                                                // 0x0198   (0x0010)  
	float                                              DragCoefficient;                                            // 0x01A8   (0x0004)  
	float                                              ChassisWidth;                                               // 0x01AC   (0x0004)  
	float                                              ChassisHeight;                                              // 0x01B0   (0x0004)  
	float                                              DragArea;                                                   // 0x01B4   (0x0004)  
	float                                              EstimatedMaxEngineSpeed;                                    // 0x01B8   (0x0004)  
	float                                              MaxEngineRPM;                                               // 0x01BC   (0x0004)  
	float                                              DebugDragMagnitude;                                         // 0x01C0   (0x0004)  
	FVector                                            InertiaTensorScale;                                         // 0x01C4   (0x000C)  
	float                                              MinNormalizedTireLoad;                                      // 0x01D0   (0x0004)  
	float                                              MinNormalizedTireLoadFiltered;                              // 0x01D4   (0x0004)  
	float                                              MaxNormalizedTireLoad;                                      // 0x01D8   (0x0004)  
	float                                              MaxNormalizedTireLoadFiltered;                              // 0x01DC   (0x0004)  
	float                                              ThresholdLongitudinalSpeed;                                 // 0x01E0   (0x0004)  
	int32_t                                            LowForwardSpeedSubStepCount;                                // 0x01E4   (0x0004)  
	int32_t                                            HighForwardSpeedSubStepCount;                               // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
	TArray<class UVehicleWheel*>                       Wheels;                                                     // 0x01F0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0200   (0x0018)  MISSED
	float                                              RVOAvoidanceRadius;                                         // 0x0218   (0x0004)  
	float                                              RVOAvoidanceHeight;                                         // 0x021C   (0x0004)  
	float                                              AvoidanceConsiderationRadius;                               // 0x0220   (0x0004)  
	float                                              RVOSteeringStep;                                            // 0x0224   (0x0004)  
	float                                              RVOThrottleStep;                                            // 0x0228   (0x0004)  
	int32_t                                            AvoidanceUID;                                               // 0x022C   (0x0004)  
	FNavAvoidanceMask                                  AvoidanceGroup;                                             // 0x0230   (0x0004)  
	FNavAvoidanceMask                                  GroupsToAvoid;                                              // 0x0234   (0x0004)  
	FNavAvoidanceMask                                  GroupsToIgnore;                                             // 0x0238   (0x0004)  
	float                                              AvoidanceWeight;                                            // 0x023C   (0x0004)  
	FVector                                            PendingLaunchVelocity;                                      // 0x0240   (0x000C)  
	FReplicatedVehicleState                            ReplicatedState;                                            // 0x024C   (0x0014)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x0260   (0x0004)  MISSED
	float                                              RawSteeringInput;                                           // 0x0264   (0x0004)  
	float                                              RawThrottleInput;                                           // 0x0268   (0x0004)  
	float                                              RawBrakeInput;                                              // 0x026C   (0x0004)  
	float                                              SteeringInput;                                              // 0x0270   (0x0004)  
	float                                              ThrottleInput;                                              // 0x0274   (0x0004)  
	float                                              BrakeInput;                                                 // 0x0278   (0x0004)  
	float                                              HandbrakeInput;                                             // 0x027C   (0x0004)  
	float                                              IdleBrakeInput;                                             // 0x0280   (0x0004)  
	float                                              StopThreshold;                                              // 0x0284   (0x0004)  
	float                                              WrongDirectionThreshold;                                    // 0x0288   (0x0004)  
	FVehicleInputRate                                  ThrottleInputRate;                                          // 0x028C   (0x0008)  
	FVehicleInputRate                                  BrakeInputRate;                                             // 0x0294   (0x0008)  
	FVehicleInputRate                                  HandbrakeInputRate;                                         // 0x029C   (0x0008)  
	FVehicleInputRate                                  SteeringInputRate;                                          // 0x02A4   (0x0008)  
	unsigned char                                      UnknownData07_6[0x24];                                      // 0x02AC   (0x0024)  MISSED
	class AController*                                 OverrideController;                                         // 0x02D0   (0x0008)  


	/// Functions
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
	// void SetUseAutoGears(bool bUseAuto);                                                                                     // [0x62b84ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
	// void SetThrottleInput(float Throttle);                                                                                   // [0x62b83f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
	// void SetTargetGear(int32_t GearNum, bool bImmediate);                                                                    // [0x62b8310] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
	// void SetSteeringInput(float Steering);                                                                                   // [0x62b825c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
	// void SetHandbrakeInput(bool bNewHandbrake);                                                                              // [0x62b80cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
	// void SetGroupsToIgnoreMask(FNavAvoidanceMask& GroupMask);                                                                // [0x62b802c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
	// void SetGroupsToIgnore(int32_t GroupFlags);                                                                              // [0x62b7f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
	// void SetGroupsToAvoidMask(FNavAvoidanceMask& GroupMask);                                                                 // [0x62b7ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
	// void SetGroupsToAvoid(int32_t GroupFlags);                                                                               // [0x62b7e54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
	// void SetGearUp(bool bNewGearUp);                                                                                         // [0x62b7dac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
	// void SetGearDown(bool bNewGearDown);                                                                                     // [0x62b7d04] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
	// void SetBrakeInput(float Brake);                                                                                         // [0x62b7a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
	// void SetAvoidanceGroupMask(FNavAvoidanceMask& GroupMask);                                                                // [0x62b79e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
	// void SetAvoidanceGroup(int32_t GroupFlags);                                                                              // [0x62b7944] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
	// void SetAvoidanceEnabled(bool bEnable);                                                                                  // [0x62b7850] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
	// void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear, FRigidBodyState InPhysicState); // [0x62b7554] Net|Native|Event|Protected|NetServer|NetValidate 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
	// bool GetUseAutoGears();                                                                                                  // [0x62b74c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
	// int32_t GetTargetGear();                                                                                                 // [0x62b74a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetSteeringInput
	// float GetSteeringInput();                                                                                                // [0x62b744c] Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
	// float GetForwardSpeed();                                                                                                 // [0x62b73d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
	// float GetEngineRotationSpeed();                                                                                          // [0x62b73ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
	// float GetEngineMaxRotationSpeed();                                                                                       // [0x537506c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
	// int32_t GetCurrentGear();                                                                                                // [0x62b738c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PhysXVehicles.WheeledVehicle
/// Size: 0x0398 (920 bytes) (0x000388 - 0x000398) align 8 MaxSize: 0x0398
class AWheeledVehicle : public APawn
{ 
public:
	class USkeletalMeshComponent*                      Mesh;                                                       // 0x0388   (0x0008)  
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                            // 0x0390   (0x0008)  
};

/// Struct /Script/PhysXVehicles.VehicleEngineData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FVehicleEngineData
{ 
	FRuntimeFloatCurve                                 TorqueCurve;                                                // 0x0000   (0x0088)  
	float                                              MaxRPM;                                                     // 0x0088   (0x0004)  
	float                                              MOI;                                                        // 0x008C   (0x0004)  
	float                                              DampingRateFullThrottle;                                    // 0x0090   (0x0004)  
	float                                              DampingRateZeroThrottleClutchEngaged;                       // 0x0094   (0x0004)  
	float                                              DampingRateZeroThrottleClutchDisengaged;                    // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/PhysXVehicles.VehicleDifferential4WData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FVehicleDifferential4WData
{ 
	SDK_UNDEFINED(1,1724) /* TEnumAsByte<EVehicleDifferential4W> */ __um(DifferentialType);                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FrontRearSplit;                                             // 0x0004   (0x0004)  
	float                                              FrontLeftRightSplit;                                        // 0x0008   (0x0004)  
	float                                              RearLeftRightSplit;                                         // 0x000C   (0x0004)  
	float                                              CentreBias;                                                 // 0x0010   (0x0004)  
	float                                              FrontBias;                                                  // 0x0014   (0x0004)  
	float                                              RearBias;                                                   // 0x0018   (0x0004)  
};

/// Struct /Script/PhysXVehicles.VehicleGearData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FVehicleGearData
{ 
	float                                              Ratio;                                                      // 0x0000   (0x0004)  
	float                                              DownRatio;                                                  // 0x0004   (0x0004)  
	float                                              UpRatio;                                                    // 0x0008   (0x0004)  
};

/// Struct /Script/PhysXVehicles.VehicleTransmissionData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FVehicleTransmissionData
{ 
	bool                                               bUseGearAutoBox;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              GearSwitchTime;                                             // 0x0004   (0x0004)  
	float                                              GearAutoBoxLatency;                                         // 0x0008   (0x0004)  
	float                                              FinalRatio;                                                 // 0x000C   (0x0004)  
	TArray<FVehicleGearData>                           ForwardGears;                                               // 0x0010   (0x0010)  
	float                                              ReverseGearRatio;                                           // 0x0020   (0x0004)  
	float                                              NeutralGearUpRatio;                                         // 0x0024   (0x0004)  
	float                                              ClutchStrength;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/PhysXVehicles.WheeledVehicleMovementComponent4W
/// Size: 0x0450 (1104 bytes) (0x0002D8 - 0x000450) align 8 MaxSize: 0x0450
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{ 
public:
	FVehicleEngineData                                 EngineSetup;                                                // 0x02D8   (0x00A0)  
	FVehicleDifferential4WData                         DifferentialSetup;                                          // 0x0378   (0x001C)  
	float                                              AckermannAccuracy;                                          // 0x0394   (0x0004)  
	FVehicleTransmissionData                           TransmissionSetup;                                          // 0x0398   (0x0030)  
	FRuntimeFloatCurve                                 SteeringCurve;                                              // 0x03C8   (0x0088)  
};

/// Class /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent
/// Size: 0x02D8 (728 bytes) (0x0002D8 - 0x0002D8) align 8 MaxSize: 0x02D8
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{ 
public:


	/// Functions
	// Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
	// void SetSteerAngle(float SteerAngle, int32_t WheelIndex);                                                                // [0x62b8174] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
	// void SetDriveTorque(float DriveTorque, int32_t WheelIndex);                                                              // [0x62b7c1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
	// void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);                                                              // [0x62b7b34] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/PhysXVehicles.TireConfigMaterialFriction
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTireConfigMaterialFriction
{ 
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0000   (0x0008)  
	float                                              FrictionScale;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/PhysXVehicles.TireConfig
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UTireConfig : public UDataAsset
{ 
public:
	float                                              FrictionScale;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FTireConfigMaterialFriction>                TireFrictionScales;                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/PhysXVehicles.VehicleAnimInstance
/// Size: 0x0B70 (2928 bytes) (0x0002B8 - 0x000B70) align 16 MaxSize: 0x0B70
class UVehicleAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8A8];                                     // 0x02B8   (0x08A8)  MISSED
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                            // 0x0B60   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0B68   (0x0008)  MISSED


	/// Functions
	// Function /Script/PhysXVehicles.VehicleAnimInstance.GetVehicle
	// class AWheeledVehicle* GetVehicle();                                                                                     // [0x62b74e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysXVehicles.VehicleWheel
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UVehicleWheel : public UObject
{ 
public:
	class UStaticMesh*                                 CollisionMesh;                                              // 0x0028   (0x0008)  
	bool                                               bDontCreateShape;                                           // 0x0030   (0x0001)  
	bool                                               bAutoAdjustCollisionSize;                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	FVector                                            Offset;                                                     // 0x0034   (0x000C)  
	float                                              ShapeRadius;                                                // 0x0040   (0x0004)  
	float                                              ShapeWidth;                                                 // 0x0044   (0x0004)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	float                                              DampingRate;                                                // 0x004C   (0x0004)  
	float                                              SteerAngle;                                                 // 0x0050   (0x0004)  
	bool                                               bAffectedByHandbrake;                                       // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	class UTireType*                                   TireType;                                                   // 0x0058   (0x0008)  
	class UTireConfig*                                 TireConfig;                                                 // 0x0060   (0x0008)  
	float                                              LatStiffMaxLoad;                                            // 0x0068   (0x0004)  
	float                                              LatStiffValue;                                              // 0x006C   (0x0004)  
	float                                              LongStiffValue;                                             // 0x0070   (0x0004)  
	float                                              SuspensionForceOffset;                                      // 0x0074   (0x0004)  
	float                                              SuspensionMaxRaise;                                         // 0x0078   (0x0004)  
	float                                              SuspensionMaxDrop;                                          // 0x007C   (0x0004)  
	float                                              SuspensionNaturalFrequency;                                 // 0x0080   (0x0004)  
	float                                              SuspensionDampingRatio;                                     // 0x0084   (0x0004)  
	SDK_UNDEFINED(1,1725) /* TEnumAsByte<EWheelSweepType> */ __um(SweepType);                                      // 0x0088   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              MaxBrakeTorque;                                             // 0x008C   (0x0004)  
	float                                              MaxHandBrakeTorque;                                         // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	class UWheeledVehicleMovementComponent*            VehicleSim;                                                 // 0x0098   (0x0008)  
	int32_t                                            WheelIndex;                                                 // 0x00A0   (0x0004)  
	float                                              DebugLongSlip;                                              // 0x00A4   (0x0004)  
	float                                              DebugLatSlip;                                               // 0x00A8   (0x0004)  
	float                                              DebugNormalizedTireLoad;                                    // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00B0   (0x0004)  MISSED
	float                                              DebugWheelTorque;                                           // 0x00B4   (0x0004)  
	float                                              DebugLongForce;                                             // 0x00B8   (0x0004)  
	float                                              DebugLatForce;                                              // 0x00BC   (0x0004)  
	FVector                                            Location;                                                   // 0x00C0   (0x000C)  
	FVector                                            OldLocation;                                                // 0x00CC   (0x000C)  
	FVector                                            Velocity;                                                   // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData05_7[0xC];                                       // 0x00E4   (0x000C)  MISSED


	/// Functions
	// Function /Script/PhysXVehicles.VehicleWheel.IsInAir
	// bool IsInAir();                                                                                                          // [0x62b7530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetSuspensionOffset
	// float GetSuspensionOffset();                                                                                             // [0x62b7478] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetSteerAngle
	// float GetSteerAngle();                                                                                                   // [0x62b7424] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysXVehicles.VehicleWheel.GetRotationAngle
	// float GetRotationAngle();                                                                                                // [0x62b73fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/PhysXVehicles.AnimNode_WheelHandler
/// Size: 0x00E8 (232 bytes) (0x0000D0 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00D0   (0x0018)  MISSED
};

/// Struct /Script/PhysXVehicles.VehicleAnimInstanceProxy
/// Size: 0x0890 (2192 bytes) (0x000880 - 0x000890) align 16 MaxSize: 0x0890
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0880   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FWheelSetup) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FReplicatedVehicleState) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FVehicleInputRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UWheeledVehicleMovementComponent) == 0x02D8); // 728 bytes (0x000180 - 0x0002D8)
static_assert(sizeof(AWheeledVehicle) == 0x0398); // 920 bytes (0x000388 - 0x000398)
static_assert(sizeof(FVehicleEngineData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FVehicleDifferential4WData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FVehicleGearData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FVehicleTransmissionData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UWheeledVehicleMovementComponent4W) == 0x0450); // 1104 bytes (0x0002D8 - 0x000450)
static_assert(sizeof(USimpleWheeledVehicleMovementComponent) == 0x02D8); // 728 bytes (0x0002D8 - 0x0002D8)
static_assert(sizeof(FTireConfigMaterialFriction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UTireConfig) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UVehicleAnimInstance) == 0x0B70); // 2928 bytes (0x0002B8 - 0x000B70)
static_assert(sizeof(UVehicleWheel) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(FAnimNode_WheelHandler) == 0x00E8); // 232 bytes (0x0000D0 - 0x0000E8)
static_assert(sizeof(FVehicleAnimInstanceProxy) == 0x0890); // 2192 bytes (0x000880 - 0x000890)
static_assert(offsetof(FWheelSetup, WheelClass) == 0x0000);
static_assert(offsetof(FWheelSetup, BoneName) == 0x0008);
static_assert(offsetof(FWheelSetup, AdditionalOffset) == 0x0010);
static_assert(offsetof(UWheeledVehicleMovementComponent, WheelSetups) == 0x0198);
static_assert(offsetof(UWheeledVehicleMovementComponent, InertiaTensorScale) == 0x01C4);
static_assert(offsetof(UWheeledVehicleMovementComponent, Wheels) == 0x01F0);
static_assert(offsetof(UWheeledVehicleMovementComponent, AvoidanceGroup) == 0x0230);
static_assert(offsetof(UWheeledVehicleMovementComponent, GroupsToAvoid) == 0x0234);
static_assert(offsetof(UWheeledVehicleMovementComponent, GroupsToIgnore) == 0x0238);
static_assert(offsetof(UWheeledVehicleMovementComponent, PendingLaunchVelocity) == 0x0240);
static_assert(offsetof(UWheeledVehicleMovementComponent, ReplicatedState) == 0x024C);
static_assert(offsetof(UWheeledVehicleMovementComponent, ThrottleInputRate) == 0x028C);
static_assert(offsetof(UWheeledVehicleMovementComponent, BrakeInputRate) == 0x0294);
static_assert(offsetof(UWheeledVehicleMovementComponent, HandbrakeInputRate) == 0x029C);
static_assert(offsetof(UWheeledVehicleMovementComponent, SteeringInputRate) == 0x02A4);
static_assert(offsetof(UWheeledVehicleMovementComponent, OverrideController) == 0x02D0);
static_assert(offsetof(AWheeledVehicle, Mesh) == 0x0388);
static_assert(offsetof(AWheeledVehicle, VehicleMovement) == 0x0390);
static_assert(offsetof(FVehicleEngineData, TorqueCurve) == 0x0000);
static_assert(offsetof(FVehicleTransmissionData, ForwardGears) == 0x0010);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, EngineSetup) == 0x02D8);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, DifferentialSetup) == 0x0378);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, TransmissionSetup) == 0x0398);
static_assert(offsetof(UWheeledVehicleMovementComponent4W, SteeringCurve) == 0x03C8);
static_assert(offsetof(FTireConfigMaterialFriction, PhysicalMaterial) == 0x0000);
static_assert(offsetof(UTireConfig, TireFrictionScales) == 0x0038);
static_assert(offsetof(UVehicleAnimInstance, WheeledVehicleMovementComponent) == 0x0B60);
static_assert(offsetof(UVehicleWheel, CollisionMesh) == 0x0028);
static_assert(offsetof(UVehicleWheel, Offset) == 0x0034);
static_assert(offsetof(UVehicleWheel, TireType) == 0x0058);
static_assert(offsetof(UVehicleWheel, TireConfig) == 0x0060);
static_assert(offsetof(UVehicleWheel, VehicleSim) == 0x0098);
static_assert(offsetof(UVehicleWheel, Location) == 0x00C0);
static_assert(offsetof(UVehicleWheel, OldLocation) == 0x00CC);
static_assert(offsetof(UVehicleWheel, Velocity) == 0x00D8);
