// generated header

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ProceduralMeshComponent
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/SpinePlugin.SpineAtlasAsset
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class USpineAtlasAsset : public UPrimaryDataAsset
{ 
public:
	TArray<class UTexture2D*>                          atlasPages;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
	FString                                            rawData;                                                    // 0x0048   (0x0010)  
	FName                                              atlasFileName;                                              // 0x0058   (0x0008)  
};

/// Class /Script/SpinePlugin.SpineBoneDriverComponent
/// Size: 0x02A0 (672 bytes) (0x000270 - 0x0002A0) align 16 MaxSize: 0x02A0
class USpineBoneDriverComponent : public USceneComponent
{ 
public:
	class AActor*                                      Target;                                                     // 0x0270   (0x0008)  
	FString                                            BoneName;                                                   // 0x0278   (0x0010)  
	bool                                               UseComponentTransform;                                      // 0x0288   (0x0001)  
	bool                                               UsePosition;                                                // 0x0289   (0x0001)  
	bool                                               UseRotation;                                                // 0x028A   (0x0001)  
	bool                                               UseScale;                                                   // 0x028B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x14];                                      // 0x028C   (0x0014)  MISSED


	/// Functions
	// Function /Script/SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
	// void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);                                                // [0x61d4438] Final|Native|Protected 
};

/// Class /Script/SpinePlugin.SpineBoneFollowerComponent
/// Size: 0x0290 (656 bytes) (0x000270 - 0x000290) align 16 MaxSize: 0x0290
class USpineBoneFollowerComponent : public USceneComponent
{ 
public:
	class AActor*                                      Target;                                                     // 0x0270   (0x0008)  
	FString                                            BoneName;                                                   // 0x0278   (0x0010)  
	bool                                               UseComponentTransform;                                      // 0x0288   (0x0001)  
	bool                                               UsePosition;                                                // 0x0289   (0x0001)  
	bool                                               UseRotation;                                                // 0x028A   (0x0001)  
	bool                                               UseScale;                                                   // 0x028B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x028C   (0x0004)  MISSED
};

/// Class /Script/SpinePlugin.TrackEntry
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UTrackEntry : public UObject
{ 
public:
	SDK_UNDEFINED(16,5164) /* FMulticastInlineDelegate */ __um(animationStart);                                    // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,5165) /* FMulticastInlineDelegate */ __um(AnimationInterrupt);                                // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,5166) /* FMulticastInlineDelegate */ __um(AnimationEvent);                                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,5167) /* FMulticastInlineDelegate */ __um(AnimationComplete);                                 // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,5168) /* FMulticastInlineDelegate */ __um(animationEnd);                                      // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,5169) /* FMulticastInlineDelegate */ __um(AnimationDispose);                                  // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpinePlugin.TrackEntry.SetTrackTime
	// void SetTrackTime(float trackTime);                                                                                      // [0x61d77e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetTrackEnd
	// void SetTrackEnd(float trackEnd);                                                                                        // [0x61d774c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetTimeScale
	// void SetTimeScale(float TimeScale);                                                                                      // [0x61d7628] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetMixTime
	// void SetMixTime(float mixTime);                                                                                          // [0x61d6b24] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetMixDuration
	// void SetMixDuration(float mixDuration);                                                                                  // [0x61d6a88] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetLoop
	// void SetLoop(bool Loop);                                                                                                 // [0x61d69f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetEventThreshold
	// void SetEventThreshold(float eventThreshold);                                                                            // [0x61d6958] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetDrawOrderThreshold
	// void SetDrawOrderThreshold(float drawOrderThreshold);                                                                    // [0x61d66d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetDelay
	// void SetDelay(float Delay);                                                                                              // [0x61d6638] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAttachmentThreshold
	// void SetAttachmentThreshold(float attachmentThreshold);                                                                  // [0x61d62c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAnimationStart
	// void SetAnimationStart(float animationStart);                                                                            // [0x61d5fc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAnimationLast
	// void SetAnimationLast(float animationLast);                                                                              // [0x61d5f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAnimationEnd
	// void SetAnimationEnd(float animationEnd);                                                                                // [0x61d5e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.SetAlpha
	// void SetAlpha(float Alpha);                                                                                              // [0x61d5b44] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.isValidAnimation
	// bool isValidAnimation();                                                                                                 // [0x61d7af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTrackTime
	// float GetTrackTime();                                                                                                    // [0x61d5410] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTrackIndex
	// int32_t GetTrackIndex();                                                                                                 // [0x61d53e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTrackEnd
	// float GetTrackEnd();                                                                                                     // [0x61d53bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetTimeScale
	// float GetTimeScale();                                                                                                    // [0x61d5390] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetMixTime
	// float GetMixTime();                                                                                                      // [0x61d4fc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetMixDuration
	// float GetMixDuration();                                                                                                  // [0x61d4f98] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetLoop
	// bool GetLoop();                                                                                                          // [0x61d4f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetEventThreshold
	// float GetEventThreshold();                                                                                               // [0x61d4f44] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetDrawOrderThreshold
	// float GetDrawOrderThreshold();                                                                                           // [0x61d4f18] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetDelay
	// float GetDelay();                                                                                                        // [0x61d4eec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAttachmentThreshold
	// float GetAttachmentThreshold();                                                                                          // [0x61d4a24] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAnimationStart
	// float GetAnimationStart();                                                                                               // [0x61d48a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.getAnimationName
	// FString getAnimationName();                                                                                              // [0x61d7a08] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAnimationLast
	// float GetAnimationLast();                                                                                                // [0x61d4874] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAnimationEnd
	// float GetAnimationEnd();                                                                                                 // [0x61d4848] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.getAnimationDuration
	// float getAnimationDuration();                                                                                            // [0x61d79d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.TrackEntry.GetAlpha
	// float GetAlpha();                                                                                                        // [0x61d4694] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpinePlugin.SpineSkeletonComponent
/// Size: 0x0150 (336 bytes) (0x0000F8 - 0x000150) align 8 MaxSize: 0x0150
class USpineSkeletonComponent : public UActorComponent
{ 
public:
	class USpineAtlasAsset*                            Atlas;                                                      // 0x00F8   (0x0008)  
	class USpineSkeletonDataAsset*                     SkeletonData;                                               // 0x0100   (0x0008)  
	SDK_UNDEFINED(16,5170) /* FMulticastInlineDelegate */ __um(BeforeUpdateWorldTransform);                        // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,5171) /* FMulticastInlineDelegate */ __um(AfterUpdateWorldTransform);                         // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0128   (0x0028)  MISSED


	/// Functions
	// Function /Script/SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	// void UpdateWorldTransform();                                                                                             // [0x61d7968] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetToSetupPose
	// void SetToSetupPose();                                                                                                   // [0x61d76c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
	// void SetSlotsToSetupPose();                                                                                              // [0x61d7480] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSlotColor
	// void SetSlotColor(FString SlotName, FColor Color);                                                                       // [0x61d7374] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSkins
	// bool SetSkins(TArray<FString>& SkinNames);                                                                               // [0x61d7204] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetSkin
	// bool SetSkin(FString SkinName);                                                                                          // [0x61d7008] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetScaleY
	// void SetScaleY(float ScaleY);                                                                                            // [0x61d6ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetScaleX
	// void SetScaleX(float ScaleX);                                                                                            // [0x61d6d98] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
	// void SetBoneWorldPosition(FString BoneName, FVector& position);                                                          // [0x61d6490] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
	// void SetBonesToSetupPose();                                                                                              // [0x61d65c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.SetAttachment
	// bool SetAttachment(FString SlotName, FString AttachmentName);                                                            // [0x61d6060] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasSlot
	// bool HasSlot(FString SlotName);                                                                                          // [0x61d5948] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasSkin
	// bool HasSkin(FString SkinName);                                                                                          // [0x61d57c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasBone
	// bool HasBone(FString BoneName);                                                                                          // [0x61d5638] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.HasAnimation
	// bool HasAnimation(FString AnimationName);                                                                                // [0x61d543c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetSlots
	// void GetSlots(TArray<FString>& Slots);                                                                                   // [0x61d51e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetSkins
	// void GetSkins(TArray<FString>& Skins);                                                                                   // [0x61d5090] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetScaleY
	// float GetScaleY();                                                                                                       // [0x61d5040] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetScaleX
	// float GetScaleX();                                                                                                       // [0x61d4ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
	// FTransform GetBoneWorldTransform(FString BoneName);                                                                      // [0x61d4b20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetBones
	// void GetBones(TArray<FString>& Bones);                                                                                   // [0x61d4c44] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.GetAnimations
	// void GetAnimations(TArray<FString>& Animations);                                                                         // [0x61d48cc] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineSkeletonComponent.getAnimationDuration
	// float getAnimationDuration(FString AnimationName);                                                                       // [0x61d46c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpinePlugin.SpineSkeletonAnimationComponent
/// Size: 0x0250 (592 bytes) (0x000150 - 0x000250) align 8 MaxSize: 0x0250
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{ 
public:
	SDK_UNDEFINED(16,5172) /* FMulticastInlineDelegate */ __um(animationStart);                                    // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,5173) /* FMulticastInlineDelegate */ __um(AnimationInterrupt);                                // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,5174) /* FMulticastInlineDelegate */ __um(AnimationEvent);                                    // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,5175) /* FMulticastInlineDelegate */ __um(AnimationComplete);                                 // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,5176) /* FMulticastInlineDelegate */ __um(animationEnd);                                      // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,5177) /* FMulticastInlineDelegate */ __um(AnimationDispose);                                  // 0x01A0   (0x0010)  
	FString                                            PreviewAnimation;                                           // 0x01B0   (0x0010)  
	FString                                            PreviewSkin;                                                // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01D0   (0x0008)  MISSED
	SDK_UNDEFINED(80,5178) /* TSet<UTrackEntry*> */    __um(trackEntries);                                         // 0x01D8   (0x0050)  
	bool                                               bAutoPlaying;                                               // 0x0228   (0x0001)  
	unsigned char                                      UnknownData01_7[0x27];                                      // 0x0229   (0x0027)  MISSED


	/// Functions
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	// void SetTimeScale(float TimeScale);                                                                                      // [0x61d74f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
	// void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);                                                         // [0x61d6bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
	// class UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);                                             // [0x61d6768] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
	// void SetAutoPlay(bool bInAutoPlays);                                                                                     // [0x61d6360] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
	// class UTrackEntry* SetAnimation(int32_t TrackIndex, FString AnimationName, bool Loop);                                   // [0x61d5be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
	// float GetTimeScale();                                                                                                    // [0x61d5340] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
	// class UTrackEntry* GetCurrent(int32_t TrackIndex);                                                                       // [0x61d4d9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
	// void ClearTracks();                                                                                                      // [0x61d4624] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
	// void ClearTrack(int32_t TrackIndex);                                                                                     // [0x61d44d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
	// class UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);                                // [0x61d41b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
	// class UTrackEntry* AddAnimation(int32_t TrackIndex, FString AnimationName, bool Loop, float Delay);                      // [0x61d3e58] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SpinePlugin.SpineAnimationStateMixData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSpineAnimationStateMixData
{ 
	FString                                            From;                                                       // 0x0000   (0x0010)  
	FString                                            To;                                                         // 0x0010   (0x0010)  
	float                                              Mix;                                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/SpinePlugin.SpineSkeletonDataAsset
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class USpineSkeletonDataAsset : public UObject
{ 
public:
	float                                              DefaultMix;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FSpineAnimationStateMixData>                MixData;                                                    // 0x0030   (0x0010)  
	TArray<FString>                                    Bones;                                                      // 0x0040   (0x0010)  
	TArray<FString>                                    Slots;                                                      // 0x0050   (0x0010)  
	TArray<FString>                                    Skins;                                                      // 0x0060   (0x0010)  
	TArray<FString>                                    Animations;                                                 // 0x0070   (0x0010)  
	TArray<FString>                                    Events;                                                     // 0x0080   (0x0010)  
	TArray<char>                                       rawData;                                                    // 0x0090   (0x0010)  
	FName                                              skeletonDataFileName;                                       // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x00A8   (0x0050)  MISSED
};

/// Class /Script/SpinePlugin.SpineSkeletonRendererComponent
/// Size: 0x0850 (2128 bytes) (0x000588 - 0x000850) align 16 MaxSize: 0x0850
class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{ 
public:
	class UMaterialInterface*                          NormalBlendMaterial;                                        // 0x0588   (0x0008)  
	class UMaterialInterface*                          AdditiveBlendMaterial;                                      // 0x0590   (0x0008)  
	class UMaterialInterface*                          MultiplyBlendMaterial;                                      // 0x0598   (0x0008)  
	class UMaterialInterface*                          ScreenBlendMaterial;                                        // 0x05A0   (0x0008)  
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                  // 0x05A8   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                                // 0x05B8   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                                // 0x05C8   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                  // 0x05D8   (0x0010)  
	float                                              DepthOffset;                                                // 0x05E8   (0x0004)  
	FName                                              TextureParameterName;                                       // 0x05EC   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x05F4   (0x0010)  
	bool                                               bCreateCollision;                                           // 0x0604   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F3];                                     // 0x0605   (0x01F3)  MISSED
	TArray<FVector>                                    Vertices;                                                   // 0x07F8   (0x0010)  
	TArray<int32_t>                                    Indices;                                                    // 0x0808   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0818   (0x0010)  
	TArray<FVector2D>                                  UVs;                                                        // 0x0828   (0x0010)  
	TArray<FColor>                                     Colors;                                                     // 0x0838   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0848   (0x0008)  MISSED
};

/// Class /Script/SpinePlugin.SpineWidget
/// Size: 0x06A8 (1704 bytes) (0x000130 - 0x0006A8) align 8 MaxSize: 0x06A8
class USpineWidget : public UWidget
{ 
public:
	FString                                            InitialSkin;                                                // 0x0130   (0x0010)  
	class USpineAtlasAsset*                            Atlas;                                                      // 0x0140   (0x0008)  
	class USpineSkeletonDataAsset*                     SkeletonData;                                               // 0x0148   (0x0008)  
	class UMaterialInterface*                          NormalBlendMaterial;                                        // 0x0150   (0x0008)  
	class UMaterialInterface*                          AdditiveBlendMaterial;                                      // 0x0158   (0x0008)  
	class UMaterialInterface*                          MultiplyBlendMaterial;                                      // 0x0160   (0x0008)  
	class UMaterialInterface*                          ScreenBlendMaterial;                                        // 0x0168   (0x0008)  
	FName                                              TextureParameterName;                                       // 0x0170   (0x0008)  
	float                                              DepthOffset;                                                // 0x0178   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x017C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	FSlateBrush                                        Brush;                                                      // 0x0190   (0x0090)  
	SDK_UNDEFINED(16,5179) /* FMulticastInlineDelegate */ __um(BeforeUpdateWorldTransform);                        // 0x0220   (0x0010)  
	SDK_UNDEFINED(16,5180) /* FMulticastInlineDelegate */ __um(AfterUpdateWorldTransform);                         // 0x0230   (0x0010)  
	SDK_UNDEFINED(16,5181) /* FMulticastInlineDelegate */ __um(animationStart);                                    // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,5182) /* FMulticastInlineDelegate */ __um(AnimationInterrupt);                                // 0x0250   (0x0010)  
	SDK_UNDEFINED(16,5183) /* FMulticastInlineDelegate */ __um(AnimationEvent);                                    // 0x0260   (0x0010)  
	SDK_UNDEFINED(16,5184) /* FMulticastInlineDelegate */ __um(AnimationComplete);                                 // 0x0270   (0x0010)  
	SDK_UNDEFINED(16,5185) /* FMulticastInlineDelegate */ __um(animationEnd);                                      // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,5186) /* FMulticastInlineDelegate */ __um(AnimationDispose);                                  // 0x0290   (0x0010)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x02A0   (0x0040)  MISSED
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                  // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x02F0   (0x0050)  MISSED
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                                // 0x0340   (0x0010)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x0350   (0x0050)  MISSED
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                                // 0x03A0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x50];                                      // 0x03B0   (0x0050)  MISSED
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                  // 0x0400   (0x0010)  
	unsigned char                                      UnknownData05_6[0x240];                                     // 0x0410   (0x0240)  MISSED
	SDK_UNDEFINED(80,5187) /* TSet<UTrackEntry*> */    __um(trackEntries);                                         // 0x0650   (0x0050)  
	bool                                               bAutoPlaying;                                               // 0x06A0   (0x0001)  
	unsigned char                                      UnknownData06_7[0x7];                                       // 0x06A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/SpinePlugin.SpineWidget.UpdateWorldTransform
	// void UpdateWorldTransform();                                                                                             // [0x61d79a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.Tick
	// void Tick(float DeltaTime, bool CallDelegates);                                                                          // [0x61d787c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetToSetupPose
	// void SetToSetupPose();                                                                                                   // [0x61d7708] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetTimeScale
	// void SetTimeScale(float TimeScale);                                                                                      // [0x61d758c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetSlotsToSetupPose
	// void SetSlotsToSetupPose();                                                                                              // [0x61d74b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetSkins
	// bool SetSkins(TArray<FString>& SkinNames);                                                                               // [0x61d72bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetSkin
	// bool SetSkin(FString SkinName);                                                                                          // [0x61d70cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetScaleY
	// void SetScaleY(float ScaleY);                                                                                            // [0x61d6f6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetScaleX
	// void SetScaleX(float ScaleX);                                                                                            // [0x61d6e34] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetPlaybackTime
	// void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);                                                         // [0x61d6cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetEmptyAnimation
	// class UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration);                                             // [0x61d6860] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetBonesToSetupPose
	// void SetBonesToSetupPose();                                                                                              // [0x61d6600] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetAutoPlay
	// void SetAutoPlay(bool bInAutoPlays);                                                                                     // [0x61d63f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetAttachment
	// bool SetAttachment(FString SlotName, FString AttachmentName);                                                            // [0x61d6194] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.SetAnimation
	// class UTrackEntry* SetAnimation(int32_t TrackIndex, FString AnimationName, bool Loop);                                   // [0x61d5d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasSlot
	// bool HasSlot(FString SlotName);                                                                                          // [0x61d5a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasSkin
	// bool HasSkin(FString SkinName);                                                                                          // [0x61d5884] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasBone
	// bool HasBone(FString BoneName);                                                                                          // [0x61d56fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.HasAnimation
	// bool HasAnimation(FString AnimationName);                                                                                // [0x61d5500] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetTimeScale
	// float GetTimeScale();                                                                                                    // [0x61d5368] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetSlots
	// void GetSlots(TArray<FString>& Slots);                                                                                   // [0x61d5294] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.GetSkins
	// void GetSkins(TArray<FString>& Skins);                                                                                   // [0x61d513c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.GetScaleY
	// float GetScaleY();                                                                                                       // [0x61d5068] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetScaleX
	// float GetScaleX();                                                                                                       // [0x61d5018] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetCurrent
	// class UTrackEntry* GetCurrent(int32_t TrackIndex);                                                                       // [0x61d4e44] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetBoneTransform
	// FTransform GetBoneTransform(FString BoneName);                                                                           // [0x61d4a50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.GetBones
	// void GetBones(TArray<FString>& Bones);                                                                                   // [0x61d4cf0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.GetAnimations
	// void GetAnimations(TArray<FString>& Animations);                                                                         // [0x61d4978] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SpinePlugin.SpineWidget.getAnimationDuration
	// float getAnimationDuration(FString AnimationName);                                                                       // [0x61d4784] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.ClearTracks
	// void ClearTracks();                                                                                                      // [0x61d465c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.ClearTrack
	// void ClearTrack(int32_t TrackIndex);                                                                                     // [0x61d457c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.AddEmptyAnimation
	// class UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay);                                // [0x61d42f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpinePlugin.SpineWidget.AddAnimation
	// class UTrackEntry* AddAnimation(int32_t TrackIndex, FString AnimationName, bool Loop, float Delay);                      // [0x61d4008] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SpinePlugin.SpineEvent
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSpineEvent
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            StringValue;                                                // 0x0010   (0x0010)  
	int32_t                                            IntValue;                                                   // 0x0020   (0x0004)  
	float                                              FloatValue;                                                 // 0x0024   (0x0004)  
	float                                              Time;                                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USpineAtlasAsset) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(USpineBoneDriverComponent) == 0x02A0); // 672 bytes (0x000270 - 0x0002A0)
static_assert(sizeof(USpineBoneFollowerComponent) == 0x0290); // 656 bytes (0x000270 - 0x000290)
static_assert(sizeof(UTrackEntry) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(USpineSkeletonComponent) == 0x0150); // 336 bytes (0x0000F8 - 0x000150)
static_assert(sizeof(USpineSkeletonAnimationComponent) == 0x0250); // 592 bytes (0x000150 - 0x000250)
static_assert(sizeof(FSpineAnimationStateMixData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USpineSkeletonDataAsset) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(USpineSkeletonRendererComponent) == 0x0850); // 2128 bytes (0x000588 - 0x000850)
static_assert(sizeof(USpineWidget) == 0x06A8); // 1704 bytes (0x000130 - 0x0006A8)
static_assert(sizeof(FSpineEvent) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(USpineAtlasAsset, atlasPages) == 0x0030);
static_assert(offsetof(USpineAtlasAsset, rawData) == 0x0048);
static_assert(offsetof(USpineAtlasAsset, atlasFileName) == 0x0058);
static_assert(offsetof(USpineBoneDriverComponent, Target) == 0x0270);
static_assert(offsetof(USpineBoneDriverComponent, BoneName) == 0x0278);
static_assert(offsetof(USpineBoneFollowerComponent, Target) == 0x0270);
static_assert(offsetof(USpineBoneFollowerComponent, BoneName) == 0x0278);
static_assert(offsetof(USpineSkeletonComponent, Atlas) == 0x00F8);
static_assert(offsetof(USpineSkeletonComponent, SkeletonData) == 0x0100);
static_assert(offsetof(USpineSkeletonAnimationComponent, PreviewAnimation) == 0x01B0);
static_assert(offsetof(USpineSkeletonAnimationComponent, PreviewSkin) == 0x01C0);
static_assert(offsetof(FSpineAnimationStateMixData, From) == 0x0000);
static_assert(offsetof(FSpineAnimationStateMixData, To) == 0x0010);
static_assert(offsetof(USpineSkeletonDataAsset, MixData) == 0x0030);
static_assert(offsetof(USpineSkeletonDataAsset, Bones) == 0x0040);
static_assert(offsetof(USpineSkeletonDataAsset, Slots) == 0x0050);
static_assert(offsetof(USpineSkeletonDataAsset, Skins) == 0x0060);
static_assert(offsetof(USpineSkeletonDataAsset, Animations) == 0x0070);
static_assert(offsetof(USpineSkeletonDataAsset, Events) == 0x0080);
static_assert(offsetof(USpineSkeletonDataAsset, rawData) == 0x0090);
static_assert(offsetof(USpineSkeletonDataAsset, skeletonDataFileName) == 0x00A0);
static_assert(offsetof(USpineSkeletonRendererComponent, NormalBlendMaterial) == 0x0588);
static_assert(offsetof(USpineSkeletonRendererComponent, AdditiveBlendMaterial) == 0x0590);
static_assert(offsetof(USpineSkeletonRendererComponent, MultiplyBlendMaterial) == 0x0598);
static_assert(offsetof(USpineSkeletonRendererComponent, ScreenBlendMaterial) == 0x05A0);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasNormalBlendMaterials) == 0x05A8);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasAdditiveBlendMaterials) == 0x05B8);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasMultiplyBlendMaterials) == 0x05C8);
static_assert(offsetof(USpineSkeletonRendererComponent, atlasScreenBlendMaterials) == 0x05D8);
static_assert(offsetof(USpineSkeletonRendererComponent, TextureParameterName) == 0x05EC);
static_assert(offsetof(USpineSkeletonRendererComponent, Color) == 0x05F4);
static_assert(offsetof(USpineSkeletonRendererComponent, Vertices) == 0x07F8);
static_assert(offsetof(USpineSkeletonRendererComponent, Indices) == 0x0808);
static_assert(offsetof(USpineSkeletonRendererComponent, Normals) == 0x0818);
static_assert(offsetof(USpineSkeletonRendererComponent, UVs) == 0x0828);
static_assert(offsetof(USpineSkeletonRendererComponent, Colors) == 0x0838);
static_assert(offsetof(USpineWidget, InitialSkin) == 0x0130);
static_assert(offsetof(USpineWidget, Atlas) == 0x0140);
static_assert(offsetof(USpineWidget, SkeletonData) == 0x0148);
static_assert(offsetof(USpineWidget, NormalBlendMaterial) == 0x0150);
static_assert(offsetof(USpineWidget, AdditiveBlendMaterial) == 0x0158);
static_assert(offsetof(USpineWidget, MultiplyBlendMaterial) == 0x0160);
static_assert(offsetof(USpineWidget, ScreenBlendMaterial) == 0x0168);
static_assert(offsetof(USpineWidget, TextureParameterName) == 0x0170);
static_assert(offsetof(USpineWidget, Color) == 0x017C);
static_assert(offsetof(USpineWidget, Brush) == 0x0190);
static_assert(offsetof(USpineWidget, atlasNormalBlendMaterials) == 0x02E0);
static_assert(offsetof(USpineWidget, atlasAdditiveBlendMaterials) == 0x0340);
static_assert(offsetof(USpineWidget, atlasMultiplyBlendMaterials) == 0x03A0);
static_assert(offsetof(USpineWidget, atlasScreenBlendMaterials) == 0x0400);
static_assert(offsetof(FSpineEvent, Name) == 0x0000);
static_assert(offsetof(FSpineEvent, StringValue) == 0x0010);
