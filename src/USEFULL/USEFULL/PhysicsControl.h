// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/PhysicsControl.PhysicsControlComponent
/// Size: 0x0118 (280 bytes) (0x0000F8 - 0x000118) align 8 MaxSize: 0x0118
class UPhysicsControlComponent : public UActorComponent
{ 
public:
	float                                              TeleportDistanceThreShold;                                  // 0x00F8   (0x0004)  
	float                                              TeleportRotationThreShold;                                  // 0x00FC   (0x0004)  
	bool                                               bShowDebugVisualization;                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	float                                              VisualizationSizeScale;                                     // 0x0104   (0x0004)  
	float                                              VelocityPredictionTime;                                     // 0x0108   (0x0004)  
	int32_t                                            MaxNumControlsOrModifiersPerName;                           // 0x010C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0110   (0x0008)  MISSED


	/// Functions
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlUseSkeletalAnimation
	// bool SetControlUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier);  // [0x4f62604] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPositionAndOrientation
	// bool SetControlTargetPositionAndOrientation(FName Name, FVector position, FRotator Orientation, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0x4f623a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPosition
	// bool SetControlTargetPosition(FName Name, FVector position, float VelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0x4f621a8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetPoses
	// bool SetControlTargetPoses(FName Name, FVector ParentPosition, FRotator ParentOrientation, FVector ChildPosition, FRotator ChildOrientation, float VelocityDeltaTime, bool bEnableControl); // [0x4f61ed4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTargetOrientation
	// bool SetControlTargetOrientation(FName Name, FRotator Orientation, float AngularVelocityDeltaTime, bool bEnableControl, bool bApplyControlPointToTarget); // [0x4f61cdc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlTarget
	// bool SetControlTarget(FName Name, FPhysicsControlTarget ControlTarget, bool bEnableControl);                             // [0x4f61b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlPoint
	// bool SetControlPoint(FName Name, FVector position);                                                                      // [0x4f61a0c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlMultipliers
	// bool SetControlMultipliers(FName Name, FPhysicsControlMultipliers ControlMultipliers, bool bEnableControl);              // [0x4f618a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlLinearData
	// bool SetControlLinearData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxForce, bool bEnableControl); // [0x4f6165c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlEnabled
	// bool SetControlEnabled(FName Name, bool bEnable);                                                                        // [0x4f6151c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlData
	// bool SetControlData(FName Name, FPhysicsControlData ControlData, bool bEnableControl);                                   // [0x4f613b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlAutoDisable
	// bool SetControlAutoDisable(FName Name, bool bAutoDisable);                                                               // [0x4f61278] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetControlAngularData
	// bool SetControlAngularData(FName Name, float Strength, float DampingRatio, float ExtraDamping, float MaxTorque, bool bEnableControl); // [0x4f61030] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierUseSkeletalAnimation
	// bool SetBodyModifierUseSkeletalAnimation(FName Name, bool bUseSkeletalAnimation);                                        // [0x4f60f34] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierMovementType
	// bool SetBodyModifierMovementType(FName Name, EPhysicsMovementType MovementType);                                         // [0x4f60e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierKinematicTarget
	// bool SetBodyModifierKinematicTarget(FName Name, FVector KinematicTargetPosition, FRotator KinematicTargetOrienation, bool bMakeKinematic); // [0x4f60c8c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierGravityMultiplier
	// bool SetBodyModifierGravityMultiplier(FName Name, float GravityMultiplier);                                              // [0x4f60b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetBodyModifierCollisionType
	// bool SetBodyModifierCollisionType(FName Name, TEnumAsByte<ECollisionEnabled> CollisionType);                             // [0x4f60a9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllControlTargets
	// void SetAllControlTargets(TArray<FName>& Names, FPhysicsControlTarget ControlTarget, bool bEnableControl);               // [0x4f60604] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllControlsUseSkeletalAnimation
	// void SetAllControlsUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation, float SkeletalAnimationVelocityMultiplier); // [0x4f6093c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllControlsEnabled
	// void SetAllControlsEnabled(TArray<FName>& Names, bool bEnable);                                                          // [0x4f607a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllControlMultipliers
	// void SetAllControlMultipliers(TArray<FName>& Names, FPhysicsControlMultipliers ControlMultipliers, bool bEnableControl); // [0x4f6047c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllControlDatas
	// void SetAllControlDatas(TArray<FName>& Names, FPhysicsControlData ControlData, bool bEnableControl);                     // [0x4f602fc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllBodyModifiersUseSkeletalAnimation
	// void SetAllBodyModifiersUseSkeletalAnimation(TArray<FName>& Names, bool bUseSkeletalAnimation);                          // [0x4f601c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllBodyModifierMovementType
	// void SetAllBodyModifierMovementType(TArray<FName>& Names, EPhysicsMovementType MovementType);                            // [0x4f60004] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllBodyModifierGravityMultipliers
	// void SetAllBodyModifierGravityMultipliers(TArray<FName>& Names, float GravityMultiplier);                                // [0x4f5fefc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.SetAllBodyModifierCollisionType
	// void SetAllBodyModifierCollisionType(TArray<FName>& Names, TEnumAsByte<ECollisionEnabled> CollisionType);                // [0x4f5fdcc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.ResetControlPoint
	// bool ResetControlPoint(FName Name);                                                                                      // [0x4f5fcec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeNamedControl
	// bool MakeNamedControl(FName Name, class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FPhysicsControlSettings ControlSettings, bool bEnabled); // [0x4f5f8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeNamedBodyModifier
	// bool MakeNamedBodyModifier(FName Name, class UMeshComponent* MeshComponent, FName BoneName, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, bool bUseSkeletalAnimation); // [0x4f5f658] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeControlsFromSkeletalMeshBelow
	// TArray<FName> MakeControlsFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, bool bEnabled); // [0x4f5f278] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeControlsFromSkeletalMeshAndConstraintProfileBelow
	// TArray<FName> MakeControlsFromSkeletalMeshAndConstraintProfileBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, FName ConstraintProfile, bool bEnabled); // [0x4f5eef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeControlsFromSkeletalMeshAndConstraintProfile
	// TArray<FName> MakeControlsFromSkeletalMeshAndConstraintProfile(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, FName ConstraintProfile, bool bEnabled); // [0x4f5e92c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeControlsFromSkeletalMesh
	// TArray<FName> MakeControlsFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FName>& BoneNames, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, bool bEnabled); // [0x4f5e504] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeControlsFromLimbBonesAndConstraintProfile
	// TMap<FName, FPhysicsControlNameArray> MakeControlsFromLimbBonesAndConstraintProfile(FPhysicsControlNameArray& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, FName ConstraintProfile, bool bEnabled); // [0x4f5dfe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeControlsFromLimbBones
	// TMap<FName, FPhysicsControlNameArray> MakeControlsFromLimbBones(FPhysicsControlNameArray& AllControls, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsControlType ControlType, FPhysicsControlData ControlData, FPhysicsControlSettings ControlSettings, bool bEnabled); // [0x4f5d9a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeControl
	// FName MakeControl(class UMeshComponent* ParentMeshComponent, FName ParentBoneName, class UMeshComponent* ChildMeshComponent, FName ChildBoneName, FPhysicsControlData ControlData, FPhysicsControlTarget ControlTarget, FPhysicsControlSettings ControlSettings, bool bEnabled); // [0x4f5d5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeBodyModifiersFromSkeletalMeshBelow
	// TArray<FName> MakeBodyModifiersFromSkeletalMeshBelow(class USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, bool bIncludeSelf, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, bool bUseSkeletalAnimation); // [0x4f5d204] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeBodyModifiersFromLimbBones
	// TMap<FName, FPhysicsControlNameArray> MakeBodyModifiersFromLimbBones(FPhysicsControlNameArray& AllBodyModifiers, TMap<FName, FPhysicsControlLimbBones>& LimbBones, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, bool bUseSkeletalAnimation); // [0x4f5cf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.MakeBodyModifier
	// FName MakeBodyModifier(class UMeshComponent* MeshComponent, FName BoneName, EPhysicsMovementType MovementType, TEnumAsByte<ECollisionEnabled> CollisionType, float GravityMultiplier, bool bUseSkeletalAnimation); // [0x4f5ccc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetLimbBonesFromSkeletalMesh
	// TMap<FName, FPhysicsControlLimbBones> GetLimbBonesFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FPhysicsControlLimbSetupData>& LimbSetupData); // [0x4f5c6b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlTarget
	// bool GetControlTarget(FName Name, FPhysicsControlTarget& ControlTarget);                                                 // [0x4f5c59c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlMultipliers
	// bool GetControlMultipliers(FName Name, FPhysicsControlMultipliers& ControlMultipliers);                                  // [0x4f5c430] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlEnabled
	// bool GetControlEnabled(FName Name);                                                                                      // [0x4f5c354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlData
	// bool GetControlData(FName Name, FPhysicsControlData& ControlData);                                                       // [0x4f5c244] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.GetControlAutoDisable
	// bool GetControlAutoDisable(FName Name);                                                                                  // [0x4f5c168] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyControl
	// bool DestroyControl(FName Name);                                                                                         // [0x4f5c0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyBodyModifier
	// bool DestroyBodyModifier(FName Name);                                                                                    // [0x4f5c018] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyAllControls
	// void DestroyAllControls(TArray<FName>& Names);                                                                           // [0x4f5bea8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PhysicsControl.PhysicsControlComponent.DestroyAllBodyModifiers
	// void DestroyAllBodyModifiers(TArray<FName>& Names);                                                                      // [0x4f5bd38] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PhysicsControl.PhysicsControlData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FPhysicsControlData
{ 
	float                                              LinearStrength;                                             // 0x0000   (0x0004)  
	float                                              LinearDampingRatio;                                         // 0x0004   (0x0004)  
	float                                              LinearExtraDamping;                                         // 0x0008   (0x0004)  
	float                                              MaxForce;                                                   // 0x000C   (0x0004)  
	float                                              AngularStrength;                                            // 0x0010   (0x0004)  
	float                                              AngularDampingRatio;                                        // 0x0014   (0x0004)  
	float                                              AngularExtraDamping;                                        // 0x0018   (0x0004)  
	float                                              MaxTorque;                                                  // 0x001C   (0x0004)  
};

/// Struct /Script/PhysicsControl.PhysicsControlMultipliers
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FPhysicsControlMultipliers
{ 
	FVector                                            LinearStrengthMultiplier;                                   // 0x0000   (0x000C)  
	FVector                                            LinearExtraDampingMultiplier;                               // 0x000C   (0x000C)  
	FVector                                            MaxForceMultiplier;                                         // 0x0018   (0x000C)  
	float                                              AngularStrengthMultiplier;                                  // 0x0024   (0x0004)  
	float                                              AngularExtraDampingMultiplier;                              // 0x0028   (0x0004)  
	float                                              MaxTorqueMultiplier;                                        // 0x002C   (0x0004)  
};

/// Struct /Script/PhysicsControl.PhysicsControlTarget
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FPhysicsControlTarget
{ 
	FVector                                            TargetPosition;                                             // 0x0000   (0x000C)  
	FVector                                            TargetVelocity;                                             // 0x000C   (0x000C)  
	FRotator                                           TargetOrientation;                                          // 0x0018   (0x000C)  
	FVector                                            TargetAngularVelocity;                                      // 0x0024   (0x000C)  
	bool                                               bApplyControlPointToTarget;                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0031   (0x0003)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FPhysicsControlSettings
{ 
	FVector                                            ControlPoint;                                               // 0x0000   (0x000C)  
	bool                                               bUseSkeletalAnimation;                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SkeletalAnimationVelocityMultiplier;                        // 0x0010   (0x0004)  
	bool                                               bDisableCollision;                                          // 0x0014   (0x0001)  
	bool                                               bAutoDisable;                                               // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControl
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FPhysicsControl
{ 
	class UMeshComponent*                              ParentMeshComponent;                                        // 0x0000   (0x0008)  
	FName                                              ParentBoneName;                                             // 0x0008   (0x0008)  
	class UMeshComponent*                              ChildMeshComponent;                                         // 0x0010   (0x0008)  
	FName                                              ChildBoneName;                                              // 0x0018   (0x0008)  
	FPhysicsControlData                                ControlData;                                                // 0x0020   (0x0020)  
	FPhysicsControlMultipliers                         ControlMultipliers;                                         // 0x0040   (0x0030)  
	FPhysicsControlTarget                              ControlTarget;                                              // 0x0070   (0x0034)  
	FPhysicsControlSettings                            ControlSettings;                                            // 0x00A4   (0x0018)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlNameArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPhysicsControlNameArray
{ 
	TArray<FName>                                      Names;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbBones
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPhysicsControlLimbBones
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/PhysicsControl.PhysicsControlLimbSetupData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPhysicsControlLimbSetupData
{ 
	FName                                              LimbName;                                                   // 0x0000   (0x0008)  
	FName                                              StartBone;                                                  // 0x0008   (0x0008)  
	bool                                               bIncludeParentBone;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPhysicsControlComponent) == 0x0118); // 280 bytes (0x0000F8 - 0x000118)
static_assert(sizeof(FPhysicsControlData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPhysicsControlMultipliers) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPhysicsControlTarget) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FPhysicsControlSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPhysicsControl) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FPhysicsControlNameArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPhysicsControlLimbBones) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPhysicsControlLimbSetupData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(FPhysicsControlMultipliers, LinearStrengthMultiplier) == 0x0000);
static_assert(offsetof(FPhysicsControlMultipliers, LinearExtraDampingMultiplier) == 0x000C);
static_assert(offsetof(FPhysicsControlMultipliers, MaxForceMultiplier) == 0x0018);
static_assert(offsetof(FPhysicsControlTarget, TargetPosition) == 0x0000);
static_assert(offsetof(FPhysicsControlTarget, TargetVelocity) == 0x000C);
static_assert(offsetof(FPhysicsControlTarget, TargetOrientation) == 0x0018);
static_assert(offsetof(FPhysicsControlTarget, TargetAngularVelocity) == 0x0024);
static_assert(offsetof(FPhysicsControlSettings, ControlPoint) == 0x0000);
static_assert(offsetof(FPhysicsControl, ParentMeshComponent) == 0x0000);
static_assert(offsetof(FPhysicsControl, ParentBoneName) == 0x0008);
static_assert(offsetof(FPhysicsControl, ChildMeshComponent) == 0x0010);
static_assert(offsetof(FPhysicsControl, ChildBoneName) == 0x0018);
static_assert(offsetof(FPhysicsControl, ControlData) == 0x0020);
static_assert(offsetof(FPhysicsControl, ControlMultipliers) == 0x0040);
static_assert(offsetof(FPhysicsControl, ControlTarget) == 0x0070);
static_assert(offsetof(FPhysicsControl, ControlSettings) == 0x00A4);
static_assert(offsetof(FPhysicsControlNameArray, Names) == 0x0000);
static_assert(offsetof(FPhysicsControlLimbSetupData, LimbName) == 0x0000);
static_assert(offsetof(FPhysicsControlLimbSetupData, StartBone) == 0x0008);
