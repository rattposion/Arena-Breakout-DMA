// generated header

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SGFramework

#pragma pack(push, 0x1)

/// Class /Script/FollicleConstraint.SGBadgeAnimInstance
/// Size: 0x0360 (864 bytes) (0x0002B8 - 0x000360) align 16 MaxSize: 0x0360
class USGBadgeAnimInstance : public UAnimInstance
{ 
public:
	class ASGCharacter*                                SGCharacter;                                                // 0x02B8   (0x0008)  
	bool                                               bIsCharacterMale;                                           // 0x02C0   (0x0001)  
	bool                                               bIsCharacterInLobby;                                        // 0x02C1   (0x0001)  
	bool                                               bShouldUpdateMorphTarget;                                   // 0x02C2   (0x0001)  
	bool                                               bIsCaptureActor;                                            // 0x02C3   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class USkeletalMeshComponent*                      OwningComponent;                                            // 0x02C8   (0x0008)  
	class ASGInventory*                                AttachInventory;                                            // 0x02D0   (0x0008)  
	class USkeletalMeshComponent*                      AttachComponent;                                            // 0x02D8   (0x0008)  
	class USkeletalMeshComponent*                      AttachRealComponent;                                        // 0x02E0   (0x0008)  
	class USGInventoryEquipMeshComponent*              AttachEquipComponent;                                       // 0x02E8   (0x0008)  
	TArray<class ASGInventory*>                        BadgeInventories;                                           // 0x02F0   (0x0010)  
	SDK_UNDEFINED(1,3842) /* ESGBadgeAttach */         __um(BadgeAttachType);                                      // 0x0300   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0301   (0x000F)  MISSED
	FTransform                                         ExtraTransform;                                             // 0x0310   (0x0030)  
	class USkeletalMesh*                               CurrentMesh;                                                // 0x0340   (0x0008)  
	FVector                                            CurrentLocation;                                            // 0x0348   (0x000C)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0354   (0x000C)  MISSED


	/// Functions
	// Function /Script/FollicleConstraint.SGBadgeAnimInstance.GetSelfBadgeInventory
	// class ASGInventory* GetSelfBadgeInventory();                                                                             // [0x50198e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FollicleConstraint.SGBadgeAnimInstance.GetBadgeAttachComponent
	// class USkeletalMeshComponent* GetBadgeAttachComponent();                                                                 // [0x50198c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FollicleConstraint.SGBadgeAnimInstance.GetBadgeAttachAvatarType
	// ESGBadgeAttach GetBadgeAttachAvatarType();                                                                               // [0x50198a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FollicleConstraint.BoneWeightData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FBoneWeightData
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	float                                              Weight;                                                     // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         BindPose;                                                   // 0x0010   (0x0030)  
};

/// Struct /Script/FollicleConstraint.AnimNode_FollicleBoneDriver
/// Size: 0x02C0 (704 bytes) (0x0000D0 - 0x0002C0) align 16 MaxSize: 0x02C0
struct FAnimNode_FollicleBoneDriver : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00D0   (0x0010)  
	bool                                               bUseSelfMesh;                                               // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	int32_t                                            TargetSectionIndex;                                         // 0x00E4   (0x0004)  
	TArray<FBoneReference>                             ExcludedBones;                                              // 0x00E8   (0x0010)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      SourceMeshComponent;                                        // 0x00F8   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      SampleMeshComponent;                                        // 0x0100   (0x0008)  
	bool                                               bCalculateMorphTarget;                                      // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FTransform                                         AdditionalOffset;                                           // 0x0110   (0x0030)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      OwningComponent;                                            // 0x0140   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      CachedSourceMeshComponent;                                  // 0x0148   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      CachedSampleMeshComponent;                                  // 0x0150   (0x0008)  
	TWeakObjectPtr<class USkeletalMesh*>               CachedSourceMeshAsset;                                      // 0x0158   (0x0008)  
	TWeakObjectPtr<class USkeletalMesh*>               CachedSampleMeshAsset;                                      // 0x0160   (0x0008)  
	bool                                               bInitialized;                                               // 0x0168   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0169   (0x0007)  MISSED
	TArray<FBoneWeightData>                            BoneWeights;                                                // 0x0170   (0x0010)  
	TMap<int32_t, FTransform>                          BoneBindPoses;                                              // 0x0180   (0x0050)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x01D0   (0x0050)  MISSED
	FVector                                            OriginalVertexNormal;                                       // 0x0220   (0x000C)  
	uint32_t                                           NearestVertexIndex;                                         // 0x022C   (0x0004)  
	FVector                                            InitialTargetBoneComponentLocation;                         // 0x0230   (0x000C)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	FQuat                                              InitialTargetBoneComponentRotation;                         // 0x0240   (0x0010)  
	bool                                               bAttachToSocket;                                            // 0x0250   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0251   (0x0003)  MISSED
	int32_t                                            ParentBoneIndex;                                            // 0x0254   (0x0004)  
	class USkeletalMeshSocket*                         ParentMeshSocket;                                           // 0x0258   (0x0008)  
	FTransform                                         OwningCompRelativeTransform;                                // 0x0260   (0x0030)  
	FTransform                                         MeshSocketTransform;                                        // 0x0290   (0x0030)  
};

#pragma pack(pop)


static_assert(sizeof(USGBadgeAnimInstance) == 0x0360); // 864 bytes (0x0002B8 - 0x000360)
static_assert(sizeof(FBoneWeightData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FAnimNode_FollicleBoneDriver) == 0x02C0); // 704 bytes (0x0000D0 - 0x0002C0)
static_assert(offsetof(USGBadgeAnimInstance, SGCharacter) == 0x02B8);
static_assert(offsetof(USGBadgeAnimInstance, OwningComponent) == 0x02C8);
static_assert(offsetof(USGBadgeAnimInstance, AttachInventory) == 0x02D0);
static_assert(offsetof(USGBadgeAnimInstance, AttachComponent) == 0x02D8);
static_assert(offsetof(USGBadgeAnimInstance, AttachRealComponent) == 0x02E0);
static_assert(offsetof(USGBadgeAnimInstance, AttachEquipComponent) == 0x02E8);
static_assert(offsetof(USGBadgeAnimInstance, BadgeInventories) == 0x02F0);
static_assert(offsetof(USGBadgeAnimInstance, ExtraTransform) == 0x0310);
static_assert(offsetof(USGBadgeAnimInstance, CurrentMesh) == 0x0340);
static_assert(offsetof(USGBadgeAnimInstance, CurrentLocation) == 0x0348);
static_assert(offsetof(FBoneWeightData, BindPose) == 0x0010);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, TargetBone) == 0x00D0);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, ExcludedBones) == 0x00E8);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, SourceMeshComponent) == 0x00F8);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, SampleMeshComponent) == 0x0100);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, AdditionalOffset) == 0x0110);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, OwningComponent) == 0x0140);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, CachedSourceMeshComponent) == 0x0148);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, CachedSampleMeshComponent) == 0x0150);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, CachedSourceMeshAsset) == 0x0158);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, CachedSampleMeshAsset) == 0x0160);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, BoneWeights) == 0x0170);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, BoneBindPoses) == 0x0180);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, OriginalVertexNormal) == 0x0220);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, InitialTargetBoneComponentLocation) == 0x0230);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, InitialTargetBoneComponentRotation) == 0x0240);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, ParentMeshSocket) == 0x0258);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, OwningCompRelativeTransform) == 0x0260);
static_assert(offsetof(FAnimNode_FollicleBoneDriver, MeshSocketTransform) == 0x0290);
